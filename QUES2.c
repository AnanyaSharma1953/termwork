#include<iostream>
using namespace std;
int main() 
{
    cout << "Enter string: ";
    string st = "";
    getline(cin, st);

    int n = st.length();
    string s1 = "";  // String to store non-duplicates

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        // Check if the character appears more than once
        for (int j = 0; j < n; j++) {
            if (i != j && st[i] == st[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If the character is not a duplicate, add it to s1
        if (!isDuplicate) {
            s1 += st[i];
        }
    }
    cout << "Non-duplicate characters: " << s1 << endl;
    return 0;
}








