#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "pt_br.UTF-8");
  printf("Teste 1:\n");
  printf("Impressão de uma palavra com cedilha e til:\n");
  printf("Elevação\n");
  FILE *file;
  fopen_s(&file, "portuguese.txt", "w");
  if (file == NULL) {
    printf("Error! Could not open the file\n");
    exit(1);
  }
  fprintf(file, "%s\n", "Teste 1:");
  fprintf(file, "%s\n", "Impressão de uma palavra com cedilha e til:");
  fprintf(file, "%s\n", "Elevação");
  fclose(file);
}