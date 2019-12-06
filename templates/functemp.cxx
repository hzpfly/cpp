/* Function templates: special functions that can operate with generic types.
 * using template parameters:
 * template <class IDENTIFIER> function_declaration;
 * template <typename IDENTIFIER> function_declaration;
 * To use this function we use the following format for the function call:
 * function_name <TYPE> (parameters);
 */

#include <iostream>
using namespace std;

template <class T>
T GetMax (T a, T b) {
    T result;
    result = (a>b)?a : b;
    return (result);
}

int main() {
    int i = 3, j = 4, k;
    long l=10, m = 5, n;
    k = GetMax<int>(i,j);
    n = GetMax(l, m);
    cout << k << endl;
    cout << n << endl;
    return 0;
}
