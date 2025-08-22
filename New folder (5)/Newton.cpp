
#include<bits/stdc++.h>
#define EPSILON 0.0001
using namespace std;

double func(double x)
{
	return x*x*x - x - 11;
}

double derivFunc(double x)
{
	return 3*x*x ;
}

void newtonRaphson(double x)
{
	double h = func(x) / derivFunc(x);
	while (abs(h) >= EPSILON)
	{
		h = func(x)/derivFunc(x);

		x = x - h;
	}

	cout << "The value of the root is : " << x;
}

int main()
{
          cout << "Name: CHIRONTON SHAHA" << endl;
          cout << "ID: 12230320584" << endl;
    
	double x0 = 2; 
	newtonRaphson(x0);
	return 0;
}
