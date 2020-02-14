#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
constexpr auto pi = 3.14;

int main()
{
	double s = 0, x = 1;
	long k = 1;
	int sign = 1;

	while (abs(x)>1e-8)
	{
		s += x;
		k += 2;
		sign *= -1;
		x = sign / double(k);

	}
	s *= 4;
	cout << "the pi is" << s << endl;
	cout<< fixed << setprecision(8) << s << endl;
}