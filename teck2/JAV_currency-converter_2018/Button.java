import java.awt.Dimension;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class Button extends JButton implements ActionListener {

    private String title;

    public Button(String ftitle) {
        super(ftitle);
        this.setPreferredSize(new Dimension(100, 80));
        this.setAlignmentX(CENTER_ALIGNMENT);
        this.setAlignmentY(CENTER_ALIGNMENT);
        title = ftitle;
    }

    public String getTitle() {
        return title;
    }

    @Override
    public void actionPerformed(ActionEvent event) {
        System.out.println(this.title + " clicked.");
    }

}