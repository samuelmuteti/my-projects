/*Working of logical operators*/

#include <stdio.h>
int main()
{
    int x, y , z, result;
    printf("enter value of x,y,z:");
    scanf("%d,%d,%d",&x,&y,&z);
    result = (x == y) && (z > y);
    printf("(x == y) && (z > y) is %d \n", result);

    result = (x == y) && (z < y);
    printf("(x == y) && (z < y) is %d \n", result);

    result = (x == y) || (z < y);
    printf("(x == y) || (z < y) is %d \n", result);

    result = (x != y) || (z < y);
    printf("(x != y) || (z < y) is %d \n", result);

    result = !(x != y);
    printf("!(x != y) is %d \n", result);

    result = !(x == y);
    printf("!(x == y) is %d \n", result);

    return 0;
}
