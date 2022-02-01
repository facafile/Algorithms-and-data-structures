#include <iostream>

using namespace std;

template <class T>
class Lista
{
   template <class X>
   struct Cvor
   {
      X data;
      Cvor<X> *next;
   };
   Cvor<T> *glava = nullptr;

public:
   bool upis(T element)
   {
      Cvor<T> *el = new (nothrow) Cvor<T>;
      if (el == nullptr)
         return false;

      el->data = element;

      Cvor<T> **pom;
      for (pom = &glava; *pom && element > (*pom)->data; pom = &((*pom)->next))
         ;
      el->next = *pom;
      *pom = el;

      return true;
   }
   void ispis()
   {
      while (glava != nullptr)
      {
         cout << glava->data << " ";
         glava = glava->next;
      }
   }
};

int main()
{
   int n, a;
   Lista<int> list;
   cout << "upisi n : ";
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cout << "upisi a : ";
      cin >> a;
      list.upis(a);
   }
   list.ispis();

   return 0;
}