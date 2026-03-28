#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push function
void push(char c) {
    stack[++top] = c;
}

// Pop function
char pop() {
    return stack[top--];
}

int main() {
    char str[MAX];
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    // Push all characters
    for(i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    printf("Reversed string: ");
    while(top != -1) {
        printf("%c", pop());
    }

    return 0;
}