// You will be given three non-negative integers A,B and C. You need to tell if these integers form an equilateral triangle (A triangle whose three sides are the same and each side contains a positive value). If the answer is yes, print "Yes" otherwise "No".
#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if((a==b && b==c) && (a>0 && b>0 && c>0)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}