package Test2;

public class Main {

    public static void main(String[] args) {
	// write your code here
        byte byteVar = 100;
        short shortVar = 10;
        int intVar = 2147483647;
        int unsignedIntVar = Integer.parseUnsignedInt("4294967295");
        long longVar = 4294967295L;
        float floatVar = 32.3234f;
        double doubleVar = 23.32;
        boolean boolVar = true;
        char charVar = '2';
        String stringVar = "Hello";

        System.out.println("Byte Variable " + byteVar);
        System.out.println("Short Variable " + shortVar);
        System.out.println("int Variable " + intVar);
        System.out.println("unsigned int Variable " + Integer.toUnsignedString(unsignedIntVar));
        System.out.println("long Variable " + longVar);
        System.out.println("float Variable " + floatVar);
        System.out.println("double Variable " + doubleVar);
        System.out.println("bool Variable " + boolVar);
        System.out.println("char Variable " + charVar);
        System.out.println("string Variable " + stringVar);

    }
}
