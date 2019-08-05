
// ui_common.h
//
// User interface.
//
// Author: Ajay Tatachar <ajaymt2@illinois.edu>

#ifndef _UI_COMMON_H_
#define _UI_COMMON_H_

#include <stdint.h>

#define SCREENWIDTH  800
#define SCREENHEIGHT 600

typedef struct ui_window_s {
  uint32_t x;
  uint32_t y;
  uint32_t w;
  uint32_t h;
} ui_window_t;

typedef enum {
  UI_EVENT_KEYBOARD,
  UI_EVENT_RESIZE,
  UI_EVENT_WAKE
} ui_event_type_t;

typedef struct ui_event_s {
  ui_event_type_t type;
  uint8_t code;
  uint8_t is_active;
  uint32_t width;
  uint32_t height;
} ui_event_t;

typedef enum {
  UI_SPLIT_LEFT,
  UI_SPLIT_RIGHT,
  UI_SPLIT_UP,
  UI_SPLIT_DOWN,
} ui_split_type_t;

#endif /* _UI_COMMON_H_ */
