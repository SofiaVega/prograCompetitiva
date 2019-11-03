#include <iostream>
#include <limits.h>
using namespace std;

int main() {
  int n, serval;
  int numRuta, minTime=INT_MAX;
  int initTime, lapso, primerBus, mult;
  cin >> n;
  cin >> serval;
  for(int i=0; i<n; i++){
    cin >> initTime;
    cin >> lapso;
    if(initTime>=serval){
      primerBus=initTime;
    }else{
      mult=(serval-initTime)/lapso;
      if((serval-initTime)%lapso!=0)mult++;
      primerBus=initTime+mult*lapso; 
    }
    if(primerBus<=minTime){
      minTime=primerBus;
      numRuta=i+1;
    }
  }
  cout << numRuta<< endl;
}
