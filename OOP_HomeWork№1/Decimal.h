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
	//������� ���������, ������� ������������ ���
	//���� ������ �����
	void inputFraction1() {
		cout << "Enter a numerator 1: "; cin >> numerator1; //�� ����, ����� �� ��� �������� �������,
		cout << "Etner a denominator 1: "; cin >> denominator1; //�� ���� ���, �� �����, �� �������� �� �������
	} 
	//���� ������ �����
	void inputFraction2() {
		cout << "Enter a numerator 2: "; cin >> numerator2;
		cout << "Etner a denominator 2: "; cin >> denominator2;
	} 
	//�������� ������
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
	//��������� ������
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
	//��������� ������
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
	//������� ������
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

