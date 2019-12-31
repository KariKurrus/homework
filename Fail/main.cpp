#include <iostream>
int main()
{
	setlocale(LC_ALL, "rus");
	int input,cnd1,cnd2;
	double num1, num2, num3,num4;               //	intermediate results
	
		
	std::cout << "¬ведите число: ";
	std::cin >> input;

	if (input < 99999 && input>10000)
	{
		
		num1 = (input % 100);
		num2 = (input % 10000);
		num3 = (input % 100000)-num2;
		num4 = (input - num3)-num1;
		num4 /= 100;
		cnd1 = num1;
		
		//std::cout << "/" << num1 << "/" << num2 << "/" << num3 << "/" << num4 << "/" << cnd1 << "/" << cnd2 << "/" << input;
		
		if (num1 == cnd2)
		{
			std::cout << "true" << std::endl;
		}
		else
		{
			std::cout << "false" << std::endl;
		}
		
	}
	
}