#include <stdio.h>
#include<math.h>
#include<stdlib.h>


unsigned int rand_cisla(unsigned int a, unsigned int b)
{
    unsigned int cislo = (rand() % (b - a+ 1) + a);
    return cislo;
}
void print( char bits[],unsigned int arr[],unsigned int poc)
{
    unsigned int i;
    printf("\t{");
    for (i = 0; i < poc;i++)
    {
        if(bits[i] == '1')
            printf("%u,",arr[i]);
        

    }
    printf("}");
    printf("\t{");
    for(i = 0; i < poc;i++)
    {
        if(bits[i] == '0')
            printf("%u,",arr[i]);
    }
    printf("}\n");

}

char vsetky_podmnoziny(unsigned int poc)
{
    unsigned int poz,j;
    char bits[poc];
    j = pow(2,poc-1);
    unsigned int mnoz[poc];
    for(int i = 0; i < poc; i++)mnoz[i] = rand_cisla(0,9);


    for(int i = 0; i < poc; i++)bits[i] = '0';

    for(int i = 0; i < j; i++)
    {
        print(bits,mnoz,poc);
        poz = poc - 1;
        
        inte:
        if(bits[poz] == '0')
            bits[poz] = '1';
        else
        {
            bits[poz] = '0';
            poz--;
            goto inte;
        }


    }

    return '1';

}

int main()
{

    
    vsetky_podmnoziny(5);

}