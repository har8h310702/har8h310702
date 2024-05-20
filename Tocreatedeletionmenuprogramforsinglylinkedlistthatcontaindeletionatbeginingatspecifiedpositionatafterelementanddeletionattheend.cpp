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
    printf("head->");
    while (temp != NULL)
    {
        printf("%d", temp->data);
        printf("->");
        temp = temp->next;
    }
    printf("NULL\n");
}

// Deletion At Beginning Function
void deleteFirstNode(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node *temp = *head;
    *head = (*head)->next;
    printf("\n!!!!Node Deleted Sucessfully!!!!\n");
    free(temp);
}

// Deletion At Specified Position Function
void deleteNodeAtPosition(struct Node **head, int position)
{
    if (*head == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node *current = *head;
    struct Node *previous = NULL;
    int currentPosition = 1;

    // Traverse to the specified position
    while (current != NULL && currentPosition != position)
    {
        previous = current;
        current = current->next;
        currentPosition++;
    }

    if (current == NULL)
    {
        printf("Position exceeds the length of the list.\n");
        return;
    }

    if (previous == NULL)
    {
        // Deleting the first node
        *head = current->next;
    }
    else
    {
        // Deleting a node in between or at the end
        previous->next = current->next;
    }
    printf("\n!!!!Node Deleted Sucessfully!!!!\n");
    free(current);
}

// Deletion an element after an element Function
void deleteNodeAfter(struct Node *head, int targetData)
{
    if (head == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node *current = head;

    while (current != NULL && current->data != targetData)
    {
        current = current->next;
    }

    if (current == NULL || current->next == NULL)
    {
        printf("Element not found or it's the last element.\n");
        return;
    }

    struct Node *prev = current->next;
    current->next = prev->next;
    printf("\n!!!!Node Deleted Sucessfully!!!!\n");
    free(prev);
}

// Deletion At Last Function
void delete_last_node(struct Node **head)
{
    if (*head == NULL)
    {
        return; // Empty list, nothing to delete
    }

    struct Node *prev = NULL;
    struct Node *curr = *head;

    // Traverse to the last node
    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }

    if (prev == NULL)
    {
        // If there's only one node in the list
        free(curr);
        *head = NULL;
    }
    else
    {
        prev->next = NULL;
        free(curr);
    }
    printf("\n!!!!Node Deleted Sucessfully!!!!\n");
}
// Main Function
int main()
{
    // Creation of a Linked List code
    struct Node *head = NULL, *new_node, *temp;
    int item, data, choice, pos, dig, n, i = 1, ch;
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
        printf("\nSingly Linked List Deletion Menu\n");
        printf("\t1 for Deletion at Beginning\n");
        printf("\t2 for Deletion At Specified Position\n");
        printf("\t3 for Deletion An element after a specified element\n");
        printf("\t4 for Deletion At Last\n");
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
            deleteFirstNode(&head);
            ;
            break;
        }
        case 2:
        {
            printf("\nEnter the Position==\n");
            scanf("%d", &pos);
            deleteNodeAtPosition(&head, pos);
            break;
        }
        case 3:
        {
            printf("\nEnter the Digit after you want to Delete==\n");
            scanf("%d", &dig);
            deleteNodeAfter(head, dig);
            break;
        }
        case 4:
        {
            delete_last_node(&head);
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