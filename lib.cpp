#include "lib.h"

float numeromax (float b[], int n) {
    float c=1;
    for (int j=0; j<n; j++) {
        if (numeri[j]>c) {
            c =numeri[j];
        }
    }
    return c;
}
