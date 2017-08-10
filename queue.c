##include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],top=-1;

int isFull(){
	if(rear==MAX_SIZE-1)
        return 1;
        else
        return -1;
	
}

int isEmpty(){
if (rear==-1&&front==-1)
return 1;
else
return -1;
	
}

int display(){
//return element at the top of stack
	return front[queue];
}

void insertQueue(int d)
{
if(isFull())
{
if(isEmpty())
front++;
rear++;
queue[rear]=d;
printf("%d element is deleted",d);
}
else 
printf("Queue is full");
}

void delete()
{
if(!isEmpty())
{
int d=queue[front];
printf("%d element is deleted",d);
if(front==rear)
front=rear=-1;
else
front++;
}

int main(){
	int choice,e;
	do
	{
		//display menu 1.display 2.insert 3.delete 4.exit
		printf("\nEnter\n1.display\n2.insert\n3.delete\n4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);	//take input in choice variable
		switch(choice){
			case 1:
				e=display();//call peek function
				printf("\nElement at the top of stack is : %d",e);
				break;
			case 2:
				printf("\nEnter the elment to be inserted: ");
				scanf("%d",&e);
				insertQueue(d);//call insertQueue function
				break;
			case 3:
				delete();//call pop function
				break;
			case 4:
				exit(0);//call exit(0) function or return 0
				break;
			default:
				printf("\nInvalid Choice");//invalid choice
				break;				
		}
	}while(1);
	return 0;
}
