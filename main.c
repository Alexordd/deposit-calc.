#include <stdio.h>
#include <stdlib.h>

int main(){
int d,v,s;

printf("Enter the deposit amount(thousand of rubles):");
scanf("%d",&v);

printf("Enter the term(days):");
scanf("%d",&d);

if(d>365){
    printf("ERROR:Term deposit-no more than 365 days!");
    return 0;
    }
if(d<0){
    printf("ERROR:Term deposit can't be less than one day!");
    return 0;
    }
if(v<10){
    printf("ERROR:Minimum deposit amount-10 thousand rubles!");
    return 0;
    }

if (v<=100){
    if(d<=30){
	s=v*0.9;
    }
    if(d>30 && d<121){
	s=v*1.02;
    }
    if(d>120 && d<241){
	s=v*1.06;
    }
    if(d>240 && d<=365){
	s=v*1.12;
    }}
else {
    if(d<=30){
	s=v*0.9;
    }
    if(d>30 && d<121){
	s=v*1.03;
    }
    if(d>120 && d<241){
	s=v*1.08;
    }
    if(d>240 && d<=365){
	s=v*1.15;
    }}

printf("deposit amount after %d days:%d",d,s);

return 0;
}



