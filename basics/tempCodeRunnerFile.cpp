// write a program to find Nth term of AP from First Two Terms

#include <iostream>
using namespace std;

int main (){
  
       int first, second , n ,diff = 0, result = 0 , i,j,res ;
       cout << "enter first number ";
       cin >> first;
       cout << "enter second number";
       cin >> second ; 
       cout << "enter which term you want";
       cin >> n;

       diff = second - first ;
       
        result = second + diff ;
        res = result;
       for (i=1; i < (n - 2); i++){

         res = res + diff ;
        
        // if (i<1)
        // result = second + diff ;
        // else 
        // result = result + diff;

       }

       cout << res ;
     
    return 0;
}