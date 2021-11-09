#include <stdio.h>

long area(long radius);

long input,result;

int main(void)
{
    printf("enter an integer value:");
    scanf("%ld",&input);
    result=area(input);
    printf("\n the area of %ld is %ld",input,result);

    return 0;

}
long area(long radius)
{
    long area,pi;
	pi=3.142;
    area=pi*radius*radius;
    return area;

}
