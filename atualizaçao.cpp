
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;

	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;
	while (sair == false)
	{
		cout << " o         o" << endl;
		cout << ".T./     \\.T." << endl;
		cout << " ^         ^" << endl;
		cout << jog1 << "     " << endl;
		cout << "Vida: " << vida1 << "    " << "Vida: " << vida2 << endl;
		system("pause");
		int dado6;
		srand ( (int) time (0) )
		dado6 = rand() % 100 + 1;
		vida1 = vida1 - dado6;
		dado6 = rand() % 100 + 1;
		vida2 = vida2 - dado6;

		cout << "vida: " << vida1 << "vida: " << vida2 << endl;
		system("cls");
		
		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}
	    else system("cls");
	}
	cout << "FIM DE JOGO!" << endl;

	if (vida1 > 0) cout << "jog1" << "venceu !" << endl;
	else if (vida1 > 0) cout << "jog2" << "venceu !" << endl;
	else cout << "Os dois perderam!" << endl;
	return 0;
}
