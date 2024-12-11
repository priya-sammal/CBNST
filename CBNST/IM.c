 
#include <stdio.h> 
#include <math.h> 
 
#define EPSILON 0.001 
 
double g(double x) { 
    return (4 / x); // Example: g(x) for x^2 = 4 -> x = 4/x 
} 
 
void iteration(double x) { 
    double x_next; 
    do { 
        x_next = g(x); 
        if (fabs(x_next - x) < EPSILON) 
            break; 
        x = x_next; 
    } while (1); 
    printf("The root is: %.4lf\n", x_next); 
} 
 
int main() { 
    double x; 
    printf("Enter the initial guess: "); 
    scanf("%lf", &x); 
    iteration(x); 
    return 0; 
} 