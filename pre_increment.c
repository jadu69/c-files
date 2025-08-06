// increment with i
#include <stdio.h>

int main() {
    int i = 5;
    int result = ++i;  // Use the current value of i, then increment it
    
    printf("i: %d\n", i);        // Output: i: 6
    printf("result: %d\n", result);  // Output: result: 6
    int t = i;
    printf("result: %d\n", t); 
    return 0;
}