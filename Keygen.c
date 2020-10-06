// Paste the code below in your main 
//DISCLAIMER
/*
This code is provided without warranty or guarantee. 
This code eats babies.
It may set fire to your computer, blow up your house or generate general havoc. 
Use this software at your own peril.
*/
//History:
//https://twitter.com/pp3dp_se/status/1303342086243184641?s=20

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
 lora_printf("Heltec license generator 0.1 2020\n");
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
	lora_printf("\n Codeid0 %lx ",(uVar1 >> 8 & 0xff00ff | (uVar1 & 0xff00ff) << 8));
  Codeid[0]=(uVar1 >> 8 & 0xff00ff | (uVar1 & 0xff00ff) << 8);
    if ((uVar1 >> 8 & 0xff00ff | (uVar1 & 0xff00ff) << 8) == Codeid[0]) {
      *(uint64_t **)ptrTimeswitch = (uint64_t *)((uint)*ptrTimeswitch | 0x80000000);
	  *codeid=Codeid[0];
	lora_printf("OK\n");
	  
	  
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
	lora_printf("\n Codeid1 %lx ",(uVar1 >> 1 & 0x55555555 | (uVar1 & 0x55555555) << 1));
    if ((uVar1 >> 1 & 0x55555555 | (uVar1 & 0x55555555) << 1) == Codeid[1]) {
      *(uint64_t **)ptrTimeswitch = (uint64_t *)((uint)*ptrTimeswitch | 0x40000000);
      lora_printf("OK\n");
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
    //lora_printf("Fuse=%x",(uint16_t)(fuse>>32));
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
  
	lora_printf("\n Codeid2 %lx ",(uVar1 >> 1 & 0x55555555 | (uVar1 & 0x55555555) << 1));
  Codeid[2]=(uVar1 >> 1 & 0x55555555 | (uVar1 & 0x55555555) << 1);
    if ((uVar1 >> 1 & 0x55555555 | (uVar1 & 0x55555555) << 1) == Codeid[2]) {
      *(uint64_t **)ptrTimeswitch = (uint64_t *)((uint)*ptrTimeswitch | 0x20000000);
      lora_printf("OK\n");
       codeid[2]=Codeid[2];
    }
  }
