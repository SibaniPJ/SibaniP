#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

void addComplex(struct Complex c1, struct Complex c2, struct Complex* result) {
    result->real = c1.real + c2.real;
    result->imag = c1.imag + c2.imag;
}

int main() {
    struct Complex c1, c2, result;

   
    printf("Enter first complex number (real imag): ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter second complex number (real imag): ");
    scanf("%f %f", &c2.real, &c2.imag);

    addComplex(c1, c2, &result);

    printf("\nSum of complex numbers: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
