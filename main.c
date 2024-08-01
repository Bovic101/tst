#include <stdio.h>
int ft_strcmp(char *s1, char *s2);

int main() 
{
    char str1 []= "Hello my boy";
    char str2 []= "World is ok";

    int result = ft_strcmp(str1, str2);
    printf("Comparing '%s' and '%s'", str1, str2);
    printf("\n");

    return 0;
}