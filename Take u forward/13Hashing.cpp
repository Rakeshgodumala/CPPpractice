// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n; 
//     cin >> n;
    
// vector<int> arr(n);
// for(int i=0; i<n; i++){
//     cin >> arr[i];
// }
 

//     int hash[15] = {0};
//     for(int i=0; i<n;i++){
//         hash[arr[i]] = hash[arr[i]] + 1;
//     }
    
//     int q;
//     cin >> q;
//     while(q--){
//         int num;
//         cin >> num;
        
//         cout << hash[num] << " ";
        
//     }
//     return 0;
// }



/// frequency check using hashing************************


// #include<bits/stdc++.h>

// using namespace std;


// int main(){
//     string s; 
//     cin >> s;
    


// int hash[256] = {0};
// for(int i=0; i<s.size(); i++){
//     hash[s[i]- 'a']++;
// }


// char q;
// cin >> q;

// while(q--){
//     char ch;
//     cin >> ch;
//     cout << ch << " ->"<<hash[ch-'a'] << endl ;     /// ch -a check all string element eg: to find b how many time repeated. ch take as b  and a take as 0 and b take as 1 and so on. so we can find the frequency of any character in string.
    
     
// }

 
    
//     return 0;
// }






























// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     map<int , int> mp;
//     for(int i=0; i<n; i++){
//         mp[arr[i]]++;
//     }

//     // for(auto it : mp){
//     //     cout << it.first << " -> " << it.second << "  " << endl;
//     // }

//     /// another way to print the frequency of element in array using map

//     // int query;
//     // cin >> query;

//     // while(query--){
//     //     int num;
//     //     cin >> num;
//     //     cout << num << " ->" << mp[num] << endl;
//     // }
 
    
//     return 0;
// }







#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;

    int arr[n];
    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    for(auto it : mp){
        cout << it.first << "->" << it.second << endl;
    }
     
    return 0;
}



/// in map time complexity is O(log n) in all cases. storing and fetching  and in unordered map time complexity is O(1) but in worst case it can be O(n) if there is a collision.
    

