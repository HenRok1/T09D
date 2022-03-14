#include "data_stat.h"
#include <stdio.h>

double max(double *data, int n) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (data[i] > max)
            max = data[i];
    }
    return max;
}

double min(double *data, int n) {
    int min = 0;
    for (int i = 0; i < n; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}

double mean(double *data, int n) {
    double m = 0;
    for (int i = 0; i < n; i++) {
        m += data[i];
    }
    m = m / n;
    return m;
}

double variance(double *data, int n) {
    double v = 0;
    double s, m = mean(data, n);
    for (int i = 0; i < n; i++) {
        s = ((data[i] - m) * (data[i] - m));
        v += s;
    }
    v = v / n;
    return v;
}

void sort(double *data, int n) {
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = (n - 1); j > i; j--) 
    {
      if (data[j - 1] > data[j]) 
      {
        double temp = data[j - 1]; 
        data[j - 1] = data[j];
        data[j] = temp;
      }
    }
  }
}
