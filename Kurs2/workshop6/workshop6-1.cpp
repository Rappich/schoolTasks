#include <iostream>
#include <cstdlib>
using namespace std;

#define SIM_ITERATIONS 5
int main()
{

    srand(time(NULL));

for( int i = 0; i < SIM_ITERATIONS; i++ )
{
cout << rand() << endl;
}
return 0;
}
