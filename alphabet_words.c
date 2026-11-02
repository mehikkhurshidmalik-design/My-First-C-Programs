#include <stdio.h>

int main()
{
    char alphabet;

    printf("Enter a lowercase alphabet: ");
    scanf("%c", &alphabet);

    switch(alphabet)
    {
        case 'a':
            printf("A for Apple");
            break;
        case 'b':
            printf("B for Ball");
            break;
        case 'c':
            printf("C for Cat");
            break;
        case 'd':
            printf("D for Dog");
            break;
        case 'e':
            printf("E for Elephant");
            break;
        case 'f':
            printf("F for Fish");
            break;
        case 'g':
            printf("G for Grapes");
            break;
        case 'h':
            printf("H for House");
            break;
        case 'i':
            printf("I for Ice");
            break;
        case 'j':
            printf("J for Jug");
            break;
        case 'k':
            printf("K for Kite");
            break;
        case 'l':
            printf("L for Lion");
            break;
        case 'm':
            printf("M for Mango");
            break;
        case 'n':
            printf("N for Nest");
            break;
        case 'o':
            printf("O for Orange");
            break;
        case 'p':
            printf("P for Parrot");
            break;
        case 'q':
            printf("Q for Queen");
            break;
        case 'r':
            printf("R for Rabbit");
            break;
        case 's':
            printf("S for Sun");
            break;
        case 't':
            printf("T for Tiger");
            break;
        case 'u':
            printf("U for Umbrella");
            break;
        case 'v':
            printf("V for Van");
            break;
        case 'w':
            printf("W for Watch");
            break;
        case 'x':
            printf("X for X-ray");
            break;
        case 'y':
            printf("Y for Yacht");
            break;
        case 'z':
            printf("Z for Zoo");
            break;

        default:
            printf("Invalid input");
            break;
    }

    return 0;
}
