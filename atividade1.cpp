# include <windows.h>
# include <assert.h>
# include <stdio.h>
# include <omp.h>
# include <cstdlib>

int main(int argc, char *argv[]){
    int numPrivado = 0;

    // Definindo a quantidade de threads na região paralela como 4
    omp_set_num_threads(4);

    #pragma omp parallel private(numPrivado)
    {
        numPrivado = 0;

        int numAleatorio = omp_get_thread_num();

        int numPrivado = numPrivado + numAleatorio;

        printf("NumAleatorio = %d. NumPrivado = %d \n", numAleatorio, numPrivado);
    }
}