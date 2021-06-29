#include <iostream>
#include <locale>
#include <string>


int main () {

    std::string n;
    std::cin>>n;

      std::locale loc;

      for(std::string::size_type  i = 0; i < n.length(); ++i) {


        std::cout<<std::tolower(n[i], loc);
        std::cout<<"Oaaa";
      }



}
