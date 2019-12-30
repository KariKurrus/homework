#include<iostream>
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double distance, fuel_for_100km, value_of_1litre,output;
	std::cout << "Вычисление стоимости поездки на дачу и обратно." << std::endl;
	std::cout << "Расстояние до дачи (км) -> ";
	std::cin >> distance;
	std::cout << "Расход бензина (литров на 100 км пробега) -> ";
	std::cin >> fuel_for_100km;
	std::cout << "Цена литра бензина (грн.) -> ";
	std::cin >> value_of_1litre;
	output = (((fuel_for_100km * distance)/100)* value_of_1litre)*2;
	std::cout << "Поездка на дачу и обратно обойдется в  " << output << " грн.";






}