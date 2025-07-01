//as value to variable
#include <stdio.h>
int main()
{
   int perc;
    printf("enter the perc");
    scanf("%d",&perc);
    printf("perc value is %d:",perc);
    perc%=23*100;
    printf("perc value is %d:",perc);
}
