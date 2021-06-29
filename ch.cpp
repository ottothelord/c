#include <iostream>
#include <locale>
#include <string>


int main () {

<<<<<<< HEAD
    std::cout<<"xxx";
=======
    std::string n;
    std::cin>>n;

      std::locale loc;

      for(std::string::size_type  i = 0; i < n.length(); ++i) {


        std::cout<<std::tolower(n[i], loc);
        std::cout<<"Oaaa";
      }


>>>>>>> 35ace2678c683ed18b0515621bd011294b18ab38

}
