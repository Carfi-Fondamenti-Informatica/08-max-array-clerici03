#include "lib.h"

float numeromax (float b[], int n) {
    float c=1;
    for (int j=0; j<n; j++) {
        if (b[j]>c) {
            c =b[j];
        }
    }
    return c;
}
