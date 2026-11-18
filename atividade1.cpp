#include <stdio.h>
#include <omp.h>

int main(){
    // A variável "num" é inicializada como 5 na região serial
    int num = 5;

    printf("\nNumero na regiao serial = %d \n\n", num);

    // Definindo "num" como uma variável privada na região paralela, criando uma cópia local dela para cada thread
    #pragma omp parallel private(num)
    {
        // Como a cópia de "num" começa com um valor indefinido, ela é definida como 0
        num = 0;

        int idThread = omp_get_thread_num();

        // O próprio "num" recebe a soma dele com o ID da thread.
        // Isto mostra que, quando uma thread executa esta operação e em seguida outra também executa,
        // o resultado atribuído a "num" é privado e não interfere na cópia da outra thread
        num = num + idThread;

        printf("Numero Privado na regiao paralela = %d \n", idThread, num);
    }

    // A cópia original da variável permanece com o seu mesmo valor
    printf("\nNumero na regiao serial (assim como antes) = %d \n", num);
}