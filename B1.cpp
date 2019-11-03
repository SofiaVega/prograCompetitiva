#include <iostream>
using namespace std;

int main() {
  int n, pos=0, neg=0, mitad, x;
  cin >>n;
  mitad=n/2;
  if(n%2!=0)mitad++;
  for(int i=0; i<n; i++){
    cin >> x;
    if(x>0){
      pos++;
    }else if(x<0){
      neg++;
    }
  }
  if(pos>=mitad){
    cout << 1 << endl;
  }else if(neg>=mitad){
    cout << -1<<endl;
  }else{
    cout << 0 << endl;
  }
}
