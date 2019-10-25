#include <iostream>
#include <stdio.h>
#include "function.cc"

using namespace std;

class myClass
{
private:
    int y;

public:
    myClass(int x = 0);
    ~myClass();
    int func(int x) { return x + 1; }
};

myClass::myClass(int x)
{
    y = func(x);
}

myClass::~myClass()
{
}

int main(int argc, char** argv)
{
    cout << "argc=" << argc << endl;

    myClass c(argc);

    for (size_t i = 0; i < argc; i++)
    {
        cout << c.func(i) << endl;;
    }

    int z = func(100);
}