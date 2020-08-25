string isValidHexCode(string str) {
    if(str.size() > 7 || str[0] != '#') return "false";
    for(int i = 1; i < str.size(); i++) {
        if(!isxdigit(str[i])) return "false";
    }
    return "true";
}
