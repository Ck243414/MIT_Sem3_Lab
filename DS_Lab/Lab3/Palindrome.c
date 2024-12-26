#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100
char s[50];
int top1=-1;
void push1(int n,char c)
{
    top1++;
    if(top1>MAX-1)
    {
        printf("Stack overflow\n");
        exit(0);
    }
    s[top1]=c;
}

void pop1()
{
    if(top1<0)
    {
        printf("Stack underflow\n");
        exit(0);
    }
    top1--;
}

void main2()
{
    int n;
    char a[100];
    printf("Enter a string\n");
    gets(a);
    n=strlen(a);
    for(int i=0;i<n/2;i++)
        push(n,a[i]);
    for(int i=(n+1)/2;i<strlen(a);i++)
    {
        if(a[i]==s[top1])
            pop();

    }
    if(top1==-1)
        printf("Palindrome string\n");
    else
        printf("Not a palindrome string\n");



}
