programa
{
	cadeia J="Jogador 1"
	caracter j='X'
	caracter qp[3][3]
	caracter Vencedor = 'Z'
	caracter nada
	funcao comeca()
	{

	

	limpa()
	escreva("================================================================================\n")
	escreva("=============================     JOGO da Velha     ============================\n")
	escreva("================================================================================\n")
	escreva("==                                 INSTRUÇÕES                                 ==\n")
	escreva("================================================================================\n")
	escreva("==                                                                            ==\n")
	escreva("================================================================================\n")
	escreva("== Digite o Número de acordo com a posição do teclado numérico                ==\n")
	escreva("== e precione ENTER                                                           ==\n")  
	escreva("================================================================================\n")
	escreva("================================================================================\n")
	escreva("==                                                                            ==\n")
	escreva("==                                                                            ==\n")
	escreva("==                                   |     |                                  ==\n")
	escreva("==                                7  |  8  |  9                               ==\n")
	escreva("==                              _____|_____|_____                             ==\n")
	escreva("==                                   |     |                                  ==\n")
	escreva("==                                4  |  5  |  6                               ==\n")
	escreva("==                              _____|_____|_____                             ==\n")
	escreva("==                                   |     |                                  ==\n")
	escreva("==                                1  |  2  |  3                               ==\n")
	escreva("==                                   |     |                                  ==\n")
	escreva("==                                                                            ==\n")
	escreva("==                                                                            ==\n")
	escreva("==                                                                            ==\n")
	escreva("================================================================================\n")
	escreva("== Este Jogo foi oferecido pelo Professor Cristiano Teixeira  ==================\n")
	escreva("== Sob a Licença Apache License 2.0 ============================================\n")
	escreva("================================================================================\n")
	leia (nada)
}

funcao imprime()
{
	limpa()
	escreva("================================================================================\n")
	escreva("=============================     JOGO da Velha     ============================\n")
	escreva("================================================================================\n")
	escreva("\n")
	escreva("================================================================================\n")
	escreva("== ", J ," com " , j ,"                                                            ==\n")
	escreva("================================================================================\n")
	escreva("== Digite o Número de acordo com a posição do teclado numérico                ==\n")
	escreva("== e precione ENTER                                                           ==\n")  
	escreva("================================================================================\n")
	escreva("================================================================================\n")
	escreva("==                                                                            ==\n")
	escreva("==                                                                            ==\n")
	escreva("==                                   |     |                                  ==\n")
	escreva("==                                ",qp[0][0],"  |  ",qp[0][1],"  |  ",qp[0][2],"                               ==\n")
	escreva("==                              _____|_____|_____                             ==\n")
	escreva("==                                   |     |                                  ==\n")
	escreva("==                                ",qp[1][0],"  |  ",qp[1][1],"  |  ",qp[1][2],"                               ==\n")
	escreva("==                              _____|_____|_____                             ==\n")
	escreva("==                                   |     |                                  ==\n")
	escreva("==                                ",qp[2][0],"  |  ",qp[2][1],"  |  ",qp[2][2],"                               ==\n")
	escreva("==                                   |     |                                  ==\n")
	escreva("==                                                                            ==\n")
	escreva("==                                                                            ==\n")
	escreva("==                                                                            ==\n")
	escreva("================================================================================\n")
	escreva("== Este Jogo foi oferecido pelo Professor Cristiano Teixeira  ==================\n")
	escreva("== Sob a Licença Apache License 2.0 ============================================\n")
	escreva("================================================================================\n")
	entrada()
}

funcao entrada()
{
	inteiro at
	leia (at)
	escolha (at)
	{
		caso 1:
			qp[2][0]=j
			pare
		caso 2:
			qp[2][1]=j
			pare
		caso 3:
			qp[2][2]=j
			pare
		caso 4:
			qp[1][0]=j
			pare
		caso 5:
			qp[1][1]=j
			pare
		caso 6:
			qp[1][2]=j
			pare
		caso 7:
			qp[0][0]=j
			pare
		caso 8:
			qp[0][1]=j
			pare
		caso 9:
			qp[0][2]=j
			pare
		caso contrario:
			pare					
	}
	verifica()
	alterna()
}

funcao verifica()
{
se(qp[0][0]==qp[0][1] e qp[0][1]==qp[0][2] e qp[0][2]!=' ') // verifica linha 1
	{
		se(qp[0][0]=='X')
		{
			Vencedor='X'
			fimdejogo()
		}
		senao se (qp[0][0]=='O')
		{
			Vencedor='O'
			fimdejogo()
		}
	}
senao se (qp[1][0]==qp[1][1] e qp[1][1]==qp[1][2] e qp[1][2]!=' ') // verifica linha 2
	{
		se(qp[1][0]=='X')
		{
			Vencedor='X'
			fimdejogo()
		}
		senao se (qp[1][0]=='O')
		{
			Vencedor='O'
			fimdejogo()
		}
	}
senao se(qp[2][0]==qp[2][1] e qp[2][1]==qp[2][2] e qp[2][2]!=' ') // verifica linha 3
	{
		se(qp[2][0]=='X')
		{
			Vencedor='X'
			fimdejogo()
		}
		senao se (qp[2][0]=='O')
		{
			Vencedor='O'
			fimdejogo()
		}
	}
senao se(qp[0][0]==qp[1][0] e qp[1][0]==qp[2][0] e qp[2][0]!=' ') // verifica coluna 1
	{
		se(qp[0][0]=='X')
		{
			Vencedor='X'
			fimdejogo()
		}
		senao se (qp[0][0]=='O')
		{
			Vencedor='O'
			fimdejogo()
		}
	}
senao se(qp[0][1]==qp[1][1] e qp[1][1]==qp[2][1] e qp[2][1]!=' ') // verifica coluna 2
	{
		se(qp[0][1]=='X')
		{
			Vencedor='X'
			fimdejogo()
		}
		senao se (qp[0][1]=='O')
		{
			Vencedor='O'
			fimdejogo()
		}
	}
senao se(qp[0][2]==qp[1][2] e qp[1][2]==qp[2][2] e qp[2][2]!=' ') // verifica coluna 3
	{
		se(qp[0][2]=='X')
		{
			Vencedor='X'
			fimdejogo()
		}
		senao se (qp[0][2]=='O')
		{
			Vencedor='O'
			fimdejogo()
		}
	}
senao se(qp[0][0]==qp[1][1] e qp[1][1]==qp[2][2] e qp[2][2]!=' ') // diagonal 1
	{
		se(qp[0][0]=='X')
		{
			Vencedor='X'
			fimdejogo()
		}
		senao se (qp[0][0]=='O')
		{
			Vencedor='O'
			fimdejogo()
		}
	}
senao se(qp[0][2]==qp[1][1] e qp[1][1]==qp[2][0] e qp[2][0]!=' ') // diagonal 2
	{
		se(qp[0][2]=='X')
		{
			Vencedor='X'
			fimdejogo()
		}
		senao se (qp[0][2]=='O')
		{
			Vencedor='O'
			fimdejogo()
		}
	}	
senao se (qp[0][0]!=' ' e qp[0][1]!=' ' e qp[0][2]!=' ' e qp[1][0]!=' ' e qp[1][1]!=' ' e qp[1][2]!=' ' e qp[2][0]!=' ' e qp[2][1]!=' ' e qp[2][2]!=' ')
	{
		Vencedor='E'
		J="Empate"
		j='E'
		fimdejogo()
	}		
	
	
}


funcao alterna()
{
	se (j=='X')
	{
		j='O'
		J="Jogador 2"
	}
	senao
	{
		j='X'
		J="Jogador 1"
	}
		
}

funcao fimdejogo()
{
	limpa()
	escreva("================================================================================\n")
	escreva("=============================     JOGO da Velha     ============================\n")
	escreva("================================================================================\n")
	escreva("\n")
	escreva("================================================================================\n")
	escreva("== O Vencedor é o ", J, " com o " , Vencedor ,"                                           ==\n")
	escreva("================================================================================\n")
	escreva("==                                FIM DE JOGO                                 ==\n")
	escreva("==                                                                            ==\n")  
	escreva("================================================================================\n")
	escreva("================================================================================\n")
	escreva("==                                                                            ==\n")
	escreva("==                                                                            ==\n")
	escreva("==                                   |     |                                  ==\n")
	escreva("==                                ",qp[0][0],"  |  ",qp[0][1],"  |  ",qp[0][2],"                               ==\n")
	escreva("==                              _____|_____|_____                             ==\n")
	escreva("==                                   |     |                                  ==\n")
	escreva("==                                ",qp[1][0],"  |  ",qp[1][1],"  |  ",qp[1][2],"                               ==\n")
	escreva("==                              _____|_____|_____                             ==\n")
	escreva("==                                   |     |                                  ==\n")
	escreva("==                                ",qp[2][0],"  |  ",qp[2][1],"  |  ",qp[2][2],"                               ==\n")
	escreva("==                                   |     |                                  ==\n")
	escreva("==                                                                            ==\n")
	escreva("==                                                                            ==\n")
	escreva("==                                                                            ==\n")
	escreva("================================================================================\n")
	escreva("== Este Jogo foi oferecido pelo Professor Cristiano Teixeira  ==================\n")
	escreva("== Sob a Licença Apache License 2.0 ============================================\n")
	escreva("================================================================================\n")
	
	leia(nada)
	
}

funcao inicio ()
{
//system("mode con:cols=80 lines=35");
//system("title JOGO DA VELHA");
qp[0][0]=' '
qp[0][1]=' '
qp[0][2]=' '
qp[1][0]=' '
qp[1][1]=' '
qp[1][2]=' '
qp[2][0]=' '
qp[2][1]=' '
qp[2][2]=' '

comeca()
	
enquanto(Vencedor =='Z')
{
imprime()
}
    leia(nada)
}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 107; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */