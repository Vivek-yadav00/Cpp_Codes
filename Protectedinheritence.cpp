#include <iostream>
using namespace std;

class base
{
protected:
    int a;

private:
    int b;
};

class derived : protected base
{
};

int main()
{
    base b;
    derived d;
    // cout<<d.a;  this will not work because of protected
}
