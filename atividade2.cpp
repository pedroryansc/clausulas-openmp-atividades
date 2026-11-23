#include <stdio.h>
#include <omp.h>

int main(){
    // A soma inicia em 0
    int soma = 0;

    // A quantidade máxima de núcleos será a quantidade de threads executada na região paralela
    printf("\nTotal de threads = %d\n", omp_get_max_threads());

    // Definindo "soma" como uma variável compartilhada entre as threads
    #pragma omp parallel shared(soma)
    {
        // A diretiva "atomic" garante que a instrução sobre a variável inicie e termine sua execução sem ser interrompida (atomicidade),
        // garantindo que apenas uma thread atualize a variável por vez
        #pragma omp atomic
        soma += 1;
        // Com cada thread adicionando 1 à soma, o resultado final será a quantidade de threads executadas
    }

    printf("Total da soma = %d\n", soma);
}