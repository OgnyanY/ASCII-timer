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
        cout << "\n\n\n\n\n\n" << endl;
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
        cout << "\n\n\n\n\n\n" << endl;
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
        cout << "\n\n\n\n\n\n" << endl;
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
        cout << "\n\n\n\n\n\n" << endl;
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
        cout << "\n\n\n\n\n\n" << endl;
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
        cout << "\n\n\n\n\n\n" << endl;
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
        cout << "\n\n\n\n\n\n" << endl;
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
        cout << "\n\n\n\n\n\n" << endl;
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
        cout << "\n\n\n\n\n\n" << endl;
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
        cout << "\n\n\n\n\n\n" << endl;
    }
}

int main()
{

    int number = 0;
    cin >> number;
    ClearScreen();
    Template (number);
    sleep(1);//sleeps for 1 second
    ClearScreen();
    Template (number);
    sleep(1);//sleeps for 1 second
    ClearScreen();
    Template (number);
    sleep(1);//sleeps for 1 second
    ClearScreen();
    Template (number);
    sleep(1);//sleeps for 1 second
    ClearScreen();
    cout << '\a';
    Template (number);

    return 0;
}
