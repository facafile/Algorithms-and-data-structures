#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
class Stog
{
   struct cvor
   {
      cvor *next;
      int data;
   };
   cvor *top = nullptr;

public:
   ~Stog()
   {
      int x;
      while (top)
      {
         this->pop(x);
         cout << x << " ";
      }
   }
   bool push(int item)
   {
      cvor *a = new (nothrow) cvor;
      if (a == nullptr)
      {
         return false;
      }
      a->data = item;
      a->next = top;
      top = a;

      return true;
   }
   bool pop(int &item)
   {
      if (top == nullptr)
         return false;
      item = top->data;
      cvor *tmp = top;
      top = top->next;
      delete tmp;
      return true;
   }
   void print()
   {
      Stog x;
      int el;
      while (this->pop(el))
      {
         cout << el << " ";
         x.push(el);
      }
      while (x.pop(el))
      {
         this->push(el);
      }
   }
};
int main()
{
   int s;
   srand((unsigned)time(0));
   Stog *a = new Stog();
   for (int i = 0; i < 101; i++)
   {
      s = rand();
      a->push(s);
   }
   delete a;
   return 0;
}