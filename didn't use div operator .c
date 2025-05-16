#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,c=0;
    scanf("%d %d",&a,&b);
    while (a>=b)
    {
        a=a-b;
    c++;
    }
    printf("%d ",c);    
    return 0;
}
