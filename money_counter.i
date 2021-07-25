#line 1 "money_counter.cbl"






 identification division.
 program-id. money_counter.

 data division.
 working-storage section.
 01 penny_rolls comp-2 value 0.
 01 nickel_rolls comp-2 value 0.
 01 dime_rolls comp-2 value 0.
 01 quarter_rolls comp-2 value 0.
 01 half_rolls comp-2 value 0.
 01 ones comp-2 value 0.
 01 twos comp-2 value 0.
 01 fives comp-2 value 0.
 01 tens comp-2 value 0.
 01 twenties comp-2 value 0.
 01 fifties comp-2 value 0.
 01 hundreds comp-2 value 0.
 01 estimated_change comp-2 value 0.

 01 calc pic s9(9)v9(2).

 01 total pic s9(9)v9(2).

 screen section.
 01 detail-screen.
 03 line 1 column 3 value "Money Counter".

 03 line 2 column 3 value "Penny Rolls: ".
 03 penny_roll_field line 2 column 22 using penny_rolls.

 03 line 3 column 3 value "Nickel Rolls: ".
 03 nickel_roll_field line 3 column 22 using nickel_rolls.

 03 line 4 column 3 value "Dime Rolls: ".
 03 dime_roll_field line 4 column 22 using dime_rolls.

 03 line 5 column 3 value "Quarter Rolls: ".
 03 quarter_roll_field line 5 column 22 using quarter_rolls.

 03 line 6 column 3 value "Half Rolls: ".
 03 half_roll_field line 6 column 22 using half_rolls.

 03 line 7 column 3 value "Ones: ".
 03 ones_field line 7 column 22 using ones.

 03 line 8 column 3 value "Twos: ".
 03 twos_field line 8 column 22 using twos.

 03 line 9 column 3 value "Fives: ".
 03 fives_field line 9 column 22 using fives.

 03 line 10 column 3 value "Tens: ".
 03 tens_field line 10 column 22 using tens.

 03 line 11 column 3 value "Twenties: ".
 03 twenties_field line 11 column 22 using twenties.

 03 line 12 column 3 value "Fifties: ".
 03 fifties_field line 12 column 22 using fifties.

 03 line 13 column 3 value "Hundreds: ".
 03 hundreds_field line 13 column 22 using hundreds.

 03 line 14 column 3 value "Estimated Change: ".
 03 estimated_change_field line 14 column 22 using estimated_change.

 03 line 15 column 3 value "Total: ".
 03 total_field line 15 column 22 using total.



 procedure division.
 MAIN.
 GO TO MAIN_LOOP
 STOP RUN.

 MAIN_LOOP.
 accept detail-screen end-accept
 move 0 to calc
 move 0 to total

 move penny_roll_field to penny_rolls

 MULTIPLY 0.5 by penny_rolls giving calc
 add calc to total

 move nickel_roll_field to nickel_rolls

 MULTIPLY 2 by nickel_rolls giving calc
 add calc to total

 move dime_roll_field to dime_rolls

 MULTIPLY 5 by dime_rolls giving calc
 add calc to total

 move quarter_roll_field to quarter_rolls

 MULTIPLY 10 by quarter_rolls giving calc
 add calc to total

 move half_roll_field to half_rolls

 MULTIPLY 10 by half_rolls giving calc
 add calc to total

 move ones_field to ones
 add ones to total

 move twos_field to twos
 MULTIPLY 2 by twos giving calc
 add calc to total

 move fives_field to fives
 MULTIPLY 5 by fives giving calc
 add calc to total

 move tens_field to tens
 MULTIPLY 10 by tens giving calc
 add calc to total

 move twenties_field to twenties
 MULTIPLY 20 by twenties giving calc
 add calc to total

 move fifties_field to fifties
 MULTIPLY 50 by fifties giving calc
 add calc to total

 move hundreds_field to hundreds
 MULTIPLY 100 by hundreds giving calc
 add calc to total

 move estimated_change_field to estimated_change

 MULTIPLY 0.01 by estimated_change giving calc
 add calc to total



 go to MAIN_LOOP
 STOP RUN.

 end program money_counter.
