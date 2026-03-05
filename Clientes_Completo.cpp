#include <iostream>
#include <string.h>

using namespace std;

/******************************************************************
*       MACROS, ESTRUTURAS, VARS GLOBAIS, VETORES GLOBAIS         *
*******************************************************************/
#define MAX 100

struct Cliente{
	string nome;
	int cod_cliente;
	string tlm;
};

Cliente c[MAX] {	{ "Joana Silva" , 12500 , "910200444" },
					{ "Luísa Santos" , 13000, "969223114" },
					{ "José Sousa" , 15877, "930555999" },
					{ "Ana Lopes" , 11200, "960999444" },
					{ "Teresa Cruz" , 87666, "912666555" },
					{ "Vera Cunha" , 12600, "932444999" },
					{ "Joana Pinto" , 13005, "930777888" },
					{ "Adelaide Castro" , 15800, "925777444" },
					{ "Augusto Dias" , 19666, "92587412" },
					{ "Clara Sousa" , 20500, "931222666" }
				};

int n_clientes = 10;
/******************************************************************
*                           CLIENTES                              *
*******************************************************************/

//         Inserir aqui todas as funções de clientes
void mostrar_clientes(){										//OPÇÃO 2
	system("cls");
	cout<<"============ LISTA DE CLIENTES ============\n\n";
	for(int i=0; i<n_clientes;i++){
		cout<<c[i].cod_cliente<<"  /  "<<c[i].nome<<"  /  "<<c[i].tlm<<endl;
	}
	cout<<"\n===========================================\n\n";
}

void mostrar_cliente_por_codigo (int codigo){					//OPÇÃO 4
	system("cls");
	bool flag = false;
	cout<<"\n\n===== Consulta cliente por código ======\n\n";
	for(int i=0; i<n_clientes;i++){
		if(c[i].cod_cliente == codigo){
			cout<<c[i].cod_cliente<<"  /  "<<c[i].nome<<"  /  "<<c[i].tlm<<endl;
			flag = true;
		}
	}
	if(flag==false)
		cout<<"\n\nCliente não existe\n\n";
	cout<<"\n\n========================================\n\n";
}

bool existe(int codigo){
	for(int i=0; i<n_clientes; i++){
		if(c[i].cod_cliente == codigo)
			return true;
	}
	return false;
}

bool novo_cliente(string nome, int codigo, string telemovel){	//OPÇÃO 1
	if(existe(codigo)==false){
		c[n_clientes].nome = nome;
		c[n_clientes].cod_cliente = codigo;
		c[n_clientes].tlm = telemovel;
		n_clientes++;
		return true;
	}else{
		return false;
	}
}

bool eliminar_cliente_por_codigo(int codigo){					//OPÇÃO 3
	for(int i=0; i<n_clientes; i++){
		if(c[i].cod_cliente == codigo){
			for(int j=i; j<n_clientes-1; j++)
				c[j]=c[j+1];
			n_clientes--;
			return true;
		}
	}
	return false;
}

void mostrar_cliente_por_tlm (string telemovel){				//OPÇÃO 5
	system("cls");
	bool flag = false;
	cout<<"\n\n==== Consulta cliente por telemóvel =====\n\n";
	for(int i=0; i<n_clientes;i++){
		if(c[i].tlm == telemovel){
			cout<<c[i].cod_cliente<<"  /  "<<c[i].nome<<"  /  "<<c[i].tlm<<endl;
			flag = true;
		}
	}
	if(flag==false)
		cout<<"\n\nCliente não existe\n\n";
	cout<<"\n\n=========================================\n\n";
}

void ordenar_clientes_por_codigo(){								//OPÇÃO 6
	for(int i=0; i<n_clientes-1; i++)
		for(int j=i; j<n_clientes; j++)
			if(c[i].cod_cliente > c[j].cod_cliente){
				Cliente aux = c[i];
				c[i] = c[j];
				c[j] = aux;
			}
}

void ordenar_clientes_por_nome(){								//OPÇÃO 7
	for(int i=0; i<n_clientes-1; i++)
		for(int j=i; j<n_clientes; j++)
			if(c[i].nome > c[j].nome){
				Cliente aux = c[i];
				c[i] = c[j];
				c[j] = aux;
			}
}

char menu_clientes(){
	system("cls");
	int codigo;						//para passar para as funções
	string nome, telemovel; 		//para passar para as funções
	char op;						//para ler a opção no menu
	cout<<"\n\n================== MENU PRINCIPAL ==================\n\n";
	cout<<"1 - Inserir novo cliente\n";
	cout<<"2 - Mostrar todos os clientes\n";
	cout<<"3 - Eliminar um cliente\n";
	cout<<"4 - Procurar cliente por código e mostrar a sua informação\n";
	cout<<"5 - Procurar cliente por número de tlm e mostrar a sua informação\n";
	cout<<"6 - Ordenar por código\n";
	cout<<"7 - Ordenar por nome\n";
	cout<<"S - SAIR\n";
	cout<<"\n======================================================\n\n";
	cout<<"Insira a sua opção:\n";
	cin>>op; 
	op = toupper(op);	
	system("cls");
	cin.ignore();
	switch (op) {
		case '1':
			system("cls");
			cout<<"\n\n============ Novo cliente: ============\n\n";
			cout<<"Nome do cliente a inserir: ";
			getline(cin,nome);
			cout<<"Código do cliente a inserir: ";
			cin>>codigo;
			cin.ignore();
			cout<<"Tlm do cliente a inserir: ";
			getline(cin,telemovel);
			cout<<"\n\n=======================================\n\n";
			if(novo_cliente(nome,codigo,telemovel)==true)
				cout<<"\n\nSUCESSO: Novo cliente adicionado.\n";
			else
				cout<<"\n\nERRO: Não foi possível adicionar.\n";
			break;
		case '2':
			mostrar_clientes();
			break;
		case '3':
			cout<<"\n\n============ Eliminar cliente ============\n\n";
			cout<<"Qual o código do cliente a eliminar: ";
			cin>>codigo;
	
			if(eliminar_cliente_por_codigo(codigo)==true)
				cout<<"\n\nCliente "<<codigo<<" eliminado com sucesso\n";
			else
				cout<<"\n\nERRO: Não foi possível adicionar\n";
			cout<<"\n\n=======================================\n\n";
			break;
		case '4':
			cout<<"\n\nInsira o código a procurar: ";
			cin>>codigo; system("cls");
			mostrar_cliente_por_codigo(codigo);
			break;
		case '5':
			cout<<"\n\nInsira o telemóvel a procurar: ";
			cin>>telemovel; system("cls");
			mostrar_cliente_por_tlm(telemovel);
			break;
		case '6':
			ordenar_clientes_por_codigo();
			break;
		case '7':
			ordenar_clientes_por_nome();
			break;
		default:
			cout<<"\n\nOpção errada!\n\n";
			break;
	}
	system("pause");
	return op;
}
/******************************************************************
*                           PRODUTOS                              *
*******************************************************************/

//         Inserir aqui todas as funções de clientes

//         Inserir aqui todas a função menu_produtos()


/******************************************************************
*                           ENCOMENDAS                            *
*******************************************************************/

//         Inserir aqui todas as funções de encomendas

//         Inserir aqui todas a função menu_encomendas()


/******************************************************************
*              MENU PRINICPAL E FUNÇÃO MAIN()                     *
*******************************************************************/
char menu_principal(){
	system("cls");
	char op;
	cout<<"\n\n=============== MENU PRINCIPAL ==================\n\n";
	cout<<"1 - CLIENTES\n";
	cout<<"2 - PRODUTOS\n";
	cout<<"3 - ENCOMENDAS\n";
	cout<<"S - SAIR\n";
	cout<<"\n=================================================\n\n";
	cout<<"Insira a sua opção:\n";
	cin>>op; 
	op = toupper(op);
	switch (op) {
		case '1':
			while(menu_clientes()!='S');
			break;
		case '2':
			//menu_produtos();
			break;
		case '3':
			//menu_encomendas();
			break;
		default:
			cout<<"\n\nOpção errada!\n\n";
			break;
	}
	return op;
}


int main(){
	setlocale(LC_ALL,"portuguese");
	system("color 02");
	char op;
	while(menu_principal() != 'S');
	return 0;
}
