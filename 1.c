#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
int main()
{
     float x ;
    int y;
    printf("enter your number:");
    scanf("%f" , &x);
    if(x<0){
        y=x-1;
    }
    else{
        y=x;
    }
    return y ;
}
