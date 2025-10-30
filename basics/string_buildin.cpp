#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "there";
    cout << "s1:" << s1 <<"\n" ;
    cout << "s2:" << s2 << endl;

    // 🔹 Concatenation
    string s3 = s1 + " " + s2;
    cout << "Concatenation: " << s3 << endl;

    // 🔹 Append
    s1.append(" Everyone");
    cout << "After append: " << s1 << endl;

    // 🔹 Length / Size
    cout << "Length of s2: " << s2.length() << endl;

    // 🔹 Access characters
    cout << "First char of s2: " << s2[0] << endl;

    // 🔹 Substring
    cout << "Substring of s1: " << s1.substr(0, 5) << endl;  // "Hello"

    // 🔹 Comparison
    if (s2 == "there")
        cout << "s2 equals 'there'" << endl;

    // 🔹 Insert
    s2.insert(0, "it's ");
    cout << "After insert: " << s2 << endl;

    // 🔹 Erase
    s2.erase(0, 5); // remove "Ms. "
    cout << "After erase: " << s2 << endl;

    // 🔹 Find
    int pos = s1.find("Everyone");
    cout << "Position of 'Everyone' in s1: " << pos << endl;

    // 🔹 Replace
    s1.replace(6, 8, "there");
    cout << "After replace: " << s1 << endl;

    return 0;
}
