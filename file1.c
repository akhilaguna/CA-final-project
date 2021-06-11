#include<stdio.h>
#include<time.h>
void main()
{
    int no,ans;
    time_t t;
    time(&t);
    printf("Input a number: ");
    scanf("%d",&no);
    ans=no*no;
    printf("The square value of %d is %d",no,ans);
    printf("\nTime elapsed: %s\n",ctime(&t));
}
