 #include <iostream>   // necessario para o cout
 #include <locale.h>   // em algumas situacoes parece nao ser necessario  para o setlocale
 #include <windows.h>  // necessario para usar sleep e beep
 
 using namespace std;

   /*Luis Eduardo Ribeiro Guerra
      Mini kit de Dev C++ v0.1 (só a parte de janelas) */
   /* feito no Dev-C++ 5.11 para livre uso creativo e distribuição*/
   /* Contato: luiseduardoribeiroguerra@gmail.com */
   /*Github com códigos fontes e atualizações:
     https://github.com/luisrguerra/devcpp-ptbr-mini-kit-cpp
                                                           */
   /* este kit é feito para facilitar a vida de quem está mais interessado
      na parte de janelas do kit de c++, procure também fazer download
	  do kit principal no GitHub para ter acesso a um conteúdo mais completo */   

     /*comece a ler a partir daqui
                 \
                 \
                 v           */
 int main(){
  setlocale(LC_ALL,"Portuguese"); // permite utilizar acentuacao do portugues
  
  cout << "|Mini kit (só janelas) de Dev C++ v0.1|" << " Por Luís Eduardo Ribeiro Guerra" << endl;
  
  cout << "Abrindo GitHub..." << endl;
  Sleep(1400);
  /// Abrir no browser o link do GitHub do Mini Kit de c++
  system("start https://github.com/luisrguerra/devcpp-ptbr-mini-kit-cpp");
  
  cout << "Executando caixas de aviso..." << endl;
  /////https://docs.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messagebox
  MessageBox( 0, "Atenção!\nComi o bolo de quem está lendo", "Atenção titulo", 0 | MB_ICONEXCLAMATION ); //icone de "!" em um triangulo amarelo
  MessageBox( 0, "Linha 1\nLinha 2", "janela_erro titulo", 0 | MB_ICONERROR ); //icone de "x" em uma bola vermelha
  MessageBox( 0, "Linha 1\nLinha 2", "janela_interrogação titulo", 0 | MB_ICONQUESTION ); //icone de "?" em uma bola azul
  MessageBox( 0, "Linha 1\nLinha 2", "janela_informação titulo", 0 | MB_ICONINFORMATION ); //icone de "i" em uma bola azul
  MessageBox( 0, "Linha 1\nLinha 2", "janela_sem_icone titulo", 0); // sem icone

  // janela que responde aos comandos
  
  cout << "Executando janela_sim_nao_cancelar..." << endl;
  int janela_sim_nao_cancelar = MessageBox( 0, "Linha 1\nLinha 2", "janela_sim_nao_cancelar titulo", MB_YESNOCANCEL ); 
  switch (janela_sim_nao_cancelar){
  	case IDYES:
  		//codigo
        cout << "janela_sim_nao_cancelar: Você selecionou sim"      << endl;
        break;
    case IDNO:
    	//codigo
        cout << "janela_sim_nao_cancelar: Você selecionou não"      << endl;
        break;
    case IDCANCEL:
    	//codigo
        cout << "janela_sim_nao_cancelar: Você selecionou cancelar" << endl;
        break;
  }
  
  cout << "Executando janela_anular_repetir_ignorar..." << endl;
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
  
  cout << "Executando janela_ok_cancelar..." << endl;
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
  
  cout << "Executando janela_repetir_cancelar..." << endl;
  int janela_repetir_cancelar = MessageBox( 0, "Linha 1\nLinha 2", "janela_repetir_cancelar titulo", MB_RETRYCANCEL ); 
  switch (janela_repetir_cancelar){
  	case IDRETRY:
        cout << "janela_repetir_cancelar: Você selecionou repetir"  << endl;
        break;
    case IDCANCEL:
    	cout << "janela_repetir_cancelar: Você selecionou cancelar" << endl;
        break;
  }
  
  cout << "Executando janela_cancelar_tentar_continuar..." << endl;
  int janela_cancelar_tentar_continuar = MessageBox( 0, "Linha 1\nLinha 2", "janela_cancelar_tentar_continuar titulo", MB_CANCELTRYCONTINUE );
   switch (janela_cancelar_tentar_continuar){
  	case IDCANCEL:
  		//codigo
  		cout << "janela_cancelar_tentar_continuar: Você selecionou cancelar"  << endl;
        break;
    case IDTRYAGAIN:
    	//codigo
        cout << "janela_cancelar_tentar_continuar: Você selecionou tentar"    << endl;
        break;
    case IDCONTINUE:
    	//codigo
        cout << "janela_cancelar_tentar_continuar: Você selecionou continuar" << endl;
        break;
  }
  
  
  cout << "Executando janela_sim_nao..." << endl;
  int janela_sim_nao = MessageBox( 0, "Linha 1\nLinha 2", "janela_sim_nao titulo", MB_YESNO );
  switch (janela_sim_nao){
  	case IDYES:
  		/// o system executa um comando de terminal cmd, isso é algo bem util
  		cout << "janela_sim_nao: Você selecionou sim" << endl;
        break;
    case IDNO:
        cout << "janela_sim_nao: Você selecionou Não" << endl;
        break;
  }
  
  
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
