#include <iostream> 
#include <string>
#include <ctime>

using namespace std;
// começando a funçao principal
int main()
{
	// declarando as variaveis
	int Vida1 = 20, Vida2 = 20;
	int dano1 = 0, dano2 = 0;
	string P1, P2;
	bool sair = false;
	// imprimindo e salvando nas variaveis 
	cout << "\aDigite o nome do player 1" << endl;
	cin >> P1;
	cout << "\aDigite o nome do player 2" << endl;
	cin >> P2;
	// o laço while repeti até sair ser igual a falso
	while (sair == false)
	{	// imprimindo o boneco
		cout << "-" << dano1 << "                   -" << dano2 << endl;
		cout << " o                   o  " << endl;
		cout << ".T./               \\.T." << endl;
		cout << " ^                   ^  " << endl;
		cout << P1 << "                " << P2 << endl;
		// imprimindo a vida dos bonecos
		cout << "Vida: " << Vida1 << "         " << " Vida: " << Vida2 << endl;
		cout << "Atk: 2" << "         " << "Atk: 2" << endl;
		cout << "Def: 4" << "         " << "Def: 4" << endl;
		// declarando a variavel e salvando o numero aleatorio
		int dado6;
		// srand gera numeros aleatorios 
		srand((int)time(0));

		dado6 = rand() % 6 + 1;
		dano1 = dado6 - 4;
		// se a condiçao for vdd ele executa o parametro dentro das chaves
		if (dado6 < 4)
		{
			dano1 = 0;
		}
		Vida1 = Vida1 - dano1;
		// gerando numeros aleatorios pro jogador 2
		dado6 = rand() % 6 + 1;
		dano2 = dado6 - 4;
		// se a condiçao for vdd ele executa o parametro dentro das chaves
		if (dado6 < 4)
		
		{
			dano2 = 0;
		}
		Vida2 = Vida2 - dano2; // o valor da vida depois do rolamento do dado
		system("pause"); // faz o sistema executar até o ponto atual
		// printa a vida apos o rolamento do dado
		cout << "Vida: " << Vida1 << "         " << "Vida: " << Vida2 << endl;

		if (Vida1 <= 0 || Vida2 <= 0) //se um dos dois for vdd ele executa o paramentro sair = true
		{
			sair = true;
		}
		system("cls"); // limpa a tela
	}
	cout << "Game Over" << endl; // imprime na tela game over
	if (Vida1 > 0) cout << "Vitoria de: " << P1 << endl; // se a vida do jogador 1 for maior que zero executa
	else if (Vida2 > 0) cout << "Vitoria de: " << P2 << endl; //se a vida do jogador 2 for maior que zero executa 
	else cout << "Ambos perderam" << endl; // se nenhum dos dois for verdadeiro execura 

	return 0; // fecha a funçao principal
}
