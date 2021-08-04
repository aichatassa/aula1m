#include <stdio.h>
#include <stdlib.h>
#define OP_SAIR 'X' 

typedef struct elemento
{
  char nome[100];
  int vale;
  int planoSaude;
  float salario;
  float gratificacao;
  int dependentes;
} funcionario;


void main()
{
  char op = '0';
  printf("Bem vindo ao sistema\n");

  while(op != OP_SAIR)
  {

    scanf("%c", &op);
    switch (op)
    {
    case 'A':
      versalario();
      break;
    case
    
    default:
      printf("ERRO : Voce escreveu errado usuario burro\n");
      break;
    }
  
}

void menu(){
  const 
  printf("Cadastrar funcionario\n");
  printf("Imprimir funcionarios\n");
  printf("Calcular VT\n");
  printf("Calcular plano de saúde\n");
  printf("Calcular o FGTS\n");
  printf("Calcular o INSS\n");
  printf("Calcular o salario familia\n");
  printf("Calcular o IR\n");
  printf("Calcular o Salario liquido");
  printf("X - Sair");

}