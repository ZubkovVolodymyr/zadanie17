#include <stdio.h>
#include <math.h>

float volume_cuboid(float a, float b, float c) {
    return a * b * c;
}
float volumeKula(float r) {
    return (4.0 / 3.0) * M_PI * (r*r*r);
}
int main() {
    float a, b, c, r;
     printf("Podaj dlugosc prostopadloscianu: ");
        scanf("%f", &a);
     printf("Podaj szerokosc prostopadloscianu: ");
        scanf("%f", &b);
     printf("Podaj wysokosc prostopadloscianu: ");
        scanf("%f", &c);
     printf("Podaj promien kuli: ");
        scanf("%f", &r);

    printf("Objetosc prostopadloscianu wynosi: %.2f\n", volume_cuboid(a, b, c));
    printf("Objetosc kuli wynosi: %.2f\n", volumeKula(r));
    return 0;
}
