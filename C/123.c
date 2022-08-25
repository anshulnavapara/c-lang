#include<stdio.h>
void main()
{
    int option,Answer,a,b,addition,subtraction,multiplication,division,modulas,minimum,maximum,equality;
    printf("Enter first value :-");
    scanf("%d",&a);
    printf("Enter second value :-");
    scanf("%d",&b);
    printf("Select option :-");
    scanf("%d",&option);
    printf("\n1 for Addition");
    printf("\n2 for subtraction");
    printf("\n3 for multiplication");
    printf("\n4 for division");
    printf("\n5 for minimum");
    printf("\n6 for maximum");
    printf("\n7 for equality");
    addition=a+b;
    subtraction=a-b;
    multiplication=a*b;
    division=a/b;
    if(option>1 && option<7);
    {
        if(option == 1)
            printf("%d",addition);
        if(option == 2)
            printf("%d",subtraction);
        if(option == 3)
            printf("%d",multiplication);
        if(option ==  4)
            printf("%d",division);
        
    }    

}