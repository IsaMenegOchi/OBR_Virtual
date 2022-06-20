Servomotor MotorEsquerda;
Servomotor MotorDireita;

class Andar(){

    MotorEsquerda = Bot.GetComponent<Servomotor>("motorEsquerda");
    MotorDireita =  Bot.GetComponent<Servomotor>("motorDireita");

    MotorDireita.Locked = False;
    MotorEsquerda.Locked = False;

    MotorDireita.Force = -500;
    MotorEsquerda.Force = -500;
}
