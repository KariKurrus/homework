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
			std::cout << "Вперед" << std::endl;
		}
		else if (_getch() == 235)
		{
			std::cout << "Назад" << std::endl;
		}
		else if (_getch() == 228)
		{
			std::cout << "Влево" << std::endl;
		}
		else if (_getch() == 162)
		{
			std::cout << "Вправо" << std::endl;
		}
		else if (_getch() == 32)
		{
			std::cout << "Прыжок" << std::endl;
		}
		else if (_getch() == 13)
		{
			std::cout << "Огонь" << std::endl;
		}
	} while (_getch() != 27);

}