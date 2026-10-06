#include <iostream>
#include <math.h>

int main()
{
	double x, y, a, c;
	int func;
	std::cout << "Enter x "; std::cin >> x;
	std::cout << "Enter y "; std::cin >> y;
	std::cout << "Enter function: 1 - sh(x), 2 - x^2, 3 – exp(x) "; std::cin >> func;
	
		switch (func)
		{
			case 1: func = sinh(x); break;
			case 2: func = pow(x, 2); break;
			case 3: func = exp(x); break;
			default: std::cout << "Unknown function"; return 1;
	}
	a = x - y;
	if (a == 0) {
		c = pow(func, 2) + pow(y, 1.0 / 3.0) + sin(y);
	}else
		if (a > 0) {
			c = pow(func - y, 2) + log(x);
		} else c = pow(y - func, 2) + tan(y);
		{
			std::cout << "c = " << c << std::endl;
			return 0;
		}

	//сиксевен 6767676767
		//я устал это делать


	}




