 #include <iostream>   // necessario para o cout
 #include <locale.h>   // em algumas situacoes parece nao ser necessario  para o setlocale que muda o idioma
 #include <math.h>     // necessario para usar pow, sqrt, round, ceil, floor, sin, cos, tan
 #include <windows.h>  // necessario para usar srand e rand
 #include <time.h>     // necessario para srand (time(NULL));
 
 using namespace std;

   /*Luis Eduardo Ribeiro Guerra
      Mini kit (só a parte de matemática) de Dev C++ v0.1   */
   /* feito no Dev-C++ 5.11 para livre uso creativo e distribuição*/
   /* Contato: luiseduardoribeiroguerra@gmail.com */
   /*Github com códigos fontes e atualizações:
     https://github.com/luisrguerra/devcpp-ptbr-mini-kit-cpp
                                                           */
   /* este kit é feito para facilitar a vida de quem está mais interessado
      na parte de matemática do kit de c++, procure também fazer download
	  do kit principal no GitHub para ter acesso a um conteúdo mais completo */                                                          
       

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
  
  
  cout << "|Mini kit (só matemática) de Dev C++ v0.1|" << " Por Luís Eduardo Ribeiro Guerra" << endl;
  
  printf("\nMatemática:\n\n");
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
  
  

  //link para o GitHub
  system("start https://github.com/luisrguerra/devcpp-ptbr-mini-kit-cpp");
  system("PAUSE");
  
  return 0;
 }
