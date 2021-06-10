//Array implimentation of queue

#include<stdio.h>
#include<stdlib.h>
#define N 3

int q[3][N],item,pr;
int rear[3] = {-1,-1,-1},front[3] = {0,0,0};
void pqinsert(int pr)
{
	if(rear[pr] == N-1)
	{
		printf("Queue Full\n");
	}
	else
	{
		printf("Enter element to insert in Queue:\t");
		scanf("%d",&item);
		rear[pr]++;
		q[pr][rear[pr]]=item;
	}
	return;
}

void pqdelete()
{
	int i;
	for (i = 0; i < 3;i++)
	{
		if(rear[i] == front[i]-1)
			printf("\nQueue %d is empty",i+1);
		else
		{
			printf("\nDeleted item is %d",q[i][front[i]]);
			front[i]++;
			return;
		}
	}
	return;
}

void display()
{
	int i,j;
	for (i = 0; i < 3;i++)
	{
		if(rear[i]==front[i]-1)
			printf("\nQueue %d is empty",i+1);
		else
		{
			printf("\n Queue %d |",i+1);
			for (j =front[i];j <= rear[i];j++)
				printf("%d|",q[i][j]);
			printf("\nFront of queue %d is %d",i+1,q[i][front[i]]);
			printf("\nRear of queue %d is %d",i+1,q[i][rear[i]]);
		}
	}
	return;
}

int main()
{
	int ch,i;
	while(1)
	{
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter the choice\t:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the priority number:");
					scanf("%d",&pr);
					if(pr>0 && pr<4)
						pqinsert(pr-1);
					else
						printf("\nOnly 3 priority exists");
					break;
			case 2: pqdelete(); break;
			case 3: display(); break;
			case 4: return 0;
			default: printf("Enter the valid input\n");
		}
	}
}
