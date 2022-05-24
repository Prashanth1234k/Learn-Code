#include<stdio.h>
int main()
{
    int BoxerWeight;
    printf("Enter the Boxer weight in pounds\n");
    scanf("%d",&BoxerWeight);
    if(BoxerWeight<115)
    {
        printf("Flyweight\n");
    }
    else if(BoxerWeight>=115 && BoxerWeight<=121)
    {
        printf("Bantamweight\n");
    }
    else if(BoxerWeight>=122 && BoxerWeight<=153)
    {
        printf("Featherweight\n");
    }
    else if(BoxerWeight>=154 && BoxerWeight<=189)
    {
        printf("Middleweight\n");
    }
    else
    printf("Heaveyweight");
}
