#include <stdio.h>
#include <stdlib.h>
#include "forca.h"

int main()
{
printf("FOGO DA FORCA\n");
    printf("DESENVOLVEDORES: \n18123 - Beatriz Hipolito\n 18136 - Isabella Finarde");
    NoSecreto * lstSecreta = inicializaListaSecreta();
    lstSecreta = carregaListaArquivo(lstSecreta, "D:\\bebella\\c - matioli\\JogoForca\\palavras.dat");
    imprimeListaSecreta(lstSecreta);

}
