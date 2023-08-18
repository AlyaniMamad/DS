class Reverse {
    public static void main(String args[]){
        String str = "Alyani";

        String rev ="";

        int len = str.length();

        for(int i=0;i<len;i++){
            rev = str.charAt(i)+rev; //concinating one by one
        }
        System.out.println(rev);
    }
}