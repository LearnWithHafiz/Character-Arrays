#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    char arr1[size * 2 + 1] = {'\0'},
        arr2[size + 1] = {'\0'},
        arr3[size + 1] = {'\0'};
    int index = 0,
    deletions = 0;
    // Input
    cout << "Enter " << size * 2 << " characters for first array: ";
    cin.getline(arr1, size * 2 + 1);
    cout << "Enter " << size << " characters for second array: ";
    cin.getline(arr2, size + 1);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size * 2; j++)
        {
            if (arr2[i] == arr1[j])
            {
                arr3[index] = arr2[i];
                ++index;
                break;
            }
        }
    }
    // Check Logic
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr3[i] == arr3[j])
            {
                // Shifting for original value
                for (int k = i; k < index; k++)
                {
                    arr3[k] = arr3[k + 1];
                }
                cout << i << " : " << j << endl;
                // decrementing the index of final array;
                --index;
                // decrementing i as all values have been shifted once.
                i--;
                ++deletions;
                break;
            }
        }
    }

    // Printing
    for (int i = 0; i < index; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << "are common unique values."<< endl;
    cout << index << " unique elements are found\n";
}