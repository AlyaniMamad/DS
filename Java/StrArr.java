import java.util.*;

class StrArr{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("How Many Strings : ");
        int n = sc.nextInt();
        String mystr[] = new String[n];
        for(int i=0;i<n;i++){
            mystr[i] = sc.nextLine();
        }
        for(int i=0;i<n;i++){
            System.out.println(mystr[i]);
        }

    }
}

