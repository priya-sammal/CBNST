 
#include <stdio.h> 
 
double f(double x) { 
    return x * x; // Example: x^2 
} 
 
double simpsons_3_8(double a, double b, int n) { 
    if (n % 3 != 0) { 
        printf("Number of intervals must be a multiple of 3.\n"); 
        return -1; 
    } 
    double h = (b - a) / n; 
    double sum = f(a) + f(b); 
 
    for (int i = 1; i < n; i++) { 
        double x = a + i * h; 
        sum += (i % 3 == 0 ? 2 : 3) * f(x); 
    } 
    return (3 * h / 8) * sum; 
} 
 
int main() { 
    double a, b; 
    int n; 
    printf("Enter the lower and upper limits: "); 
    scanf("%lf %lf", &a, &b); 
    printf("Enter the number of intervals: "); 
    scanf("%d", &n); 
 
    double result = simpsons_3_8(a, b, n); 
    if (result != -1) 
        printf("The integral is: %.4lf\n", result); 
    return 0; }