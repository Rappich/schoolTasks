#include <stdio.h>
int main() {
int e[3] = {1, 12, 123};
int i, *pInd;

pInd = &i;

for(i = 0; i < 3; i++)
{

printf("\nr[%i] address = %u %u %u %u %u %u ", i, &e[i], &i[e],
pInd + i, i + pInd, e + i, i + e);
printf("\nr[%i] value = %u %u %u %u %u %u ", i, &e[i], &i[e],
*(pInd + i), *(i + pInd), *(e + i), *(i + e));
}
return 0;
}