//nested switch 
#include<stdio.h>
int main(){
    int choice,ch;
    printf("\nSelect food.");
    printf("\nMenu");
    printf("\n 1. Pizza");
    printf("\n 2. cold-drink");
    printf("\n Enter choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("\n You have selected pizza.");
        printf("\nMenu for pizza.");
        printf("\n1. Veg pizza.");
        printf("\n 2.Cheese pizza ");
        printf("\n Enter  choice for pizza ?");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("You selected veg pizza.");
            
            break;
        case 2:
            printf("You selected cheese pizza.");
            break;
        default:
            printf("Invalid choice for pizza.");
            break;
        }
        break;
    case 2:
        printf("\n You have selected Cold-drink");
        printf("\nMenu for cold -drink");
        printf("\n1. Fresh Juice");
        printf("\n 2.Coke ");
        printf("\n Enter  choice for cold -drink ?");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("You selected fresh juice");
            break;
        case 2:
            printf("You selected coke.");
            break;
        default:
            printf("Invalid choice for cold -drink");
            break;
        }
     break;
    default:
        printf("Invalid choice for food.thank you visit again.");
        break;
    }
}