#include <string>

string strToLeet(string& s) {
    for (char& c : s) {
        switch (c) {
            case 'o':
                c = '0';
                break;
            case 'l':
                c = '1';
                break;
            case 'e':
                c = '3';
                break;
            case 'a':
                c = '4';
                break;
            case 't':
                c = '7';
                break;
            case 's':
                if (std::isspace(c) || c == '\0' || c == '.' || c == ',' || c == '!' || c == '?') {
                    c = 'Z';
                }
                break;
        }
    }
    return s;
}