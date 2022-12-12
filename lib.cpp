#include "lib.h.h"

int numeromax ( int numeri[], int dim) {
    float massimo= 1;
    for (int j= 0; j< dim; j++) {
        if (numeri[j] > massimo) {
            massimo =numeri[j];
        }
    }
    return massimo;
}
