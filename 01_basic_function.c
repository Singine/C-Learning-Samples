#include <stdio.h>
#include <string.h>

int add(int a, int b)
{
    return a + b;
}

// // BUG
// char concat(char s1[], char s2[])
// {
//     char result[50];
//     strcat(result, s1);
//     strcat(result, " ");
//     strcat(result, s2);
//     return result;
// }

int main()
{
    // int aa = 1;
    // int bb = 2;
    char action[] = "bobo";
    char name[] = "Gubao";

    // printf("%d\n", add(aa, bb));

    printf("%s,%s!\n", name,action);
    system("pause");
    return 0;
}
