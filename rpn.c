//Mustafa Kuyumcu
//2000002006

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

#define STACK_SIZE 100

char ingredients[STACK_SIZE];
int sum = 0;

void evaluate_expression(void);  // to identify the situation of the program
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow();
void stack_underflow();

int main(void)
{
    for (;;)
    {
        printf("Enter an RPN expression: ");   // asking to print the numbers from user
        evaluate_expression();
        printf("Value of expression: %d\n", pop());
    }
    return 0;
}

void evaluate_expression(void)
{
    char insert;
    int integerA, integerB;

    for (;;)
    {
        scanf(" %c", &insert);
        switch (insert)
        {
        case '+': case '-': case '*': case '/':
            integerB = pop();
            integerA = pop();
        }
        if (insert >= '0' && insert <= '9') // to explain expressions
            push(insert - '0');
        else if (insert == '+')
            push(integerA + integerB);
        else if (insert == '-')
            push(integerA - integerB);
        else if (insert == '*')
            push(integerA * integerB);
        else if (insert == '/')
            push(integerA / integerB);
        else if (insert == '=')
            break;
        else
        {
            printf("\n");
            exit(EXIT_SUCCESS);
        }
    }
    if (sum > 1)
    {
        printf("Too many expression\n\n");  
        exit(EXIT_FAILURE);
    }
}

bool is_empty(void)
{
    return sum == 0;
}

bool is_full(void)
{
    return sum == STACK_SIZE;
}

void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        ingredients[sum++] = i;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return ingredients[--sum];
}

void stack_overflow()
{
    printf("摘xpression is too complex\n\n");      // give feedback to user about the program
    exit(EXIT_FAILURE);
}

void stack_underflow()
{
    printf("Not enough operands in expression\n\n");   // give feedback to user about the program
    exit(EXIT_FAILURE);
}
