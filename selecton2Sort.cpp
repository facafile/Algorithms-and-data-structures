#include <iostream>

using namespace std;

void selection2Sort(int A[], int n, char smjer)
{
   for (int i = 0; i < n / 2; i++)
   {
      int min = i, max = n - 1 - i, tmin, tmax;
      for (int j = i; j < n - i; j++)
      {
         if (A[min] > A[j])
            min = j;
         if (A[max] < A[j])
            max = j;
      }
      int smaller = smjer == '0' ? i : n - 1 - i;
      int larger = smjer == '0' ? n - 1 - i : i;
      tmin = A[min];
      tmax = A[max];
      A[min] = A[smaller];
      A[max] = A[larger];
      A[smaller] = tmin;
      A[larger] = tmax;
   }
}

int main()
{
   int n;
   int broj;
   char o;
   cout << "upisi n : ";
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cout << "upisi broj : ";
      cin >> broj;
      arr[i] = broj;
   }
   cout << "odaberi smjer, 0 za uzlazno, 1 za silazno : ";
   cin >> o;
   selection2Sort(arr, n, o);
   for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
   return 0;
}