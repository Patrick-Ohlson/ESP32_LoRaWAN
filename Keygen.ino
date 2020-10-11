// Paste the code below in your main 

// Run it and copy generated license, license also works with newer versions from Heltec as per 20201110

//DISCLAIMER
/*
This code is provided without warranty or guarantee. 
This code eats babies.
It may set fire to your computer, blow up your house or generate general havoc. 
Use this software at your own peril.
*/

//History:
//https://twitter.com/pp3dp_se/status/1303342086243184641?s=20


#include "Arduino.h"
#include "board.h"
#include "LoRaMac.h"
#include "Commissioning.h"
#include <SPI.h>
#include <LoRa.h>
#include <Mcu.h>

#define SCK     5    // GPIO5  -- SX127x's SCK
#define MISO    19   // GPIO19 -- SX127x's MISO
#define MOSI    27   // GPIO27 -- SX127x's MOSI
#define SS      18   // GPIO18 -- SX127x's CS
#define RST     14   // GPIO14 -- SX127x's RESET
#define DIO0    26   // GPIO26 -- SX127x's IRQ(Interrupt Request)
#define DIO1    35   // GPIO33 -- SX127x's IRQ(Interrupt Request)

uint32_t  LICENSE[4] = {  0xDEADBEEF,0xDEADBEEF,0xDEADBEEF,0xDEADBEEF};//470v2

TickType_t x_delay(TickType_t param_1)

{
  vTaskDelay(param_1);
  return param_1;
}
uint64_t * timercheck(uint64_t *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = ESP.getEfuseMac();
  return (uint64_t *)(iVar1 + -0x181e0505);
}
void Keygen(uint32_t *codeid)

{
  uint32_t *ptrTimeswitch;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint64_t *__return_storage_ptr__;
  uint unaff_a11=0x2054;
  uint moo=0;
  uint code=0;
  uint64_t fuse;
  uint64_t *puVar4;

  uint32_t Codeid[10];
  
    Codeid[0] = *codeid;
    Codeid[1] = codeid[1];
    Codeid[2] = codeid[2];
    Codeid[3] = codeid[3];
  ptrTimeswitch = &TimeSwitch;
  uVar1 = TimeSwitch & 0x8000000;
 lora_printf("Heltec license generator 0.2 20201011\n");
  if (uVar1 == 0) {
    TimeSwitch = TimeSwitch & 0x7fffffff | 0x8000000;
    fuse = ESP.getEfuseMac();

unaff_a11=(uint)(fuse>>32);
	
	
    uVar3 = unaff_a11 * 0x10000 + fuse;
    uVar2 = 1;
    if (unaff_a11 * 0x10000 <= uVar3) {
      uVar2 = uVar1;
    }
    uVar1 = uVar3 - (unaff_a11 & 0xffff);
    uVar1 = (((uVar2 + unaff_a11) - (uint)(uVar3 < uVar1)) * 0x10000 | uVar1 >> 0x10) + 0x7f94c959;
	code=unaff_a11;
    unaff_a11 = (uVar1 & 0xf0f0f0f) << 4;
    uVar1 = (uVar1 >> 4 & 0xf0f0f0f | unaff_a11) + 0xa4e384e;
    uVar1 = (uVar1 >> 2 & 0x33333333 | (uVar1 & 0x33333333) << 2) + 0x572384dc;
    uVar1 = (uVar1 >> 1 & 0x55555555 | (uVar1 & 0x55555555) << 1) + 0xa8dc7b24;


	lora_printf("\n uint32_t  LICENSE[4] = {/* Codeid0 */ 0x%lx, ",(uVar1 >> 8 & 0xff00ff | (uVar1 & 0xff00ff) << 8));
  Codeid[0]=(uVar1 >> 8 & 0xff00ff | (uVar1 & 0xff00ff) << 8);
    if ((uVar1 >> 8 & 0xff00ff | (uVar1 & 0xff00ff) << 8) == Codeid[0]) {
      *(uint64_t **)ptrTimeswitch = (uint64_t *)((uint)*ptrTimeswitch | 0x80000000);
	  *codeid=Codeid[0];

	  
	  
    }

  }
  unaff_a11=0xa618; //
  __return_storage_ptr__ = (uint64_t *)*ptrTimeswitch;
  if (((uint)__return_storage_ptr__ & 0x4000000) == 0) {
    *(uint64_t **)ptrTimeswitch =
         (uint64_t *)((uint)__return_storage_ptr__ & 0xbfffffff | 0x4000000);
    puVar4 = timercheck(__return_storage_ptr__);
  
  //patrick, set encoded chip id
     fuse =(uint64_t) timercheck();
  
    unaff_a11=(uint)(fuse>>32);

    uVar1 = 1;
    if (puVar4 <= (uint64_t *)((int)puVar4 + 0x181e0505U)) {
      uVar1 = (uint)__return_storage_ptr__ & 0x4000000;
    }
    uVar1 = uVar1 + (unaff_a11 - 0x85c4);
    puVar4 = (uint64_t *)
             ((int)(uint64_t *)(uVar1 * 0x10000) + (int)(uint64_t *)((int)puVar4 + 0x181e0505U));
    __return_storage_ptr__ = (uint64_t *)((int)puVar4 - (uVar1 & 0xffff));
    uVar1 = (((uint)__return_storage_ptr__ & 0xf000) << 4 |
            (((puVar4 < (uint64_t *)(uVar1 * 0x10000)) + uVar1) -
             (uint)(puVar4 < __return_storage_ptr__) & 0xfff0) << 0x10 |
            (uint)__return_storage_ptr__ >> 0x10) + 0x394bbd41;
    uVar1 = (uVar1 >> 8 & 0xff00ff | (uVar1 & 0xff00ff) << 8) + 0x3facf646;
    unaff_a11 = 0xf0f0f0f0;
    uVar1 = (uVar1 >> 2 & 0x33333333 | ((uVar1 ^ 0xffffffff) & 0x33333333) << 2) + 0x414de9da;
    uVar1 = ((uVar1 ^ 0xffffffff) >> 4 & 0xf0f0f0f | (uVar1 & 0xf0f0f0f) << 4) + 0x7e799942;
   
    Codeid[1]=(uVar1 >> 1 & 0x55555555 | (uVar1 & 0x55555555) << 1);
	lora_printf("/* Codeid1 */0x%lx, ",(uVar1 >> 1 & 0x55555555 | (uVar1 & 0x55555555) << 1));
    if ((uVar1 >> 1 & 0x55555555 | (uVar1 & 0x55555555) << 1) == Codeid[1]) {
      *(uint64_t **)ptrTimeswitch = (uint64_t *)((uint)*ptrTimeswitch | 0x40000000);
   
      codeid[1]=Codeid[1];
    }
  }


  __return_storage_ptr__ = (uint64_t *)*ptrTimeswitch;
  if (((uint)__return_storage_ptr__ & 0x2000000) == 0) {
    *(uint64_t **)ptrTimeswitch =
         (uint64_t *)((uint)__return_storage_ptr__ & 0xdfffffff | 0x2000000);
    puVar4 = timercheck(__return_storage_ptr__);

//patrick, set encoded chip id
     fuse =(uint64_t) timercheck();

    unaff_a11=(uint)(fuse>>32);

    uVar1 = 1;
    if (puVar4 <= (uint64_t *)((int)puVar4 + 0x181e0505U)) {
      uVar1 = (uint)__return_storage_ptr__ & 0x2000000;
    }
    uVar1 = uVar1 + (unaff_a11 - 0x85c4);
    puVar4 = (uint64_t *)
             ((int)(uint64_t *)(uVar1 * 0x10000) + (int)(uint64_t *)((int)puVar4 + 0x181e0505U));
    __return_storage_ptr__ = (uint64_t *)((int)puVar4 - (uVar1 & 0xffff));
    unaff_a11 = 0xffffffff;
    uVar1 = ((uint)__return_storage_ptr__ & 0xf0 |
            ((((puVar4 < (uint64_t *)(uVar1 * 0x10000)) + uVar1) -
             (uint)(puVar4 < __return_storage_ptr__)) * 0x10000 |
            (uint)__return_storage_ptr__ >> 0x10) & 0xf0ffff0f |
            ((uint)__return_storage_ptr__ & 0xf00) << 0x10) + 0xb2f6b12d;
    uVar1 = ((uVar1 ^ 0xffffffff) >> 8 & 0xff00ff | (uVar1 & 0xff00ff) << 8) + 0x1bedc3b2;
    uVar1 = (uVar1 >> 4 & 0xf0f0f0f | ((uVar1 ^ 0xffffffff) & 0xf0f0f0f) << 4) + 0xf5941f73 ^
            0xffffffff;
    uVar1 = (uVar1 >> 2 & 0x33333333 | (uVar1 & 0x33333333) << 2) + 0x73e9aedb;
    
	lora_printf("/* Codeid2 */0x%lx, ",(uVar1 >> 1 & 0x55555555 | (uVar1 & 0x55555555) << 1));
  Codeid[2]=(uVar1 >> 1 & 0x55555555 | (uVar1 & 0x55555555) << 1);
    if ((uVar1 >> 1 & 0x55555555 | (uVar1 & 0x55555555) << 1) == Codeid[2]) {
   
       codeid[2]=Codeid[2];
    }
  }

  __return_storage_ptr__ = (uint64_t *)*ptrTimeswitch;
  if (((uint)__return_storage_ptr__ & 0x1000000) == 0) {
    *(uint64_t **)ptrTimeswitch =
         (uint64_t *)((uint)__return_storage_ptr__ & 0xefffffff | 0x1000000);
    puVar4 = timercheck(__return_storage_ptr__);
     
  //patrick, set encoded chip id
     fuse =(uint64_t) timercheck();
 
    unaff_a11=(uint)(fuse>>32);
    
    uVar1 = 1;
    if (puVar4 <= (uint64_t *)((int)puVar4 + 0x181e0505U)) {
      uVar1 = (uint)__return_storage_ptr__ & 0x1000000;
    }
    uVar1 = uVar1 + (unaff_a11 - 0x85c4);
    puVar4 = (uint64_t *)
             ((int)(uint64_t *)(uVar1 * 0x10000) + (int)(uint64_t *)((int)puVar4 + 0x181e0505U));
    __return_storage_ptr__ = (uint64_t *)((int)puVar4 - (uVar1 & 0xffff));
    uVar1 = ((uint)__return_storage_ptr__ & 0xf) << 8 |
            (((puVar4 < (uint64_t *)(uVar1 * 0x10000)) + uVar1) -
            (uint)(puVar4 < __return_storage_ptr__)) * 0x10000 |
            (uint)__return_storage_ptr__ >> 0x10 & 0xfffff0ff;
    uVar1 = ((uVar1 ^ 0xffffffff) >> 1 & 0x55555555 | (uVar1 & 0x55555555) << 1) + 0x237ce438;
    uVar1 = (uVar1 >> 4 & 0xf0f0f0f | ((uVar1 ^ 0xffffffff) & 0xf0f0f0f) << 4) + 0xd9c7de39;
    uVar1 = ((uVar1 ^ 0xffffffff) >> 8 & 0xff00ff | (uVar1 & 0xff00ff) << 8) + 0x41ec0f9a ^
            0xffffffff;
           
			lora_printf("/* Codeid3 */0x%lx}; //GENERATED LICENSE ",(uVar1 >> 2 & 0x33333333 | (uVar1 & 0x33333333) << 2) + 0x28c6c100);
      Codeid[3]=(uVar1 >> 2 & 0x33333333 | (uVar1 & 0x33333333) << 2) + 0x28c6c100;
    if ((uVar1 >> 2 & 0x33333333 | (uVar1 & 0x33333333) << 2) + 0x28c6c100 == Codeid[3]) {
      *(uint64_t **)ptrTimeswitch = (uint64_t *)((uint)*ptrTimeswitch | 0x10000000);
     
       codeid[3]=Codeid[3];
    }
  }
  lora_printf("\n\n License generated\n\n");
  return;
}
void setup()
{
// Add your initialization code here
  Serial.begin(115200);
  while (!Serial);
  SPI.begin(SCK,MISO,MOSI,SS);
  Keygen(LICENSE);
  Mcu.begin(SS,RST,DIO0,DIO1,LICENSE);
  DeviceState = DEVICE_STATE_INIT;
}

// The loop function is called in an endless loop
void loop()
{
 
}

