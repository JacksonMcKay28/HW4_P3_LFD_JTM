#include <iostream>

using namespace std;

int main() {
  int * Array;
  int t =0;
  cin >> t;

  Array = new int[t];

  for (int i = 0; i < t; i++) 
  {
    cin >> Array[i]; 
  }
    
  for (int j = 0; j < t; j++) 
  {
    switch (Array[j]) 
    {
      case 1:
        cout << "1" << endl;
        break;
      case 2:
        cout << "2" << endl;
        break;
      case 3:
        cout << "6" << endl;
        break;
      case 4:
        cout << "4" << endl;
        break;
      case 5:
        cout << "0" << endl;
        break;
      case 6:
        cout << "0" << endl;
        break;
      case 7:
        cout << "0" << endl;
        break;
      case 8:
        cout << "0" << endl;
        break;
      case 9:
        cout << "0" << endl;
        break;
      case 10:
        cout << "0" << endl;
        break;
    }
  }
}