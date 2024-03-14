#include <iostream>
#include <string>
#include <utility>
#include <vector>
#define X first
#define Y second
using namespace std;
vector<bool> fillTheInformation(const string &ans);
void printCurrentState(const pair<int,int> &cur);
pair<int,int> checkStrikeAndBall(const string &ans, const string &guess, vector<bool> &isUsed){
  pair<int,int> res = {0, 0};
  for(int i = 0; i < ans.size(); i++){
    if(!isUsed[guess[i] - '0']) continue;
    (ans[i] == guess[i]) ? res.X++ : res.Y++;
  }
  return res;
}
void playGame(const string &ans){
  string guess;
  vector<bool> isUsed = fillTheInformation(ans);
  bool flag = 0;
  int count = 6;
  while(--count){
    cout << count << " chances left.\n";
    cout << "Enter a guess: ";
    cin >> guess;
    pair<int,int> cur = checkStrikeAndBall(ans, guess, isUsed);
    if(cur.X == 3){
      flag = 1;
      break;
    }
    printCurrentState(cur);
  }
  (flag) ? cout << "You win!" : cout << "You lose!";
}
