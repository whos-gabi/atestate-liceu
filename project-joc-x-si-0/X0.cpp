#include <iostream>
#include <conio.h>

using namespace std;

int verificaCastig(char[]);
void tabla(char[]);
char nume[20];
char nume1[20];
char matrice[10];


void Initializare()
{
	int i;
	for (i = 1; i <= 10; ++i)
		matrice[i] = char(i + '0');
}

char meniu();
int main()
{
	fflush(stdin);

	char matrice[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int jucator = 1, i, alegere;

	system("color a");

	while (1)
	{
		system("cls");
		switch (meniu())
		{

		case 'S':

			fflush(stdin);

			cout << "\n\nIntrodu numele tau pentru a incepe jocul:" << endl;
			cin >> nume;
			cout << "\n\nIntrodu un nume si pentru calculator:" << endl;
			cin >> nume1;

			char semn;
			do
			{
				tabla(matrice);

				if (jucator % 2 == 1)
					jucator = 1;
				else
					jucator = 2;

				// jucator 2
				if (jucator == 2)
				{
					cout << "E randul calculatorului  ";
					cout << "\nApasa ENTER pentru mutarea calculatorului" << endl;
					alegere = rand() % 9;
					semn = 'O';

					int pozitie = 0;
					while (pozitie == 0)
					{

						if (alegere == 1 && matrice[1] == '1')
						{
							matrice[1] = semn;
							pozitie = 1;
						}
						else if (alegere == 2 && matrice[2] == '2')
						{

							matrice[2] = semn;
							pozitie = 1;
						}
						else if (alegere == 3 && matrice[3] == '3')
						{

							matrice[3] = semn;
							pozitie = 1;
						}
						else if (alegere == 4 && matrice[4] == '4')
						{

							pozitie = 1;
							matrice[4] = semn;
						}
						else if (alegere == 5 && matrice[5] == '5')
						{

							matrice[5] = semn;
							pozitie = 1;
						}
						else if (alegere == 6 && matrice[6] == '6')
						{

							matrice[6] = semn;
							pozitie = 1;
						}
						else if (alegere == 7 && matrice[7] == '7')
						{

							matrice[7] = semn;
							pozitie = 1;
						}
						else if (alegere == 8 && matrice[8] == '8')
						{

							matrice[8] = semn;
							pozitie = 1;
						}
						else if (alegere == 9 && matrice[9] == '9')
						{

							matrice[9] = semn;
							pozitie = 1;
						}

						else
						{
							alegere = rand() % 9;
						}
					}
					i = verificaCastig(matrice);
					jucator++;
					_getche();
					tabla(matrice);
				}

				// jucator 1
				else if (jucator == 1)
				{
					cout << "E randul tau  " << nume << " :\nIntrodu un numar unde vrei sa plasezi X:  ";
					cin >> alegere;
					semn = 'X';

					if (alegere == 1 && matrice[1] == '1')

						matrice[1] = semn;
					else if (alegere == 2 && matrice[2] == '2')

						matrice[2] = semn;
					else if (alegere == 3 && matrice[3] == '3')

						matrice[3] = semn;
					else if (alegere == 4 && matrice[4] == '4')

						matrice[4] = semn;
					else if (alegere == 5 && matrice[5] == '5')

						matrice[5] = semn;
					else if (alegere == 6 && matrice[6] == '6')

						matrice[6] = semn;
					else if (alegere == 7 && matrice[7] == '7')

						matrice[7] = semn;
					else if (alegere == 8 && matrice[8] == '8')

						matrice[8] = semn;
					else if (alegere == 9 && matrice[9] == '9')

						matrice[9] = semn;
					else
					{
						cout << "Mutare gresita";

						jucator--;
						getche();
					}
					i = verificaCastig(matrice);

					jucator++;
				}
			} while (i == -1);
			tabla(matrice);
			if (i == 1)

				cout << "Felicitari! \njucator " << --jucator << " a castigat ";
			else
				cout << "  OOps!\nRemiza";
			fflush(stdin);

			getche();

			break;

		case 'P':
			cout << "\n\nJucator 1: Introdu numele tau pentru a incepe jocul:" << endl;
			cin >> nume;
			cout << "\n\nJucator 2: Introdu numele tau pentru a incepe jocul:" << endl;
			cin >> nume1;

			system("cls");
			do
			{
				tabla(matrice);
				jucator = (jucator % 2) ? 1 : 2;
				cout << "jucator " << jucator << ", Introdu un numar unde vrei sa faci mutarea:";
				cin >> alegere;
				semn = (jucator == 1) ? 'X' : 'O';
				if (alegere == 1 && matrice[1] == '1')
					matrice[1] = semn;
				else if (alegere == 2 && matrice[2] == '2')
					matrice[2] = semn;
				else if (alegere == 3 && matrice[3] == '3')
					matrice[3] = semn;
				else if (alegere == 4 && matrice[4] == '4')
					matrice[4] = semn;
				else if (alegere == 5 && matrice[5] == '5')
					matrice[5] = semn;
				else if (alegere == 6 && matrice[6] == '6')
					matrice[6] = semn;
				else if (alegere == 7 && matrice[7] == '7')
					matrice[7] = semn;
				else if (alegere == 8 && matrice[8] == '8')
					matrice[8] = semn;
				else if (alegere == 9 && matrice[9] == '9')
					matrice[9] = semn;
				else
				{
					cout << "Alegere gresita ";
					jucator--;
					getch();
				}
				i = verificaCastig(matrice);
				jucator++;
			} while (i == -1);
			tabla(matrice);
			if (i == 1)
				cout << "==>\ajucator " << --jucator << " a castigat";
			else
				cout << "==>\aOOps\nRemiza";
			getche();
			// return 0;

			break;

		case 'I':
			cout << "\n\n\n\tX si O  este un joc pentru doi jucatori, X respectiv 0,\n care marcheaza pe rand cate o casuta dintr-un tabel cu 3 linii si 3 coloane.\n Jucatorul care reuseste primul sa marcheze 3 casute adiacente pe orizontala,\n verticala sau diagonala castiga jocul.";
			break;

		case 'E':
			exit(0);

		default:
			cout << "Ai introdus o valoare gresita";
		}

		getch();
	}
	return 0;
}

void tabla(char matrice[])
{
	fflush(stdin);
	system("cls");
	cout << "\n\n\t********  Joc X si 0  ********\n\n";

	cout << "" << nume << " (X) -   " << nume1 << " (O)";
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << matrice[1] << "  |  " << matrice[2] << "  |  " << matrice[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << matrice[4] << "  |  " << matrice[5] << "  |  " << matrice[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << matrice[7] << "  |  " << matrice[8] << "  |  " << matrice[9] << endl;

	cout << "     |     |     " << endl
		 << endl;
}

int verificaCastig(char matrice[])
{
	if (matrice[1] == matrice[2] && matrice[2] == matrice[3])

		return 1;
	else if (matrice[4] == matrice[5] && matrice[5] == matrice[6])

		return 1;
	else if (matrice[7] == matrice[8] && matrice[8] == matrice[9])

		return 1;
	else if (matrice[1] == matrice[4] && matrice[4] == matrice[7])

		return 1;
	else if (matrice[2] == matrice[5] && matrice[5] == matrice[8])

		return 1;
	else if (matrice[3] == matrice[6] && matrice[6] == matrice[9])

		return 1;
	else if (matrice[1] == matrice[5] && matrice[5] == matrice[9])

		return 1;
	else if (matrice[3] == matrice[5] && matrice[5] == matrice[7])

		return 1;
	else if (matrice[1] != '1' && matrice[2] != '2' && matrice[3] != '3' && matrice[4] != '4' && matrice[5] != '5' && matrice[6] != '6' && matrice[7] != '7' && matrice[8] != '8' && matrice[9] != '9')

		return 0;
	else
		return -1;
}

char meniu()
{

	cout << "S.Joc cu calculatorul\n";
	cout << "P.Joc in 2\n";
	cout << "I.Info joc\n";
	cout << "E.Exit";
	cout << "\n\n\nPrecizeaza optiunea:";
	fflush(stdin);

	return toupper(getche());
}
