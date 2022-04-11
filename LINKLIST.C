#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct lklist
{
int info;
struct lklist *next;
}node;
void main()
{


	      int n=0,data =0;
	      node *temp=NULL;
	      node *head=NULL;
	      while(1)
	      {
	      printf("\n Enter your choice\n");
	      printf("\n 1 to insert an element");
	      printf("\n 2 for traversing\n");
	      scanf("%d",&n);
	      if(n==13)
	      {
		 exit(1);
	      }
	      switch(n)
	      {
	      case 1:
		    printf("Enter the data you want to insert");
		    scanf("%d",&data);
		    temp = (node *)malloc(sizeof(node));
		    if(temp == NULL)
		    {
			printf("Can't assign value\n");
			break;
		    }
		temp->info = data;
		temp->next = head;
		head =temp;
		printf("Node insert successfuly");
		break;
	      case 2:
		temp=head;
		if(temp==NULL)
		{
		printf("No data Found\n");
		break;
		}
		while(temp!=NULL)
		{
		printf("Value of node is %d\n",temp->info);
		temp=temp->next;
		}
		break;
	    default:
		printf("Enter the valid choice");
		break;
	    }
	}
}
