#include<iostream>
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double input;
	int coutput_grn, coutput_kop;
	std::cout << "������� ������� ����� -> ";
	std::cin >>input;                     
	coutput_grn = input;
	coutput_kop = (input - coutput_grn) * 100;
	std::cout << input <<"���.- ��� "<< coutput_grn << "���" << coutput_kop << "���" << std::endl;
	



}