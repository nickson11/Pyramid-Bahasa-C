#include<stdio.h>


    int main()
{
        int i,j,k,count,number;
            printf("Insert A Number : \n");
                scanf("%d",&number);
                count=number-1;

        for(i=1;i<=2*(number)-1;i+=2)
            {
        for(k=1;k<=count;k++)
            {
            printf(" ");
            }
            count--;
        for(j=1;j<=i;j++)
            {
            printf("%d",j);
            }
            printf("\n");
            }
            count=1;
        for(i=2*(number)-1;i>=1;i-=2)
            {
        if(i!=(2*(number)-1))
            {
        for(k=1;k<=count;k++)
            {
            printf(" ");
            }
            count++;
        for(j=1;j<=i;j++)
            {
            printf("%d",j);
            }
            printf("\n");
        }
    }
}
