#include <stdio.h>
#define maxsize 10
int main(){
    int product[maxsize];
    int size, p, option;
    int price;
    int pos;


    printf("Please enter of your products which it less than 10 products: ");
    scanf("%d",&size);
    printf("\n\n");

    if(size <= maxsize)
    {
        for(p=0; p<size; p++)
        {
            printf("please enter the prince of your products %d: ",p+1);
            scanf("%d",&product[p]);
            printf("\n");
        }
    }
    else
        {
        printf("This size is out of the range \n");
        printf("\n\n");
        }

    printf("*______________________________The_Stored_Data______________________________*");
    printf("\n\n");

    for(p=0; p<size; p++)
    {
        printf("The price of product %d is %d$ \n",p+1,product[p]);
    }

    printf("_______________________________________________________________");
    printf("\n\n");
    printf("                           Options                             ");
    printf("\n\n");
    printf("1- Insert New Price \n");
    printf("2- Exit \n");
    printf("\n\n");
    printf("your choice is: ");
    scanf("%d",&option);
    printf("\n\n");

    if(option == 1)
    {
        printf("Enter The Other price Of Your Product: ");
        scanf("%d",&price);
        printf("\n\n");
        printf("Enter The Position Of Your Product: ");
        scanf("%d",&pos);
        if(pos>size)
            {
                printf("This size is out of your range");
                return 0;
            }
        printf("\n\n");
    }

    else if(option == 2 )
    {
        printf ("Thank you for using this application \n");
        printf("\n\n");
        return 0;
    }

    else
    {
        printf("this option is not found");
    }

    printf("\n\n");

    for(p=size; p>=pos; p--)
    {
        product[p+1]=product[p];
    }
    size++;
    product[pos] = price;
    printf("\n\n");
    printf("*______________________________The_New_Data______________________________*");
    printf("\n\n");

     for(p=0; p<size; p++)
    {
        printf("The price of product %d is %d$ \n",p+1,product[p]);
    }




}
