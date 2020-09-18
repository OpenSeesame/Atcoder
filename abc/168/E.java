import java.util.Scanner;

public class E {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    long n = sc.nextLong();

    long[] a = new long[n];
    long[] b = new long[n];
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextLong();
      b[i] = sc.nextLong();
    }
    sc.close();
    long ans = 0;

    System.out.println(ans);
  }
}
