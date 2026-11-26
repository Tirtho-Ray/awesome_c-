#include <iostream>
using namespace std;

// basic c++ loops
// int main () {
//     for (int i = 0; i <= 10; i++) {
//         cout << "hello \n";
//     }

//     int a = 0;
//     while (a<=10)
//     {
//        cout <<"while loop \n";
//        a++;
//     }

//     int b = 0;
//     do
//     {
//       cout <<"hi \n";
//       b++;
//     } while (b <=100);

// }

// -practices loop-------------------------- ->>

int main()
{
    // 1: find even number ->
    // for (int i = 0; i <= 10; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << "\n";
    //     };
    // }
    // return 0;

    // 2: sum Digits of int ->
    int num = 1010;
    int sum = 0;
    int temp = (num < 0) ? -num : num;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    cout << "Sum of digits: " << sum << endl;
}
