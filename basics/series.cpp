// write a program to find Nth term of AP from First Two Terms

#include <iostream>
using namespace std;

int main (){
  
       int first, second , n ,diff = 0, result = 0 , i,j,res = 0 ;
       cout << "enter first number ";
       cin >> first;
       cout << "enter second number";
       cin >> second ; 
       cout << "enter which term you want";
       cin >> n;
//  if (n == 2 || n == 1)
//  cout << "invalid number, number shoubd be greater than zero";
       diff = second - first ;
       
        result = second + diff ;
       
       for (i=1; i < (n - 2); i++){
        
        if (n != 2 || n != 1){
          res = result;
         res = res + diff ;}
       
        
        // if (i<1)
        // result = second + diff ;
        // else 
        // result = result + diff;

       }
if (res>0)
       cout << res ;
       else
       cout << "invalid nth number";
     
    return 0;
}