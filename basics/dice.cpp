// write a program to solve the dice problem if user give the any input then you give the result of opposite side of dice

#include <iostream>
using namespace std;

int main () {
int number ;
cout << "enter a number ";
cin >> number;

switch (number) {
case 1 : 
cout << "6" ;
break;
case 2 : 
cout << "5" ;
break;
case 3 : 
cout << "4" ;
break;
case 4 : 
cout << "3" ;
break;
case 5 : 
cout << "2" ;
break;
case 6 : 
cout << "1" ;
break;

    default:
    cout << "you write a wrong number";
}

    return 0;
}