//#define IF_PROJECT_ONE
//#define IF_PROJECT_TWO
//#define IF_PROJECT_THREE


#ifdef IF_PROJECT_ONE
#include<iostream>
void main()
{
	setlocale(LC_ALL, "Russian");
	int number_input;
	std::cout << " Введите число: ";
	std::cin >> number_input;
	if (number_input >= 0 && number_input <= 10)
	{
		std::cout << "Попадание!" << std::endl;
	}
	else
	{
		std::cout << "Промах!" << std::endl;
	}
}
#endif // IF_PROJECT_ONE

#ifdef IF_PROJECT_TWO
#include<iostream>
void main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "\t\t\t<<== Как стать миллионером ==>>" << std::endl;
	int question1, question2, question3, question4, question5,counter;
	counter = 0;
	//1
	std::cout << "1.Какова высота Эйфелевой башни?" << std::endl;
	std::cout << "1)300м.\t2)89м.\t3)800м.\t4)47м." << std::endl;
	std::cout << "Введите вариант ответа: ";
	std::cin >> question1;
	if (question1 == 1)
	{
		std::cout << "Результат: правильно :)" << std::endl;
		counter += 1;
	}
	else {
		std::cout << "Результат: неправильно :(" << std::endl;
		//counter -= 1;
	}
	//2
	std::cout << "2.Сколько будет квадратный корень из 225?" << std::endl;
	std::cout << "1)25\t2)2,5\t3)15\t4)22,5" << std::endl;
	std::cout << "Введите вариант ответа: ";
	std::cin >> question2;
	if (question2 == 3)
	{
		std::cout << "Результат: правильно :)" << std::endl;
		counter += 1;
	}
	else {
		std::cout << "Результат: неправильно :(" << std::endl;
		
	}
	//3
	std::cout << "3.В каком году началась Вторая мировая война?" << std::endl;
	std::cout << "1)1945г.\t2)1991г.\t3)2019г.\t4)1939г." << std::endl;
	std::cout << "Введите вариант ответа: ";
	std::cin >> question3;
	if (question3 == 4)
	{
		std::cout << "Результат: правильно :)" << std::endl;
		counter += 1;                              
	}
	else {
		std::cout << "Результат: неправильно :(" << std::endl;

	}
	//4
	std::cout << "4.Кто автор пьесы \"Ромео и Джульетта\"?" << std::endl;
	std::cout << "1)Оскар Уайльд\t 2)Чарльз Диккенс\t 3)Уильям Шекспир\t 4)Эдгар По" << std::endl;
	std::cout << "Введите вариант ответа: ";
	std::cin >> question4;
	if (question4 == 3)
	{
		std::cout << "Результат: правильно :)" << std::endl;
		counter += 1;
	}
	else {
		std::cout << "Результат: неправильно :(" << std::endl;

	}
	
	//5
	std::cout << "5.Каков радиус Земли?" << std::endl;
	std::cout << "1)3 389 км.\t 2)6 371 км.\t 3)1 737 км.\t 4)6 051 км." << std::endl;
	std::cout << "Введите вариант ответа: ";
	std::cin >> question5;
	if (question5 == 2)
	{
		std::cout << "Результат: правильно :)" << std::endl;
		counter += 1;
	}
	else {
		std::cout << "Результат: неправильно :(" << std::endl;

	}
	//результат
	std::cout << "Ваш результат: " << counter << " б. " << std::endl;
}

#endif // IF_PROJECT_TWO

#ifdef IF_PROJECT_THREE
#include<iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	double number1, number2;
	char operation;
	std::cout<<"\t\t\t\t<<== Калькулятор ==>>"<< std::endl;
	std::cout << "Введите пример: " ;
	std::cin >> number1>> operation>> number2;

		if (operation == '+')
		{
			std::cout <<  "Результат: " << number1 << "+" << number2 << "=" << number1 + number2 << std::endl;
		}
		else if (operation == '-')
		{
			std::cout << "Результат: " <<  number1 << "-" << number2 << "=" << number1 - number2 << std::endl;
		}
		else if (operation == '/')
		{
			std::cout << "Результат: " << number1 << "/" << number2 << "=" << number1 / number2 << std::endl;
		}
		else if (operation == '*')
		{
			std::cout << "Результат: " << number1 << "*" << number2 << "=" << number1 * number2 << std::endl;
		}
		else
		{
			std::cout << "WARNING!!!!<incorrect operation>" << std::endl;
		}
}

#endif // IF_PROJECT_THREE
#ifdef CICLE_PROJECT_ONE

#include "iostream"
#include "conio.h"

void main()
{
	
	_getch();
	
	//std::cout << int(_getch());
	setlocale(LC_ALL, "Russian");
	do
	{
		if(_getch() == 230)
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
#endif // CICLE_PROJECT_ONE
