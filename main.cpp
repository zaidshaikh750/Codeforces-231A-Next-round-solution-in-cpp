#include<bits/stdc++.h>
using namespace std;
int main (){
  ios_base :: sync_with_stdio(false);
  cin.tie(0);
  int n, k, ans = 0;
  int arr[50];
  cin >> n >> k;
  for (int i=0; i<n; i++){
    cin >> arr[i];
  }
  for (int i=0; i<n; i++){
    if (arr[i]>=arr[k-1] && arr[i] > 0){
      ans++;
    }
  }
    cout << ans << endl;
  return 0;
}
