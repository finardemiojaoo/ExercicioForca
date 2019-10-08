#include <stdio.h>
#include <stdlib.h>
#include "forca.h"

int main()
{
    NoSecreto * lstSecreta = inicializaListaSecreta();
    lstSecreta = carregaListaArquivo(lstSecreta, "D:\\bebella\\c - matioli\\JogoForca\\palavras.dat");
    imprimeListaSecreta(lstSecreta);

}
