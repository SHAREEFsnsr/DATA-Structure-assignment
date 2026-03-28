#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

void pop() {
    top--;
}

int main() {
    char exp[MAX];
    int i;

    printf("Enter expression: ");
    scanf("%s", exp);

    for(i = 0; i < strlen(exp); i++) {
        if(exp[i] == '(') {
            push(exp[i]);
        }
        else if(exp[i] == ')') {
            if(top == -1) {
                printf("Not Balanced");
                return 0;
            }
            pop();
        }
    }

    if(top == -1)
        printf("Balanced Expression");
    else
        printf("Not Balanced");

    return 0;
}