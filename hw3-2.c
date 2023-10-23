#include <stdio.h>
#include <stdlib.h>

int main()
{
int s1,s2,s3,d1,d2,d3,t;
scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);
if(s1>s2){
   t=s1;
   s1=s2;
   s2=t;
}
if(s1>s3){
   t=s1;
   s1=s3;
   s3=t;
}
if(s2>s3){
   t=s2;
   s2=s3;
   s3=t;
}
if(d1>s1&&d2>s2&&d3>s3)
{
if(s2>=d1&&s3>=d2)
printf("1");
else if(s3<d2&&s2<d1&&s3<d1)
printf("3");
else
printf("2");
}
}
