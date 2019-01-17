#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
  cout<< "Executing <shell_script.sh> " << endl;
  system("./shell_script.sh");
  return 0;
}
