#include<iostream>
using namespace std;

int main()
{
    int firstarr[50], secondarr[50], firstsize, secondsize, size, i, k, mergedarr[100];
  
    cout << "Enter Array 1 Size: ";
    cin >> firstsize;
    cout << "Enter Array 1 Elements: ";
    for(i = 0; i < firstsize; i++)
    {
        cin >> firstarr[i];
        mergedarr[i] = firstarr[i]; // Copy first array into merged array
    }
    cout << "Enter Array 2 Size: ";
    cin >> secondsize;
    cout << "Enter Array 2 Elements: ";
    for(i = 0; i < secondsize; i++)
    {
        cin >> secondarr[i];
    }
    
    size = firstsize + secondsize;
    for(i = 0, k = firstsize; k < size && i < secondsize; i++, k++)
    {
        mergedarr[k] = secondarr[i];
    }
    
    // Display the merged array
    cout << "Now the new array after merging is:\n";
    for(i = 0; i < size; i++)
    {
        cout << mergedarr[i] << "  ";
    }

    cout << endl;
    
    return 0;
}
