 #include <iostream>
 #include <locale.h>
 #include <windows.h> //usar sleep
 //#include <string>
 #include <set>
 //#include <math.h> // necessário para usar pow e sqrt
 using namespace std;




 int main(){
  setlocale(LC_ALL,"");
  cout << "Abrindo GitHub..." << endl;
  Sleep(1400);
  //Abrir no browser o link do GitHub do Mini Kit de c++
  system("start https://github.com/luisrguerra/devcpp-ptbr-mini-kit-cpp");

  cout << "|Mini kit de Dev C++ (Exemplos da biblioteca set) v0.1|" << " Por Luís Eduardo Ribeiro Guerra" << endl;
  
  cout << endl << "Set exemplo 1" << endl;
  set<int> set_exemplo1;
  
  cout << "Inserindo 10 ao set_exemplo1" << endl;
  set_exemplo1.insert(10);
  cout << "Inserindo 2 ao set_exemplo1" << endl;
  set_exemplo1.insert(2);
  cout << "Inserindo 5 ao set_exemplo1" << endl;
  set_exemplo1.insert(5);
  cout << "Inserindo 8 ao set_exemplo1" << endl;
  set_exemplo1.insert(8);
  cout << "Inserindo 1 ao set_exemplo1" << endl;
  set_exemplo1.insert(1);
  
  //set_exemplo1.find(8)
  bool achou_8 = set_exemplo1.count(8);
  cout << "Tem 8 no set: " << std::boolalpha << achou_8 << endl;
  bool achou_99 = set_exemplo1.count(99);
  cout << "Tem 99 no set: " << std::boolalpha << achou_8 << endl;
  
  cout << "Posição do inicío do set_exemplo1: "  << *set_exemplo1.begin() << endl;
  cout << "Posição do fim do set_exemplo1: "     << *set_exemplo1.end()   << endl;
  cout << "Tamanho do set_exemplo1: " << set_exemplo1.size()   << endl;

  cout << "Mostrando os elementos: ";
  set<int>::iterator ponteiro = set_exemplo1.begin();
  while(ponteiro != set_exemplo1.end() ){
  	cout << *ponteiro << " ";
  	ponteiro++;
  }
  cout << endl;
  
  cout << "Removendo o número 2 de set_exemplo1" << endl;
  set_exemplo1.erase(2);
  
  cout << "Mostrando os elementos: ";
  set<int>::iterator ponteiro2 = set_exemplo1.begin();
  while(ponteiro2 != set_exemplo1.end() ){
  	cout << *ponteiro2 << " ";
  	ponteiro2++;
  }
  cout << endl;
  
  cout << "set_exemplo1 está vazio: " << std::boolalpha << set_exemplo1.empty() << endl;
  cout << "Esvaziando o set_exemplo1" << endl;
  set_exemplo1.clear();
  cout << "set_exemplo1 está vazio: " << std::boolalpha << set_exemplo1.empty() << endl;
  
  system("pause");
  return 0;
 }
