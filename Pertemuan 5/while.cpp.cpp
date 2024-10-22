#include <iostream>

using namespace std;

int main() {
    int p;
    cout << "masukkan jumlah bintang paling atas :";
    cin >> p;

int i = p;
    while( i > 0 ) {
        int p = 0;
        while ( p < i ) {
            cout << "*";
            p++;
        }
        cout << endl;
        i--;
    }


return 0;
}

