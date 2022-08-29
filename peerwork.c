#include <stdio.h> 
int main() 
{ 
    int i,j,number;
    printf("Enter number: "); 
    scanf("%d",&number);
    int limj;
    int space,check;
    for(i=1;i<=number;i++) 
    { 
        space = number - i; 
        
        for(check=0;check<space;check++) 
        { 
            printf(" ");
        }  
        limj = 2*i -1;
        for(j=1;j<=limj;j++) 
        { 
            if(j%2 == 0) 
            { 
                printf(" ");;
            }
            else 
            { 
                printf("%d",i);
            }
        }
        printf("\n");
    }
    return 0;
}