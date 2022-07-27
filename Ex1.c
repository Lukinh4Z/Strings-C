#include <stdio.h>

int main()
{
    /**
     * string code
     * We can with two ways:
     */

    /** 
     * @brief with the vector definition "char str[] = {...,'\0'}"
     * 
     */
    char str[] = {'s', 't', 'r', '\n', '\0'};

    /**
     * @brief or with the pointer definition "chart *str = "...""
     * 
     */
    char *str2 = "str2";

    printf("%s \n", str);
    printf("%s", str2);

    return 0;
}
