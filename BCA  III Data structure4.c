#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push operation
void push() {
    int element;

    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        printf("Enter element: ");
        scanf("%d", &element);

        top++;
        stack[top] = element;

        printf("%d pushed into stack.\n", element);
    }
}

// Pop operation
void pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
    } else {
        printf("Deleted element = %d\n", stack[top]);
        top--;
    }
}

// Peek operation
void peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Top element = %d\n", stack[top]);
    }
}

// Display operation
void display() {
    int i;

    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements: ");

        for (i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }

        printf("\n");
    }
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\nSTACK MENU\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
