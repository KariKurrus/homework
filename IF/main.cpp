//#define IF_PROJECT_ONE
//#define IF_PROJECT_TWO
//#define IF_PROJECT_THREE


#ifdef IF_PROJECT_ONE
#include<iostream>
void main()
{
	setlocale(LC_ALL, "Russian");
	int number_input;
	std::cout << " ������� �����: ";
	std::cin >> number_input;
	if (number_input >= 0 && number_input <= 10)
	{
		std::cout << "���������!" << std::endl;
	}
	else
	{
		std::cout << "������!" << std::endl;
	}
}
#endif // IF_PROJECT_ONE

#ifdef IF_PROJECT_TWO
#include<iostream>
void main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "\t\t\t<<== ��� ����� ����������� ==>>" << std::endl;
	int question1, question2, question3, question4, question5,counter;
	counter = 0;
	//1
	std::cout << "1.������ ������ ��������� �����?" << std::endl;
	std::cout << "1)300�.\t2)89�.\t3)800�.\t4)47�." << std::endl;
	std::cout << "������� ������� ������: ";
	std::cin >> question1;
	if (question1 == 1)
	{
		std::cout << "���������: ��������� :)" << std::endl;
		counter += 1;
	}
	else {
		std::cout << "���������: ����������� :(" << std::endl;
		//counter -= 1;
	}
	//2
	std::cout << "2.������� ����� ���������� ������ �� 225?" << std::endl;
	std::cout << "1)25\t2)2,5\t3)15\t4)22,5" << std::endl;
	std::cout << "������� ������� ������: ";
	std::cin >> question2;
	if (question2 == 3)
	{
		std::cout << "���������: ��������� :)" << std::endl;
		counter += 1;
	}
	else {
		std::cout << "���������: ����������� :(" << std::endl;
		
	}
	//3
	std::cout << "3.� ����� ���� �������� ������ ������� �����?" << std::endl;
	std::cout << "1)1945�.\t2)1991�.\t3)2019�.\t4)1939�." << std::endl;
	std::cout << "������� ������� ������: ";
	std::cin >> question3;
	if (question3 == 4)
	{
		std::cout << "���������: ��������� :)" << std::endl;
		counter += 1;                              
	}
	else {
		std::cout << "���������: ����������� :(" << std::endl;

	}
	//4
	std::cout << "4.��� ����� ����� \"����� � ���������\"?" << std::endl;
	std::cout << "1)����� ������\t 2)������ �������\t 3)������ �������\t 4)����� ��" << std::endl;
	std::cout << "������� ������� ������: ";
	std::cin >> question4;
	if (question4 == 3)
	{
		std::cout << "���������: ��������� :)" << std::endl;
		counter += 1;
	}
	else {
		std::cout << "���������: ����������� :(" << std::endl;

	}
	
	//5
	std::cout << "5.����� ������ �����?" << std::endl;
	std::cout << "1)3 389 ��.\t 2)6 371 ��.\t 3)1 737 ��.\t 4)6 051 ��." << std::endl;
	std::cout << "������� ������� ������: ";
	std::cin >> question5;
	if (question5 == 2)
	{
		std::cout << "���������: ��������� :)" << std::endl;
		counter += 1;
	}
	else {
		std::cout << "���������: ����������� :(" << std::endl;

	}
	//���������
	std::cout << "��� ���������: " << counter << " �. " << std::endl;
}

#endif // IF_PROJECT_TWO

#ifdef IF_PROJECT_THREE
#include<iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	double number1, number2;
	char operation;
	std::cout<<"\t\t\t\t<<== ����������� ==>>"<< std::endl;
	std::cout << "������� ������: " ;
	std::cin >> number1>> operation>> number2;

		if (operation == '+')
		{
			std::cout <<  "���������: " << number1 << "+" << number2 << "=" << number1 + number2 << std::endl;
		}
		else if (operation == '-')
		{
			std::cout << "���������: " <<  number1 << "-" << number2 << "=" << number1 - number2 << std::endl;
		}
		else if (operation == '/')
		{
			std::cout << "���������: " << number1 << "/" << number2 << "=" << number1 / number2 << std::endl;
		}
		else if (operation == '*')
		{
			std::cout << "���������: " << number1 << "*" << number2 << "=" << number1 * number2 << std::endl;
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
#endif // CICLE_PROJECT_ONE
