package Task_Three.strategy;

public class PushStrategy implements NotificationStrategy {
    @Override
    public void sendNotification(String message) {
        System.out.println(message + " Push Strategy");
    }
}
