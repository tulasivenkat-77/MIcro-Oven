#ifndef  MAIN_H
#define MAIN_H
#define POWER_ON_SCREEN         0X01
#define MENU_SCREEN             0X02
#define MICRO_MODE              0X11
#define GRILL_MODE              0X12
#define CONVENTION_MODE         0X13
#define START_MODE              0x14

#define DISPLAY_TIME            0XDD

#define RESET_MODE              0XFF
#define RESET_NOTHING           0x00


#define FAN_DDR                 TRISC2
#define FAN                     RC2

#define BUZZER_DDR              TRISC1
#define BUZZER                  RC1

#define START                   0XAA
#define STOP                    0XBB
#define PAUSE                   0XCC

#endif   