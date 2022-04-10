// https://www.acmicpc.net/problem/2503

#include <iostream>
#include <random>
using namespace std;

int main() {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dis(1, 9);

  for (int i=0; i<5; i++) {
    cout << "난수: " << dis(gen) << endl;
  }

  int rn = dis(gen);
  int rn2[3];

  for (int i=0; i<3; i++) {
    rn2[i] = dis(gen);
  }

  for (int i=0; i<3; i++) {
    cout << rn2[i];
  }
  cout << endl;



  // 세 자리의 자연수 abc: 100a + 10b + c

  return 0;
}


