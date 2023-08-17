import java.util.*;

public class HashMapDemo {
    public static void main(String args[]){

        HashMap<String, Integer> hm = new HashMap<String, Integer>();

        hm.put("Alyani",1);
        hm.put("Mamad",2);
        hm.put("Demo",5);
        hm.put("Demo",4);

        System.out.println(hm);
    }
}
