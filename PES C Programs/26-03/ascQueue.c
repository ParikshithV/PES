// ascending priority queue

#include<stdio.h>
#define N 5
int q[N],item,front=-1,rear=-1;


void qinsert()
{
	int i=rear,t;
	if(rear==N-1)
	{
		printf("Queue Full\n");
		return;
	}
	else
	{
		printf("Enter the item\t:");
		scanf("%d",&item);
	}
	rear++;
	printf("Value of i is %d\n",i);
	while((q[i]!=-9999)&&(q[i]>=item)&&(i>=0))
	{
		printf("Value of i inside loop is %d\n",i);
		q[i+1]=q[i];
		i--;
	}
	q[i+1]=item;
	return;
}

int qdelete()
{
	if(front==rear)
	{
		printf("Queue Underflow\n");
		return -1;
	}
	front++;
	item=q[front];
	q[front]=-9999;
	return item;
}
void qdisplay()
{
	int i;
	if(front==rear)
	{
		printf("Queue Empty\n");
		return;
	}
	else
	{
		printf("The status of queue is:\n \n");
		printf("Front=%d,Rear=%d\n",front,rear);
		for(i=front+1;i<=rear;i++)
			printf("%d|",q[i]);
	}
	return;
}

int main()
{
	int ch,i;
	while(1)
	{
		printf("\nAscending Priority Queue.\n1.Insert \n2.Delete\n3.Display\n4.Exit\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:qinsert();
					break;
			case 2:i=qdelete();
				   if(i<0)
				      break;
			       else
				      printf("Deleted item is: %d",i);
			       break;
			case 3:qdisplay();
					break;
			case 4:ch=0;
				   return 0;
			default:printf("Enter proper choice\n");

		}
	}
}
