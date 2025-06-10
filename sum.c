// Online C compiler to run C program online
#include <stdio.h>
int sum(int a, int b){
    return a+b; // somma due interi
}

int main() {
    int x = 10, y = 20;
    int s = sum(x,y);
    printf("La somma di %d e %d è %d\n", x,y,s);
    
    return 0;
}