#include <stdio.h>

int main(){
    int n,count=0;
    printf("Please enter the number: ");
    scanf("%d",&n);
    do{
        n=n/10;
        count=count+1;
    }while(n!=0);
    printf("The number of digits in the number is: %d",count);
    return 0;
}