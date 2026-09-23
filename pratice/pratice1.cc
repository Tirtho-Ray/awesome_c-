#include <iostream>
using namespace std;

int main  () {
    
// variable and data type
 int a  = 10;
 cout << a << endl;

 string name = "TRax";
 int age  = 10;
 float gpa  = 4.57;

 cout << "Name is :" << name  << " age is :" << age << " cgpa is :" << gpa << endl;



 // input 3 mark and find avg
 int mark1 = 80;
 int mark2 = 90;
 int mark3 = 60;

 int avg  = ( mark1+ mark2+mark3) / 3;

 cout << "avg is :" << avg << endl;



 //Take the radius of a circle and calculate its area.

 int firstArm = 10;
 float secondArm = 10.6;

 float circleArea = firstArm * secondArm * 3.1416;

 cout <<"Area is : " << circleArea << endl;


 int oneMunite = 60;
 int munitTOHr = 60 * 60;

 float result =munitTOHr/ oneMunite ;

 cout << "1 minute to hr = " << result <<endl ;


 //Swap two variables using a third variable.

 int r = 10;
 int b = 50 ;
 int c = r+b;
 cout << c << endl;


 int s = 10;
 int g = 40;

 int res  = s % g;
 cout << res << endl ;


//Take a number and determine whether it is even or odd.

int num;
cin >> num;
cout << "Enter number  :" << endl;

if (num % 2 == 0) {
    cout << "Even number" << endl;

}else {
    cout <<" odd number " << endl;
}


    


}
