/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_line(char linha[], int tam, FILE *f) {
  fgets(linha, tam, f);
  while (linha[0] == '\n') {
    fgets(linha, tam, f);
  }
  if (linha[strlen(linha) - 1] == '\n') {
    linha[strlen(linha) - 1] = '\0';
  }
}

typedef struct times_t {
  char nome[50];
  int golsMarcados, golsSofridos;
} time;

void lerTimes(time times_v[], int tam_v) {
  times_v = realloc(times_v, sizeof(time) * tam_v);
  for (int i = 0; i < tam_v; i++) {
    read_line(times_v[i].nome, 50, stdin);
    scanf("%d %d", &times_v[i].golsMarcados, &times_v[i].golsSofridos);
  }
}

void ordena(time times_v[], int tam_v) {
  for (int i = 0; i < tam_v; i++) {
    for (int j = i + 1; j < tam_v; j++) {
      if (times_v[j].golsMarcados > times_v[i].golsMarcados) {
        time aux = times_v[j];
        times_v[j] = times_v[i];
        times_v[i] = aux;
      }
    }
  }
}

void imprimirTimes(time times_v[], int tam_v) {

  int marcador=1;

    for (int i = 0; i < tam_v; i++) {
      printf("%d - %s \nGols marcados: %d\nGols sofridos: %d \n", marcador,
             times_v[i].nome, times_v[i].golsMarcados, times_v[i].golsSofridos);
    marcador++;
  }
}
int main(void) {
  time *times_v;
  int tam_v;
  char nome[50];
  scanf("%d", &tam_v);
  times_v = malloc(sizeof(time));

  lerTimes(times_v, tam_v);
  ordena(times_v, tam_v);
  imprimirTimes(times_v, tam_v);

  free(times_v);
  return 0;
}*/