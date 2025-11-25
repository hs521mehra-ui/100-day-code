/*write a program to find profit or loss percentage given coest price and selling price*/
#include<stdio.h>
int main()
{
    float cp, sp,profit ,loss;
    printf("enter cp and sp");
    scanf("%f%f",&cp,&sp);
if (sp>cp)
{
    profit=sp-cp;
    printf("profit percentage=%f", (profit/cp)*100);
}
else if (cp>sp)
{
    loss=cp-sp;
    printf("loss percentage=%f", (loss/cp)*100);
}
else
{
    printf("no profit no loss");
}
return 0;
}