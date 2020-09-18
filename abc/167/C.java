import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class C {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    int x = sc.nextInt();
    int[] c = new int[n];
    int[][] a = new int[n][m];

    for (int i = 0; i < n; i++) {
      c[i] = sc.nextInt();
      for (int j = 0; j < m; j++) {
        a[i][j] = sc.nextInt();
      }
    }

    boolean bad = false;
    int min = 10000000;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (a[i][j] < x) {
          bad = true;
          break;
        }
      }
      if (!bad && c[i] < min) {
        min = c[i];
      }
    }
    int[] sumA = new int[n];
    int sumC = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        for (int k = 0; k < m; k++) {
          sumA[k] = a[i][k] + a[j][k];
          if (sumA[k] < x) {
          bad = true;
          break;
          }
        }
        sumC = c[i] + c[j];
        if (!bad && sumC < min) {
        min = sumC;
        }
      }
    }

    System.out.println(min);
  }
}
