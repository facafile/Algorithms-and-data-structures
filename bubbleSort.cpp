#include <iostream>

using namespace std;

struct zapis
{
   int sifra;
   string naziv;
};

void obicanBubbleSort(zapis A[], int n, char smjer)
{
   for (int i = 0; i < n - 1; i++)
   {
      for (int j = 0; j < n - 1 - i; j++)
      {
         if (smjer == '0')
         {
            if (A[j].sifra < A[j + 1].sifra)
            {
               zapis pom = A[j];
               A[j] = A[j + 1];
               A[j + 1] = pom;
            }
         }
         else
         {
            if (A[j].sifra > A[j + 1].sifra)
            {
               zapis pom = A[j];
               A[j] = A[j + 1];
               A[j + 1] = pom;
            }
         }
      }
   }
}

int main()
{
   int n, s;
   char o;
   string naziv;
   zapis x;
   cout << "upisi n: ";
   cin >> n;

   zapis arr[n];
   for (int i = 0; i < n; i++)
   {
      cout << "upisi sifru ";
      cin >> s;
      cout << "upisi naziv: ";
      cin >> naziv;
      x.naziv = naziv;
      x.sifra = s;
      arr[i] = x;
   }
   cout << "silazno 0, uzčazno 1: ";
   cin >> o;
   obicanBubbleSort(arr, n, o);
   for (int i = 0; i < n; i++)
   {
      cout << arr[i].sifra << " " << arr[i].naziv << "\n";
   }
   return 0;
}
