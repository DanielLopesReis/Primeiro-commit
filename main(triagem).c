#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
	FILE *arquivo;
	
	arquivo = fopen("atendimento.txt", "a");
	fclose(arquivo);
	
    
	//TIPOS DE DADOS DEFINIDOS PELO USUARIO.
	struct cadastro{
		
		char nome;
		int cpf;
		char genero;
		int idade;
		int soma;
		
	}cadastro;
	
    //DECLARAÇAO DE VARIAVEL E PONTEIRO.
	struct cadastro paciente, *ptr_paciente;
	//LEITURA DE DADOS DO USUARIO.
	ptr_paciente=&paciente;
	
	printf("\n\n============================*Cadastro do Paciente*=====================================\n\n");
		
	printf("Digite seu nome:\n");
	scanf("%s", &ptr_paciente->nome);
	
	printf("Digite seu CPF:\n");
	scanf("%d", &ptr_paciente->cpf);
	
    printf("Digite seu genero:\n");
	scanf("%s", &ptr_paciente->genero);
	
	printf("Digite sua idade:\n");
	scanf("%d", &ptr_paciente->idade);
	
   //sintomas.
    printf("\n\n=============================*Descreva os Sintomas*======================================\n\n");
	
	char resultado[3];
	paciente.soma=0;
		
	printf("\nResponda SIM ou NAO.\n");
 
    printf("\nTeve febre?\n");//(5 pontos).
    scanf("%s", &resultado);
        
		if(strcmp(resultado, "sim")){
            paciente.soma=(paciente.soma)+5;
		 }
        
    printf("\nTem dor de cabeça?\n");//(1 ponto).
    scanf("%s");
         
		if(strcmp(resultado, "sim")){
            paciente.soma=(paciente.soma)+1;
		 }
    
	printf("\nTem secreçao nasal ou espirros?\n");//(1 ponto).
    scanf("%s");
    
    	if(strcmp(resultado, "sim")){
            paciente.soma=(paciente.soma)+1;
		 }
    
    printf("\nTem dor/irritaçao na garganta?\n");//(1 ponto).
    scanf("%s");
    
        if(strcmp(resultado, "sim")){
            paciente.soma=(paciente.soma)+1;
		 }
    
    printf("\nTem tosse seca?\n");//(3 pontos).
    scanf("%s");
    
    	if(strcmp(resultado, "sim")){
            paciente.soma=(paciente.soma)+3;
		 }
    
    printf("\nTem dificuldade respiratoria?\n");///(10 pontos).
    scanf("%s");
    
    	if(strcmp(resultado, "sim")){
            paciente.soma=(paciente.soma)+10;
		 }
    
    printf("\nTem dores no corpo?\n");//(1 ponto).
    scanf("%s");
    
    	if(strcmp(resultado, "sim")){
            paciente.soma=(paciente.soma)+1;
		 }
    
    printf("\nTem diarreia?\n");//(1 ponto).
    scanf("%s");
    
    	if(strcmp(resultado, "sim")){
            paciente.soma=(paciente.soma)+1;
		 }
    
    printf("\nEsteve em contato, nos ultimos 14 dias, com um caso diagnosticado com covid-19?\n");//(10 pontos).
    scanf("%s");
    
    	if(strcmp(resultado, "sim")){
            paciente.soma=(paciente.soma)+10;
		 }
    
    printf("\nEsteve em locais de grande aglomeraçao?\n");//(3 ponto).
    scanf("%s");
 
  		if(strcmp(resultado, "sim")){
            paciente.soma=(paciente.soma)+3;
		 }
 
 
   fclose(arquivo);
   system("pause");
   return 0;
 	
}


  
