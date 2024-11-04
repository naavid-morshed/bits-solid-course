package Task_Three.decorator;

public class SMSNotification extends NotificationDecorator{
    public SMSNotification(NotifierSystem notifierSystemDecorator) {
        super(notifierSystemDecorator);
    }

    @Override
    public String getNotification() {
        return super.getNotification() + " and an SMS";
    }
}
