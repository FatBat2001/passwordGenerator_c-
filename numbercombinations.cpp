#include<iostream>
using namespace std;
#define read(FILE) freopen(FILE, "r", stdin)
#define write(FILE) freopen(FILE, "w", stdout)

int main () 
{
    write("output.txt");
    for (int _1 = 0; _1 <= 8; _1 ++ ) {
        for (int _2 = 0; _2 <= 8; _2 ++ ) {
            for (int _3 = 0; _3 <= 8; _3 ++ ) {
                for (int _4 = 0; _4 <= 8; _4 ++ ) {
                    for (int _5 = 0; _5 <= 8; _5 ++ ) {
                        for (int _6 = 0; _6 <= 8; _6 ++ ) {
                            for (int _7 = 0; _7 <= 8; _7 ++ ) {
                                for (int _8 = 0; _8 <= 8; _8 ++ ) {
                                    printf("%d%d%d%d%d%d%d%d\n",_1, _2, _3, _4, _5, _6, _7, _8);
                                }
                            }
                        }
                    }
                }
            }   
        }
    }


}