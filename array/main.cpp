#include <iostream>
using namespace std;

int main () {
    int number [5] = {1,2,3,4,5}; // declare arr
    cout << number[0] << endl;  // access array 

    // modify arr element
     number[0] = 100;   // select index where need change .

     cout << number[0] << endl;



    // Array + loop 
    for ( int i = 0; i < 5; i++) {
        cout << number [i] << endl ;
    }

    // finding aray size ----------------------------------->
    // int arrSize  = sizeof (number) / sizeof(number[0]);
    // cout << arrSize << endl;

    // Taking array input 

    int arrNumber[5];

    for (int i =0; i <=5; i++) {
        cin >> arrNumber[i] ;
        cout << arrNumber << endl;
    }

}