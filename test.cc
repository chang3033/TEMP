#include <iostream>
#include <vector>
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

    for (size_t c = 0; c < 10; c++)
    {
        std::cout << c << std::endl;
    }

    if (1 == 1)
    {
        cout << "1 == 1" << endl;
    }

    vector<int> V(10, 0);
    for (const auto& v : V) {
        std::cout << v << std::endl;
    }
    /***************************************************
    test__cc
        October 27, 2019
    ****************************************************/
}