#include<iostream>
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double cost_of_notebook, cost_of_cover,output;
	int value;
	std::cout << "Введите исходные данные: " << std::endl;
	std::cout << "Цена тетради(грн.) -> ";
	std::cin >> cost_of_notebook;
	std::cout << "Цена обложки(грн.) -> ";
	std::cin >> cost_of_cover;
	std::cout << "Количество комплектов(шт.) -> ";
	std::cin >> value;
	output = (cost_of_notebook + cost_of_cover) * value;
		std::cout << "Стоимость покупки : "<<output <<"грн."<< std::endl;

}