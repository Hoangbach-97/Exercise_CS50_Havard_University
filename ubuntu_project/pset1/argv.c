#include<stdio.h>
#include<cs50.h>

int main(int argc, string argv[])
{
    if(argc==2)
    {
        printf("Hello %s", argv[1]);
    }
    else
    {
        printf("Hello world");
    }
}