#include<stdio.h>
int main ()
{
	int day;
	printf("Enter The Day Of Week As Number : ");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
		printf("The Day Is Monday.");
		break;
		case 2:
		printf("The Day Is Tuesday.");
		break;
		case 3:
		printf("The Day Is Wednesday.");
		break;
		case 4:
		printf("The Day Is Thursday.");
		break;
		case 5:
		printf("The Day Is Friday.");
		break;
		case 6:
		printf("The Day Is Saturday.");
		break;
		case 7:
		printf("The Day Is Sunday.");
		break;
		return 0;
	}
	return 0;
}
