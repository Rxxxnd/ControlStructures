#include <iostream>

//#define FACTORIAL
//#define EXPO
//#define ASCII
//#define FIBONACCI
//#define SIMPLE_NUMBERS

int main()
{
#ifdef FACTORIAL

	int number;
	int fctrl = 1;

	std::cout << "\t\t\t~~~~ It's factorial time! ~~~~\n\t\t\t      Enter your number: " << std::endl; std::cin >> number;
	if (number > 0)
	{
		for (int i = 1; i <= number; i++)
		{
			fctrl = fctrl * i;
		}
		std::cout << "\t\t\t The factorial of " << number << " is: " << fctrl << "." << std::endl;
	}
	else
		std::cout << "\t\tI see what ya doin' here, it's not gonna work:P" << std::endl;

#endif // FACTORIAL 
#ifdef EXPO

	double base;
	double exp;
	int result = 1;
	std::cout << "\t\t\t^^^^^ Exponentation ^^^^" << std::endl;
	std::cout << "\t\t\t Enter the base number: " << std::endl; std::cin >> base;
	std::cout << "\t\t\t   Enter the exponent: " << std::endl; std::cin >> exp;

	if (base < 0)
	{
		base = 1 / base;
		exp = -exp;
	}
	for (int i = 1; i <= exp; i++)
	{
		result = result * base;
	}
	std::cout << "\t\t\t ----------------------" << std::endl;
	std::cout << "\t\t\t       " << base << "^" << exp << " = " << result << std::endl;

#endif //EXPO

#ifdef ASCII
	int i = 0;
	for (int i = 0; i < 256; i++);
	{
		if (i % 16 == 0)
			std::cout << std::endl;
		std::cout << (char)i << " ";
	}
#endif // ASCII

#ifdef FIBONACCI

	int n;

	std::cout << "Enter qty of Fibonacci: "; std::cin >> n;

	int a = 0;
	int b = 1;
	int c = a + b;
	for (int i = 0; i < n; i++)
	{
		std::cout << a << "\t";
		a = b;
		b = c;
		c = a + b;
	}

#endif //FIBONACCI

#ifdef SIMPLE_NUMBERS

	int number;

	std::cout << "Enter limit number: " << std::endl; std::cin >> number;

	for (int i = 0; i <= number; i++)
	{
		bool smpl_num = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				smpl_num = false;
				break;
			}
		}
		if (smpl_num) std::cout << i << "\t";
	}
	std::cout << std::endl;

#endif //SIMPLE_NUMBERS
}
