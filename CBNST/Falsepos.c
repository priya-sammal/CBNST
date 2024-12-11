#include <stdio.h> 
#include <math.h> 
 
#define EPSILON 0.001 
 
double f(double x) { 
    return x * x - 4;  
} 
 
void false_position(double a, double b) { 
    if (f(a) * f(b) >= 0) { 
        printf("Invalid initial guesses.\n"); 
        return; 
    } 
    double c; 
    do { 
        c = (a * f(b) - b * f(a)) / (f(b) - f(a)); 
        if (f(c) == 0.0) 
            break; 
        else if (f(c) * f(a) < 0) 
            b = c; 
        else 
            a = c; 
    } while (fabs(f(c)) >= EPSILON); 
    printf("The root is: %.4lf\n", c); 
} 
 
int main() { 
    double a, b; 
    printf("Enter the initial guesses a and b: "); 
    scanf("%lf %lf", &a, &b); 
    false_position(a, b); 
    return 0; 
}