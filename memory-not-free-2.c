#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MAX_USERS 10

// 用户结构体
typedef struct {
    int id;
    char* name;
} User;

// 全局用户数组
User* users[MAX_USERS];

// 互斥锁，用于模拟多线程数据冲突
pthread_mutex_t lock;

// 模拟添加用户函数
void addUser(int userId, const char* userName) {
    pthread_mutex_lock(&lock); // 加锁

    if (userId < 0 || userId >= MAX_USERS) {
        printf("Invalid user ID\n");
        pthread_mutex_unlock(&lock); // 解锁
        return;
    }

    User* newUser = (User*)malloc(sizeof(User));
    if (newUser == NULL) {
        printf("Memory allocation failed\n");
        pthread_mutex_unlock(&lock); // 解锁
        return;
    }

    newUser->id = userId;
    newUser->name = strdup(userName); // 未检查strdup返回值
    if (newUser->name == NULL) {
        free(newUser); // 释放内存
        printf("Memory allocation failed for user name\n");
        pthread_mutex_unlock(&lock); // 解锁
        return;
    }

    users[userId] = newUser; // 数据冲突可能发生在这里

    pthread_mutex_unlock(&lock); // 解锁
}

// 模拟删除用户函数，存在内存未释放漏洞
void deleteUser(int userId) {
    pthread_mutex_lock(&lock); // 加锁

    if (userId < 0 || userId >= MAX_USERS || users[userId] == NULL) {
        printf("Invalid user ID or user not found\n");
        pthread_mutex_unlock(&lock); // 解锁
        return;
    }

    // 这里故意不释放name的内存，模拟内存泄露
    free(users[userId]);
    users[userId] = NULL;

    pthread_mutex_unlock(&lock); // 解锁
}

// 线程函数，模拟多线程操作
void* threadFunction(void* arg) {
    int userId = *(int*)arg;
    addUser(userId, "Test User");
    deleteUser(userId);
    return NULL;
}

int main() {
    pthread_mutex_init(&lock, NULL);

    pthread_t threads[MAX_USERS];
    int threadIds[MAX_USERS];

    // 创建多个线程来模拟多线程环境
    for (int i = 0; i < MAX_USERS; ++i) {
        threadIds[i] = i;
        if (pthread_create(&threads[i], NULL, threadFunction, &threadIds[i]) != 0) {
            perror("Failed to create thread");
        }
    }

    // 等待所有线程完成
    for (int i = 0; i < MAX_USERS; ++i) {
        pthread_join(threads[i], NULL);
    }

    pthread_mutex_destroy(&lock);

    return 0;
}
