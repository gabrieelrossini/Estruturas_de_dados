/* Implementação (definição dos métodos) da classe Time */

// Incluído para usar 'cout' no método print().
#include <iostream>
// Incluído para "enxergar" as declarações da classe Time e poder implementar seus métodos.
#include "time.h"

// Permite usar nomes como 'cout' diretamente, sem o prefixo 'std::'.
using namespace std;

/*
 * =====================================================================================
 * Métodos Getters: Apenas retornam o valor dos atributos privados.
 * =====================================================================================
 */

// Time:: -> Operador de resolução de escopo. Indica que getHour é um método da classe Time.
int Time::getHour() const
{
  // Retorna o valor do atributo 'hour' do objeto.
  return hour;
}

int Time::getMinute() const
{
  return minute;
}

int Time::getSecond() const
{
  return second;
}

/*
 * =====================================================================================
 * Métodos Setters: Alteram o valor dos atributos privados.
 * =====================================================================================
 */

// O parâmetro 'hour' (variável local) tem o mesmo nome do atributo 'this->hour'.
void Time::setHour(int hour)
{
  // 'this->hour' se refere ao ATRIBUTO da classe.
  // 'hour' (à direita) se refere ao PARÂMETRO recebido pela função.
  this->hour = hour;
}

void Time::setMinute(int minute)
{
  this->minute = minute;
}

void Time::setSecond(int second)
{
  this->second = second;
}

/*
 * =====================================================================================
 * Outros Métodos
 * =====================================================================================
 */

// Implementação do método print. 'const' garante que ele não altera os dados.
void Time::print() const
{
  // Imprime os atributos do objeto no formato HH:MM:SS.
  // Como 'print' é um método da classe, ele tem acesso direto aos membros privados.
  cout << hour << ":" << minute << ":" << second << endl;
}

// Implementação da lógica para avançar o tempo em um segundo.
void Time::nextSecond()
{
  second += 1; // Incrementa o segundo.

  // Se o segundo chegar a 60...
  if (second >= 60)
  {
    second = 0;  // ...zera o segundo...
    minute += 1; // ...e incrementa o minuto.
  }

  // Se o minuto chegar a 60...
  if (minute >= 60)
  {
    minute = 0; // ...zera o minuto...
    hour += 1;  // ...e incrementa a hora.
  }

  // Se a hora chegar a 24...
  if (hour >= 24)
  {
    hour = 0; // ...zera a hora (meia-noite).
  }
}

/*
 * =====================================================================================
 * Construtor
 * =====================================================================================
 */

// Implementação do construtor usando uma "Lista de Inicialização".
// É a forma preferida e mais eficiente em C++ para inicializar atributos.
// A sintaxe é ': atributo(parametro), ...'
Time::Time(int h, int m, int s) : hour(h), minute(m), second(s)
{
  // O corpo do construtor pode ficar vazio, pois toda a inicialização
  // já foi feita na lista acima.
}