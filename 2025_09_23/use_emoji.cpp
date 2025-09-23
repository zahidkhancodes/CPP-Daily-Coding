#include <iostream>

int main() {
    // U+1F600 is the code for 😀
    // The code must be 8 digits, so we pad it with zeros: 0001F600
    std::cout << "Hello from C++! \U0001F600\n";
    
    // U+1F44D is the code for 👍
    std::cout << "Good job! \U0001F44D\n";
    
    return 0;
}

//Output:--->
/*
Hello from C++! 😀
Good job! 👍       
*/
