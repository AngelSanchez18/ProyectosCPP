#include <iostream>

int main(){
int n;
std::cout << ("Odd and even calculator\n ") << std::endl;
std::cout << ("Please write your number: ") << std::endl;
std::cin >> n;
if(n % 2 == 0){
    std::cout << ("Even") << std::endl;
}else{
    std::cout << ("Odd") << std::endl;
}
return 0;
}