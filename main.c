#include <stdio.h>
#include <stdlib.h>

void main() {
	system("clear");
	float nota1, nota2, nota3, nota4, media;

	int value_media = 0;
	printf("=========== Valor da média ===========\n");
	printf("\n> Digite o valor da media escolar: \n");
	scanf("%i", &value_media);
	printf("======================================\n\n\n");

	printf(
		"[*] Digite a nota da primeira unidade: \n"
		);
	scanf("%f", &nota1);

	printf(
		"[*] Digite anota da segunda unidade: \n"
		);
	scanf("%f", &nota2);

	printf(
		"[*] Digite a nota da terceira unidade: \n"
		);
	scanf("%f", &nota3);

	printf(
		"[*] Digite a nota da quarta unidade: \n"
		);
	scanf("%f", &nota4);

	media = (nota1 + nota2 + nota3 + nota4) / 4;

	system("clear");
	printf(
		"\n[#] Sua média final: %.1f pontos\n", media
		);

	if (media>=value_media){
		printf(
			"\n[+] Você está aprovado!!!"
			);
	}

	else{
		printf(
			"\n[-] Voce está reprovado!!!"
			);
	}

}