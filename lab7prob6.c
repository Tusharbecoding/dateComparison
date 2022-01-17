//This program compares two given dates. To store date use structure say date that contains three members namely date, month and year. If the dates are equal then display message as "Equal" otherwise "Unequal".
#include <stdio.h>
struct date
{
    int date;
    int month;
    int year;
};
void compareDates(struct date *d1,struct date *d2);
int main()
{
    struct date d1,d2;
    printf("\n\n Pointer : Compare two given dates :\n"); 
    printf("------------------------------------------------------\n");	
    printf(" Input date 1 : ");
    scanf("%d",&d1.date);
    printf(" Input month 1 : ");
    scanf("%d",&d1.month);
    printf(" Input year 1 : ");
    scanf("%d",&d1.year);
    printf(" Input date 2 : ");
    scanf("%d",&d2.date);
    printf(" Input month 2 : ");
    scanf("%d",&d2.month);
    printf(" Input year 2 : ");
    scanf("%d",&d2.year);
    compareDates(&d1,&d2);
    return 0;
}
void compareDates(struct date *d1,struct date *d2)
{
    if((*d1).date==(*d2).date && (*d1).month==(*d2).month && (*d1).year==(*d2).year)
    printf("Equal");
    else
    printf("Unequal");
}
