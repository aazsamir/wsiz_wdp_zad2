#include <iostream>
// #include <windows.h>
#include <time.h>

using namespace std;

int main()
{
	//Zad 1
	//Grupa laboratoryjna składa się z n studentów(wartość n podaje użytkownik).Wprowadzamy
	//liczbę punktów dla każdego studenta.Napisz program, który obliczy średnią liczbę punktów
	//w grupie z wykorzystaniem pętli while.
	cout << "************Zadanie 1" << endl;
	int n;
	float tab[1000];
	float sum = 0;
	float avg;
	cout << "Podaj `n` (liczbe studentow): ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Podaj liczbe punktow studenta nr. " << i + 1 << ": " << endl;
		cin >> tab[i];
		sum += tab[i];
	}
	avg = sum / n;
	cout << "Srednia liczba punktow w grupie to " << avg << endl;
	
	//zad 2
	//W poprzednim zadaniu użytkownik może wprowadzać wartości z dowolnego przedziału.
	//	Zmodyfikuj program tak, by można było wprowadzać wartości tylko z przedziału 0 – 100.
	cout << "***********Zadanie 2" << endl;
	do {
		cout << "Podaj `n` (liczbe studentow): ";
		cin >> n;
	} while (n < 0 || n > 100);
	int buffer;
	int i = 0;
	sum = 0;
	while(i<n){
		cout << "Podaj liczbe punktow (0 - 100) studenta nr. " << i + 1 << ": " << endl;
		cin >> buffer;
		if (buffer >= 0 && buffer <= 100) {
			tab[i] = buffer;
			sum += buffer;
			i++;
		}
		else {
			cout << buffer << " nie miesci sie w przedziale 0 - 100" << endl;
		}
	}
	avg = sum / n;
	cout << "Srednia liczba punktow w grupie to " << avg << endl;

	//zad 3
	//Zastosuj instrukcje continue w programie z Zadania 2 tak, aby po podaniu liczby punktów spoza
	//	przedziału 0 – 100 pomijać dalsze wykonywanie pętli.Sprawdź działanie programu.Następnie
	//	zmień pętlę na nieskończoną, czyli taką której warunek zawsze jest prawdziwy.
	cout << "***********Zadanie 3" << endl;
	do {
		cout << "Podaj `n` (liczbe studentow): ";
		cin >> n;
	} while (n < 0 || n > 100);
	i = 0;
	sum = 0;
	while (i < n) {
	//while (true) {
		cout << "Podaj liczbe punktow (0 - 100) studenta nr. " << i + 1 << ": " << endl;
		cin >> buffer;
		if (buffer >= 0 && buffer <= 100) {
			tab[i] = buffer;
			sum += buffer;
			i++;
		}
		else {
			continue;
		}
	}
	avg = sum / n;
	cout << "Srednia liczba punktow w grupie to " << avg << endl;


	//zad 4
	//Napisz program, który pozwoli na wczytanie 10 liczb i 
	//wyznaczeniu ilości oraz sumy liczb
	//	ujemnych i dodatnich podanych przez użytkownika.
	cout << "***********Zadanie 4" << endl;
	int many = 10;
	int positive = 0;
	int negative = 0;
	int positive_number = 0;
	int negative_number = 0;

	for (short i = 0; i < many; i++) {
		cout << i+1 << " liczba: ";
		cin >> tab[i];
		if (tab[i] > 0) {
			positive += tab[i];
			positive_number++;
		}
		else if(tab[i] < 0){
			negative += tab[i];
			negative_number++;
		}
	}
	cout << "Suma dodatnich: " << positive << ", liczba dodatnich: " << positive_number << endl;
	cout << "Suma ujemnych: " << negative << ", liczba ujemnych: " << negative_number << endl;

	//zad 5
	//Dany jest ciąg n liczb(n > 0), napisz program pozwalający na obliczenie sumy 
	//wszystkich liczb parzystych w danym ciągu.
	cout << "***********Zadanie 5" << endl;
	cout << "podaj n: ";
	cin >> n;
	sum = 0;
	for (i = 1; i <= n; i++) {
		cout << "podaj liczbe " << i << ": ";
		cin >> buffer;

		if (!(buffer % 2)) {
			sum += buffer;
		}
	}
	cout << "suma liczb parzystych wprowadzonego ciagu: " << sum << endl;

	//zad 6
	//Wykorzystując algorytm z zadania 5, napisz program który pozwoli użytkownikowi na
	//	wylosowanie n liczb z przedziału(-10, 45) i obliczy sumę 
	//wszystkich liczb parzystych w danym ciągu
	srand(time(NULL));
	cout << "***********Zadanie 5" << endl;
	cout << "podaj n: ";
	cin >> n;
	sum = 0;
	int random = 0;
	for (short i = 0; i < n; i++) {
		random = rand() % 56 - 10;
		if( random % 2 == 0 ){
			sum += random;
		}
		cout << random << endl;
	}
	if (n > 0) {
		cout << "suma parzystych z wylosowanego ciagu: " << sum << endl;
	}
	else {
		cout << "n musi byc wieksze od 0" << endl;
	}

	return 0;
}