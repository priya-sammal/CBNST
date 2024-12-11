#include <stdio.h> 
 
double f(double x) { 
    return x * x; // Example: x^2 
} 
 
double simpsons_1_3(double a, double b, int n) { 
    if (n % 2 != 0) { 
        printf("Number of intervals must be even.\n"); 
        return -1; 
    } 
    double h = (b - a) / n; 
    double sum = f(a) + f(b); 
 
    for (int i = 1; i < n; i++) { 
        double x = a + i * h; 
        sum += (i % 2 == 0 ? 2 : 4) * f(x); 
    } 
    return (h / 3) * sum; 
} 
 
int main() { 
    double a, b; 
    int n; 
    printf("Enter the lower and upper limits: "); 
    scanf("%lf %lf", &a, &b); 
    printf("Enter the number of intervals: "); 
    scanf("%d", &n); 
 
    double result = simpsons_1_3(a, b, n); 
    if (result != -1) 
        printf("The integral is: %.4lf\n", result); 
    return 0; 
}