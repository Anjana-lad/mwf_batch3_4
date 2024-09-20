// do while loop
#include <stdio.h>
int main()
{
    int num1, num2, res, choice;
    do{
    printf("\n1. Addition");
    printf("\n2. subtraction.");
    printf("\n 3.Multiplication ");
    printf("\n 4. division");
    printf("\n Enter choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\nEnter num1 and num2:");
        scanf("%d %d", &num1, &num2);
        res = num1 + num2;
        printf("\nRes=%d", res);
        break;
    case 2:
        printf("\nEnter num1 and num2:");
        scanf("%d %d", &num1, &num2);
        res = num1 - num2;
        printf("\nRes=%d", res);
        break;
    case 3:
        printf("\nEnter num1 and num2:");
        scanf("%d %d", &num1, &num2);
        res = num1 * num2;
        printf("\nRes=%d", res);
        break;
    case 4:
        printf("\nEnter num1 and num2:");
        scanf("%d %d", &num1, &num2);
        res = num1 / num2;
        printf("\nRes=%d", res);
        break;
    default:
        printf("\nInvalid choice;...");
        break;
    }
   }while(choice<=4);
}