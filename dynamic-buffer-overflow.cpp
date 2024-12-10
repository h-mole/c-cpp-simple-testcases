#include <stdlib.h>
class MyClassSum
{
public:
    int *allocate_memory(int);
    int sum_variables();
};

int MyClassSum::sum_variables()
{
    int *a = (int *)malloc(100 * sizeof(int));
    int sum = 0;
    int i = 0;
    for (i = 0; i <= 100; i++)
    {
        sum += a[i];
    }
    free(a);
    return sum;
}
