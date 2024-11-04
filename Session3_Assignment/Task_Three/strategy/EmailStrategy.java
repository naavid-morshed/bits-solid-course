package Task_Three.strategy;

public class EmailStrategy implements NotificationStrategy{
    @Override
    public void sendNotification(String message) {
        System.out.println(message + " Email Strategy");
    }
}
