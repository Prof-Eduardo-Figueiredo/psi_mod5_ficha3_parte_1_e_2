#include <iostream>
#include <string>

using namespace std;

/************************************************/
/*  CLIENTES - ESTRUTURAS e VARIÁVEIS GLOBAIS   */
/************************************************/
const int MAX_CLIENTES =20;

struct Cliente{
	int idCliente;
	string nome;
	string email;
	string tlm;
};

Cliente clientes[MAX_CLIENTES] = {
					{1,"Teresa Silva","teresampsilva@gmail.com","912785423"},
					{2,"Pedro Pinto","rpinto@outlook.com","934254713"},
					{3,"Miguel Castro","mig_castro@sapo.pt","968124637"},
					{4,"Lucinda Sá","lmss@hotmail.com","910604809"},
					{5,"Ana Sousa","ana_sousa@gamail.com","913357788"},
					{6,"Rita Santos","rs@sapo.pt","936789147"},
					{7,"Rui Lopes","ruislopes@hotmail.com","923852456"},
					{8,"Carlos Torres","carlosmt@ctt.com","967258456"}
				};

int num_clientes=8;	 //Var Global - quantos clientes há em cada momento	
	
/************************************************/
/* AUTOMÓVEIS - ESTRUTURAS e VARIÁVEIS GLOBAIS  */
/************************************************/

const int MAX_AUTOS =20;

struct Automovel{
	int idAuto;
	int idCliente;
	string marca;
	string modelo;
	int ano;
	string num_chassi;
};

Automovel autos[MAX_AUTOS] ={
							{1, 7, "Peugeot","308",2020,"28Y9D"},
							{2, 2, "Honda", "Jazz", 2018, "97P4T"},
							{3, 6, "Audi", "A3", 2019, "55FK8"},
							{4, 3, "Seat", "Ibiza", 2020, "H1M78"},
							{5, 2, "Dacia", "Sandero",  2019, "W51S9"},
							{6, 1, "Mercedes", "Classe A", 2017, "J5J91"},
							{7, 4, "Opel", "Corsa",  2015, "4Z4B5"},
							{8, 5, "Toyota", "Corolla HB",  2022, "L4U78"},
							{9, 8, "Citroen", "C4",  2021, "1D83U"},
							{10, 5, "Renault", "Megane",  2016, "3G5R7"}		
						};
						
int num_autos=10;	 //Var Global - quantos clientes há em cada momento	

	
/************************************************/
/*   MENU CLIENTES E TODAS AS SUAS FUNÇÕES      */
/************************************************/
//OPÇÃO 1
int novo_cliente(){
	system("cls");
	cout<<"\n\n====== NOVO CLIENTE ======\n\n";
	// CONSTRUIR ESTA FUNÇÃO
	// . . .
	system("pause");
}

//OPÇÃO 2
void mostra_todos_clientes(){
	system("cls");
	cout<<"\n\n====== TODOS OS CLIENTES ======\n\n";
	// CONSTRUIR ESTA FUNÇÃO
	// . . .
	system("pause");
}

//OPÇÃO 3 DO MENU CLIENTES
void mostra_cliente(int id){
	system("cls");
	cout<<"\n\n====== CLIENTE POR ID ======\n\n";
	// CONSTRUIR ESTA FUNÇÃO
	// . . .
	system("pause");
}

int menu_clientes(){
	int opcao;
	do{
		system("cls");
		cout<<"\n\n";
		cout<<" =================== MENU CLIENTES ===================\n\n";
		cout<<"\t 1 - Inserir novo cliente\n";
		cout<<"\t 2 - Ver todos os clientes\n";
		cout<<"\t 3 - Mostrar dados de um cliente pelo código\n";
		cout<<"\n\t 0 - Sair\n\n";
		cout<<" =====================================================\n\n";
		cout<<" Opção: "; cin>>opcao;
		switch (opcao){
			case 1:
				novo_cliente();
				break;
			case 2:
				mostra_todos_clientes();
				break;
			case 3:
				system("cls");
				int id;
				cout<<"\n\n Insira o id de cliente a procurar: ";cin>>id; cin.ignore();
				mostra_cliente(id);
				break;
			default:
				if(opcao!=0){
					cout<<"\n\n Opção errada.\n Tente de novo.\n\n";
					system("pause");
				}
				break;
		}	
	}while(opcao!=0);
	return 0;
}


/************************************************/
/*   MENU AUTOMÓVEIS E TODAS AS SUAS FUNÇÕES    */
/************************************************/
//OPÇÃO 1 DO MENU AUTOMÓVEIS
int novo_auto(){
	system("cls");
	cout<<"\n\n====== NOVO AUTOMÓVEL ======\n\n";
	// CONSTRUIR ESTA FUNÇÃO
	// . . .
	system("pause");
}

//OPÇÃO 2 DO MENU AUTOMÓVEIS
void mostra_todos_autos(){
	system("cls");
	cout<<"\n\n====== TODOS OS AUTOMÓVEIS ======\n\n";
	// CONSTRUIR ESTA FUNÇÃO
	// . . .
	system("pause");
}

//OPÇÃO 3 DO MENU AUTOMÓVEIS
int mostra_autos_cliente(int idCliente){
	system("cls");
	cout<<"\n\n====== AUTOMÓVEL POR ID ======\n\n";
	// CONSTRUIR ESTA FUNÇÃO
	// . . .
	system("pause");
}


int menu_automoveis(){
	int opcao;
	do{
		system("cls");
		cout<<"\n\n";
		cout<<" ================== MENU AUTOMÓVEIS ==================\n\n";
		cout<<"\t 1 - Inserir novo automóvel\n";
		cout<<"\t 2 - Ver todos os automóveis\n";
		cout<<"\t 3 - Mostrar dados de um automóvel pelo código\n";
		cout<<"\n\t 0 - Sair\n\n";
		cout<<" =====================================================\n\n";
		cout<<" Opção: "; cin>>opcao;
		switch (opcao){
			case 1:
				novo_auto();
				break;
			case 2:
				mostra_todos_autos();
				break;
			case 3:
				system("cls");
				int id;
				cout<<"\n\n Insira o id de cliente a procurar: ";cin>>id; cin.ignore();
				mostra_autos_cliente(id);
				break;
			default:
				if(opcao!=0){
					cout<<"\n\n Opção errada.\n Tente de novo.\n\n";
					system("pause");
				}
				break;
		}		
	}while(opcao!=0);
	return 0;
}


/************************************************/
/*   MENU PESQUISAS E TODAS AS SUAS FUNÇÕES     */
/************************************************/
//OPÇÃO 1
//Repetida com opção 3 de autovóveis

int menu_pesquisas(){
	int opcao;
	do{
		system("cls");
		cout<<"\n\n";
		cout<<" =================== MENU PESQUISAS ==================\n\n";
		cout<<"\t 1 - Automóveis por idCliente de cliente\n";
		cout<<"\t 2 - Automóveis por tlm de cliente\n";
		cout<<"\t 3 - Automóveis com data matricula <= ano\n";
		cout<<"\t 4 - Automóveis com data matricula >= ano\n";
		cout<<"\t 5 - Automóveis com número de chassis\n";
		cout<<"\n\t 0 - Sair\n\n";
		cout<<" =====================================================\n\n";
		cout<<" Opção: "; cin>>opcao;
		int valor;
		string s;
		switch (opcao){
			case 1:
				system("cls");
				cout<<"\n\n Insira o id de cliente: ";cin>>valor;
				mostra_autos_cliente(valor);
				break;
			case 2:
				//construir este código
				system("pause");
				break;
			case 3:
				//construir este código
				system("pause");
				break;
			case 4:
				//construir este código
				system("pause");
				break;
			case 5:
				//construir este código
				system("pause");
				break;
			default:
				if(opcao!=0){
					cout<<"\n\n Opção errada.\n Tente de novo.\n\n";
					system("pause");
				}
				break;
		}				
	}while(opcao!=0);
	return 0;
}

/************************************************/
/*        MENU PRINCIPAL E  MAIN                */
/************************************************/
int menu_principal(){
	int opcao;
	do{
		system("cls");
		cout<<"\n\n";
		cout<<" ================== MENU PRINCIPAL ==================\n\n";
		cout<<"\t 1 - Menu Clientes\n";
		cout<<"\t 2 - Menu Automóveis\n";
		cout<<"\t 3 - Pesquisas\n";
		cout<<"\n\t 0 - Sair\n\n";
		cout<<" ====================================================\n\n";
		
		cout<<" Opção: "; cin>>opcao;
		switch (opcao) {
				case 1:
					menu_clientes();
					break;	
				case 2:
					menu_automoveis();
					break;
				case 3:
					menu_pesquisas();
					break;
				default:
					if(opcao!=0){
						cout<<"\n\n ERRO: Inseriu uma opção inválida.\n Tente de novo\n\n ";
						system("pause");
					}
				break;
		}
	}while(opcao!=0);
	return 0;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	system("Color F1");
	int opcao;
	do{
		opcao = menu_principal();
	}while(opcao!=0);
	cout<<" Obrigado por usar o programa. Até uma próxima";
	return 0;	
}




