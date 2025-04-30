#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

int main() {
	
	char tecla;
	int fase = 0;
	float nota;
	
// Fase 1

	printf ("Voce esta andando pela floresta e encontrou um lobo, o que voce vai fazer? \n");
	printf ("Aperte A para fugir e B para doma-lo\n");
	
	do{
		tecla = getch();
	}while (tecla != 'A' && tecla != 'a' && tecla != 'B' && tecla != 'b' && tecla != 'e' );
	
	if (tecla == 'A' || tecla == 'a'){
		
		if (fase == 0){
		printf ("\nEle esta correndo atras de voce");
		fase += 1;
	}
	}else if (tecla == 'B' || tecla == 'b'){// segunda opcao
		
	printf ("\nVoce morreu!\nnao e uma boa ideia tentar domar lobos selvagens..");
	return 0;
		
	}

system("cls");

// Fase 2
if (fase == 1){

	printf ("Ele esta correndo atras de voce\n\nVoce chegou em sua casa, o que vai fazer agora? \n");
	printf ("Aperte A para trancar a porta e B para sentar no sofa\n");
	
	do{
		tecla = getch();
	}while (tecla != 'A' && tecla != 'a' && tecla != 'B' && tecla != 'b' && tecla != 'e' );
	
	if (tecla == 'A' || tecla == 'a'){
		
		printf ("\nEle esta arranhando a porta");
		
	
	}else if (tecla == 'B' || tecla == 'b'){// segunda opcao
		
	printf ("\nVoce morreu!\na ideia era qual mano?");
	return 0;
		
	}}
	
	system("cls");
	
// nota do jogo
	printf("Parabens voce venceu!\nQual nota voce daria ao jogo?");
	scanf("%f", &nota);
	
	if (nota < 6){
		
		printf("Pode ir pra casa tomar cafe com leite");
		return 0;
	}else if(nota > 6 && nota < 10){
		printf("Voce eh um amigo, amigo");
		return 0;
	}else if(nota == 10){
		printf("Muito obrigado!\nGanhou uma estrelinha");
		return 0;
	}
	
	
}
