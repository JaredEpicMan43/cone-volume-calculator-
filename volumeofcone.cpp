#include <iostream>

int main(){
float r;
float h;
float answer;
std::cout << "enter the radius: ";
std::cin >> r;
std::cout << "enter the height: ";
std::cin >> h;
answer = .33 * (3.14 * h) * (r * r);
std::cout << answer;
return 0;
}
