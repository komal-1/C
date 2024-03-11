#include<stdio.h>
int main(){
    // int age =22;
    // int *ptr = &age;

    // float price = 20.00;
    // float *ptr = &price;

    char star = '*';
    char *ptr = &star;
    

    
    printf("ptr = %u\n ",ptr);
    ptr ++;
    printf("ptr = %u\n ",ptr);

    ptr --;
    printf("ptr = %u\n ",ptr);
    return 0;
}
