package Task_Three.decorator;

public class PushNotification extends NotificationDecorator {
    public PushNotification(NotifierSystem notifierSystemDecorator) {
        super(notifierSystemDecorator);
    }

    @Override
    public String getNotification() {
        return super.getNotification() + " and a push notification";
    }
}
