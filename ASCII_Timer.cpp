#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <string>
using namespace std;


void ClearScreen() {
    cout << string( 100, '\n' );
}

void Template (int number) {
    if (number == 0) {
        cout << "0000000000" << endl;
        cout << "0        0" << endl;
        cout << "0        0" << endl;
        cout << "0        0" << endl;
        cout << "0        0" << endl;
        cout << "0        0" << endl;
        cout << "0        0" << endl;
        cout << "0        0" << endl;
        cout << "0        0" << endl;
        cout << "0        0" << endl;
        cout << "0000000000" << endl;
    }
    if (number == 1) {
        cout << "         1" << endl;
        cout << "         1" << endl;
        cout << "         1" << endl;
        cout << "         1" << endl;
        cout << "         1" << endl;
        cout << "         1" << endl;
        cout << "         1" << endl;
        cout << "         1" << endl;
        cout << "         1" << endl;
        cout << "         1" << endl;
        cout << "         1" << endl;
    }
    if (number == 2) {
        cout << "2222222222" << endl;
        cout << "         2" << endl;
        cout << "         2" << endl;
        cout << "         2" << endl;
        cout << "         2" << endl;
        cout << "2222222222" << endl;
        cout << "2         " << endl;
        cout << "2         " << endl;
        cout << "2         " << endl;
        cout << "2         " << endl;
        cout << "2222222222" << endl;
    }
    if (number == 3) {
        cout << "3333333333" << endl;
        cout << "         3" << endl;
        cout << "         3" << endl;
        cout << "         3" << endl;
        cout << "         3" << endl;
        cout << "3333333333" << endl;
        cout << "         3" << endl;
        cout << "         3" << endl;
        cout << "         3" << endl;
        cout << "         3" << endl;
        cout << "3333333333" << endl;
    }
    if (number == 4) {
        cout << "4        4" << endl;
        cout << "4        4" << endl;
        cout << "4        4" << endl;
        cout << "4        4" << endl;
        cout << "4        4" << endl;
        cout << "4444444444" << endl;
        cout << "         4" << endl;
        cout << "         4" << endl;
        cout << "         4" << endl;
        cout << "         4" << endl;
        cout << "         4" << endl;
    }
    if (number == 5) {
        cout << "5555555555" << endl;
        cout << "5         " << endl;
        cout << "5         " << endl;
        cout << "5         " << endl;
        cout << "5         " << endl;
        cout << "5555555555" << endl;
        cout << "         5" << endl;
        cout << "         5" << endl;
        cout << "         5" << endl;
        cout << "         5" << endl;
        cout << "5555555555" << endl;
    }
    if (number == 6) {
        cout << "6666666666" << endl;
        cout << "6         " << endl;
        cout << "6         " << endl;
        cout << "6         " << endl;
        cout << "6         " << endl;
        cout << "6666666666" << endl;
        cout << "6        6" << endl;
        cout << "6        6" << endl;
        cout << "6        6" << endl;
        cout << "6        6" << endl;
        cout << "6666666666" << endl;
    }
    if (number == 7) {
        cout << "7777777777" << endl;
        cout << "         7" << endl;
        cout << "         7" << endl;
        cout << "         7" << endl;
        cout << "         7" << endl;
        cout << "         7" << endl;
        cout << "         7" << endl;
        cout << "         7" << endl;
        cout << "         7" << endl;
        cout << "         7" << endl;
        cout << "         7" << endl;
    }
    if (number == 8) {
        cout << "8888888888" << endl;
        cout << "8        8" << endl;
        cout << "8        8" << endl;
        cout << "8        8" << endl;
        cout << "8        8" << endl;
        cout << "8888888888" << endl;
        cout << "8        8" << endl;
        cout << "8        8" << endl;
        cout << "8        8" << endl;
        cout << "8        8" << endl;
        cout << "8888888888" << endl;
    }
    if (number == 9) {
        cout << "9999999999" << endl;
        cout << "9        9" << endl;
        cout << "9        9" << endl;
        cout << "9        9" << endl;
        cout << "9        9" << endl;
        cout << "9999999999" << endl;
        cout << "         9" << endl;
        cout << "         9" << endl;
        cout << "         9" << endl;
        cout << "         9" << endl;
        cout << "9999999999" << endl;
    }
}

int main()
{
    int const SEC_PER_MIN = 60;
    int number = 0;
    cin >> number;

    int minute = number / SEC_PER_MIN, second = number % SEC_PER_MIN;
    cout << minute << " " << second << endl;


    int minArr[3] = {0}, secArr[2] = {0};

    bool flag = 0;
    for (int i = minute; i >= 0; i--) {
        if (flag == 0){
            for (int k = second; k >= 0; k--) {

                minArr[2] = i % 10;
                if (i < 10) {
                minArr[1] = 0;
                }
                else {
                    minArr[1] = (i / 10) % 10;
                }
                minArr[0] = i / 100;

                secArr[1] = k % 10;
                if (k < 10) {
                    secArr[0] = 0;
                }
                else {
                    secArr[0] = (k / 10) % 10;
                }
                Template (minArr[0]); Template (minArr[1]); Template (minArr[2]); Template (secArr[0]); Template (secArr[1]);
                sleep(1);
            }
            flag = 1;
        }
        else {
            for (int j = 59; j >= 0; j--) {

                minArr[2] = i % 10;
                if (i < 10) {
                minArr[1] = 0;
                }
                else {
                    minArr[1] = (i / 10) % 10;
                }
                minArr[0] = i / 100;

                secArr[1] = j % 10;
                if (j < 10) {
                    secArr[0] = 0;
                }
                else {
                    secArr[0] = (j / 10) % 10;
                }
                Template (minArr[0]); Template (minArr[1]); Template (minArr[2]); Template (secArr[0]); Template (secArr[1]);
                sleep(1);
            }
        }

    }

    return 0;
}
