int sum_variables()
{
    int a[100] = {0};
    int sum = 0;
    int i = 0;
    for (i = 0; i <= 100; i++)
    {
        sum += a[i];
    }
    return sum;
}