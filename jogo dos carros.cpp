#include <iostream>
#include <ctime>
using namespace std;

void imprimir_espacos(int rodada);//insere a função secundaria(não oficial) no programa
int main()
{
	// declarando as varieveis
	int total_espacos = 50;
	int espacos_1 = 0;
	int espacos_2 = 0;
	while (espacos_1 < total_espacos && espacos_2 < total_espacos) // enquanto o que tiver parenteces for vdd ele executa o que tem nas chaves
	{
		system("cls");// limpa a tela 
		cout << " jogo dos carros" << endl;//imprimir jogo dos carros
		cout << "                                                Chegada!" << endl; // imprime na tela o tamanho da pista

		srand((int)time(0));//semente que se usa pra números aleatorios

		espacos_1 = rand() % 3 + 1 + espacos_1;//sorteio aleatorio que mostra quantos espaços o carrinho vai andar
		imprimir_espacos(espacos_1);//imprime espaços 
		cout << "  _  " << endl;//imprime pedaço do carro na tela
		imprimir_espacos(espacos_1);//imprime espaços
		cout << "-o-o>" << endl;//imprime pedaços do carro na tela

		espacos_2 = rand() % 3 + 1 + espacos_2;//sorteio aleatorio que mostra quantos espaços o carrinho vai andar
		imprimir_espacos(espacos_2);//imprime espaços
		cout << "  _  " << endl;//imprime pedaços do carro na tela
		imprimir_espacos(espacos_2);//imprime espaços
		cout << "-o-o>" << endl;//imprime pedaços do carro na tela
	}
	if (espacos_1 > espacos_2) cout << "Carro 1 venceu a corrida!" << endl;//se o carro1 vencer imprime o que está na função
	else if (espacos_2 > espacos_1) cout << "Carro 2 venceu a corrida!" << endl;//se o carro2 vencer imprime o que está na função
	else cout << "Empate!" << endl;//se os dois a cima estiverem errado executa
	return 0;//fecha a função principal
}

void imprimir_espacos(int rodada)//função não oficial, marcada pelo começo no void
{
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++)//para o que está entre parentezes executa o que está nas chaves
	{
		cout << " ";
	}
}
