/*
 * main.c
 *
 *  Created on: Jun 12, 2023
 *      Author: Khaled
 */

#include "key_pad.h"
#include "lcd_interfacing.h"
#include <util/delay.h>
#include "Button_interfacing.h"

void main()
{

Buzzer_configuratio();
key_pad_init();
lcd_intilization();
send_command(LCD_CLEAR);
u8 key_reading=0;
u8 key_readings=0;
u8 key_reading1=12;
u8 key_reading2=12;
u8 key_reading3=12;
//u8 key_reading4=12;
u8 password_input [4]={'0'};
u8 password[4]={'A','B','C','1'};
u8 i=0;
u8 j=0;
u8 right_flag=3;



	while(1)
{


	u8 key_reading=key_pad_read();
	     _delay_ms(250);

	      if(key_reading!=0xff)
	      {

	    	  go_to_xy(row1, column1);
	    	  lcd_display(key_reading);
	    	  password_input[i]=key_reading;
	    	  i++;
	 	      }

	      if(i==4)
	      {
	      for(j=0;j<i;j++)
	      {
	    	  if(password_input[j]!=password[j])
	    	  {
	    	  right_flag=0;
	    	  }
	    	  else
	    	  {
	    		  right_flag=1;
			   }
	    	  //go_to_xy(row2, j);
	    	  //lcd_display(password_input[j]);


	      }

	    	}

	      if(right_flag==1)
	      {
	    	  lcd_display_string("welcome");
	    	  right_flag=3;
	      }

	      if(right_flag==0)
	      {

	    	  Buzzer_on();
	    	  //right_flag=3;
	      }
}

}



      //u8 key_reading=key_pad_read();
     //_delay_ms(250);

	// key_reading=key_pad_read();
	   //  _delay_ms(250);

	      //if (key_reading!=0xff);
	      //{

	    	  //key_reading=key_pad_read();
	    	  //flag=1;

	    	  //_delay_ms(300);
	    	  //if(flag!=0)

	    		  //flag=0;
	    	  //go_to_xy(row1, column1);
	    	  //lcd_display(key_reading);
	    	  //password_input[i]=key_reading;
	    	  //i++;
	    	  //}


	      //if(i==3)
	      //{
	      //for(j=0;j<i;j++)
	      //{
	      //go_to_xy(row2, j);
	    //lcd_display(password_input[i]);
	      //}
	      //}

      /*while(((key_pad_read()==0xff)&& key_readings==0))
      {
    	  //u8 key_reading=key_pad_read();
    	  go_to_xy(row1, column1);
    	  lcd_display_string("enterfirstnumber");
    	  key_reading1=key_pad_read();
    	   if(key_reading1!=0xff)
    	   key_readings++;

      }

      while(((key_pad_read()==0xff)&& key_readings==1))
            {
          	  u8 key_reading=key_pad_read();
          	  go_to_xy(row1, column1);
          	lcd_display_string("enter second number");
          	   key_reading2=key_reading;
          	 if(key_reading2!=0xff)
          	  key_readings++;

            }

      while(((key_pad_read()==0xff)&& key_readings==2))
                  {
                	  u8 key_reading=key_pad_read();
                	  go_to_xy(row1, column1);
                	  lcd_display_string("enter third number");
                	   key_reading3=key_reading;
                	   if(key_reading3!=0xff)
                	  key_readings++;

                  }*/
	      ////////

      //while()

      /*while(i<4)
      {

    	  u8 key_reading=key_pad_read();
    	  //while(key_reading=0xff);
    	  _delay_ms(250);
    	 if(key_reading!=0xff)
    	 {
    		 password_input[i]=key_reading;
    		 i++;
         }

      }*/

      /*for(i=0;i<4;i++)
      {

    	  if(password_input[i]!=password[i]);
    	  flag=0;

      }

      if(flag==1)
      {

    	  go_to_xy(row1, column1);

    	   lcd_display_string("right password");


      }

      else
      {

    	  go_to_xy(row1, column1);
    	  lcd_display_string("wrong password");


      }*/















