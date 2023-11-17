#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int hour ,minute ,second;
    printf("enter your number(second): ");
    scanf("%d" ,&second);
    hour = second/3600;
    minute = (second%3600)/60;
    second = (second%3600)%60;
    printf("%d:%d:%d\n" ,hour ,minute ,second);
    return 0;
}
