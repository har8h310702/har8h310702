// Stack operations using Linked List :- 
#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void peek();  // Added peek function
void show();  // Renamed display to show
struct node
{
    int val;
    struct node *next;
};

struct node *head;

int main()
{
    int choice = 0; // Initialize choice
    printf("!!!!!!!!!Stack operations using Linked List!!!!!!!!!");
    printf("\n----------------------------------------------\n");

    while (choice != 10)
    {
        printf("Choose one from the below options...\n");
        printf("\n1 for Push\n2 for Pop\n3 for Peek\n4 for Show Stack\n10 for Exit");
        printf("\nEnter your choice== ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek(); // Call the peek function
                break;

            case 4:
                show();
                break;

            case 10:
                break;

            default:
                printf("Please Enter a valid choice\n");
        }
    }
    return 0;
}

// Push Operation
void push()
{
    int val;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Not able to push the element\n");
    }
    else
    {
        printf("Enter the value== ");
        scanf("%d", &val);
        ptr->val = val;
        ptr->next = head;
        head = ptr;
        printf("Item pushed\n");
    }
}

// Pop Operation
void pop()
{
    if (head == NULL)
    {
        printf("Underflow: Stack is empty\n");
    }
    else
    {
        int item = head->val;
        struct node *ptr = head;
        head = head->next;
        free(ptr);
        printf("Item popped= %d\n", item);
    }
}

// Peek Operation
void peek()
{
    if (head == NULL)
    {
        printf("Stack is empty, cannot peek\n");
    }
    else
    {
        printf("Top element== %d\n", head->val);
    }
}

// Display the Stack Operation
void show()
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements Are ==\n");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->val);
            ptr = ptr->next;
        }
    }
}