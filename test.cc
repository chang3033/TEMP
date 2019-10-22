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
};

C::C(int x)
{
    y = f(x);
}

C::~C()
{
}

// modify branch-B LOCALLY

int main() {
    // add some
    for (int i = 0; i < 100; i++)
    {
        // can I add more code here?
        // yes I can
    }
    
    for (int i = 10 - 1; i >= 0; i--)
    {
        /* code */
        //std::cerr << i << endl;

        // add more comments into master
        // add branch-B specific comments
        if (i > 0) {
            //std::cerr << i * i ;
        }
    }
    


}