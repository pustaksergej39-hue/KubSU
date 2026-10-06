
#include <math.h>
#include<iomanip>
#include <numbers>
#include <iostream>

int main()
{
	double a, b, h, x, y, x1, s;
	int i, n;
	
	std::cout << "Enter a,b,n" << std::endl;
	std::cin >> a >> b >> n;
	x = a;
	h = (b - a) / 10;
	do
	{
		x1 = s = 1;
		for (i = 1;i <= n; i++)
		{
			x1 *= (cos(std::numbers::pi / 4) * x) / i;//исправить
			s += x1;//исправить
		}
		y = exp(x * cos(std::numbers::pi / 4)) * cos(x * sin(std::numbers::pi / 4));
		std::cout << std::setw(15) << x << std::setw(15) << y << std::setw(15) << s << std::endl;
		x += h;
	}
			while (x <= b + h / 2);
			std::cout << std::endl;
			return 0;
			 
}




