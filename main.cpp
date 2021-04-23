#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int menu=0;
	while(menu != 4) {
		cout<<"Bienvenido "<<endl;
		cout<<"1.Ajedrez"<<endl;
		cout<<"2.Sumatoria"<<endl;
		cout<<"3.Raiz en iteracion"<<endl;
		cout<<"4.Salir"<<endl;
		cout<<"Eliga una opcion: ";
		cin>>menu;


		if(menu==1) {
			int n = 0;
			cout<<"Ingrese un numero:";
			cin>>n;

			for(int i = 0; i<n; i++) {
				for(int j = 0; j<n; j++) {
					if(i%2 == 0) {

						if(j%2== 0) {
							cout<<"0 ";
						} else {
							cout<<"1 ";
						}


					} else {
						if(j%2== 0) {
							cout<<"1 ";
						} else {
							cout<<"0 ";
						}
					}

				}

				cout<<endl;
			}
			cout<<endl;
		}//fin if 1;

		if(menu == 2) {
			int n = 0;
			int aux = 0;
			cout<<"Ingrese un numero positivo: ";
			cin>>n;
			while(n<0) {
				cout<<"Ingrese un valor para n que sea positivo: ";
				cin>>n;
			}
			for(int i = 0; i <= n; i++) {
				aux +=2*i*(i-1);
			}
			cout<<"El total de la sumatoria es: "<<aux<<endl;


		}//fin if 2;
		if(menu == 3) {
			double n = 0.0;
			int t = 0;
			double mitad = 0.0;
			double inicio = 0.0;
			
			cout<<"Ingrese n: ";
			cin>> n;
			double final = n;
			cout<<"Ingrese un numero entero mayor a 10 para t: ";
			cin>>t;
			while(t<=10) {
				cout<<"Ingrese un valor para n que sea positivo: ";
				cin>>t;
			}
			for(int i = 0; i<t; i++) {
				cout<<"Iteracion "<<i+1<<" Final = "<<final<<", ";

				mitad = (inicio + final)/2.0;

				cout<<"Mitad = "<<mitad<<", ";
			
				cout<<"inicio = "<<inicio<<", "<<mitad<<" * "<<mitad<<" = "<<mitad*mitad;


				if(mitad*mitad > n) {
					cout<<", "<<mitad*mitad<<" > "<<n<<endl;
					final = mitad;

				} 
				if(mitad*mitad<n){
					cout<<", "<<mitad*mitad<<" < "<<n<<endl;
					inicio = mitad;
				}
				if(mitad*mitad == n ) {
					cout<<endl;
					cout<<"La raiz es: "<<mitad<<endl;
					break;
				}

			}
			if(mitad*mitad != n) {	
				cout<<"La aproximacion es : "<<mitad<<endl;
			}
			//cout<<"La raiz es: "<<mitad<<endl;

		}
	}// fin while menu




	return 0;
}