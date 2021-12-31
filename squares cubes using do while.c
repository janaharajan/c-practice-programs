//C PROGRAM TO PRINT SQUARES,CUBES FOR N NATURAL NUMBERS using DO WHILE DONE BY  JANAHARAJAN @31/12/2021//
#include<stdio.h>
int main()
{

    int num,i;
    printf("Enter the number:        ");
    scanf("%d",&num);
    printf("------------------------------------\n");
    i=1;
    do
    {

    printf("\n|\t%d\t|\t%d\t|\t% 1d\t\n",i,i*i,i*i*i);
        i=i+1;

    }
    while(i<=num);
    printf("_____________________________________\n");
    return 0;
}
