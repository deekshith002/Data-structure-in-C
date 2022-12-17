// also add search and rev display function

#include<stdlib.h>
#include<stdio.h>
int p,new;
int n;
struct node
{
    int d;
    struct node *next;
};
struct node *current ,*head=NULL,*prev, *display,*tail;
void create();
void display_list();
void insert_in_start();
void insert();
void delete_node();
void rev_display();
void main()
{
    int ch;
    //selecting  choice of operation
    while(1)
    {
    printf("enter \n 1 to create \n 2 to insert a node \n 3 insert at head \n 4 to delete the node:- \n 5 to reverse display \n 6 to display\n 7 to exit:- \n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        {
            create();
            break;
        }
    case 2:
        {
           insert();
           break;
        }
    case 3:
        {
            insert_in_start();
            break;
        }
    case 4:
        {
            delete_node();
            break;
        }
    case 5:
        {
            rev_display();
            break;
        }
    case 6:
        {
            display_list();
            break;
        }
    case 7:
        {
            exit(0);
        }
    }
    }
}

void create()
{
       while(1)
    {
        printf("enter the data:-[0 to stop]  ");
        scanf("%d",&n);
        if(n == 0)
        {
            break;
        }
        current = (struct node*)malloc(sizeof(struct node));
        if(current == NULL)
        {
            printf("problem occurred in allocating data\n");
            break;
        }
        current->d = n;
        current->next = NULL;
        if(head == NULL)
        {
            head = current;
        }
        else
        {
            prev->next = current;
        }
        prev = current;
    }
    tail = current;

}

void display_list()
{
    display = head;
    while(display != NULL)
        {
            printf(" %d  ",display->d);
            display = display->next;
        }
        printf("\n");
}

void insert()
{
    struct node *new_node;
    printf("enter the number after which a node is to be inserted:- \n");
    scanf("%d",&p);
    printf("enter the number:- \n");
    scanf("%d",&new);
    current = head;
    while(current != NULL)
    {
        if(current->d == p)
        {
            new_node = (struct node*)malloc(sizeof(struct node));
            if(new_node == NULL)
                {
                    printf("error in memory allocation");
                    exit(1);
                }
            new_node->d = new;
            new_node->next = current->next;
            current->next = new_node;
        }
        current = current->next;
    }
    display_list();
    }

void insert_in_start()
{
    struct node *new_node;
    printf("enter the number:- \n");
    scanf("%d",&new);
    if(head != NULL)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        if(new_node == NULL)
        {
            printf("error in allocating memory");
            exit(1);
        }
        new_node->d = new;
        new_node->next = head;
        head = new_node;
        display_list();
    }
}
void delete_node()
{

    struct node *prev=NULL,*current = NULL;
    int del;
    printf("enter the element to be deleted:- \n");
    scanf("%d",&del);
    current = head;
    while(current != NULL)
    {
        if(current->d == del)
        {
            if(current == head)
            {
                head = current->next;
            }
            else if(prev != NULL)
            {
                prev->next = current->next;
            }
            free(current);
            break;
        }
        prev = current;
        current = current->next;
    }
    display_list();
}

void rev_display()
{
    struct node *prevNode, *curNode;

    if(head != NULL)
    {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL; // Make first node as last node

        while(head != NULL)
        {
            head = head->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = head;
        }

        head = prevNode; // Make last node as head

        printf("SUCCESSFULLY REVERSED LIST\n");
    }
    display_list();
}





