import java.util.Scanner;

public class proj {
    public static void main(String[] args) {

        System.out.println("Calculator Program ");
        System.out.println("    ");
        System.out.println("Select the type of operation you want to perform!");
        System.out.println("1)Addition");
        System.out.println("2)Subtraction");
        System.out.println("3)Multiply");
        System.out.println("4)Divide");

        Scanner scan = new Scanner(System.in);
        

        int c = scan.nextInt();
        // Input from the use
        
        System.out.println("Enter the first number: ");
        float a = scan.nextFloat();
        System.out.println("Enter the second number: ");
        float b = scan.nextFloat();
        

        switch (c) {
            case 1:
                System.out.println(a+b);

                break;

            case 2:
                System.out.println(a-b);

                break;

            case 3:
                System.out.println(a*b);

                break;

            case 4:
                System.out.println(a/b);
                break;

            default:
                System.out.println("Wrong input!");
                break;
        }

    }
}
