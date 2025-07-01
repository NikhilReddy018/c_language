//as value to variable
#include <stdio.h>
void main()
{
   float perc;
    printf("enter the perc");
    scanf("%f",&perc);
    printf("perc value is %f:",perc);
    perc*=23/100;
    printf("perc value is %f:",perc);
}