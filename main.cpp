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
		cout<<"Eliga una opción: ";
		cin>>menu;


		if(menu==1) {
			int n = 0;
			cout<<"Ingrese un numero:";
			cin>>n;

			for(int i = 0; i<n; i++) {
				for(int j = 0; j<n; j++) {
					if(i%2 == 0){
					
					if(j%2== 0) {
						cout<<"0 ";
					} else {
						cout<<"1 ";
					}
					
				
				}else{
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
		}

	}

	return 0;
}