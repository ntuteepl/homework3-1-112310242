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
printf("NO");
break;
}
}
if(i==j)
printf("YES");
}

