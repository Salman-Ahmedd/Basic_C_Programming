#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;

    int array[n];

    cout << "Enter array : ";
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int check;
    cout << endl;
    cout << "Enter number : ";
    cin >> check;

    int count = 0;

    for(int i = 0; i < n - 1; i++)
    {
        if(array[i] % check == 0)
        {
            array[i] = array[i + 1];
            i++;
            count++;
        }
    }

    cout << "Modified array are : ";
    for(int i = 0; i < n - count; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
