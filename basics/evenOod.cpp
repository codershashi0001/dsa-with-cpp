// wap to check the given number is odd or even

#include <iostream>
using namespace std;

int main () {
    int a;
    cout << "Enter a number and check its even or odd ";  
    cin >> a;     // user give the input
    if ((a % 2) == 0)  // check the condition number is divisible by 2 or not 
    cout << a << " is a even number";  
    else
     cout << a << " is a odd number";
return 0;
}