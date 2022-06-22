tarefa Frente com numero velocidade = 200 {
	Motor("mE", velocidade)
	Motor("mD", velocidade)		
}

tarefa Tras com numero velocidade = 200 {
	Motor("mE", 0-velocidade)
	Motor("mD", 0-velocidade)
}

tarefa Esquerda com numero velocidade = 100 {
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


	enquanto (verdadeiro) farei {


	se((Cor("CorDireita") == "Verde")) entao {
		#Esperar(10000)
		#Frente()
		Esquerda()
		
		#Esperar(10)

}

	senao se((Cor("CorDireita") == "Preto") e (Cor("CorEsquerda") == "Branco")) entao {
		Esquerda(360)
		Esperar(1700)
	}

	senao se((Cor("CorDireita") == "Branco") e (Cor("CorEsquerda") == "Preto")) entao {
		Direita(360)
		Esperar(1700)
	}
	senao se((Cor("CorDireita") == "Branco") e (Cor("CorEsquerda") == "Branco")) entao {
		Frente()
	}
 	senao {
		Tras(720)
		TravarMotor("mD", verdadeiro)
		Esperar(7000)
		
}

	Esperar(100)

}
fim