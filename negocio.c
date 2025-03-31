

int main() {
	
	char tecla;
	
	printf ("Voce esta andando pela floresta e encontrou um lobo, o que voce vai fazer? \n");
	printf ("Aperte A para fugir e B para doma-lo\n");
	
	do{
		tecla = getch();
	}while (tecla != 'A' && tecla != 'a' && tecla != 'B' && tecla != 'b' && tecla != 'e' );
	
	if (tecla == 'A' || tecla == 'a'){
		
		printf ("\nEle esta correndo atras de voce");
		
	}
		
	}else if (tecla == 'B' || tecla == 'b'){
		
	printf ("\nVoce morreu!\nnao e uma boa ideia tentar domar lobos selvagens..");
		
	}else if (tecla == 'e'){
		
	exit(0);
		
	}
	
	return 0;
}
