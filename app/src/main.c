// Copyright (c) 2020, XMOS Ltd, All rights reserved

#include "FreeRTOS.h"
#include "task.h"

void task(void *param)
{
	(void) param;

	rtos_printf("Hello, World!\n");

    for( ;; )
    {
        /* Task code goes here. */
    }
}

void soc_tile0_main(
        int tile)
{
	BaseType_t ret;

    ret = xTaskCreate(
    		task,                      /* Function that implements the task. */
			"task",                    /* Text name for the task. */
			configMINIMAL_STACK_SIZE,  /* Stack size in words, not bytes. */
			NULL,                      /* Parameter passed into the task. */
			configMAX_PRIORITIES / 2,  /* Priority at which the task is created. */
			NULL);                     /* Used to pass out the created task's handle. */

    vTaskStartScheduler();
}
