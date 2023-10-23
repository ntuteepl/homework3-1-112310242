#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int z=a/1000,x=a/100-z*10,c=a/10-x*10,v=a/1-c*10,q=b/1000,w=b/100-q*10,e=b/10-w*10,r=b/1-e*10;
    if(z+x+c+v>q+w+e+r)
        printf("%d",b);
    else if(z+x+c+v<q+w+e+r)
        printf("%d",a);
    else{
        if(a>b)
            printf("%d",b);
        else if(a<b)
            printf("%d",a);
    }
}
