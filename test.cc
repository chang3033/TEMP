#include <iostream>
#include <vector>
#include "function.cc"
#include "SubDir/newFile.cc"

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
    for (int i = 0; i < 10; i++)
    {
        C c(i);
        std::cout << i << "'s square = ";
        c.print();
    }

    int sum = 0;
    for (int i = 10 - 1; i >= 0; i--)
    {
        std::cout << i;
        sum += i;

        if (i > 0)
        {
            std::cout << " + ";
        }
        else
        {
            std::cout << " = " << sum << endl;
        }
    }

    if (1 == 1)
    {
        cout << "1 == 1 is true" << endl;
    }
    else
    {
        cout << "1 == 1 is false" << endl;
    }

    vector<int> V(10, 99);
    for (const auto &v : V)
    {
        std::cout << "global func(" << v << ") = " << func(v) << std::endl;
    }
    /***************************************************
    test__cc
        October 27, 2019
    ****************************************************/
}