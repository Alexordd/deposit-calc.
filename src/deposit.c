#include <stdio.h>
#include <stdlib.h>
#include "deposit.h"

void Error(int d,int v)
{
    if(d>365){
	printf("ERROR:Term deposit-no more than 365 days!");
	main();
	}
    if(d<0){
	printf("ERROR:Term deposit can't be less than one day!");
	main();
	}
    if(v<10){
	printf("ERROR:Minimum deposit amount-10 thousand rubles!");
	main();
	}
}

float Count(int d,int v,float s)
{
    if(v<=100){
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
    else{
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

    printf("deposit amount after %.3f days:%d",s,d);
    printf("\n");
    return 0;
}


