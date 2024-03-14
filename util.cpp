#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
void printCurrentState(const pair<int,int> &cur){
  cout << "Strikes: " << cur.X << ", " << "Balls: " << cur.Y << '\n';
}
vector<bool> fillTheInformation(const string &ans){
  vector<bool> res(10);
  for(int i = 0; i < ans.size(); i++)
    res[ans[i] - '0'] = 1;
  return res;
}
string CreateRandomNumber(){
  // Fisher-Yates Shuffle Algorithm
  srand((unsigned int)time(NULL));
  vector<char> v;
  for(int i = 0; i <= 9; i++) v.push_back(i+'0');
  int sz = v.size();
  for(int i = sz-1; i > 0; i--){
    int j = rand() % (i+1);
    swap(v[i], v[j]);
  }
  return string(v.begin(), v.begin()+3);
}
