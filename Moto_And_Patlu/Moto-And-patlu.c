// Motu has N bananas and Patlu has M bananas. Can you tell how many bananas both of them have?
#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d%d", &N,&M);
    int sum = N + M;
    printf("the total number of bananas both of them have %d", sum);
    return 0;
}