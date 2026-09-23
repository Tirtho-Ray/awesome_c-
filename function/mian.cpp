#include <iostream>
using namespace std;

int additionSomeNumber  (int a, int b , int c) {
    return a+b+c;
};

void printserialNumberOneToHundred () {
    for ( int a = 0; a<=100; a++){
        cout << a << endl;
    }
}

int cToFh (int far) {
    int  cel  = ( far -32) * 5/9;
    return cel;
}

int main () {

    int result  = additionSomeNumber(1,2,3);
    cout << result << endl;

    printserialNumberOneToHundred();

    int resultFar  =  cToFh (40);
    cout << resultFar  << endl;



}