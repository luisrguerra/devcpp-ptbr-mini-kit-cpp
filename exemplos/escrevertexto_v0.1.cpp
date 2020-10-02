 #include <iostream>   // necessario para o cout
 //#include <locale.h>   // em algumas situacoes parece nao ser necessario  para o setlocale
 //#include <string>     // necessario para usar variaveis de string
 #include <windows.h>  // necessario para usar a janela de pergunta
 #include <fstream>    // necessario para gravar arquivos com ofstream

 
 using namespace std;

   /*Luis Eduardo Ribeiro Guerra
      Mini kit (Exemplo de escrever arquivo de texto) de Dev C++ v0.1   */
   /* feito no Dev-C++ 5.11 para livre uso creativo e distribuição*/
   /* Contato: luiseduardoribeiroguerra@gmail.com */
   /*Github com códigos fontes e atualizações:
     https://github.com/luisrguerra/devcpp-ptbr-mini-kit-cpp
                                                           */
                                                           
   /* este exemplo é um exemplo que faz parte de um kit de c++, procure também fazer download
	  do kit principal no GitHub para ter acesso a um conteúdo mais completo */ 
 int main(){
  setlocale(LC_ALL,"Portuguese"); // permite utilizar acentuacao do portugues
  
  cout << "Abrindo GitHub..." << endl;
  Sleep(1400);
  /// Abrir no browser o link do GitHub do Mini Kit de c++
  system("start https://github.com/luisrguerra/devcpp-ptbr-mini-kit-cpp");
  
  ///gravar arquivo
  ofstream meuarquivo("texto.txt");
  if (meuarquivo.is_open()){
        meuarquivo << "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."<< endl;
        meuarquivo.close();
        cout << "Salvei um arquivo de texto chamado texto.txt" << endl ;
  }
  
  
  //Janela pergunta se quer abrir o arquivo no bloco de notas
  int janela_sim_nao_notepad = MessageBox( 0, "Deseja abrir o arquivo texto.txt no bloco de notas do Windows?", "Notepad", MB_YESNO );
  if (janela_sim_nao_notepad == IDYES){
  	cout << "Feche o bloco de notas para despausar o programa" << endl;
	system("Notepad \"texto.txt\"");
  }
  if (janela_sim_nao_notepad == IDNO){
  	cout << "Você não quis abrir arquivo texto_renomeado.txt" << endl;
  }
  
  return 0;
 }
