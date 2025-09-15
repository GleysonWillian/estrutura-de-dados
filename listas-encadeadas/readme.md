**Algumas estruturas de dados dinâmicos:**

* Listas encadeadas
* Pilhas
* Filas
* Árvores

**Pilhas**

* Lembre-se de uma estrutura feitas com pedras, onde a **inserção** ou a **remoção** de elementos no **topo**.
* Operações:

  * Empilhar (PUSH)
  * Desempilhar (POP)
* *LIFO*:Last-in First-out (último a entrar, primeiro a sair).
* Estrutura de um nó:
  typedef struct no{
  int dado (ou qualquer outro tipo de dado);
  struct no *proximo;
  }No;
