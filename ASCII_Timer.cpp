#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <string>
#include <stdlib.h>
using namespace std;

void ClearScreen() {
    cout << string( 100, '\n' );
}

void Template (int min1, int min2, int min3, int sec1, int sec2) {
    char dots[11][3]= {//0
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
                    {//0
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
                    {//1
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
                    {//2
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
                    {//3
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
                    {//4
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
                    {//5
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
                    {//6
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
                    {//7
                        {'7','7','7','7','7','7','7','7','7','7'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'}
                    },
                    {//8
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
                    {//9
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
    for (int i = 0; i < 11; i++){
        for (int j = 0; j < 50; j++){

            if (j == 0) {

                cout << setw(11);
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

}

int main()
{
    int const SEC_PER_MIN = 60;
    int number = 0;
    cin >> number;

    int minute = number / SEC_PER_MIN, second = number % SEC_PER_MIN;
    cout << minute << " " << second << endl;


    int minArr[3] = {0}, secArr[2] = {0};

    /*bool flag = 0;
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
                system ("CLS");
                Template (minArr[0], minArr[1],minArr[2], secArr[0], secArr[1]);
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

                system ("CLS");
                sleep(1);
                Template (minArr[0], minArr[1],minArr[2], secArr[0], secArr[1]);

            }

        }
    }*/
    Template (1, 2, 3, 4, 5);
    cout <<'\a';

    return 0;
}
