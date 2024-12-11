 
#include <stdio.h> 
 
double lagrange(double x[], double y[], int n, double value) { 
    double result = 0; 
    for (int i = 0; i < n; i++) { 
        double term = y[i]; 
        for (int j = 0; j < n; j++) { 
            if (i != j) 
                term *= (value - x[j]) / (x[i] - x[j]); 
        } 
        result += term; 
    } 
    return result; 
} 
 
int main() { 
    int n; 
    printf("Enter number of data points: "); 
    scanf("%d", &n); 
 
    double x[n], y[n], value; 
    printf("Enter data points (x y):\n"); 
    for (int i = 0; i < n; i++) 
        scanf("%lf %lf", &x[i], &y[i]); 
 
    printf("Enter value to interpolate: "); 
    scanf("%lf", &value); 
 
    double result = lagrange(x, y, n, value); 
    printf("The interpolated value is: %.4lf\n", result); 
    return 0; 
} 