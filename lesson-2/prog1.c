#include "data.h"

void kelet(int[]);
void pelet(int[]);
int zugi(int[]);
int sum3(int[]);

int main(){
    int a[size];
    int cnt;
    kelet(a);
    pelet(a);
    cnt = sum3(a);
    printf("\n sum = %d \n ", cnt);
    return 0;
}