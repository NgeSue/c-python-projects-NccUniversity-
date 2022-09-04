// sueyanshin@gmail.com
//finding the largest of 3 nums using pointer
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    int *p1, *p2, *p3;

    printf("Enter 3 Numbers: ");
    scanf("%d\n%d\n%d",&num1,&num2,&num3);

    // the address of inputs to pointers
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;

    check(p1,p2,p3);


    return 0;
}

void check(int* p1,int* p2,int* p3 ){
 if(*p1 > *p2)
    {
	if(*p1 > *p3)
	{
		printf("%d is the largest number", *p1);
	}
	else
	{
		printf("%d is the largest number", *p3);
	}
    }
    else
    {
	if(*p2 > *p3)
	{
		printf("%d is the largest number", *p2);
	}
	else
	{
		printf("%d is the largest number", *p3);
	}
    }}

