// Linear search
#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    cout << "enter size of array:" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "enter elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "array:";
    printarray(arr, n);
    cout << "enter key:";
    int key;
    cin >> key;
        bool found=  linearsearch(arr, n, key);
  
    if (found)
    {
        cout << "key is present:";
    }
    else
    {
        cout << endl
             << "key is absent:";
    }
    cout << endl
         << "done";
}