#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
struct produto{
			  char nome[10];
			  int quantidade;
			  float preco_unitario;
		}p1[5];

		void proc_menu(){
		   printf("------------------------- PROGRAMA CONTROLE E ESTOQUE -------------------------\n\n\n");
		   printf("  MENU:\n");
		   printf("\n  OPCAO 1 - CADASTRAR PRODUTOS");
		   printf("\n  OPCAO 2 - ALTERAR PRODUTOS");
		   printf("\n  OPCAO 3 - RELATORIO DE PRODUTOS");
		   printf("\n  OPCAO 4 - FAZER BACKUP");
		   printf("\n  OPCAO 0 - SAIR");
		   printf("\n\n  DIGITE SUA OPCAO:  ");
	   }

	   void proc_menu_cad_prod(){
		   printf("\n  OPCAO 0 - VOLTAR AO MENU INICIAL");
		   printf("\n  OPCAO 1 - CADASTRAR PRODUTOS");
		   printf("\n\n  OPCAO:  ");
	   }

	   void proc_menu_alt_prod(){
		   printf("\n  --ALTERAR PRODUTOS!--\n\n\n");
		   printf("\n  OPCAO 0 - VOLTAR AO MENU INICIAL");
		   printf("\n  OPCAO 1 - SAIR DO PROGRAMA");
		   printf("\n\n  OPCAO:  ");
	   }

	   int main(){
		   int i,j;
		   int menu;
		   int menu_cad_prod;
		   int menu_alt_prod;

		   while(true){
		   system("cls");
		   proc_menu();
		   scanf("%d",&menu);

		   if(menu==0){
			  break;
		   }
		   if (menu==1){
			  while(true){
				 system("cls");
				 proc_menu_cad_prod();
				 scanf("%d",&menu_cad_prod);
				 if(menu_cad_prod ==0){
					break;
				 }
				 if(menu_cad_prod ==1){
				 for(i=0;i<3;i++){
					system("cls");
					printf("\n  --CADASTRO DE PRODUTOS!--\n\n\n");
					printf("\n  PRODUTO :  ",i+1);
					scanf("%s",&p1[i].nome);
					printf("\n  QUANTIDADE DISPONIVEL DO PRODUTO :  ",i+1);
					scanf("%d",&p1[i].quantidade);
					printf("\n  PRECO UNITARIO : ",i+1);
					scanf("%f",&p1[i].preco_unitario);
				 }
		   }
	   }
	  getch();
	  }
   }
}