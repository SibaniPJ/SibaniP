// C program to check whether a
// number can be expressed as sum
// of two prime numbers
#include <stdio.h>

// Function to check prime number
int isPrime(int n)
{
    int i, isPrime = 1;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = 0;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    return isPrime;
}

// Driver code
int main()
{
    int n = 7, i, flag = 0;

    for (i = 2; i <= n / 2; ++i) {
        // condition for i to be a
        // prime number
        if (isPrime(i) == 1) {
            // condition for n-i to
            // be a prime number
            if (isPrime(n - i) == 1) {
                printf("Yes\n");
                return 0;
            }
        }
    }

    printf("No\n");
    return 0;
}
