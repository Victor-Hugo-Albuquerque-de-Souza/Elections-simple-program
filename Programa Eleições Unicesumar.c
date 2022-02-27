#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

	int menu;
	int vereador;
	int vereador_jf = 0 ;
	int vereador_mp = 0;
	int vereador_zf = 0;
	int vereador_nulo = 0;
	int prefeito;
	int prefeito_dz = 0;
	int prefeito_sg = 0;
	int prefeito_nulo = 0;
	int votos_invalidos_ver = 0;
	int votos_invalidos_pre = 0;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf ("=====> Elei��es Cidade Unicesumar <====== \n");
	printf ("1. Votar. \n");
	printf ("2. Apurar votos. \n");
	printf ("3. Sair. \n");
	printf ("=========================================\n");
	printf ("Qual a op��o desejada? \n");
	scanf ("%i", &menu);

	switch (menu) {
		
		case 1:
			system("cls");
			printf ("======== Candidatos a vereador: ======= \n");
			printf ("Candidato Jo�o do Frete = n�mero 111 \n");
			printf ("Candidata Maria da Pamonha = n�mero 222 \n");
			printf ("Candidato Z� da Farm�cia = n�mero 333 \n");
			printf ("Voto nulo = n�mero 444 \n");
			printf ("======================================== \n\n");
			printf("Digite o n�mero do seu candidato a vereador: \n");
			fflush(stdin);
			scanf ("%i", &vereador);

				switch (vereador) {
				
					case 111:
					system("cls");
					printf ("==================================================\n");
					printf ("Voc� votou no candidato a vereador Jo�o do Frete. \n");
					printf ("==================================================\n");
					vereador_jf = vereador_jf + 1;
					system ("pause");
					break;
	
					case 222:
					system("cls");
					printf ("=====================================================\n");
					printf("Voc� votou na candidata a vereadora Maria da Pamonha. \n");
					printf ("=====================================================\n");
					vereador_mp = vereador_mp + 1;
					system ("pause");
					break;
	
					case 333:
					system("cls");
					printf ("==================================================\n");
					printf ("Voc� votou no candidato a vereador Z� da Farm�cia. \n");
					printf ("==================================================\n");
					vereador_zf = vereador_zf + 1;
					system ("pause");
					break;
	
					case 444:
					system("cls");
					printf ("=================\n");
					printf ("Voc� votou nulo. \n");
					printf ("=================\n");
					vereador_nulo = vereador_nulo + 1;
					system ("pause");
					break;
	
					default:
					system("cls");
					printf ("================\n");
					printf ("N�mero inv�lido. \n");
					printf ("================\n");
					votos_invalidos_ver = votos_invalidos_ver + 1;
					system ("pause");
					break;
				}

			system("cls");
			printf ("===== Candidatos a Prefeito: ===== \n");
			printf ("Candidato Dr. Zureta = n�mero 11 \n");
			printf ("Candidato Senhor Gomes = n�mero 22 \n");
			printf ("Voto nulo = n�mero 44 \n");
			printf ("==================================\n\n");
			printf ("Digite o n�mero do seu candidato a prefeito: \n");
			fflush(stdin);
			scanf ("%i", &prefeito);

				switch (prefeito){
					
					case 11:
					system("cls");
					printf ("==============================================\n");
					printf ("Voc� votou no candidato a prefeito Dr. Zureta. \n");
					printf ("==============================================\n");
					prefeito_dz = prefeito_dz + 1;
					system ("pause");
					break;
	
					case 22:
					system("cls");
					printf ("================================================\n");
					printf ("Voc� votou no candidato a prefeito Senhor Gomes. \n");
					printf ("================================================\n");
					prefeito_sg = prefeito_sg + 1;
					system ("pause");
					break;
	
					case 44:
					system("cls");
					printf ("================\n");
					printf ("Voc� votou nulo. \n");
					printf ("================\n");
					prefeito_nulo = prefeito_nulo + 1;
					system ("pause");
					break;
	
					default:
					system("cls");
					printf ("================\n");
					printf ("N�mero inv�lido. \n");
					printf ("================\n");
					votos_invalidos_pre = votos_invalidos_pre + 1;
					system ("pause");
					return main ();
					
	    	}
			break;

		case 2:
			system("cls");
			printf ("=========================================\n");
			printf ("Apura��o parcial de votos para vereador: \n");
			printf ("=========================================\n");
			printf ("Candidato Jo�o do Frete = %i voto(s)\nCandidata Maria da Pamonha =  %i voto(s) \nCandidato Z� da Farm�cia = %i voto(s) \nVotos nulos = %i voto(s) \nVotos inv�lidos = %i voto(s)\n\n", vereador_jf, vereador_mp, vereador_zf, vereador_nulo, votos_invalidos_ver);
			printf ("=========================================\n");
			printf ("Apura��o parcial de votos para prefeito: \n");
			printf ("=========================================\n");
			printf ("Candidato Dr. Zureta = %i voto(s) \nCandidato Senhor Gomes = %i voto(s)\nVotos nulos = %i voto(s)\nVotos inv�lidos = %i voto(s) \n\n", prefeito_dz, prefeito_sg, prefeito_nulo, votos_invalidos_pre);
			printf ("=========================================\n");
			system ("pause");
			return main();
			break;

		case 3:
			printf ("Finalizando programa... \n");
			system ("pause");		
			exit(0);

		default:
			printf ("Digite uma op��o v�lida. \n");
			system ("pause");
			return main ();
			break;
	}

	return main ();
	return 0;
}

