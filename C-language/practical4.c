//Practical : 4- Write a C program to take inputs of Day, Date, Month and Year from
//the user and modify it in such a way that prints the month name given
//the month number by the user.

#include <stdio.h>
int main()
{
    int dd, mm, yy ,day;
    printf("Enter the date in this format(dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yy);
    printf("Enter the Day: ");
    scanf("%d",&day);    
    switch (mm)
    {

    case 1:
        printf("Jan\n");
        break;
    case 2:
        printf("Feb\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("Aug\n");
        break;
    case 9:
        printf("Sep\n");
        break;
    case 10:
        printf("Oct\n");
        break;
    case 11:
        printf("Nov\n");
        break;
    case 12:
        printf("Dec\n");
        break;
    }
    return 0;
}
