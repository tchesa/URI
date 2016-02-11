import java.util.Scanner;

public class p1061 {

	public static void main(String[] args) {
		
		String day1, day2, time1, time2;
		Scanner scan = new Scanner(System.in);
		
		day1  = scan.nextLine();	
		time1 = scan.nextLine();
		day2  = scan.nextLine();
		time2 = scan.nextLine();

		//day1 = "Dia 5";
		//time1 = "08 : 12 : 23";
		//day2 = "Dia 9";
		//time2 = "06 : 13 : 23";

		int day1int = Integer.parseInt (day1.replace ("Dia ", ""));
		int day2int = Integer.parseInt (day2.replace ("Dia ", ""));

		int hours1 =   Integer.parseInt (time1.replace(" ", "").split (":")[0]);
		int minutes1 = Integer.parseInt (time1.replace(" ", "").split (":") [1]);
		int seconds1 = Integer.parseInt (time1.replace (" ", "").split (":") [2]);

		int hours2 =   Integer.parseInt (time2.replace(" ", "").split (":")[0]);
		int minutes2 = Integer.parseInt (time2.replace(" ", "").split (":") [1]);
		int seconds2 = Integer.parseInt (time2.replace (" ", "").split (":") [2]);

		int result = (day2int - day1int) * 24 * 60 * 60;
		result -= hours1 * 60 * 60;
		result -= minutes1 * 60;
		result -= seconds1;

		result += hours2 * 60 * 60;
		result += minutes2 * 60;
		result += seconds2;

		int days = result/60/60/24;
		result -= days * 24 * 60 * 60;
		int hours = result / 60 / 60;
		result -= hours * 60 * 60;
		int minutes = result / 60;
		result -= minutes * 60;

		System.out.printf("%d dia(s)\n", days);
		System.out.printf("%d hora(s)\n", hours);
		System.out.printf("%d minuto(s)\n", minutes);
		System.out.printf("%d segundo(s)\n", result);
	}
}
