#include <iostream>

using namespace std;

int main() {
    int p;
    cout << "masukkan jumlah bintang paling atas : " ;
    cin >> p;


int i = p;
    do{
        int p = 0;
    do {
        cout << "*";
        p++;
        } while (p < i);
            cout << endl;
            i--;
           } while ( i > 0);
            cout << endl;
    return 0;
}

