#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double hx = 1, z;
	for (double x = -5; x <= 5; x += hx) {
		if (fabs(x) <= 3)

		{z = sin(pow(x + 0.4, 2)) / pow(4 * x, 2);}
	
		else if (fabs(x) > 3)
		{z = pow(x, 4) + pow(2 * x, 2) * cos(x);}
		cout << "x=" << x << "z=" << z << "\n";
	}
		return 0;
}

		
	