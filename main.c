#include <stdio.h>
#include <string.h>

int main() 
{
    char str1 []= "Hello my boy is fine";
    char str2 []= "World is ok";

    int result = ft_strcmp(str1, str2);
    printf("Comparing '%s' and '%s'", str1, str2);
    printf("\n");

    return 0;
}