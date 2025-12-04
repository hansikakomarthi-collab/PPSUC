#include<stdio.h>
int main (){
    int x,y,h,price;
    scanf("%d%d%d",&x,&y,&h);
    price=x+(h-1)*y;
    printf("%d",price);
    return 0;
}
