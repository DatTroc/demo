// isprime function: This function checks if a number is prime.
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
// Function to check if a number is prime
bool isprime(int n){
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    if (n <= 3) return true; // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return false; // eliminate multiples of 2 and 3

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false; // check for factors
    }
    return true; // n is prime
}
// Function to find the next prime number greater than or equal to n
int next_prime(int n) {
    while (!isprime(n)) {
        n++; // Increment n until a prime is found
    }
    return n; // Return the next prime number
}
// Main function to demonstrate the next_prime function
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n); // Read user input

    int next = next_prime(n); // Find the next prime number
    printf("The next prime number greater than or equal to %d is %d\n", n, next); // Output the result

    return 0; // Exit the program
}