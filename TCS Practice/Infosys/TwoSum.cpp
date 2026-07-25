
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;cin>>n; int arr[n];
  int target = 6;
  for(int i=0; i<n; i++){
      cin >> arr[i];
  }
  
  
  unordered_map<int, int> mp;
  for(int i=0; i<n; i++){
      int ans = target - arr[i];
      if(mp.count(ans)){
          cout << mp[ans] << " "<< i << endl;
      }
       mp[arr[i]] = i; 
      
  }

  

    return 0;
}



















//  #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n; 
//     int arr[n];
//     int target = 6;
    
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
    
//     unordered_map<int, int> mp;
//     for(int i = 0; i < n; i++){
//         int ans = target - arr[i];
        
//         if(mp.count(ans)){
//             // mp[ans] is the first index, ans is the first value
//             // i is the second index, arr[i] is the second value
//             cout << "First element - Index: " << mp[ans] << ", Value: " << ans << endl;
//             cout << "Second element - Index: " << i << ", Value: " << arr[i] << endl;
//             return 0; 
//         }
        
//         mp[arr[i]] = i; 
//     }

//     return 0;
// }













