#include <iostream>
using namespace std;
int main (){

int ba;
int total = 0;
cout<<"MASUKKAN BILANGAN BULAT:";
cin>>ba;

for(int i=1;i<=ba;i++){
    if( i %2== 1)
    {
    cout << i << " ";
    total += i;
    }
    }
    cout<< endl;
    cout<<"jumlah bilangan ganjil:"<<total<< endl;
    }

