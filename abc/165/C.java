
import java.util.Scanner;

public class C {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    int q = sc.nextInt();
    long[][] nums = new long[q][4]
    for (int i = 0; i < q; i++) {
      for (int j = 0; j < 4; j++) {
        nums[i][j] = sc.nextInt();
      }
    }

    int[] a = new int[n];
    a[0] = 1;
    long maxD = 0;
    int maxIndex = 0;
    long sumD = 0;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < q; j++) {
          if (nums[j][0] == i && nums[j][4] > maxD) {
            maxD = nums[j][4]
            maxIndex = j;
          }
      }
      a[nums[maxIndex][1] - 1] = a[nums[maxIndex][0] - 1] + nums[maxIndex][2];
      
      


    }

  }
}
