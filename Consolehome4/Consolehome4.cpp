// Consolehome4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>

int main()
{
	int phone1, phone2, callmin;
	float price1 = 2, price2 = 4, price3 = 2.5, fullprice,fullprice2,fullprice3;// enter price for 3 of phnes
	cout << "1-mts\n";
	cout << "2-beeline\n";
	cout << "3-tele2\n";
	cin >> phone1;
	cout << "put same number for phone2\n";
	cin >> phone2;
	cout << "enter min of call\n";
	cin >> callmin;
	if (phone1 == phone2) {
		cout << "free call";
	}
	else if (phone1 == 1) {
		fullprice = callmin * price1;
		cout << "price" << fullprice;

	}
	else if (phone1 == 2) {
		fullprice2 = callmin * price2;
		cout << "price" << fullprice2;
	}
	else if (phone1 == 3) {
		fullprice3 = callmin * price3;
		cout << "price" << fullprice3;
	}
	else {
		cout << "wrong";
	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
