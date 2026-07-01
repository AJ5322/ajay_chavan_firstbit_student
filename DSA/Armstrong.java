package newdemo;

public class Armstrong {

	public static void main(String[] args) {
	
		
		int num =154,temp=num,sum=0;
		
		int n=String.valueOf(num).length();
		
		while(temp!=0)
		{
			int d=temp % 10;
			sum += Math.pow(d, n);
			temp = temp/10;
		}
		if(sum==num)
		{
			System.out.println("Armstrong number");
		}
		else
		{
			System.out.println("Not Armstrong");
		}

	}

}
