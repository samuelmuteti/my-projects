/*surface area and volume of a sphere */
#include <stdio.h>
int main()
{
    float r,area,volume;
    printf("enter a value to r\n:");
    scanf("%f",&r);
    area=4*3.142*r*r;
    volume=4/3*3.142*r*r*r;
    printf("area=%f",area);
    printf("volume=%f",volume);
    return 0;
}
