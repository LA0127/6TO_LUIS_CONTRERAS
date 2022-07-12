#include<iostream>
#include<stdlib.h>
using namespace std;
struct nodo{
	string nombre;
	int t_cuenta;
	int ing_cant;
	struct nodo *siguiente;
};

struct cola{
	nodo *delante;
	nodo *atras;
};

//crear nodo
struct nodo *crearNodo(string x, int pri, int depo){
	struct nodo *nuevoNodo = new(struct nodo);
	nuevoNodo->nombre = x;
	nuevoNodo->t_cuenta = pri;
	nuevoNodo->ing_cant= depo;
	return nuevoNodo;
}

void encolar(struct cola &q, string valor, int t_cuenta, int ing_cant){
	//auxiliar para mover el lado
	struct nodo *aux = crearNodo(valor, t_cuenta, ing_cant);
	aux->siguiente = NULL;
	
	if(q.delante == NULL){
		//primero en encolar
		q.delante = aux;
	}else{
		(q.atras)-> siguiente = aux;
	}
	//siempre apuntar al final
	q.atras = aux;
}

//mostrar la cola
void mostrarCola(struct cola q){
	struct nodo *aux;
	aux = q.delante;
	cout<<"\n\t\t\t\tCola de Clientes\n";
	cout<<"\n\t\t Clientes"<<"\t Tipo de cuenta"<<"\t Deposito\n";
	while(aux!=NULL){
		cout<<"\t\t "<<aux->nombre<<"\t\t "<<aux->t_cuenta<<"\t\t $"<<aux->ing_cant<<"\n\n";
		aux = aux->siguiente;
	}
}

//definir una prioridaad criterio 0

void ordenarPrioridad(struct cola &q){
	//burbuja
	struct nodo *aux1, *aux2;
	int p_aux;
	string c_aux;
	
	//aux1 cola nombres
	aux1 = q.delante;
	
	while(aux1->siguiente != NULL){
		//comparar aux1 con aux2
		aux2 = aux1->siguiente;
		
		while(aux2 != NULL){
			
			if(aux1->t_cuenta > aux2->t_cuenta){
				p_aux = aux1->t_cuenta;
				c_aux = aux1->nombre;
				
				aux1->t_cuenta = aux2->t_cuenta;
				aux1->nombre = aux2->nombre;
				
				aux2->t_cuenta = p_aux;
				aux2->nombre = c_aux;
			}
			aux2 = aux2->siguiente;
		}
		aux1 = aux1->siguiente;
	}
}

void insertar(struct cola &q, string turno, int t_cuenta, int ing_cant){
	encolar(q,turno,t_cuenta,ing_cant);
	ordenarPrioridad(q);
}

void menu(){
	cout<<"\t\t\t\tClientes\n";
	cout<<"\t\t 1.Asignar Turno\n";  
	cout<<"\t\t 2.Mostrar Clientes\n";
	cout<<"\t\t 3.Salir\n";
	cout<<"\t\t Opcion: ";
}

int main(){
	struct cola q;
	q.delante = NULL;
	q.atras  = NULL;
		
	string turno; //caracter a encolar
	int t_cuenta, deposito, ing_cant; //prioridad
	int op; //op menu
	int x; // para pop
	
	do{
		menu();
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"\n\t\t Nombre: ";
				cin>>turno;
				cout<<"\n\t\t Tipo de cuenta?";
                cout << "\n\t\t 1.- VIP\n\t\t 2.- Empresarial\n\t\t 3.- Normal\n\t\t 4.- Sin cuenta\n\t\t Opcion: ";
                cin>>t_cuenta;
				cout<<"\n\t\t Realizar un Deposito?\n\t\t 1)Si\n\t\t 2)No \n\t\t Opcion: ";
				cin>>deposito;
				if(deposito>=2){
					cout<<"\n\t\t No Deposito.";
				}else{
					cout<<"\n\t\t Cantidad a Depositar: ";
					cin>>ing_cant;
				}
				
				insertar(q, turno, t_cuenta, ing_cant);
				
				cout<<"\n\t\t Cliente: "<<turno<<" en cola\n";
			break;
			
			case 2:
				if(q.delante!=NULL){
					cout<<"\n\t\t Mostrar cola\n";
					mostrarCola(q);
				}else{
					cout<<"\n\t\t Cola Vacia\n";
				}
			break;
			
			default:
				cout<<"\n\t\t Hasta luego...\n";
				system("pause");
				exit(0);
		}
		system("pause");
		system("cls");
	}while(op!=2);
	return 0;
}
