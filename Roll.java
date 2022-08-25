import java.util.Random;
public class Roll {
	static int call() {
		int d1,d2=0;
	System.out.println("Rolling dice!");
	Random ran=new Random();
	d1=1+ran.nextInt(6);
	if(d1==6) {
		System.out.println("6!Roll another!");
		d2=1+ran.nextInt(6);
	}
	return d1+d2;
}
}
