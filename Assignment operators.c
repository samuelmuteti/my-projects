/*Working of assignment operators*/
#include <stdio.h>
int main()
{
    int x , z;
    printf("enter the value of x:");
    scanf("%d",&x);
    z = x;
    printf("z = %d\n", z);
    z += x;     // z is 14
    printf("z = %d\n", z);
    z -= x;     // z is 7
    printf("z = %d\n", z);
    z *= x;     // z is 49
    printf("z = %d\n", z);
    z /= x;     // z is 7
    printf("z = %d\n", z);
    z %= x;     // z = 0
    printf("z = %d\n", z);

    return 0;
}
