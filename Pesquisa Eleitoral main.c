#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int candidato11=0, candidato22=0, candidato111=0, candidato222=0, candidato333=0, nulo44=0, nulo444=0;
 
int main() 
{ 
    menu_principal();
        
    return 0;
}


void menu_principal(){
		
		int op=0;
	
	 	system("cls");
        printf("Menu Principal\n");      
        printf("-------------------------\n");
        printf("Escolha:\n");
        printf("-------------------------\n");
        printf("1 - Votar\n");
        printf("2 - Apuracao de Votos\n");
        printf("3 - Sair\n");
        printf("-------------------------\n");
        printf("Digite a sua escolha: \n");
        scanf("%d",&op); 
		
		if(op==1){
			votacao_prefeito();
			votacao_vereador();
		}else if(op==2){
				apuracao();
			}else if(op==3){
				exit(0);
				}else{
					printf("Escolha uma opcao valida.");		
				} 
		menu_principal(); 	
}

void votacao_prefeito(){
	
	
		int op = 0, confirma = 0;
		
		system("cls");
        printf("Pesquisa Eleitoral\n");      
        printf("-------------------------\n");
        printf("Prefeito.\n");
        printf("-------------------------\n");
        printf("11 - Dr. Zureta\n");
        printf("22 - Sr. Gomes\n");
        printf("44 - nulo\n");
        printf("-------------------------\n");
        printf("Digite o codigo do candidato: \n");
        scanf("%d",&op);
        
        if (op == 11)
        {       
           system("cls");
           printf("Pesquisa Eleitoral\n");
           printf("---------------------------------------------\n");
           printf(" |  11  - Dr. Zureta   |   \n");
           printf("---------------------------------------------\n");
           printf("|(1)Confirma | (2)Corrige |\n");
           printf("Digite a opcao: \n");
           scanf("%d", &confirma);
           
           if (confirma == 1) 
           {
              candidato11++;
              printf("\a\a\a"); //Som de Confirmação.
           }else if(confirma == 2){
           		votacao_prefeito();	
		   }else{
		   		printf("Digite uma opcao valida.");
		   }
		}
		
		else if (op == 22)
        {       
           system("cls");
           printf("Pesquisa Eleitoral\n");
           printf("---------------------------------------------\n");
           printf(" |  22  - Sr Gomes   |   \n");
           printf("---------------------------------------------\n");
           printf("|(1)Confirma | (2)Corrige |\n");
           printf("Digite a opcao: \n");
           scanf("%d", &confirma);
           
           if (confirma == 1) 
           {
              candidato22++;
              printf("\a\a\a"); //Som de Confirmação.
           }else if(confirma == 2){
           		votacao_prefeito();	
		   }else{
		   		printf("Digite uma opcao valida.");
		   }
		}
		
		else if (op == 44)
        {       
           system("cls");
           printf("Pesquisa Eleitoral\n");
           printf("---------------------------------------------\n");
           printf(" |  44  - Nulo   |   \n");
           printf("---------------------------------------------\n");
           printf("|(1)Confirma | (2)Corrige |\n");
           printf("Digite a opcao: \n");
           scanf("%d", &confirma);
           
           if (confirma == 1) 
           {
              nulo44++;
              printf("\a\a\a"); //Som de Confirmação.
           }else if(confirma == 2){
           		votacao_prefeito();	
		   }else{
		   		printf("Digite uma opcao valida.");
		   }
		}
}

void votacao_vereador(){
	
		int op = 0, confirma = 0;
	
		system("cls");
        printf("Pesquisa Eleitoral.\n");      
        printf("-------------------------\n");
        printf("Vereador.\n");
        printf("-------------------------\n");
        printf("111 - Joao do Frete\n");
        printf("222 - Maria da Pamonha\n");
        printf("333 - Ze da Farmacia\n");
        printf("444 - nulo\n");
        printf("-------------------------\n");
        printf("Digite o codigo do candidato: \n");
        scanf("%d",&op);    
        
        if (op == 111)
        {       
           system("cls");
           printf("Pesquisa Eleitoral\n");
           printf("---------------------------------------------\n");
           printf(" |  111  - João do Frete  |   \n");
           printf("---------------------------------------------\n");
           printf("|(1)Confirma | (2)Corrige |\n");
           printf("Digite a opcao: \n");
           scanf("%d", &confirma);
           
           if (confirma == 1) 
           {
              candidato111++;
              printf("\a\a\a"); //Som de Confirmação.
           }else if(confirma == 2){
           		votacao_vereador();	
		   }else{
		   		printf("Digite uma opcao valida.");
		   }
		}
		
		else if (op == 222)
        {       
           system("cls");
           printf("Pesquisa Eleitoral\n");
           printf("---------------------------------------------\n");
           printf(" |  222  - Maria da Pamonha  |   \n");
           printf("---------------------------------------------\n");
           printf("|(1)Confirma | (2)Corrige |\n");
           printf("Digite a opcao: \n");
           scanf("%d", &confirma);
           
           if (confirma == 1) 
           {
              candidato222++;
              printf("\a\a\a"); //Som de Confirmação.
           }else if(confirma == 2){
           		votacao_vereador();	
		   }else{
		   		printf("Digite uma opcao valida.");
		   }
		}
		
		if (op == 333)
        {       
           system("cls");
           printf("Pesquisa Eleitoral\n");
           printf("---------------------------------------------\n");
           printf(" |  333  - Ze da Farmacia  |   \n");
           printf("---------------------------------------------\n");
           printf("|(1)Confirma | (2)Corrige |\n");
           printf("Digite a opcao: \n");
           scanf("%d", &confirma);
           
           if (confirma == 1) 
           {
              candidato333++;
              printf("\a\a\a"); //Som de Confirmação.
           }else if(confirma == 2){
           		votacao_vereador();	
		   }else{
		   		printf("Digite uma opcao valida.");
		   }
		}
		
		if (op == 444)
        {       
           system("cls");
           printf("Pesquisa Eleitoral\n");
           printf("---------------------------------------------\n");
           printf(" |  444  - Nulo  |   \n");
           printf("---------------------------------------------\n");
           printf("|(1)Confirma | (2)Corrige |\n");
           printf("Digite a opcao: \n");
           scanf("%d", &confirma);
           
           if (confirma == 1) 
           {
              nulo444++;
              printf("\a\a\a"); //Som de Confirmação.
           }else if(confirma == 2){
           		votacao_vereador();	
		   }else{
		   		printf("Digite uma opcao valida.");
		   }
		}
}

void apuracao(){
		system("cls");
	  	printf("Apuracao dos votos\n");
    	printf("11 - Prefeito Dr. Zureta: %d\n", candidato11);
    	printf("22 - Prefeito Sr. Gomges: %d\n", candidato22);
    	printf("111 - Vereador Joao do Frete: %d\n", candidato111);
   		printf("222 - Vereador Maria da Pamonha: %d\n", candidato222);
   		printf("333 - Vereador Ze da Farmacia: %d\n", candidato333);
    	printf("Nulo Prefeito: %d\n", nulo44);
    	printf("Nulo Vereador: %d\n", nulo444);
    	system("pause");
}
