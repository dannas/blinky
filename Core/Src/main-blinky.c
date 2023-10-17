
#include "main.h"
#include "bsp.h"

int main(void)
{
  bsp_init();

  while (1)
  {
	  HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
	  HAL_Delay(500);
  }
}

