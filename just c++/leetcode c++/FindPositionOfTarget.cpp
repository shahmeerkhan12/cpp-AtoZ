#include <iostream>
#include <vector>
using namespace std;
int searchforIndex(vector<int> nums, int target)
{
   // we do it by the binary search
   int index = 0;
   int len = nums.size();
   int high = len - 1;
   int low = 0;
   // setting the mid point
   while (low < high)
   {
      int mid = low + (high - low) / 2;
      if (nums[mid] == target)
      {
         index = mid;
         /* code */
      }
      else if (nums[mid] < target)
      {
         low = mid + 1;
         index = mid + 1;
         /* code */
      }
      else if (nums[mid] > target)
      {
         high = mid - 1;
         index = mid - 1;
         /* code */
      }
   }
   return index;
}
int main()
{
   vector<int> numArray;
   numArray.push_back(1);
   numArray.push_back(3);
   numArray.push_back(5);
   numArray.push_back(7);
   for (int i = 0; i < numArray.size(); i++)
   {
      cout << numArray[i] << " ";
   }
   cout << endl;

   cout << searchforIndex(numArray, 3);
}
