/*In C++, the `isalpha()` function is part of the `<cctype>` header, and it is used to check if a character 
is an alphabetic character (a letter).

Here's an example usage within a C++ program:

*/
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch1 = 'A';
    char ch2 = '1';

    if (isalpha(ch1)) {
        cout << ch1 << " is an alphabetic character." << std::endl;
    } else {
        cout << ch1 << " is not an alphabetic character." << std::endl;
    }

    if (isalpha(ch2)) {
        cout << ch2 << " is an alphabetic character." << std::endl;
    } else {
        cout << ch2 << " is not an alphabetic character." << std::endl;
    }

    return 0;
}
/*
In this example, `isalpha(ch)` returns a non-zero value if `ch` is an alphabetic character, and 0 otherwise. 
The output of the program would be:


A is an alphabetic character.
1 is not an alphabetic character.
*/
