#include <iostream>

// 自定义类
class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {
        std::cout << "MyClass instance created with value: " << value << std::endl;
    }

    ~MyClass() {
        std::cout << "MyClass instance destroyed with value: " << value << std::endl;
    }
};

int main() {
    // 分配内存并创建MyClass对象
    MyClass* myObject = new MyClass(42);
    
    // 使用对象
    std::cout << "Object value: " << myObject->value << std::endl;
    
    // 释放内存
    delete myObject;
    
    // 尝试解引用已释放的内存
    // 注意：这是危险的操作，会导致未定义行为
    std::cout << "试图访问已释放的对象内存: " << myObject->value << std::endl;
    
    return 0;
}
