// Nth term of AP from First Two Terms

#include <iostream>
using namespace std;

int main (){

    int n1 , n2 , i , result , n , diff = 0 ;

    cout << "Find the nth term of you number series through first two number" << endl;
    cout << "Enter first number  " << endl ;
    cin >> n1;
    cout << "Enter second number  " << endl ;
    cin >> n2;
    cout << "Enter nth term  " << endl ;
    cin >> n;

    result = n2 ;
    diff = n2 - n1;
    cout << "your all patterns" << endl;
    cout <<  n1  << " " ;
    cout <<  n2  << " " ;

    for (i= 0; i < (n-2); i++){
        result = result + diff ;
        
        cout <<  result  << " " ;
    }

    cout << endl ;
    cout << "The nth term is : " << result ;


    return 0 ;
}