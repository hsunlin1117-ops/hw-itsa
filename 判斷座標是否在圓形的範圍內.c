#include <stdio.h>
#include <stdlib.h>

int main()
{
    int in_x,in_y;
    scanf("%d%d",&in_x,&in_y);
    if((in_x*in_x+in_y*in_y)>40000){
        printf("outside");
    }
    else{
        printf("inside");
    }
}
