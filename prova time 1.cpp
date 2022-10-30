#include <iostream>
#include <locale.h>
using namespace std;

struct jogadores{
	string nome;
	int idade;
};
struct times1{
	jogadores jogador;
};
struct times2{
	jogadores jogador;
};

string contamedia(int soma,int soma2,int a,int b){
    float total1=0,total2=0;
    total1=soma/a;
    total2=soma2/b;
    if (total1<total2){
		return "Time 1";
	}
	if (total2<total1){
		return "Time 2";
	}
	else{
		return "Time 1 e Time 2";
	}
}

int main(int argc, char** argv)
{
	setlocale (LC_ALL, "portuguese");
    times1 time1[11];
    times2 time2[11];
    int op,optime,a=0,b=0, soma=0,soma2=0;
	do{
      cout<<"   MENU   "<<endl;
      cout<<"1- Cadastro do jogador"<<endl;
      cout<<"2- Imprimir time por menor média de idade"<<endl;
      cout<<"0- Sair"<<endl;
      cin>>op;
      if(op==1){
		  cout<<"  Cadastro  "<<endl;
		  cout<<"Qual time pertence o jogador: 1 ou 2? ";
		  cin>>optime;
		  if (optime==1){
			  cout<<"  Time 1  "<<endl;
			  cout<<"Nome do jogador: ";
			  cin>>time1[a].jogador.nome;
			  cout<<"Idade do jogador: ";
			  cin>>time1[a].jogador.idade;
			  soma=soma + time1[a].jogador.idade;
  			  a++;
		  }
		  if(optime==2){
			  cout<<"  Time 2  "<<endl;
			  cout<<"Nome do jogador: ";
			  cin>>time2[b].jogador.nome;
			  cout<<"Idade do jogador: ";
			  cin>>time2[b].jogador.idade;
			  soma2=soma2 + time2[b].jogador.idade;
			  b++;		  
		  }
		  if((optime!=1)&&(optime!=2)){
			  cout<<"Opção inválida, tente novamente."<<endl<<endl;
		  }
	  }
	  if(op==2){
	  	cout<<"Time com a menor média: "<<endl;
        cout<<contamedia(soma,soma2,a,b)<<endl<<endl;
	  }
	  if((op!=1)&&(op!=2)&&(op!=0)){
		  cout<<"Opção inválida, tente novamente."<<endl<<endl;
	  }
	}while(op!=0);
	return 0;
}