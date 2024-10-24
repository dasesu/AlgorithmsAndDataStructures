#include <iostream>

class Node {
public:
  int info; // campo de datos
  Node *pNext; // nos referimos a la direccion en memoria de pNext, no a la
               // dereferenciacion.
};

class List {
private:
  Node *pFirst; // apuntador al nodo cabeza. Este apuntador no se modifica.
  Node *pLast;  // apuntador al ultimo nodo ( nodo cuyo proximo es Null )
  int iN;       // numero de elementos de la lista.

public:
  typedef Node *position; // definimos position como un alias para Node*

  List() {
    iN = 0;
    pFirst = new Node(); // recordemos que new retorna un puntero
    pLast = pFirst;
    pLast->pNext = nullptr;
  }

  ~List() {
    Node *pTemp; // ptmp puntero temporal del tipo Nodo.
    while (pFirst != nullptr) {
      pTemp = pFirst;
      pFirst = pFirst->pNext; // pfirst = (*pfirst).pNext
      delete pTemp;
    }
  }

  bool isEmpty() { return pFirst->pNext == nullptr; }

  position First() { return pFirst; }

  position Last() { return pLast; }

  void Next(position &pValue) {
    pValue = pValue->pNext; // pValue = (*pValue).pNext;
  }

  int &Get(position pValue) { return (pValue->pNext)->info; }

  void Insert(position pValue, int &x) {
    Node *pNew =
        new Node;   // creo una nueva direccion en el heap para un tipo Nodo
    pNew->info = x; // (*pNew).info = x;
    if (pFirst == pValue) {
      pNew->pNext = pFirst->pNext;
      pFirst->pNext = pNew;
    } else {
      pNew->pNext = pValue->pNext;
      pValue->pNext = pNew;
    }
    if (pLast == pValue) {
      pLast = pNew;
    }
    iN++;
  }

  void Delete(position pValue) {
    if (pValue->pNext == pLast) {
      pLast = pValue;
    }
    position pTemp = pValue->pNext;
    pValue->pNext = (pValue->pNext)->pNext;
    delete pTemp;
    iN--;
  }
  int Size() { return iN; }
};

int main() {
  List A;
  int x{3};
  A.Insert(A.First(), x);
  std::cout << A.Get(A.First());
  return 0;
}
