
#include <iostream>
using namespace std;
int main() {
    
    int arrInt[10] = {1, 20, 32, 4, 1, 2, 2, 54, 23, 0};
    short arrShort[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    long arrLong[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    float arrFloat[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
    double arrDouble[10] = {1.11, 2.22, 3.33, 4.44, 5.55, 6.66, 7.77, 8.88, 9.99, 10.0};
    char arrChar[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    bool arrBool[10] = {true, false, true, true, false, true, false, true, true, false};

    
    cout << "[ + ] Массив INT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrInt[" << i << "] = " << arrInt[i] << endl;
    }

    cout << "[ + ] Массив SHORT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrShort[" << i << "] = " << arrShort[i] << endl;
    }

    cout << "[ + ] Массив LONG:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrLong[" << i << "] = " << arrLong[i] << endl;
    }

    cout << "[ + ] Массив FLOAT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrFloat[" << i << "] = " << arrFloat[i] << endl;
    }

    cout << "[ + ] Массив DOUBLE:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrDouble[" << i << "] = " << arrDouble[i] << endl;
    }

    cout << "[ + ] Массив CHAR:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrChar[" << i << "] = " << arrChar[i] << endl;
    }

    cout << "[ + ] Массив BOOL:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrBool[" << i << "] = " << arrBool[i] << endl;
    }

    return 0;
}