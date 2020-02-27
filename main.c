#include <stdio.h>
void br();
void ic();
int main()
{
    int toes;
    toes = 10;
    printf("toes = %d", toes);
    printf("double toes = %d", toes * 2);
    printf("square toes=%d", toes * toes);
    // br();
    // printf(",");
    // ic();
    // printf("\n");
    // ic();
    // printf(",\n");
    // br();
    // printf("Gust Mah\n");
    // printf("Gust\nMah\n");
    // printf("Gust ");
    // printf("Mah");

    return 0;
}
//打印B，R
void br()
{
    printf("Brazil,Russia");
}
//打印I，C
void ic()
{
    printf("India,China");
}
void print()
{
    printf("Smile!");
}