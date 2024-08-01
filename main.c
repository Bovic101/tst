#include <stdio.h>
int ft_strcmp(char *s1, char *s2);

int main() 
{
    char str1 []= "Hello";
    char str2 []= "World";

    int result = ft_strcmp(str1, str2);
    printf("Comparing '%s' and '%s': %d\n", str1, str2, result);

    return 0;
}