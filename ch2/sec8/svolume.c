/* Calculate the volume of a sphere */

#include <stdio.h>

#define PI 3.14159f
#define RATIO (4.0f / 3.0f)

int main(void)
{

    float volume, radius;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    volume = RATIO * PI * (radius * radius * radius);

    printf("Volume: %.4f\n", volume);

    return 0;
}

