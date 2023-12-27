#include <iostream>
using namespace std;
// fun for printing array
void printarray(int num[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
}
// fun for min max of array
// int maxarray(int num[], int size)
// {
//     int max = INT32_MIN;
//     for (int i = 0; i < size; i++)
//     {

//         if (num[i] > max)
//         {
//             max = num[i];
//         }
//     }
//         return max;
// }
// int minarray(int num[], int size)
// {
//     int min = INT32_MAX;
//     for (int i = 0; i < size; i++)
//     {

//         if (num[i] < min)
//         {
//             min = num[i];
//         }
//     }
//         return min;
// }

// for (int i = 0; i < size; i++)
// {
//     cout << num[i] << " ";
// }
// cout << endl;
// }
int reversearray(int num[], int size)
{
    int start = 0;
    int end = 1;
    while (start<=size)
    {
        swap(num[start], num[end]);
        start+=2, end+=2;
    }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << num[i] << " ";
    // }
    // cout << endl;
    cout<<"after reverse:";
    printarray(num,size);
}
int main()
{

    cout << "enter size of array:" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "enter array elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // printarray(arr,n);
    // cout << "maximum of array =" << maxarray(arr, n)<<endl;
    // cout << "minimum of array =" << minarray(arr, n)<<endl;
    cout << "before reverse:";
    printarray(arr, n);
    cout << "done1"<<endl<<endl;

        reversearray(arr, n);
    cout << "done2";
}