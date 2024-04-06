//===============================================================================//
// Assessment 3

// output following with one cout :
/*
Iam Learning Programming
With
Elzero
Web
School
<3
*/

#include <iostream>
using namespace std;

int main ()
{

    cout << "Iam Learning Programming\nWithq\nElzero\nWeb\nSchool\n<3";
    
    return 0;
}


// Another solution :

#include <iostream>
#include <sstream>

int main() {
  std::stringstream ss;
  ss << "Iam Learning Programming\n"
     << "With\n"
     << "Elzero\n"
     << "Web\n"
     << "School\n"
     << "<3" << std::endl;

  std::cout << ss.str();
  return 0;
}


// Another solution :

#include <iostream>

int main() {
  std::cout << R"(Iam Learning Programming
With
Elzero
Web
School
<3)" << std::endl;
  return 0;
}

//===============================================================================//