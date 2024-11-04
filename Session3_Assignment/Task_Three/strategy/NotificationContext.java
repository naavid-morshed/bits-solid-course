package Task_Three.strategy;

public class NotificationContext {
    private NotificationStrategy strategy;

    public NotificationContext(NotificationStrategy strategy) {
        this.strategy = strategy;
    }

    public void notifySender(String message) {
        this.strategy.sendNotification(message);
    }
}
