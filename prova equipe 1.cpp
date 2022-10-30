#include <iostream>
#include <locale.h>
using namespace std;

struct alunos{
   string nome;
   int idade;
   char sexo;	
};

struct equipes0{
	alunos aluno[3];
	string nomeequipe0;
	int contaaluno0;
};

struct equipes1{
	alunos aluno1[3];
	string nomeequipe1;
	int contaaluno1;
};

int contarequipe0(int a){
    int c=0;
	c+=a;
	return c;
}

int contarequipe1(int b){
	int d=0;
	d+=b;
	return d;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"portuguese");
	equipes0 equipe0[100];
	equipes1 equipe1[100];
	int op,opequipe,contaequipe0=0,contaequipe1=0,opcate,a=0,b=0;
	do{
	 cout<<"   MENU   "<<endl;
	 cout<<"1- Cadastrar equipes"<<endl;
	 cout<<"2- Informações das equipes"<<endl;	
	 cout<<"3- Nomes das equipes opor categoria"<<endl;
	 cout<<"4- Quantidade de equipes cadastradas"<<endl;
	 cout<<"5- Sair"<<endl;
	 cin>>op;
     if(op==1){
		 cout<<"  Cadastro de equipes  "<<endl;
		 cout<<"Equipe iniciante(0) ou experiente(1): ";
		 cin>>opequipe;
		 if(opequipe==0){
			 cout<<"  Equipe iniciante  "<<endl;
			 cout<<"Nome da equipe: ";
			 cin>>equipe0[contaequipe0].nomeequipe0;
			 for(int i=0;i<4;i++){
				 cout<<"Nome do aluno: ";
				 cin>>equipe0[contaequipe0].aluno[i].nome;
				 cout<<"Idade do aluno: ";
				 cin>>equipe0[contaequipe0].aluno[i].idade;
			     cout<<"Sexo do aluno: ";
			     cin>>equipe0[contaequipe0].aluno[i].sexo;
			 }
			 a=a+1;
             contarequipe0(a);
			 contaequipe0++;
		 }
		 if(opequipe==1){
			 cout<<"  Equipe experiente  "<<endl;
			 cout<<"Nome da equipe: ";
			 cin>>equipe1[contaequipe1].nomeequipe1;
			 for(int i=0;i<4;i++){
			 	cout<<"Nome do aluno: ";
				 cin>>equipe1[contaequipe1].aluno1[i].nome;
				 cout<<"Idade do aluno: ";
				 cin>>equipe1[contaequipe1].aluno1[i].idade;
			     cout<<"Sexo do aluno: ";
			     cin>>equipe1[contaequipe1].aluno1[i].sexo;				 
			 }
			 b=b+1;
			 contarequipe1(b);
			 contaequipe1++;
		 }
		 if((opequipe!=0)&&(opequipe!=1)){
			 cout<<"Opção inválida, tente novamente."<<endl<<endl;
		 }
	 }
	 if(op==2){
		 if(contaequipe0==0){
			 cout<<"Nenuma equipe iniciante cadastrada."<<endl<<endl;
		 }
		 else{
			 for(int i=0;i<contaequipe0;i++){
				 cout<<"Nome da equipe: "<<equipe0[i].nomeequipe0<<endl<<endl;
				 for(int j=0;j<4;j++){
					 cout<<"Nome do aluno: "<<equipe0[i].aluno[j].nome<<endl;
					 cout<<"Idade do aluno: "<<equipe0[i].aluno[j].idade<<endl;
					 cout<<"Sexo do aluno: "<<equipe0[i].aluno[j].sexo<<endl;
				 }
			 }
		 }
		 cout<<"    "<<endl;
		 if(contaequipe1==0){
			 cout<<"Nenuma equipe experiente cadastrada."<<endl<<endl;
		 }
		 else{
			 for(int i=0;i<contaequipe1;i++){
				 cout<<"Nome da equipe: "<<equipe1[i].nomeequipe1<<endl<<endl;
				 for(int j=0;j<4;j++){
					 cout<<"Nome do aluno: "<<equipe1[i].aluno1[j].nome<<endl;
					 cout<<"Idade do aluno: "<<equipe1[i].aluno1[j].idade<<endl;
					 cout<<"Sexo do aluno: "<<equipe1[i].aluno1[j].sexo<<endl;
				 }			 
		 }
	   }
	 }
	 if(op==3){
		 cout<<"Ver o nome das equipes de qual categoria: 0 ou 1 "<<endl;
		 cin>>opcate;
		 if(opcate==0){
		 	if(contaequipe0>0){
		 	cout<<" Categoria iniciantes "<<endl;
			 for(int i=0;i<contaequipe0;i++){
				 cout<<"Nome da equipe: "<<equipe0[i].nomeequipe0<<endl;
			 }
		   }
		   else{
			   cout<<"Nenhuma equipe iniciante cadastrada."<<endl<<endl;
		   }
		 }
		 if(opcate==1){
		 	if(contaequipe1>0){
			  cout<<" Categoria experiente "<<endl;
			  for(int i=0; i<contaequipe1;i++){
				 cout<<"Nome da equipe: "<<equipe1[i].nomeequipe1<<endl;
			 }
		   }
		   else{
			   cout<<"Nenhuma equipe experiente cadastrada."<<endl<<endl;
		   }
		 }
		 if((opcate!=0)&&(opcate!=1)){
			 cout<<"Opção inválida, tente novamente."<<endl<<endl;
		 }
      cout<<"   "<<endl;
	 }
	 if(op==4){
		 cout<<"Total de equipes iniciantes: "<<contarequipe0(a)<<endl;
		 cout<<"Total de equipes experientes: "<<contarequipe1(b)<<endl<<endl;
	 }
	 if((op!=1)&&(op!=2)&&(op!=3)&&(op!=4)&&(op!=5)){
		 cout<<"Opção inválida, tente novamente"<<endl<<endl;
	 }
	}while (op!=5);
	
	return 0;
}