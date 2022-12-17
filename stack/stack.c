// STACK USING ARRAY

#include <stdio.h>

int MAX = 8;
int stack[8];
int top = -1;
int isempty();
int isfull();
void push();
int peek();
int pop();
void display();

int isempty()
{

   if(top == MAX-1)
   {
       return 0;
   }
   else
   {
       return 1;
   }
}
int isfull()
{
    if(top == MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int peek()
{
    return stack[top];
}

int pop() {
   int data;

   if(top>-1)
    {
      data = stack[top];
      top = top - 1;
      return data;
    }
   else
    {
      printf("Could not retrieve data, Stack is empty. \n");
    }
}

void push()
{
    int data;
    printf("enter the data to be added to the stack:-");
    scanf("%d",&data);
   if(!isfull())
    {
      top = top + 1;
      stack[top] = data;
      printf("ADDED DATA SUCCESSFULLY \n");
    }
   else
   {
      printf("Could not insert data, Stack is full.\n");
   }
}

void display()
{
    int i;
    printf("THE STACK IS OF THE ORDER: \n");
    if(top != -1)
    {
        for(i=0;i<=top;i++)
        {
            printf("%d \n",stack[i]);
        }
        printf("END OF STACK \n");
    }
    else
    {
        printf("STACK IS EMPTY UNABLE TO DISPLAY\n");
    }

}

int main() {
   // push items on to the stack
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
       printf("Select your choice:- \n");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:
               push();
               break;
           case 2:
               printf("%d",pop());
               break;
           case 3:
               printf("%d",peek());
               break;
           case 4:
               display();
               break;
           case 5:
               printf("%d",isempty());
                break;
           case 6:
               printf("%d",isfull());
                break;
           case 7:
               exit(0);

           }
       }

   }
