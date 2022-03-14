#include "decision.h"
#include <stdio.h>
#include "../data_libs/data_io.h"
#include "../data_libs/data_stat.h"
#define NMAX 255
void main() {
    double data[NMAX];
    int n;
    if (input(data, &n) == 0){

        if (make_decision(data, &n) == 1)
            printf("YES"); 
        else
            printf("NO");  
    }
}
