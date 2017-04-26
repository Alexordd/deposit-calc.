#include <stdio.h>
#include <stdlib.h>
#include "deposit.h"

int main()
{
int d=0,v=0;
float s=0;

printf("Enter the deposit amount(thousand of rubles):");
scanf("%d",&v);

printf("Enter the term(days):");
scanf("%d",&d);

Error(d,v);
Count(d,v,s);

return 0;
}







