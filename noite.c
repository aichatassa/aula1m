#include <stdio.h>
#include <stdlib.h>

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

  while(op != 'X')
  {
    scanf("%c", &op);
    switch (op)
    {
    case 'A':
    //Alguma coisa
      break;
    
    default:
      printf("ERRO : Voce escreveu errado usuario burro\n");
      break;
    }
    if (op == 'A')
    else if (op == 'B')
    else if ()
  }
}