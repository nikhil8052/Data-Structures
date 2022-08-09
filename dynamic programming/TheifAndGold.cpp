
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int
f (vector < int >&arr, int i)
{

  if (i == 0 || i == 1)
    return arr[i];

  int maxNum = max (f (arr, i - 1), f (arr, i - 2));
  if (arr[i - 1] + arr[i] > maxNum)
    {
      maxNum = arr[i] + arr[i - 1];
      arr[i] = maxNum;
    }
  else if (arr[i - 2] + arr[i] > maxNum)
    {
      maxNum = arr[i] + arr[i - 2];
      arr[i] = maxNum;
    }


}

int
main ()
{

  int n;
  cin >> n;
  vector < int >arr (n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  f (arr, n - 1);
  cout << arr[n - 1];
  cout<<" Not Done ";
  return 0;
}
