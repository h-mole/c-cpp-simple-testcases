#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t a = 100;  // 定义一个无符号8位整数a，值为100
    uint8_t b = 200;  // 定义一个无符号8位整数b，值为200

    // 进行减法操作
    uint8_t result = a - b;

    // 输出结果
    printf("The result of %u - %u is %u\n", a, b, result);

    return 0;
}
