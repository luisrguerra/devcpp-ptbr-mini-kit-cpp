 #include <iostream>   // necessario para o cout
 #include <locale.h>   // em algumas situacoes parece nao ser necessario  para o setlocale
 #include <string>
 #include <math.h>     // necessario para usar pow, sqrt, round, ceil, floor, sin, cos, tan
 #include <windows.h>  // necessario para usar sleep e beep
 #include <conio.h>    // necessario para usar getch e getche
 #include <fstream>    // necessario para gravar arquivos com ofstream
 #include <time.h>     // necessario para srand (time(NULL));
 
 using namespace std;

   /*Luis Eduardo Ribeiro Guerra
      Mini kit de Dev C++ v0.5   */
   /* feito no Dev-C++ 5.11 para livre uso creativo */
   /* Contato: luiseduardoribeiroguerra@gmail.com */
       

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
 	cout << "Teste da função realizado" << endl;
 }
 
 int funcaoteste2 (int envio, int envio2){
 	cout << "Teste da função 2 sendo realizado. " << "Enviado: " << envio << " e " <<  envio2 << endl;
 	return envio + envio2;
 }

 int main(){
  setlocale(LC_ALL,"Portuguese"); // permite utilizar acentuacao do portugues
  
  //Pagina 1
  
  cout << "|Mini kit de Dev C++ v0.5|" 
       << " Por Luís Eduardo Ribeiro Guerra" << endl;
  
  printf("\nMatemática:\n");
  cout << "Quatro ao quadrado é: " << pow(4,2) << endl;
  cout << "O resto da divisão de 3 por 2 é: " << 3%2 << endl;
  cout << "5 vezes 2 é: " << 5*2 << endl;
  cout << "10 dividido por 2 é: " << 10/2 << endl;
  cout << "2x2 + (5+7)/2 = " << 2*2 + (5+7)/2 << endl;
  cout << "Raiz quadrada de 16 é: " << sqrt(16) << endl;
  cout << "3.14159 arredondado é: " << round(3.14159) << endl;
  cout << "3.14159 arredondado para cima é: " << ceil(3.14159) << endl;
  cout << "3.14159 arredondado para baixo é: " << floor(3.14159) << endl;
  cout << "Seno de 30 é: " << sin(30) << endl;
  cout << "Cosseno de 30 é: " << cos(30) << endl;
  cout << "Tangente de 30 é: " << tan(30) << endl;
  cout << "O logaritimo de 1000 na base 10 é: " << log10(1000) << endl;
  srand (time(NULL));// torna os número aleatórios realmente aleatórios, necessita de #include <time.h> 
  cout << "Número aleatório de 0 a 99: " << rand() % 100 << endl;
  cout << "Número aleatório de 1 a 100: " << rand() % 100 +1 << endl;
  cout << "Número aleatório de 25 a 50: " << rand() % 25 + 26 << endl;
  
  ///limpeza do terminal
  cout << endl << "O terminal será limpo!" << endl;
  system("PAUSE");  /// aperte qualquer tecla para continuar
  system("cls"); //apagar tela
  
  
  cout << "|Página 2|" << endl;
  
  // uso do struct
  cout << "Testando struct:" << endl;
  pessoa luis;
  luis.matricula = 2019;
  luis.cor_cabelo = "castanho";
  cout << "luis.matricula = " << luis.matricula << endl;
  cout << "luis.cor_cabelo = " << luis.cor_cabelo << endl;
  
  cout << endl << "Contando até 3:" << endl;
  for (int i = 1; i <= 3; i++) { 
   
   cout << i << "\n"; /* \n pula linha*/
   if (i == 3){
   	cout << "Fim da contagem." << endl << endl;
   }
  
  }
  
  
  cout << "Contagem regressiva a partir de 3:" << endl;
  for (int i = 3; i >= 1; i--) { 
   
   cout << i << "\n"; /* \n pula linha*/
   if (i == 1){
   	cout << "Fim da contagem." << endl << endl;
   }
  
  }
  
  cout << "Dormindo por 1000 milisegundos...." << endl;
  Sleep(1000); /// necessita do #include <windows.h> 
  cout << "Acordei" << endl << endl;
  
 
  ///limpeza do terminal
  cout << "O terminal será limpo!" << endl;
  system("PAUSE");  /// aperte qualquer tecla para continuar
  system("cls"); //apagar tela
  
  cout << "|Página 3|" << endl;
  
  ///teste de funcao
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
  cout << "Olha o que está escrito no arquivo texto.txt:" << endl;
  while (getline (meuarquivoleitura, textoleitura)) {
  cout << textoleitura << endl;
  }
  meuarquivoleitura.close();
  
  cout << endl << "Pressione uma tecla:" << endl;
  char tecla=getche(); // aviso: o programa pausa até ser pressionada uma tecla
  //char tecla2=getch(); //nao mostra na tela qual tecla foi pressionada
  cout << endl;
  
  cout << "Pressione uma tecla:" << endl;
  char tecla2 = getch(); //nao mostra na tela qual tecla foi pressionada
  cout << "Você pressionou a tecla: " << tecla2 << endl;
  
  ///limpeza do terminal
  cout << endl << "O terminal será limpo! Depois será executado várias caixas de diálogo" << endl;
  system("PAUSE");  /// aperte qualquer tecla para continuar
  system("cls"); //apagar tela
  
  cout << "|Página 4|" << endl;
  
  cout << "Executando caixas de aviso..." << endl;
  /////https://docs.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messagebox
  MessageBox( 0, "Atenção!\nComi o bolo de quem está lendo", "Atenção titulo", 0 | MB_ICONEXCLAMATION ); //icone de "!" em um triangulo amarelo
  MessageBox( 0, "Linha 1\nLinha 2", "janela_erro titulo", 0 | MB_ICONERROR ); //icone de "x" em uma bola vermelha
  MessageBox( 0, "Linha 1\nLinha 2", "janela_interrogação titulo", 0 | MB_ICONQUESTION ); //icone de "?" em uma bola azul
  MessageBox( 0, "Linha 1\nLinha 2", "janela_informação titulo", 0 | MB_ICONINFORMATION ); //icone de "i" em uma bola azul
  MessageBox( 0, "Linha 1\nLinha 2", "janela_sem_icone titulo", 0); // sem icone

  // janela que responde aos comandos
  
  int janela_sim_nao_cancelar = MessageBox( 0, "Linha 1\nLinha 2", "janela_sim_nao_cancelar titulo", MB_YESNOCANCEL ); 
  switch (janela_sim_nao_cancelar){
  	case IDYES:
  		//codigo
        cout << "janela_sim_nao_cancelar: Você selecionou sim" << endl;
        break;
    case IDNO:
    	//codigo
        cout << "janela_sim_nao_cancelar: Você selecionou não" << endl;
        break;
    case IDCANCEL:
    	//codigo
        cout << "janela_sim_nao_cancelar: Você selecionou cancelar" << endl;
        break;
  }
  
  int janela_anular_repetir_ignorar = MessageBox( 0, "Linha 1\nLinha 2", "janela_anular_repetir_ignorar titulo", MB_ABORTRETRYIGNORE );
   switch (janela_anular_repetir_ignorar){
  	case IDABORT:
  		//codigo
  		cout << "janela_anular_repetir_ignorar: Você selecionou anular" << endl;
        break;
    case IDRETRY:
    	//codigo
        cout << "janela_anular_repetir_ignorar: Você selecionou repetir" << endl;
        break;
    case IDIGNORE:
    	//codigo
        cout << "janela_anular_repetir_ignorar: Você selecionou ignorar" << endl;
        break;
  }
  
  int janela_ok_cancelar = MessageBox( 0, "Linha 1\nLinha 2", "janela_ok_cancelar titulo", MB_OKCANCEL );
  switch (janela_ok_cancelar){
  	case IDOK:
  		//codigo
  		cout << "janela_ok_cancelar: Você selecionou ok" << endl;
        break;
    case IDCANCEL:
        //codigo
        cout << "janela_ok_cancelar: Você selecionou cancelar" << endl;
        break;
  }
  
  int janela_repetir_cancelar = MessageBox( 0, "Linha 1\nLinha 2", "janela_repetir_cancelar titulo", MB_RETRYCANCEL ); 
  switch (janela_repetir_cancelar){
  	case IDRETRY:
        cout << "janela_repetir_cancelar: Você selecionou repetir" << endl;
        break;
    case IDCANCEL:
    	cout << "janela_repetir_cancelar: Você selecionou cancelar" << endl;
        break;
  }
  
  int janela_cancelar_tentar_continuar = MessageBox( 0, "Linha 1\nLinha 2", "janela_cancelar_tentar_continuar titulo", MB_CANCELTRYCONTINUE );
   switch (janela_cancelar_tentar_continuar){
  	case IDCANCEL:
  		//codigo
  		cout << "janela_cancelar_tentar_continuar: Você selecionou cancelar" << endl;
        break;
    case IDTRYAGAIN:
    	//codigo
        cout << "janela_cancelar_tentar_continuar: Você selecionou tentar" << endl;
        break;
    case IDCONTINUE:
    	//codigo
        cout << "janela_cancelar_tentar_continuar: Você selecionou continuar" << endl;
        break;
  }
  
  

  ///limpeza do terminal
  cout << endl << "O terminal será limpo!" << endl;
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
  
  cout << "|Página 5|" << endl;
  
  cout << "Som de aviso do windows" << endl;
  cout << '\a'; //som de aviso
  
  Sleep(2000); /// necessita do #include <windows.h> 
   
  cout << "Beep de frequencia" << endl; 
  //Beep(frequência,duração); 
  
  printf("Dó\n") ;  // printf (""); funciona parecido com o cout << "";
  Beep (261, 500);

  printf("Ré\n");
  Beep (293, 500);

  printf("Mi\n");
  Beep (329, 500);

  printf("Fá\n");
  Beep (349, 500);

  printf("Sol\n");
  Beep (392, 500);

  printf("Lá\n");
  Beep (440, 500);

  printf("Si\n");
  Beep (493, 500);
  
  
  
  int janelafinal = MessageBox( 0, "Deseja reiniciar o programa?", "Reinicialização", MB_RETRYCANCEL ); 
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
