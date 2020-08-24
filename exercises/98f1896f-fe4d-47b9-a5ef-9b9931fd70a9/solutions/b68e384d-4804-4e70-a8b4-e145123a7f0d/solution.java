public static String caesarCipher(String s, int k) {
    return s.chars()
        .map(cp -> Character.isLowerCase(cp) ? (cp - 'a' + k) % ('z' - 'a' + 1) + 'a'
                 : Character.isUpperCase(cp) ? (cp - 'A' + k) % ('Z' - 'A' + 1) + 'A' : cp)
        .collect(StringBuilder::new, StringBuilder::appendCodePoint, StringBuilder::append)
        .toString();