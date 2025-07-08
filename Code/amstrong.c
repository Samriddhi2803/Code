#include <stdio.h>
#include <math.h>

int main(){
    int num, num1, rem, res = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d",&num);

    num1 = num;
    while (num1 != 0) {
        num1 /= 10;
        n++;
    }

    num1 = num;
    while (num1 != 0) {
        rem = num1 % 10;
        res += pow(rem, n);
        num1 /= 10;
    }
    if(res == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
