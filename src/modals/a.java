
import java.util.Scanner;

class b1 {

    public void d(int a) {
        System.out.println(a);
    }
};

public class a {

    public static void main(String[] args) {
        System.out.println(2);

        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        String str = sc.next();
        System.out.println(str);
        System.out.println(a);
        b1 a1 = new b1();
        a1.d(a);
        sc.close();
        int i=0;
        while(i<100) {
            System.out.println(i);
            i++;
        }
    }

    public static void done() {
        System.out.println("out");
    }
}
