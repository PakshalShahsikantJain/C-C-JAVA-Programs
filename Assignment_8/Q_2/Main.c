#include <stdio.h>

int  Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    switch(iNo)
    {
         case 1:
        printf("Number Is One");
        break;

        
        case 2: 
        printf("Number Is Two");
        break;

        
        case 3: 
        printf("Number Is Three");
        break;

        
        case 4:
        printf("Number Is Four");
        break;

        
        case 5: 
        printf("Number Is Five");
        break;

        
        case 6: 
        printf("Number Is Six");
        break;

        
        case 7:
        printf("Number Is Seven");
        break;

        
        case 8: 
        printf("Number Is Eight");
        break;

        
        case 9: 
        printf("Number Is Nine");
        break;

        default :
        printf("Number Is Invalid");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}