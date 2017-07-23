#include<stdio.h>
int main()
{
int counter;
printf("Even numbers between 1 to 4\n");
for(counter=1;counter<-4;counter++)
{
if(counter%2==0)
{
printf("%d",counter);
}
}
return 0;
}
