//Junxiang Liu

#include <iostream>

using namespace std;
int sum(int n);
int main(){
  cout << "Hello World!" << endl;
  int n;
  cout << "Input numbers " << endl;
  cin >> n;
  int s = sum(n);
  cout << "Sum: " << s << endl;
}
int sum(int n){
  int s;
  for(int i = 0; i <= n; i ++ ){
    s = s + i;
  }
  return s;

}
