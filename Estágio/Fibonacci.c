// Função para calcular o n-ésimo termo da sequência de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Função para verificar se um número pertence à sequência de Fibonacci
int pertenceSequenciaFibonacci(int numero) {
    int i = 0;
    while (fibonacci(i) <= numero) {
        if (fibonacci(i) == numero) {
            return 1;
        }
        i++;
    }
    return 0;
}

int main() {
    // Número para verificar
    int numeroInformado = 21;

    // Verifica se o número pertence à sequência de Fibonacci
    if (pertenceSequenciaFibonacci(numeroInformado)) {
        printf("%d pertence à sequência de Fibonacci.\n", numeroInformado);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", numeroInformado);
    }

    return 0;
}
