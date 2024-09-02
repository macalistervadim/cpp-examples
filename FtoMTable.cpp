/*
    Проект 1.2

    Программа выводит таблицу результатов преобразования футов в метры
*/

#include <iostream>
using namespace std;

int main() {
    double f, m;
    int counter;

    counter = 0;

    for(f = 10; f <= 100.0; f++) {
        m = f / 3.28;
        cout << f << " feet is " << m << " meters.\n";

        counter++;

        if(counter == 25) {
            cout << "\n";
            counter = 0;
        }
    }

    return 0;
}