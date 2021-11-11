#include <stdio.h>


int main()
{
    int x,y;
    scanf("%d \n", &x);
    printf((x>=67)&&(x<=87)? "true \n":"false \n");
    printf("%d",  (x & 4096)==0? 0:1);



    return 0;
}




