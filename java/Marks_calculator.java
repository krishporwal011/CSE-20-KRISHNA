import java.util.Scanner;
        public class Marks_calculator{
            public static void main(String[] args) {
                System.out.println("enter the max mark of one subject");
                Scanner sc = new Scanner(System.in);

                System.out.print("How many subjects do you have ? : ");
                int no_subjects = sc.nextInt();

                System.out.println("enter maximum mark of one subject");
                int max_marks = sc.nextInt();

                int total_max_marks = no_subjects * max_marks;
                System.out.println("The total marks of subjects is : " + total_max_marks);

                System.out.println("Enter marks in maths : ");
                int maths= sc.nextInt();

                System.out.println("Enter marks in English : ");
                int english= sc.nextInt();

                System.out.println("Enter marks in science : ");
                int science= sc.nextInt();

                System.out.println("Enter marks in Hindi : ");
                int hindi= sc.nextInt();

                System.out.println("Enter marks in SST : ");
                int sst= sc.nextInt();

                System.out.println("your marks in maths are : " + maths );
                System.out.println("your marks in English are : " + english );
                System.out.println("your marks in science are : " + science );
                System.out.println("your marks in Hindi are : " + hindi );
                System.out.println("your marks in sst are : " + sst);

                int Total_marks = maths + english + science + hindi + sst;
                System.out.println("The total marks of subjects is : " + Total_marks);

                int s1_percentage = Total_marks / 500;
                int s2_percentage = s1_percentage * 100;

                System.out.println("The percentage of marks of subjects is : " + s2_percentage);
            }
        }