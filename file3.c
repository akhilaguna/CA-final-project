#include<stdio.h>
#include<time.h>
void main()
{

int no,ans,i;
time_t t;
FILE*fptr;
char str[1000];
char name[15]="File.txt";
char stime[25];
fptr=fopen(name,"w");

for(i=0;i<20;i++)
{
    time(&t);
    printf("Input a number: ");
    scanf("%d",&no);
    ans=no*no;
    printf("%d Square value of %d is %d ",i+1,no,ans);
    printf("Time elapsed: %s\n",ctime(&t));
    fprintf(fptr,"%d Square value of %d is %d \nTime elapsed: %s",i+1,no,ans,ctime(&t));
}

}
