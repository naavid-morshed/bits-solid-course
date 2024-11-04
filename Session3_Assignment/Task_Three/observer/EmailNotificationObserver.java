package Task_Three.observer;

import java.util.ArrayList;
import java.util.List;

public class EmailNotificationObserver {
    private List<User> users = new ArrayList<>();
    private String email;

    public EmailNotificationObserver() {}

    public EmailNotificationObserver(String email) {
        this.email = email;
    }

    public void subscribeUser(User user) {
        users.add(user);
    }

    public void unsubscribeUser(User user) {
        users.remove(user);
    }

    public void emailUsers() {
        this.users.forEach(user -> System.out.println(user.getName() + ", " + this.email));
    }

    public void newEmail(String email) {
        this.setEmail(email);
        this.emailUsers();
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }
}
