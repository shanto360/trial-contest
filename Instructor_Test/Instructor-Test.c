// Problem Statement
// Take two non-negative integer X and Y as input and output the multiplication of those two numbers.
// Input Format
// Input will contain two non-negative positive integers
// Constraints
// 0 <= X <= 100
// 0 <= Y <= 100
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d", &x,&y);
    int mul = x * y;
    printf("%d", mul);
    return 0;
}