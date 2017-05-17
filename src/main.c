#include <stdio.h>
#include <stdlib.h>
#include "deposit.h"

int main()
{
int d=0,v=0,k=1;
float s=0;

while(k==1){
	printf("Enter the deposit amount(thousand of rubles):");
	scanf("%d",&v);
	printf("Enter the term(days):");
	scanf("%d",&d);
	k=Error(d,v);
}
	
s=Count(d,v,s);
printf("Deposit amount: %f",s);
return 0;
}







