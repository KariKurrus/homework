#include<iostream>
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	
	std::cout << "������� �������� ������ :  " << std::endl;
	double cost_of_notebook, cost_of_pencil,output;
	int value_of_notebook, value_of_pencil;
	std::cout << "���� �������(���.) -> ";
	std::cin >> cost_of_notebook;
	std::cout << "���������� �������� -> ";
	std::cin >> value_of_notebook;
	std::cout << "���� ��������� (���.) -> ";
	std::cin >> cost_of_pencil;
	std::cout << "���������� ���������� -> ";
	std::cin >> value_of_pencil;
	output = (cost_of_notebook * value_of_notebook)+(cost_of_pencil * value_of_pencil);
	std::cout << "��������� ������� : " << output << " ���.";

}