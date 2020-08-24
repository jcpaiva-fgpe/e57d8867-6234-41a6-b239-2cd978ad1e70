public static String sigilize(String desire) {
  String str = new StringBuilder(desire).reverse().toString();
  return str.toUpperCase().chars()
      .mapToObj(cp -> "" + (char)cp)
      .distinct()
      .filter(s -> s.matches("[^AEIOU\\s]"))
      .collect(StringBuilder::new, StringBuilder::append, StringBuilder::append)
      .reverse()
      .toString();
}
