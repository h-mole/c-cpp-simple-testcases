#include <stdio.h>
#include <string>
class MyFileReader
{
public:
    char *ReadFile(const std::string &filename)
    {
        FILE *file_ = fopen(filename.c_str(), "r");
        if(!file_)
        {
            return NULL;
        }
        char *ch = (char *)malloc(1024);
        // Read from the file, save bytes to ch
        for (int i = 0; i < 1024; i++)
        {
            ch[i] = fgetc(file_);
        }
        return ch;
    }
};