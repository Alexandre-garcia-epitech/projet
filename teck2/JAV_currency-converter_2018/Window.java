import javax.swing.*;
import java.awt.*;
import java.util.*;
import java.util.List;

public class Window extends JFrame {

    private List<Button> button = new ArrayList<>();
    private JPanel panel = new JPanel();

    public Window() {
        this.setSize(800, 500);
        this.setTitle("Currency-Converter");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLocationRelativeTo(null);

        Button button1 = new Button("C");
        button.add(button1);
        JPanel panel1 = new JPanel();
        panel1.setPreferredSize(new Dimension(100, 80));
        panel1.add(button1);

        JPanel panel2 = new JPanel();
        panel2.setPreferredSize(new Dimension(100, 80));

        Button button2 = new Button("←");
        button.add(button2);
        JPanel panel3 = new JPanel();
        panel3.setPreferredSize(new Dimension(100, 80));
        panel3.add(button2);

        Button button3 = new Button("1");
        button.add(button3);
        JPanel panel4 = new JPanel();
        panel4.setPreferredSize(new Dimension(100, 80));
        panel4.add(button3);

        Button button4 = new Button("2");
        button.add(button4);
        JPanel panel5 = new JPanel();
        panel5.setPreferredSize(new Dimension(100, 80));
        panel5.add(button4);

        Button button5 = new Button("3");
        button.add(button5);
        JPanel panel6 = new JPanel();
        panel6.setPreferredSize(new Dimension(100, 80));
        panel6.add(button5);

        Button button6 = new Button("4");
        button.add(button6);
        JPanel panel7 = new JPanel();
        panel7.setPreferredSize(new Dimension(100, 80));
        panel7.add(button6);

        Button button7 = new Button("5");
        button.add(button7);
        JPanel panel8 = new JPanel();
        panel8.setPreferredSize(new Dimension(100, 80));
        panel8.add(button7);

        Button button8 = new Button("6");
        button.add(button8);
        JPanel panel9 = new JPanel();
        panel9.setPreferredSize(new Dimension(100, 80));
        panel9.add(button8);

        Button button9 = new Button("7");
        button.add(button9);
        JPanel panel10 = new JPanel();
        panel10.setPreferredSize(new Dimension(100, 80));
        panel10.add(button9);

        Button button10 = new Button("8");
        button.add(button10);
        JPanel panel11 = new JPanel();
        panel11.setPreferredSize(new Dimension(100, 80));
        panel11.add(button10);

        Button button11 = new Button("9");
        button.add(button11);
        JPanel panel12 = new JPanel();
        panel12.setPreferredSize(new Dimension(100, 80));
        panel12.add(button11);

        Button button12 = new Button(".");
        button.add(button12);
        JPanel panel13 = new JPanel();
        panel13.setPreferredSize(new Dimension(100, 80));
        panel13.add(button12);

        Button button13 = new Button("0");
        button.add(button13);
        JPanel panel14 = new JPanel();
        panel14.setPreferredSize(new Dimension(100, 80));
        panel14.add(button13);

        Button button14 = new Button("✔");
        button.add(button14);
        JPanel panel15 = new JPanel();
        panel15.setPreferredSize(new Dimension(100, 80));
        panel15.add(button14);

        panel.setLayout(new GridLayout(5, 3));
        panelpush.add(panel1);
        panel.add(panel2);
        panel.add(panel3);
        panel.add(panel4);
        panel.add(panel5);
        panel.add(panel6);
        panel.add(panel7);
        panel.add(panel8);
        panel.add(panel9);
        panel.add(panel10);
        panel.add(panel11);
        panel.add(panel12);
        panel.add(panel13);
        panel.add(panel14);
        panel.add(panel15);

        this.setContentPane(panel);
        this.setVisible(true);
    }
}