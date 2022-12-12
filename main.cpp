#include <iostream>
using namespace std;
#include "lib.h"

int main()
{

  int lenght_array;
  cin >> lenght_array;

  float list_number[lenght_array];

  for (int i = 0; i < lenght_array; i++)
  {
    cin >> list_number[i];
  }

  cout << max_in_array(list_number, lenght_array);
}
