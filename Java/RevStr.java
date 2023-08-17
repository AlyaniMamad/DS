import java.util.Scanner;

public class RevStr {
    public static void main(String args[]){
        System.out.println("Enter String : ");
        Scanner sc = new Scanner(System.in);
        String mystr = sc.nextLine();

        System.out.println("Revered : ",StringFormatter.reverseString(mystr));
    }
}
