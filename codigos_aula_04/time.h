// Guardião de Cabeçalho: Previne erros se este arquivo for incluído várias vezes.
#ifndef TIME_H
#define TIME_H

// 'class' define um novo tipo de dado. Aqui, criamos o tipo "Time".
class Time
{

  // 'private': Membros nesta seção só podem ser acessados por funções da própria classe.
  // Isso protege os dados de modificações incorretas. É o princípio do Encapsulamento.
private:
  int hour;   // Atributo que armazena a hora (0-23).
  int minute; // Atributo que armazena o minuto (0-59).
  int second; // Atributo que armazena o segundo (0-59).

  // 'public': Membros nesta seção formam a interface pública.
  // São as funções que o código externo pode usar para interagir com um objeto Time.
public:
  // Construtor: Função especial para criar e inicializar um objeto Time.
  // Os valores padrão (= 0) permitem criar um Time sem fornecer todos os argumentos.
  Time(int hour = 0, int minute = 0, int second = 0);

  // Método Getter: Retorna o valor de um atributo privado.
  // 'const' ao final indica que o método não modifica o estado do objeto.
  int getHour() const;

  // Método Setter: Altera o valor de um atributo privado.
  void setHour(int hour);

  // Getter para o minuto.
  int getMinute() const;
  // Setter para o minuto.
  void setMinute(int minute);

  // Getter para o segundo.
  int getSecond() const;
  // Setter para o segundo.
  void setSecond(int second);

  // Método que imprime o horário na tela. É 'const' pois apenas lê os dados.
  void print() const;

  // Método que avança o tempo em 1 segundo. Ele modifica o objeto, por isso não é 'const'.
  void nextSecond();
}; // Ponto e vírgula é obrigatório ao final da declaração de uma classe.

#endif // Fim do Guardião de Cabeçalho.
