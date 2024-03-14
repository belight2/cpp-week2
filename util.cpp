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
  srand((unsigned int)time(NULL));
  int number = 0;
  number = rand()%900 + 100; // 100부터 999
  return to_string(number);
}
