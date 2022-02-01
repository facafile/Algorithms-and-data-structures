#include <iostream>

using namespace std;

template <class T>
class Lista
{
   struct Cvor
   {
      string data;
      Cvor *next;
      Cvor *previous;
   };
   Cvor *glava = nullptr;
   Cvor *rep = nullptr;

public:
   bool upis(string element)
   {
      Cvor *el = new (nothrow) Cvor;
      if (el == nullptr)
         return false;

      el->data = element;
      el->next = nullptr;
      el->previous = rep;
      if (glava == nullptr)
      {
         glava = el;
         rep = el;
      }
      else
      {
         rep->next = el;
         rep = el;
      }

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
   int n;
   string a;
   Lista<string> list;
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