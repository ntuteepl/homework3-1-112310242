#include <stdio.h>
#include <stdlib.h>
main()
{
int i,j;
scanf("%d",&i);
for(j=2;j<i;j++)
{
if(i%j==0)
{
printf("No");
break;
}
}
if(i==j)
printf("Yes");
}


