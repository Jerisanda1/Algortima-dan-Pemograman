#include <iostream>
using namespace std;

float tambah(float a, float b) {
    return a + b;
}
float kurang(float a, float b) {
   return a - b;
}
float kali(float a, float b) {
    return a * b;
}
float bagi(float a, float b) {
    if (b == 0) {
        cout << "Pembagian dengan nol tidak diperbolehkan!" << endl;
        return 0;
    }
   return a / b;
}
void tampilkanMenu() {
    cout << "Kalkulator Sederhana" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Keluar" << endl;
}

int main() {
    int p;
    float num1, num2;

    do {
        tampilkanMenu();

        cout << "Pilih operasi hitung (1/2/3/4/5): ";
        cin >> p;

      if (p== 5) {
            cout << "Keluar dari program..." << endl;
            break;
        }
        cout << "Masukkan angka pertama: ";
        cin >> num1;
        cout << "Masukkan angka kedua: ";
        cin >> num2;
        switch(p) {
            case 1:
                cout << "Hasil: " << tambah(num1, num2) << endl;
                break;
            case 2:
                cout << "Hasil: " << kurang(num1, num2) << endl;
                break;
            case 3:
                cout << "Hasil: " << kali(num1, num2) << endl;
                break;
            case 4:
                cout << "Hasil: " << bagi(num1, num2) << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

    } while(true);

    return 0;
}
