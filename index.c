
#include <stdio.h>

int main()
{
    // qus=1
    int no=1;
    printf("enter any number:");
    scanf("%d",&no);
    
    no%2 == 0?printf("Even"):printf("odd");

    // qus=2
    int monthno;
    printf("enter month no :");
    scanf("%d",&monthno);
    
    switch(monthno){
        case 1:{
            printf("january");
            break;
        }
        case 2:{
            printf("february");
            break;
        }
        case 3:{
            printf("march");
            break;
        }
        case 4:{
            printf("april");
            break;
        }
        case 5:{
            printf("may");
            break;
        }
        case 6:{
            printf("june");
            break;
        }
        case 7:{
            printf("july");
            break;
        }
        case 8:{
            printf("august");
            break;
        }
        case 9:{
            printf("september");
            break;
        }
        case 10:{
            printf("octomber");
            break;
        }
        case 11:{
            printf("november");
            break;
        }
        case 12:{
            printf("december");
            break;
        }
        default:{
            printf("invalid no");
        }
        
    }

    // qus 3 
     int yearno;
    printf("Enter a year: ");
    scanf("%d", &yearno);
    
    if(yearno%400 == 0){
        printf("is a leap year.");
    }
    else if (yearno % 4 == 0) {
        printf("is a leap year.");
    }
    else {
        printf("not leap year");
    }
  
    return 0;
}