/*Working of relational operators*/
#include <stdio.h>
int main()
{
    int x,y,z;
    printf("enter values of x,y,z:");
    scanf("%d,%d,%d",&x,&y,&z);
    printf("%d == %d is %d \n", x, y, x == y);
    printf("%d == %d is %d \n", x, y, x == y);
    printf("%d > %d is %d \n", x, z, x > z);
    printf("%d > %d is %d \n", x, y, x > y);
    printf("%d < %d is %d \n", x, z, x < z);
    printf("%d < %d is %d \n", x, y, x < y);
    printf("%d != %d is %d \n", x, z, x!= z);
    printf("%d != %d is %d \n", x, y, x != y);
    printf("%d >= %d is %d \n", x, z, x >= z);
    printf("%d >= %d is %d \n", x, y, x >= y);
    printf("%d <= %d is %d \n", x, z, x <= z);
    printf("%d <= %d is %d \n", x, y, x <= y);

    return 0;
}
