#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

void addDistances(struct Distance d1, struct Distance d2, struct Distance* result) {
    result->inches = d1.inches + d2.inches;
    result->feet = d1.feet + d2.feet + result->inches / 12;
    result->inches %= 12;  // Convert inches greater than 12
}

int main() {
    struct Distance d1, d2, result;

    
    printf("Enter first distance (feet inches): ");
    scanf("%d %d", &d1.feet, &d1.inches);

    printf("Enter second distance (feet inches): ");
    scanf("%d %d", &d2.feet, &d2.inches);

    addDistances(d1, d2, &result);

    printf("\nTotal Distance: %d feet %d inches\n", result.feet, result.inches);

    return 0;
}
