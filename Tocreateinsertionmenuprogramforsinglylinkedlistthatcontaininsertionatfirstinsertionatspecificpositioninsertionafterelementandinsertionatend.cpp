#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
// Function to Print Linked List
void printLinkedList(struct Node *head)
{
    struct Node *temp = head;

    printf("\nSingly Linked List==\n");
    printf("\tHead->");
    while (temp != NULL)
    {
        printf("%d", temp->data);
        printf("->");
        temp = temp->next;
    }
    printf("NULL\n");
}

// Insertion At Beginning Function
void insertAtBeginning(struct Node **head)
{
    int data;
    printf("\nEnter the item which you want to insert==\n");
    scanf("%d", &data);
    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    if (*head == NULL)
    {
        newNode->next = NULL;
        newNode->data = data;
        *head = newNode;
    }
    else
    {
        newNode->data = data;
        newNode->next = *head;
        *head = newNode;
    }
    printf("\n!!!Node Inserted Successfully!!!\n");
}

// Insertion At Specified Position Function
void insertAtPosition(struct Node **head, int position)
{
    int data, i = 1;
    printf("\nEnter the item which you want to insert==\n");
    scanf("%d", &data);
    // Create a new node to be inserted.
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;

    // Check if the linked list is empty.
    if (head == NULL || position == 0)
    {
        // Insert at the beginning or if the list is empty.
        newNode->next = *head;
        *head = newNode;
        return;
    }

    // Traverse the linked list to the specified position.
    struct Node *temp = *head;
    if (position < 0)
    {
        printf("Invalid position. Position should be non-negative.\n");
        return;
    }
    else
    {
        while (i < position - 1)
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    printf("\n!!!Node Inserted Successfully!!!\n");
}

// Insertion an element after a specified element Function
void insertAfterElement(struct Node *head, int existingElement)
{
    int data;
    printf("\nEnter the item which you want to insert==\n");
    scanf("%d", &data);
    struct Node *current = head;
    while (current != NULL)
    {
        if (current->data == existingElement)
        {
            struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
            if (newNode == NULL)
            {
                printf("Memory allocation failed.\n");
                exit(1);
            }
            newNode->data = data;
            newNode->next = current->next;
            current->next = newNode;
            printf("\n!!!Node Inserted Successfully!!!\n");
            return;
        }
        current = current->next;
    }
    printf("Element not found in the linked list.\n");
}

// Insertion At Last Function
void insertAtLast(struct Node **head)
{
    int data;
    printf("\nEnter the item which you want to insert==\n");
    scanf("%d", &data);
    struct Node *ptr = *head;
    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    if (*head == NULL)
    { // If the list is empty, make the new node the head
        ptr->next = NULL;
        *head = newNode;
    }
    else
    { // Traverse to the last node
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
        newNode->next = NULL;
    }
    printf("\n!!!Node Inserted Successfully!!!\n");
}
// Main Function
int main()
{
    // Creation of a Linked List code
    struct Node *head = NULL, *new_node, *temp;
    int item, data, pos, dig, n, i = 1, ch;
    printf("Enter the total Number of nodes in the list==");
    scanf("%d", &n);
    do
    {
        new_node = (struct Node *)malloc(sizeof(struct Node));
        if (new_node == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("Enter the data==\n");
        scanf("%d", &data);
        new_node->data = data;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        i++;
    } while (i <= n);
    while (1)
    {
        printf("\nSingly Linked List Insertion Menu\n");
        printf("\t1 for Insertion at Beginning\n");
        printf("\t2 for Insertion At Specified Position\n");
        printf("\t3 for Insertion An element after a specified element\n");
        printf("\t4 for Insertion At Last\n");
        printf("\t5 for Display The Linked List\n");
        printf("\t!!!!10 for Exit!!!!\n");
        printf("\n\nEnter your Choice==\n");
        scanf("%d", &ch);
        if (ch == 10)
        {
            break;
        }
        switch (ch)
        {
        case 1:
        {
            insertAtBeginning(&head);
            break;
        }
        case 2:
        {
            printf("\nEnter the Position==\n");
            scanf("%d", &pos);
            insertAtPosition(&head, pos);
            break;
        }
        case 3:
        {
            printf("\nEnter the Digit after you want to Insert==\n");
            scanf("%d", &dig);
            insertAfterElement(head, dig);
            break;
        }
        case 4:
        {
            insertAtLast(&head);
            break;
        }
        case 5:
        {
            printLinkedList(head);
            break;
        }
        default:
        {
            printf("!!Invalid Your Choice please Enter a Valid Choice!!\n");
            break;
        }
        }
    }
    return 0;
}
