// wap to reverse a number

#include <iostream>
using namespace std;

int main(){
     int n, r ,reverse = 0 ;

     cout << "Enter a number to reverse the number. "; 
     cin >> n ;

     while (n > 0 ){
        r = n % 10;
reverse = reverse * 10 + r ;
n = n / 10 ;
     }

     cout << reverse ;

    return 0;
}


// n  143 > 1
// 143 % 10 = 3 , n = 14
// 14 % 10 = 4 , n = 1
// 1 % 10 = 1 , n = 