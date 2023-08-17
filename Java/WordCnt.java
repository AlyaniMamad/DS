import java.util.Scanner;

public class WordCnt {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String mystr = sc.nextLine();

        int cnt = mystr.split(" ").length;

        System.out.println(cnt);
    }
}
