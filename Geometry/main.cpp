//Geometry
#include <iostream>
#include <Windows.h>

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define RHOMBUS
//#define PLUS_MINUS
//#define PLUS_MINUS_V2
#define PASCAL_TRIANGLE

//#define CHESS_DESK
void main()
{  /*
	setlocale(LC_ALL, "");
	int n;
	std::cout << "Enter the size of figure: "; std::cin >> n;
	*/
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << " * ";
		}
		std::cout << "\n";
		Sleep(50);
	}
#endif //SQUARE [_]

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << " * " << " ";
		}
		std::cout << "\n";
		Sleep(50);
	}
#endif //TRIANGLE |\

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			std::cout << " * " << " ";
		}
		std::cout << "\n";
		Sleep(50);
	}
#endif //TRIANGLE |/

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << " ";
		}
		for (int j = i; j < n; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
		Sleep(50);
	}
#endif //TRIANGLE \|

#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			std::cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
		Sleep(100);
	}
#endif //TRIANGLE /|

#ifdef RHOMBUS
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			std::cout << " ";
		}
		std::cout << "//";
		for (int j = 0; j < i * 2; j++)
		{
			std::cout << " ";
		}
		std::cout << "\\\\";
		std::cout << "\n";
		Sleep(70);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << " ";
		}
		std::cout << " \\\\";

		for (int j = i * 2; j < (n - 1) * 2; j++)
		{
			std::cout << " ";
		}
		std::cout << "//";
		std::cout << "\n";
		Sleep(70);
	}

#endif // RHOMBUS

	//--------------------------------------------------------------------	

#ifdef PLUS_MINUS
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)
				std::cout << "+ ";
			else
				std::cout << "- ";
		}
		std::cout << "\n";
	}

#endif // PLUSMINUS

#ifdef PLUS_MINUS_V2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == j % 2) std::cout << "+ "; else std::cout << "- ";
		}
		std::cout << "\n";
	}

#endif // PLUSMINUS

#ifdef PASCAL_TRIANGLE
	
	int h;
	std::cout << "Enter the triangle height: "; std::cin >> h;

	long long int nf = 1;
	for (int i = 0; i <= h; i++)std::cout << "  ";
	std::cout << "   ";
	std::cout << 1 << std::endl;
	for (int n = 1; n <= h; n++)
	{
		for (int i = n % 2 == 0 ? 1 : 0; i <= h - n; i++)std::cout << "  ";
		if (n % 2 == 0)std::cout << "  ";
		nf *= n;
		long long int kf = 1;
		std::cout.width(4);
		std::cout << 1;// << "\t";
		for (int k = 1; k <= n; k++)
		{
			kf *= k;
			long long int nkf = 1;
			for (int nk = 1; nk <= n - k; nk++)
			{
				nkf *= nk;
			}
			std::cout.width(4);
			std::cout << nf / kf / nkf;// << "\t";
		}
		std::cout << std::endl;
	}

#endif PASCAL_TRIANGLE //Pascal triangle3
}

