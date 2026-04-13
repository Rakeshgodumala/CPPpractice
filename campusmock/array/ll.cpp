#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n1;
    cin >> n1; // line 6

    int arr1[n1];
    for (int i = 0; i < n1; i++)
    { // line 9
        cin >> arr1[i];
    }

    int n2;
    cin >> n2; // line 14

    int arr2[n2];
    for (int i = 0; i < n2; i++)
    { // line 17
        cin >> arr2[i];
    }

    // UNION

    // 🔴 UPDATED PART START (line 22 to 35)
    for (int i = 0; i < n1; i++)
    {
        bool duplicate = false;

        // check duplicate in arr1
        for (int j = 0; j < i; j++)
        {
            if (arr1[i] == arr1[j])
            {
                duplicate = true;
                break;
            }
        }

        if (duplicate == false)
        {
            cout << arr1[i] << " ";
        }
    }
    // 🔴 UPDATED PART END

    // ✅ NO CHANGE (line 38 onwards)
    for (int i = 0; i < n2; i++)
    {
        bool present = false;

        for (int j = 0; j < n1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                present = true;
                break;
            }
        }

        if (present == false)
        {
            cout << arr2[i] << " ";
        }
    }

    cout << endl;
    return 0;
}