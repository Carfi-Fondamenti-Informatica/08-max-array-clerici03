#include <iostream>
#include "lib.h.h"

using namespace std;
int main() {
    int dim=0;
    cin >> dim;
    float numeri[dim];
    float x;
    for (int i=0; i< dim; i++){
        cin >> x;
        numeri[i]=x;
    }
    cout<< numeromax( numeri, dim);
    return 0;
}
