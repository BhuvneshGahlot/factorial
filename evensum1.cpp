#include <stdio.h>

int main() {
    int limit, sum = 0;

    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++) {
        if (i % 2 == 0) { 
            sum += i;     
        }
    }

    printf("The sum of even numbers from 1 to %d is : %d", limit, sum);
    
    return 0;

}
