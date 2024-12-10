#include <stdlib.h>

int memory_not_free(int data)
{
    int *p = (int *)malloc(sizeof(int));
    if (data > -10)
    {
        free(p);
    }
    return 0;
}

int main()
{
    int a=-20;
    memory_not_free(a);
    memory_not_free(a);
}