#include <stdio.h>

int main() {
    int num, rev = 0, n , rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    while(num != 0) {
        rem = num % 10;            
        rev = rev * 10 + rem; 
        num /= 10;                       
    }
    if(n==rev) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }
    return 0;
}
