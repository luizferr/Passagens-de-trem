#include <stdio.h>
#include "BibliotecaViana.c"
 
void menuPrincipal(){
	int i, j;
 
		gotoxy(1,1); printf("%c", 218);
		gotoxy(2,1); printf("%c", 179);
		gotoxy(3,1); printf("%c", 195);
 
		for(j=2;j<70; j++){
				gotoxy(1,j);printf("%c", 196);
				gotoxy(3,j);printf("%c", 196);
		}	
 
		gotoxy(1,70); printf("%c", 191);
		gotoxy(2,70); printf("%c", 179);
		gotoxy(3,70); printf("%c", 180);
 
 
		gotoxy(3,34); printf("%c", 194);
 
 
		gotoxy(2,33);printf("MENU");
 
 
 
 
		printf("\n\n");
 
 
		gotoxy(4,1); printf("%c", 195);
		gotoxy(5,1); printf("%c", 179);
		gotoxy(6,1); printf("%c", 195);
 
		for(j=2;j<70; j++){
				gotoxy(4,j);printf("%c", 196);
				gotoxy(6,j);printf("%c", 196);
		}	
			gotoxy(4,15);printf("C%cDIGO",224);
		gotoxy(4,51);;printf("OPC%cO",199,224);
		gotoxy(4,70); printf("%c", 180);
		gotoxy(5,70); printf("%c", 179);
		gotoxy(6,70); printf("%c", 180);
 
		gotoxy(4,34);printf("%c",197);
		gotoxy(5,34);printf("%c",179);
		gotoxy(6,34);printf("%c",197);
 
 
		gotoxy(5,17);printf("1");
 
		gotoxy(5,50);printf("Comprar", 186);
 
 
		gotoxy(7,1); printf("%c", 195);
		gotoxy(8,1); printf("%c", 179);
		gotoxy(9,1); printf("%c", 195);
 
		for(j=2;j<70; j++){
				gotoxy(7,j);printf("%c", 196);
				gotoxy(9,j);printf("%c", 196);
		}	
 
		gotoxy(7,70); printf("%c", 180);
		gotoxy(8,70); printf("%c", 179);
		gotoxy(9,70); printf("%c", 217);
 
		gotoxy(7,34);printf("%c",197);
		gotoxy(8,34);printf("%c",179);
		gotoxy(9,34);printf("%c",193);
 
 
		gotoxy(8,17);printf("2");
 
		gotoxy(8,48);printf("Visualizar", 186);
 
		gotoxy(13,1); printf("%c", 218);
		gotoxy(14,1); printf("%c", 179);
		gotoxy(15,1); printf("%c", 192);
 
		for(j=2;j<23; j++){
				gotoxy(13,j);printf("%c", 196);
				gotoxy(15,j);printf("%c", 196);
		}	
		gotoxy(13,23); printf("%c", 191);
		gotoxy(14,23); printf("%c", 179);
		gotoxy(15,23); printf("%c", 217);
 
		gotoxy(13,19);printf("%c",194);
		gotoxy(14,19);printf("%c",179);
		gotoxy(15,19);printf("%c",193);
 
		gotoxy(14,2);printf("Digite o C%cDIGO: ", 224);
 
		gotoxy(13,1); printf("%c", 218);
		gotoxy(14,1); printf("%c", 179);
		gotoxy(15,1); printf("%c", 192);
 
 
 
		for(j=2;j<70; j++){
				gotoxy(9,j);printf("%c", 196);
				gotoxy(11,j);printf("%c", 196);
		}	
 
		gotoxy(9,34);printf("%c",197);
		gotoxy(10,34);printf("%c",179);
		gotoxy(11,34);printf("%c",193);
 
		gotoxy(9,70); printf("%c", 180);
		gotoxy(10,70); printf("%c", 179);
		gotoxy(11,70); printf("%c", 217);
		gotoxy(10,1); printf("%c", 179);
 
		gotoxy(11,1); printf("%c", 192);
 
		gotoxy(10,17);printf("3");
 
		gotoxy(10,51);printf("SAIR");
 
 
 
 
}
 
void menuCompras(){
	int i,j;
	gotoxy(1,1); printf("%c", 218);
		gotoxy(2,1); printf("%c", 179);
		gotoxy(3,1); printf("%c", 195);
 
		for(j=2;j<70; j++){
				gotoxy(1,j);printf("%c", 196);
				gotoxy(3,j);printf("%c", 196);
		}	
 
		gotoxy(1,70); printf("%c", 191);
		gotoxy(2,70); printf("%c", 179);
		gotoxy(3,70); printf("%c", 180);
 
 
		gotoxy(3,34); printf("%c", 194);
 
 
		gotoxy(2,17);printf("Escolha um tipo de passagem para comprar");
 
 
 
 
		printf("\n\n");
 
 
		gotoxy(4,1); printf("%c", 195);
		gotoxy(5,1); printf("%c", 179);
		gotoxy(6,1); printf("%c", 195);
 
		for(j=2;j<70; j++){
				gotoxy(4,j);printf("%c", 196);
				gotoxy(6,j);printf("%c", 196);
		}	
			gotoxy(4,15);printf("C%cDIGO",224);
		gotoxy(4,51);;printf("OPC%cO",199,224);
		gotoxy(4,70); printf("%c", 180);
		gotoxy(5,70); printf("%c", 179);
		gotoxy(6,70); printf("%c", 180);
 
		gotoxy(4,34);printf("%c",197);
		gotoxy(5,34);printf("%c",179);
		gotoxy(6,34);printf("%c",197);
 
 
		gotoxy(5,17);printf("1");
 
		gotoxy(5,43);printf("Passagem Executivo", 186);
 
 
		gotoxy(7,1); printf("%c", 195);
		gotoxy(8,1); printf("%c", 179);
		gotoxy(9,1); printf("%c", 192);
 
		for(j=2;j<70; j++){
				gotoxy(7,j);printf("%c", 196);
				gotoxy(9,j);printf("%c", 196);
		}	
 
		gotoxy(7,70); printf("%c", 180);
		gotoxy(8,70); printf("%c", 179);
		gotoxy(9,70); printf("%c", 217);
 
		gotoxy(7,34);printf("%c",197);
		gotoxy(8,34);printf("%c",179);
		gotoxy(9,34);printf("%c",193);
 
 
		gotoxy(8,17);printf("2");
 
		gotoxy(8,43);printf("Passagem Economica", 186);
 
		gotoxy(10,1); printf("%c", 218);
		gotoxy(11,1); printf("%c", 179);
		gotoxy(12,1); printf("%c", 192);
 
		for(j=2;j<23; j++){
				gotoxy(10,j);printf("%c", 196);
				gotoxy(12,j);printf("%c", 196);
		}	
		gotoxy(10,23); printf("%c", 191);
		gotoxy(11,23); printf("%c", 179);
		gotoxy(12,23); printf("%c", 217);
 
		gotoxy(10,19);printf("%c",194);
		gotoxy(11,19);printf("%c",179);
		gotoxy(12,19);printf("%c",193);
 
		gotoxy(11,2);printf("Digite o C%cDIGO: ", 224);
 
}
 
void menuVisualizar(){
	int j, i,q=0;
	gotoxy(1,1); printf("%c", 218);
	gotoxy(2,1); printf("%c", 179);
	gotoxy(3,1); printf("%c", 195);
 
	for(j=2;j<50; j++){
			gotoxy(1,j);printf("%c", 196);
			gotoxy(3,j);printf("%c", 196);
			gotoxy(4,j);printf("%c", 196);
			gotoxy(15,j);printf("%c", 196);
 
 
 
	}	
 
	gotoxy(1,50); printf("%c", 191);
	gotoxy(2,50); printf("%c", 179);
	gotoxy(3,50); printf("%c", 180);
 
 	gotoxy(2,18);printf("Visualizar Vagas");
	gotoxy(4,1); printf("%c", 195);
 
	gotoxy(7,1); printf("%c", 195);
	for(i=5; i<15;i++){
			gotoxy(i,1); printf("%c", 179);
			gotoxy(i,50); printf("%c", 179);
	}
 
	gotoxy(4,21);printf("Informacoes");	
 
	gotoxy(4,50); printf("%c", 180);
 
	gotoxy(15,1);printf("%c", 192);
	gotoxy(15,50);printf("%c", 217);
 
 
}
 
int main(){
	int opcao, opcao1,assentos, i=0, valor=0, j=0;
	int vagaoExecutivo[5]={45,45,45,45,45}, vagaoEconomico[5]={45,45,45,45,45};
	char nome[300][300];
	do{
		menuPrincipal();
 
		gotoxy(14,21);scanf("%i", &opcao);
		switch (opcao){
			case 1: 
				system("cls");
				menuCompras(); 
				gotoxy(11,21);printf("  "); 
				gotoxy(11,21);scanf("%i", &opcao1);
				gotoxy(15,1);
 
				if(opcao1==1){
					fflush(stdin);
					printf("Qual seu nome?");
					scanf("%[^\n]s", &nome);
 
					printf("Quantas passagens  voce quer reservar?");
					scanf("%i", &assentos);
 
 
					if(i==5){
						printf("So tem %i vagas disponiveis", vagaoExecutivo[4]);	
 
					}else{}
 
	//				printf("%i", i);  -> SE NÃO FUNCIONAR USA O PRIINTF PQ FUNCIONA COM ELE CODIGO BIPOLAR 
 
					if(assentos<226){
				 	vagaoExecutivo[i]-=assentos;
					}else{
						printf("LIMITE DE 225 VAGAS");
						system("pause");
						break;
					}
 
 
 
					while(vagaoExecutivo[i]<=0 && i<4){
						vagaoExecutivo[i+1]+=vagaoExecutivo[i];
						vagaoExecutivo[i]=0;
						i+=1;
					}
 
 
	//				printf("%i", i); -> SE NÃO FUNCIONAR USA O PRIINTF PQ FUNCIONA COM ELE CODIGO BIPOLAR 
 
 
					system("pause");
 
				}else 
				if(opcao1==2){
					fflush(stdin);
					printf("Qual seu nome?");
					scanf("%[^\n]s", &nome);
 
					printf("Quantas passagens  voce quer reservar?");
					scanf("%i", &assentos);
 
 
					if(j==5){
						printf("So tem %i vagas disponiveis", vagaoEconomico[4]);	
 
					}else{}
 
					if(assentos<226){
					 	vagaoEconomico[j]-=assentos;
					}else{
						printf("LIMITE DE 225 VAGAS");
						system("pause");
						break;
					}
 
					while(vagaoEconomico[j]<=0 && j<4){
							vagaoEconomico[j+1]+=vagaoEconomico[j];
							vagaoEconomico[j]=0;
							j+=1;
					}
				}
 
				break;
 
 
 
			case 2: 
			system("cls"); 
			menuVisualizar(); 
 
			for(i=0; i<5;i++){
				gotoxy(i+10,2);printf("%i- Vagao Economico- %i/45", i+6,vagaoEconomico[i]);
				gotoxy(i+5,2);printf("%i- Vagao Executivo- %i/45\n",i+1,vagaoExecutivo[i]);
 
			}
 
 
			gotoxy(30,1);	system("pause"); break;
 
 
 
			default: break;
 
		}
		system("cls");
	}while (opcao !=3);
 
	printf("VOCE SAIU DO PROGRAMA :(");
 
	printf("\n\n");
}
