// Part of OpenGenus IQ
// stdio included for printf()
#include <stdio.h>
// stdlib included for atof()
#include <stdlib.h>
// Understand this code at: https://iq.opengenus.org/c-program-to-add-two-numbers/

int main(int argc, char** argv) {
    if (argc != 3) {
        printf("Wrong number of input parameters\n");
        exit(1);
    }
    float number1 = atof(argv[1]);
    float number2 = atof(argv[2]);
    float sum = number1 + number2;
    printf("The sum of the two numbers %f and %f is %f", number1, number2, sum);
    return 1;
}
