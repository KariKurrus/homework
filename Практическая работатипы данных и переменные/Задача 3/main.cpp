#include<iostream>
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double cost_of_notebook, cost_of_cover,output;
	int value;
	std::cout << "������� �������� ������: " << std::endl;
	std::cout << "���� �������(���.) -> ";
	std::cin >> cost_of_notebook;
	std::cout << "���� �������(���.) -> ";
	std::cin >> cost_of_cover;
	std::cout << "���������� ����������(��.) -> ";
	std::cin >> value;
	output = (cost_of_notebook + cost_of_cover) * value;
		std::cout << "��������� ������� : "<<output <<"���."<< std::endl;

}