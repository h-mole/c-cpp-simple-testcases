#include <stdio.h>
short run()
{
    short a = 0;
    short b = 10000;
    short c = 0;
    scanf("%hd", &a); // 读取一个short类型的数据
    if (a > 3)
    {
        c = a * b;
    }
    return c;
}