import java.util.Scanner;

public class Pg17Calculator {
    public static void main(String[] args) {
        boolean flag = true;    // To exit from do while loop
        int choice;
        Scanner sc = new Scanner(System.in);

        Operations op = new Operations();

        do {

            System.out.print ("\n\n Enter 2 numbers : ");
            float num1 = sc.nextInt();
            float num2 = sc.nextInt();
    

            System.out.println(" Operations :-");
            System.out.println(" 1. Addition");
            System.out.println(" 2. Subtraction");
            System.out.println(" 3. Multiplication");
            System.out.println(" 4. Division");
            System.out.println(" 5. Exit");
            System.out.print("   Enter your choice : ");
            choice = sc.nextInt();

            switch (choice) {
                case 1: op.addition(num1,num2);  
                    break;
                case 2: op.subtraction(num1,num2);  
                    break;
                case 3: op.multiplication(num1, num2);  
                    break;
                case 4: op.division(num1, num2);  
                    break;
                case 5: flag = false;
                    break;
                default: System.out.println(" Invalid Input");
                    break;
            }
        } while (flag);
    }
}

class Operations{
    void addition(float num1, float num2) 
    {
        System.out.println(" Sum = "+(num1+num2));
    }
    void subtraction(float num1,float num2){
        System.out.println(" Subtraction : "+(num1-num2));
    }
    void multiplication(float num1,float num2){
        System.out.println(" Multiplication : "+(num1*num2));
    }
    void division(float num1,float num2){
        System.out.println(" Division : "+(num1/num2));
    }
}