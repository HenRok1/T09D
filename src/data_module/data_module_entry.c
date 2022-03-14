#include "data_process.h"
#include <stdio.h>
#include "../data_libs/data_io.h"
#include "../data_libs/data_stat.h"
#define NMAX 255
int main() {
    double data[NMAX];
    int n;
    
    //Don`t forget to allocate memory !

    if (input(data, &n) == 0) {
        if (normalization(data, n))
            output(data, n);
        else
            printf("ERROR");  
    }
    return 0;
}
