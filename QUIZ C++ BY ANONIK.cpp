#include <iostream>

//Creato da Nicholas Impieri

using namespace std;

//Codice sorgente versione 0.1.1

int main()

//Per informazioni impieri.nicholas@gmail.com

{
	
	int x,y,z,w;
	cout<<"              QUIZ IN C + + BY ANONIK"<<endl;
	cout<<endl;
	system ("pause");
	cout <<endl;
	cout<<"            quale fu' la prima capitale di Italia? " <<endl;
	cout<<endl;
	cout<<"1)ROMA"<<endl;
	cout<<endl;
	cout<<"2)TORINO"<<endl;
	cout<<endl;
	cout<<"3)FIRENZE"<<endl;
	cout<<endl;
	cout<<"4)SALERNO"<<endl;
	cout<<""<<endl;
	
	cin>>x;
	cout<<endl;
	
	switch(x){
		
		case(1):
			cout<<"SBAGLIATO"<<endl;
			break;
			
			case(2):
				cout<<"ESATTO"<<endl;
				break;
				
				case(3):
					cout<<"SBAGLIATO"<<endl;
					break;
					
					case(4):
						cout<<"SBAGLIATO"<<endl;
						break;
						
						default:
							cout<<"ERRORE IL NUMERO NON CORRISPONDE A NESSUNA RISPOSTA"<<endl;
							break;
			
	}
	cout <<""<<endl;
	cout<<"              Seconda Domanda"<<endl;
	cout<<""<<endl;
	cout<<"       A quale data corrisponde l'uscita del primo iphone"<<endl;
	cout<<""<<endl;
	cout<<"1)9 GENNAIO 2007"<<endl;
	cout<<endl;
	cout<<"2)16 DICEMBRE 2008"<<endl;
	cout<<endl;
	cout<<"3)8 GIUGNO 2009"<<endl;
	cout<<endl;
	cout<<"4)4 OTTOBRE 2007"<<endl;
	cout<<""<<endl;
	
	cin>>y;
	cout<<endl;
	
	switch(y){
		
		case(1):
			cout<<"ESATTO"<<endl;
			break;
			
			case(2):
				cout<<"SBAGLIATO"<<endl;
				break;
				
				case(3):
					cout<<"MA SEI SERIO??"<<endl;
					break;
					
					case(4):
						cout<<"CI SEI ANDATO VICINO"<<endl;
						
						default:
							cout<<"ERRORE IL NUMERO INSERITO NON CORRISPONDE A NESSUNA RISPOSTA"<<endl;
							break;
	}
	cout<<""<<endl;
	cout<<"          TERZA DOMANDA"<<endl;
	cout<<endl;
	cout<<"    Quando e' stato fondato YouTube? "<< endl;
	cout<<""<<endl;
	cout<<"1)14 MARZO 2006"<<endl;
	cout<<endl;
	cout<<"2)17 OTTOBRE 2005"<<endl;
	cout<<endl;
	cout<<"3)24 FEBBRAIO 2009"<<endl;
	cout<<endl;
	cout<<"4)1 GENNAIO 2007"<<endl;
	cout<<endl;
	cout<<"5)4 FEBBRAIO 2005"<<endl;
	cout<<""<<endl;
	
	cin>>z;
	cout<<endl;
	
	switch(z){
		
		case(1):
			cout<<"SBAGLIATO"<<endl;
			break;
			
			case(2):
				cout<<"SBAGLIATO"<<endl;
				break;
				
				case(3):
					cout<<"SBAGLIATO"<<endl;
					break;
					
					case(4):
						cout<<"SBAGLIATO"<<endl;
						break;
						
						case(5):
							cout<<"ESATTO"<<endl;
							break;
							
							default:
								cout<<"ERRORE IL NUMERO INSERITO NON CORRISPONDE A NESSUNA RISPOSTA"<<endl;
								break;
	}
	cout<<"Congratulazioni hai superato il quiz"<<endl;
	
system ("pause");

return 0;
}
