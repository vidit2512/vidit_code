#include<stdio.h>
void swap(int *p1,int *p2)
{
*p1=*p1+*p2;
*p2=*p1-*p2;
*p1=*p1-*p2;
}
int main()
{ int w1,w2;
printf("enter the 2 numbers ");
scanf("%d",&w1);
scanf("%d",&w2);
swap(&w1,&w2);
printf("the num are %d  %d",w1,w2);
return 0;
}
