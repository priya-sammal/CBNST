#include <stdio.h> 
 
double f(double x) { 
    return x * x; // Example: x^2 
} 
 
double trapezoidal(double a, double b, int n) { 
    double h = (b - a) / n; 
    double sum = f(a) + f(b); 
    for (int i = 1; i < n; i++) { 
        double x = a + i * h; 
        sum += 2 * f(x); 
    } 
    return (h / 2) * sum; 
} 
 
int main() { 
    double a, b; 
    int n; 
    printf("Enter the lower and upper limits: "); 
    scanf("%lf %lf", &a, &b); 
    printf("Enter the number of intervals: "); 
    scanf("%d", &n); 
 
    double result = trapezoidal(a, b, n); 
    printf("The integral is: %.4lf\n", result); 
    return 0; 
} 