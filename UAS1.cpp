#include <iostream>

using namespace std;

int main(){
int bilangan;
 for (int i = 0; i < 3; i++){
cout<<"masukkan bilangan:";
cin>>bilangan;

if (bilangan >0){
    cout<<"bilangan tersebut positif";
    }
else if(bilangan==0){
    cout<<"bilangan tersebut nol";
}

else {cout<<"bilangan tersebut negatif";
}
cout<<endl;
}
}
