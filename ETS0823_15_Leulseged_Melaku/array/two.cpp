/*
2. Write array declarations, including initializers, for the following:
a. A list of 10 integer voltages: 89, 75, 82, 93, 78, 95, 81, 88, 77, and 82.
b. A list of five double-precision slopes: 11.62, 13.98, 18.45, 12.68, and 14.76.
c. A list of 15 character codes; the first seven codes are f, j, m, q, t, w, and z.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int volatege[10] = {89, 75, 82, 93, 78, 95, 81, 88, 77,82}; 
    double precisionSlopes[5] = {11.62, 13.98, 18.45, 12.68,14.76};
    char codes[15] = {'f','j', 'm','q', 't','w','z', 'l','e', 'n','g', 'u','r','o','p'};
    
   for(int i = 0; i < 10; ++i ) {
      cout<<volatege[i]<<endl;

   }
   cout<<'\n';
  
   for(int j = 0; j < 5; ++j ) {
      cout<<precisionSlopes[j]<<endl;

   }
    cout<<'\n';
    for(int k = 0; k <15; ++k ) {
      cout<<codes[k]<<endl;

   }
    return 0;
}