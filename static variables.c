#include <stdio.h>
int main()
{
    static int a=15;
    int b=12,c;
    c=a*b;
    printf("the value of c=%d\n",c);
    return 0;
}
