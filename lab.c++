# include <iostream>
# include <string>

using std::cerr;
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    int x{0};

    for (int i = 2; i <= 3; i += 1) {

        for (int j{5}; j > 0; j -= 1) {
            x +=1;

        }
    }

    cout << x;

    return 0;
}
