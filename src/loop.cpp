#include <iostream>

int main() 
{
    while(true)
    {
        std::string key;
        std::cout << "continue? [y/n] \n";
        std::cin >> key;
        if(key == "n")
        {
            break;
        }
        if(key == "y")
        {
            int number;
            std::cout << "enter number: \n";
            std::cin >> number;
            if(number % 2 == 0)
            {
                std::cout<<"number is: " << number<< " and genap" <<std::endl;
            }
            else
            {
                std::cout<<"number is: " << number<< " and ganjil" <<std::endl;
            }
            
        }
       
    }
    std::cout << "process finished";
    std::cin.get();
    return 0;
}
