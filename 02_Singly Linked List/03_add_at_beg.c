#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node* add_at_beg(struct node **head, int d) {
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = *head;
    *head = ptr;
    // ptr->link = head;
    // head = ptr;
    // return head;
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 0;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 5;
    ptr->link = NULL;

    head->link = ptr;

    int data = -1;
    // head = add_at_beg(head, data);
    add_at_beg(&head, data);
    ptr = head;

    while(ptr != NULL) {
        printf("|%d %d| ->", ptr->data, ptr->link);
        ptr = ptr->link;
    }
    return 0;
}