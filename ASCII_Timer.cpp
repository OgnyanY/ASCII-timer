#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

void Template (int min1, int min2, int min3, int sec1, int sec2) {
    char dots[11][3]= {//This is template for #.
                        {' ',' ',' '},
                        {' ',' ',' '},
                        {' ',' ',' '},
                        {' ','#',' '},
                        {' ',' ',' '},
                        {' ',' ',' '},
                        {' ',' ',' '},
                        {' ','#',' '},
                        {' ',' ',' '},
                        {' ',' ',' '},
                        {' ',' ',' '}
    };

    char temp[10][11][10] = {
                    {//This is template for 0.
                        {'0','0','0','0','0','0','0','0','0','0'},
                        {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                        {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                        {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                        {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                        {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                        {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                        {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                        {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                        {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                        {'0','0','0','0','0','0','0','0','0','0'}
                    },
                    {//This is template for 1.
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','1'}
                    },
                    {//This is template for 2.
                        {'2','2','2','2','2','2','2','2','2','2'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','2'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','2'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','2'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','2'},
                        {'2','2','2','2','2','2','2','2','2','2'},
                        {'2',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {'2',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {'2',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {'2',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {'2','2','2','2','2','2','2','2','2','2'}
                    },
                    {//This is template for 3.
                        {'3','3','3','3','3','3','3','3','3','3'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                        {'3','3','3','3','3','3','3','3','3','3'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                        {'3','3','3','3','3','3','3','3','3','3'}
                    },
                    {//This is template for 4.
                        {'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                        {'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                        {'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                        {'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                        {'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                        {'4','4','4','4','4','4','4','4','4','4'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','4'}
                    },
                    {//This is template for 5.
                        {'5','5','5','5','5','5','5','5','5','5'},
                        {'5',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {'5',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {'5',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {'5',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {'5','5','5','5','5','5','5','5','5','5'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','5'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','5'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','5'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','5'},
                        {'5','5','5','5','5','5','5','5','5','5'}
                    },
                    {//This is template for 6.
                        {'6','6','6','6','6','6','6','6','6','6'},
                        {'6',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {'6',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {'6',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {'6',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {'6','6','6','6','6','6','6','6','6','6'},
                        {'6',' ',' ',' ',' ',' ',' ',' ',' ','6'},
                        {'6',' ',' ',' ',' ',' ',' ',' ',' ','6'},
                        {'6',' ',' ',' ',' ',' ',' ',' ',' ','6'},
                        {'6',' ',' ',' ',' ',' ',' ',' ',' ','6'},
                        {'6','6','6','6','6','6','6','6','6','6'}
                    },
                    {//This is template for 7.
                        {'7','7','7','7','7','7','7','7','7','7'},
                        {' ',' ',' ',' ',' ',' ',' ',' ','7','7'},
                        {' ',' ',' ',' ',' ',' ',' ',' ','7',' '},
                        {' ',' ',' ',' ',' ',' ',' ','7',' ',' '},
                        {' ',' ',' ',' ',' ',' ','7',' ',' ',' '},
                        {' ',' ',' ',' ',' ','7',' ',' ',' ',' '},
                        {' ',' ',' ',' ','7',' ',' ',' ',' ',' '},
                        {' ',' ',' ','7',' ',' ',' ',' ',' ',' '},
                        {' ',' ','7',' ',' ',' ',' ',' ',' ',' '},
                        {' ','7',' ',' ',' ',' ',' ',' ',' ',' '},
                        {'7',' ',' ',' ',' ',' ',' ',' ',' ',' '}
                    },
                    {//This is template for 8.
                        {'8','8','8','8','8','8','8','8','8','8'},
                        {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                        {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                        {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                        {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                        {'8','8','8','8','8','8','8','8','8','8'},
                        {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                        {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                        {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                        {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                        {'8','8','8','8','8','8','8','8','8','8'}
                    },
                    {//This is template for 9.
                        {'9','9','9','9','9','9','9','9','9','9'},
                        {'9',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                        {'9',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                        {'9',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                        {'9',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                        {'9','9','9','9','9','9','9','9','9','9'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                        {'9','9','9','9','9','9','9','9','9','9'}
                    }
    };
    cout << "\n\n\n\n\n\n\n";//centration
    //This is for the print.
    for (int i = 0; i < 11; i++){
        for (int j = 0; j < 50; j++){

            if (j == 0) {

                cout << setw(11);//
            }
            if (j < 10){
                cout << temp[min1][i][j];
                continue;
            }
            if (j == 10){
                cout << ' ';
            }
            if (j>=10 && j < 20){
                cout << temp[min2][i][j-10];
                continue;
            }
            if (j == 20){
                cout << ' ';
            }
            if (j>=20 && j < 30){
                cout << temp[min3][i][j-20];
                continue;
            }
            //This is when the minutes part is printed.
            //Here I print the dots part.
            if (j == 30){
                for (int k = 0; k < 3; k++){
                    cout << dots[i][k];
                }
            }
            if (j>=30 && j < 40){
                cout << temp[sec1][i][j-30];
                continue;
            }
            if (j == 40){
                cout << ' ';
            }
            if (j>=40 && j < 50){
                cout << temp[sec2][i][j-40];
                continue;
            }

        }
        cout << endl;
    }
    cout << "\n\n\n\n\n\n\n";//centration

}


void Timer (int number){

    int const SEC_PER_MIN = 60;
    int const SECONDS_AFTER = 59;
    int minutes = number / SEC_PER_MIN,
        seconds = number % SEC_PER_MIN;

    int minArr[3] = {0}, secArr[2] = {0};

    for (int i = minutes; i >= 0; i--) {
        //The first scroll of this loop is for the first seconds.
        for (int k = seconds; k >= 0; k--) {

            minArr[2] = i % 10;
            minArr[1] = (i / 10) % 10;
            minArr[0] = i / 100;

            secArr[1] = k % 10;
            secArr[0] = (k / 10) % 10;

            system ("CLS");//this clean the screen
            Template (minArr[0], minArr[1],minArr[2], secArr[0], secArr[1]);
            sleep(1);//this make the program to wait 1 second
        }
        seconds = SECONDS_AFTER;

    }
    cout <<'\a';
}

int main()
{
    int number = 0;
    cout << "Please insert seconds: ";
    cin >> number;

    Timer (number);

    return 0;
}
