#include <math.h>
#include<stdio.h>

int main(){
        int base;
        base = 2;  // add -lm when compiling: It is an option to link againt the math library.
        int result1 = (int)pow(2,2); // Why cannot I include a declared variable base here?
        int result2 = (int)pow(2,3);
        int result3 = (int)pow(2,5);
        printf("%d raised to the power of 2 is:%d\n",base, result1);
        printf("%d raised to the power of 3 is:%d\n",base, result2);
        printf("%d raised to the power of 5 is:%d\n",base, result3);
        return 0;
}
