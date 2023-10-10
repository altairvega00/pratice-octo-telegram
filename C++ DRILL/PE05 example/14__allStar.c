string allStar(const string& str)
{
    if (str.length() < 2) {
        return str.substr(str.length()-1);
    }

    //  ''  추가
    return str.substr(0,1) + "*" + allStar(str.substr(1));
}

/*
14THE ALL STAR PROBLEM
Given a string, compute recursively a new string where all the adjacent chars are now separated
by a "*".
• allStar("hello") → "h*e*l*l*o"
• allStar("abc") → "a*b*c"
• allStar("ab") → "a*b" */