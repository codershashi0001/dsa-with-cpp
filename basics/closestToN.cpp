// wap to find a to to closest to n and divisible by m (m!=0).and the number should be maximum abusolute value

// approach
// user input two number n m first i will divide the number beacause it is a possibility
// i take 2 varibale one is increasing second is decreasing 
// then i divide both but alternate manner
// 
// 
// 
// 
// 

#include <iostream>
using namespace std;
int main (){
int n ,m , i , j , r , d, n1 , n2;

cout << "Enter a number ";
cin >> n;

cout << "Enter a number which not equal to zero ";
cin >> m ;

// r = n / m ;
for (i=0, j = 0;   i < 5; i++, j-- ) {
    n1 = n - j ;
    n2 = n + i;
if (n % m == 0)
{
    cout << endl << n << " is divisible by " << m ;
    break;
} 
else if (n1 % m == 0)
{
    cout << endl << n1 << " is divisible by " << m ;
    break;
}else if (n2 % m == 0) {
    cout << endl << n2 << " is divisible by " << m ;
    break;

}

}




    return 0;
}