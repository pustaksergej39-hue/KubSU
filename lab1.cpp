#include <iostream>
#include <math.h>

int main()
{
	double x, y, z, h, first, second, third;
	std::cout << "x:";
	std::cin >> x;
	std::cout << "y:";
	std::cin >> y;
	std::cout << "z:";
	std::cin >> z;
	first = pow(y, pow(fabs(x), 1.0 / 3.0));
	second = pow(cos(y), 3) * fabs(x - y) * (1.0 + (pow(sin(z), 2) / sqrt(x + y)));
	third = (exp(fabs(x - y)) + (x / 2.0));
	h = first + second / third;
	std::cout << "here is the answer:" << h << std::endl;
	return 0;
}
