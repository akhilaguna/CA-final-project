#include<stdio.h>
#include<time.h>
void main()
{
    int no,i,ans;
    time_t t;
    FILE*fptr;
    char str[1000];
    char name[15]="File.txt";
    char stime[25];
    fptr=fopen(name,"w");

    for(i=0;i<20;i++)
    {
    time(&t);
    printf("Input a number:");
    scanf("%d",&no);
    ans=no*no;
    printf("Square value of %d is %d",no,ans);
    printf("\nTime elapsed: %s\n",ctime(&t));
    fprintf(fptr,"%d square value of %d is %d \nTime elapsed: %s",i+1,no,ans,ctime(&t));
    }
    fclose(fptr);
    system("getmac");
    system("hostname");
    printf("\n Press any key to read the file_");
    getch();

    fptr=fopen("File.txt","r");
    if(fptr==NULL){
        printf("\n Couldn't open file %s","File.txt");
        return 1;
    }
    printf("\n\n Data from the file : File.txt\n\n");
    while (fgets(str,1000,fptr)!=NULL){
        printf("%s",str);
    }
    time(&t);
    printf("\n Current system time : %s",ctime(&t));
    fclose(fptr);
    return 0;
}
