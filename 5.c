#include<stdio.h>
int main()
{
double n1,n2,n3;
printf("enter three numbers : ");
scanf("%if%if%f,"&n1,&n2,&n3);
if(n1>n2 &&n1>n3)
printf("%2 if is the largest number,"n1);
else if (n2>n1 &&n2>=n3)
printf ("%2if is the largest number ,"n2);
else 
printf("%2if is the largest number ,"n3);
return 0;
}
