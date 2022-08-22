import java.util.Scanner;

public class Pg18WeightedAvg {
    public static void main(String[] args) {
        System.out.println(" Enter marks scored by the student :- ");
        System.out.print(" Written test : ");

        Scanner sc = new Scanner(System.in);
        float writtenMark = sc.nextFloat();

        System.out.print("Lab Exam : ");
        float labMark = sc.nextFloat();

        System.out.print(" Assignment : ");
        float assignmentMark = sc.nextFloat();

        System.out.println(" Grade of the student = "+
            ( (writtenMark*70)/100 + (labMark*20)/100 + (assignmentMark*10)/100)   );
    }
}
