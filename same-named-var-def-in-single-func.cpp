#include <iostream>

void complexFunction() {
    int a = 10; // 外层作用域中的变量a

    // 嵌套的if语句
    if (a > 5) {
        int a = 20; // 内层作用域中的变量a，与外层的变量同名
        for (int i = 0; i < a; ++i) {
            std::cout << "Inner loop with a = " << a << std::endl;
            if (i % 2 == 0) {
                std::cout << "Even index: " << i << std::endl;
            } else {
                std::cout << "Odd index: " << i << std::endl;
            }
        }
    }

    // 另一个嵌套的循环
    for (int j = 0; j < 5; ++j) {
        std::cout << "Outer loop with a = " << a << std::endl;
        if (j == 2) {
            int b = 3; // 在内层作用域中定义变量b
            do {
                std::cout << "Do-while loop with b = " << b << std::endl;
                b--;
            } while (b > 0);
        }
    }

    // 输出外层作用域中的变量a
    std::cout << "Final value of a in outer scope: " << a << std::endl;
}

int main() {
    complexFunction();
    return 0;
}
