#include<stdio.h>
#include<stdlib.h>
#include"BibliotecaViana.c"


int vagao1=45, vagao2=45, vagao3=45, vagao4=45, vagao5=45, vagao6=45, vagao7=45, vagao8=45, vagao9=45, vagao10=45;
char nome;
int i, vagas, menu1, qtd=0, qtdExec=0, totalnovo1=0, totalnovo2=0, totalnovo3=0, totalnovo4=0, totalnovo5=0;
int totalnovoExec6=0, totalnovoExec7=0, totalnovoExec8=0, totalnovoExec9=0, totalnovoExec10=0;

void layoutMenu();
void layoutLugares();
void layoutResultado();
void layoutDisponiveis();
int main(){
	
	do{
	system("cls");
	inicio:
	layoutMenu();
	gotoxy(2,10);
	printf("Viagens de Trem - TREM BOM!");
	gotoxy(4,4);
	printf("1 - Comprar Passagem Economica");
	gotoxy(6,4);
	printf("2 - Comprar Passagem Executiva");
	gotoxy(8,4);
	printf("3 - Ver passagens disponiveis");
	gotoxy(10,4);
	printf("4 - Sair");
	gotoxy(10,20);
	scanf("%i", &menu1);
	system("cls");
	
	
	switch(menu1){
		case 1: 
			layoutLugares();
			gotoxy(2,2);
			printf("Digite seu nome: ");
			scanf("%s", &nome);
			gotoxy(4,2);
			printf("Digite quantas passagens voce deseja comprar: ");
			scanf("%i", &qtd);
			
			
			if(qtd<=vagao1){
				totalnovo1 = vagao1 - qtd;
				vagao1 = totalnovo1;
				layoutResultado();
				gotoxy(9,2);
				printf("Passagem comprada com sucesso");
				gotoxy(11,2);
				printf("%i Passagens restantes no vagao 1", totalnovo1);
				getch();
				break;
				
			}
			else if(qtd<=vagao2){
				totalnovo2 = vagao2 - qtd;
				vagao2 = totalnovo2;
				layoutResultado();
				gotoxy(9,2);
				printf("Passagem comprada com sucesso");
				gotoxy(11,2);
				printf("%i Passagens restantes no vagao 2", totalnovo2);
				getch();
				break;
			}
			else if(qtd<=vagao3){
				totalnovo3 = vagao3 - qtd;
				vagao3 = totalnovo3;
				layoutResultado();
				gotoxy(9,2);
				printf("Passagem comprada com sucesso");
				gotoxy(11,2);
				printf("%i Passagens restantes no vagao 3", totalnovo3);
				getch();
				break;
			}
			else if(qtd<=vagao4){
				totalnovo4 = vagao4 - qtd;
				vagao4 = totalnovo4;
				layoutResultado();
				gotoxy(9,2);
				printf("Passagem comprada com sucesso");
				gotoxy(11,2);
				printf("%i Passagens restantes no vagao 4", totalnovo4);
				getch();
				break;
			}
			else if(qtd<=vagao5){
				totalnovo5 = vagao5 - qtd;
				vagao5 = totalnovo5;
				 layoutResultado();
				gotoxy(9,2);
				printf("Passagem comprada com sucesso");
				gotoxy(11,2);
				printf("%i Passagens restantes no vagao 5", totalnovo5);
				getch();
				break;
			}
			system("cls");
			

		case 2: 
			layoutLugares();
			gotoxy(2,2);
			printf("Digite seu nome: ");
			scanf("%s", &nome);
			gotoxy(4,2);
			printf("Digite quantas passagens voce deseja comprar: ");
			scanf("%i", &qtdExec);
			
			if (qtdExec<=vagao6){
					
					totalnovoExec6 = vagao6 - qtdExec;
					vagao6 = totalnovoExec6;
					layoutResultado();
					gotoxy(9,2);
					printf("Passagem comprada com sucesso");
					gotoxy(11,2);
					printf("%i Passagens restantes no vagao 6", totalnovoExec6);
					getch();
					break;
				}
				else if (qtdExec<=vagao7){
					totalnovoExec7 = vagao7 - qtdExec;
					vagao7 = totalnovoExec7;
					layoutResultado();
					gotoxy(9,2);
					printf("Passagem comprada com sucesso");
					gotoxy(11,2);
					printf("%i Passagens restantes no vagao 7", totalnovoExec7);
					getch();
					break;
				}
				else if (qtdExec<=vagao8){
					totalnovoExec8 = vagao8 - qtdExec;
					vagao8 = totalnovoExec8;
					layoutResultado();
					gotoxy(9,2);
					printf("Passagem comprada com sucesso");
					gotoxy(11,2);
					printf("%i Passagens restantes no vagao 8", totalnovoExec8);
					getch();
					break;
				}
				else if (qtdExec<=vagao9){
					totalnovoExec9 = vagao9 - qtdExec;
					vagao9 = totalnovoExec9;
					layoutResultado();
					gotoxy(9,2);
					printf("\nPassagem comprada com sucesso");
					gotoxy(11,2);
					printf("%i Passagens restantes no vagao 9", totalnovoExec9);
					getch();
					break;
				}
				else if (qtdExec<=vagao10){
					totalnovoExec10 = vagao10 - qtdExec;
					vagao10 = totalnovoExec10;
					layoutResultado();
					gotoxy(9,2);
					printf("Passagem comprada com sucesso");
					gotoxy(11,2);
					printf("%i Passagens restantes no vagao 10", totalnovoExec10);	
					getch();
					break;
				}
				system("cls");
		case 3: 
			layoutDisponiveis();
			gotoxy(2,2);
			printf("Vagas Economicas Vagao 1 = %i Vagas. Vagao 2 = %i Vagas. Vagao 3 = %i Vagas. Vagao 4 = %i Vagas. Vagao 5 = %i Vagas.", vagao1, vagao2, vagao3, vagao4, vagao5);
			gotoxy(4,2);
			printf("Vagas Executivas Vagao 6 = %i Vagas. Vagao 7 = %i Vagas. Vagao 8 = %i Vagas. Vagao 9 = %i Vagas. Vagao 10 = %i Vagas. ", vagao6, vagao7, vagao8, vagao9, vagao10);	
			gotoxy(5,2);
			getch();
			system("cls");
			
		}
		
	}while(menu1!=4);
	
	printf("\n\nObrigado por usar nossos servicos!");
	}
void layoutMenu(){
	int i;
    gotoxy(1,1); printf("%c",218); // canto superior esquerdo
    for(i = 1; i <=45; i++)
    {
       gotoxy(0,i); printf("%c",196); //linha de horizontal de cima
    }
    gotoxy(1,46); printf("%c",191); //canto superior direito
    for(i = 2; i <=45; i++)
    {
       gotoxy(3,i); printf("%c",196); //linha de horizontal  do meio 1
    }
    for(i=2;i<11;i++){
    gotoxy(i,1); printf("%c", 179); //linha vertical da esquerda
    }
    for(i=2;i<11;i++){
    gotoxy(i,46); printf("%c",179); //linha vertical da direita
    }
    gotoxy(11,1); printf("%c",192); //canto inferior esquerdo
    gotoxy(11,46); printf("%c",217); //canto inferior direito
    for(i = 2; i <=45; i++)
    {
       gotoxy(11,i); printf("%c",196); //linha de horizontal de baixo
    }

}
void layoutLugares(){
	int i;
    gotoxy(1,1); printf("%c",218); // canto superior esquerdo
    for(i = 1; i <=70; i++)
    {
       gotoxy(0,i); printf("%c",196); //linha de horizontal de cima
    }
    gotoxy(1,71); printf("%c",191); //canto superior direito
    
    for(i=2;i<6;i++){
    gotoxy(i,1); printf("%c", 179); //linha vertical da esquerda
    }
    for(i=2;i<6;i++){
    gotoxy(i,71); printf("%c",179); //linha vertical da direita
    }
    gotoxy(6,1); printf("%c",192); //canto inferior esquerdo
    gotoxy(6,71); printf("%c",217); //canto inferior direito
    for(i = 2; i <=70; i++)
    {
       gotoxy(6,i); printf("%c",196); //linha de horizontal de baixo
    }
}
void layoutResultado(){
int i;
	
    gotoxy(8,1); printf("%c",218); // canto superior esquerdo
    for(i = 2; i <=70; i++)
    {
       gotoxy(8,i); printf("%c",196); //linha de horizontal de cima
    }
    gotoxy(8,71); printf("%c",191); //canto superior direito
    
    for(i=9;i<12;i++){
    gotoxy(i,1); printf("%c", 179); //linha vertical da esquerda
    }
    for(i=9;i<12;i++){
    gotoxy(i,71); printf("%c",179); //linha vertical da direita
    }
    gotoxy(12,1); printf("%c",192); //canto inferior esquerdo
    gotoxy(12,71); printf("%c",217); //canto inferior direito
    for(i = 2; i <=70; i++)
    {
       gotoxy(12,i); printf("%c",196); //linha de horizontal de baixo
    }
}
void layoutDisponiveis(){
	int i;
	
    gotoxy(1,1); printf("%c",218); // canto superior esquerdo
    for(i = 2; i <=120; i++)
    {
       gotoxy(1,i); printf("%c",196); //linha de horizontal de cima
    }
    gotoxy(1,120); printf("%c",191); //canto superior direito
    
    for(i=2;i<8;i++){
    gotoxy(i,1); printf("%c", 179); //linha vertical da esquerda
    }
    for(i=2;i<7;i++){
    gotoxy(i,120); printf("%c",179); //linha vertical da direita
    }
    gotoxy(7,1); printf("%c",192); //canto inferior esquerdo
    gotoxy(7,120); printf("%c",217); //canto inferior direito
    for(i = 2; i <=119; i++)
    {
       gotoxy(7,i); printf("%c",196); //linha de horizontal de baixo
    }
}

