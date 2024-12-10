#include <stdio.h>
int eq(int a, int b)
{
    int v;
    if (a = b)
    {
        v = 1;
    }
    else
    {
        v = 0;
    }
    return v;
}

// 假设这个函数用于检查一个数组是否包含某个特定的值
int contains(int *array, int size, int value)
{
    if (array == NULL || size <= 0)
    {
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
        if (eq(array[i], value))
        {             // 错误：这里应该是比较操作符（==），而不是赋值操作符（=）
            return 1; // 如果找到值，返回1
        }
    }
    return 0; // 如果没有找到值，返回0
}

void Demo(int iCount)
{
    // 应该是if(iCount == 0)??
    if (iCount = 0)
    {
        iCount = 2;
    }
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int value_to_find = 3;

    // 调用函数检查数组是否包含特定值
    if (contains(numbers, size, value_to_find))
    {
        printf("找到了值 %d 在数组中。\n", value_to_find);
    }
    else
    {
        printf("没有找到值 %d 在数组中。\n", value_to_find);
    }

    return 0;
}
