#include <iostream>

using namespace std;

void Zamijeni(string *prvi, string *drugi)
{
   string pom = *prvi;
   *prvi = *drugi;
   *drugi = pom;
}
void BubbleSortPoboljsani(string A[], int N, int smjer)
{
   int prom = 1;

   for (int i = 0; prom; i++)
   {
      prom = 0;
      for (int j = 0; j < N - i - 1; j++)
      {
         if (smjer == 1 && A[j] > A[j + 1])
         {
            prom = 1;
            Zamijeni(&A[j], &A[j + 1]);
         }
         else if (smjer == 0 && A[j] < A[j + 1])
         {
            prom = 1;
            Zamijeni(&A[j], &A[j + 1]);
         }
      }
   }
   for (int i = 0; i < 4; i++)
   {
      cout << A[i];
   }
   cout << "\n\n";
}

int main()
{
   string arr[] = {"a", "b", "c", "d"};
   BubbleSortPoboljsani(arr, 4, 0);

   BubbleSortPoboljsani(arr, 4, 1);
   return 0;
}