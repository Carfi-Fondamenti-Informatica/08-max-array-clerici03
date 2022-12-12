
#include "lib.h"

float numeromax ( float numeri[], int dim) {
    int massimo=0;
    for (int i = 0; i < dim; i++) {
        if (massimo < numeri[i]) {
            massimo = numeri[i];
        }
    }
return massimo;
}
