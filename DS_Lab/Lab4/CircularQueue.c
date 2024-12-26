#include<stdio.h>
#include<conio.h>
#define SIZE 50

int queue[SIZE];
int rear = -1;
int front =-1;

void enqueue(int queue[],int ele)
{
    if((rear+1) % SIZE == front)
    {
        printf("Queue full");
        return;
    }
    else if(front == -1)
    {
        front = rear = 0;
        queue[front] = ele;
    }
    else
    {
        rear = (rear + 1) % SIZE;
        queue[rear] = ele;
    }
}

void dequeue(int queue[])
{
    if( front == -1)
    {
        printf("Queue empty");
        return;
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void display(int queue[])
{
    if(front == -1)
    {
        printf("Queue empty");
        return;
    }
    if(front == rear)
    {
        printf("%d",queue[front]);
        return;
    }

    if(front<rear)
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }

    }
    else
    {
        for(int i=front;i<SIZE;i++)
        {
            printf("%d ",queue[i]);
        }

        for(int i=0;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }


}
int main()
{

    int ch,ele;

    while(1)
    {
        printf("\n1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display the queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        printf("\n");


        switch(ch)
        {
        case 1:
            printf("Element to insert:");
            scanf("%d",&ele);
            enqueue(&queue,ele);
            break;

        case 2:
            dequeue(&queue);
            break;

        case 3:
            display(&queue);
            break;
        case 4:
            return;
        }

    }
}

