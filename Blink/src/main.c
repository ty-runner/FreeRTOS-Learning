#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

void blink_task(void *pvParameters) {
    while (1) {
        printf("Hello, FreeRTOS!\n");
        vTaskDelay(pdMS_TO_TICKS(1000));  // Delay for 1000 milliseconds
    }
}

void app_main() {
    xTaskCreate(&blink_task, "blink_task", 2048, NULL, 5, NULL);
}
