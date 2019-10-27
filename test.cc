#include <iostream>
#include "function.cc"

using namespace std;

class C
{
private:
    /* data */
    int y;

public:
    C(int x);
    ~C();
    void print()
    {
        cout << y << endl;
    }
};

C::C(int x)
{
    y = x * x;
}

C::~C()
{ 
}

int main()
{
    // add some
    for (int i = 0; i < 100; i++)
    {
        C c(i);
        std::cout << i << ":\t";
        c.print();
    }

    for (int i = 10 - 1; i >= 0; i--)
    {
        /* code */
        std::cout << i;

        if (i > 0)
        {
            std::cout << "+" << endl;
        }
        else
        {
            std::cout << endl;
        }
    }
}