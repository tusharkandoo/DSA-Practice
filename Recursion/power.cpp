#include <iostream>
using namespace std;

int power(int a, int n)
{
    if (n == 0)
        return 1;
    else
        return a * power(a, n - 1);
}
int gcd(int c, int d)
{
    if (d == 0)
        return c;
    else
        return gcd(d, c % d);
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int a, b, n;
    cout << "Enter the base number: ";
    cin >> a;
    cout << "Enter the exponent number: ";
    cin >> n;
    cout << a << " raised to the power " << n << " is: " << power(a, n);
    cout << "\nEnter two numbers for GCD: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b);
    cout << "\nEnter a number for factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << factorial(n);
    return 0;



}