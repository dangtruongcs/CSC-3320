#include<stdio.h>
int main() {
int num, qty;
float price, amt;
char date[8];
printf("Enter the item number: ");
scanf("%d", &num);
printf("Enter the unit price: ");
scanf("%f", &price);
printf("Enter quantity: ");
scanf("%d", &qty);
printf("Enter purchase date (dd/mm/yy): ");
scanf("%s", date);
amt = price * qty;
printf("\nItem\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n");
printf("%d\t$%9.2f\t%d\t%s\t$%11.2f\n", num, price, qty, date, amt);
return 0;
}