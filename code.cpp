// Solution of 1013 - The Greatest in beecrowd
#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
  int A, B, C , MaiorAB,MaiorAC, MaiorABAC ;
  cin >> A >> B >> C;
  MaiorAB = ((A + B ) + abs(A - B))/2;
  MaiorAC = ((A + C ) + abs(A - C))/2;
  MaiorABAC = ((MaiorAB + MaiorAC) + abs(MaiorAB - MaiorAC))/2;
  cout << MaiorABAC <<" eh o maior" << endl;
    system("pause");
    return 0;
}