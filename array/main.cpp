// #include <iostream>
// using namespace std;

// int main()
// {
//     int number[5] = {1, 2, 3, 4, 5}; // declare arr
//     cout << number[0] << endl;       // access array

//     // modify arr element
//     number[0] = 100; // select index where need change .

//     cout << number[0] << endl;

//     // Array + loop
//     for (int i = 0; i < 5; i++)
//     {
//         cout << number[i] << endl;
//     }

//     // finding aray size ----------------------------------->
//     // int arrSize  = sizeof (number) / sizeof(number[0]);
//     // cout << arrSize << endl;

//     // Taking array input

//     int arrNumber[5];

//     for (int i = 0; i <= 5; i++)
//     {
//         cin >> arrNumber[i];
//         cout << arrNumber << endl;
//     }
// }

// ----------------------------------------------------- >>>>>>>>>>>>>> <<<<<<<<<<<<<<<<<<< ---------------------------
// #include <iostream>
// using namespace std;
// #include <array>

// int main()
// {
//     // int a[5];                        // Uninitialized (garbage values)
//     // int b[5] = {10, 20, 30, 40, 50}; // Full initialization
//     // int c[5] = {1, 2};               // Remaining elements become 0 -> {1, 2, 0, 0, 0}
//     // int d[5] = {};                   // All zeros -> {0, 0, 0, 0, 0}
//     // int e[] = {7, 8, 9};             // Compiler deduces size = 3

//     // cout << b[0] << "\n"; // Access first element (10)
//     // b[2] = 35;            // Modify third element
//     // return 0;

//     int arr[4] = {1, 2, 3, 4};

//     array<int, 5> modernArray = {10, 20, 30, 40, 50}; // type + array size

//     cout << modernArray.front() << "Font first  data " << "\n";
//     cout << modernArray.size() << "Total array size" << "\n";
//     cout << modernArray.back() << "Last element of array " << "\n";
//     cout << modernArray.at(2) << "access 2 number index" << "\n";

//     // range base example

//     for (int x : modernArray)
//     {
//         cout << x << "" << "\n";
//     }
// }

// =======================>> Array damnation  <<====================

#include <iostream>
#include <array>
using namespace std;

int main()
{
    // 1D array
    int arr[4] = {1, 2, 3, 4};

    // for (arr)
}

// int main()
// {
//     // 2D array
//     // C-style 2D array (2 rows, 3 columns)
//     int mat[2][3] = {{1, 2, 3}, {1, 2, 3}};

//     // cout << mat;
// }

// int main()
// {
//     // 3d array (2 layer depth) -> (3 column) -> (3 columns) ..
//     int threeDArray[2][3][4] = {
//         {{1, 2, 3},
//          {1, 2, 3},
//          {1, 2, 3}},

//         {{3, 4, 5},
//          {3, 4, 5},
//          {3, 4, 5}}

//     };
// }