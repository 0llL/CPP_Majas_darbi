public class MyClass {
    public static void main(String args[]) {
     int tuksa=0;
        int aka= (int)(Math.random() * 101);

        if (0 < aka){
            System.out.println("aka kaste ir "+aka+" prieksmets, tie tika parvietoti uz tukso kasti");
        tuksa=aka;
        aka=0;}
        else
            System.out.println("aka kaste ir tuksa");
    }
}

