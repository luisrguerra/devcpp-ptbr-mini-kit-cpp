 #include <iostream>   // necessario para o cout
 #include <locale.h>   // em algumas situacoes parece nao ser necessario  para o setlocale
 #include <string>
 #include <math.h>     // necessario para usar pow, sqrt, round, ceil, floor, sin, cos, tan
 #include <windows.h>  // necessario para usar sleep e beep
 #include <conio.h>    // necessario para usar getch e getche
 #include <fstream>    // necessario para gravar arquivos com ofstream
 #include <time.h>     // necessario para srand (time(NULL));
 #include <vector>     // usado para vetores
 
 using namespace std;

   /*Luis Eduardo Ribeiro Guerra
      Mini kit de Dev C++ v0.7   */
   /* feito no Dev-C++ 5.11 para livre uso creativo e distribui��o*/
   /* Contato: luiseduardoribeiroguerra@gmail.com */
   /*Github com c�digos fontes e atualiza��es:
     https://github.com/luisrguerra/devcpp-ptbr-mini-kit-cpp
                                                           */
       

// variaveis

// char char_ex = 'a';    // um caractere
// string string_ex;      // texto
// int int_ex;            // numero inteiro
// bool bool_ex;          // 0 ou 1; false(0) ou true(1)
// float float_ex;        // ponto flutuante
// double double_ex;      // ponto flutuante de dupla precisao
 
 struct pessoa{
  int matricula;
  string cor_cabelo;
 
 }; 
 
 void funcaoteste (){
 	cout << "Teste da fun��o realizado" << endl;
 }
 
 int funcaoteste2 (int envio, int envio2){
 	cout << "Teste da fun��o 2 sendo realizado. " << "Enviado: " << envio << " e " <<  envio2 << endl;
 	return envio + envio2;
 }

 int main(){
  setlocale(LC_ALL,"Portuguese"); // permite utilizar acentuacao do portugues
  
  
  
  
  
  
  //Pagina 1
  
  cout << "|Mini kit de Dev C++ v0.7|" 
       << " Por Lu�s Eduardo Ribeiro Guerra" << endl;
  
  printf("\nMatem�tica:\n\n");
  cout << "Quatro ao quadrado �: " << pow(4,2) << endl;
  cout << "O resto da divis�o de 3 por 2 �: " << 3%2 << endl;
  cout << "5 vezes 2 �: " << 5*2 << endl;
  cout << "10 dividido por 2 �: " << 10/2 << endl;
  cout << "2x2 + (5+7)/2 = " << 2*2 + (5+7)/2 << endl;
  cout << "Raiz quadrada de 16 �: " << sqrt(16) << endl;
  cout << "3.14159 arredondado �: " << round(3.14159) << endl;
  cout << "3.14159 arredondado para cima �: " << ceil(3.14159) << endl;
  cout << "3.14159 arredondado para baixo �: " << floor(3.14159) << endl;
  cout << "Seno de 30 �: " << sin(30) << endl;
  cout << "Cosseno de 30 �: " << cos(30) << endl;
  cout << "Tangente de 30 �: " << tan(30) << endl;
  cout << "O logaritimo de 1000 na base 10 �: " << log10(1000) << endl;
  srand (time(NULL));// torna os n�mero aleat�rios realmente aleat�rios, necessita de #include <time.h> 
  cout << "N�mero aleat�rio de 0 a 99: " << rand() % 100 << endl;
  cout << "N�mero aleat�rio de 1 a 100: " << rand() % 100 +1 << endl;
  cout << "N�mero aleat�rio de 25 a 50: " << rand() % 25 + 26 << endl;
  
  ///limpeza do terminal
  cout << endl << "O terminal ser� limpo!" << endl;
  system("PAUSE");  /// aperte qualquer tecla para continuar
  system("cls"); //apagar tela
  
  
  
  
  
  
  cout << "|P�gina 2|" << endl;
  
  // uso do struct
  cout << "Testando struct:" << endl;
  pessoa luis;
  luis.matricula = 2019;
  luis.cor_cabelo = "castanho";
  cout << "luis.matricula = " << luis.matricula << endl;
  cout << "luis.cor_cabelo = " << luis.cor_cabelo << endl;
  
  cout << endl << "Contando at� 3:" << endl;
  for (int contagem = 1; contagem <= 3; contagem++) { 
   
   cout << contagem << "\n"; /* \n pula linha*/
   if (contagem >= 3){
   	cout << "Fim da contagem." << endl << endl;
   }
  
  }
  
  
  cout << "Contagem regressiva a partir de 3:" << endl;
  for (int contagem = 3; contagem >= 1; contagem--) { 
   
   cout << contagem << "\n"; /* \n pula linha*/
   if (contagem <= 1){
   	cout << "Fim da contagem." << endl << endl;
   }
  
  }
  
  cout << "Dormindo por 1000 milisegundos...." << endl;
  Sleep(1000); /// necessita do #include <windows.h> 
  cout << "Acordei" << endl << endl;
  
 
  ///limpeza do terminal
  cout << "O terminal ser� limpo!" << endl;
  system("PAUSE");  /// aperte qualquer tecla para continuar
  system("cls"); //apagar tela
  
  
  
  
  
  
  cout << "|P�gina 3|" << endl;
  
  ///teste de funcao, as fun�oes se encontram no topo antes do int main 
  funcaoteste();
  cout << "Retornado: " << funcaoteste2(3,4) << endl << endl;
  
  ///gravar arquivo
  ofstream meuarquivo("texto.txt");
  if (meuarquivo.is_open()){
        meuarquivo << "Oi"<< endl;
        meuarquivo << "Hello" <<endl;       
        meuarquivo << "Bonjour" << endl;
        meuarquivo << "Hasta la vista" << endl;
        meuarquivo.close();
        cout << "Salvei um arquivo de texto chamado texto.txt" << endl ;
  }
  
  ///ler arquivo
  ifstream meuarquivoleitura("texto.txt");
  string textoleitura;
  cout << "Olha o que est� escrito no arquivo texto.txt:" << endl;
  while (getline (meuarquivoleitura, textoleitura)) {
  cout << textoleitura << endl;
  }
  meuarquivoleitura.close();
  
  
  cout << endl << "Pressione uma tecla:" << endl;
  char tecla=getche(); // aviso: o programa pausa at� ser pressionada uma tecla
  //char tecla2=getch(); //nao mostra na tela qual tecla foi pressionada
  cout << endl;
  
  cout << "Pressione uma tecla:" << endl;
  char tecla2 = getch(); //nao mostra na tela qual tecla foi pressionada
  cout << "Voc� pressionou a tecla: " << tecla2 << endl;
  
  ///limpeza do terminal
  cout << endl << "O terminal ser� limpo!" << endl;
  system("PAUSE");  /// aperte qualquer tecla para continuar
  system("cls"); //apagar tela

  
  
  
  
  
  cout << "|P�gina 4|" << endl;
  cout << endl << "Arrays:" << endl;
  cout << endl << "Exemplo de array de string de 1X4 como lista de compras:" << endl;
  string array_string_lista_de_compras[4] = {"Coxinha", "Suco", "Bolo", "Fanta Uva"};
  cout << "Primeiro item da lista, n�mero 0: " << array_string_lista_de_compras[0] << endl;
  cout << "Alterando o primeiro item da lista" << endl;
  array_string_lista_de_compras[0] = "Pizza";
  cout << "Primeiro item da lista, n�mero 0: " << array_string_lista_de_compras[0] << endl;
  cout << "�ltimo item da lista, n�mero 3: " << array_string_lista_de_compras[3] << endl;
  cout << "Lendo todo o Array de String 1x4 da lista de compras:" << endl;
  for (int contagem = 0; contagem < 4; contagem++) {
  	cout << array_string_lista_de_compras[contagem] << " ";
  }
  cout << endl << endl;
  
  cout << "Exemplo de array de char (caracteres) de 3X4 como matriz:" << endl;
  cout << "Definindo a matriz..." << endl;
  char array_char_matriz [3] [4] = 
	{{'-','=','=','-'},
	 {'|','o','i','|'},
	 {'-','=','=','-'}};
  
  cout << "Renderizando a matriz linha por linha:" << endl;
  int tamanho_horizontal = 4;
  int tamanho_vertical = 3;
  for (int contagem_vertical = 0; contagem_vertical < tamanho_vertical; contagem_vertical++) {
  	
  	for (int contagem_horizontal = 0; contagem_horizontal < tamanho_horizontal; contagem_horizontal++){
  		
	  cout << array_char_matriz[contagem_vertical][contagem_horizontal];
	  
	}
    cout << endl; //pulando a linha depois de escrito a respectiva linha 	  
  }
  cout << endl;
  
  cout << "Uma string funciona parecido com um array:" << endl;
  cout << "Defini uma string escrito (cavalo branco)" << endl;
  string exemplo_string = "cavalo branco";
  cout << "A primeira letra (caractere) da string, na posi��o 0, �: " << exemplo_string[0] << endl;
  cout << "O tamanho da string �: " << exemplo_string.size() << " caracteres" << endl;
  cout << "A �ltima letra (caractere) da string, na posi��o 0, �: " << exemplo_string[ exemplo_string.size() -1 ] << endl;
  cout << "Soletrando:" << endl;
  for (int contagem = 0; contagem < exemplo_string.size(); contagem++){
  	cout << exemplo_string[contagem] << "_";
  }
  cout << endl;
  
  ///limpeza do terminal
  cout << endl << "O terminal ser� limpo! Depois ser� executado v�rias caixas de di�logo" << endl;
  system("PAUSE");  /// aperte qualquer tecla para continuar
  system("cls"); //apagar tela
  
  
  
  
  
  
  cout << "|P�gina 5|" << endl;
  cout << endl << "Vetor e iterador:" << endl;
  cout << "Declarando vetor de inteiros (vetor_exemplo)" << endl;
  vector<int> vetor_exemplo;
  cout << "Testando se o vetor est� vazio (1 = verdadeiro 0 = falso):" << vetor_exemplo.empty() << endl;
  cout << "Adicionando o valor 2 ao vetor" << endl;
  vetor_exemplo.push_back(2);
  cout << "Adicionando o valor 4 ao vetor" << endl;
  vetor_exemplo.push_back(4);
  cout << "Adicionando o valor 8 ao vetor" << endl;
  vetor_exemplo.push_back(8);
  cout << "Primeiro valor do vetor: " << vetor_exemplo[0] << endl;;
  cout << "Tamanho do vetor:" << vetor_exemplo.size() << endl;
  cout << "�ltimo valor do vetor: " << vetor_exemplo[ vetor_exemplo.size() - 1] << endl;
  cout << "Removendo o �ltimo valor do vetor" << endl;
  vetor_exemplo.pop_back();
  cout << "Tamanho do vetor:" << vetor_exemplo.size() << endl;
  cout << "�ltimo valor do vetor: " << vetor_exemplo[ vetor_exemplo.size() - 1] << endl;
  cout << "Testando se o vetor est� vazio (1 = verdadeiro 0 = falso):" << vetor_exemplo.empty() << endl;
  cout << "Declarando um iterador (iterador_exemplo)" << endl;
  vector<int>::iterator iterador_exemplo;
  cout << "Colocando o iterador no in�cio do vetor" << endl;
  iterador_exemplo = vetor_exemplo.begin();
  cout << "Valor do vetor onde o iterador se encontra: "<< *iterador_exemplo << endl;
  cout << "Movendo o iterador uma posi��o para frente" << endl;
  iterador_exemplo++;
  cout << "Valor do vetor onde o iterador se encontra: "<< *iterador_exemplo << endl;
  cout << "Movendo o iterador uma posi��o para tr�s" << endl;
  iterador_exemplo--;
  cout << "Valor do vetor onde o iterador se encontra: "<< *iterador_exemplo << endl;
  cout << "Colocando o iterador no final do vetor" << endl;
  iterador_exemplo = vetor_exemplo.end();
  cout << "Valor do vetor onde o iterador se encontra: "<< *(iterador_exemplo-1) << endl;
  
  
  ///limpeza do terminal
  cout << endl << "O terminal ser� limpo! Depois ser� executado v�rias caixas de di�logo" << endl;
  system("PAUSE");  /// aperte qualquer tecla para continuar
  system("cls"); //apagar tela
  
  
  
  
  
  
  cout << "|P�gina 6|" << endl;
  
  cout << "Executando caixas de aviso..." << endl;
  /////https://docs.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messagebox
  MessageBox( 0, "Aten��o!\nComi o bolo de quem est� lendo", "Aten��o titulo", 0 | MB_ICONEXCLAMATION ); //icone de "!" em um triangulo amarelo
  MessageBox( 0, "Linha 1\nLinha 2", "janela_erro titulo", 0 | MB_ICONERROR ); //icone de "x" em uma bola vermelha
  MessageBox( 0, "Linha 1\nLinha 2", "janela_interroga��o titulo", 0 | MB_ICONQUESTION ); //icone de "?" em uma bola azul
  MessageBox( 0, "Linha 1\nLinha 2", "janela_informa��o titulo", 0 | MB_ICONINFORMATION ); //icone de "i" em uma bola azul
  MessageBox( 0, "Linha 1\nLinha 2", "janela_sem_icone titulo", 0); // sem icone

  // janela que responde aos comandos
  
  int janela_sim_nao_cancelar = MessageBox( 0, "Linha 1\nLinha 2", "janela_sim_nao_cancelar titulo", MB_YESNOCANCEL ); 
  switch (janela_sim_nao_cancelar){
  	case IDYES:
  		//codigo
        cout << "janela_sim_nao_cancelar: Voc� selecionou sim" << endl;
        break;
    case IDNO:
    	//codigo
        cout << "janela_sim_nao_cancelar: Voc� selecionou n�o" << endl;
        break;
    case IDCANCEL:
    	//codigo
        cout << "janela_sim_nao_cancelar: Voc� selecionou cancelar" << endl;
        break;
  }
  
  int janela_anular_repetir_ignorar = MessageBox( 0, "Linha 1\nLinha 2", "janela_anular_repetir_ignorar titulo", MB_ABORTRETRYIGNORE );
   switch (janela_anular_repetir_ignorar){
  	case IDABORT:
  		//codigo
  		cout << "janela_anular_repetir_ignorar: Voc� selecionou anular" << endl;
        break;
    case IDRETRY:
    	//codigo
        cout << "janela_anular_repetir_ignorar: Voc� selecionou repetir" << endl;
        break;
    case IDIGNORE:
    	//codigo
        cout << "janela_anular_repetir_ignorar: Voc� selecionou ignorar" << endl;
        break;
  }
  
  int janela_ok_cancelar = MessageBox( 0, "Linha 1\nLinha 2", "janela_ok_cancelar titulo", MB_OKCANCEL );
  switch (janela_ok_cancelar){
  	case IDOK:
  		//codigo
  		cout << "janela_ok_cancelar: Voc� selecionou ok" << endl;
        break;
    case IDCANCEL:
        //codigo
        cout << "janela_ok_cancelar: Voc� selecionou cancelar" << endl;
        break;
  }
  
  int janela_repetir_cancelar = MessageBox( 0, "Linha 1\nLinha 2", "janela_repetir_cancelar titulo", MB_RETRYCANCEL ); 
  switch (janela_repetir_cancelar){
  	case IDRETRY:
        cout << "janela_repetir_cancelar: Voc� selecionou repetir" << endl;
        break;
    case IDCANCEL:
    	cout << "janela_repetir_cancelar: Voc� selecionou cancelar" << endl;
        break;
  }
  
  int janela_cancelar_tentar_continuar = MessageBox( 0, "Linha 1\nLinha 2", "janela_cancelar_tentar_continuar titulo", MB_CANCELTRYCONTINUE );
   switch (janela_cancelar_tentar_continuar){
  	case IDCANCEL:
  		//codigo
  		cout << "janela_cancelar_tentar_continuar: Voc� selecionou cancelar" << endl;
        break;
    case IDTRYAGAIN:
    	//codigo
        cout << "janela_cancelar_tentar_continuar: Voc� selecionou tentar" << endl;
        break;
    case IDCONTINUE:
    	//codigo
        cout << "janela_cancelar_tentar_continuar: Voc� selecionou continuar" << endl;
        break;
  }
  
  
  ///limpeza do terminal
  cout << endl << "O terminal ser� limpo!" << endl;
  system("PAUSE");  /// aperte qualquer tecla para continuar
  system("cls"); //apagar tela
  
  ///  animacao
  bool rodando_animacao = true;
  int intervaulo_animacao = 100; // em milisegundos
  int animacao_ciclos = 0;
  while ( rodando_animacao == true /*true ou false ou alguma condicao*/ ) {
  	
  cout << "|" << "\n";
  Sleep(intervaulo_animacao);
  system("cls"); //apagar tela
  cout << "/" << "\n";
  Sleep(intervaulo_animacao);
  system("cls"); //apagar tela
  cout << "-" << "\n";
  Sleep(intervaulo_animacao);
  system("cls"); //apagar tela
  cout << "\\" << "\n";
  Sleep(intervaulo_animacao);
  system("cls"); //apagar tela
  animacao_ciclos++;
  if (animacao_ciclos >= 4){
   rodando_animacao = false;
   //break; //interrompe o while
   }
  }
  // fim do codigo da animacao
  
  
  
  
  
  
  cout << "|P�gina 7|" << endl;
  
  cout << "Som de aviso do windows" << endl;
  cout << '\a'; //som de aviso
  
  Sleep(2000); /// necessita do #include <windows.h> 
   
  cout << "Beep de frequencia" << endl; 
  //Beep(frequ�ncia,dura��o); 
  
  printf("D�\n") ;  // printf (""); funciona parecido com o cout << "";
  Beep (261, 500);

  printf("R�\n");
  Beep (293, 500);

  printf("Mi\n");
  Beep (329, 500);

  printf("F�\n");
  Beep (349, 500);

  printf("Sol\n");
  Beep (392, 500);

  printf("L�\n");
  Beep (440, 500);

  printf("Si\n");
  Beep (493, 500);
  
  
  int janela_sim_nao = MessageBox( 0, "Deseja abrir o link no seu navegador padr�o?", "Link", MB_YESNO );
  switch (janela_sim_nao){
  	case IDYES:
  		system("start https://github.com/luisrguerra/devcpp-ptbr-mini-kit-cpp");
        break;
    case IDNO:
        cout << "Voc� n�o quis abrir o link no seu navegador padr�o" << endl;
        break;
  }
  
  int janelafinal = MessageBox( 0, "Deseja reiniciar o programa?", "Reinicializa��o", MB_RETRYCANCEL ); 
  switch (janelafinal){
  	case IDRETRY:
        cout << "Reiniciando...." << endl;
        Sleep(3000); /// necessita do #include <windows.h> 
        system("cls"); //apagar tela
        main();  
        /*chamar a funcao main dentro do main faz o 
        programa reiniciar, dependendo da situcao, deixando 
        ele em looping */
        break;
    case IDCANCEL:
    	cout << "Finalizando o programa...." << endl;
        return 0; //finalizando o programa
        break;
  }
  return 0;
 }
