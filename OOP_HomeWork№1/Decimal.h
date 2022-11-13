#pragma once
#include <iostream>
using namespace std;

class Decimal
{
private:
	int numerator1;
	int denominator1;
	int numerator2;
	int denominator2;
public:
	//Функции небольшие, поэтому реализованны тут
	//Ввод первой дроби
	void inputFraction1() {
		cout << "Enter a numerator 1: "; cin >> numerator1; //Не знаю, можно ли так нахально вводить,
		cout << "Etner a denominator 1: "; cin >> denominator1; //Но если нет, то думаю, вы сообщите на занятии
	} 
	//Ввод второй дроби
	void inputFraction2() {
		cout << "Enter a numerator 2: "; cin >> numerator2;
		cout << "Etner a denominator 2: "; cin >> denominator2;
	} 
	//Сложение дробей
	void aditionFraction() {
		double n, d;
		n = numerator1 + numerator2;
		d = denominator1 * numerator2;
		cout << "Fraction: \n";
		cout << n << endl;
		cout << "---\n";
		cout << d << endl;
		cout << "Decimal number - " << n / d;
	}
	//Вычитание дробей
	void subtractionFraction() {
		double n, d;
		n = numerator1 - numerator2;
		d = denominator1 * numerator2;
		cout << "Fraction: \n";
		cout << n << endl;
		cout << "---\n";
		cout << d << endl;
		cout << "Decimal number - " << n / d;
	}
	//Умножение дробей
	void multiplicationFraction() {
		double n, d;
		n = numerator1 * numerator2;
		d = denominator1 * denominator2;
		cout << "Fraction: \n";
		cout << n << endl;
		cout << "---\n";
		cout << d << endl;
		cout << "Decimal number - " << n / d;
	}
	//Деление дробей
	void divisionFraction() {
		double n, d;
		n = numerator1 * denominator2;
		d = denominator1 * numerator1;
		cout << "Fraction: \n";
		cout << n << endl;
		cout << "---\n";
		cout << d << endl;
		cout << "Decimal number - " << n / d;
	}
};

