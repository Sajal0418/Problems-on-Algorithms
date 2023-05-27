#include <stdio.h>

int fib(int n) {
//Your code here
int max=0;
    if(n==0)
    {
    return max;
    }
    if(n==1)
    {
        max=1;
        return max;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }

}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}
