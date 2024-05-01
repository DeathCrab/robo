
#include "MiniHashHumanoid.h"

MiniHashHumanoid minihash;
#include "Expressionbitmap.h"

void setup() {

  Serial.begin(115200);
  Serial.println("GPIO test!");
  delay(5000);
  minihash.init_hash();
  minihash.initial_position();
  delay(2000);
}

void loop() {
  minihash.bink_eye(3);
  delay(1000);
  minihash.change_expressions(1);
  delay(1000);
  minihash.happy_face();
  delay(1000);
  minihash.say_hi(2);
  delay(1000);
  minihash.hands_up();
  delay(1000);
  minihash.hands_down();
  delay(1000);
  minihash.hand_wave(1);
  delay(1000);
  minihash.right_leg_wave(1);
  delay(1000);
  minihash.left_leg_wave(3);
  delay(1000);
  minihash.leg_hand_shake(1);
  delay(1000);
  minihash.right_slide_wave(2);
  delay(1000);
  minihash.left_slide_wave(2);
  delay(1000);
  minihash.hand_straight_shake(3);
  delay(1000);
   minihash.bink_eye(3);
  delay(1000);
  minihash.move_forward(5, 1000);
  delay(1000);
  minihash.move_backward(5, 1000);
  delay(1000);
  minihash.change_expressions(1);
  delay(1000);
  minihash.side_move_right(5);
  delay(1000);
  minihash.side_move_left(5);
  delay(1000);
  minihash.turn_left(5, 1000);
  delay(1000);
  minihash.turn_right(5, 1000);
  delay(1000);
  minihash.flying(3);
  delay(1000);
  minihash.leg_shake(2);
  delay(1000);
  minihash.flying_hand_wave(4);
  delay(1000);
  minihash.jump(4, 30);
  delay(1000);
  minihash.leg_head_shake(5);
  delay(1000);
  minihash.change_expressions();
  delay(1000);
  
}
