#include <iostream>
using namespace std;

int main () {
    char y[22] = {'A', 'L', 'F', 'l', 'A', 'N', ' ', 'N', 'A', 'U', 'F', 'A', 'L', ' ', 'S', 'U', 'C', 'A', 'H', 'Y', 'O', '\0'};

    for(int z=0; z<22; z++) {
    cout<< y[z];
    }

    cout<<endl;
    cout<<"ukuran array: "<<sizeof(y)<<endl;

    return 0;
}                                                                                                                                                            