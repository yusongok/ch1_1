#include<iostream>
#include<cmath>
using namespace std;

double max(double x, double y);

int main()
{
	double a, b, c;
	int d;
	cout << "input two numbers:\n";
	cin >> a >> b;
	//cout << x;
	c = max(a, b);
	d = max(a, b);
	
	cout << "the squart of maximum=" << sqrt(c);
	cout << "the number d" << d;

}

double max(double x, double y)
{
	if (x > y)
		return x;
	else
		return y;
}