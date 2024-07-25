#include <stdio.h>
#define PI 3.14159

int main() {
    float ray, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &ray);
    area = PI * ray * ray;
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}

