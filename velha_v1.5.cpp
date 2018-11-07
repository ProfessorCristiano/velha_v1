#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include<time.h>
// linha m�xima 35
// coluna m�xima 80

using namespace std;
string J="Jogador 1";
char j='X';
char qp[3][3];
char Vencedor = 'Z';
char jogo ='F';
void inicio();
void imprime();
void entrada();
void verifica();
void alterna();
int computador1();
void fimdejogo();

void imprime()
{
	setlocale(LC_ALL,"");
	system("CLS");
	cout<<"================================================================================\n";
	cout<<"=============================     JOGO da Velha     ============================\n";
	cout<<"================================================================================\n";
	cout<<"\n";
	cout<<"================================================================================\n";
	cout<<"== "<< J <<" com " << j <<"                                                            ==\n";
	cout<<"================================================================================\n";
	cout<<"== Digite o N�mero de acordo com a posi��o do teclado num�rico                ==\n";
	cout<<"== e precione ENTER                                                           ==\n";  
	cout<<"================================================================================\n";
	cout<<"================================================================================\n";
	cout<<"==                                                                            ==\n";
	cout<<"==                                                                            ==\n";
	cout<<"==                                   |     |                                  ==\n";
	cout<<"==                                "<<qp[0][0]<<"  |  "<<qp[0][1]<<"  |  "<<qp[0][2]<<"                               ==\n";
	cout<<"==                              _____|_____|_____                             ==\n";
	cout<<"==                                   |     |                                  ==\n";
	cout<<"==                                "<<qp[1][0]<<"  |  "<<qp[1][1]<<"  |  "<<qp[1][2]<<"                               ==\n";
	cout<<"==                              _____|_____|_____                             ==\n";
	cout<<"==                                   |     |                                  ==\n";
	cout<<"==                                "<<qp[2][0]<<"  |  "<<qp[2][1]<<"  |  "<<qp[2][2]<<"                               ==\n";
	cout<<"==                                   |     |                                  ==\n";
	cout<<"==                                                                            ==\n";
	cout<<"==                                                                            ==\n";
	cout<<"==                                                                            ==\n";
	cout<<"================================================================================\n";
	cout<<"== Este Jogo foi oferecido pelo Professor Cristiano Teixeira  ==================\n";
	cout<<"== Sob a Licen�a Apache License 2.0 ============================================\n";
	cout<<"================================================================================\n";
	entrada();
}

void inicio()
{
	setlocale(LC_ALL,"");
	system("CLS");
	cout<<"================================================================================\n";
	cout<<"=============================     JOGO da Velha     ============================\n";
	cout<<"================================================================================\n";
	cout<<"== INSTRU��ES                                                                 ==\n";
	cout<<"================================================================================\n";
	cout<<"== "<< J <<" com " << j <<"                                                            ==\n";
	cout<<"================================================================================\n";
	cout<<"== Digite o N�mero de acordo com a posi��o do teclado num�rico                ==\n";
	cout<<"== e precione ENTER                                                           ==\n";  
	cout<<"================================================================================\n";
	cout<<"================================================================================\n";
	cout<<"==                                                                            ==\n";
	cout<<"==                                                                            ==\n";
	cout<<"==                                   |     |                                  ==\n";
	cout<<"==                                7  |  8  |  9                               ==\n";
	cout<<"==                              _____|_____|_____                             ==\n";
	cout<<"==                                   |     |                                  ==\n";
	cout<<"==                                4  |  5  |  6                               ==\n";
	cout<<"==                              _____|_____|_____                             ==\n";
	cout<<"==                                   |     |                                  ==\n";
	cout<<"==                                1  |  2  |  3                               ==\n";
	cout<<"==                                   |     |                                  ==\n";
	cout<<"==                                                                            ==\n";
	cout<<"==                                                                            ==\n";
	cout<<"==                                                                            ==\n";
	cout<<"================================================================================\n";
	cout<<"== Este Jogo foi oferecido pelo Professor Cristiano Teixeira  ==================\n";
	cout<<"== Sob a Licen�a Apache License 2.0 ============================================\n";
	cout<<"================================================================================\n";
	system("pause");
}

void entrada()
{
	int at;
	if(J=="Jogador 1")
	{
		cin >> at; cin.ignore();
	}
	else
	{
		at=computador1();
	}
		
	switch (at)
	{
		case 1:
			if(qp[2][0]==' ')
			{
				qp[2][0]=j;
				alterna();
				break;
			}
		case 2:
			if(qp[2][1]==' ')
			{
				qp[2][1]=j;
				alterna();
				break;
			}
		case 3:
			if(qp[2][2]==' ')
			{
				qp[2][2]=j;
				alterna();
				break;
			}
		case 4:
			if(qp[1][0]==' ')
			{
				qp[1][0]=j;
				alterna();
				break;
			}
		case 5:
			if(qp[1][1]==' ')
			{
				qp[1][1]=j;
				alterna();
				break;
			}
		case 6:
			if(qp[1][2]==' ')
			{
				qp[1][2]=j;
				alterna();
				break;
			}
		case 7:
			if(qp[0][0]==' ')
			{	
				qp[0][0]=j;
				alterna();
				break;
			}
		case 8:
			if(qp[0][1]==' ')
			{	qp[0][1]=j;
				alterna();
				break;
			}
		case 9:
			if(qp[0][2]==' ')
			{	qp[0][2]=j;
				alterna();
				break;
			}
		default:
			break;						
	}
		
	verifica();
	
}

void verifica()
{
if(qp[0][0]==qp[0][1] and qp[0][1]==qp[0][2] and qp[0][2]!=' ') // verifica linha 1
	{
		if(qp[0][0]=='X')
		{
			Vencedor='X';
			J="Jogador 1";
			j='X';
			fimdejogo();
		}
		else if (qp[0][0]=='O')
		{
			Vencedor='O';
			J="Computador";
			j='O';
			fimdejogo();
		}
	}
else if(qp[1][0]==qp[1][1] and qp[1][1]==qp[1][2] and qp[1][2]!=' ') // verifica linha 2
	{
		if(qp[1][0]=='X')
		{
			Vencedor='X';
			J="Jogador 1";
			j='X';
			fimdejogo();
		}
		else if (qp[1][0]=='O')
		{
			Vencedor='O';
			J="Computador";
			j='O';
			fimdejogo();
		}
	}
else if(qp[2][0]==qp[2][1] and qp[2][1]==qp[2][2] and qp[2][2]!=' ') // verifica linha 3
	{
		if(qp[2][0]=='X')
		{
			Vencedor='X';
			J="Jogador 1";
			j='X';
			fimdejogo();
		}
		else if (qp[2][0]=='O')
		{
			Vencedor='O';
			J="Computador";
			j='O';
			fimdejogo();
		}
	}
else if(qp[0][0]==qp[1][0] and qp[1][0]==qp[2][0] and qp[2][0]!=' ') // verifica coluna 1
	{
		if(qp[0][0]=='X')
		{
			Vencedor='X';
			J="Jogador 1";
			j='X';
			fimdejogo();
		}
		else if (qp[0][0]=='O')
		{
			Vencedor='O';
			J="Computador";
			j='O';
			fimdejogo();
		}
	}
else if(qp[0][1]==qp[1][1] and qp[1][1]==qp[2][1] and qp[2][1]!=' ') // verifica coluna 2
	{
		if(qp[0][1]=='X')
		{
			Vencedor='X';
			J="Jogador 1";
			j='X';
			fimdejogo();
		}
		else if (qp[0][1]=='O')
		{
			Vencedor='O';
			J="Computador";
			j='O';
			fimdejogo();
		}
	}

else if(qp[0][2]==qp[1][2] and qp[1][2]==qp[2][2] and qp[2][2]!=' ') // verifica coluna 3
	{
		if(qp[0][2]=='X')
		{
			Vencedor='X';
			J="Jogador 1";
			j='X';
			fimdejogo();
		}
		else if (qp[0][2]=='O')
		{
			Vencedor='O';
			J="Computador";
			j='O';
			fimdejogo();
		}
	}
else if(qp[0][0]==qp[1][1] and qp[1][1]==qp[2][2] and qp[2][2]!=' ') // diagonal 1
	{
		if(qp[0][0]=='X')
		{
			Vencedor='X';
			J="Jogador 1";
			j='X';
			fimdejogo();
		}
		else if (qp[0][0]=='O')
		{
			Vencedor='O';
			J="Computador";
			j='O';
			fimdejogo();
		}
	}
else if(qp[0][2]==qp[1][1] and qp[1][1]==qp[2][0] and qp[2][0]!=' ') // diagonal 2
	{
		if(qp[0][2]=='X')
		{
			Vencedor='X';
			J="Jogador 1";
			j='X';
			fimdejogo();
		}
		else if (qp[0][2]=='O')
		{
			Vencedor='O';
			J="Computador";
			j='O';
			fimdejogo();
		}
	}	

else if (qp[0][0]!=' ' and qp[0][1]!=' ' and qp[0][2]!=' ' and qp[1][0]!=' ' and qp[1][1]!=' ' and qp[1][2]!=' ' and qp[2][0]!=' ' and qp[2][1]!=' ' and qp[2][2]!=' ')
	{
		Vencedor='E';
		J="Empate";
		j='E';
		fimdejogo();
	}		 

}

void alterna()
{
	if (j=='X')
	{
		j='O';
		J="Computador";
	}
	else
	{
		j='X';
		J="Jogador 1";
	}
		
}

void fimdejogo()
{
	setlocale(LC_ALL,"");
	system("CLS");
	cout<<"================================================================================\n";
	cout<<"=============================     JOGO da Velha     ============================\n";
	cout<<"================================================================================\n";
	cout<<"\n";
	cout<<"================================================================================\n";
	cout<<"== O Vencedor � o "<< J<< " com o " << Vencedor <<" No modo " << jogo << "                                   ==\n";
	cout<<"================================================================================\n";
	cout<<"==                                FIM DE JOGO                                 ==\n";
	cout<<"==                                                                            ==\n";  
	cout<<"================================================================================\n";
	cout<<"================================================================================\n";
	cout<<"==                                                                            ==\n";
	cout<<"==                                                                            ==\n";
	cout<<"==                                   |     |                                  ==\n";
	cout<<"==                                "<<qp[0][0]<<"  |  "<<qp[0][1]<<"  |  "<<qp[0][2]<<"                               ==\n";
	cout<<"==                              _____|_____|_____                             ==\n";
	cout<<"==                                   |     |                                  ==\n";
	cout<<"==                                "<<qp[1][0]<<"  |  "<<qp[1][1]<<"  |  "<<qp[1][2]<<"                               ==\n";
	cout<<"==                              _____|_____|_____                             ==\n";
	cout<<"==                                   |     |                                  ==\n";
	cout<<"==                                "<<qp[2][0]<<"  |  "<<qp[2][1]<<"  |  "<<qp[2][2]<<"                               ==\n";
	cout<<"==                                   |     |                                  ==\n";
	cout<<"==                                                                            ==\n";
	cout<<"==                                                                            ==\n";
	cout<<"==                                                                            ==\n";
	cout<<"================================================================================\n";
	cout<<"== Este Jogo foi oferecido pelo Professor Cristiano Teixeira  ==================\n";
	cout<<"== Sob a Licen�a Apache License 2.0 ============================================\n";
	cout<<"================================================================================\n";
	system("pause");	
	
}

int computador1()
{
	int ale;
	srand((unsigned)time(NULL)); // inicia a fun��o Rand() 
	ale = rand() % 9;  // armazena na vari�vel valor um numero entre 0 e final
	return ale;	
}

int main(void)
{
setlocale(LC_ALL,"");
system("mode con:cols=80 lines=35");
system("title JOGO DA VELHA");
qp[0][0]=' ';
qp[0][1]=' ';
qp[0][2]=' ';
qp[1][0]=' ';
qp[1][1]=' ';
qp[1][2]=' ';
qp[2][0]=' ';
qp[2][1]=' ';
qp[2][2]=' ';

inicio();

while(Vencedor =='Z')
{
imprime();
}
    system("pause");
    return 0;
}
