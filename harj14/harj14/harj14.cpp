/**************************
*Ohjelman nimi:Harjoitus 14
*Tekij�:Ville Hakola
*lyhyt kuvaus
*Tee ohjelma, joka kysyy henkil�tietosi seuraavasti:
*Anna (kaikki) etunimesi (merkkijono):
*Anna kengannumero (kokonaisluku):
*Anna sukunimi (merkkijono):
*Anna koulumatka (reaaliluku):
*Anna osoitteesi:
*Anna postinumero:
*Ohjelma tulostaa tiedot seuraavasti:
*sukunimi etunimet
*osoite
*postinumero
*kengannumero ja koulumatka
*Versio:1.0
*PVM:22.10.2014
******************************/
#include<iostream>
using namespace std;
void main()
{
	char etunimet[40];
	int keng�nnumero;
	char sukunimi[30];
	float koulumatka;
	char osoite[30];
	char postinumero[10];
	cout << "Anna molemmat etunimesi" << endl;
	cin.get(etunimet, 40);
	cout << "Anna kengannumerosi" << endl;
	cin >> keng�nnumero;
	cout << "Anna sukunimesi" << endl;
	cin.get();
	cin.get(sukunimi, 30);
	cout << "Anna koulumatkasi kilometrein�" << endl;
	cin >> (float)koulumatka;
	cout << "Anna osoitteesi" << endl;
	cin.get();
	cin.get(osoite, 30);
	cout << "Anna postinumerosi" << endl;
	cin.get();
	cin.get(postinumero, 10);
	cout << "Koko nimesi on: " << etunimet << " " << sukunimi << endl;
	cout << "Osoitteesi on: " << osoite << endl;
	cout << "Postinumerosi on: " << postinumero << endl;
	cout << "Keng�nnumerosi ja koulumatkasi ovat: " << keng�nnumero <<" "<< (float)koulumatka << " Km"<<endl;

}