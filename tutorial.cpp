#include "Config.h"
#include "MathFunctions.h"
#include <cmath>
#include <cstdlib> 
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
  std::cout << "Project Version: " << PROJECT_VERSION_MAJOR << "." << PROJECT_VERSION_MINOR << std::endl;
  std::cout << "Author: " << AUTHOR_NAME << std::endl;

  if (argc < 2) {
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }

  const double inputValue = atof(argv[1]);

  // use library function
  const double outputValue = mathfunctions::sqrt(inputValue);
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
  return 0;
}
