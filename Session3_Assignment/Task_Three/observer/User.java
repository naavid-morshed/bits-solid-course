package Task_Three.observer;

public class User {
    private String name;
    private EmailNotificationObserver emailNotificationObserver = new EmailNotificationObserver();
    private PushNotificationObserver pushNotificationObserver = new PushNotificationObserver();
    private SMSNotificationObserver smsNotificationObserver = new SMSNotificationObserver();

    public User(){}
    public User(String name) {
        this.name = name;
    }

    public void update() {
        System.out.println("notification");
    }

    public void subscribeToEmail(EmailNotificationObserver observer) {
        this.emailNotificationObserver = observer;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public EmailNotificationObserver getEmailNotificationObserver() {
        return emailNotificationObserver;
    }

    public void setEmailNotificationObserver(EmailNotificationObserver emailNotificationObserver) {
        this.emailNotificationObserver = emailNotificationObserver;
    }

    public PushNotificationObserver getPushNotificationObserver() {
        return pushNotificationObserver;
    }

    public void setPushNotificationObserver(PushNotificationObserver pushNotificationObserver) {
        this.pushNotificationObserver = pushNotificationObserver;
    }

    public SMSNotificationObserver getSmsNotificationObserver() {
        return smsNotificationObserver;
    }

    public void setSmsNotificationObserver(SMSNotificationObserver smsNotificationObserver) {
        this.smsNotificationObserver = smsNotificationObserver;
    }


}
