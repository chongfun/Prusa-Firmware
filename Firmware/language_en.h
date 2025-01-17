/**
/**
 * English
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */

#define(length=20) WELCOME_MSG              CUSTOM_MENDEL_NAME " ready."
#define MSG_SD_INSERTED                     "Card inserted"
#define MSG_SD_REMOVED                      "Card removed"
#define MSG_MAIN                            "Main"
#define MSG_DISABLE_STEPPERS                "Disable steppers"
#define MSG_AUTO_HOME                       "Auto home"
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_SET_ORIGIN                      "Set origin"
#define MSG_COOLDOWN                        "Cooldown"
#define MSG_SWITCH_PS_ON                    "Switch power on"
#define MSG_SWITCH_PS_OFF                   "Switch power off"
#define MSG_MOVE_AXIS                       "Move axis"
#define MSG_MOVE_X                          "Move X"
#define MSG_MOVE_Y                          "Move Y"
#define MSG_MOVE_Z                          "Move Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_SPEED                           "Speed"
#define MSG_NOZZLE                          "Nozzle"
#define MSG_NOZZLE1                         "Nozzle2"
#define MSG_NOZZLE2                         "Nozzle3"
#define MSG_BED                             "Bed"
#define(length=14) MSG_FAN_SPEED                       "Fan speed"
#define MSG_FLOW                            "Flow"
#define MSG_FLOW0                           "Flow 0"
#define MSG_FLOW1                           "Flow 1"
#define MSG_FLOW2                           "Flow 2"
#define MSG_CONTROL                         "Control"
#define MSG_MIN                             " \002 Min"
#define MSG_MAX                             " \002 Max"
#define MSG_FACTOR                          " \002 Fact"
#define MSG_TEMPERATURE                     "Temperature"
#define MSG_MOTION                          "Motion"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED		        "E in mm3"
#define MSG_STORE_EPROM                     "Store memory"
#define MSG_LOAD_EPROM                      "Load memory"
#define MSG_RESTORE_FAILSAFE                "Restore failsafe"
#define MSG_REFRESH                         "\xF8" "Refresh"
#define MSG_WATCH                           "Info screen"
#define MSG_TUNE                            "Tune"
#define MSG_PAUSE_PRINT                     "Pause print"
#define MSG_RESUME_PRINT                    "Resume print"
#define MSG_STOP_PRINT                      "Stop print"
#define MSG_CARD_MENU                       "Print from SD"
#define MSG_NO_CARD                         "No SD card"
#define MSG_DWELL                           "Sleep..."
#define MSG_USERWAIT                        "Wait for user..."
#define MSG_RESUMING                        "Resuming print"
#define(length=20) MSG_PRINT_ABORTED        "Print aborted"
#define MSG_NO_MOVE                         "No move."
#define MSG_KILLED                          "KILLED. "
#define MSG_STOPPED                         "STOPPED. "
#define MSG_FILAMENTCHANGE                  "Change filament"
#define MSG_INIT_SDCARD                     "Init. SD card"
#define MSG_CNG_SDCARD                      "Change SD card"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Live adjust Z"
#define MSG_ADJUSTZ							"Auto adjust Z?"
#define MSG_PICK_Z							"Pick print"

#define MSG_SETTINGS                         "Settings"
#define MSG_PREHEAT                         "Preheat"
#define(length=17) MSG_UNLOAD_FILAMENT               "Unload filament"
#define(length=17) MSG_LOAD_FILAMENT                 "Load filament"
#define(length=17) MSG_LOAD_FILAMENT_1				"Load filament 1"
#define(length=17) MSG_LOAD_FILAMENT_2				"Load filament 2"
#define(length=17) MSG_LOAD_FILAMENT_3				"Load filament 3"
#define(length=17) MSG_LOAD_FILAMENT_4				"Load filament 4"
#define(length=17) MSG_UNLOAD_FILAMENT_1				"Unload filament 1"
#define(length=17) MSG_UNLOAD_FILAMENT_2				"Unload filament 2"
#define(length=17) MSG_UNLOAD_FILAMENT_3				"Unload filament 3"
#define(length=17) MSG_UNLOAD_FILAMENT_4				"Unload filament 4"
#define MSG_UNLOAD_ALL						"Unload all"
#define MSG_LOAD_ALL						"Load all"


#define MSG_RECTRACT                        "Rectract"
#define MSG_ERROR                        "ERROR:"
#define(length=20) MSG_PREHEAT_NOZZLE       "Preheat the nozzle!"
#define MSG_SUPPORT "Support"
#define(length=20) MSG_CORRECTLY			"Changed correctly?"
#define MSG_YES					"Yes"
#define MSG_NO					"No"
#define(length=19) MSG_NOT_LOADED 			"Filament not loaded"
#define MSG_NOT_COLOR 			"Color not clear"
#define(length=20) MSG_LOADING_FILAMENT		"Loading filament"
#define(length=20) MSG_PLEASE_WAIT			"Please wait"
#define MSG_LOADING_COLOR		"Loading color"
#define MSG_CHANGE_SUCCESS		"Change success!"
#define(length=20) MSG_PRESS				"and press the knob"
#define(length=20) MSG_INSERT_FILAMENT		"Insert filament"
#define(length=20) MSG_CHANGING_FILAMENT	"Changing filament!"


#define MSG_SILENT_MODE_ON					"Mode     [silent]"
#define MSG_SILENT_MODE_OFF					"Mode [high power]" 
#define MSG_AUTO_MODE_ON					"Mode [auto power]"
#define(length=20) MSG_REBOOT				"Reboot the printer"
#define(length=20) MSG_TAKE_EFFECT			" for take effect"											

#define MSG_Enqueing                        "enqueing \""
#define MSG_POWERUP                         "PowerUp"
#define MSG_CONFIGURATION_VER               " Last Updated: "
#define MSG_FREE_MEMORY                     " Free Memory: "
#define MSG_PLANNER_BUFFER_BYTES            "  PlannerBufferBytes: "
#define MSG_OK                              "ok"
#define MSG_ERR_CHECKSUM_MISMATCH           "checksum mismatch, Last Line: "
#define MSG_ERR_NO_CHECKSUM                 "No Checksum with line number, Last Line: "
#define MSG_BEGIN_FILE_LIST                 "Begin file list"
#define MSG_END_FILE_LIST                   "End file list"
#define MSG_M104_INVALID_EXTRUDER           "M104 Invalid extruder "
#define MSG_M105_INVALID_EXTRUDER           "M105 Invalid extruder "
#define MSG_M200_INVALID_EXTRUDER           "M200 Invalid extruder "
#define MSG_M218_INVALID_EXTRUDER           "M218 Invalid extruder "
#define MSG_M221_INVALID_EXTRUDER           "M221 Invalid extruder "
#define MSG_ERR_NO_THERMISTORS              "No thermistors - no temperature"
#define MSG_M109_INVALID_EXTRUDER           "M109 Invalid extruder "
#define MSG_HEATING                         "Heating"
#define(length=20) MSG_HEATING_COMPLETE     "Heating done."
#define MSG_BED_HEATING                     "Bed Heating"
#define MSG_BED_DONE                        "Bed done"
#define MSG_ERR_KILLED                      "Printer halted. kill() called!"
#define MSG_ERR_STOPPED                     "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
#define MSG_RESEND                          "Resend: "
#define MSG_M119_REPORT                     "Reporting endstop status"
#define MSG_ENDSTOP_HIT                     "TRIGGERED"
#define MSG_ENDSTOP_OPEN                    "open"

#define MSG_SD_CANT_OPEN_SUBDIR             "Cannot open subdir"
#define MSG_SD_INIT_FAIL                    "SD init fail"
#define MSG_SD_VOL_INIT_FAIL                "volume.init failed"
#define MSG_SD_OPENROOT_FAIL                "openRoot failed"
#define MSG_SD_CARD_OK                      "SD card ok"
#define MSG_SD_WORKDIR_FAIL                 "workDir open failed"
#define MSG_SD_OPEN_FILE_FAIL               "open failed, File: "
#define MSG_SD_FILE_OPENED                  "File opened: "
#define MSG_SD_FILE_SELECTED                "File selected"
#define MSG_SD_WRITE_TO_FILE                "Writing to file: "
#define MSG_SD_PRINTING_BYTE                "SD printing byte "
#define MSG_SD_NOT_PRINTING                 "Not SD printing"
#define MSG_SD_ERR_WRITE_TO_FILE            "error writing to file"
#define MSG_SD_CANT_ENTER_SUBDIR            "Cannot enter subdir: "

#define MSG_STEPPER_TOO_HIGH                "Steprate too high: "
#define MSG_ENDSTOPS_HIT                    "endstops hit: "
#define MSG_ERR_COLD_EXTRUDE_STOP           " cold extrusion prevented"
#define MSG_BABYSTEPPING_X                  "Babystepping X"
#define MSG_BABYSTEPPING_Y                  "Babystepping Y"
#define(length=20) MSG_BABYSTEPPING_Z       "Adjusting Z"
#define MSG_SERIAL_ERROR_MENU_STRUCTURE     "Error in menu structure"

#define MSG_LANGUAGE_NAME					"English"
#define MSG_LANGUAGE_SELECT					"Select language"
#define MSG_PRUSA3D							"prusa3d.com"
#define MSG_PRUSA3D_FORUM					"forum.prusa3d.com"
#define MSG_PRUSA3D_HOWTO					"howto.prusa3d.com"

#define MSG_SELFTEST_ERROR					"Selftest error !"
#define MSG_SELFTEST_PLEASECHECK			"Please check :"	
#define MSG_SELFTEST_NOTCONNECTED			"Not connected"
#define MSG_SELFTEST_HEATERTHERMISTOR		"Heater/Thermistor"
#define MSG_SELFTEST_BEDHEATER				"Bed / Heater"
#define MSG_SELFTEST_WIRINGERROR			"Wiring error"
#define MSG_SELFTEST_ENDSTOPS				"Endstops"
#define MSG_SELFTEST_MOTOR					"Motor"
#define MSG_SELFTEST_ENDSTOP				"Endstop"
#define(length=20,lines=1) MSG_SELFTEST_ENDSTOP_NOTHIT			"Endstop not hit"
#define MSG_SELFTEST_OK						"Self test OK"
#define(length=20,lines=1) MSG_LOOSE_PULLEY					"Loose pulley"

#define(length=20) MSG_SELFTEST_FAN					"Fan test"
#define(length=20) MSG_SELFTEST_COOLING_FAN			"Front print fan?"
#define(length=20) MSG_SELFTEST_EXTRUDER_FAN		"Left hotend fan?"
#define(length=19) MSG_SELFTEST_FAN_YES				"Spinning"
#define(length=19) MSG_SELFTEST_FAN_NO				"Not spinning"

#define(length=20) MSG_STATS_TOTALFILAMENT	"Total filament :"
#define(length=20) MSG_STATS_TOTALPRINTTIME "Total print time :"
#define(length=20) MSG_STATS_FILAMENTUSED	"Filament used:  "
#define(length=20) MSG_STATS_PRINTTIME		"Print time:  "
#define(length=20) MSG_SELFTEST_START				"Self test start  "
#define(length=20) MSG_SELFTEST_CHECK_ENDSTOPS		"Checking endstops"
#define(length=20) MSG_SELFTEST_CHECK_HOTEND		"Checking hotend  "  
#define(length=20) MSG_SELFTEST_CHECK_X				"Checking X axis  "
#define(length=20) MSG_SELFTEST_CHECK_Y				"Checking Y axis  "
#define(length=20) MSG_SELFTEST_CHECK_Z				"Checking Z axis  "
#define(length=20) MSG_SELFTEST_CHECK_BED			"Checking bed     "
#define(length=20) MSG_SELFTEST_CHECK_ALLCORRECT	"All correct      "
#define MSG_SELFTEST						"Selftest         "
#define(length=20) MSG_SELFTEST_FAILED		"Selftest failed  "
#define MSG_STATISTICS						"Statistics  "
#define MSG_USB_PRINTING					"USB printing  "
#define MSG_HOMEYZ                          "Calibrate Z"
#define MSG_HOMEYZ_PROGRESS                 "Calibrating Z"
#define MSG_HOMEYZ_DONE		                "Calibration done"

#define(length=17,lines=1) MSG_SHOW_END_STOPS					"Show end stops"
#define MSG_CALIBRATE_BED					"Calibrate XYZ"
#define MSG_CALIBRATE_BED_RESET				"Reset XYZ calibr."

#define(length=20,lines=8) MSG_MOVE_CARRIAGE_TO_THE_TOP 	"Calibrating XYZ. Rotate the knob to move the Z carriage up to the end stoppers. Click when done."
#define(length=20,lines=8) MSG_MOVE_CARRIAGE_TO_THE_TOP_Z 	"Calibrating Z. Rotate the knob to move the Z carriage up to the end stoppers. Click when done."

#define(length=20,lines=8) MSG_CONFIRM_NOZZLE_CLEAN			"Please clean the nozzle for calibration. Click when done."
#define(length=20,lines=2) MSG_CONFIRM_CARRIAGE_AT_THE_TOP	"Are left and right Z~carriages all up?"

#define(length=60) MSG_FIND_BED_OFFSET_AND_SKEW_LINE1		"Searching bed calibration point"
#define(length=14) MSG_FIND_BED_OFFSET_AND_SKEW_LINE2		" of 4"
#define(length=60) MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1	"Improving bed calibration point"
#define(length=14) MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2	" of 9"
#define(length=60) MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1	"Measuring reference height of calibration point"
#define(length=14) MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2	" of 9"
#define(length=20) MSG_FIND_BED_OFFSET_AND_SKEW_ITERATION	"Iteration "

#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND			"XYZ calibration failed. Bed calibration point was not found."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED				"XYZ calibration failed. Please consult the manual."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_PERFECT					"XYZ calibration ok. X/Y axes are perpendicular. Congratulations!"
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD					"XYZ calibration all right. X/Y axes are slightly skewed. Good job!"
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME				"XYZ calibration all right. Skew will be corrected automatically."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR		"XYZ calibration failed. Left front calibration point not reachable."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR		"XYZ calibration failed. Right front calibration point not reachable."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR		"XYZ calibration failed. Front calibration points not reachable."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR		"XYZ calibration compromised. Left front calibration point not reachable."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR	"XYZ calibration compromised. Right front calibration point not reachable."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR		"XYZ calibration compromised. Front calibration points not reachable."

#define(length=20,lines=4) MSG_BED_LEVELING_FAILED_POINT_LOW						"Bed leveling failed. Sensor didnt trigger. Debris on nozzle? Waiting for reset."
#define(length=20,lines=4) MSG_BED_LEVELING_FAILED_POINT_HIGH						"Bed leveling failed. Sensor triggered too high. Waiting for reset."
#define(length=20,lines=4) MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED				"Bed leveling failed. Sensor disconnected or cable broken. Waiting for reset."

#define(length=20,lines=2) MSG_NEW_FIRMWARE_AVAILABLE								"New firmware version available:"
#define(length=20) MSG_NEW_FIRMWARE_PLEASE_UPGRADE									"Please upgrade."

#define(length=20,lines=8) MSG_FOLLOW_CALIBRATION_FLOW								"Printer has not been calibrated yet. Please follow the manual, chapter First steps, section Calibration flow."
#define(length=20,lines=12) MSG_BABYSTEP_Z_NOT_SET									"Distance between tip of the nozzle and the bed surface has not been set yet. Please follow the manual, chapter First steps, section First layer calibration."

#define(length=20, lines=4) MSG_FILAMENT_LOADING_T0							"Insert filament into extruder 1. Click when done."
#define(length=20, lines=4) MSG_FILAMENT_LOADING_T1							"Insert filament into extruder 2. Click when done."
#define(length=20, lines=4) MSG_FILAMENT_LOADING_T2							"Insert filament into extruder 3. Click when done."
#define(length=20, lines=4) MSG_FILAMENT_LOADING_T3							"Insert filament into extruder 4. Click when done."
#define(length=20, lines=1) MSG_CHANGE_EXTR									"Change extruder"

#define(length=20, lines=4) MSG_FIL_ADJUSTING								"Adjusting filaments. Please wait."
#define(length=20,lines=8) MSG_CONFIRM_NOZZLE_CLEAN_FIL_ADJ			"Filaments are now adjusted. Please clean the nozzle for calibration. Click when done."
#define(length=20, lines=4) MSG_STACK_ERROR						"Error - static memory has been overwritten"
#define(length=20, lines=1) MSG_CALIBRATE_E						"Calibrate E"
//#define(length=20, lines=1) MSG_RESET_CALIBRATE_E				"Reset E Cal."
#define(length=20, lines=8) MSG_E_CAL_KNOB						"Rotate knob until mark reaches extruder body. Click when done."

//#define(length=20, lines=1) MSG_FARM_CARD_MENU					"Farm mode print"
#define(length=20, lines=8) MSG_MARK_FIL						"Mark filament 100mm from extruder body. Click when done."
#define(length=20, lines=8) MSG_CLEAN_NOZZLE_E				"E calibration finished. Please clean the nozzle. Click when done."
#define(length=20, lines=3) MSG_WAITING_TEMP				"Waiting for nozzle and bed cooling"
#define(length=20, lines=2) MSG_FILAMENT_CLEAN				"Is color clear?"
#define(length=18, lines=1) MSG_UNLOADING_FILAMENT			"Unloading filament"
#define(length=20, lines=8) MSG_PAPER						"Place a sheet of paper under the nozzle during the calibration of first 4 points. If the nozzle catches the paper, power off the printer immediately."

#define MSG_BED_CORRECTION_MENU									"Bed level correct"
#define(length=14,lines=1) MSG_BED_CORRECTION_LEFT								"Left side [um]"
#define(length=14,lines=1) MSG_BED_CORRECTION_RIGHT								"Right side[um]"
#define(length=14,lines=1) MSG_BED_CORRECTION_FRONT								"Front side[um]"
#define(length=14,lines=1) MSG_BED_CORRECTION_REAR								"Rear side [um]"
#define MSG_BED_CORRECTION_RESET								"Reset"

#define MSG_MESH_BED_LEVELING									"Mesh Bed Leveling"
#define MSG_MENU_CALIBRATION									"Calibration"
#define(length=17, lines=1) MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF					"SD card  [normal]"
#define(length=17, lines=1) MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON					"SD card [flshAir]"
#define(length=20, lines=1) MSG_PRINTER_DISCONNECTED			"Printer disconnected"
#define(length=20, lines=1) MSG_FINISHING_MOVEMENTS				"Finishing movements"
#define(length=20, lines=1) MSG_PRINT_PAUSED					"Print paused"
#define(length=20, lines=1) MSG_RESUMING_PRINT					"Resuming print"
#define(length=17, lines=1) MSG_PID_EXTRUDER					"PID calibration"
#define(length=19, lines=1) MSG_SET_TEMPERATURE					"Set temperature:"
#define(length=20, lines=1) MSG_PID_FINISHED					"PID cal. finished"
#define(length=20, lines=1) MSG_PID_RUNNING						"PID cal.           "

#define(length=17, lines=1) MSG_CALIBRATE_PINDA					"Calibrate"
#define(length=17, lines=1) MSG_CALIBRATION_PINDA_MENU			"Temp. calibration"
#define(length=20, lines=4) MSG_PINDA_NOT_CALIBRATED			"Temperature calibration has not been run yet"
#define(length=20, lines=1) MSG_PINDA_PREHEAT					"PINDA Heating"
#define(length=20, lines=1) MSG_TEMP_CALIBRATION				"Temp. cal.          "
#define(length=20, lines=4) MSG_TEMP_CALIBRATION_DONE			"Temperature calibration is finished. Click to continue."
#define(length=20, lines=1) MSG_TEMP_CALIBRATION_ON				"Temp. cal. [ON]"
#define(length=20, lines=1) MSG_TEMP_CALIBRATION_OFF			"Temp. cal. [OFF]"
#define(length=20, lines=1) MSG_PREPARE_FILAMENT				"Prepare new filament"
#define(length=19, lines=1) MSG_ALL								"All"
#define(length=19, lines=1) MSG_USED							"Used during print"
#define(length=19, lines=1) MSG_CURRENT							"Current"
#define(length=20, lines=1)	MSG_CHOOSE_EXTRUDER					"Choose extruder:"
#define(length=17, lines=1) MSG_EXTRUDER						"Extruder"
#define(length=17, lines=1) MSG_EXTRUDER_1						"Extruder 1"
#define(length=17, lines=1) MSG_EXTRUDER_2						"Extruder 2"
#define(length=17, lines=1) MSG_EXTRUDER_3						"Extruder 3"
#define(length=17, lines=1) MSG_EXTRUDER_4						"Extruder 4"
#define(length=17, lines=1) MSG_DATE							"Date:"
#define(length=19, lines=1) MSG_XYZ_DETAILS						"XYZ cal. details"
#define(length=20, lines=1)	MSG_Y_DISTANCE_FROM_MIN				"Y distance from min:"
#define(length=12, lines=1)	MSG_LEFT							"Left:"
#define(length=12, lines=1) MSG_CENTER							"Center:"
#define(length=12, lines=1) MSG_RIGHT							"Right:"
#define(length=15, lines=1) MSG_MEASURED_SKEW					"Measured skew:"
#define(length=15, lines=1) MSG_SLIGHT_SKEW						"Slight skew:"
#define(length=15, lines=1) MSG_SEVERE_SKEW						"Severe skew:"
#define(length=20, lines=4) MSG_DEFAULT_SETTINGS_LOADED			"Default settings loaded"
#define(length=17, lines=1) MSG_SORT_TIME						"Sort       [time]"
#define(length=17, lines=1) MSG_SORT_ALPHA						"Sort   [alphabet]"
#define(length=17, lines=1) MSG_SORT_NONE						"Sort       [none]"
#define(length=20, lines=1) MSG_SORTING							"Sorting files"
#define(length=17, lines=1) MSG_SOUND_MODE_LOUD                       "Sound      [loud]"
#define(length=17, lines=1) MSG_SOUND_MODE_ONCE                       "Sound      [once]"
#define(length=17, lines=1) MSG_SOUND_MODE_SILENT                     "Sound    [silent]"
#define(length=17, lines=1) MSG_SOUND_MODE_MUTE                       "Sound      [mute]"
#define(length=20, lines=2) MSG_FILE_INCOMPLETE					"File incomplete. Continue anyway?"
#define(length=17, lines=1) MSG_WIZARD							"Wizard"
#define(length=20, lines=7)	MSG_WIZARD_WELCOME					"Hi, I am your Original Prusa i3 printer. Would you like me to guide you through the setup process?"
#define(length=20, lines=8) MSG_WIZARD_QUIT						"You can always resume the Wizard from Calibration -> Wizard."
#define(length=20, lines=8) MSG_WIZARD_SELFTEST					"First, I will run the selftest to check most common assembly problems."
#define(length=20, lines=8) MSG_WIZARD_CALIBRATION_FAILED		"Please check our handbook and fix the problem. Then resume the Wizard by rebooting the printer."
#define(length=20, lines=8) MSG_WIZARD_XYZ_CAL					"I will run xyz calibration now. It will take approx. 12 mins."
#define(length=20, lines=2) MSG_WIZARD_FILAMENT_LOADED			"Is filament loaded?"
#define(length=20, lines=8) MSG_WIZARD_Z_CAL					"I will run z calibration now."
#define(length=20, lines=4) MSG_WIZARD_WILL_PREHEAT				"Now I will preheat nozzle for PLA."
#define(length=20, lines=3) MSG_WIZARD_HEATING					"Preheating nozzle. Please wait."
#define(length=20, lines=8) MSG_WIZARD_V2_CAL					"Now I will calibrate distance between tip of the nozzle and heatbed surface."
#define(length=20, lines=12) MSG_WIZARD_V2_CAL_2				"I will start to print line and you will gradually lower the nozzle by rotating the knob, until you reach optimal height. Check the pictures in our handbook in chapter Calibration."
#define(length=17, lines=1) MSG_V2_CALIBRATION					"First layer cal."
#define(length=14, lines=1) MSG_SET_CALIBRATED					"Set calibrated"
#define(length=20, lines=8) MSG_WIZARD_DONE						"All is done. Happy printing!"
#define(length=20, lines=8) MSG_WIZARD_LOAD_FILAMENT			"Please insert PLA filament to the extruder, then press knob to load it."
#define(length=20, lines=7) MSG_WIZARD_RERUN					"Running Wizard will delete current calibration results and start from the beginning. Continue?"
#define(length=20, lines=7) MSG_WIZARD_REPEAT_V2_CAL			"Do you want to repeat last step to readjust distance between nozzle and heatbed?"
#define(length=20, lines=8) MSG_WIZARD_CLEAN_HEATBED			"Please clean heatbed and then press the knob."
#define(length=20, lines=2) MSG_WIZARD_PLA_FILAMENT				"Is it PLA filament?"
#define(length=20, lines=8) MSG_WIZARD_INSERT_CORRECT_FILAMENT	"Please load PLA filament and then resume Wizard by rebooting the printer."
#define(length=20, lines=2) MSG_PLA_FILAMENT_LOADED				"Is PLA filament loaded?"
#define(length=20, lines=4) MSG_PLEASE_LOAD_PLA					"Please load PLA filament first."
#define(length=20, lines=8) MSG_FILE_CNT						"Some files will not be sorted. Max. No. of files in 1 folder for sorting is 100."
#define(length=25, lines=1) MSG_M117_V2_CALIBRATION				"M117 First layer cal."