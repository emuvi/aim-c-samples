#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "pt_br.UTF-8");
  printf("Uma palavra com cedilha e til: Elevação\n");
}