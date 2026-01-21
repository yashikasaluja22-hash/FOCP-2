#include <iostream>
using namespace std;
int main() {
int num;
int sum = 0;
do{  
  cout << "Enter a number: ";
  cin >> num;
  if(num < 0){
    cout << "INVALID INPUT!!\n";
    break;
  }
  sum += num;
}while(num > 0);

cout << "TOTAL SUM: " << sum;
return 0;
}