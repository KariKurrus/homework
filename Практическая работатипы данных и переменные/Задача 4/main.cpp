#include<iostream>
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double distance, fuel_for_100km, value_of_1litre,output;
	std::cout << "���������� ��������� ������� �� ���� � �������." << std::endl;
	std::cout << "���������� �� ���� (��) -> ";
	std::cin >> distance;
	std::cout << "������ ������� (������ �� 100 �� �������) -> ";
	std::cin >> fuel_for_100km;
	std::cout << "���� ����� ������� (���.) -> ";
	std::cin >> value_of_1litre;
	output = (((fuel_for_100km * distance)/100)* value_of_1litre)*2;
	std::cout << "������� �� ���� � ������� ��������� �  " << output << " ���.";






}