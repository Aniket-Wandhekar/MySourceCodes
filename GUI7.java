import java.awt.*;
import java.awt.event.*;

class MarvellousWindow extends Frame implements WindowListener
{
	public MarvellousWindow(String str,int x,int y)
	{
	super();
	setTitle(str);
	setSize(x,y);
	addWindowListener(this);
	setVisible(true);
	}	
	public void windowDeactivated(WindowEvent obj) {}
	public void windowActivated(WindowEvent obj) {}
	public void windowDeiconified(WindowEvent obj) {}
	public void windowIconified(WindowEvent obj) {}
	public void windowClosed(WindowEvent obj) {}
			
	public void windowClosing(WindowEvent obj)
	{
		System.exit(0);
	}
	public void windowOpened(WindowEvent obj) {}
	
}

class GUI7
{
	public static void main(String arg[])
	{
		MarvellousWindow mobj1 = new MarvellousWindow("First",500,500);
	
	}
	
}