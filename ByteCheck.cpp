/*https://stackoverflow.com/a/2274675/3598205*/

#include <iostream>
#include <limits.h>

using namespace std;
int bytes_needed(unsigned long long x);

int main()
{
    cout<<"Number of Bytes needed for your number is: \n \n ";
    int ans = bytes_needed(-14400000);
    cout<<ans<<"\n";

    return 0;
}


int bytes_needed(unsigned long long x) {
   int bits_needed = sizeof(x)*CHAR_BIT - __builtin_clzll(x);
   if (bits_needed == 0)
      return 1;
   else
      return (bits_needed + 7) / 8;
}
