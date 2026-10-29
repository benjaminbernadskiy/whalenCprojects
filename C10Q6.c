#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = 0;

void push(int number)
{
    if (top == STACK_SIZE) {
        printf("Expression is too complex\n");
        exit(EXIT_FAILURE);
    }
    stack[top] = number;
    top++;
}

int pop(void)
{
    if (top == 0) {
        printf("Not enough operands\n");
        exit(EXIT_FAILURE);
    }
    top--;
    return stack[top];
}

int main(void)
{
    char ch;
    int a, b;

    printf("RPN expression: ");

    while (scanf(" %c", &ch) == 1) {
        if (ch >= '0' && ch <= '9') {
            push(ch - '0');
        } else if (ch == '=') {
            printf("value of expression: %d\n", pop());
            top = 0;
            printf("RPN expression: ");
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            b = pop();
            a = pop();

            switch (ch) {
            case '+':
                push(a + b);
                break;
            case '-':
                push(a - b);
                break;
            case '*':
                push(a * b);
                break;
            case '/':
                if (b == 0) {
                    printf("Cant divide by zero\n");
                    return 1;
                }
                push(a / b);
                break;
            }
        } else {
            return 0;
        }
    }

    return 0;
}
