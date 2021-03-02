#include <stdio.h>

int Sum(int n, int m){
    int x = n + m;
    return x;
}
int main(){
   int n = 5, m = 10;
   int sum = Sum(n, m);
   printf("%d\n", sum);
   return 0;
}

