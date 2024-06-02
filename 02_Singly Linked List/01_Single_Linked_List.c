#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int count_of_node(struct node *head) {
    int count = 0;
    if(head == NULL) {
        printf("List is Empty\n");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL) {
        count++;
        ptr = ptr -> link;
    }
    printf("Total Node : %d\n", count);
}

int display_node(struct node *head) {
    if(head == NULL) {
        printf("List is Empty!\n");
    }
    
    struct node *ptr = NULL;
    ptr = head;

    while(ptr != NULL) {
        printf("|%d  %d| -> ", ptr -> data, ptr -> link);
        ptr = ptr -> link;
    }
}

int add_at_end(struct node *head, int data) {
    struct node *ptr, *temp;
    ptr = head;

    temp = malloc(sizeof(struct node));

    temp -> data = data;
    temp -> link = NULL;

    while(ptr->link != NULL) {
        ptr = ptr -> link;
    }

    ptr -> link = temp;
}

int main() {
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));

    current->data = 50;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 55;
    current->link = NULL;

    head->link->link = current;

    add_at_end(head, 60);
    count_of_node(head);
    display_node(head);

    return 0;
}