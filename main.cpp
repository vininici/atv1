#include <iostream>
using namespace std;
void ler_vetores(int v1[], int v2[], int tam){
  for(int i = 0; i < 5; i++){
    cout<<"Digite um valor para o primeiro vetor: ";
    cin>>v1[i];
    cout<<"Digite um valor para o segundo vetor: ";
    cin>>v2[i];
  }
}
void soma_vetores(int v1[], int v2[],int v3[], int tam){
  for(int i = 0; i < 5; i++){
    v3[i] = v1[i] + v2[i];
    cout<<v3[i]<<endl;
  }
}
int main(){
  const int tam = 5;
  int v1[tam], v2[tam], v3[tam];
  ler_vetores(v1, v2, tam);
  soma_vetores(v1, v2, v3, tam);

}