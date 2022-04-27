#include<stdio.h>
#include<conio.h>
#define NIL -1
typedef struct stacklist
{
	int a[10];
	int tos;
}stack;
int n,data=0,k;
void main()
{
void push(stack*,int);
int pop(stack*);
stack s;
s.tos=-1;
while(1)
{
printf("Enter your choice\n ");
printf("1 for push\n ");
printf("2 for pop\n ");
printf("3 for peep\n");
printf("4 for exit\n");
scanf("%d",&n);
if (n==4)
{
exit(1);
}
switch(n)
{
case 1:
	push(&s,data);
	break;
case 2:
	k=pop(&s);
	if(k!=0)
	printf("%d",k);
	break;
	default:
	printf("Enter a valid choice\n");
 }
 }
 }
 void push(stack *s,int data)
 {
	if(s->tos==9)
	{
		printf("Stack is full\n");
		return;
	}
	else
	{	printf("Enter the element");
		scanf("%d",&data);
		s->tos=s->tos+1;
		s->a[s->tos]=data;
		printf("Data inserted sucessfully\n");
	}
 }
 int pop(stack *s)
 {
 if (s->tos==-1)
 {
 printf("Stack is empty\n");
 return(0);
 }
 else
 {
 data=s->a[s->tos];
 (s->tos)-=1;
 return(data);
 }
 }