#include<iostream>
#include<string>


int main () {
std::cout << "what to repeat" << std::endl;
std::string repeat;
std::cin >> repeat;
std::cout << "how many ?" << std::endl;
int n ;
std::cin >> n ;
for (int mn=0 ; mn <= n; mn++)
    std::cout << repeat << std::endl;
std::cout << "done."  << std::endl;
}