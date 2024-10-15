#include <iostream>
using namespace std;

int factorial(int n ) {
if (n==0) return 1;
else return n* factorial(n-1) ;
// menambahkan ; setelah (n-1)
}
int main (){
    int num;
    cout << "enter a number: ";
    cin>> num;
    cout <<"factorial of " << num << " is " << factorial(num) <<endl;

    return 0;
}
