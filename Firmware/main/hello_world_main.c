/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_log.h"
static const char *TAG = "example";
void app_main(void)
{
    printf("Hello world!\n");
    ESP_LOGI(TAG,"EXAMPLE OF ESP_LOGI BRANCH HUMEDAD");
    /* Print chip information */

    esp_restart();
}
