#include <iostream>
#include <string>

// 一个简单的函数，模拟使用敏感信息
void leakSensitiveInfo()
{
    // 模拟的敏感信息
    const std::string SECRET_PASSWORD = "VerySecurePassword123"; // 硬编码的密码
    const std::string PRIVATE_KEY = "PrivateKeyForEncryption";   // 硬编码的私钥
    std::cout << "Secret Password: " << SECRET_PASSWORD << std::endl;
    std::cout << "Private Key: " << PRIVATE_KEY << std::endl;
}

int main()
{
    // 模拟信息泄露
    leakSensitiveInfo();
    return 0;
}
