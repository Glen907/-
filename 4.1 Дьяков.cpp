#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL ,"RU");

    int col;
    int a = 0;
    char simb;
    int n;

    cout << " Введите выводимое количество символов: ";
    cin >> col;

    cout << " Выведите выводимый символ: ";
    cin >> simb;

    cout << " Выберите уву вывести выделенный символ: " << endl <<
        "1. Горизонтально " << endl <<
        "2. Вертикально " << endl;
    cin >> n;

    while (a < col)
    {
        switch(n) 
        {
            case 1:
                cout << simb;
                a++;
                break;
            case 2:
                cout << simb << endl;
                a++;
                break;
            default:
                cout << " Ошибка! Такой линии не предусмотренно! ";
                break;
        }
    }
    cout << endl;
}
