#include <iostream>
#include <string>
using namespace std;

class Osoba
{
   unsigned short int god;
   string ime;

public:
   Osoba(){};
   Osoba(unsigned short int god, string ime) : god(god), ime(ime){};
   ~Osoba() {}
   void setG(int g)
   {
      god = g;
   }
   void setI(string ime1)
   {
      ime = ime1;
   }
   int getG()
   {
      return god;
   }
   string getI()
   {
      return ime;
   }
   friend ostream &operator<<(ostream &os, const Osoba &m)
   {
      return os << "{" << m.ime << ", " << m.god << "}";
   }
   friend bool operator<(const Osoba &a, const Osoba &b);
};
bool operator<(const Osoba &a, const Osoba &b)
{
   if (a.god == b.god)
   {
      return a.ime < b.ime;
   }
   return a.god < b.god;
}

template <class T>
void InsertionSort(T A[], int n)
{
   T temp;
   int i, j;

   for (i = 1; i < n; i++)
   {
      temp = A[i];
      for (j = i; j >= 1 && temp < A[j - 1]; j--)
      {

         A[j] = A[j - 1];
      }
      A[j] = temp;
   }
}
int main()
{
   Osoba a[10];
   int god;
   string ime;
   Osoba pom;
   for (int i = 0; i < 10; i++)
   {
      cout << "ime osobe : ";
      cin >> ime;
      cout << "godine osobe : ";
      cin >> god;
      pom.setG(god);
      pom.setI(ime);
      a[i] = pom;
   }
   InsertionSort(a, 10);
   for (int i = 0; i < 10; i++)
   {
      cout << a[i] << " ";
   }
   return 0;
}