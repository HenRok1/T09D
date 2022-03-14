#include "data_io.h"
#include <stdio.h>
#include "..\data_libs\data_stat.h"
int input(double *data, int *n) {
    char c;
    int flag = 0;
    if (scanf("%d", n) == 1) {
        for (double *p = data; p - data < *n; p++) {
            if ((scanf("%lf", p) == 1)) {
              //  flag = 0
            } else {
                flag = 1;
            }
        }
          if (scanf("%[ ]", &c) != 0)
              flag = 1;
    } else {
        flag = 1;
    }
    return flag;
}

void output(double *data, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", data[i]);
    }
}
