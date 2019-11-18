import javax.swing.*;
import java.awt.*;
import java.util.*;
import java.util.List;

public class Window extends JFrame {

    public Window() {

        private List<Button> button = new ArrayList<>();
        private JPanel panel = new JPanel();

        this.setSize(800, 500);
        this.setTitle("Currency-Converter");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLocationRelativeTo(null);
        this.setContentPane(panel);
        this.setVisible(true);

        Button button1 = new Button("Player");
        button.add(button1);
        JPanel panel1 = new JPanel();
        panel1.setPreferredSize(new Dimension(100, 80));
        panel1.add(button1);

        Button button2 = new Button("Gen_Map");
        button.add(button2);
        JPanel panel2 = new JPanel();
        panel2.setPreferredSize(new Dimension(100, 80));
        panel2.add(button2);

        panel.setLayout(new GridLayout(5, 3));
        panel.add(panel1);
        panel.add(panel2);
}