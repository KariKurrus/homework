#include "iostream"
#include "conio.h"

void main()
{

	_getch();


	setlocale(LC_ALL, "Russian");
	do
	{
		if (_getch() == 230)
		{
			std::cout << "������" << std::endl;
		}
		else if (_getch() == 235)
		{
			std::cout << "�����" << std::endl;
		}
		else if (_getch() == 228)
		{
			std::cout << "�����" << std::endl;
		}
		else if (_getch() == 162)
		{
			std::cout << "������" << std::endl;
		}
		else if (_getch() == 32)
		{
			std::cout << "������" << std::endl;
		}
		else if (_getch() == 13)
		{
			std::cout << "�����" << std::endl;
		}
	} while (_getch() != 27);

}