#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *add_at_end(struct node *ptr, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 0;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr, 5);
    ptr = add_at_end(ptr, 15);
    ptr = add_at_end(ptr, 20);

    ptr = head;
    while (ptr != NULL)
    {
        printf("|%d %d| -> ", ptr->data, ptr->link);
        ptr = ptr->link;
    }

    return 0;
}