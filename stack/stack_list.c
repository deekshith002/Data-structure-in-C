// STACK USING LINKED LIST

#include<stdio.h>

struct stack
{
    int data;
    struct stack *next;
};

struct stack *temp,*top = NULL,*dis;
void push();
void pop();
void peek();
void display();
void isempty();
void isfull();
main()
{
       int ch;
       while(1)
        {
            printf("1. Push \n");
            printf("2. Pop \n");
            printf("3. Peek \n");
            printf("4. Display \n");
            printf("5. IsEmpty \n");
            printf("6. IsFull \n");
            printf("7. Exit \n");
            printf("Select ur choice \n");
            scanf("%d",&ch);
       switch(ch)
       {
	 	case 1:
				push();
				break;
	 	case 2:
				pop();
				break;
	 	case 3:
				peek();
				break;
	 	case 4:
				display();
				break;

        case 5:
				isempty();
				break;
	 	case 6:
				isfull();
				break;
	 	case 7:
				exit(0);
	 	default:
				printf("Invalid choice \n");
       }
   }
}

void push()
{
    int ele;
    temp = (struct stack*)malloc(sizeof(struct stack));
    printf("Enter the element to be added\n");
    scanf("%d",&ele);
    temp->data = ele;
    temp->next = NULL;
    if(top == NULL)
    {
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
    printf("sucessfully added\n");
}

void pop()
{
    if(top == NULL)
    {
        printf("the stack is empty \n");
        return;
    }
    printf("%d",top->data);
    temp = top;
    top = temp->next;
    free(temp);
    printf(" popped out from the stack successfully\n");

}

void peek()
{
    if(top==NULL)
    {
        printf("the stack is empty\n");
        return;
    }
    printf("%d\n",top->data);
}
void display()
{
    if(top==NULL)
    {
        printf("stack is empty \n");
        return;
    }
    else
    {
        dis = top;
        while(dis != NULL)
            {
                printf("\n %d ",dis->data);
                dis = dis->next;
            }
     }
    printf("end of stack\n");
}
void isempty()
{
    if(top==NULL)
    {
        printf("doubt\n");
    }
}

void isfull()
{
    printf("doubt\n");
}
