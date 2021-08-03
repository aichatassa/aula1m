#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
  char nome[100];
  int vale;
  int planoSaude;
  float salario;
  float gratificacao;
  int dependentes;
} funcionario;

funcionario *lista;
void SalvarFuncionario( funcionario *f, int *t);
void PrintList();

int main()
{
  char nome[100];
  int qntFuncionario, i=0, grat, tam = 0;
  funcionario *func;

  printf("\n\tOla, seja bem-vindo a folha de pagamento!\n");
  printf("\nQuantos funcionarios?");
  scanf("%d", &qntFuncionario);

  for(i; i<qntFuncionario; i++)
  {
    func = (funcionario*) malloc (sizeof (funcionario));

    printf("\nEntre com seu nome:");
    scanf("\n");
    scanf("%[^\n]%*c", nome);

    printf("\nPossui vale transporte? \n(1-Sim | 0-Nao)");
    scanf("%d", &func->vale);

    printf("\nPossui plano de saude? \n(1-Sim | 0-Nao)");
    scanf("%d", &func->planoSaude);

    printf("\nPossui gratificacao? \n(1-Sim | 0-Nao)");
    scanf("%d", &grat);
    if(grat == 1){
      printf("\n Informe o valor da gratificacao: ");
      scanf("%f", &func->gratificacao);
    }

    printf("\nEntre com o seu salario: ");
    scanf("%f", &func->salario);

    printf("\nQuantos dependentes? \n");
    scanf("%d", &func->dependentes);
    strcpy(func->nome, nome);
    SalvarFuncionario(func, &tam);
    printf("%s", func->nome);
    free(func);
  }

  return 0;
}


void SalvarFuncionario(funcionario *f, int *t){

  lista = (funcionario*)realloc(lista,((*t)+1) * sizeof(funcionario));
  lista[(*t)] = *f;
  (*t) = (*t)+1;
}

void PrintList(int t)
{
  for (int i = 0; i < t)
}
