package Task_Three.decorator;

// default notification system
public class EmailNotification implements NotifierSystem {
    @Override
    public String getNotification() {
        return "You have a mail";
    }
}
