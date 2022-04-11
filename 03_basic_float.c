/************************************************************************
 - AUTO-GEN.HEADER
 * @file: 03_basic_float.c
 * @DIR: "E:\Project\GIT\C-Learning-Samples"
 *
 * @Author: DZH
 * @Date: 2022/04/12 02:04:30
 * @Description: 
 * float 4 byte
 * double 8 byte
************************************************************************/

#include <stdio.h>

int main()
{
    float a = 1.234;
    float b = 0.001;
    double c = 365.123456;
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f\n", c);
    printf("\n");
    printf("size of float:%d\n",sizeof(float));
    printf("size of double:%d\n",sizeof(double));

    system("pause");
    return 0;
}