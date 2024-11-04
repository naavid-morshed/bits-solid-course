package Task_Three;

import Task_Three.decorator.*;
import Task_Three.observer.EmailNotificationObserver;
import Task_Three.observer.User;
import Task_Three.strategy.EmailStrategy;
import Task_Three.strategy.NotificationContext;
import Task_Three.strategy.NotificationStrategy;
import Task_Three.strategy.SMSStrategy;

public class TestTaskThree {
    public static void main(String[] args) {
        NotifierSystem notifierSystem = new EmailNotification();

        NotifierSystem emailAndSMS = new SMSNotification(notifierSystem);

        NotifierSystem emailAndSMSAndPush = new PushNotification(emailAndSMS);

        EmailNotificationObserver emailNotificationObserver = new EmailNotificationObserver("naavid.m@gmail.com");
        User user1 = new User("Naavid Morshed");
        User user2 = new User("Tafsir Harun Turjo");
        User user3 = new User("Sagor Hossain");

        emailNotificationObserver.subscribeUser(user1);
        emailNotificationObserver.subscribeUser(user2);
        emailNotificationObserver.subscribeUser(user3);

        emailNotificationObserver.newEmail(notifierSystem.getNotification());
        System.out.println();

        emailNotificationObserver.unsubscribeUser(user2);
        emailNotificationObserver.newEmail(emailAndSMS.getNotification());
        System.out.println();
        
        NotificationStrategy strategy1 = new EmailStrategy();
        NotificationContext context1 = new NotificationContext(strategy1);
        context1.notifySender("You have a mail via...");

        NotificationStrategy strategy2 = new SMSStrategy();
        NotificationContext context2 = new NotificationContext(strategy2);
        context2.notifySender("You have an SMS via...");
    }
}
