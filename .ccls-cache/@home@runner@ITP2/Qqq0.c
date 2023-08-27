/*#include <stdio.h>
#include <stdlib.h>

typedef struct times_t{ // times
  char nome[200]; // nome do time
  int vitorias,empates,derrotas; // vitorias empates e derrotas dos times
  int golsfeitos,golssofridos; // gols feitos e gols sofridos
}time;

void ordena(int vetor[],int tamanho){// ordenação crescente
  int troca;
	troca=1; //A variável "troca" será a verificação da troca em cada passada
	for(int j=tamanho-1; (j>=1) && (troca==1); j--){
		troca=0; //Se o valor continuar 0 na próxima passada quer dizer que não houve troca e a função é encerrada.
		for(int i=0; i<j; i++){
				if(vetor[i]>vetor[i+1]){
					int aux=vetor[i];
					vetor[i]=vetor[i+1];
					vetor[i+1]=aux;
					troca=1; //Se houve troca, "troca" recebe 1 para continuar rodando.
			}
		}
	}
}

int main(){
  int T;
  scanf("%d",&T);
  time vetor[T];
  for(int i=0;i<T;i++){
    fgets();
    vetor[i].nome;
  }
  
  
  return 0;
}*/