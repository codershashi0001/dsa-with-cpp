// write a program to find sum of  natural number

#include <iostream>
using namespace std;

int main (){
    int num,sum=0;

    cout << "Enter a number ";
    cin >> num ;

    for (int i=num; i != 0 ; i--){
      sum = sum + i ;
    }
    // 2nd logic
    //    while (num != 0){
    //   sum = sum + num ;
    //   num--; }              
    cout << sum ;
}
