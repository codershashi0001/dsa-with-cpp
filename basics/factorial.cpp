#include <iostream>
using namespace std;

int main (){
    // concept if n = 5 
    // 5 * 4 * 3 * 2 * 1 or 1 * 2 * 3 * 4 * 5
int n ,result = 1, p;

cout << "Enter a number to find the factorial ";
cin >> n ;
p = n ;
while ( n > 0){
result = result * n ;
cout << n ;
if (n>1){
    cout << " * ";
} else {
    cout << " = ";
    cout << result ;
}
n-- ;
}
 cout << endl << result << " is the factorial of " << p ;
return 0;
}