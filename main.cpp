#include <iostream>
#include<locale>
using namespace std;
  struct cliente{
   string nome,cpf,sexo;
   int idade;
   float cred;
  };

int main() {
  setlocale(LC_ALL,"portuguese");
  int a, b=0, conta=0;
  float credito;
  string d, sex;
  cliente c[50];
  do{
      cout<<"Escolha sua op��o:"<<endl;
      cout<<"1- Cadastrar cliente."<<endl;
      cout<<"2- Lista dos clientes cadastrados."<<endl;
      cout<<"3- Lista dos clientes com cr�dito maior,menor ou igual ao digitado."<<endl;
      cout<<"4- Lista dos clientes por sexo."<<endl;
      cout<<"5- Sair."<<endl;
      cin>>a;
       if (a==1)
         {
            cout<<"Digite o nome do cliente:"<<endl;
            cin>>c[b].nome;
            cout<<"Digite o cpf do cliente"<<endl;
            cout<<"Exemplo: 000.000.000-00"<<endl;
            cin>>c[b].cpf; 
            cout<<"Digite o sexo do cliente"<<endl;
            cout<<"f- para feminino/ m- para masculino/ x- n�o-bin�rio"<<endl;
            cin>>c[b].sexo;   
            cout<<"Digite a idade do cliente"<<endl;  
            cin>>c[b].idade;
            cout<<"Digite o cr�dito do cliente"<<endl;
            cin>>c[b].cred;  
            b+=1 ;
         }
        if (a==2){
          if (b==0){
            cout<<"N�o possui cadastro\n";
          }
          else{
            for (int i=0; i<b; i++){
              cout<<"Nome: "<<c[i].nome<<endl;
              cout<<"CPF: "<<c[i].cpf<<endl;
              cout<<"Sexo: "<<c[i].sexo<<endl;
              cout<<"Idade: "<<c[i].idade<<endl;
              cout<<"Cr�dito: "<<c[i].cred<<endl<<endl;
            }
          }
        }
        if(a==3){
          if(b==0){
            cout<<"N�o possui cadastro\n";
          }
          else{
           cout<<"Digite seu cr�dito para compararmos.\n";
           cin>>credito;
           cout<<"Voc� deseja comparar com um cr�dito maior, menor ou igual?\n";
           cin>>d;
            if ((d=="maior")||(d=="Maior")||(d=="MAIOR")){
              for(int i=0; i<b; i++){
                if(credito<c[i].cred){
                  cout<<"Nome do cliente e seu cr�dito maior que o digitado:\n";               
                  cout<<c[i].nome << "  -  "<< c[i].cred<<endl;
                  conta+=1;
                }
               }
              if (conta==0){
                cout<<"N�o possui cr�dito maior"<<endl<<endl;
              }
              }                        
            if ((d=="menor")||(d=="Menor")||(d=="MENOR")){
              for(int i=0; i<b; i++){
                if(credito>c[i].cred){
                    cout<<"Nome do cliente e seu cr�dito menor que o digitado:\n";            
                    cout<<c[i].nome << "  -  "<< c[i].cred<<endl;
                    conta+=1;
                     }
                  }
                  if(conta==0){
                    cout<<"N�o possui cr�dito menor"<<endl<<endl;
                  }
                 }
              if ((d=="igual")||(d=="Igual")||(d=="IGUAL")){
                  for(int i=0; i<b; i++){
                    if(credito==c[i].cred){
                      cout<<"Nome do cliente e seu cr�dito igual que o digitado:\n";               
                      cout<<c[i].nome << "  -  "<< c[i].cred<<endl;
                      conta+=1;
                    }
                  }
                  if(conta==0){
                    cout<<"N�o possui cr�dito igual"<<endl<<endl;
                  }
                }
             }
          }
      credito=0;
      conta=0;      
      if(a==4){
        if(b==0){
          cout<<"N�o possui cadastro\n";
        }
        else{
         cout<<"Digite um cr�dito\n";
         cin>>credito;
         cout<<"Digite o sexo que deseja comparar o cr�dito.\n";
         cout<<"f- feminino/ m- masculino/ x- n�o-bin�rio\n";
         cin>>sex;
         if ((sex=="f")||(sex=="F")){
           for(int i=0; i<b; i++){
             if(sex==c[i].sexo){
               if(credito<c[i].cred){
                 cout<<"Nome   Sexo   Cr�dito Maior\n";
                 cout<<c[i].nome<<"  "<<c[i].sexo<<"  "<<c[i].cred<<endl;
                 conta+=1;
               }                
               if(credito>c[i].cred){
                 cout<<"Nome   Sexo   Cr�dito Menor\n";
                 cout<<c[i].nome<<"  "<<c[i].sexo<<"  "<<c[i].cred<<endl;
                 conta+=1;
               }                
               if(credito==c[i].cred){
                 cout<<"Nome   Sexo   Cr�dito Igual\n";
                 cout<<c[i].nome<<"  "<<c[i].sexo<<"  "<<c[i].cred<<endl;
                 conta+=1;
                }
             }
           }
           if (conta==0){
             cout<<"N�o possui cadastro no g�nero feminino."<<endl<<endl;
           }
         }
         if ((sex=="m")||(sex=="M")){
          for(int i=0; i<b; i++){
             if(sex==c[i].sexo){
               if(credito<c[i].cred){
                 cout<<"Nome   Sexo   Cr�dito Maior\n";
                 cout<<c[i].nome<<"  "<<c[i].sexo<<"  "<<c[i].cred<<endl;
                 conta+=1;
               }                
               if(credito>c[i].cred){
                 cout<<"Nome   Sexo   Cr�dito Menor\n";
                 cout<<c[i].nome<<"  "<<c[i].sexo<<"  "<<c[i].cred<<endl;
                 conta+=1;
               }                
               if(credito==c[i].cred){
                 cout<<"Nome   Sexo   Cr�dito Igual\n";
                 cout<<c[i].nome<<"  "<<c[i].sexo<<"  "<<c[i].cred<<endl;
                 conta+=1;
               }
             }
           }
           if (conta==0){
             cout<<"N�o possui cadastro no g�nero masculino."<<endl<<endl;
           }
        }
          if ((sex=="x")||(sex=="X")){
           for(int i=0; i<b; i++){
             if(sex==c[i].sexo){
               if(credito<c[i].cred){
                 cout<<"Nome   Sexo   Cr�dito Maior\n";
                 cout<<c[i].nome<<"  "<<c[i].sexo<<"  "<<c[i].cred<<endl;
                 conta+=1;
               }                
               if(credito>c[i].cred){
                 cout<<"Nome   Sexo   Cr�dito Menor\n";
                 cout<<c[i].nome<<"  "<<c[i].sexo<<"  "<<c[i].cred<<endl;
                 conta+=1;
               }                
               if(credito==c[i].cred){
                 cout<<"Nome   Sexo   Cr�dito Igual\n";
                 cout<<c[i].nome<<"  "<<c[i].sexo<<"  "<<c[i].cred<<endl;
                 conta+=1;
               }
             }
           }
           if(conta==0){
             cout<<"N�o existe cadastro no g�nero n�o-bin�rio."<<endl<<endl;
           }
         }
       }
      } 
      credito=0;
      if((a!=1)&&(a!=2)&&(a!=3)&&(a!=4)&&(a!=5)){
        cout<<"Op��o inv�lida."<<endl<<endl;
      }   
  }while (a!=5);
  }
