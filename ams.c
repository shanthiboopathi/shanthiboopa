#include<stdio.h>
#include<math.h>
int main()
{
int number,original number,remainder,result=0,n=0;
printf("Enter a integer:");
scanf("%d",&number);
original Number=number;
while(original Number!=0)
{
original Number/=10;
while(original Number!=0)
{
remainder=original Number%10;
result+=pow(remainder,n);
original Number/=10;
}
if(result==number)
printf("%d is an amstrong number.",number);
else
printf("%d is not an amstrong number.",number);
return 0;
}
