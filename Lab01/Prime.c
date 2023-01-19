#include <stdio.h>
#include <math.h>

//compile step: gcc -o Prime Prime.c -lm

int checkIfPrime() {
    int givenNumber;
    int i;
    printf("Prime Checker (enter number):");
    scanf("%d", &givenNumber);
    for (i = 2; i <= sqrt(givenNumber); i++) {
        if (givenNumber % i == 0) {
            printf("The given number is not prime\n");
            return 0;
        }
    }
    printf("The given number is prime\n");
    return 0;    
}

int main(int argc, char **argv) {
    checkIfPrime();
}

