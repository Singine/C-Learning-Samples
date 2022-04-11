/************************************************************************
 - AUTO-GEN.HEADER
 * @file: 02_basic_int.c
 * @DIR: "E:\Project\GIT\C-Learning-Samples"
 *
 * @Author: DZH
 * @Date: 2022/04/12 01:47:39
 * @Description: 
 * char 1 byte -128 == +127                 unsigned char
 * short 2 byte -32768 == +32767            unsigned short
 * int 4 byte -2147483648 == +2147483647    unsigned int
 * long 4 byte -2147483648 == +2147483647   unsigned long
 * long long 8 byte                         unsigned long long
************************************************************************/

#include <stdio.h>

void main()
{
    printf("size of char:%d\n", sizeof(char));
    printf("size of short:%d\n", sizeof(short));
    printf("size of int:%d\n", sizeof(int));
    printf("size of long:%d\n", sizeof(long));
    printf("size of longlong:%d\n", sizeof(long long));


     
    
    system("pause");
}