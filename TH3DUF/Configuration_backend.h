#ifndef CONFIGURATION_BACKEND_H
#define CONFIGURATION_BACKEND_H
#define CONFIGURATION_BACKEND_H_VERSION 010110

//===========================================================================
//==================== DO NOT MODIFY BELOW THIS LINE ========================
//===========================================================================

//CR-10 Model Settings
#if ENABLED(CR10) || ENABLED(CR10_MINI) || ENABLED(CR10_S4) || ENABLED(CR10_S5)
  #define SLIM_1284P
  #define BAUDRATE 115200

  #define X_MIN_ENDSTOP_INVERTING false
  #define Y_MIN_ENDSTOP_INVERTING false
  #if ENABLED(EZABL_ENABLE)
    #define Z_MIN_ENDSTOP_INVERTING true
  #else
    #define Z_MIN_ENDSTOP_INVERTING false
  #endif
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #if ENABLED(EZABL_ENABLE)
    #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  #else
    #define Z_MIN_PROBE_ENDSTOP_INVERTING false
  #endif

  #if ENABLED(TITAN_EXTRUDER)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, TITAN_EXTRUDER_STEPS }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 95 }
  #endif
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 25 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 1000, 5000 }

  #define DEFAULT_ACCELERATION          500   
  #define DEFAULT_RETRACT_ACCELERATION  1000  
  #define DEFAULT_TRAVEL_ACCELERATION   500   
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  #if ENABLED(TITAN_EXTRUDER)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif
    
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MELZI_CREALITY
  #endif

  #if ENABLED(CR10)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 300
    #define Z_MAX_POS 400
  #endif

  #if ENABLED(CR10_MINI)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 300
  #endif

  #if ENABLED(CR10_S4)
    #define X_BED_SIZE 400
    #define Y_BED_SIZE 400
    #define Z_MAX_POS 400
  #endif

  #if ENABLED(CR10_S5)
    #define X_BED_SIZE 500
    #define Y_BED_SIZE 500
    #define Z_MAX_POS 500
  #endif
  
  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

#endif //end CR-10

//CR-10S Model Settings
#if ENABLED(CR10S) || ENABLED(CR10S_MINI) || ENABLED(CR10S_S4) || ENABLED(CR10S_S5)
  #define BAUDRATE 1000000

  #define X_MIN_ENDSTOP_INVERTING false
  #define Y_MIN_ENDSTOP_INVERTING false
  #if ENABLED(EZABL_ENABLE)
    #define Z_MIN_ENDSTOP_INVERTING true
  #else
    #define Z_MIN_ENDSTOP_INVERTING false
  #endif
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #if ENABLED(EZABL_ENABLE)
    #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  #else
    #define Z_MIN_PROBE_ENDSTOP_INVERTING false
  #endif

  #if ENABLED(TITAN_EXTRUDER)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, TITAN_EXTRUDER_STEPS }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 95 }
  #endif
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 50, 25 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 1000, 5000 }

  #define DEFAULT_ACCELERATION          500    
  #define DEFAULT_RETRACT_ACCELERATION  1000   
  #define DEFAULT_TRAVEL_ACCELERATION   500    
  
  #define DEFAULT_XJERK                 8.0
  #define DEFAULT_YJERK                 8.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  #if ENABLED(TITAN_EXTRUDER)
    #define INVERT_E0_DIR true
  #else
    #define INVERT_E0_DIR false
  #endif
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_CR10S
  #endif

  #if ENABLED(CR10S)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 300
    #define Z_MAX_POS 400
  #endif

  #if ENABLED(CR10S_MINI)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 300
  #endif

  #if ENABLED(CR10S_S4)
    #define X_BED_SIZE 400
    #define Y_BED_SIZE 400
    #define Z_MAX_POS 400
  #endif

  #if ENABLED(CR10S_S5)
    #define X_BED_SIZE 500
    #define Y_BED_SIZE 500
    #define Z_MAX_POS 500
  #endif
  
  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

#endif //end CR-10S

//Ender Model Settings
#if ENABLED(ENDER2)
  #define SLIM_1284P
  #define BAUDRATE 115200
  
  #define X_MIN_ENDSTOP_INVERTING false
  #define Y_MIN_ENDSTOP_INVERTING false
  #if ENABLED(EZABL_ENABLE)
    #define Z_MIN_ENDSTOP_INVERTING true
  #else
    #define Z_MIN_ENDSTOP_INVERTING false
  #endif
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #if ENABLED(EZABL_ENABLE)
    #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  #else
    #define Z_MIN_PROBE_ENDSTOP_INVERTING false
  #endif

  #if ENABLED(TITAN_EXTRUDER)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, TITAN_EXTRUDER_STEPS }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 95 }
  #endif
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 25 }
  #define DEFAULT_MAX_ACCELERATION      { 2000, 2000, 1000, 5000 }

  #define DEFAULT_ACCELERATION          1000    
  #define DEFAULT_RETRACT_ACCELERATION  1000    
  #define DEFAULT_TRAVEL_ACCELERATION   1000    
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  #if ENABLED(TITAN_EXTRUDER)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif

  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MELZI_CREALITY_ENDER2
  #endif

  #define X_BED_SIZE 160
  #define Y_BED_SIZE 150
  #define Z_MAX_POS 220

#endif //end Ender2

//Tornado Model Settings
#if ENABLED(TORNADO)
  #define BAUDRATE 250000

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true

  #if ENABLED(TITAN_EXTRUDER)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, TITAN_EXTRUDER_STEPS }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 400 }
  #endif
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 25 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 1000, 5000 }

  #define DEFAULT_ACCELERATION          500    
  #define DEFAULT_RETRACT_ACCELERATION  1000   
  #define DEFAULT_TRAVEL_ACCELERATION   500    
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  #define INVERT_E0_DIR true
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MKS_BASE
  #endif

  #define X_BED_SIZE 300
  #define Y_BED_SIZE 300
  #define Z_MAX_POS 400

  #define REVERSE_ENCODER_DIRECTION

#endif //end tornado

//TAZ5 Model Settings
#if ENABLED(TAZ5)
  #define BAUDRATE 250000
  #define V6_HOTEND

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true

  #define DEFAULT_AXIS_STEPS_PER_UNIT {100.5,100.5,1600,830}

  #define DEFAULT_MAX_FEEDRATE {300, 300, 3, 25}

  #define DEFAULT_MAX_ACCELERATION {9000,9000,100,10000}

  #define DEFAULT_ACCELERATION          500    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  3000    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   500    // X, Y, Z acceleration for travel (non printing) moves  
  
  #define DEFAULT_XJERK                  8.0
  #define DEFAULT_YJERK                  8.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  #define INVERT_E0_DIR true
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMBO
  #endif

  #define X_BED_SIZE 295
  #define Y_BED_SIZE 295
  #define Z_MAX_POS 250
#endif //end taz5

#if ENABLED(CR10S) || ENABLED(CR10S_MINI) || ENABLED(CR10S_S4) || ENABLED(CR10S_S5) || ENABLED(CR10) || ENABLED(CR10_MINI) || ENABLED(CR10_S4) || ENABLED(CR10_S5)
  #if ENABLED(CR10_VOLCANO)
    #define X_PROBE_OFFSET_FROM_EXTRUDER 30
    #define Y_PROBE_OFFSET_FROM_EXTRUDER 12
  #endif
  #if ENABLED(CR10_V6HEAVYDUTY)
    #define X_PROBE_OFFSET_FROM_EXTRUDER 63
    #define Y_PROBE_OFFSET_FROM_EXTRUDER 0
  #endif
  #if ENABLED(CR10_OEM)
    #define X_PROBE_OFFSET_FROM_EXTRUDER -44
    #define Y_PROBE_OFFSET_FROM_EXTRUDER -10
  #endif
  #if ENABLED(CR10_FANG)
    #define X_PROBE_OFFSET_FROM_EXTRUDER 48
    #define Y_PROBE_OFFSET_FROM_EXTRUDER -11
  #endif
#endif

#if ENABLED(ENDER2)
  #if ENABLED(ENDER2_OEM)
    #define X_PROBE_OFFSET_FROM_EXTRUDER -33
    #define Y_PROBE_OFFSET_FROM_EXTRUDER -10
  #endif
  #if ENABLED(ENDER2_V6)
    #define X_PROBE_OFFSET_FROM_EXTRUDER -35
    #define Y_PROBE_OFFSET_FROM_EXTRUDER -3
  #endif
#endif

#if ENABLED(TORNADO)
  #if ENABLED(TORNADO_OEM)
    #define X_PROBE_OFFSET_FROM_EXTRUDER -37
    #define Y_PROBE_OFFSET_FROM_EXTRUDER -10
  #endif
    #if ENABLED(TORNADO_VOLCANO)
    #define X_PROBE_OFFSET_FROM_EXTRUDER 30
    #define Y_PROBE_OFFSET_FROM_EXTRUDER 12
  #endif
  #if ENABLED(TORNADO_V6HEAVYDUTY)
    #define X_PROBE_OFFSET_FROM_EXTRUDER 63
    #define Y_PROBE_OFFSET_FROM_EXTRUDER 0
  #endif
#endif

#if ENABLED(TAZ5)
  #if ENABLED(TAZ5_OEM)
    #define X_PROBE_OFFSET_FROM_EXTRUDER -52
    #define Y_PROBE_OFFSET_FROM_EXTRUDER 15
  #endif
#endif

//Misc Settings
#if defined(USER_PRINTER_NAME)
  #define CUSTOM_MACHINE_NAME USER_PRINTER_NAME
#else
  #if ENABLED(EZABL_ENABLE)
    #define CUSTOM_MACHINE_NAME "TH3D EZABL"
  #elif ENABLED(EZOUT_ENABLE)
    #define CUSTOM_MACHINE_NAME "TH3D EZOut"
  #else
    #define CUSTOM_MACHINE_NAME SHORT_BUILD_VERSION
  #endif
#endif

//END TH3D MAIN SETTINGS

#define STRING_CONFIG_H_AUTHOR "(Coleman)"
#if ENABLED(EZABL_ENABLE) && ENABLED(SLIM_1284P) && ENABLED(LINEAR_LEVELING)
  //#define SHOW_BOOTSCREEN
#else
  #define SHOW_BOOTSCREEN
#endif
#define STRING_SPLASH_LINE1 SHORT_BUILD_VERSION
#define STRING_SPLASH_LINE2 WEBSITE_URL

#define SHOW_CUSTOM_BOOTSCREEN

#define SERIAL_PORT 0

#define EXTRUDERS 1

#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75

#define POWER_SUPPLY 0

#if ENABLED(V6_HOTEND)
  #define TEMP_SENSOR_0 5
#else
  #define TEMP_SENSOR_0 1
#endif
#define TEMP_SENSOR_1 0
#define TEMP_SENSOR_2 0
#define TEMP_SENSOR_3 0
#define TEMP_SENSOR_4 0
#if ENABLED(AC_BED)
  #define TEMP_SENSOR_BED 0
#elif ENABLED(TAZ5)
  #define TEMP_SENSOR_BED 7
#elif ENABLED(KEENOVO_TEMPSENSOR)
  #define TEMP_SENSOR_BED 11
#else
  #define TEMP_SENSOR_BED 5
#endif

#define TEMP_RESIDENCY_TIME 10  
#define TEMP_HYSTERESIS 3      
#define TEMP_WINDOW     1      

#define TEMP_BED_RESIDENCY_TIME 10 
#define TEMP_BED_HYSTERESIS 3     
#define TEMP_BED_WINDOW     1     

#define HEATER_0_MINTEMP 5
#define HEATER_1_MINTEMP 5
#define HEATER_2_MINTEMP 5
#define HEATER_3_MINTEMP 5
#define HEATER_4_MINTEMP 5
#define BED_MINTEMP 5

#define HEATER_0_MAXTEMP 300
#define HEATER_1_MAXTEMP 300
#define HEATER_2_MAXTEMP 300
#define HEATER_3_MAXTEMP 300
#define HEATER_4_MAXTEMP 300
#define BED_MAXTEMP 150

#define PIDTEMP
#define BANG_MAX 255
#define PID_MAX BANG_MAX
#define PID_K1 0.95
#if ENABLED(PIDTEMP)
  #define PID_AUTOTUNE_MENU
  #define PID_FUNCTIONAL_RANGE 10
  
  // Default Hotend PID
  #define  DEFAULT_Kp 22.2
  #define  DEFAULT_Ki 1.08
  #define  DEFAULT_Kd 114
 
#endif // PIDTEMP

#if DISABLED(PIDBED_DISABLE)
  #define PIDTEMPBED
#endif

#define MAX_BED_POWER 255

#if ENABLED(PIDTEMPBED)

  //Default Bed PID
  #define  DEFAULT_bedKp 690.34
  #define  DEFAULT_bedKi 111.47
  #define  DEFAULT_bedKd 1068.83
  
#endif

#define PREVENT_COLD_EXTRUSION
#define EXTRUDE_MINTEMP 120

#define PREVENT_LENGTHY_EXTRUDE
#define EXTRUDE_MAXLENGTH 1000

#define THERMAL_PROTECTION_HOTENDS 
#define THERMAL_PROTECTION_BED     

#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG

#define ENDSTOPPULLUPS

#define X_MAX_ENDSTOP_INVERTING false
#define Y_MAX_ENDSTOP_INVERTING false
#define Z_MAX_ENDSTOP_INVERTING false

#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

#if ENABLED(EZABL_ENABLE)
  #define FIX_MOUNTED_PROBE
#endif

#if ENABLED(FIX_MOUNTED_PROBE) && DISABLED(HEATERS_ON_DURING_PROBING)
  #define PROBING_HEATERS_OFF   
#endif

#define Z_PROBE_OFFSET_FROM_EXTRUDER 0   

#define XY_PROBE_SPEED 12000

#define Z_PROBE_SPEED_FAST (HOMING_FEEDRATE_Z / 2)

#define Z_PROBE_SPEED_SLOW (Z_PROBE_SPEED_FAST / 2)

//#define MULTIPLE_PROBING 2

#define Z_CLEARANCE_DEPLOY_PROBE   10 
#define Z_CLEARANCE_BETWEEN_PROBES  5 

#define Z_PROBE_OFFSET_RANGE_MIN -10
#define Z_PROBE_OFFSET_RANGE_MAX 10

#if ENABLED(FIX_MOUNTED_PROBE)
  #define Z_MIN_PROBE_REPEATABILITY_TEST
#endif  

#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define E_ENABLE_ON 0 

#define DISABLE_X false
#define DISABLE_Y false
#define DISABLE_Z false

#define DISABLE_E false
#define DISABLE_INACTIVE_EXTRUDER true

#define INVERT_E1_DIR false
#define INVERT_E2_DIR false
#define INVERT_E3_DIR false
#define INVERT_E4_DIR false

#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1

#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE

#if ENABLED(MIN_SOFTWARE_ENDSTOPS)
  #define MIN_SOFTWARE_ENDSTOP_X
  #define MIN_SOFTWARE_ENDSTOP_Y
  #define MIN_SOFTWARE_ENDSTOP_Z
#endif

#define MAX_SOFTWARE_ENDSTOPS
#if ENABLED(MAX_SOFTWARE_ENDSTOPS)
  #define MAX_SOFTWARE_ENDSTOP_X
  #define MAX_SOFTWARE_ENDSTOP_Y
  #define MAX_SOFTWARE_ENDSTOP_Z
#endif

#if ENABLED(EZOUT_ENABLE) || (ENABLED(CR10S) && DISABLED(CR10S_NOFILAMENTSENSOR)) || (ENABLED(CR10S_MINI) && DISABLED(CR10S_NOFILAMENTSENSOR))  || (ENABLED(CR10S_S4) && DISABLED(CR10S_NOFILAMENTSENSOR)) || (ENABLED(CR10S_S5) && DISABLED(CR10S_NOFILAMENTSENSOR)) 
  #define FILAMENT_RUNOUT_SENSOR
  #if ENABLED(FILAMENT_RUNOUT_SENSOR)
    #if ENABLED(EZOUT_ENABLE)
      #define FIL_RUNOUT_INVERTING false
    #else
      #define FIL_RUNOUT_INVERTING true
    #endif
    #define ENDSTOPPULLUP_FIL_RUNOUT
    #define FILAMENT_RUNOUT_SCRIPT "M600"
  #endif
#endif

#if ENABLED(EZABL_ENABLE)
  #if ENABLED(LINEAR_LEVELING)
    #define AUTO_BED_LEVELING_LINEAR
  #else
    #define AUTO_BED_LEVELING_BILINEAR
  #endif
#endif

//===========================================================================
//=============================== Bed Leveling ==============================
//===========================================================================
// @section calibrate

/**
 * Choose one of the options below to enable G29 Bed Leveling. The parameters
 * and behavior of G29 will change depending on your selection.
 *
 *  If using a Probe for Z Homing, enable Z_SAFE_HOMING also!
 *
 * - AUTO_BED_LEVELING_3POINT
 *   Probe 3 arbitrary points on the bed (that aren't collinear)
 *   You specify the XY coordinates of all 3 points.
 *   The result is a single tilted plane. Best for a flat bed.
 *
 * - AUTO_BED_LEVELING_LINEAR
 *   Probe several points in a grid.
 *   You specify the rectangle and the density of sample points.
 *   The result is a single tilted plane. Best for a flat bed.
 *
 * - AUTO_BED_LEVELING_BILINEAR
 *   Probe several points in a grid.
 *   You specify the rectangle and the density of sample points.
 *   The result is a mesh, best for large or uneven beds.
 *
 * - AUTO_BED_LEVELING_UBL (Unified Bed Leveling)
 *   A comprehensive bed leveling system combining the features and benefits
 *   of other systems. UBL also includes integrated Mesh Generation, Mesh
 *   Validation and Mesh Editing systems.
 *
 * - MESH_BED_LEVELING
 *   Probe a grid manually
 *   The result is a mesh, suitable for large or uneven beds. (See BILINEAR.)
 *   For machines without a probe, Mesh Bed Leveling provides a method to perform
 *   leveling in steps so you can manually adjust the Z height at each grid-point.
 *   With an LCD controller the process is guided step-by-step.
 */
//#define AUTO_BED_LEVELING_3POINT
//#define AUTO_BED_LEVELING_LINEAR
//#define AUTO_BED_LEVELING_BILINEAR
//#define AUTO_BED_LEVELING_UBL
#define MESH_BED_LEVELING

/**
 * Enable detailed logging of G28, G29, M48, etc.
 * Turn on with the command 'M111 S32'.
 * NOTE: Requires a lot of PROGMEM!
 */
//#define DEBUG_LEVELING_FEATURE

#if ENABLED(MESH_BED_LEVELING) || ENABLED(AUTO_BED_LEVELING_BILINEAR) || ENABLED(AUTO_BED_LEVELING_UBL)
  // Gradually reduce leveling correction until a set height is reached,
  // at which point movement will be level to the machine's XY plane.
  // The height can be set with M420 Z<height>
  #define ENABLE_LEVELING_FADE_HEIGHT

  // For Cartesian machines, instead of dividing moves on mesh boundaries,
  // split up moves into short segments like a Delta. This follows the
  // contours of the bed more closely than edge-to-edge straight moves.
  #define SEGMENT_LEVELED_MOVES
  #define LEVELED_SEGMENT_LENGTH 5.0 // (mm) Length of all segments (except the last one)

  /**
   * Enable the G26 Mesh Validation Pattern tool.
   */
  #define G26_MESH_VALIDATION   // Enable G26 mesh validation
  #if ENABLED(G26_MESH_VALIDATION)
    #define MESH_TEST_NOZZLE_SIZE     0.4   // (mm) Diameter of primary nozzle.
    #define MESH_TEST_LAYER_HEIGHT    0.2   // (mm) Default layer height for the G26 Mesh Validation Tool.
    #define MESH_TEST_HOTEND_TEMP   205.0   // (°C) Default nozzle temperature for the G26 Mesh Validation Tool.
    #define MESH_TEST_BED_TEMP       60.0   // (°C) Default bed temperature for the G26 Mesh Validation Tool.
  #endif

#endif

#if ENABLED(AUTO_BED_LEVELING_LINEAR) || ENABLED(AUTO_BED_LEVELING_BILINEAR)

  // Set the number of grid points per dimension.
  #define GRID_MAX_POINTS_X 3
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X

  // Set the boundaries for probing (where the probe can reach).
  #define LEFT_PROBE_BED_POSITION 15
  #define RIGHT_PROBE_BED_POSITION 170
  #define FRONT_PROBE_BED_POSITION 20
  #define BACK_PROBE_BED_POSITION 170

  // The Z probe minimum outer margin (to validate G29 parameters).
  #define MIN_PROBE_EDGE 10

  // Probe along the Y axis, advancing X after each column
  //#define PROBE_Y_FIRST

  #if ENABLED(AUTO_BED_LEVELING_BILINEAR)

    // Beyond the probed grid, continue the implied tilt?
    // Default is to maintain the height of the nearest edge.
    //#define EXTRAPOLATE_BEYOND_GRID

    //
    // Experimental Subdivision of the grid by Catmull-Rom method.
    // Synthesizes intermediate points to produce a more detailed mesh.
    //
    //#define ABL_BILINEAR_SUBDIVISION
    #if ENABLED(ABL_BILINEAR_SUBDIVISION)
      // Number of subdivisions between probe points
      #define BILINEAR_SUBDIVISIONS 3
    #endif

  #endif

#elif ENABLED(AUTO_BED_LEVELING_3POINT)

  // 3 arbitrary points to probe.
  // A simple cross-product is used to estimate the plane of the bed.
  #define ABL_PROBE_PT_1_X 15
  #define ABL_PROBE_PT_1_Y 180
  #define ABL_PROBE_PT_2_X 15
  #define ABL_PROBE_PT_2_Y 20
  #define ABL_PROBE_PT_3_X 170
  #define ABL_PROBE_PT_3_Y 20

#elif ENABLED(AUTO_BED_LEVELING_UBL)

  //===========================================================================
  //========================= Unified Bed Leveling ============================
  //===========================================================================

  //#define MESH_EDIT_GFX_OVERLAY   // Display a graphics overlay while editing the mesh

  #define MESH_INSET 1              // Mesh inset margin on print area
  #define GRID_MAX_POINTS_X 10      // Don't use more than 15 points per axis, implementation limited.
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X

  #define UBL_PROBE_PT_1_X 39       // Probing points for 3-Point leveling of the mesh
  #define UBL_PROBE_PT_1_Y 180
  #define UBL_PROBE_PT_2_X 39
  #define UBL_PROBE_PT_2_Y 20
  #define UBL_PROBE_PT_3_X 180
  #define UBL_PROBE_PT_3_Y 20

  #define UBL_MESH_EDIT_MOVES_Z     // Sophisticated users prefer no movement of nozzle
  #define UBL_SAVE_ACTIVE_ON_M500   // Save the currently active mesh in the current slot on M500

#elif ENABLED(MESH_BED_LEVELING)

  //===========================================================================
  //=================================== Mesh ==================================
  //===========================================================================

  #define MESH_INSET 10          // Mesh inset margin on print area
  #define GRID_MAX_POINTS_X 3    // Don't use more than 7 points per axis, implementation limited.
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X

  //#define MESH_G28_REST_ORIGIN // After homing all axes ('G28' or 'G28 XYZ') rest Z at Z_MIN_POS

#endif // BED_LEVELING

/**
 * Use the LCD controller for bed leveling
 * Requires MESH_BED_LEVELING or PROBE_MANUALLY
 */
#define LCD_BED_LEVELING

#if ENABLED(LCD_BED_LEVELING)
  #define MBL_Z_STEP 0.025    // Step size while manually probing Z axis.
  #define LCD_PROBE_Z_RANGE 4 // Z Range centered on Z_MIN_POS for LCD Z adjustment
#endif

// Add a menu item to move between bed corners for manual bed adjustment
//#define LEVEL_BED_CORNERS

/**
 * Commands to execute at the end of G29 probing.
 * Useful to retract or move the Z probe out of the way.
 */
//#define Z_PROBE_END_SCRIPT "G1 Z10 F12000\nG1 X15 Y330\nG1 Z0.5\nG1 Z10"


#if ENABLED(MESH_BED_LEVELING) || ENABLED(AUTO_BED_LEVELING_BILINEAR) || ENABLED(AUTO_BED_LEVELING_UBL)
  #define ENABLE_LEVELING_FADE_HEIGHT
  #define SEGMENT_LEVELED_MOVES
  #define LEVELED_SEGMENT_LENGTH 5.0
#endif

#if ENABLED(AUTO_BED_LEVELING_LINEAR) || ENABLED(AUTO_BED_LEVELING_BILINEAR)

  #define GRID_MAX_POINTS_X EZABL_POINTS
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X
  #if ENABLED(BINDER_CLIPS)
    #define LEFT_PROBE_BED_POSITION (max(50, X_PROBE_OFFSET_FROM_EXTRUDER))
    #define RIGHT_PROBE_BED_POSITION (min(X_BED_SIZE - 50, X_BED_SIZE + X_PROBE_OFFSET_FROM_EXTRUDER))
    #define FRONT_PROBE_BED_POSITION (max(50, Y_PROBE_OFFSET_FROM_EXTRUDER))
    #define BACK_PROBE_BED_POSITION (min(Y_BED_SIZE - 50, Y_BED_SIZE + Y_PROBE_OFFSET_FROM_EXTRUDER))
  #else
    #define LEFT_PROBE_BED_POSITION (max(30, X_PROBE_OFFSET_FROM_EXTRUDER))
    #define RIGHT_PROBE_BED_POSITION (min(X_BED_SIZE - 30, X_BED_SIZE + X_PROBE_OFFSET_FROM_EXTRUDER))
    #define FRONT_PROBE_BED_POSITION (max(30, Y_PROBE_OFFSET_FROM_EXTRUDER))
    #define BACK_PROBE_BED_POSITION (min(Y_BED_SIZE - 30, Y_BED_SIZE + Y_PROBE_OFFSET_FROM_EXTRUDER))
  #endif
  
  #define MIN_PROBE_EDGE 10

  #if ENABLED(AUTO_BED_LEVELING_BILINEAR)
    //#define EXTRAPOLATE_BEYOND_GRID
  #endif

#endif

#if ENABLED(FIX_MOUNTED_PROBE)
  #define Z_SAFE_HOMING
#endif

#if ENABLED(Z_SAFE_HOMING)
  #define Z_SAFE_HOMING_X_POINT ((X_BED_SIZE) / 2)
  #define Z_SAFE_HOMING_Y_POINT ((Y_BED_SIZE) / 2)
#endif

#define HOMING_FEEDRATE_XY (40*60)
#define HOMING_FEEDRATE_Z  (5*60)

#define EEPROM_SETTINGS
#define EEPROM_CHITCHAT

#define HOST_KEEPALIVE_FEATURE
#define DEFAULT_KEEPALIVE_INTERVAL 2

#define PREHEAT_1_TEMP_HOTEND 200
#define PREHEAT_1_TEMP_BED     60
#define PREHEAT_1_FAN_SPEED     0 

#define PREHEAT_2_TEMP_HOTEND 240
#define PREHEAT_2_TEMP_BED    100
#define PREHEAT_2_FAN_SPEED     0 

#define NOZZLE_PARK_FEATURE

#if ENABLED(NOZZLE_PARK_FEATURE)
  #define NOZZLE_PARK_POINT { (X_MIN_POS + 2), (Y_MIN_POS + 2), 10 }
  #define NOZZLE_PARK_XY_FEEDRATE 100  
  #define NOZZLE_PARK_Z_FEEDRATE 5  
#endif

#define PRINTJOB_TIMER_AUTOSTART

#define DISPLAY_CHARSET_HD44780 JAPANESE

#define SDSUPPORT

#define INDIVIDUAL_AXIS_HOMING_MENU

#if DISABLED(EZABL_ENABLE)
  #define LEVEL_BED_CORNERS
#endif

#if DISABLED(ENDER2) || DISABLED(EZOUT_ENABLE)
  #define SPEAKER
#endif

#if ENABLED(CR10) || ENABLED(CR10_MINI) || ENABLED(CR10_S4) || ENABLED(CR10_S5) || ENABLED(CR10S) || ENABLED(CR10S_MINI) || ENABLED(CR10S_S4) || ENABLED(CR10S_S5) || ENABLED(TORNADO) || ENABLED(TAZ5)
  #if ENABLED(CR10LCD_CR10S)
    #define CR10_STOCKDISPLAY
  #else
    #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
  #endif
#endif

#if ENABLED(ENDER2)
  #define MINIPANEL
#endif

#define SOFT_PWM_SCALE 0

#endif // CONFIGURATION_BACKEND_H
