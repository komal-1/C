// #include<stdio.h>
// int main(){
//     // int age =22;
//     // int *ptr = &age;

//     // float price = 20.00;
//     // float *ptr = &price;

//     char star = '*';
//     char *ptr = &star;
    

    
//     printf("ptr = %u\n ",ptr);
//     ptr ++;
//     printf("ptr = %u\n ",ptr);

//     ptr --;
//     printf("ptr = %u\n ",ptr);
//     return 0;
// }



// we can also substract one pointer from another.
// we can also compare 2 pointers.

#include<stdio.h>
int main(){
    int age =22;
    int _age = 23;

    int *ptr =&age;
    int *_ptr =&_age;

    printf("difference = %u\n", ptr - _ptr); // 1 means true
    _ptr = &age;
    printf("comparison = %u\n",ptr == _ptr); // 1 means true
    return 0;
}
