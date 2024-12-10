#include <iostream>

int func()
{
    int a = 10; // 定义变量a
    int b = 20; // 定义变量b
    int c = 30; // 定义变量c
    int d = 40; // 定义变量d
    int e = 50; // 定义变量e

    // 使用变量a和b进行一些计算
    if (a > b)
    {
        std::cout << "a is greater than b" << std::endl;
    }
    else
    {
        std::cout << "b is greater than or equal to a" << std::endl;
    }
    // 变量c, d, e在整个main函数中均未使用

    return 0;
}
