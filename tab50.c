#include <stdio.h>

int main()
{
    int T[50];
    int N;
    int I, J;
    printf("dimension du tableau(max.50):");
    scanf("%d", &N);
    for (I = 0; I < N; I++)
        ;
    {
        printf("Element %d:", I);
        scanf("%d", &T[I]);
    }
    printf("Tableau donné : \n");
    for (I = 0; I < N; I++)
        printf("%d", T[I]);
    printf("\n");
    for (I = 0, J = 0; I < N; I++)
        ;
    {
        T[J] = T[I];
        if (T[I]) J++;
         N = J;
    printf("tableau resultat : \n");}
    for (I = 0; I < N; I++)
        {
    printf("%d", T[I]);
    printf("\n");
    return 0;
        }
}
