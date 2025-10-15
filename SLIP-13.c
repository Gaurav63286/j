// SLIP 13 Q1
import java.io.*;
class file {
public static void main(String args[]) throws Exception {
String fname = args[0];
File f = new File(fname);
if (f.isFile()) {
FileInputStream fis = new FileInputStream(fname);
int ch,wc=0, lcnt = 0;
while ((ch = fis.read()) != -1) {
if(ch==' '){
wc++;
}
if (ch == '\n') {
lcnt++;
wc++;
}
}
System.out.println("Number of line in Given file is " + (lcnt+1));
System.out.println("Number of Words in Given file is " + (wc+1));
} else {
System.out.println("file not exists");
}
}
}
Q2
import java.text.SimpleDateFormat;
import java.util.Date;
class Date_format {
public static void main(String[] args) {
SimpleDateFormat sd = new SimpleDateFormat("dd/MM/yyyy");
String d1 = sd.format(new Date());
System.out.println("Date: " + d1);
sd = new SimpleDateFormat("MM-dd-yyyy");
d1 = sd.format(new Date());
System.out.println("Date: " + d1);
sd = new SimpleDateFormat("EEEEEEEEE MMMMM dd yyyy");
d1 = sd.format(new Date());
System.out.println("Date: " + d1);
sd = new SimpleDateFormat("EEE MMMMM dd HH:mm:ss z yyyy");
d1 = sd.format(new Date());
System.out.println("Date and time: " + d1);
sd = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss a SSSZ");
d1 = sd.format(new Date());
System.out.println("Date and time: " + d1);
}
}