#include <iostream>
#include "lib.h"

using namespace std;
int main() {
    int n;
    cin>>n;
    float b[n];
    float x;
    for (int i=0; i< n; i++){
        cin>>x;
        b[i]=x;
    }
    cout<< numeromax(b, n);
    return 0;
}
