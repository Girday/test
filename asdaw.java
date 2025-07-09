import java.util.Arrays;

public class Hello {
    public static void main(String[] args) {
        System.out.println("Привет, мир!");
        int[] numbers = {1, 2, 3, 4, 5};
        int[] squares = Arrays.stream(numbers)
                               .map(n -> n * n)
                               .toArray();
        System.out.println("Квадраты: " + Arrays.toString(squares));
    }
}
