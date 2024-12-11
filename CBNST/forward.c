 
#include <stdio.h> 
 
void newtons_forward(double x[], double y[], int n, double value) { 
    double diff[n][n]; 
    for (int i = 0; i < n; i++) 
        diff[i][0] = y[i]; 
 
    for (int j = 1; j < n; j++) 
        for (int i = 0; i < n - j; i++) 
            diff[i][j] = diff[i + 1][j - 1] - diff[i][j - 1]; 
 
    double result = diff[0][0]; 
    double u = (value - x[0]) / (x[1] - x[0]); 
    double u_term = 1; 
 
    for (int i = 1; i < n; i++) { 
        u_term *= (u - (i - 1)) / i; 
        result += u_term * diff[0][i]; 
    } 
 
    printf("The interpolated value is: %.4lf\n", result); 
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
 
    newtons_forward(x, y, n, value); 
    return 0; 
} 