#include<stdio.h>
int main ()
{
	int day;
	printf("Enter The Day Of Weak As Number : ");
	scanf("%d",&day);
	if(day==1)
	printf("The Day Is Monday.");
	else if(day==2)
	printf("The Day Is Tuesday.");
	else if(day==3)
	printf("The Day Is Wednesday.");
	else if(day==4)
	printf("The Day Is Thursday.");
	else if(day==5)
	printf("The Day Is Friday.");
	else if(day==6)
	printf("The Day Is Saturday.");
	else if(day==7)
	printf("The Day Is Sunday.");
	return 0;
}
