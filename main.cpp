#include <iostream>
#include <iomanip>
using namespace std;
int main() {

const int SIZE = 5;
  int temprature[SIZE];

  cout << "Enter " << SIZE << " temperature:\n";
  

  for (int i = 0; i < SIZE; i++)
  {
    cin >> temprature[i]; 
  }
  
  int sum = 0;
  int average = 0;
  int highest = 0;
  int lowest = 0;
  cout << endl;
  for (int i = 0; i < SIZE; i++)
  {
    sum = sum + temprature[i];
    average = sum / 5;
    highest = temprature[3];
    lowest = temprature[2];
}

  
  cout << "The average temprature is " << setprecision(2) << fixed <<  average << endl;
  cout << "The highest temperature is " << setprecision(2) << fixed << highest << endl;
  cout << "The lowest temperature is " << setprecision(2) << fixed << lowest << endl;
}