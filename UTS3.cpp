
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;


    cout << "Sebelum pertukaran:" << "a= " << a << ", b= " << b << endl;


    if ( b > a ) {
        c = a;
        a = b;
        b = c;
       // cout << "Setelah penukaran:" << "a= " << a << ", b= " << b << endl;
    }
    cout << "Setelah penukaran:" << "a= " << a << ", b= " << b << endl;
}
