#include<stdio.h>
#include<time.h>
void main()
{
    int no,i,ans;
    time_t t;
    for(i=0;i<20;i++)
    {
        time(&t);
        printf("Input a number: ");
        scanf("%d",&no);
        ans=no*no;
        printf("%d The square value of %d is %d",i+1,no,ans);
        printf("\nTime elapsed: %s\n",ctime(&t));
    }
}
