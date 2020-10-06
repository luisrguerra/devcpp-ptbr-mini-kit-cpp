 #include <iostream>   // necessario para o cout
 //#include <locale.h>   // em algumas situacoes parece nao ser necessario  para o setlocale
 #include <string>     // necessario para usar variaveis de string
 #include <windows.h>  // necessario para usar a janela de pergunta
 #include <fstream>    // necessario para gravar e ler arquivos com ofstream

 
 using namespace std;

   /*Luis Eduardo Ribeiro Guerra
      Mini kit (Exemplo de procurar arquivo de texto) de Dev C++ v0.1   */
   /* feito no Dev-C++ 5.11 para livre uso creativo e distribui��o*/
   /* Contato: luiseduardoribeiroguerra@gmail.com */
   /*Github com c�digos fontes e atualiza��es:
     https://github.com/luisrguerra/devcpp-ptbr-mini-kit-cpp
                                                           */
                                                           
   /* este exemplo � um exemplo que faz parte de um kit de c++, procure tamb�m fazer download
	  do kit principal no GitHub para ter acesso a um conte�do mais completo */ 
	  
 void escrever_texto (){
  ofstream meuarquivo("texto.txt");
  if (meuarquivo.is_open()){
        meuarquivo << "oi oi oi oi oi oi oi"<< endl;
        meuarquivo << "au au au au au au au"<< endl;
        meuarquivo.close();
        cout << "Salvei um arquivo de texto chamado texto.txt" << endl ;
  }
 }
 
 void ler_texto(){
  cout << endl << "Olha o que est� escrito no arquivo texto.txt:" << endl;
  ///ler arquivo
  ifstream meuarquivoleitura("texto.txt");
  string textoleitura;
  while (getline (meuarquivoleitura, textoleitura)) {
  cout << textoleitura << endl;
  }
  meuarquivoleitura.close();
 	
 }	 
	  
 int main(){
  setlocale(LC_ALL,"Portuguese"); // permite utilizar acentuacao do portugues
  
  cout << "Abrindo GitHub..." << endl;
  Sleep(1400); //dormindo  por 1400 milissegundos
  /// Abrir no browser o link do GitHub do Mini Kit de c++
  system("start https://github.com/luisrguerra/devcpp-ptbr-mini-kit-cpp");
  

  escrever_texto();// escrevendo um texto inicial
  
  ler_texto();// mostrar o texto que foi gravado
  
  cout << endl;// pular linha
  
  
  ///procurar na string
  ifstream meuarquivoleitura(/*arquivo a ser aberto:*/"texto.txt");//iniciando arquivo
  string textoleitura;
  
  int linha = 0;//vontagem das linhas para saber em qual est�
  while (getline (meuarquivoleitura, /*string:*/ textoleitura)) {
    
    string texto_procurado = "oi";
	size_t achou = /*string a ser analisada:*/textoleitura.find(/*procurar:*/texto_procurado);
    if (achou!=string::npos){ //encontrado
  	  cout << texto_procurado << " encontrado em: " << achou << " na linha: " << linha << endl;
    }
    if (achou==string::npos){ // n�o encontrado
    	cout << "N�o encontrado" << " na linha: " << linha << endl;
	}
  
  
    achou = textoleitura.find(/*procurar:*/"oi", /*n�mero da ocorr�ncia:*/2);
    if (achou!=string::npos){ //encontrado
  	  cout << "Segundo oi encontrado em: " << achou << " na linha: " << linha << endl;
    }
    if (achou==string::npos){ // n�o encontrado
    	cout << "Segundo n�o encontrado" << " na linha: " << linha << endl;
	}
    
	linha ++;// marcando que mudou para a pr�xima linha
  }
  
  meuarquivoleitura.close();// fechando o arquivo
  
  
  
  system("PAUSE");// pausar o programa antes de finalizar
  
  return 0;// finalizar
 }
