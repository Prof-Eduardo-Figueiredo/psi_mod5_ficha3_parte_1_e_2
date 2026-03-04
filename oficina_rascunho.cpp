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



char menu_clientes(){
	system("cls");
	char op;
	cout<<"\n\n=============== MENU PRINCIPAL ==================\n\n";
	cout<<"1 - Inserir novo cliente\n";
	cout<<"2 - Mostrar todos os clientes\n";
	cout<<"3 - Eliminar um cliente\n";
	cout<<"4 - Procurar cliente por código e mostrar a sua informação\n";
	cout<<"5 - Procurar cliente por número de tlm e mostrar a sua informação\n";
	cout<<"6 - Ordenar por processo\n";
	cout<<"7 - Ordenar por nome\n";
	cout<<"S - SAIR\n";
	cout<<"\n=================================================\n\n";
	cout<<"Insira a sua opção:\n";
	cin>>op; 
	op = toupper(op);
	switch (op) {
		case '1':
			menu_clientes();
			break;
		case '2':
			//completar
			break;
		//... completar com mais case
		
		default:
			cout<<"\n\nOpção errada!\n\n";
			break;
	}
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
