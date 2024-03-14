#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
using pi = pair<int,int>;
void playGame(const string &ans);
void printCurrentState(const pi &cur);
vector<bool> fillTheInformation(const string &ans);
pi checkStrikeAndBall(const string *ans, const string &guess);
int main(){
  string ans;
  cout << "Enter a answer: ";
  cin >> ans;
  playGame(ans);
}
