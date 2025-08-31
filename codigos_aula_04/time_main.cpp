// Inclui a biblioteca padrão de Input/Output (Entrada/Saída) do C++.
// É necessária para usarmos 'cout' (para imprimir na tela) e 'endl' (para pular linha).
#include <iostream>

// Inclui o nosso arquivo de cabeçalho. As aspas (" ") indicam que é um arquivo local
// do projeto. Sem esta linha, o 'main' não saberia o que é um 'Time'.
#include "time.h"

// Permite usar nomes da biblioteca padrão (como 'cout' e 'cin') sem o prefixo 'std::'.
// Ex: em vez de 'std::cout', podemos escrever apenas 'cout'.
using namespace std;

// A função 'main' é o ponto de entrada de todo programa C++. A execução começa aqui.
int main()
{
  /*
   * Demonstração 1: Criando um objeto e usando Setters e Getters.
   */

  // Cria (instancia) um objeto chamado 't1' da classe 'Time'.
  // O construtor é chamado com todos os argumentos: 23 para hora, 59 para min, 59 para seg.
  Time t1(23, 59, 59);

  // Chama o método 'print()' do objeto 't1' para mostrar seu estado inicial.
  t1.print(); // Saída esperada: 23:59:59

  // Chama os métodos "setters" para alterar os dados do objeto 't1'.
  t1.setHour(12);
  t1.setMinute(30);
  t1.setSecond(15);

  // Imprime novamente para ver o resultado da alteração.
  t1.print(); // Saída esperada: 12:30:15

  // Usa os métodos "getters" para obter cada valor individualmente e imprimi-los.
  // 'cout <<' é o comando para enviar texto/dados para o console.
  cout << "Hour:    " << t1.getHour() << endl;   // Pega e imprime a hora de t1.
  cout << "Minute:  " << t1.getMinute() << endl; // Pega e imprime o minuto de t1.
  cout << "Second:  " << t1.getSecond() << endl; // Pega e imprime o segundo de t1.

  /*
   * Demonstração 2: Usando os parâmetros padrão do construtor.
   */

  // Cria um objeto 't2' passando apenas o primeiro argumento (hora).
  // Os outros dois (minuto e segundo) usarão o valor padrão (0) definido no construtor em 'time.h'.
  Time t2(12);
  t2.print(); // Saída esperada: 12:00:00

  /*
   * Demonstração 3: Testando a lógica do método nextSecond().
   */

  // Cria um objeto 't3' prestes a "virar" o minuto.
  Time t3(23, 59, 58);
  t3.print(); // Saída esperada: 23:59:58

  // Chama nextSecond(). Apenas o segundo deve ser alterado.
  t3.nextSecond();
  t3.print(); // Saída esperada: 23:59:59

  // Chama nextSecond() novamente. Ocorre o "rollover":
  // o segundo vira 0, o minuto vira 0 e a hora vira 0.
  t3.nextSecond();
  t3.print(); // Saída esperada: 00:00:00
}