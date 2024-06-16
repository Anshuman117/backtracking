#include<stdio.h>
void call(int n)
{
    if(n>=1)

    {
        printf("%dhello\n",n);
        call(n-1);
    }
    printf("%dhello\n",n);
}
void main()
{
    call(5);
}  