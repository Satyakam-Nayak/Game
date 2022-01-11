#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int game(char you,char comp)
{
    if(you==comp)
    return 0;
    else if(you=='r' && comp=='p')
    return -1;
    else if(you=='r' && comp=='s')
    return 1;
    else if(you=='p' && comp=='r')
    return 1;
    else if(you=='p' && comp=='s')
    return -1;
    else if(you=='s' && comp=='p')
    return 1;
    else
    return -1;
}
int main()
{
    char you,comp;
    int n,number;
    srand(time(0));
    n=rand()%100+1;
    printf("******Welcome to the rock paper sisccor game******\n");
    if(n<=33)
    comp='r';
    else if(n>33 && n<=66)
    comp='p';
    else
    comp='s';
    printf("choose r for rock, s for scissor and p for paper \n");
    scanf("%c",&you);
    number=game(you,comp);
    if(number==0)
    printf("match draw \n");
    else if(number==1)
    printf("you win \n");
    else
    printf("you lose \n");
return 0;
}
