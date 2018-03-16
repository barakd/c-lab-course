#include "data.h"

int zugi(int a[]){
    int i, c;
    for (c = i = 0; i < size; i++){
        c += (a[i] % 2) ? 0 : 1;
    }
    return c;
}
