#include <coreinit/thread.h>
#include <coreinit/time.h>
#include <vpad/input.h>
#include <whb/proc.h>
#include <whb/log.h>
#include <whb/log_console.h>
#include <string.h>

const char *version = "0.1a";

int exitApp() {
  WHBLogPrintf("Exiting...");
  WHBLogPrintf("Good Bye :)");
  WHBLogConsoleDraw();
  OSSleepTicks(OSMillisecondsToTicks(1000));
  WHBLogConsoleFree();
  WHBProcShutdown();
  return 0;
}

int main(int argc, char **argv) {
  WHBProcInit();
  WHBLogConsoleInit();
  
  WHBLogPrintf("Gamepad Tester %s - By VCoding", version);
  WHBLogPrintf("CAUTION: Only works with the WiiU Gamepad.");
  WHBLogPrintf("The other controllers are not yet compatible.");
  WHBLogPrintf("");
  WHBLogPrintf("Press A to start the test.");
  WHBLogPrintf("Press another key to exit the application.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  VPADStatus vpad_data;
  VPADReadError error;

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_A) {
        WHBLogPrintf("Test number 1 passed!");
        WHBLogPrintf("Loading test number 2...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release) {
        exitApp();
        return 0;
        break;
      }
    }
  }
  
  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 2: Press button B.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_B) {
        WHBLogPrintf("Test number 2 passed!");
        WHBLogPrintf("Loading test number 3...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button B!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 3: Press button X.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_X) {
        WHBLogPrintf("Test number 3 passed!");
        WHBLogPrintf("Loading test number 4...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button X!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 4: Press button Y.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_Y) {
        WHBLogPrintf("Test number 4 passed!");
        WHBLogPrintf("Loading test number 5...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button Y!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 5: Press button L.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_L) {
        WHBLogPrintf("Test number 5 passed!");
        WHBLogPrintf("Loading test number 6...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button L!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 6: Press button R.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_R) {
        WHBLogPrintf("Test number 6 passed!");
        WHBLogPrintf("Loading test number 7...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button R!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 7: Press button ZL.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_ZL) {
        WHBLogPrintf("Test number 7 passed!");
        WHBLogPrintf("Loading test number 8...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button ZL!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 8: Press button ZR.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_ZR) {
        WHBLogPrintf("Test number 8 passed!");
        WHBLogPrintf("Loading test number 9...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button ZR!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 9: Press button DPAD-Up.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_UP) {
        WHBLogPrintf("Test number 9 passed!");
        WHBLogPrintf("Loading test number 10...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button DPAD-Up!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 10: Press button DPAD-Down.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_DOWN) {
        WHBLogPrintf("Test number 10 passed!");
        WHBLogPrintf("Loading test number 11...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button DPAD-Down!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 11: Press button DPAD-Left.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_LEFT) {
        WHBLogPrintf("Test number 11 passed!");
        WHBLogPrintf("Loading test number 12...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button DPAD-Left!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 12: Press button DPAD-Right.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_RIGHT) {
        WHBLogPrintf("Test number 12 passed!");
        WHBLogPrintf("Loading test number 13...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button DPAD-Right!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 13: Press button PLUS.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_PLUS) {
        WHBLogPrintf("Test number 13 passed!");
        WHBLogPrintf("Loading test number 14...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button PLUS!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 14: Press button MINUS.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_MINUS) {
        WHBLogPrintf("Test number 14 passed!");
        WHBLogPrintf("Loading test number 15...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button MINUS!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 15: Please press the left joystick.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_STICK_L) {
        WHBLogPrintf("Test number 15 passed!");
        WHBLogPrintf("Loading test number 16...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button left joystick!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 16: Please press the right joystick.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_STICK_R) {
        WHBLogPrintf("Test number 16 passed!");
        WHBLogPrintf("Loading test number 17...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not button right joystick!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 17: Press the TV button");
  WHBLogPrintf("Click on A, to know its location.");
  WHBLogPrintf("To exit the application press the home button.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_TV) {
        WHBLogPrintf("Test number 17 passed!");
        WHBLogPrintf("Loading test number 18...");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_HOME) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release & VPAD_BUTTON_A) {
        WHBLogPrintf("The button is located to the left of the power button and to");
        WHBLogPrintf("the right of the home button on the gamepad.");
        WHBLogConsoleDraw();
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not TV button!");
        WHBLogConsoleDraw();
      }
    }
  }

  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("Test number 18: Press the Home button");
  WHBLogPrintf("To exit the application press the home A.");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(error == 0) {
      if(vpad_data.release & VPAD_BUTTON_HOME) {
        WHBLogPrintf("Test number 18 passed!");
        WHBLogConsoleDraw();
        OSSleepTicks(OSMillisecondsToTicks(1000));
        break;
      } else if(vpad_data.release & VPAD_BUTTON_A) {
        exitApp();
        return 0;
        break;
      } else if(vpad_data.release) {
        WHBLogPrintf("I'm sorry, but the button you pressed is not home button!");
        WHBLogConsoleDraw();
      }
    }
  }

  // Test finished
  WHBLogPrintf("GamepadTester %s - By VCoding", version);
  WHBLogPrintf("CAUTION: Only works with the WiiU Gamepad.");
  WHBLogPrintf("The other controllers are not yet compatible.");
  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("The test is finished.");
  WHBLogPrintf("All your buttons are working.");
  WHBLogPrintf("Press any button to return to the homebrew launcher.");
  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("");
  WHBLogPrintf("");

  WHBLogConsoleDraw();

  while(1) {
    error = -1;
    VPADRead(0, &vpad_data, 1, &error);

    if(vpad_data.release) {
      WHBLogConsoleFree();
      WHBProcShutdown();
      break;
    }
  }

  return 0;
}