class Employee{
    int id;
    String name;
    public void printd(){
        System.out.println(" My ID is " + id);
        System.out.println(" My name is " + name);
    }
}


public class call {
    public static void main(String[] args) {
        Employee vedant = new Employee();
        Employee vraj = new Employee();
        vedant.id = 12;
        vedant.name = "Vedant";

        vraj.id=15;
        vraj.name="Vraj";

        
        vedant.printd();
        vraj.printd();
        // System.out.println("My ID is " + vedant.id);
        // System.out.println("My name is " + vedant.name);
    }
    
}