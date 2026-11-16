#include <Iostream>
using namespace std;

int main () {
    int a[8];
    int y,z;
    cout<<"masukkan nilai array" <<endl;

    for(y=0; y<8; y++) {
    cout<<"a["<<y<<"] = "; cin>>a[y];
    }
    
    cout<<'\n';
    cout<<"menampilkan nilai yang telah dimasukkan"<<endl;
    for(z=0; z<8; z++) {
    cout<< "nilai yang terdapat pada elemen ke- ";
    cout<<z+1<<" : "<<a[z]<<endl;
    }

    return 0;
    
}