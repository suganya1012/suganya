#include<stdio.h>
int main()
{
int arms=153;
int check ,rem,sum=0;
check arms;
while (check!=0)
{
rem=check%10;
sum=sum+(rem*rem*rem);
check =(check/10);
}
if(sum==arms)
printf("the num is armstrong",arms);
else
{
printf("the number is not armstrong",arms);
retrun o;
}
}
