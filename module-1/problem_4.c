#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >0)
    {
        printf("positive");
    }else if (n < 0){
        printf("negative");
    }else{
        printf("zero");
    }
    
    return 0;
}