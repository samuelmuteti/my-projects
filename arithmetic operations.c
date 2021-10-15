#include <stdio.h>

int main()
{
    int a,b,add,sub,mul,div,rem;
	printf("Enter values to a,b:");
	scanf("%d,%d",&a,&b);
	add=a+b;//addition operation
	sub=a-b;//subtraction operation
	mul=a*b;//multiplication operation
	div=a/b;//division operation
	rem=a%b;//remaider operation
	printf("addition=%d\n",add);
	printf("subtraction=%d\n",sub);
	printf("multiplication=%d\n",mul);
	printf("division=%d\n",div);
	printf("remaider=%d\n",rem);
	return 0;
	}

