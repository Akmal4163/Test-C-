#include <iostream>
#include <string>

int main() 
{
    while(true)
    {
        std::string key;
        std::cout << "continue? [Y/N]\n";
        std::cin >> key;
        if(key == "n") break;
        else 
        {
           int target;
           std::cout<<"enter target number: \n";
           std::cin>>target;
           for(int i = 1; i <= target; i++)
           {
               for(int topleft = target; topleft >= i; topleft--)
               {
                  std::cout << "*";
               }
               for(int top = 1; top <= (2 * i - 1); top++)
               {
                   std::cout << "#";
                   
               }
               for(int topright = target; topright >= i; topright--)
               {
                   std::cout << "*";
               }
               std::cout << std::endl;
           }
           for(int i = 2; i <= target; i++)
           {
               for(int bottomleft = 1; bottomleft <= i; bottomleft++)
               {
                   std::cout << "*";
               }
               for(int bottom = target; bottom >= (2 * i - target); bottom--)
               {
                   std::cout << "#";
               }
               for(int bottomright = 1; bottomright <= i; bottomright++)
               {
                   std::cout << "*";
               }
               std::cout << std::endl;
           }
        }
    }
    std::cout << "process finished";
    std::cin.get();
    return 0;
}
