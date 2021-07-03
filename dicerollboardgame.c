#include<stdio.h>
#include<conio.h>
int roll()
{
    int rolls[2],u=6,l=1,i,a=0, re;
    b:for(i=0;i<=2;i++)
    {
        rolls[i]=(rand()%(u-l+1))+l;
    }
    printf("you rolled \n%d \n", rolls[0]);
    if(rolls[0]==6)
    {
        printf("win another roll\n");
        printf("you 2nd rolled \n%d \n",rolls[1]);
        a=a+rolls[0]+rolls[1];
    }
    else
    {
    a=a+rolls[0];
    }
        printf(" total %d\n",a);
        printf("press 1 to roll another else press enter to quit \n");
               scanf("%d", &re);
               if(re==1)
               {
                   a=0;
                   goto b;
               }
               else
               {
                 return 0;
               }
 return 0;
}
int main()
{
    srand(time(NULL));
    roll();
}

