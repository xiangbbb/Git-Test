//Junxiang Liu

#include <iostream>

using namespace std;
int sum(int n);
int product(int p);

int main(){
  cout << "Hello World!" << endl;
  int n;
  cout << "Input numbers " << endl;
  cin >> n;
  int s = sum(n);
  cout << "Sum: " << s << endl;
  
  int p = product(n);
  cout << "Product: " << p << endl;
}
int sum(int n){
  int s = 0;
  for(int i = 1; i <= n; i ++){
    s = s + i;
  }
  return s;
}
int product(int p){
  int s = 1;
  for(int i = 1; i <= p; i ++){
    s = s * i;  
  }
  return s;
}
