
public static int kaprekar(int num) {
    int kaprekarCount = 0;
    while(num != 6174){
        num = kaprekarForm(num);
        kaprekarCount++;
    }
    return kaprekarCount;
}

public static int kaprekarForm(int num){
    String numBroken = Integer.toString(num);
    String[] stringArr = numBroken.split("");
    int [] numArr = new int[4];
    for (int i = 0; i < stringArr.length; i++){
        numArr[i] = Integer.parseInt(stringArr[i]);
    }
    Arrays.sort(numArr);
    String smaller = "" + numArr[0] + numArr[1] + numArr[2] + numArr[3];
    String bigger = "" + numArr[3] + numArr[2] + numArr[1] + numArr[0];
    int biggerInt = Integer.parseInt(bigger);
    int smallerInt = Integer.parseInt(smaller);
    return biggerInt - smallerInt;
}
