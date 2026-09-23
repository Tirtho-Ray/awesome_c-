#include <iostream>
using namespace std;


// // condition 
// // -> if
// // -> if elseTake a number and determine whether it is even or odd.
// // -> if else if else
// // -> switch case
// // -> nested if else


// simple if else statement ---------->

// int main () {
//     int age = 20;

//     if (age <18) {
//         cout << "you are not eligible to vote" << endl;
//     }else {
//         cout << "you are eligible to vote" << endl;
//     };


//     // if else if else

//     int marks = 85;
//     if (marks >= 90)  {
//         cout << "A grade" << endl;
//     } else if (marks >= 80){
//         cout << "B grade" << endl;
//     } else if (marks >= 70){
//         cout << "C grade" << endl;
//     } else {
//         cout << "D grade" << endl;  
//     }
// }


// nested if else ---------->

// int main(){
//     int hight;
//     cout << "Enter your hight : " ;
//     cin >> hight;

//     int weight;
//     cout << "Enter your weight : " ;
//     cin >> weight;

//     if (hight >= 5 ) {
//         if (weight >= 50) {
//             cout << "you are eligible for army" << endl;
//         } else {
//             cout << "you are not eligible for army" << endl;
//         }
//     }else {
//         cout << "you are not eligible for army" << endl;
//     }
// }


// switch case ---------->

// int main() {

//     int password;
//     cout << "Enter your password : " ;
//     cin >> password;

//     switch (password)
//     {
//     case 1234:
//         cout << "your password is correct" << endl;
//         break;
//     case 5678:
//         cout << "your password is correct" << endl;
//         break;
//     case 91011:
//         cout << "your password is correct" << endl;
//         break;
    
//     default:
//         break;
//     }
// }


// int main() {
//     int number ;
//     cout << "Enter then number:" ;
//     cin >> number;

//     switch (number )
//     {
//     case 100:
//         cout << "You got B0ard +";
//         break;
//     case 90 :
//         cout << "you Golden+";
//         break;
//     case 80:
//         cout << " You got A+" ;
//         break;
    
//     default:
//     cout << "low number ";
//         break;
//     }
// }


// ternary operator  -------->

int main () {
    int age = 10;

    ( age >= 18 ) ? cout<<"you are eligible ": cout<<"you are not eligiable";
    
}


