// A
// B C
// C D E
// D E F G

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             char ch='A'+row+col-2;
//             cout << ch;

//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }

// *****
// ****
// ***
// **
// *
//

// A
// B C
// C D E
// D E F G
//

// ABCDE
// BCDE
// CDE
// DE
// E
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         char ch='A'+row-1;
//         while (col <=(n-row+1))
//         {

//             cout <<ch;
//             ch++;

//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }

//     *
//    **
//   ***
//  ****
// *****

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // print space
        int space = n - row+1;
        int value = 1;
        while (space)
        {
            cout << value;
            space--;
            value++;
        }
        int col = 2;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        int dol = 1;
        while (dol <= row)
        {
            cout << "*";
            dol++;
        }
        // int last=n;
        // int sol=1;
        // while (sol<=(last-row+1))
        // {
        //     cout <<last;
        //     last--;
        // }
        cout << endl;
        row++;
    }
}