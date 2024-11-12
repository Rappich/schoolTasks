#include <stdio.h>

int main() {

    int num1, num2, addition, subtraction, multiplication;
    float divide;

    printf("We are going to count! We'll be adding, subtracting, multiplying, and dividing your numbers! In order to do so, provide me with the first number you want to play with:\n");
    scanf("%d", &num1);

    printf("Now, hit me with a second number!\n");
    scanf("%d", &num2);

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;

    
    if (num2 != 0) {
        divide = (float)num1 / num2;
        printf("Your results are:\n");
        printf("Addition: %d\n", addition);
        printf("Subtraction: %d\n", subtraction);
        printf("Multiplication: %d\n", multiplication);
        printf("Division: %.2f\n", divide);
    } else {
        printf("Oh no, you tried to divide by zero, which is not possible..\n");
    }

    return 0;
}
