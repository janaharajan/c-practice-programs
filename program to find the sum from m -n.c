//C PROGRAM TO CALCULATE THE SUM OF NUMBERS FROM M TO N BY JANAHARAJAN 29/12/2021//



#include<stdio.h>

int main()

{

    int a,b, sum=0;

    printf("\n Enter  the first number:");
    scanf("%d",&a);

    printf("\n Enter  the second number:");
    scanf("%d",&b);

    while(a<=b)

{

    sum=sum+a;

    a=a+1;

}


    printf("\n Sum = %d",sum );

    return 0;

}
