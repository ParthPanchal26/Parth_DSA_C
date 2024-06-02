#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *add_at_beg(struct node **head, int d)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = *head;
    *head = ptr;
}

struct node display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("|%d %d| ->", ptr->data, ptr->link);
        ptr = ptr->link;
    }
}

int main()
{
    printf("Create some nodes... \n");
    printf("Enter node data : \n");

    struct node *head = malloc(sizeof(struct node));
    head->data = -1;
    head->link = NULL;

    for (int i = 0; i < 3; i++)
    {
        int val = i;
        add_at_beg(&head, val);
    }

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 3;
    ptr->link = head;

    display(ptr);
}