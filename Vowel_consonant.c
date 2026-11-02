#include <stdio.h>

int main()
{
    char alphabet;

    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' ||
       alphabet == 'o' || alphabet == 'u')
    {
        printf("It is a Vowel");
    }
    else
    {
        printf("It is a Consonant");
    }

    return 0;
}
