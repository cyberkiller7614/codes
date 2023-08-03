#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; // 'next' is a pointer to the node
};

void trav(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // printf("error code = 0");
    trav(head);
    return 0;
}