#ifndef _globals_h
#define _globals_h

#define SM_RECONNECT_KEY 			         0xFC01
#define SM_SEQUENCE_NUMBER_KEY 		     0xFC02
#define SM_OPEN_SIRI_KEY	 		         0xFC03
#define SM_STATUS_SCREEN_REQ_KEY	     0xFC04
#define SM_PLAYPAUSE_KEY               0xFC05
#define SM_NEXT_TRACK_KEY              0xFC06
#define SM_PREVIOUS_TRACK_KEY		       0xFC07
#define SM_VOLUME_UP_KEY               0xFC08
#define SM_VOLUME_DOWN_KEY             0xFC09
#define SM_COUNT_MAIL_KEY              0xFC0A
#define SM_COUNT_SMS_KEY               0xFC0B
#define SM_COUNT_PHONE_KEY             0xFC0C
#define SM_COUNT_BATTERY_KEY		       0xFC0D
#define SM_SCREEN_ENTER_KEY			       0xFC0E
#define SM_SCREEN_EXIT_KEY			       0xFC0F
#define SM_WEATHER_COND_KEY            0xFC10
#define SM_WEATHER_TEMP_KEY            0xFC11
#define SM_WEATHER_ICON_KEY            0xFC12
#define SM_STATUS_SCREEN_UPDATE_KEY	   0xFC13
#define SM_VOLUME_VALUE_KEY			       0xFC14
#define SM_PLAY_STATUS_KEY			       0xFC15
#define SM_ARTIST_KEY                  0xFC16
#define SM_ALBUM_KEY                   0xFC17
#define SM_TITLE_KEY                   0xFC18
#define SM_WEATHER_HUMID_KEY		       0xFC19
#define SM_WEATHER_WIND_KEY			       0xFC1A
#define SM_WEATHER_DAY1_KEY			       0xFC1B
#define SM_WEATHER_DAY2_KEY			       0xFC1C
#define SM_WEATHER_DAY3_KEY			       0xFC1D
#define SM_WEATHER_ICON1_KEY		       0xFC1E
#define SM_WEATHER_ICON2_KEY		       0xFC1F
#define SM_WEATHER_ICON3_KEY		       0xFC20
#define SM_CALENDAR_UPDATE_KEY		     0xFC21
#define SM_MENU_UPDATE_KEY			       0xFC22
#define SM_STOCKS_GRAPH_KEY			       0xFC23
#define SM_BITCOIN_GRAPH_KEY		       0xFC24
#define SM_BITCOIN_LOW_KEY			       0xFC25
#define SM_BITCOIN_HIGH_KEY			       0xFC26
#define SM_BITCOIN_CURR_KEY			       0xFC27
#define SM_BITCOIN_TITLE_KEY		       0xFC28
#define SM_STOCKS_LOW_KEY			         0xFC29
#define SM_STOCKS_HIGH_KEY			       0xFC2A
#define SM_STOCKS_CURR_KEY			       0xFC2B
#define SM_STOCKS_TITLE_KEY			       0xFC2C
#define SM_LAUNCH_CAMERA_KEY		       0xFC2D
#define SM_TAKE_PICTURE_KEY			       0xFC2E
#define SM_URL1_KEY                    0xFC2F
#define SM_URL2_KEY                    0xFC30
#define SM_URL1_TEXT_KEY			         0xFC31
#define SM_URL2_TEXT_KEY			         0xFC32
#define SM_GPS_1_KEY				           0xFC33
#define SM_GPS_2_KEY				           0xFC34
#define SM_GPS_3_KEY				           0xFC35
#define SM_GPS_4_KEY				           0xFC36
#define SM_RESET_DST_KEY			         0xFC37
#define SM_MESSAGES_UPDATE_KEY		     0xFC38
#define SM_CALLS_UPDATE_KEY			       0xFC38
#define SM_CAL_DETAILS_KEY			       0xFC39
#define SM_DETAILS1_KEY				         0xFC3A
#define SM_DETAILS2_KEY				         0xFC3B
#define SM_CALL_SMS_KEY				         0xFC3C
#define SM_CALL_SMS_UPDATE_KEY		     0xFC3D
#define SM_CALL_SMS_CMD_KEY			       0xFC3E
#define SM_SMS_SENT_KEY                0xFC3F
#define SM_FIND_MY_PHONE_KEY           0xFC40
#define SM_REMINDERS_KEY 	       	     0xFC41
#define SM_REMINDERS_DETAILS_KEY       0xFC42
#define SM_STATUS_CAL_TIME_KEY   	     0xFC43
#define SM_STATUS_CAL_TEXT_KEY   	     0xFC44
#define SM_STATUS_MUS_ARTIST_KEY	     0xFC45
#define SM_STATUS_MUS_TITLE_KEY	  	   0xFC46
#define SM_UPDATE_INTERVAL_KEY		     0xFC47
#define SM_SONG_LENGTH_KEY			       0xFC48
#define SM_STATUS_UPD_WEATHER_KEY      0xFC49
#define SM_STATUS_UPD_CAL_KEY          0xFC4A
#define SM_NAV_ICON_KEY                0xFC4B
#define SM_NAV_INSTRUCTIONS_KEY        0xFC4C
#define SM_STREAMING_BMP_KEY    	     0xFC4D
#define SM_CANVAS_DICT_KEY             0xFC4E
#define SM_CAMERA_NEXT_FRAME		       0xFC4F
#define SM_CAMERA_SWITCH			         0xFC50
#define SM_CAMERA_FLASH				         0xFC51
#define SM_REMINDER_CHECK_KEY          0xFC52
#define SM_ACTIVATOR_SET_TEXT_TOP		   0xFC53
#define SM_ACTIVATOR_SET_TEXT_MIDDLE	 0xFC54
#define SM_ACTIVATOR_SET_TEXT_BOTTOM	 0xFC55
#define SM_ACTIVATOR_KEY_PRESSED		   0xFC56
#define SM_STOCKS_DETAIL				       0xFC57
#define SM_CUSTOM_SMS				           0xFC58
#define SM_VERSION_KEY				         0xFC59

typedef enum {
  WeatherCondition,
  WeatherTemp,
  CountSMS,
  CountMail,
  CountPhone,
  CountBattery
} StatusScreenItems;

typedef enum {
  ACTIVATOR_KEY_PRESSED_UP,
  ACTIVATOR_KEY_HELD_UP,
  ACTIVATOR_KEY_PRESSED_SELECT,
  ACTIVATOR_KEY_HELD_SELECT,
  ACTIVATOR_KEY_PRESSED_DOWN,
  ACTIVATOR_KEY_HELD_DOWN
} ActivatorKeys;

#define APP_VERSION    16
#define NUM_APPS	 		 ACTIVATOR_APP
#define COOKIE_OFFSET	 10

typedef enum {CALENDAR_APP, MUSIC_APP, GPS_APP, SIRI_APP, STOCKS_APP, BITCOIN_APP, CAMERA_APP, WEATHER_APP, URL_APP, MESSAGES_APP, CALLS_APP, FINDPHONE_APP, REMINDERS_APP, STATUS_SCREEN_APP, ACTIVATOR_APP} AppIDs;

static char *app_names[] = {"Calendar", "Music", "GPS", "Launch Siri", "Stocks", "Bitcoin", "Camera", "Weather", "HTTP Request", "Messages", "Incoming Calls", "Find My Phone", "Reminders", "Status", "Activator"};

void sendCommand(int key);
void sendCommandInt(int key, int param);
void sendCommandStr(int key, int param, char *str);
void display_settings(Window **window);
void hideInverterLayers();

#endif
