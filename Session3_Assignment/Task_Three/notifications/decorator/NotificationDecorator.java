package Task_Three.decorator;

public class NotificationDecorator implements NotifierSystem {
    protected NotifierSystem notifierSystemDecorator;

    public NotificationDecorator(NotifierSystem notifierSystemDecorator) {
        this.notifierSystemDecorator = notifierSystemDecorator;
    }

    @Override
    public String getNotification() {
        return notifierSystemDecorator.getNotification();
    }
}
