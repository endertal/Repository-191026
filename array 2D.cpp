#include <iostream>
using namespace std;

int main () {
    int y[5][4];
    int a, b;

    for (a=0; a<5; a++) {
        for (b=0; b<4; b++) {
            cout<<"masukkan nilai untuk a["<<a<<"] ["<<b<<"]: ";
            cin>>y[a][b];
        }
    }

    for (a=0; a<5; a++) {
        for (b=0; b<4; b++) {
            cout<<y[a][b] << " ";
        }
    cout<<endl;
    }
    return 0;
}