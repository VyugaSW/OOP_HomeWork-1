
#include <iostream>
#include "Decimal.h"
#include <conio.h>
using namespace std;
//Задание.
//Реализуйте класс Дробь.Необходимо хранить числитель
//и знаменатель в качестве переменных - членов.Реализуйте
//функции - члены для ввода данных в переменные - члены,
//для выполнения арифметических операций(сложение,
//вычитание, умножение, деление, и т.д.).

//|P.S| О уровнях доступа нет ни словечка, поэтому их я организовал на свой лад.
//И насчёт арифметических операций: сложение между чем? Знаменателем и числителем?
//Если так, то я против, поэтому мой класс хранит две дроби и их будет складывать и прочее.

int main()
{
    Decimal fraction;
    fraction.inputFraction1();
    system("cls");
    fraction.inputFraction2();
    system("cls");
    int s;
    bool flag = true;
    while (flag) {
        system("cls");
        cout << "Selest an operation:\n";
        cout << "1 - adition\n";
        cout << "2 - subtraction\n";
        cout << "3 - multiplication\n";
        cout << "4 - division\n";
        cout << "5 - input new fractions\n";
        cout << "6 - exit\n";
        s = _getch();
        switch (s) {
        case 49:
            system("cls");
            fraction.aditionFraction();
            cout << "\n\nPress any key to return\n";
            _getch();
            break;
        case 50:
            system("cls");
            fraction.subtractionFraction();
            cout << "\n\nPress any key to return\n";
            _getch();
            break;
        case 51:
            system("cls");
            fraction.multiplicationFraction();
            cout << "\n\nPress any key to return\n";
            _getch();
            break;
        case 52:
            system("cls");
            fraction.divisionFraction();
            cout << "\n\nPress any key to return\n";
            _getch();
            break;
        case 53:
            system("cls");
            fraction.inputFraction1();
            system("cls");
            fraction.inputFraction2();
            break;
        case 54:
            flag = false;
            break;         
        }
    }
}

