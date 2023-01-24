
/* Problem : Sort a list of strings, lexographically and on the basis of length. */

#include<iostream>

#include<algorithm>

#include<string>

using namespace std;

bool cmp(string a, string b) {
  return a.length() < b.length(); // sorting in ascending value of legnth
}

int main() {

  cout << "Enter number of strings: " << endl;
  int n;
  cin >> n;

  cin.get(); // fetch any extra space after typing string which cin didn't consider

  string arr[100];

  for (int i = 0; i < n; i++) {
    getline(cin, arr[i]);
  }

  sort(arr, arr + n); // sort lexographically

  cout << "sorting lexographically: " << endl;
  /*for(string i: arr){
      cout << i << endl;
      // 100 - i empty lines will also be printed.
  }*/

  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }

  cout << "sorting based on length: " << endl;
  sort(arr, arr + n, cmp);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}