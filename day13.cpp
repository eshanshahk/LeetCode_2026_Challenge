/*pattern type 5
1111
 222
  33
   4
*/
#include <iostream>
using namespace std;
int main()
{
    int n, num = 1;
    cin >> n;
    for (int i = 0; i < n; i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}