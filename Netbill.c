#include <stdio.h>
int main () 

{
	int price, quantity, discount, netbill, total, gst=4;
	
	printf("Enter The Price : ");
	scanf("%d", &price);
	
	printf("\nEnter The Quantity : ");
	scanf("%d", &quantity);
	
	total = price * quantity;
	printf("\nTotal = %d", total);
	
	printf("\n\nEnter The Discount : ");
	scanf("%d", &discount);
	
	netbill = total - discount;
	printf("\n\nPrice After Discount = %d", netbill);
	
	printf("\n\nGST Is Added !");
	
	netbill = netbill + gst;
	printf("\n\nTotal Net Bill = %d", netbill);
	
	return 0;
}
