import java.util.Scanner;

class Pg16PrimeNo{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int flag=0;
        System.out.print(" Enter a number : ");
        int num = sc.nextInt(); 
        sc.close();
    
        for(int i = 2; i < num; i++)
        {
            if(num%i == 0)
                flag = 1;
        }
        
        if (flag == 0)
            System.out.println(num+" is an prime number");
        else
            System.out.println(num+ " is Not an prime number");

    }
}