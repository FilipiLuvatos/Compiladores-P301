/*

Nome: Jean Louren√ßo     RA: 22.216.015-2
Nome: Filipi de Luca    RA: 22.216.027-7

*/

#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include "PILHA.hpp"

char tempC [200];
int p = 0;
Pilha<int> f;

void EA();
void EB();
void EC();
void ED();


void EA(){

	if(tempC[p]>='0' && tempC[p]<='9'){

		p++;
		EB();


		}

	else if(tempC[p] == '(' ){
				p++;
				EC();
  }
}


void EB(){
			if(tempC[p] == '+' || tempC[p] == '-' || tempC[p] == '*' || tempC[p] == '/' ){

					p++;
					EA();

			}else if(tempC[p] == ')' ){
				p++;
				ED();
		}
}

void EC(){

        f.empilha("D");
        p++;
        EA();
	}

void ED(){
	
   f.desempilha(&x);//Olhar
   p++;
   EB();
}




int main (){

printf("\n\nDigite a expressao: \n");
scanf("%[^\n]c", tempC); //Pega inclusive espaÁo.

EA();
getch();
	}
