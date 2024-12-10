#include <iostream>

void complexFunction(int a, int b, int c, bool d, bool e)
{
    if (a > 0)
    {
        for (int i = 0; i < a; ++i)
        {
            if (b > i)
            {
                while (c > b)
                {
                    c -= 2;
                    if (d)
                    {
                        for (int j = 0; j < c; ++j)
                        {
                            if (e)
                            {
                                std::cout << "Condition 1" << std::endl;
                            }
                            else
                            {
                                std::cout << "Condition 2" << std::endl;
                            }
                        }
                    }
                    else
                    {
                        for (int k = 0; k < b; ++k)
                        {
                            if (k % 2 == 0)
                            {
                                if (d && e)
                                {
                                    std::cout << "Condition 12" << std::endl;
                                }
                                else if (d && !e)
                                {
                                    std::cout << "Condition 13" << std::endl;
                                }
                                else if (!d && e)
                                {
                                    std::cout << "Condition 14" << std::endl;
                                }
                                else
                                {
                                    std::cout << "Condition 15" << std::endl;
                                }
                                std::cout << "Condition 3" << std::endl;
                            }
                            else
                            {
                                std::cout << "Condition 4" << std::endl;
                            }
                        }
                    }
                }
            }
            else
            {
                for (int l = 0; l < a; ++l)
                {
                    if (l % 3 == 0)
                    {
                        std::cout << "Condition 5" << std::endl;
                    }
                    else if (l % 3 == 1)
                    {
                        std::cout << "Condition 6" << std::endl;
                    }
                    else
                    {
                        std::cout << "Condition 7" << std::endl;
                    }
                }
            }
        }
    }
    else
    {
        if (b < 10)
        {
            for (int m = 0; m < b; ++m)
            {
                if (c > m)
                {
                    std::cout << "Condition 8" << std::endl;
                }
                else
                {
                    std::cout << "Condition 9" << std::endl;
                }
            }
        }
        else
        {
            while (b > 0)
            {
                b--;
                if (b % 5 == 0)
                {
                    std::cout << "Condition 10" << std::endl;
                }
                else
                {
                    std::cout << "Condition 11" << std::endl;
                }
            }
        }
    }
}

int main()
{
    complexFunction(10, 20, 30, true, false);
    return 0;
}
