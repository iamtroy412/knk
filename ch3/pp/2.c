/* Write a program that formats product information entered by the user.
 * The item number should be left justified: the unit price should be right
 * justified. Allow dollar amounts up to $9999.99
 */ 

#include <stdio.h>

int main(void)
{
    int item_num, month, day, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\n");

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%3d\t\t$%7.2f\t%d/%d/%d\n", item_num, unit_price, month, day, year);

    return 0;
}
