#include <iostream>
#include <string>
using namespace std;

int main () {
    const int n = 3;
    string y[n];

    cout<<"masukkan "<< n <<" nilai string:\n";
    for (int z=0; z<n; z++) {
        cout << "y[" << z << "] = ";
        getline(cin, y[z]);
    }
    
    cout << "\nisi srray string: \n";
    for (int z=0; z<n; z++) {
       cout << y[z];
       cout << " ";
    }

    cout<<" ";

    return 0;
}