import java.util.Scanner;

public class A {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();
    String t = sc.nextLine();
    if (t.matches(s + ".")) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }
  }
}
