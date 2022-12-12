#include <iostream>
#include "lib.h.h"

using namespace std;
int main() {
    int n;
    cin>>n;
    float numeri[n];
    float x;
    for (int i=0; i< n; i++){
        cin>>x;
        numeri[i]=x;
    }
    cout<< numeromax(b, n);
    return 0;
}
