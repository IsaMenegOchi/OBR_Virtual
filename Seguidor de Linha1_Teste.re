tarefa Frente com numero velocidade = 200 {
	Motor("mE", velocidade)
	Motor("mD", velocidade)		
}

tarefa Tras com numero velocidade = 200 {
	Motor("mE", 0-velocidade)
	Motor("mD", 0-velocidade)
}

tarefa Esquerda com numero velocidade = 200 {
	Motor("mE", velocidade*2)
	Motor("mD", 0-(velocidade*2))
}

tarefa Direita com numero velocidade = 200 {
	Motor("mD", velocidade*2)
	Motor("mE", 0-(velocidade*2))
}

inicio 

	TravarMotor("mE", falso)
	TravarMotor("mD", falso)

se((Cor("CorDireita") == "Branco") e (Cor("CorEsquerda") == "Branco")) entao {
		Frente()
		Esperar(100)
	}
senao se((Cor("CorDireita") == "Preto")) entao{
		Frente()
		Esquerda(900)
		Esperar(100)
	}
senao se((Cor("CorEsquerda") == "Preto")) entao{
		Frente()
		Esquerda(900)
		Esperar(100)
	}

	enquanto (verdadeiro) farei {
	se((Cor("CorDireita") == "Verde")) entao {
		
		Esquerda(900)
		Esperar(1000)
	}

	senao se((Cor("CorDireita") == "Preto") e (Cor("CorEsquerda") == "Branco")) entao {
		Esquerda(900)
		Esperar(1000)
	}

	senao se((Cor("CorDireita") == "Branco") e (Cor("CorEsquerda") == "Preto")) entao {
		Direita(900)
		Esperar(1000)
	}
 	senao {
		Tras(720)
		TravarMotor("mD", verdadeiro)
		Esperar(7000)
		
}

	Esperar(100)

}
fim