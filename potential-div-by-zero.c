void CWE369_Divide_by_Zero__int_fscanf_modulo_01_bad(int a)
{
    int data;
    /* Initialize data */
    data = -1;

    if (a < 0)
    {
        data = -1;
    }
    else
    {
        data = 0;
    }

    /* POTENTIAL FLAW: Possibly divide by zero */
    printIntLine(100 / data);
}

void CWE369_Divide_by_Zero__int_fscanf_modulo_01_bad2()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    scanf("%d", &data);
    /* POTENTIAL FLAW: Possibly divide by zero */
    printIntLine(100 / 0);
}