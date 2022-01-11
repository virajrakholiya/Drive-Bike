#include<stdio.h>
int main(){

    int age;

    printf("Enetr Your Age:\n");
    scanf("%d",&age);

    printf("You Have Entered %d Your Age\n",age);

    if (age>=18)
    {
        printf("you can drive");
    }
    else if (age>=10)
    {
        printf("you are dirve cycle");
    }  
    else
    {
        printf("you can not drive");
    }
    

    return 0;
}