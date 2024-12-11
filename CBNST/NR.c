 
#include <stdio.h> 
#include <math.h> 
 
#define EPSILON 0.001 
 
double f(double x) { 
    return x * x - 4; // Example: x^2 - 4 = 0 
} 
 
double f_derivative(double x) { 
    return 2 * x; // Derivative: 2x 
} 
 
void newton_raphson(double x) { 
    double h = f(x) / f_derivative(x); 
    while (fabs(h) >= EPSILON) { 
        h = f(x) / f_derivative(x); 
        x = x - h; 
    } 
    printf("The root is: %.4lf\n", x); 
} 
 
int main() { 
    double x; 
    printf("Enter the initial guess: "); 
    scanf("%lf", &x); 
    newton_raphson(x); 
    return 0; 
} 