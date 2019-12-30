#include<iostream>
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	
	std::cout << "Введите исходные данные :  " << std::endl;
	double cost_of_notebook, cost_of_pencil,output;
	int value_of_notebook, value_of_pencil;
	std::cout << "Цена тетради(грн.) -> ";
	std::cin >> cost_of_notebook;
	std::cout << "Количество тетрадей -> ";
	std::cin >> value_of_notebook;
	std::cout << "Цена карандаша (грн.) -> ";
	std::cin >> cost_of_pencil;
	std::cout << "Количество карандашей -> ";
	std::cin >> value_of_pencil;
	output = (cost_of_notebook * value_of_notebook)+(cost_of_pencil * value_of_pencil);
	std::cout << "Стоимость покупки : " << output << " грн.";

}