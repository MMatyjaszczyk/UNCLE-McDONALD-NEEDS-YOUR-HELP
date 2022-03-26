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
  int x;
  SH("Please, enter length of your fence (please enter whole number from between 3 and 100000 (including), we assume that your fance is not longer than 100km :D )");
  while (true){
    std::cin >> x;
    if(x < 3 or 100000 < x) SH("This number is out of range...");
    else break;
    if(k == 25) { SH("That's it, see ya"); return 0; }
    k++;
  }
  
  // Now it's time for math.
  std::cout<< std::endl;
  std::cout << "Length of your fence is:   " << x << " m." << std::endl << std::endl;
  
  // Now we are using very simple math. The area, where 2a + b = x and the area is equal to a*b, will be a*x - 2a^2. Maximum of the area will be for a = x/4. Now we just need to be careful, becouse we are operating only on ints. Now again, simple math and we conclude that maximum area will be for a = floor(x/4) for x = 4t, x = 4t + 1 and x = 4t + 2. For x = 4t + 3 we need to take a = cil(x/4).
  
  SH("If you want to have the largest area, you should divide your fence as we say:>");
  if(x%4 == 3){
    int a = x/4 + 1;
    int b = x - 2*a;
    int area = a*b;
    std::cout<<"a should be: " << a << " . b should be: " << b << " . And you will get: " << area << " square meters:> " << std:: endl;
  } else {
    int a = x/4;
    int b = x - 2*a;
    int area = a*b;
    std::cout<<"a should be: " << a << " . b should be: " << b << " . And you will get: " << area << " square meters:> " << std:: endl;
  }
  return 0;
}
