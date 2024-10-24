#include <iostream>

class Node {
public:
  int info;
  Node *pNext; // nos referimos a la direccion en memoria de next, no a la
               // dereferenciacion.
};

class List {
private:
  Node *pFirst; // apuntador al primer nodo de la clase.
  int iN;       // numero de elementos de la lista.

public:
  typedef Node *position; // definimos position como un alias para Node*

  List() {
    iN = 0;
    pFirst = nullptr;
  }

  ~List() {
    Node *pTemp; // ptmp puntero temporal del tipo Nodo.
    while (pFirst != nullptr) {
      pTemp = pFirst;
      pFirst = pFirst->pNext; // pfirst = (*pfirst).next
      delete pTemp;
    }
  }

  bool isEmpty() { return pFirst == nullptr; }

  position First() { return pFirst; }

  position Last() { return nullptr; }

  void Next(position &pValue) { // como es referencia pasa al siguiente en el
                                // valor original
    pValue = pValue->pNext;     // pValue = (*pValue).next;
  }

  int &Get(position pValue) {
    // std::cout << &pValue << '\n';
    return pValue->info; // return *pValue.info;
  }

  void Insert(position pValue, int &x) {
    Node *pNew =
        new Node;   // creo una nueva direccion en el heap para un tipo Nodo
    pNew->info = x; // (*pNew).info = x;
    pNew->pNext = pValue; // (*pNew).next = pValue;
    if (pFirst == nullptr || pFirst == pValue) {
      pFirst = pNew;
    } else {
      Node *ptmp = pFirst;
      while (pFirst->pNext != nullptr) { // *pfirts.next != nullptr;
        ptmp = ptmp->pNext;              // ptmp = *ptmp.next;
      }
      ptmp->pNext = pNew; // *ptmp.next = pNew;
    }
    iN++;
  }

  void Delete(position pValue) {
    if (pFirst == pValue) {
      pFirst = pFirst->pNext; // pfirst = *pfirst.next
    } else {
      Node *ptmp = pFirst;
      while (pFirst->pNext != pValue) { // *pfirts.next != nullptr;
        ptmp = ptmp->pNext;             // ptmp = *ptmp.next;
      }
      ptmp->pNext = pValue->pNext; // *ptmp.next = *pValue.next;
    }
    delete pValue;
    iN--;
  }

  int Size() { return iN; }
};

int main() {
  List A;
  int x{9};
  A.Insert(A.First(), x);
  // std::cout << A.First() << '\n';
  std::cout << A.Get(A.First());
  return 0;
}
