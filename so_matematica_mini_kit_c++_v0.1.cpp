 #include <iostream>   // necessario para o cout
 #include <locale.h>   // em algumas situacoes parece nao ser necessario  para o setlocale que muda o idioma
 #include <math.h>     // necessario para usar pow, sqrt, round, ceil, floor, sin, cos, tan
 #include <windows.h>  // necessario para usar srand e rand
 #include <time.h>     // necessario para srand (time(NULL));
 
 using namespace std;

   /*Luis Eduardo Ribeiro Guerra
      Mini kit (s� a parte de matem�tica) de Dev C++ v0.1   */
   /* feito no Dev-C++ 5.11 para livre uso creativo e distribui��o*/
   /* Contato: luiseduardoribeiroguerra@gmail.com */
   /*Github com c�digos fontes e atualiza��es:
     https://github.com/luisrguerra/devcpp-ptbr-mini-kit-cpp
                                                           */
   /* este kit � feito para facilitar a vida de quem est� mais interessado
      na parte de matem�tica do kit de c++, procure tamb�m fazer download
	  do kit principal no GitHub para ter acesso a um conte�do mais completo */                                                          
       

// variaveis

// char char_ex = 'a';    // um caractere
// string string_ex;      // texto
// int int_ex;            // numero inteiro
// bool bool_ex;          // 0 ou 1; false(0) ou true(1)
// float float_ex;        // ponto flutuante
// double double_ex;      // ponto flutuante de dupla precisao
 
 
     /*comece a ler a partir daqui
                 \
                 \
                 v           */
 int main(){
  setlocale(LC_ALL,"Portuguese"); // permite utilizar acentuacao do portugues
  
  
  cout << "|Mini kit (s� matem�tica) de Dev C++ v0.1|" << " Por Lu�s Eduardo Ribeiro Guerra" << endl;
  
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
  
  

  //link para o GitHub
  system("start https://github.com/luisrguerra/devcpp-ptbr-mini-kit-cpp");
  system("PAUSE");
  
  return 0;
 }
