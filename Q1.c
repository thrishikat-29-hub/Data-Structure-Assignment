//Q1: Reverse a String using Stack
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
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Push characters
    for(i = 0; str[i] != '\0'; i++) {
        push(str[i]);
    }

    // Pop characters
    for(i = 0; i < strlen(str); i++) {
        str[i] = pop();
    }

    printf("Reversed string: %s\n", str);

    return 0;
}