package Test2;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here

        int num1;
        int num2;
        int result;
        Scanner input = new Scanner(System.in);

        System.out.println("Type a number between 0 and 10");
        num1 = input.nextInt();
        if(num1<0 || num1>10){
            System.out.println("Wrong Value, program finish");
            return;
        }
        else{
            System.out.println("OK");
        }

        System.out.println("Type a number between 0 and 10");
        num2 = input.nextInt();
        if(num2<0 || num2>10){
            System.out.println("Wrong Value, program finish");
            return;
        }
        else{
            System.out.println("OK");
        }
        result = num1*  num2;

        if (result>20) {
            System.out.println("Value is greater than 20");
        }
        else if(result>10){
            System.out.println("Value is greater than 10");
        }
        else{
            System.out.println("other options");
        }

        System.out.println("The result is "+result);

    }
}
