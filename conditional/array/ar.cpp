#include <bits/stdc++.h>
using namespace std;

int min_step(int P, int Q, int R){
  vector <int> v = {P,Q,R};
  sort(v.begin() , v.end());



  if (v[0]==v[1] && v[1] == v[2])
    return 0;
  

  int step = 0;
  while(true) {
    v[0]++;
    v[1]++;
    v[2]--;
    step++;
    sort(v.begin(), v.end());
  

  if(v[0]==v[1]  && v[1]==v[2])
    return step;
  

  if((v[0]==v[1] && v[1]+1 == v[2]) || v[1] == v[2]  && v[0]+1 == v[1]){
  
    return -1;
  
}

  }

}

int main(){
  int P,Q,R;
  cin >> P >> Q >> R;
  int result = min_step(P,Q,R);
  cout << result << "\n";




  return 0;

}