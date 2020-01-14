// recursively finding sum  with negetive value 
#include <stdio.h>

int sum( int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if (n < 0) 
        return n + sum(n+1);
    return n + sum(n-1); 
}
int main(void){
    int result;
    result = sum(-3);
    printf("%d\n",result);
    return 0;
}