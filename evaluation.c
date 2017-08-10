#include<stdio.h>
#include<ctype.h>
#define MAX 100

void checkContinuity(char exp[]);
int isMatchingPair(char left,char right);
void push(int, stack *s);

int pop(stack *s);

{
switch(left)
{
case'(':
if(right==')')
return 1;
else
return 0;
case')':
if(right=='(')
return 1;
else
return 0;
case'(':
if(right==')')
return 1;
else
return 0;
case ')':
if(right=='(')
return 1;
else
return 0;
default:
return 0; //INVALID CASE
}
void checkContinuity(char exp[])
{
int i;
char c;
stack s;
for(i=0;exp[i]!=0;i++)
{
if(exp[i]=='('||exp[i]==')'||exp[i]=='('||exp[i]==')')
push(&s,exp[i]);
else
{
c=pop
printf("\nINVALID\n");
if(isMatchingPair(c,exp[i]));
continue;
else
printf("\nINVALID\n");
}
}
}
if(s,top==-1)
{
printf("EXPRESSION IS VALID");
}



int main()
{
	char exp[30];
	int result;
	printf("ENTER AN EXPRESSION CONTAINING ONLY BRACKETS\n");
	scanf("%s",exp);
	result=checkContinuity(exp);
	printf("\nANS= %d",result);
	return 0;
}
int pop(stack *s)
{
    int d,top=s->top;
    if(top!=-1)
    {
		d=s->a[top];
        s->top=s->top-1;
		return d;
    }
}

void push(char e, stack *s)
{
    int top=s->top;
    if(top<29)
	{
		s->a[++(s->top)]=e;
	}
}
}
