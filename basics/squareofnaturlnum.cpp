// wap to find the sum of square n natural number

#include <iostream>
using namespace std;
int main (){

int num, sum = 0, square;
cout << "enter a number ";
cin >> num ;

while (num != 0){
   
    square = num  * num ;
   sum = sum + square ;
    num--;
}
cout << sum ;
    return 0;
}