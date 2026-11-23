#include <stdio.h>
#include <omp.h>

int main(){
    // Definindo o valor da variável "num" na região serial
    int num = 14;

    printf("\nNumero definido na regiao serial = %d \n", num);

    // Definindo que cada thread terá uma cópia privada de "num" usando o valor já definido antes da região paralela.
    // Além disto, é definido que a região paralela deve ser executada por 2 threads
    #pragma omp parallel firstprivate(num) num_threads(2)
    {
        printf("\nNumero dentro da regiao paralela (com um valor ja definido) = %d \n", num);
    }
}