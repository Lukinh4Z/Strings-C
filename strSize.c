#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * @brief calculates the size of the string s
 * 
 * @param s 
 * @return int 
 */
int sizeString(char *s) {

    int count = 0;

    while(s != NULL && s[count] != '\0'){
        count++;
    }

    return count;
}

/**
 * @brief checking if the string s is empty
 * 
 * @param s 
 * @return true 
 * @return false 
 */
bool strEmpty(char *s) {

    return sizeString(s) == 0 ? true : false;
}

/**
 * @brief concat str1 and str2 in a str3 string.
 * 
 * @param str1 
 * @param str2 
 * @return char* 
 */
char *concatStr(char *str1, char *str2) {
    int s_s1 = sizeString(str1);
    int s_s2 = sizeString(str2);

    //size of str3 have to acomodate "\0"
    int s_s3 = s_s1 + s_s2 + 1;

    //allocates memory for the new string.
    char *str3 = (char*) malloc (sizeof(char) * s_s3);


    for(int j = 0; j < s_s2; j++) {
        str3[j + s_s1] = str2[j];
    }

    for(int i = 0; i < s_s1; i++) {
        str3[i] = str1[i];
    }
    //adding the end of the string.
    str3[s_s3] = '\0';

    return str3;

} 

int main()
{

    char *string0 = NULL;
    char *string1 = "Teste 1, ";
    char *string2 = "teste 2.";

    printf("\n");   
    
    /**
     * @brief this is very dumb since I could've put this on the "sizeString()"
     * and check directly by it's size, thus not calculating the same thing twice.
     * 
     */
    strEmpty(string0) == 1 ? printf("A string está vazia \n") : printf("A string %s contem %d caracteres. \n", string0, sizeString(string0));
    strEmpty(string1) == 1 ? printf("A string está vazia \n") : printf("A string %s contem %d caracteres. \n", string1, sizeString(string1));
    strEmpty(string2) == 1 ? printf("A string está vazia \n") : printf("A string %s contem %d caracteres. \n", string2, sizeString(string2));

    char *string3 = concatStr(string1, string2);

    printf("A concatenação resulta em: %s \n", string3);
    printf("\n");

    //freeing the memory aloocated in the subroutine.
    free(string3);

    return 0;
}
