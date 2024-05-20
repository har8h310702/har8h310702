#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head = NULL, *new_node, *temp;
    char ch;
    do
    {
        if (ch == 'N' || ch == 'n')
        {
            break;
        }
        // Allocate memory for a  new node
        new_node = (struct Node *)malloc(sizeof(struct Node));
        if (new_node == NULL)
        {
            printf("memory allocation failed \n");
            return 1;
        }
        printf("Enter the data == \n");
        scanf("%d", &new_node->data);
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
        printf("Do you want to add a new node (Y or N)? ");
        scanf("%c", &ch);
    } while (ch == 'Y' || ch == 'y');
    // Printing the linked list
    temp = head;
    printf("\n The linked list is = \n");
    printf("head -> ");
    while (temp != NULL)
    {
        printf("%d", temp->data);
        printf(" -> ");
        temp = temp->next;
    }
    printf("NULL \n");
    return 0;
}