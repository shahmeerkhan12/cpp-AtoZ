#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void move_zeros_to_end(std::vector<int> &arr)
{

   stable_partition(arr.begin(), arr.end(), [](int n)
                    { return n != 0; });
}
int main()
{

   vector<int> arr = {1, 2, 3, 0, 4, 5, 0};

   for (auto &&i : arr)
   {
      cout << i << " ";
   }
   cout<<endl;
   move_zeros_to_end(arr);
   for (auto &&i : arr)
   {
      cout << i << " ";
   }
   return 0;
}