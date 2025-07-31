#include<stdio.h>
void main()
{
	int hh=10,min=15,sec=30,minutes,seconds,seconds1,totalseconds;
	minutes=hh*60;                                                  // 10*60=600
	seconds=minutes*60;                                            //600*60=36000
	seconds1=min*60;                                              //15*60=900
	totalseconds=seconds+seconds1+sec;                          //totalseconds=36000+900+30=36930
	printf("%d",totalseconds);
}