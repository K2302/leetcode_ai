import java.util.*;
import java.util.stream.Collectors;

// Enum for FoodType
enum FoodType {
    VEG, NONVEG
}

// Class Consumer
class Consumer {
    private final String name;
    private final int age;
    private final FoodType foodType;

    // Constructor
    public Consumer(String name, int age, FoodType foodType) {
        this.name = name;
        this.age = age;
        this.foodType = foodType;
    }

    // Getters
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public FoodType getFoodType() {
        return foodType;
    }

    // Overriding toString for displaying Consumer details
    @Override
    public String toString() {
        return "Consumer{name='" + name + "', age=" + age + ", foodType=" + foodType + '}';
    }
}

// Implementation class
class Implementation {

    // Method 1: Get Non-Vegetarian List
    public List<Consumer> getNonVegetarianList(List<Consumer> consumers) {
        return consumers.stream()
                .filter(consumer -> consumer.getFoodType() == FoodType.NONVEG)
                .collect(Collectors.toList());
    }

    // Method 2: Sort Consumers By Age
    public List<Consumer> sortConsumersByAge(List<Consumer> consumers) {
        return consumers.stream()
                .sorted(Comparator.comparingInt(Consumer::getAge))
                .collect(Collectors.toList());
    }
}

// Main class
public class Source {
    public static void main(String[] args) {
        // Creating Consumers
        Consumer p = new Consumer("Sarah", 45, FoodType.VEG);
        Consumer p1 = new Consumer("John", 26, FoodType.NONVEG);
        Consumer p2 = new Consumer("Mirra", 7, FoodType.NONVEG);

        // Adding consumers to a list
        List<Consumer> consumers = Arrays.asList(p, p1, p2);

        // Creating Implementation instance
        Implementation imp = new Implementation();

        // Method 1: Get Non-Vegetarian List
        List<Consumer> nonVegConsumers = imp.getNonVegetarianList(consumers);
        System.out.println(nonVegConsumers + " ---------METHOD 1---------");

        // Method 2: Sort Consumers By Age
        List<Consumer> sortedConsumers = imp.sortConsumersByAge(consumers);
        System.out.println(sortedConsumers + " ---------METHOD 2---------");
    }
}