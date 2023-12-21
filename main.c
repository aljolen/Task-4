#include <stdio.h>
#include <math.h>

int main() {
    double pi = 3.14159265358979323846;

    int a;
    printf("Enter value of alpha: ");
    scanf("%d", &a);

    double z1, z2;
    z1 = 2 * pow(sin(3*pi - 2*a), 2) * pow(cos(5*pi + 2*a), 2);
    z2 = 0.25 - 0.25 * sin(2.5*pi - 8 * a);
    printf("z1 = %f\n", z1);
    printf("z2 = %f\n", z2);
    return 0;
}