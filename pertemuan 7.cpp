#include <iostream>

using namespace std;

// Function declaration for addition
int add(int a, int b);

// Procedure (void function) declaration for subtraction
void perhitungan (int a, int b);
int kurang(int a,int b);

int main() {
    int num1,num2;
    cout <<"masukkan angka pertama:";
    cin >> num1;
    cout <<"masukkan angka kedua:";
    cin >>num2;

    // Calling the addition function
    int sum = add(num1, num2);
    cout << "PENJUMLAHAN: " << sum << endl;

    int sum1 = kurang(num1, num2);
    cout << "PENGURANGAN: " <<sum1<< endl;



    // Calling the subtraction procedure
   perhitungan (num1, num2);

    return 0;
}

// Function definition for addition
int add(int a, int b) {
    return a + b;}

int kurang (int a, int b){
    return a-b;}

// Procedure (void function) definition for subtraction
void perhitungan (int a, int b) {

    int  pembagian =a / b;
    cout << "PEMBAGIAN  : "<<pembagian<< endl;

    int kali = a*b;
    cout << "PERKALIAN  :"<<kali<< endl;

}

