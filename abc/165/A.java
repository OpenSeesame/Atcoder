import java.util.Scanner;

public class A {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int k = sc.nextInt();
    int a = sc.nextInt();
    int b = sc.nextInt();
    boolean goal = false;
    for (int i = a; i <= b; i++) {
      if (i % k == 0) {
        goal = true;
        break;
      }
    }
    if (goal) {
      System.out.println("OK");
    } else {
      System.out.println("NG");
    }
  }
}
