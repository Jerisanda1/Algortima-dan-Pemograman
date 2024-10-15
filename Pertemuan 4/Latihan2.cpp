#include <iostream>

using namespace std;
//mengganti int jadi char dan menambahkan '' pada case
int main () {
    char num;
    cout << "enter a number: ";
    cin>> num;

    switch (num) {
case '1' :
    cout << "one" << endl;
    break;
case '2':
    cout << "two" << endl;
    break;
default:
    cout<< "other number" << endl;
    }



    return 0;

}
