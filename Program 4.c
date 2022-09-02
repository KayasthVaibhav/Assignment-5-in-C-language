//Write a program to print the first N odd natural numbers .//

#include <stdio.h>
#include <conio.h>

int main()
{
    int i=1, N;

    printf("Print the First N  ODD Natural Numeber : \n");
    scanf("%d",&N);

     for( i =1; i<=N;i++)
    {
        printf("%d\n",2*i-1);

    }
    return 0;

}



//Completed //



