#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    double arr[size] = {};
    int index = size,
    deletions = {};

    // Input
    cout << "Enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    // Check Logic
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                // Shifting for original value
                for (int k = i; k < index; k++)
                {
                    arr[k] = arr[k + 1];
                }
                cout << i << " : " << j << endl;
                --index;
                // Shifting for duplicate value
                for (int k = j; k < index; k++)
                {
                    arr[k] = arr[k + 1];
                }
                --index;
                // Important as two values have been removed from the and all the values have been shifted two values back.
                i-=2;
                ++deletions;
                break;
            }
        }
    }

    // Printing
    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << deletions << " duplicate values have been removed from the array\n";
}