package Task_Three.strategy;

public class SMSStrategy implements NotificationStrategy {
    @Override
    public void sendNotification(String message) {
        System.out.println(message + " SMS Strategy");
    }
}
