#include <stdio.h>
#include <stdlib.h>
#include "deposit.h"

int Error(int d,int v)
{
    if(d>365){	
	return 1;
	}
    if(d<0){	
	return 1;
	}
    if(v<10){	
	return 1;
	}
return 0;
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

    return s;
}


