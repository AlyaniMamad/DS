import java.util.*;

class ArrLinkedList{
    public static void main(String args[]){
        ArrayList<String> al = new ArrayList<String>();

        al.add("Alyani");
        al.add("Mamad");
        al.add("MCA");
        al.add("MCA");
        al.add("MCA");
        al.remove(2);

        LinkedList<String> ll = new LinkedList<String>();
        ll.add("Ele-1");
        ll.add("Ele-2");
        ll.addFirst("Ele-0");
        ll.removeLast();
        ll.add("Ele-3");
        ll.add("Ele-3");
        ll.add("Ele-3");
        ll.add("Ele-3");

        System.out.println("ArrayList : "+al);
        System.out.println("LinkedList : "+ll);
    }
}