#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
   fstream file("nums.txt", ios::in | ios::out);
   double d;
   while (file >> d) {
      cout << d << ' ';
   }
   cout << endl;
   file.clear();
   file.seekp(0);
   file << 1234.56789;
   return 0;
}