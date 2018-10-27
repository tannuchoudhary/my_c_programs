#include <stdio.h>
int main()
{
    char x;
    int isLowerCaseVowel, isUpperCaseVowel;
    printf("enter an alphabet:");
    scanf("%c",&x);
    isLowerCaseVowel = (x == 'a'|| x == 'e' || x == 'i' || x == 'o' || x == 'u' );
    isUpperCaseVowel = (x == 'A' || x == 'E' || x== 'I' || x == 'O' || x == 'U' );
    if(isLowerCaseVowel || isUpperCaseVowel)
        printf("%c is a vowel",x);
    else
        printf("%c is a consonant",x);
    return 0;
}
