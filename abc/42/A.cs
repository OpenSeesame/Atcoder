using System;

class A {
  public static void Main() {
    int a = int.Parse(Console.ReadLine());
    int b = int.Parse(Console.ReadLine());
    int c = int.Parse(Console.ReadLine());
    
    if (a == 7 && b == 5 && c == 5) {
    Console.WriteLine("YES");
    } else if (a == 5 && b == 7 && c == 5) {
    Console.WriteLine("YES");
    } else if (a == 5 && b == 5 && c == 7) {
    Console.WriteLine("YES");
    } else
    Console.WriteLine("NO");
  }


