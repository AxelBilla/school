package exercises;

import java.util.*;

public class Collections extends Exercise {
    protected Object Definition() {
        int id = 0;

        Label("P"+(++id));
        P1();

        Label("P"+(++id));
        P2();

        Label("P"+(++id));
        P3();

        Label("P"+(++id));
        P4();


        return null;
    }

    public static void P1(){
        ArrayList<String> arr = new ArrayList<>(List.of("Alice", "Chloe", "Bob"));
        arr.add(1, "Yanis");

        System.out.println(arr +" / "+ arr.size() + " / " + arr.get(2));
        System.out.println(arr.contains("Bob"));

        arr.remove("Bob");
        arr.sort(null);

        System.out.println(arr);
    }

    public static void P2(){
        List<Integer> base = List.of(3, 1, 4, 1, 5, 9, 2, 6, 5, 3);

        HashSet<Integer> hash = new HashSet<>(base);
        System.out.println(hash.size()); // 7

        TreeSet<Integer> tree = new TreeSet<>(base);
        System.out.println(tree); // In order
    }

    public static void P3(){
        String sentence = "le chat mange le poisson et le chien mange le chat";
        HashMap<String, Integer> hash = new HashMap<>();

        for(String word : sentence.split(" ")){
            hash.put(word, (hash.containsKey(word)) ? hash.get(word)+1 : 1);
        }

        System.out.println(new TreeMap<>(hash).entrySet());
    }

    public static void P4(){
        List<Integer> squares = new ArrayList<>();
        for(int i = 1; i<5; i++) squares.add(i * i);

        int res = 0;
        for(Integer sq : squares) res+=sq;

        System.out.println(res);
    }
}