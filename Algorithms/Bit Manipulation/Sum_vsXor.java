
public static long sumXor(long n) {
    if(n == 0){
        return 1;
    } else {
        String bin = Long.toBinaryString(n);
        int zero_bits = bin.length() - bin.replaceAll("0", "").length();
        return (long)Math.pow(2, zero_bits);
    }
}
