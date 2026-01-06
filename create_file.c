#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int fd = open("arquivo_nulo.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    // Escreve: "Ola" + \0 + "Mundo" + \n
    // Total: 3 (Ola) + 1 (null) + 5 (Mundo) + 1 (\n) = 10 bytes
    write(fd, "Ola\0Mundo\n", 10);

    close(fd);
    printf("Arquivo 'arquivo_nulo.txt' criado com sucesso!\n");
    return (0);
}
