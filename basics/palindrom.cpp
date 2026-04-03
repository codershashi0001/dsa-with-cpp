#include <iostream>
using namespace std;

int main(){
     int n, r ,reverse = 0 , num;

     cout << "Enter a number to reverse the number. "; 
     cin >> n ;
num = n ;
     while (n > 0 ){
        r = n % 10;
reverse = reverse * 10 + r ;
n = n / 10 ;
     }

if (num == reverse){
    cout << endl << num << " is a palindrom number.";
}else {
    cout << endl << num << " is not a palindrom number.";
    
}
    return 0;
}