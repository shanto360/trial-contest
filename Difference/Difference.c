// Rahim was decorating the book shelf with his books. He has two bookshelves, and he wants to put equal books in each book shelf. At first he put some random number of books on both shelves by guessing numbers. Now he wants to know the difference between the number of books in these two shelves so that he can rearrange them. Help him!
// You will be given two integer numbers A and B , you need to print the difference between these two numbers. Remember, difference is always positive.
#include <stdio.h>
int main() {
    int a, b, difference, tmp;
    scanf("%d %d", &a, &b);
    if(b>a){
        tmp = a;
        a = b;
        b = tmp;
    }
    difference = a - b;
    printf("%d", difference);
    return 0;
}