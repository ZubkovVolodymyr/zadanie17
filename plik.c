#include <stdio.h>

float volume_cuboid(float a, float b, float c) {
    return a * b * c;
}

int main() {
    float a, b, c;
    printf("Podaj dlugosc prostopadloscianu: ");
    scanf("%f", &a);
    printf("Podaj szerokosc prostopadloscianu: ");
    scanf("%f", &b);
    printf("Podaj wysokosc prostopadloscianu: ");
    scanf("%f", &c);

    printf("Objetosc prostopadloscianu wynosi: %.2f\n", volume_cuboid(a, b, c));

    return 0;
}
