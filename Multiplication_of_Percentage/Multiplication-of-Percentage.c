// Rahim has X% share, Karim has Y% share and Habib has (X*Y)% share of the company Zeta. Can you tell the amount of share of Habib?
#include<stdio.h>
int main(){
int x,y,mul;
scanf("%d%%%d%%",&x,&y);
mul = (x*y);
printf("%d%%",mul);
return 0;
}