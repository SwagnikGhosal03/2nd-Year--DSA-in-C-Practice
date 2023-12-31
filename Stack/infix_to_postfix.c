#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1) {
        return -1;
    } else {
        return stack[top--];
    }
}

int priority(char ch) {
    if (ch == '(') {
        return 0;
    }
    if (ch == '/' || ch == '*') {
        return 2;
    }
    if (ch == '+' || ch == '-') {
        return 1;
    }
    return -1; 
}

int main() {
    char exp[100];
    char *e, x;
    printf("Enter the expression\n");
    scanf("%s", exp);
    e = exp;

    while (*e != '\0') {
        if (isalnum(*e)) {
            printf("%c", *e);
        } else if (*e == '(') {
            push(*e);
        } else if (*e == ')') {
            while ((x = pop()) != '(') {
                printf("%c", x);
            }
        } else {
            while (top != -1 && priority(stack[top]) >= priority(*e)) {
                printf("%c", pop());
            }
            push(*e); 
        }
        e++;
    }

    while (top != -1) {
        printf("%c", pop());
    }

    return 0;
}

