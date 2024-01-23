#include<iostream>
using namespace std;
// void printMat(int a[row][],int row,int col)
// {
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             cout<<a[i][j]<<" ";
//         }cout<<endl;
//     }
// }
int main()
{
    int a[4][5]={{2,3,4,5,34},{2,3,4,5,34},{2,4,3,2,4},{2,3,4,5,34}};
    int row=4;
    int col=5;
    int p,q;
    for(int i=0;i<row;i++)
    {
        int maxi=-1;
        for(int j=0;j<col;j++)
        {
            
            if(maxi<a[i][j]){
                maxi=a[i][j];
                p=i;
                q=j;
            }
        }
        for()

    }
    // printMat(a,row,col);
    
}