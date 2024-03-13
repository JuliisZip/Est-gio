// Função para calcular o comprimento de uma string
int length(char string[]) {
    int len = 0;
    while (string[len] != '\0') {
        len++;
    }
    return len;
}

// Função para inverter os caracteres de uma string
void inverterString(char string[]) {
    int len = length(string);
    int inicio = 0;
    int fim = len - 1;

    // Inverte os caracteres até que os ponteiros de início e fim se cruzem
    while (inicio < fim) {
        // Troca os caracteres nas posições inicio e fim
        char temp = string[inicio];
        string[inicio] = string[fim];
        string[fim] = temp;

        // Move os ponteiros de início e fim
        inicio++;
        fim--;
    }
}

int main() {
    char string[100];

    printf("Digite uma palavra: ");
    scanf("%s", string);

    // Chama a função para inverter a string
    inverterString(string);

    printf("Palavra invertida: %s\n", string);

    return 0;
}
