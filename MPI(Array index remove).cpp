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

    int delindex;
    cout << endl;
    cout << "Enter index number : ";
    cin >> delindex;

    for(int i = delindex; i < n - 1; i++)
    {
        array[delindex] = array[delindex + 1];
        delindex++;
    }

    cout << "Modified array are : ";
    for(int i = 0; i < n - 1; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
