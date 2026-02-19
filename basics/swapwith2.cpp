// write a program to swap a number with two variable

#include <iostream>
using namespace std;

int main (){

int first, second ;
cout << "enter first number ";
cin >> first;
cout << "enter second number " ;
cin >> second;

cout << endl <<  "your number is before swapping" << endl <<"first number " << first << "  "  << "second number "<< second  << endl << endl ;
// temp = first ;
// first = second;
// second = temp ;
first = first + second ;  
 second = first -  second ; 
first = first -  second ;

cout << "your number is after swapping"  << endl << "first number " << first << "  " << "second number " << second  << endl ;
    return 0;
}