/*
Проект 1.1

Данная программа переводит футы в метры
*/

#include <iostream>
using namespace std;

int main()
{
    double f, m;

    cout << "Введите длинну в футах: ";
    cin >> f;

    m = f / 3.28;
    cout << f << "футов равны " << m << "метров";

    return 0;
}