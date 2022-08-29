#include <stdio.h> 
int main() 
{ 
int a[10];  
int count[10];
int i,j; 
for(i=0;i<10;i++) 
{ 
    count[i] = 0;
    printf("number%d: ",i+1);
    scanf("%d",&a[i]);
    for(j=0;j<i;j++)
    { 
        if (a[j] == a[i])
            count[i]++;
    }
}
int max = count[0]; 
int check,check2,sw,num=1;
for(i=0;i<10;i++) 
{ 
    if (count[i] > max)
    { 
        max = count[i]; 
        check = i;
    }
}
printf("base popular: %d ",a[check]);
    return 0;
}