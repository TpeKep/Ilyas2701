﻿// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	string password = "dutch1945";
	string y; 
	string old_password = "dutch1914";
	cout << "Введите свой пароль" << endl;
	cin >> y;
	if (y == password)
		cout << "Добро пожаловать о великий" << endl;
	if (y == old_password)
		cout << "Ваш пароль был изменён" << endl;
	else
		cout << "Добро не пожаловать" << endl; return 0;
}
