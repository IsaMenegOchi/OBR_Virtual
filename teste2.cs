async Task Main(){
bool leitura = Bot.GetComponent<Color Sensor>("Meu sensor").Digital;
double d = leitura.Brightness;

if double d == 0
	Bot.GetComponent<Servomotor>("MotorEsquerda").Locked = false;
	Bot.GetComponent<Servomotor>("MotorEsquerda").Force = 300;
	Bot.GetComponent<Servomotor>("MotorDireita").Locked = false;
	Bot.GetComponent<Servomotor>("MotorDireita").Force = -300;

	await Time.Delay(40000);
	IO.PrintLine("!");
else
	Bot.GetComponent<Servomotor>("MotorEsquerda").Locked = true;
	Bot.GetComponent<Servomotor>("MotorEsquerda").Force = 0;
	Bot.GetComponent<Servomotor>("MotorDireita").Locked = true;
	Bot.GetComponent<Servomotor>("MotorDireita").Force = 0;
}