import java.util.Scanner;

public class Pg19IncomeTax {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in );

        System.out.print(" Enter the annual income : ");
        float income = sc.nextFloat();

        if(income <= 250000)
            System.out.println(" income tax amount : 0.0");
        else if (income <= 500000)
            System.out.println(" income tax amount = "+(income/100)*5);
        else if (income <= 1000000)
            System.out.println(" income tax amount = "+(income/100)*20);
        else if (income <= 5000000)
            System.out.println(" income tax amount = "+(income/100)*30);

    }
}
