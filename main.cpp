#include <iostream>
using namespace std;
int main(){
  int dim=0;
    cin >> dim;
    float numeri [dim];
    for (int i=0; i< dim; i++){
        cin >> numeri[i];
    }
    numeromax (numeri, dim);
    cout<< numeromax (numeri,dim) <<endl;
  return 0;
}
