#include <stdlib.h>

int memory_not_free(int data, int data2)
{
    int *p = (int *)malloc(sizeof(int));
    if (data > -10)
    {
        free(p);
    }

    free(p);

    return 0;
}
