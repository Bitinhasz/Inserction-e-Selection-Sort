
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void fSelect_Sort(int *pVetor);

int main()
{
    int vVetor[TAM]; 
    int vAux;

    srand ( time(NULL) );
    for (vAux=0; vAux < TAM; vAux++)
    {
        vVetor[vAux] = (rand() % 9) + 1; // Preenche o vetor com valores aleatórios de 1 até 9
        printf(" %d,",vVetor[vAux]);
    }

    fSelect_Sort(vVetor); // Chama a função de Ordenação;

    printf("\n\n");

    for (vAux=0; vAux < TAM; vAux++)
    {
        printf(" %d,",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
    return 0;
}

void fSelect_Sort(int *pVetor)
{
    int vMenor;
    int vAux;
    int vTemp;
    int vTroca;

    for(vAux=0; vAux < TAM-1; vAux++) 
    {
        vMenor = vAux; 

        for (vTemp=vAux+1; vTemp < TAM; vTemp++)
        {
            if (pVetor[vTemp] < pVetor[vMenor]) 
            {
                vMenor = vTemp; 
            }
        }

        if (vMenor != vAux)
        {
            vTroca         = pVetor[vAux];
            pVetor[vAux]   = pVetor[vMenor];
            pVetor[vMenor] = vTroca;
        }
    }
}
