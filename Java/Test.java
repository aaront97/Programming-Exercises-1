import java.util.Calendar;
import java.util.GregorianCalendar;
import java.time.LocalDate;
import java.time.temporal.WeekFields;

public class Test{

    public static void main (String[] args){
        LocalDate date = LocalDate.of(2017, 12, 26);
        int day = date.get(WeekFields.SUNDAY_START.dayOfWeek());
        System.out.println(day);
    }
}

