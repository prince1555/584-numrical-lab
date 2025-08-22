#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.001

double func(double x)
{
    return x*x*x - x - 11;
}

void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a;
    while ((b-a) >= EPSILON)
    {
        c = (a+b)/2;

        if (func(c) == 0.0)
            break;

        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c << endl;
}

int main()
{
    cout << "Name: CHIRONTON SHAHA" << endl;
    cout << "ID: 12230320584" << endl;

    double a = 2, b = 3;
    bisection(a, b);

    return 0;
}
