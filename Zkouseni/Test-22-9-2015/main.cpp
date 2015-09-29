#include <stdio.h>

void VypisPole(int pole[], int velikost) {
    for (int i = 0; i < velikost; ++i) {
        printf("%d ", pole[i]);
    }
}

void ZmenTretiNaJedna(int pole[], int velikost)
{
    for(int i = 0; i < velikost; i++)
        if(i%3==0)
            pole[i] = 1;
    /* Alternativa
    for(int i = 0; i < velikost; i += 3)
        pole[i] = 1;
    */
}

int main()
{
    int velikost = 10;
    int pole[10] = {0,1,2,3,4,5,6,7,8,9};
    ZmenTretiNaJedna(pole, velikost);
    VypisPole(pole, velikost);
    return 0;
}

