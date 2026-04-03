#include <iostream>
using namespace std;

int main(){
int num;

cout << "Enter a number to check its a positive number or negative number aur its zero ";
cin >> num;
if (num > 0){
    cout  << num << " is a positive number";
    
}else if (num == 0){
    cout  << num << " is Zero";
    
}else {
    
    cout  << num << " is a negative number";
}

    return 0;
}