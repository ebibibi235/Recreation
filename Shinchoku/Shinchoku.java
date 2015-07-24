import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Random;

public class Shinchoku {
	private static final Integer SIZE = 4;
	public static void main(String[] args) {
		shinchoku();
	}
	
	private static void shinchoku() {
		List<String> list1 = Arrays.asList("進捗", "どう", "です", "か");
		List<String> list2 = new ArrayList<String>();
		Random rnd = new Random();
		int count = 0;
		
		while (!list2.toString().equals(list1.toString())) {
			int num = rnd.nextInt(SIZE);
			String getStr = list1.get(num);
			count += getStr.length();
			list2.add(getStr);
			System.out.print(getStr);
			
			if (list2.size() > SIZE) {
				list2.remove(0);
			}
		}
		
		System.out.println("");
		System.out.println(count + "文字で煽られました。");
	}
}