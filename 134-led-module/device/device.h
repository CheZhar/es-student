#ifndef DEVICE_H
#define DEVICE_H

#define DEVICE_NAME "es-led-module"
#define FIRMWARE_VERSION "1.0.0"

#define DEVICE_PROJECT "134-led-module"
#define DEVICE_REPO "https://github.com/CheZhar/es-student"

#ifndef DEVICE_BOARD
#define DEVICE_BOARD "unknown"
#endif

#include <log.h>
#include <stdio.h> // Добавлено для printf (понадобится в device.c)

void log_version(void);

void device_info(void);

#endif