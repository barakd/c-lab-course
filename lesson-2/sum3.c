#include "data.h"
#include <math.h>
int sum3(int a[]){
    int i, sum;
    for (sum = i = 0; i < size; i++){
        sum += pow(a[i], 3);
    }
    return sum;
}