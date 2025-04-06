#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void fun(float x, float& a, float& b)
{
    x = cos(2 * x) + sin(x - 3);
}

int main()
{
    float a, b, x;
    cout << "a = ? \nb = ? \n";
    cin >> a, cin >> b;
    fun(a, b, x);
    cout << (a >= b ? "b the lowest" : "a is the lowest") << endl;
    return 0;
}