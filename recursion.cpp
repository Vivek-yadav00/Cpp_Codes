#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "NUmber is \n";
    cin >> n;
    int x = fact(n);
    cout << "Factorial is " << x;
    return 0;
}
