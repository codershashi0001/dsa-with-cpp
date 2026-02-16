// write a program to write a table from given number

#include <iostream>
using namespace std;

int main (){
int num,result;
cout << "Enter a number to write the table of the number ";
cin >>  num ;

if (num == 0) {
    cout << " you typed zero (0) and there is not a valid number for table because if we multi[ly any number from zero then result is alwags give us zero] ";
}
else {
for (int i=1; i<=10 ; i++) {
result = num * i ;
cout << num << " * " << i << "  = " << result << endl;
}
}
    return 0;
}