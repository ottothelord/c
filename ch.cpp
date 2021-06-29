<<<<<<< HEAD
=======
#include <iostream>
#include <locale>
#include <string>


int main () {

    std::string n;
    std::cin>>n;

      std::locale loc;

      for(std::string::size_type  i = 0; i < n.length(); ++i) {


        std::cout<<std::tolower(n[i], loc);

      }



}
>>>>>>> 232ca8226242956c6c56251275ec9074a0f12c95
