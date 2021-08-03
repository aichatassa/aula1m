#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct 
{
    char nome[100];
    int vale;
    int planoSaude;
    float salario;
    int dependentes;
} funcionario;

funcionario *lista;

void main()
{
	char nome[100];
	int qntFuncionario, i=0;
	
    funcionario func;
    func = (funcionario) malloc (sizeof (funcionario));
    
    printf("\n\tOlá, seja bem-vindo a folha de pagamento!\n");
    printf("\nQuantos funcionarios?");
    scanf("%d", &qntFuncionario);
    
	for(i; i<qntFuncionario; i++){
		
		printf("\n\tEntre com seu nome: ");
	    scanf("%c", nome);
	    
	    printf("\nPossui vale transporte? \n(1-Sim | 0-Nao)");
	    scanf("%d", &func.vale);
	    
	    printf("\nPossui plano de saude? \n(1-Sim | 0-Nao)");
	    scanf("%d", &func.planoSaude);
	    
	    printf("\nEntre com o seu salario: ");
	    scanf("%f", &func.salario);
	    
	    printf("\nQuantos dependentes? \n");
	    scanf("%d", &func.dependentes);
	}
	
	
}

void SalvarFuncionario(){
	
}
