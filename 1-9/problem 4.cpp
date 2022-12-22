#include <iostream>
#include <string>

int main()
{
    int largestPalindromeProduct = 0;
    
    // For every possible produt of two three digit numbers
    for (int i = 100; i < 1000; ++i)
    {
        for (int j = 100; j < 1000; ++j)
        {
            int currentProduct = i * j;
            std::string currentProductString = std::to_string(currentProduct);
            
            // Check if number is a palindrome by comparing number as string with its reverse
            // Also check if number is greater than our current largest palindrome number
            if (
                (currentProductString == std::string{ currentProductString.rbegin(), currentProductString.rend() }) &&
                (currentProduct > largestPalindromeProduct)
            )
            {
                largestPalindromeProduct = currentProduct;
            }
        }
    }
    
    std::cout << largestPalindromeProduct << "\n";
}
