#include<stdio.h>

int main() {

int a;
int b;
int c;

char *name;

scanf("%s",&name);
printf("%s\n",name);

printf("Enter the three numbers : ");
scanf("%d %d %d", &a, &b, &c);

printf("Sum : " , (a+b+c));

return 0;
}
