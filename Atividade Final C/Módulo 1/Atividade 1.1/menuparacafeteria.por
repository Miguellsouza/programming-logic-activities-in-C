programa
{
	
	funcao inicio()
	{

	inteiro tipo
	inteiro opcao
	inteiro opcao1 = 0
	inteiro opcao2 = 0
	inteiro opcao3 = 0

	inteiro acompanhamento = -1
	inteiro acompanhamento1 = -1
	
		escreva("Vamos preparar uma xícara de café\n")
		escreva("Vamos selecionar o tipo de café\n")

	
		escreva("Tradicionnal / DIGITE 1\n")
		escreva("Superior / DIGITE 2\n")
		escreva("Gourmet / DIGITE 3\n\n")
		escreva("DIGITE: ")
		leia(opcao)



		escreva("\n\n")
		
		escolha(opcao){
			
			caso 1:
			
				escreva("Qual o tipo de café tradicional?\n")
				escreva("Forte / DIGITE 1\n")
				escreva("ExtraForte / DIGITE 2\n\n")
				escreva("DIGITE: ")
				leia(opcao1)

					escolha(opcao1){

						caso 1:
						opcao1 = 1
						pare

						caso 2: 
						opcao1 = 2
						pare

						caso contrario:
						escreva("Opção inválida!!\n\nTente novamnete")
						
						}

						pare
				
			caso 2:
			opcao2 = 1
			pare
			
			caso 3:
			opcao3 = 1
			pare

			caso contrario:
			escreva("Opção inválida!!\n\nTente novamnete")
		
		} 

		escreva("\n\n")

			enquanto(acompanhamento != 0 e acompanhamento != 1){
		
			escreva("Deseja acrescentar leite?\n")
			escreva("SIM / DIGITE 1\nNÃO / DIGITE 0\n\n")
			escreva("DIGITE: ")
			leia(acompanhamento)
			escreva("\n\n")

			se(acompanhamento != 0 e acompanhamento != 1){
				escreva("opção inválida\n\n")
				}
			}

			enquanto(acompanhamento1 != 0 e acompanhamento1 != 1){
			
			escreva("Deseja acrescentar açucar?\n")
			escreva("SIM / DIGITE 1\nNÃO / DIGITE 0\n\n")
			escreva("DIGITE: ")
			leia(acompanhamento1)
			escreva("\n\n")

			se(acompanhamento1 != 0 e acompanhamento1 != 1){
				escreva("opção inválida\n\n")
				}
			}

			escreva("=================== Resumo do pedido ===================\n\n")

		
		se(opcao1 == 1){
			escreva("Café Tradicional Forte\n")
			}
		se(opcao1 == 2){
			escreva("Café Tradicional ExtraForte\n")
			}
		se(opcao2 == 1){
			escreva("Café Superior\n")
			}
		se(opcao3 == 1){
			escreva("Café Gourmet\n")
			}
		se(acompanhamento == 1){
			escreva("Com Leite\n")
			}senao{
				escreva("Sem Leite\n")
				}
		se(acompanhamento1 == 1){
			escreva("Com Açucar")
			}senao{
				escreva("Sem Açucar")
				}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1754; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */