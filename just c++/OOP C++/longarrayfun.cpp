// author: shahmeer khan
// program array as functions
#include <iostream>
using namespace std;
const int ARRAY_SIZE = 10;
void initializeArray(int x[], int sizeX);
void fillArray(int x[], int sizeX);
void printArray(const int x[], int sizeX);
int sumArray(const int x[], int sizeX);
int indexLargestElement(const int x[], int sizeX);
void copyArray(int list1[], int src, int list2[], int tar, int numOfElements);
int main()
{
  int listA[ARRAY_SIZE] = {0};
  int listB[ARRAY_SIZE];
  cout << "Line 1: listA elements: ";
  printArray(listA, ARRAY_SIZE);
  cout << endl;
  initializeArray(listB, ARRAY_SIZE); // Line 4
  cout << "Line 5: listB elements: ";
  printArray(listB, ARRAY_SIZE);
  cout << endl
       << endl;
  cout << "Line 8: Enter " << ARRAY_SIZE << " integers: ";
  fillArray(listA, ARRAY_SIZE);
  cout << endl; // Line 10
  cout << "Line 11: After filling listA, "
       << "the elements are:" << endl;
  printArray(listA, ARRAY_SIZE); // Line 12
  cout << endl
       << endl;
  cout << "Line 14: The sum of the elements of "
       << "listA is: " << sumArray(listA, ARRAY_SIZE) << endl
       << endl;
  cout << "Line 15: The position of the largest "
       << "element in listA is: " << indexLargestElement(listA, ARRAY_SIZE) << endl;
  cout << "Line 16: The largest element in "
       << "listA is: " << listA[indexLargestElement(listA, ARRAY_SIZE)] << endl
       << endl;
  copyArray(listA, 0, listB, 0, ARRAY_SIZE); // Line 17
  cout << "Line 18: After copying the elements "
       << "of listA into listB," << endl
       << " listB elements are: ";
  printArray(listB, ARRAY_SIZE); // Line 19
  cout << endl;                  // Line 20
  return 0;
}
void initializeArray(int list[], int listSize)
{
  int index;
  for (index = 0; index < listSize; index++)
    list[index] = 0;
}
void fillArray(int list[], int listSize)
{
  int index;
  for (index = 0; index < listSize; index++)
    cin >> list[index];
}
void printArray(const int list[], int listSize)
{
  int index;
  for (index = 0; index < listSize; index++)
    cout << list[index] << " ";
}
int sumArray(const int list[], int listSize)
{
  int index;
  int sum = 0;
  for (index = 0; index < listSize; index++)
    sum = sum + list[index];
  return sum;
}
dexLargestElement(const int list[], int listSize)
{
  int index;
  int maxIndex = 0;
  for (index = 1; index < listSize; index++)
    if (list[maxIndex] < list[index])
      maxIndex = index;
  return maxIndex;
}
void copyArray(int list1[], int src, int list2[], int tar, int numOfElements)
{
  for (int index = src; index < src + numOfElements; index++)
  {
    list2[index] = list1[tar];
    tar++;
  }
}
