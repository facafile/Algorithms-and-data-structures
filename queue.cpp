#include <iostream>
using namespace std;

class Red
{
private:
   struct Cvor
   {
      double value;
      Cvor *next;
   };
   Cvor *start;
   Cvor *end;

public:
   Red() : start(nullptr), end(nullptr){};
   ~Red()
   {
      double x;
      while (skini(&x))
         ;
   }
   bool dodaj(double broj)
   {
      Cvor *novi;
      try
      {
         novi = new Cvor;
      }
      catch (bad_alloc &)
      {
         return false;
      }
      novi->value = broj;
      if (!start)
      {
         start = end = novi;
         return true;
      }
      end->next = novi;
      end = novi;
      return true;
   }
   bool skini(double *broj)
   {
      if (!start)
         return false;
      Cvor *tmp = start;
      *broj = start->value;
      start = start->next;
      delete tmp;
      return true;
   }
};

int main(void)
{
   double n, k;
   Red q;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cin >> k;
      q.dodaj(k);
   }
   for (int i = 0; i < n; i++)
   {
      q.skini(&k);
      cout << k << " ";
   }
   cout << endl;
}