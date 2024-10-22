#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Masukkan jumlah bintang paling atas: ";
    cin >> a;

    for (int i = a ; i > 0; i--) {


        for (int p = 0; p < i ; p++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}














