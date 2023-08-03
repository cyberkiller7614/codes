import java.util.Scanner;


public class fun {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("enter number 1: ");
        int a = input.nextInt();
        System.out.print("enter number 2: ");
        int b = input.nextInt();
        int sum = a+b;
        System.out.print("The Sum =" + sum);
    }
}

