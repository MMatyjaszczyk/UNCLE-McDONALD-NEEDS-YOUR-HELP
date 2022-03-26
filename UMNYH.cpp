#define SH(x) std::cout << x << std::endl

#include <iostream>
#include <cmath>
#include <string>

int main(){
  
  int k = 0;
  std::string input;
  SH("Hello:> If you want to run this program, please enter 'RUN'. (Anything different, for example 'run', won't work.) If you want to leave, please enter 'exit' :>.");
  while (true){
    std::cin >> input;
    if( input == "RUN" ) break;
    else if( input == "exit" ) return 0;
    else if(k < 10) SH("Not that, try again:>");
    else if(10 <= k and k < 20) SH("Emmmm, not that:>");
    else if(20 <= k and k < 30) SH("I mean, RUN or exit, thats not that hard...");
    else if(30 <= k and k < 38) SH("U ARE DOING THIS ON PURPOSE!!!!");
    else if(k == 38) SH("I give you last warning... 'RUN' or 'exit'...");
    else if(k == 39) SH("I swear, I will do something unpleasent to you...");
    else { SH("Srew this, bay!"); return 0;}
    k++;
  }
  
  k = 0;
  float x;
  SH("Please, enter length of your fence (please enter whole number from between 3 and 100000 (including), we assume that your fance is not longer than 100km :D )");
  while (true){
    std::cin >> x;
    if(x < 3 or 100000 < x) SH("This number is out of range...");
    else if(x != int(x)) SH("That's... That's not a whole number.");
    else break;
    if(k == 25) { SH("That's it, see ya"); return 0; }
    k++;
  }
  
  // Now it's time for math.
  SH(""); SH("");
  
  std::cout << "Length of your fence is:   " << x << " m." << std::endl;
  
}
