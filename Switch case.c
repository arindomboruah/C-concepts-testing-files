#include<stdio.h>
int main()
{
    char day;
    printf("Enter the day:");
    scanf("%c",&day);
    Switch(day)
    {
        Case '1':printf("Monday\n");
                 break;
        Case '2':printf("Tuesday\n");
                break;
        Case '3':printf("Wednesday\n");
                break;
        Case '4':printf("Thursday\n");
                break;
        Case '5':printf("Friday\n");
                break;
        Case '6':printf("Saturday\n");
                break;
        Case '7':printf("Sunday\n");
                break;
        default:printf("not a valid day\n");

    }
    return 0;
}