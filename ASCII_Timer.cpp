#include <iostream>
#include <iomanip>
#include <windows.h>
#include <unistd.h>

using namespace std;

void Zero (int number) {
    cout << "          " << endl;
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
    cout << "          " << endl;
}
void One (int number) {
    cout << "          " << endl;
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
    cout << "          " << endl;
}
void Two (int number) {
    cout << "          " << endl;
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
    cout << "          " << endl;
}
void Tree (int number) {
    cout << "          " << endl;
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
    cout << "          " << endl;
}
void Four (int number) {
    cout << "          " << endl;
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
    cout << "          " << endl;
}
void Five (int number) {
    cout << "          " << endl;
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
    cout << "          " << endl;
}
void Six (int number) {
    cout << "          " << endl;
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
    cout << "          " << endl;
}
void Seven (int number) {
    cout << "          " << endl;
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
    cout << "          " << endl;
}
void Eight (int number) {
    cout << "          " << endl;
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
    cout << "          " << endl;
}
void Nine (int number) {
    cout << "          " << endl;
    cout << "          " << endl;
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
    cout << "          " << endl;
}

int main()
{
	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);

   MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 800, 250, TRUE);

   system ("pause");


    int number = 0;
    Zero (number);
    sleep(1);//sleeps for 1 second
    One (number);
    sleep(1);//sleeps for 1 second
    Two (number);
    sleep(1);//sleeps for 1 second
    Tree (number);
    sleep(1);//sleeps for 1 second
    Four (number);
    sleep(1);//sleeps for 1 second
    Five (number);
    sleep(1);//sleeps for 1 second
    Six (number);
    sleep(1);//sleeps for 1 second
    Seven (number);
    sleep(1);//sleeps for 1 second
    Eight (number);
    sleep(1);//sleeps for 1 second
    Nine (number);
    sleep(1);//sleeps for 1 second
    cout << '\a';
    return 0;
}
