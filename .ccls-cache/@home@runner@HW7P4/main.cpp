#include <iostream>

using namespace std;

int main() {

  int num_days;
  int smallest = 1000000000;
  int day = 0;
  cin >> num_days;
  int junk[num_days];
  for(int n = 0; n < num_days; n++)
    {
      cin >> junk[n];
      
      if(junk[n] < smallest)
      smallest = junk[n];
      day = n;
    }
  
  cout << day;
}
