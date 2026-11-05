package exercises;

import java.util.*;

public class Input extends Exercise implements ISkippable {
    protected Object Definition() {
        float res = Calc();
        System.out.println(res);

        return null;
    }

    private float Calc(){

        float a = InputFloat("A= ");
        float b = InputFloat("B= ");

        while(true){
            String choice = Input("[+][-][/][*]= ");

            switch (choice) {
                case "+":
                    return Add(a, b);
                case "-":
                    return Substract(a, b);
                case "/":
                    if(b==0f) {
                        System.out.println("INVALID DIVISION BY ZERO");
                        return 0f;
                    }
                    return Divide(a, b);
                case "*":
                    return Multiply(a, b);
                default:
                    System.out.println("INVALID OPERATOR");
                    continue;
            }
        }
    }

    private float InputFloat(String message){
        while(true) {
            try {
                System.out.print(message);
                return new Scanner(System.in).nextFloat();
            } catch (Exception e) {}
        }
    }
    private String Input(String message){
        while(true) {
            try {
                System.out.print(message);
                return new Scanner(System.in).next();
            } catch (Exception e) {}
        }
    }

    private float Add(float a, float b){ return a+b; }
    private float Substract(float a, float b){ return a-b; }
    private float Divide(float a, float b){ return a/b; }
    private float Multiply(float a, float b){ return a*b; }

}