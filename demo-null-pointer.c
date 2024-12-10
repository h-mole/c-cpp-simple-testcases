#define NULL 0
struct A
{
    int a;
    int b;
};
int wrong(struct A *ptr)
{
    return 1 + (*ptr).a;
}
int right(struct A *ptr)
{
    if (ptr != NULL)
    {
        return 1 + (*ptr).a;
    }
}
