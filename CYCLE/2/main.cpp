#include <iostream>
int main()
{
	setlocale(LC_ALL,"rus");
	int num,res1,res2;
	double a,b,c;
	std::cout << "\t\t\t<<== ����� ���������� ���� ����� ��� ���! ==>>" << std::endl;
	std::cout<<"������� ����� �������������� ������(������������ �����): ";
	std::cin >> num;
	if(num<999999 && num >100000)
	{ 
	a = (num % 10);   //reversing numer *****@

	b = (num % 100);  //
	b -= a;           //reversing number ****@*
	b /= 10;          //

	c = (num % 1000); //
	c -= a+(b*10);    //reversing number ***@**
	c /= 100;         //
	res2 = (a * 100) + (b * 10) + c;
	res1 = num - (num % 1000);
	res1 /= 1000;
	/*std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << res2 << std::endl;
	std::cout << res1 << std::endl;
	*/
	if (res1 == res2)
	{
		std::cout << "�����������!!!��� ����� ����������!" << std::endl;
	}
	else
	{
		std::cout << "��� ����� ������������" << std::endl;
	}
	}
	else
	{
		std::cout << "��� �� �����!" << std::endl;
	}
}
