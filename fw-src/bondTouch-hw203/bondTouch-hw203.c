/* Ghidra 11.1.2 headless decompilation of ble_bracelet_s130.bin, base 0x1b000. */
/* Derived from vendor firmware: for private interoperability study only. */

/* ---- thunk_FUN_0001fff8 @ 0001b0c8 ---- */

void thunk_FUN_0001fff8(void)

{
  (*DAT_0001b0cc)();
  return;
}


/* ---- FUN_0001b0d4 @ 0001b0d4 ---- */

void FUN_0001b0d4(int param_1)

{
  do {
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}


/* ---- FUN_0001b0f4 @ 0001b0f4 ---- */

void FUN_0001b0f4(void)

{
  *DAT_0001b11c = *DAT_0001b11c | 3;
  *DAT_0001b120 = *DAT_0001b120 | 3;
  (*DAT_0001b124)();
                    /* WARNING: Could not recover jumptable at 0x0001b10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001b128)();
  return;
}


/* ---- FUN_0001b10e @ 0001b10e ---- */

void FUN_0001b10e(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001b110 @ 0001b110 ---- */

void FUN_0001b110(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001b112 @ 0001b112 ---- */

void FUN_0001b112(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001b114 @ 0001b114 ---- */

void FUN_0001b114(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001b116 @ 0001b116 ---- */

void FUN_0001b116(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001b118 @ 0001b118 ---- */

void FUN_0001b118(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001b12c @ 0001b12c ---- */

int FUN_0001b12c(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar2 = 0x20;
  while (uVar3 = uVar2 - 1, 0 < (int)uVar2) {
    uVar2 = uVar3;
    if (param_2 <= param_1 >> (uVar3 & 0xff)) {
      param_1 = param_1 - (param_2 << (uVar3 & 0xff));
      iVar1 = iVar1 + (1 << (uVar3 & 0xff));
    }
  }
  return iVar1;
}


/* ---- FUN_0001b158 @ 0001b158 ---- */

int FUN_0001b158(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = param_1 < 0;
  if (bVar2) {
    param_1 = -param_1;
  }
  bVar3 = param_2 < 0;
  if (bVar3) {
    param_2 = -param_2;
  }
  iVar1 = FUN_0001b12c(param_1,param_2);
  if (bVar2 != bVar3) {
    iVar1 = -iVar1;
  }
  return iVar1;
}


/* ---- FUN_0001b180 @ 0001b180 ---- */

longlong FUN_0001b180(uint param_1,int param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  int local_2c;
  
  lVar1 = 0;
  iVar3 = 0x40;
  local_2c = param_2;
  while (iVar4 = iVar3 + -1, 0 < iVar3) {
    uVar6 = FUN_0001b266(param_1,local_2c,iVar4);
    uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
    iVar3 = iVar4;
    if (param_4 < uVar2 || uVar2 - param_4 < (uint)(param_3 <= (uint)uVar6)) {
      uVar6 = FUN_0001b246(param_3,param_4,iVar4);
      bVar5 = param_1 < (uint)uVar6;
      param_1 = param_1 - (uint)uVar6;
      local_2c = (local_2c - (int)((ulonglong)uVar6 >> 0x20)) - (uint)bVar5;
      lVar7 = FUN_0001b246(1,0,iVar4);
      lVar1 = lVar7 + lVar1;
    }
  }
  return lVar1;
}


/* ---- FUN_0001b1e0 @ 0001b1e0 ---- */

void FUN_0001b1e0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  while (bVar2 = param_3 != 0, param_3 = param_3 - 1, bVar2) {
    *(undefined *)param_1 = *(undefined *)param_2;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}


/* ---- FUN_0001b204 @ 0001b204 ---- */

void FUN_0001b204(undefined *param_1,int param_2,undefined param_3)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    *param_1 = param_3;
    param_1 = param_1 + 1;
  }
  return;
}


/* ---- FUN_0001b212 @ 0001b212 ---- */

void FUN_0001b212(undefined4 param_1,undefined4 param_2)

{
  FUN_0001b204(param_1,param_2,0);
  return;
}


/* ---- FUN_0001b216 @ 0001b216 ---- */

undefined4 FUN_0001b216(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001b204(param_1,param_3,param_2);
  return param_1;
}


/* ---- FUN_0001b228 @ 0001b228 ---- */

void FUN_0001b228(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0;
      ((uVar1 < param_3 && (*(char *)(param_1 + uVar1) == *(char *)(param_2 + uVar1))) &&
      (*(char *)(param_1 + uVar1) != '\0')); uVar1 = uVar1 + 1) {
  }
  return;
}


/* ---- FUN_0001b246 @ 0001b246 ---- */

longlong FUN_0001b246(uint param_1,int param_2,uint param_3)

{
  if (0x1f < (int)param_3) {
    return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
  }
  return CONCAT44(param_2 << (param_3 & 0xff) | param_1 >> (0x20 - param_3 & 0xff),
                  param_1 << (param_3 & 0xff));
}


/* ---- FUN_0001b266 @ 0001b266 ---- */

ulonglong FUN_0001b266(uint param_1,uint param_2,uint param_3)

{
  if (0x1f < (int)param_3) {
    return (ulonglong)(param_2 >> (param_3 - 0x20 & 0xff));
  }
  return CONCAT44(param_2 >> (param_3 & 0xff),
                  param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
}


/* ---- FUN_0001b288 @ 0001b288 ---- */

uint FUN_0001b288(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  iVar1 = (int)(param_2 ^ param_4) >> 0x1f;
  local_20 = -iVar1;
  uVar5 = param_3;
  uVar3 = param_4;
  if ((param_2 & 0x7fffffff) <= (param_4 & 0x7fffffff) &&
      (uint)(param_3 <= param_1) <= (param_2 & 0x7fffffff) - (param_4 & 0x7fffffff)) {
    uVar5 = param_1;
    uVar3 = param_2;
    param_2 = param_4;
    param_1 = param_3;
  }
  if ((uVar3 & 0x7fffffff | uVar5) != 0) {
    local_24 = param_2 >> 0x14;
    local_1c = local_24 & 0x7ff;
    iVar2 = local_1c - ((uVar3 << 1) >> 0x15);
    if (iVar2 < 0x40) {
      uVar3 = uVar3 & 0xfffff | 0x100000;
      if (local_20 != 0) {
        bVar7 = uVar5 != 0;
        uVar5 = -uVar5;
        uVar3 = -(uint)bVar7 - uVar3;
      }
      uVar8 = FUN_0001b246(uVar5,uVar3,0x40 - iVar2);
      uVar6 = (uint)(uVar8 >> 0x20);
      uVar4 = (uint)uVar8;
      lVar9 = FUN_0001b638(uVar5,uVar3,iVar2,&local_24);
      lVar9 = lVar9 + CONCAT44(param_2,param_1);
      uVar5 = (uint)lVar9;
      uVar3 = (uint)((ulonglong)lVar9 >> 0x20);
      if ((uVar3 >> 0x14 ^ local_24 | (int)local_24 >> 0x1f) != 0) {
        if (local_20 == 0) {
          uVar8 = CONCAT44((uint)((uVar8 >> 1) >> 0x20) | uVar5 * -0x80000000,(int)(uVar8 >> 1));
          lVar9 = CONCAT44((uVar3 + local_24 * -0x100000 + 0x100000 >> 1) + local_24 * 0x100000,
                           uVar5 >> 1 | uVar3 * -0x80000000);
        }
        else {
          if (iVar2 < 2) {
            uVar5 = FUN_0001b678(uVar5,uVar3 + local_24 * -0x100000 + 0x100000,uVar4,uVar6,0,
                                 local_24 * 0x100000 & 0x80000000,local_1c);
            return uVar5;
          }
          lVar9 = CONCAT44(local_24 * -0x100000 + DAT_0001b3e8 +
                           uVar3 * 2 + 0x200000 + (uint)CARRY4(uVar5,uVar5),
                           uVar5 * 2 | uVar6 >> 0x1f);
          uVar8 = CONCAT44(uVar6 * 2 + (uint)CARRY4(uVar4,uVar4),uVar4 * 2);
        }
      }
    }
    else {
      uVar8 = CONCAT44(-(uint)(1 < (uint)(iVar1 * -2)),iVar1 * 2 + 1);
      lVar9 = CONCAT44(param_2 - (param_1 < local_20),param_1 + iVar1);
    }
    param_1 = FUN_0001b65e((int)lVar9,(int)((ulonglong)lVar9 >> 0x20),(int)uVar8,
                           (int)(uVar8 >> 0x20));
  }
  return param_1;
}


/* ---- FUN_0001b3ec @ 0001b3ec ---- */

void FUN_0001b3ec(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  local_20 = param_3;
  local_28 = param_1;
  if (((param_1 | param_2 & 0x7fffffff) != 0) && ((param_3 | param_4 & 0x7fffffff) != 0)) {
    local_24 = param_2 & 0xfffff | 0x100000;
    local_1c = param_4 & 0xfffff | 0x100000;
    uVar3 = 0;
    uVar6 = 0;
    iVar1 = 0;
    iVar4 = iVar1;
    while( true ) {
      iVar5 = iVar4;
      for (iVar2 = iVar1 - iVar4; iVar2 <= iVar4; iVar2 = iVar2 + 1) {
        uVar7 = (uint)*(ushort *)((int)&local_20 + iVar2 * 2) *
                (uint)*(ushort *)((int)&local_28 + iVar5 * 2);
        bVar8 = CARRY4(uVar7,uVar3);
        uVar3 = uVar7 + uVar3;
        uVar6 = uVar6 + bVar8;
        iVar5 = iVar5 + -1;
      }
      *(short *)((int)&local_38 + iVar1 * 2) = (short)uVar3;
      uVar3 = uVar3 >> 0x10 | uVar6 << 0x10;
      uVar6 = uVar6 >> 0x10;
      iVar1 = iVar1 + 1;
      if (7 < iVar1) break;
      iVar4 = iVar1;
      if (2 < iVar1) {
        iVar4 = 3;
      }
    }
    FUN_0001b678(local_30,local_2c,local_38,local_34,0,(param_2 ^ param_4) & 0x80000000,
                 (((param_2 & 0x7fffffff) << 1) >> 0x15) + (((param_4 & 0x7fffffff) << 1) >> 0x15) +
                 DAT_0001b4b8);
  }
  return;
}


/* ---- FUN_0001b4bc @ 0001b4bc ---- */

void FUN_0001b4bc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  if (((param_1 | param_2 & 0x7fffffff) != 0) && ((param_3 | param_4 & 0x7fffffff) != 0)) {
    iVar1 = ((((param_2 & 0x7fffffff) << 1) >> 0x15) - (((param_4 & 0x7fffffff) << 1) >> 0x15)) +
            DAT_0001b5a8;
    uVar4 = param_2 & 0xfffff | 0x100000;
    uVar6 = param_4 & 0xfffff | 0x100000;
    if (uVar6 < uVar4 || uVar4 - uVar6 < (uint)(param_3 <= param_1)) {
      iVar1 = iVar1 + 1;
    }
    else {
      bVar9 = CARRY4(param_1,param_1);
      param_1 = param_1 * 2;
      uVar4 = uVar4 * 2 + (uint)bVar9;
    }
    if (-1 < iVar1) {
      uVar3 = 0x100000;
      uVar7 = 0;
      uVar8 = 0;
      for (uVar2 = 0; (uVar2 | uVar3) != 0; uVar2 = uVar2 >> 1 | uVar5) {
        if (uVar6 < uVar4 || uVar4 - uVar6 < (uint)(param_3 <= param_1)) {
          bVar9 = param_1 < param_3;
          param_1 = param_1 - param_3;
          uVar4 = (uVar4 - uVar6) - (uint)bVar9;
          uVar7 = uVar7 | uVar2;
          uVar8 = uVar8 | uVar3;
        }
        uVar5 = uVar3 << 0x1f;
        uVar3 = uVar3 >> 1;
        bVar9 = CARRY4(param_1,param_1);
        param_1 = param_1 * 2;
        uVar4 = uVar4 * 2 + (uint)bVar9;
      }
      if ((param_1 | uVar4) != 0) {
        if ((param_3 ^ param_1 | uVar4 ^ uVar6) == 0) {
          param_1 = 0;
          uVar4 = 0x80000000;
        }
        else if (uVar6 < uVar4 || uVar4 - uVar6 < (uint)(param_3 <= param_1)) {
          param_1 = 0xfffffffe;
          uVar4 = 0xffffffff;
        }
        else {
          param_1 = 1;
          uVar4 = 0;
        }
      }
      FUN_0001b65e(uVar7,iVar1 * 0x100000 + uVar8 + ((param_2 ^ param_4) & 0x80000000),param_1,uVar4
                  );
    }
  }
  return;
}


/* ---- FUN_0001b5ac @ 0001b5ac ---- */

void FUN_0001b5ac(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 & 0xfffff | 0x100000;
  uVar2 = (param_2 << 1) >> 0x15;
  if ((int)uVar2 < DAT_0001b5e4) {
    return;
  }
  if ((int)uVar2 <= DAT_0001b5e4 + 0x34) {
    FUN_0001b266(param_1,uVar1,(DAT_0001b5e4 + 0x34) - uVar2);
    return;
  }
  FUN_0001b246(param_1,uVar1,uVar2 + DAT_0001b5e8);
  return;
}


/* ---- FUN_0001b5ec @ 0001b5ec ---- */

int FUN_0001b5ec(int param_1,int param_2)

{
  if (-1 < param_2) {
    param_1 = -param_1;
  }
  return param_1;
}


/* ---- FUN_0001b614 @ 0001b614 ---- */

undefined8 FUN_0001b614(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  for (puVar4 = &DAT_000233cc; puVar4 < &DAT_000233ec; puVar4 = puVar4 + 4) {
    (*(code *)puVar4[3])(*puVar4,puVar4[1],puVar4[2]);
  }
  uVar5 = thunk_FUN_0001fff8();
  uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
  uVar1 = (uint)uVar5;
  if ((int)uVar1 < 0x20) {
    iVar3 = (int)uVar2 >> (uVar1 & 0xff);
    uVar1 = uVar1 >> (uVar1 & 0xff) | uVar2 << (0x20 - uVar1 & 0xff);
  }
  else {
    uVar1 = (int)uVar2 >> (uVar1 - 0x20 & 0xff);
    iVar3 = (int)(uVar2 | uVar1) >> 0x1f;
  }
  return CONCAT44(iVar3,uVar1);
}


/* ---- FUN_0001b638 @ 0001b638 ---- */

undefined8 FUN_0001b638(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((int)param_3 < 0x20) {
    iVar2 = (int)param_2 >> (param_3 & 0xff);
    uVar1 = param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff);
  }
  else {
    uVar1 = (int)param_2 >> (param_3 - 0x20 & 0xff);
    iVar2 = (int)(param_2 | uVar1) >> 0x1f;
  }
  return CONCAT44(iVar2,uVar1);
}


/* ---- FUN_0001b65e @ 0001b65e ---- */

undefined8 FUN_0001b65e(uint param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  
  if (param_4 < 0) {
    bVar1 = 0xfffffffe < param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + (uint)bVar1;
    if ((param_3 * 2 | param_4 * 2 + (uint)CARRY4(param_3,param_3)) == 0) {
      param_1 = param_1 & 0xfffffffe;
    }
  }
  return CONCAT44(param_2,param_1);
}


/* ---- FUN_0001b678 @ 0001b678 ---- */

uint FUN_0001b678(undefined4 param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
                 int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    iVar1 = FUN_0001dd3c();
    iVar1 = iVar1 + 0x20;
  }
  else {
    iVar1 = FUN_0001dd3c(param_2);
  }
  uVar4 = FUN_0001b246(param_1,param_2,iVar1);
  uVar2 = (uint)(uVar4 >> 0x20);
  uVar3 = (uint)uVar4;
  if ((uVar3 | param_3 | uVar2 | param_4) != 0) {
    if ((param_3 | param_4) != 0) {
      uVar5 = FUN_0001b266(param_3,param_4,0x40 - iVar1);
      lVar6 = FUN_0001b246(param_3,param_4,iVar1);
      uVar4 = CONCAT44(uVar2 | (uint)((ulonglong)uVar5 >> 0x20),
                       uVar3 | (uint)uVar5 | (uint)(lVar6 != 0));
    }
    uVar3 = (uint)(uVar4 >> 0xb);
    iVar1 = (param_7 - iVar1) + 10;
    if (iVar1 < 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0001b65e(uVar3 + param_5,
                           iVar1 * 0x100000 + (int)((uVar4 >> 0xb) >> 0x20) + param_6 +
                           (uint)CARRY4(uVar3,param_5),0,(int)uVar4 << 0x15);
    }
  }
  return uVar3;
}


/* ---- FUN_0001b71c @ 0001b71c ---- */

undefined4 FUN_0001b71c(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  
  pbVar6 = param_2 + param_3;
  do {
    uVar7 = (uint)*param_1;
    uVar4 = uVar7 & 7;
    pbVar5 = param_1 + 1;
    if ((*param_1 & 7) == 0) {
      uVar4 = (uint)param_1[1];
      pbVar5 = param_1 + 2;
    }
    param_1 = pbVar5;
    uVar2 = (int)uVar7 >> 4;
    if (uVar2 == 0) {
      uVar2 = (uint)*param_1;
      param_1 = param_1 + 1;
    }
    while (uVar4 = uVar4 - 1, uVar4 != 0) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    if ((int)(uVar7 << 0x1c) < 0) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      pbVar5 = param_2 + -(uint)bVar1;
      iVar3 = uVar2 + 2;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        *param_2 = *pbVar5;
        param_2 = param_2 + 1;
        pbVar5 = pbVar5 + 1;
      }
    }
    else {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        *param_2 = 0;
        param_2 = param_2 + 1;
      }
    }
  } while (param_2 < pbVar6);
  return 0;
}


/* ---- v1_cmd_dispatch @ 0001b774 ---- */
/* opcode u16 - 0x21, Keil switch8 (count 0x11, target = 0x1b78e + 2*b) */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0001b78a) */
/* WARNING: Removing unreachable block (ram,0x0001b78a) */
/* opcode u16 - 0x21, Keil switch8 (count 0x11, target = 0x1b78e + 2*b) */

void v1_cmd_dispatch(uint param_1,uint param_2)

{
  byte *pbVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001b78a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((param_1 & 0xffff) - 0x21 < (uint)DAT_0001b78e) {
    pbVar1 = (byte *)((param_1 & 0xffff) + 0x1b76e);
  }
  else {
    pbVar1 = (byte *)(DAT_0001b78e + 0x1b78f);
  }
  (*(code *)((uint)*pbVar1 * 2 + 0x1b78f))(param_2 >> 0x10);
  return;
}


/* ---- FUN_0001b990 @ 0001b990 ---- */

void FUN_0001b990(uint param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  uint local_18;
  undefined4 local_14;
  
  uVar1 = *(ushort *)(DAT_0001b9b4 + 2);
  *(ushort *)(DAT_0001b9b4 + 2) = uVar1 + 1;
  local_18 = param_1 | (uint)uVar1 << 8 | param_2 << 0x10;
  local_14 = param_3;
  FUN_0001ea9c(&local_18,8,DAT_0001b9b8);
  return;
}


/* ---- FUN_0001b9bc @ 0001b9bc ---- */

void FUN_0001b9bc(undefined4 param_1)

{
  FUN_0001da40(DAT_0001b9d0,DAT_0001b9cc,param_1,0);
  return;
}


/* ---- FUN_0001b9d4 @ 0001b9d4 ---- */

void FUN_0001b9d4(void)

{
  FUN_0001ea9c(0,0,DAT_0001b9e4);
  return;
}


/* ---- FUN_0001ba04 @ 0001ba04 ---- */

void FUN_0001ba04(void)

{
  *(undefined4 *)(DAT_0001ba1c + 0x3c) = 1;
  *(undefined4 *)(DAT_0001ba24 + 4) = DAT_0001ba20;
  *(undefined4 *)(DAT_0001ba28 + 4) = 1;
  *DAT_0001ba2c = 0;
  return;
}


/* ---- FUN_0001ba30 @ 0001ba30 ---- */

uint FUN_0001ba30(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = *DAT_0001ba6c;
  if (uVar4 == 0xffffffff) {
    FUN_0001ba04();
    puVar1 = DAT_0001ba70;
    *DAT_0001ba70 = 1;
    puVar3 = DAT_0001ba78;
    puVar2 = DAT_0001ba74;
    do {
    } while ((*DAT_0001ba74 & 1) != 0);
    *DAT_0001ba78 = 1;
    do {
    } while ((*puVar2 & 1) != 0);
    uVar4 = (uint)(puVar1[2] * 0x12c0) >> 10;
    puVar3[1] = 1;
    *(undefined4 *)(DAT_0001ba7c + 0x3c) = 0;
  }
  return uVar4;
}


/* ---- FUN_0001ba80 @ 0001ba80 ---- */

void FUN_0001ba80(void)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *DAT_0001bab0;
  cVar2 = DAT_0001bab0[1];
  if ((cVar1 == -0x7f) || (cVar1 == -0x7e)) {
    if (cVar2 != -0xf) {
      return;
    }
  }
  else {
    if (cVar1 != -0x7d) {
      return;
    }
    if ((cVar2 != -0xb) && (cVar2 != -10)) {
      return;
    }
  }
  FUN_0001d460(500,0);
  return;
}


/* ---- FUN_0001bab4 @ 0001bab4 ---- */

undefined4 FUN_0001bab4(void)

{
  return *(undefined4 *)(DAT_0001babc + 4);
}


/* ---- FUN_0001bac0 @ 0001bac0 ---- */

void FUN_0001bac0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
  }
  return;
}


/* ---- FUN_0001bacc @ 0001bacc ---- */

void FUN_0001bacc(void)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar1 = *DAT_0001bb20;
  cVar2 = DAT_0001bb20[1];
  if (cVar1 == -0x7f) {
    if (cVar2 != -0xf) {
      return;
    }
    uVar4 = 0;
  }
  else {
    if (cVar1 != -0x7e) {
      if (cVar1 == -0x7d) {
        if (cVar2 == -0xb) {
          uVar4 = 0;
          uVar3 = 0xeb;
        }
        else {
          if (cVar2 != -10) {
            return;
          }
          uVar4 = 0;
          uVar3 = 0xee;
        }
      }
      else {
        if (cVar1 != -0x7b) {
          return;
        }
        if (-1 < (int)((*(uint *)(DAT_0001bb24 + 0x10) >> 0x1d) << 0x1f)) {
          return;
        }
        uVar4 = 0;
        uVar3 = 0xf8;
      }
      goto LAB_0001bb06;
    }
    if (cVar2 != -0xf) {
      return;
    }
    uVar4 = 1;
  }
  uVar3 = 0xe1;
LAB_0001bb06:
  FUN_0001cf3c(uVar3,uVar4);
  return;
}


/* ---- FUN_0001bb28 @ 0001bb28 ---- */

void FUN_0001bb28(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*(int *)(DAT_0001bbf0 + 0x3c) == 1) {
    *(undefined4 *)(DAT_0001bbf0 + 0x3c) = 0;
    iVar3 = FUN_00020300(0x1e);
    if (iVar3 == 1) {
      FUN_0001fb9e();
    }
    iVar3 = FUN_00020300(0);
    if (iVar3 == 1) {
      FUN_0001fbbe();
    }
    uVar4 = FUN_00020300(5);
    pbVar1 = DAT_0001bbf4;
    if (uVar4 != DAT_0001bbf4[1]) {
      bVar2 = FUN_00020300(5);
      pbVar1[1] = bVar2;
      iVar3 = FUN_00020300(5);
      if (iVar3 == 0) {
        FUN_000202ea(5,0,2);
        uVar5 = 0xf5;
      }
      else {
        FUN_000202ea(5,0,3);
        uVar5 = 0xf6;
      }
      FUN_0001cf3c(uVar5,0);
    }
    uVar4 = FUN_00020300(0x1d);
    if (uVar4 != *pbVar1) {
      bVar2 = FUN_00020300(0x1d);
      *pbVar1 = bVar2;
      iVar6 = FUN_00020300(0x1d);
      iVar3 = DAT_0001bbf8;
      if (iVar6 == 1) {
        FUN_000202ea(0x1d,1,3);
        FUN_0001d3bc();
        FUN_0001d2b8(0xffffffff);
        *(undefined4 *)(pbVar1 + 4) = *(undefined4 *)(iVar3 + 4);
        return;
      }
      FUN_000202ea(0x1d,1,2);
      *(int *)(pbVar1 + 4) = *(int *)(iVar3 + 4) - *(int *)(pbVar1 + 4);
      FUN_0001d3d4();
      FUN_0001d2b8(*(uint *)(pbVar1 + 4) >> 5);
    }
  }
  return;
}


/* ---- FUN_0001bc14 @ 0001bc14 ---- */

undefined FUN_0001bc14(void)

{
  return *DAT_0001bc1c;
}


/* ---- FUN_0001bc2c @ 0001bc2c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001bc2c(void)

{
  undefined4 in_r3;
  
  software_interrupt(0x46);
  *_DAT_0001bc5c = DAT_0001bc58;
  software_interrupt(0x41);
  software_interrupt(0x3c);
  FUN_0001e9a8(0x30000,0x25,s_P___src_Drivers_BoardFunc_c_0001bc5f + 1,in_r3,1);
  return;
}


/* ---- FUN_0001bc7c @ 0001bc7c ---- */

void FUN_0001bc7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00020310(0,0x13,2,0,param_3,param_4);
  FUN_00020310(1,0x12,2,0);
  FUN_00020310(2,0x11,2,0);
  FUN_00020340(0);
  FUN_00020340(1);
  FUN_00020340(2);
  FUN_000202ea(0x1d,1,2);
  FUN_000202ea(0x1e,0,2);
  FUN_000202ea(0,0,2);
  FUN_000202ea(5,0,3);
  FUN_000202c4(7,0);
  FUN_000202c4(0x14,0);
  *DAT_0001bd24 = *DAT_0001bd24 & 0xff00ffff | 0x400000;
  *DAT_0001bd28 = 0x40;
  *DAT_0001bd2c = 0x40;
  FUN_00020290(10,1,1,0,0,0);
  *(undefined4 *)(DAT_0001bd30 + 0xc) = 0x400;
  return;
}


/* ---- FUN_0001bd34 @ 0001bd34 ---- */

undefined4 FUN_0001bd34(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  undefined4 local_10;
  
  local_10 = param_4;
  if (param_1 == 4) {
    iVar3 = FUN_0001c184(0x2e,&local_10);
    if (iVar3 == 0) {
      return 0;
    }
    local_10._0_1_ = (byte)local_10 & 0x1f;
    iVar3 = FUN_0001c518(0x2e);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_0001c184(0x24,&local_10);
    if (iVar3 == 0) {
      return 0;
    }
    local_10 = CONCAT31(local_10._1_3_,(byte)local_10) & 0xffffffbf;
    uVar2 = 0x24;
  }
  else {
    if (param_1 == 0) {
      iVar3 = FUN_0001c184(0x24,&local_10);
      if (iVar3 == 0) {
        return 0;
      }
      local_10 = local_10 & 0xffffffbf | 0x40;
      iVar3 = FUN_0001c518(0x24);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_0001c184(0x2e,&local_10);
      if (iVar3 == 0) {
        return 0;
      }
      bVar4 = (byte)local_10 & 0x1f;
    }
    else {
      if (param_1 == 1) {
        iVar3 = FUN_0001c184(0x24,&local_10);
        if (iVar3 == 0) {
          return 0;
        }
        local_10 = local_10 & 0xffffffbf | 0x40;
        iVar3 = FUN_0001c518(0x24);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_0001c184(0x2e,&local_10);
        if (iVar3 == 0) {
          return 0;
        }
        bVar4 = 0x40;
        bVar1 = (byte)local_10 & 0x1f;
      }
      else if (param_1 == 2) {
        iVar3 = FUN_0001c184(0x24,&local_10);
        if (iVar3 == 0) {
          return 0;
        }
        local_10 = local_10 & 0xffffffbf | 0x40;
        iVar3 = FUN_0001c518(0x24);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_0001c184(0x2e,&local_10);
        if (iVar3 == 0) {
          return 0;
        }
        bVar1 = (byte)local_10 & 0x1f;
        bVar4 = 0x80;
      }
      else {
        if (param_1 != 3) {
          return 1;
        }
        iVar3 = FUN_0001c184(0x24,&local_10);
        if (iVar3 == 0) {
          return 0;
        }
        local_10 = local_10 & 0xffffffbf | 0x40;
        iVar3 = FUN_0001c518(0x24);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_0001c184(0x2e,&local_10);
        if (iVar3 == 0) {
          return 0;
        }
        bVar1 = (byte)local_10 & 0x1f;
        bVar4 = 0xc0;
      }
      bVar4 = bVar4 | bVar1;
    }
    local_10 = CONCAT31(local_10._1_3_,bVar4);
    uVar2 = 0x2e;
  }
  iVar3 = FUN_0001c518(uVar2);
  if (iVar3 != 0) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0001be7e @ 0001be7e ---- */

int FUN_0001be7e(undefined *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  local_10 = param_4;
  iVar2 = FUN_0001c184(0x39,&local_10);
  if (iVar2 != 0) {
    uVar3 = local_10 & 0x7f;
    if ((int)(uVar3 << 0x19) < 0) {
      if ((int)(uVar3 << 0x1a) < 0) {
        if ((int)(uVar3 << 0x1c) < 0) {
          if ((int)(uVar3 << 0x1d) < 0) {
            uVar1 = 0x2c;
          }
          else if ((int)(uVar3 << 0x1e) < 0) {
            uVar1 = 0x2a;
          }
          else {
            if ((local_10 & 1) == 0) {
              return 0;
            }
            uVar1 = 0x29;
          }
        }
        else if ((int)(uVar3 << 0x1d) < 0) {
          uVar1 = 0x24;
        }
        else if ((int)(uVar3 << 0x1e) < 0) {
          uVar1 = 0x22;
        }
        else {
          if ((local_10 & 1) == 0) {
            return 0;
          }
          uVar1 = 0x21;
        }
      }
      else if ((int)(uVar3 << 0x1c) < 0) {
        if ((int)(uVar3 << 0x1d) < 0) {
          uVar1 = 0x1c;
        }
        else if ((int)(uVar3 << 0x1e) < 0) {
          uVar1 = 0x1a;
        }
        else {
          if ((local_10 & 1) == 0) {
            return 0;
          }
          uVar1 = 0x19;
        }
      }
      else if ((int)(uVar3 << 0x1d) < 0) {
        uVar1 = 0x14;
      }
      else if ((int)(uVar3 << 0x1e) < 0) {
        uVar1 = 0x12;
      }
      else {
        if ((local_10 & 1) == 0) {
          return 0;
        }
        uVar1 = 0x11;
      }
    }
    else {
      uVar1 = 0;
    }
    *param_1 = uVar1;
    iVar2 = 1;
  }
  return iVar2;
}


/* ---- FUN_0001bf18 @ 0001bf18 ---- */

uint FUN_0001bf18(void)

{
  int iVar1;
  uint in_r3;
  uint local_8 [2];
  
  local_8[0] = in_r3;
  FUN_00020b48(0);
  iVar1 = FUN_0001c184(0xf,local_8);
  if (iVar1 == 0) {
    FUN_0001eda0(0xad,s____src_Drivers_bd_hal_acc_c_0001bf40);
  }
  FUN_00020b18(0);
  return local_8[0] & 0xff;
}


/* ---- FUN_0001bf5c @ 0001bf5c ---- */

int FUN_0001bf5c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0001c184(0x31,param_1);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_0001bf6e @ 0001bf6e ---- */

int FUN_0001bf6e(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_0001c184(0x21,&local_10);
  if (iVar1 != 0) {
    local_10 = CONCAT31(local_10._1_3_,(byte)((param_1 & 0x3f) << 2) | (byte)local_10 & 0xfb);
    iVar1 = FUN_0001c518(0x21);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001bfa0 @ 0001bfa0 ---- */

undefined4 FUN_0001bfa0(void)

{
  int iVar1;
  uint in_r3;
  uint local_8 [2];
  
  local_8[0] = in_r3;
  iVar1 = FUN_00020b8c(0,0);
  if (iVar1 != 0) {
    FUN_00020b48(0);
    iVar1 = FUN_0001c184(0xf,local_8);
    if (iVar1 == 0) {
      FUN_0001eda0(0xc3,s____src_Drivers_bd_hal_acc_c_0001c0f8);
    }
    if ((char)local_8[0] != '3') {
      FUN_0001eda0(0xc4,s____src_Drivers_bd_hal_acc_c_0001c0f8);
    }
    FUN_0001dcf4(s_LIS3DH_ID_0x_x_0001c114,local_8[0] & 0xff);
    iVar1 = FUN_0001c518(0x20,0);
    if (iVar1 == 0) {
      FUN_0001eda0(199,s____src_Drivers_bd_hal_acc_c_0001c0f8);
    }
    iVar1 = FUN_0001c518(0x21,0);
    if (iVar1 == 0) {
      FUN_0001eda0(200,s____src_Drivers_bd_hal_acc_c_0001c0f8);
    }
    iVar1 = FUN_0001c518(0x22,0);
    if (iVar1 == 0) {
      FUN_0001eda0(0xc9,s____src_Drivers_bd_hal_acc_c_0001c0f8);
    }
    iVar1 = FUN_0001c518(0x23,0);
    if (iVar1 == 0) {
      FUN_0001eda0(0xca,s____src_Drivers_bd_hal_acc_c_0001c0f8);
    }
    iVar1 = FUN_0001c518(0x24,0);
    if (iVar1 == 0) {
      FUN_0001eda0(0xcb,s____src_Drivers_bd_hal_acc_c_0001c0f8);
    }
    iVar1 = FUN_0001c518(0x25,0);
    if (iVar1 == 0) {
      FUN_0001eda0(0xcc,s____src_Drivers_bd_hal_acc_c_0001c0f8);
    }
    iVar1 = FUN_0001bd34(4);
    if (iVar1 == 0) {
      FUN_0001eda0(0xcd,s____src_Drivers_bd_hal_acc_c_0001c0f8);
    }
    iVar1 = FUN_0001c1e0(7);
    if (iVar1 == 0) {
      FUN_0001eda0(0xd0,s____src_Drivers_bd_hal_acc_c_0001c0f8);
    }
    iVar1 = FUN_0001c44c(2);
    if (iVar1 == 0) {
      FUN_0001eda0(0xd1,s____src_Drivers_bd_hal_acc_c_0001c0f8);
    }
    iVar1 = FUN_0001c4e8(5);
    if (iVar1 == 0) {
      FUN_0001eda0(0xd3,s____src_Drivers_bd_hal_acc_c_0001c0f8);
    }
    FUN_0001c2c4(1);
    iVar1 = FUN_0001c210(1);
    if (iVar1 == 0) {
      FUN_0001eda0(0xd5,s____src_Drivers_bd_hal_acc_c_0001c0f8);
    }
    FUN_0001bd34(2);
    FUN_0001c240(0);
    FUN_0001c3ee(0);
    FUN_00020b18(0);
    return 1;
  }
  FUN_0001dcf4(s_spi_init_error_0001c0e4);
  return 0;
}


/* ---- FUN_0001c128 @ 0001c128 ---- */

int FUN_0001c128(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_0001c184(0x24,&local_10);
  if (iVar1 != 0) {
    local_10 = CONCAT31(local_10._1_3_,(byte)((param_1 & 0x1f) << 3) | (byte)local_10 & 0xf7);
    iVar1 = FUN_0001c518(0x24);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001c158 @ 0001c158 ---- */

int FUN_0001c158(void)

{
  int iVar1;
  uint in_r3;
  uint local_8 [2];
  
  local_8[0] = in_r3;
  iVar1 = FUN_0001c184(0x24,local_8);
  if (iVar1 != 0) {
    local_8[0] = local_8[0] & 0xffffff7f | 0x80;
    iVar1 = FUN_0001c518(0x24);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001c184 @ 0001c184 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001c184(byte param_1,undefined *param_2)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = DAT_0001c1b0;
  *DAT_0001c1b0 = param_1 | 0x80;
  iVar2 = FUN_00020c00(_DAT_0001c1b8,2,pbVar1,DAT_0001c1b4);
  if (iVar2 == 0) {
    FUN_0001eda0(0x38,s_____src_Drivers_bd_lis3dh_driver_0001c1bb + 1);
  }
  *param_2 = *(undefined *)(DAT_0001c1b4 + 1);
  return 1;
}


/* ---- FUN_0001c1e0 @ 0001c1e0 ---- */

int FUN_0001c1e0(byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_0001c184(0x20,&local_10);
  if (iVar1 != 0) {
    local_10 = CONCAT31(local_10._1_3_,param_1 & 7 | (byte)local_10 & 0xf8);
    iVar1 = FUN_0001c518(0x20);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001c210 @ 0001c210 ---- */

int FUN_0001c210(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_0001c184(0x23,&local_10);
  if (iVar1 != 0) {
    local_10 = CONCAT31(local_10._1_3_,(byte)((param_1 & 1) << 7) | (byte)local_10 & 0x7f);
    iVar1 = FUN_0001c518(0x23);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001c240 @ 0001c240 ---- */

int FUN_0001c240(byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_0001c184(0x38,&local_10);
  if (iVar1 != 0) {
    local_10 = CONCAT31(local_10._1_3_,(byte)local_10 & 0xc0 | param_1);
    iVar1 = FUN_0001c518(0x38);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001c26c @ 0001c26c ---- */

int FUN_0001c26c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0001c518(0x3c,param_1);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_0001c27e @ 0001c27e ---- */

int FUN_0001c27e(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x80) {
    iVar1 = FUN_0001c518(0x3b,param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


/* ---- FUN_0001c298 @ 0001c298 ---- */

int FUN_0001c298(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x80) {
    iVar1 = FUN_0001c518(0x3a,param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


/* ---- FUN_0001c2b2 @ 0001c2b2 ---- */

int FUN_0001c2b2(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0001c518(0x3d,param_1);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_0001c2c4 @ 0001c2c4 ---- */

int FUN_0001c2c4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_0001c184(0x23,&local_10);
  if (iVar1 != 0) {
    local_10 = CONCAT31(local_10._1_3_,(byte)((param_1 & 0xf) << 4) | (byte)local_10 & 0xcf);
    iVar1 = FUN_0001c518(0x23);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001c2f4 @ 0001c2f4 ---- */

int FUN_0001c2f4(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x80) {
    iVar1 = FUN_0001c518(0x33,param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


/* ---- FUN_0001c30e @ 0001c30e ---- */

int FUN_0001c30e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_0001c184(0x22,&local_10);
  if (iVar1 != 0) {
    local_10 = CONCAT31(local_10._1_3_,(char)param_1);
    iVar1 = FUN_0001c518(0x22,param_1);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001c332 @ 0001c332 ---- */

int FUN_0001c332(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x80) {
    iVar1 = FUN_0001c518(0x32,param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


/* ---- FUN_0001c34c @ 0001c34c ---- */

int FUN_0001c34c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_0001c184(0x25,&local_10);
  if (iVar1 != 0) {
    local_10 = CONCAT31(local_10._1_3_,(char)param_1);
    iVar1 = FUN_0001c518(0x25,param_1);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001c370 @ 0001c370 ---- */

int FUN_0001c370(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 local_18;
  uint local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  iVar1 = FUN_0001c184(0x30,&local_18);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_0001c184(0x24,&local_14);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 1) {
    local_18._0_1_ = (byte)local_18 & 0xbf | 0x40;
  }
  else {
    if (param_1 == 2) {
      local_18 = local_18 & 0xffffffbf | 0x40;
      local_14 = local_14 & 0xfffffffb | 4;
      goto LAB_0001c3ce;
    }
    if (param_1 != 0) goto LAB_0001c3ce;
    local_18._0_1_ = (byte)local_18 & 0xbf;
  }
  local_14 = local_14 & 0xfffffffb;
LAB_0001c3ce:
  iVar1 = FUN_0001c518(0x30,local_18 & 0xff);
  if ((iVar1 != 0) && (iVar1 = FUN_0001c518(0x24,local_14 & 0xff), iVar1 != 0)) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_0001c3ee @ 0001c3ee ---- */

int FUN_0001c3ee(byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_0001c184(0x30,&local_10);
  if (iVar1 != 0) {
    local_10 = CONCAT31(local_10._1_3_,(byte)local_10 & 0x40 | param_1);
    iVar1 = FUN_0001c518(0x30);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001c41a @ 0001c41a ---- */

int FUN_0001c41a(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_0001c184(0x30,&local_10);
  if (iVar1 != 0) {
    local_10 = CONCAT31(local_10._1_3_,(byte)((param_1 & 3) << 6) | (byte)local_10 & 0x3f);
    iVar1 = FUN_0001c518(0x30);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001c44c @ 0001c44c ---- */

int FUN_0001c44c(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 local_10;
  uint local_c;
  
  local_10 = param_3;
  local_c = param_4;
  iVar1 = FUN_0001c184(0x20,&local_10);
  if ((iVar1 != 0) && (iVar1 = FUN_0001c184(0x23,&local_c), iVar1 != 0)) {
    if ((byte)local_10 >> 4 == 0) {
      local_10 = CONCAT31(local_10._1_3_,*DAT_0001c4e4 & 0xf0 | (byte)local_10);
    }
    if (param_1 == 0) {
      *DAT_0001c4e4 = (byte)local_10;
      local_10 = local_10 & 0xffffff0f;
    }
    else if (param_1 == 1) {
      local_10 = local_10 & 0xfffffff7 | 8;
      local_c = local_c & 0xfffffff7;
    }
    else {
      if (param_1 != 2) {
        return 0;
      }
      local_10 = local_10 & 0xfffffff7;
      local_c = local_c & 0xfffffff7 | 8;
    }
    iVar1 = FUN_0001c518(0x20,local_10 & 0xff);
    if ((iVar1 != 0) && (iVar1 = FUN_0001c518(0x23,local_c & 0xff), iVar1 != 0)) {
      return 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001c4e8 @ 0001c4e8 ---- */

int FUN_0001c4e8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_0001c184(0x20,&local_10);
  if (iVar1 != 0) {
    local_10 = CONCAT31(local_10._1_3_,(byte)((param_1 & 0xf) << 4) | (byte)local_10 & 0xf);
    iVar1 = FUN_0001c518(0x20);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001c518 @ 0001c518 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001c518(undefined param_1,undefined param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = DAT_0001c548;
  *DAT_0001c548 = 2;
  *DAT_0001c54c = 0;
  uVar3 = DAT_0001c554;
  puVar2 = DAT_0001c550;
  *DAT_0001c550 = param_1;
  puVar2[1] = param_2;
  iVar4 = FUN_00020c00(_DAT_0001c558,*puVar1,puVar2,uVar3);
  if (iVar4 == 0) {
    FUN_0001eda0(0x51,s_____src_Drivers_bd_lis3dh_driver_0001c55b + 1);
  }
  return 1;
}


/* ---- FUN_0001c580 @ 0001c580 ---- */

void FUN_0001c580(void)

{
  undefined2 uVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  
  pbVar2 = DAT_0001c628;
  if ((*DAT_0001c628 & 0xf) != 0) {
    FUN_0001c900(DAT_0001c630,DAT_0001c628,6);
    uVar6 = 0;
    do {
      pbVar4 = pbVar2 + uVar6 * 6;
      FUN_0001c900(pbVar4,pbVar4 + 6,6);
      uVar6 = uVar6 + 1 & 0xffff;
    } while (uVar6 < 0x13);
    FUN_0001c924(pbVar2 + uVar6 * 6,0,6);
    lis3dh_config(0);
    pbVar2 = DAT_0001c630;
    bVar3 = *DAT_0001c630 & 0xf;
    if (bVar3 == 1) {
      *(undefined2 *)(DAT_0001c630 + -6) = 1;
      v1_led_set_color(0);
      uVar1 = *(undefined2 *)(pbVar2 + 2);
      bVar7 = false;
    }
    else {
      if ((bVar3 == 2) || (bVar3 == 4)) {
        *(undefined2 *)(DAT_0001c630 + -6) = 1;
        uVar5 = **(undefined4 **)(pbVar2 + (uint)pbVar2[1] * 4 + 8);
      }
      else {
        if (bVar3 != 3) {
          return;
        }
        *(undefined2 *)(DAT_0001c630 + -6) = 1;
        uVar5 = *(undefined4 *)
                 (*(int *)(pbVar2 + (uint)pbVar2[1] * 4 + 8) +
                 (uint)*(ushort *)(pbVar2 + 4) * 4 + -4);
      }
      v1_led_set_color(uVar5);
      bVar7 = *pbVar2 >> 4 != 0;
      uVar1 = *(undefined2 *)(pbVar2 + 2);
    }
    FUN_0001d074(uVar1,bVar7);
  }
  return;
}


/* ---- FUN_0001c650 @ 0001c650 ---- */

void FUN_0001c650(void)

{
  *(undefined2 *)(DAT_0001c670 + 2) = 0;
  FUN_0001c924(DAT_0001c674,0,0x78);
  FUN_0001c924(DAT_0001c670 + 8,0,6);
  return;
}


/* ---- FUN_0001c678 @ 0001c678 ---- */

void FUN_0001c678(void)

{
  if (*DAT_0001c694 != '\0') {
    *DAT_0001c694 = '\0';
    FUN_0001c69c(1,0,DAT_0001c698,1,1);
  }
  return;
}


/* ---- FUN_0001c69c @ 0001c69c ---- */

void FUN_0001c69c(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0001c6b4(param_1,param_2,param_3 * 10,param_4,1,param_5);
  return;
}


/* ---- FUN_0001c6b4 @ 0001c6b4 ---- */

undefined4
FUN_0001c6b4(uint param_1,uint param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  pbVar2 = DAT_0001c7b0;
  if (((param_1 == 0) || (4 < param_1)) || (0x12 < param_2)) {
    return 0;
  }
  bVar1 = (byte)(param_5 << 4);
  if (param_6 == 0) {
    FUN_0001ed7c();
    iVar5 = DAT_0001c7b4;
    uVar3 = 0;
    do {
      if ((*(byte *)(DAT_0001c7b4 + uVar3 * 6) & 0xf) == 0) {
        *(byte *)(DAT_0001c7b4 + uVar3 * 6) = (byte)param_1 & 0xf | bVar1;
        iVar5 = uVar3 * 6 + iVar5;
        *(byte *)(iVar5 + 1) = (byte)param_2;
        *(short *)(iVar5 + 2) = (short)param_3;
        *(short *)(iVar5 + 4) = (short)param_4;
        FUN_0001ed8c();
        return 1;
      }
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar3 < 0x14);
    FUN_0001ed8c();
    return 0;
  }
  *DAT_0001c7b0 = (byte)param_1 & 0xf | bVar1;
  pbVar2[1] = (byte)param_2;
  *(short *)(pbVar2 + 2) = (short)param_3;
  *(short *)(pbVar2 + 4) = (short)param_4;
  lis3dh_config(0);
  pbVar2 = DAT_0001c7b0;
  if (param_1 == 1) {
    *(undefined2 *)(DAT_0001c7b0 + -6) = 1;
    v1_led_set_color(0);
LAB_0001c73e:
    uVar3 = 0;
  }
  else {
    iVar5 = param_2 * 4;
    if ((param_1 == 2) || (param_1 == 4)) {
      *(undefined2 *)(DAT_0001c7b0 + -6) = 1;
      v1_led_set_color(**(uint **)(pbVar2 + iVar5 + 8) & 0xffffff);
      if (*DAT_0001c7b0 >> 4 == 0) goto LAB_0001c73e;
      uVar3 = **(uint **)(pbVar2 + iVar5 + 8);
    }
    else {
      if (param_1 != 3) {
        return 1;
      }
      *(undefined2 *)(DAT_0001c7b0 + -6) = 1;
      iVar4 = param_4 * 4 + -4;
      v1_led_set_color(*(uint *)(*(int *)(pbVar2 + iVar5 + 8) + iVar4) & 0xffffff);
      if (*DAT_0001c7b0 >> 4 == 0) goto LAB_0001c73e;
      uVar3 = *(uint *)(*(int *)(pbVar2 + iVar5 + 8) + iVar4);
    }
    uVar3 = uVar3 >> 0x18;
  }
  FUN_0001d074(param_3,uVar3);
  return 1;
}


/* ---- FUN_0001c7b8 @ 0001c7b8 ---- */

void FUN_0001c7b8(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0001c6b4(param_1,param_2,param_3 * 10,param_4,0,param_5);
  return;
}


/* ---- FUN_0001c7d0 @ 0001c7d0 ---- */

void FUN_0001c7d0(void)

{
  FUN_0001d074(0);
  v1_led_set_color(0);
  *(undefined2 *)(DAT_0001c80c + 2) = 0;
  FUN_0001c924(DAT_0001c810,0,0x78);
  FUN_0001c924(DAT_0001c80c + 8,0,6);
  FUN_0001ba80();
  return;
}


/* ---- FUN_0001c814 @ 0001c814 ---- */

void FUN_0001c814(void)

{
  undefined2 uVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  pbVar2 = DAT_0001c8ec;
  uVar3 = (uint)*(ushort *)(DAT_0001c8ec + -6);
  bVar4 = *DAT_0001c8ec & 0xf;
  iVar8 = (uint)DAT_0001c8ec[1] * 4;
  uVar7 = (uint)*(ushort *)(DAT_0001c8ec + 4);
  uVar6 = uVar3 + 1 & 0xffff;
  uVar1 = (undefined2)(uVar3 + 1);
  if (((bVar4 == 1) || (bVar4 == 2)) || (bVar4 == 3)) {
    if (uVar7 != uVar3) {
      if (bVar4 == 1) {
        v1_led_set_color(0);
        FUN_0001d074(*(undefined2 *)(pbVar2 + 2),0);
        *(short *)(DAT_0001c8ec + -6) = *(short *)(DAT_0001c8ec + -6) + 1;
        return;
      }
      if (bVar4 != 2) {
        if (bVar4 != 3) {
          return;
        }
        *(undefined2 *)(DAT_0001c8ec + -6) = uVar1;
        iVar8 = *(int *)(pbVar2 + iVar8 + 8);
        iVar5 = uVar7 - uVar6;
        goto LAB_0001c8d2;
      }
      goto LAB_0001c892;
    }
  }
  else {
    if (bVar4 != 4) {
      return;
    }
    if (uVar7 * 2 - uVar3 != 0) {
      if (uVar7 <= uVar3) {
        *(undefined2 *)(DAT_0001c8ec + -6) = uVar1;
        iVar8 = *(int *)(pbVar2 + iVar8 + 8);
        iVar5 = uVar7 * 2 - uVar6;
LAB_0001c8d2:
        v1_led_set_color(*(undefined4 *)(iVar8 + iVar5 * 4));
        FUN_0001d074(*(undefined2 *)(pbVar2 + 2),*pbVar2 >> 4 != 0);
        return;
      }
LAB_0001c892:
      v1_led_set_color(*(undefined4 *)(*(int *)(DAT_0001c8ec + iVar8 + 8) + uVar3 * 4));
      FUN_0001d074(*(undefined2 *)(pbVar2 + 2),*pbVar2 >> 4 != 0);
      *(short *)(pbVar2 + -6) = *(short *)(pbVar2 + -6) + 1;
      return;
    }
  }
  if ((*DAT_0001c8f0 & 0xf) != 0) {
    FUN_0001c580();
    return;
  }
  FUN_0001c7d0();
  return;
}


/* ---- FUN_0001c900 @ 0001c900 ---- */

void FUN_0001c900(undefined *param_1,undefined *param_2,uint param_3)

{
  if ((((param_1 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) && (param_1 != param_2)) &&
     (param_3 != 0)) {
    while (param_3 = param_3 - 1 & 0xffff, param_3 != 0) {
      param_1[param_3] = param_2[param_3];
    }
    *param_1 = *param_2;
  }
  return;
}


/* ---- FUN_0001c924 @ 0001c924 ---- */

void FUN_0001c924(undefined *param_1,undefined param_2,uint param_3)

{
  if ((param_1 != (undefined *)0x0) && (param_3 != 0)) {
    while (param_3 = param_3 - 1 & 0xffff, param_3 != 0) {
      param_1[param_3] = param_2;
    }
    *param_1 = param_2;
  }
  return;
}


/* ---- FUN_0001c93c @ 0001c93c ---- */

void FUN_0001c93c(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = (param_1 << 0x1e) >> 0x1b;
  uVar2 = 0xff << uVar3;
  uVar3 = ((uint)(param_2 << 0x1e) >> 0x18) << uVar3;
  if ((int)param_1 < 0) {
    iVar1 = ((param_1 & 0xf) - 8 & 0xfffffffc) + DAT_0001c978;
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & ~uVar2 | uVar3;
    return;
  }
  puVar4 = (uint *)((param_1 & 0xfffffffc) + DAT_0001c97c);
  *puVar4 = *puVar4 & ~uVar2 | uVar3;
  return;
}


/* ---- FUN_0001c9b8 @ 0001c9b8 ---- */

void FUN_0001c9b8(void)

{
  DataSynchronizationBarrier(0xf);
  *(undefined4 *)(DAT_0001c9d0 + 0xc) = DAT_0001c9cc;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001c9d4 @ 0001c9d4 ---- */

int FUN_0001c9d4(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0001c9e0 + 4);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_0001c9e4 @ 0001c9e4 ---- */

undefined4 FUN_0001c9e4(void)

{
  if ((int)((*(uint *)(DAT_0001c9f8 + 0x10) >> 5) << 0x1f) < 0) {
    return 0;
  }
  return 1;
}


/* ---- FUN_0001c9fc @ 0001c9fc ---- */

void FUN_0001c9fc(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0001ca18;
  *DAT_0001ca18 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1 = DAT_0001ca18;
  DAT_0001ca18[-0x10] = 0;
  puVar1[-0xf] = 0;
  FUN_00020f14();
  return;
}


/* ---- FUN_0001cf3c @ 0001cf3c ---- */

void FUN_0001cf3c(int param_1,uint param_2)

{
  uint local_8 [2];
  
  local_8[0] = param_1 << 0x18 | param_2 & 0xffffff;
  FUN_0001ea9c(local_8,4,DAT_0001cf54);
  return;
}


/* ---- FUN_0001cf58 @ 0001cf58 ---- */

void FUN_0001cf58(void)

{
  FUN_00020e40();
  return;
}


/* ---- FUN_0001cf60 @ 0001cf60 ---- */

void FUN_0001cf60(void)

{
  byte *pbVar1;
  
  pbVar1 = DAT_0001cf74;
  *DAT_0001cf74 = *DAT_0001cf74 ^ 1;
  if (*(code **)(pbVar1 + 4) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pbVar1 + 4))();
    return;
  }
  return;
}


/* ---- FUN_0001cf78 @ 0001cf78 ---- */

void FUN_0001cf78(void)

{
  int iVar1;
  
  if (*(code **)(DAT_0001cf9c + 4) != (code *)0x0) {
    iVar1 = (**(code **)(DAT_0001cf9c + 4))();
    if (iVar1 != 0) {
      FUN_0001e9a8(iVar1,0x166,DAT_0001cfa0);
    }
    return;
  }
  FUN_0001fcdc();
  return;
}


/* ---- FUN_0001cfa4 @ 0001cfa4 ---- */

void FUN_0001cfa4(uint param_1,uint param_2)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  pbVar2 = DAT_0001d030;
  bVar1 = false;
  if (param_1 == 0x83) {
LAB_0001cfc6:
    if (*DAT_0001d030 != param_1) {
      *DAT_0001d030 = (byte)param_1;
      bVar1 = true;
    }
  }
  else if ((int)param_1 < 0x84) {
    if ((param_1 != 0) && ((param_1 == 0x81 || (param_1 == 0x82)))) goto LAB_0001cfc6;
  }
  else if ((param_1 == 0x84) || (param_1 == 0x85)) goto LAB_0001cfc6;
  if (param_2 == 0xf4) {
LAB_0001cff4:
    if (pbVar2[1] != param_2) {
      pbVar2[1] = (byte)param_2;
      bVar1 = true;
    }
  }
  else if ((int)param_2 < 0xf5) {
    if ((param_2 != 0) && (((param_2 == 0xf1 || (param_2 == 0xf2)) || (param_2 == 0xf3))))
    goto LAB_0001cff4;
  }
  else if (((param_2 == 0xf5) || (param_2 == 0xf6)) || (param_2 == 0xf7)) goto LAB_0001cff4;
  uVar3 = FUN_0001c9e4();
  if (uVar3 != 0) {
    uVar3 = 1;
  }
  if (uVar3 == pbVar2[2]) {
    if (!bVar1) goto LAB_0001d028;
  }
  else {
    iVar4 = FUN_0001c9e4();
    if (iVar4 != 0) {
      iVar4 = 1;
    }
    pbVar2[2] = (byte)iVar4;
  }
  FUN_0001bab4();
  FUN_0001b9d4();
LAB_0001d028:
  FUN_0001ba80();
  return;
}


/* ---- v1_led_set_color @ 0001d034 ---- */
/* 0x21: rgb scaled by byte7 (%), 3 PWM channels */

/* 0x21: rgb scaled by byte7 (%), 3 PWM channels */

void v1_led_set_color(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0001d070;
  puVar1 = DAT_0001d06c;
  *DAT_0001d06c = param_1 & 0xffffff;
  if ((param_1 & 0xffffff) != 0) {
    *puVar2 = 1;
    puVar1[1] = 1;
    return;
  }
  puVar1[1] = 0;
  puVar2[1] = 1;
  FUN_00020364(0,0);
  FUN_00020364(1,0);
  FUN_00020364(2,0);
  return;
}


/* ---- FUN_0001d074 @ 0001d074 ---- */

void FUN_0001d074(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_0001d0dc;
  DAT_0001d0dc[1] = 1;
  puVar1[3] = 1;
  iVar3 = DAT_0001d0e4;
  iVar2 = DAT_0001d0e0;
  *(undefined4 *)(DAT_0001d0e0 + 4) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(iVar3 + 0xc) = 0x400;
  }
  else {
    *(undefined4 *)(iVar3 + 8) = 0x400;
  }
  iVar3 = DAT_0001d0e8;
  if (param_1 != 0) {
    *(undefined4 *)(DAT_0001d0e8 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 4;
    puVar1[3] = 1;
    iVar3 = DAT_0001d0e8;
    *(undefined4 *)(DAT_0001d0e8 + 0x40) = 0;
    *(undefined4 *)(iVar3 + 0x44) = 100;
    *(undefined4 *)(iVar3 + 0x48) = 0;
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    *DAT_0001d0ec = 2;
    *(undefined4 *)(DAT_0001d0f0 + 4) = 0x20000;
    *DAT_0001d0f4 = *DAT_0001d0f4 & 0xff00ffff | 0x400000;
    *DAT_0001d0f8 = 0x400;
    *DAT_0001d0fc = 0x400;
    *(int *)(iVar2 + 4) = param_1;
    *puVar1 = 1;
  }
  return;
}


/* ---- FUN_0001d100 @ 0001d100 ---- */

void FUN_0001d100(void)

{
  int iVar1;
  
  if (((int)((*(uint *)(DAT_0001d14c + 0x10) >> 0x14) << 0x1f) < 0) ||
     (-1 < (int)((*(uint *)(DAT_0001d14c + 0x10) >> 0x1d) << 0x1f))) {
    FUN_0001cfa4(0x81,0xf1);
    iVar1 = FUN_0001c9d4();
    if (iVar1 != 0) {
      FUN_0001cfa4(0x82,0);
      return;
    }
  }
  else {
    v1_led_set_color(DAT_0001d150);
    FUN_0001cfa4(0x82,0xf3);
    FUN_0001d54c(DAT_0001d154,0xe6);
  }
  return;
}


/* ---- FUN_0001d158 @ 0001d158 ---- */

void FUN_0001d158(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0001fd7c();
  iVar1 = DAT_0001d19c;
  if (iVar2 != 0) {
    *(undefined4 *)(DAT_0001d19c + 4) = DAT_0001d198;
    *(int *)(DAT_0001d1a0 + 0x18) = iVar1 >> 0xf;
  }
  if (((((char)*(undefined2 *)(DAT_0001d1a4 + 0x20) == '\x01') &&
       ((*(ushort *)(DAT_0001d1a4 + 0x24) & 0xf) == 0)) &&
      (((uint)*(ushort *)(DAT_0001d1a4 + 0x28) << 0x18) >> 0x1c == 4)) &&
     (((uint)*(ushort *)(DAT_0001d1a4 + 0x2c) << 0x18) >> 0x1c == 0)) {
    *(undefined4 *)(DAT_0001d1a8 + 8) = 1;
  }
  return;
}


/* ---- FUN_0001d1ac @ 0001d1ac ---- */

void FUN_0001d1ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)(DAT_0001d218 + 0xc) != 0) {
    *(undefined4 *)(DAT_0001d218 + 0xc) = 0;
    puVar1 = DAT_0001d21c;
    DAT_0001d21c[1] = 1;
    puVar1[3] = 1;
    puVar2 = DAT_0001d224;
    uVar3 = *DAT_0001d220;
    uVar4 = (uVar3 << 8) >> 0x18;
    uVar5 = uVar3 & 0xff;
    uVar6 = (uVar3 << 0x10) >> 0x18;
    *DAT_0001d224 = uVar4;
    puVar2[1] = uVar6;
    puVar2[2] = uVar5;
    FUN_00020364(0,uVar4 != 0,param_3,param_4,param_4);
    FUN_00020364(1,uVar6 != 0);
    FUN_00020364(2,uVar5 != 0);
    if (((uVar3 << 8 | uVar3 << 0x10) >> 0x18 | uVar5) == 0) {
      DAT_0001d21c[1] = 1;
      return;
    }
    *DAT_0001d21c = 1;
  }
  return;
}


/* ---- FUN_0001d228 @ 0001d228 ---- */

void FUN_0001d228(void)

{
  int iVar1;
  
  if (*(int *)(DAT_0001d24c + 4) != 0) {
    *(undefined4 *)(DAT_0001d24c + 4) = 0;
    iVar1 = *(int *)(DAT_0001d250 + 4) + -1;
    *(int *)(DAT_0001d250 + 4) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(DAT_0001d254 + 4) = 1;
      FUN_0001c814();
    }
  }
  return;
}


/* ---- FUN_0001d258 @ 0001d258 ---- */

void FUN_0001d258(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0001d2a0;
  *(undefined4 *)(DAT_0001d2a0 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 4;
  puVar2 = DAT_0001d2a4;
  DAT_0001d2a4[3] = 1;
  iVar1 = DAT_0001d2a0;
  *(undefined4 *)(DAT_0001d2a0 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 300;
  *(undefined4 *)(DAT_0001d2a8 + 4) = 0x80000;
  *DAT_0001d2ac = *DAT_0001d2ac & 0xffff00ff | 0x4000;
  *DAT_0001d2b0 = 0x200;
  *DAT_0001d2b4 = 0x200;
  *puVar2 = 1;
  return;
}


/* ---- FUN_0001d2b8 @ 0001d2b8 ---- */

void FUN_0001d2b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  cVar1 = DAT_0001d36c[1];
  cVar2 = *DAT_0001d36c;
  if (param_1 == -1) {
    if (cVar1 != -9) {
      return;
    }
    if (cVar2 != -0x7d) {
      return;
    }
    param_1 = 0;
    uVar3 = 0xef;
LAB_0001d314:
    FUN_0001cf3c(uVar3,param_1,cVar2,cVar1,param_4);
    return;
  }
  if (cVar1 == -9) {
    if (cVar2 != -0x7d) {
      return;
    }
    uVar3 = 0xf0;
    goto LAB_0001d314;
  }
  if (cVar1 != -0xd) {
    return;
  }
  if ((cVar2 != -0x7e) && (cVar2 != -0x7d)) {
    return;
  }
  pcVar5 = DAT_0001d36c + -6;
  cVar1 = *pcVar5;
  if (cVar1 == '\0') {
LAB_0001d31a:
    uVar3 = 0xff0000;
  }
  else {
    uVar3 = 0xff00;
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        uVar3 = 0xff;
      }
      else {
        if (cVar1 == '\x03') {
          v1_led_set_color(0);
          FUN_0001c69c(4,0xe,500,6,1);
          goto LAB_0001d358;
        }
        if (cVar1 == '\x04') {
          FUN_0001c7d0();
          iVar4 = FUN_0001bf18();
          if (iVar4 != 0x33) goto LAB_0001d31a;
        }
        else if (cVar1 == '\x05') {
          uVar3 = 0;
        }
        else {
          uVar3 = DAT_0001d370;
          if (cVar1 != '\x06') goto LAB_0001d358;
        }
      }
    }
  }
  v1_led_set_color(uVar3);
LAB_0001d358:
  cVar1 = *pcVar5;
  *pcVar5 = cVar1 + '\x01';
  if ((char)(cVar1 + '\x01') != '\a') {
    return;
  }
  *pcVar5 = '\0';
  return;
}


/* ---- FUN_0001d374 @ 0001d374 ---- */

void FUN_0001d374(void)

{
  FUN_00021014();
  return;
}


/* ---- FUN_0001d37c @ 0001d37c ---- */

void FUN_0001d37c(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001b180(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  FUN_0001ec40(*DAT_0001d3a4,uVar1,param_2);
  return;
}


/* ---- FUN_0001d3a8 @ 0001d3a8 ---- */

void FUN_0001d3a8(void)

{
  FUN_0001ecbc(*DAT_0001d3b4);
  return;
}


/* ---- FUN_0001d3bc @ 0001d3bc ---- */

void FUN_0001d3bc(void)

{
  FUN_0001ec40(*(undefined4 *)(DAT_0001d3d0 + 4),0xa0000,0);
  return;
}


/* ---- FUN_0001d3d4 @ 0001d3d4 ---- */

void FUN_0001d3d4(void)

{
  FUN_0001ecbc(*(undefined4 *)(DAT_0001d3e0 + 4));
  return;
}


/* ---- FUN_0001d3e4 @ 0001d3e4 ---- */

void FUN_0001d3e4(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  uVar1 = FUN_0001ba30();
  local_8 = CONCAT22(local_8._2_2_,uVar1);
  FUN_0001da40(DAT_0001d448,DAT_0001d444,&local_8,0);
  if ((local_8 & 0xffff) < DAT_0001d44c) {
    FUN_0001cf3c(0xf2,0);
  }
  if ((DAT_0001d44c + 0x3c < (local_8 & 0xffff)) && (iVar2 = FUN_0001bc14(), iVar2 == 0x84)) {
    FUN_0001cf3c(0xf3,0);
  }
  if ((DAT_0001d450 < (local_8 & 0xffff)) && (iVar2 = FUN_0001c9e4(), iVar2 == 1)) {
    FUN_0001cf3c(0xf4,0);
  }
  return;
}


/* ---- FUN_0001d460 @ 0001d460 ---- */

void FUN_0001d460(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0001d490;
  FUN_0001ecbc(*(undefined4 *)(DAT_0001d490 + 0xc));
  uVar2 = FUN_0001b180(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  FUN_0001ec40(*(undefined4 *)(iVar1 + 0xc),uVar2,param_2);
  return;
}


/* ---- FUN_0001d494 @ 0001d494 ---- */

void FUN_0001d494(void)

{
  *(undefined4 *)(DAT_0001d4e8 + 0x3c) = 0;
  *(undefined4 *)(DAT_0001d4ec + 0x3c) = 0;
  FUN_000202b4(0x1d);
  FUN_000202b4(0x1e);
  FUN_000202b4(0);
  FUN_000202b4(0x13);
  FUN_000202b4(0x12);
  FUN_000202b4(0x11);
  FUN_000202b4(5);
  FUN_000202b4(7);
  FUN_000202b4(0x14);
  FUN_000202b4(10);
  *(undefined4 *)(DAT_0001d4f0 + 0x3c) = 0;
  FUN_0001bc2c();
  return;
}


/* ---- FUN_0001d4f4 @ 0001d4f4 ---- */

void FUN_0001d4f4(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0001d52c;
  if (param_1 != 0) {
    FUN_0001ecbc(*(undefined4 *)(DAT_0001d52c + 0x10));
    uVar2 = FUN_0001b180(param_1 * 0x8000 + 500,
                         (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
    FUN_0001ec40(*(undefined4 *)(iVar1 + 0x10),uVar2,0);
    return;
  }
  FUN_0001d494(0);
  return;
}


/* ---- FUN_0001d530 @ 0001d530 ---- */

void FUN_0001d530(void)

{
  FUN_0001ecbc(*(undefined4 *)(DAT_0001d53c + 0x10));
  return;
}


/* ---- FUN_0001d54c @ 0001d54c ---- */

void FUN_0001d54c(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0001d57c;
  FUN_0001ecbc(*(undefined4 *)(DAT_0001d57c + 8));
  uVar2 = FUN_0001b180(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  FUN_0001ec40(*(undefined4 *)(iVar1 + 8),uVar2,param_2);
  return;
}


/* ---- FUN_0001d580 @ 0001d580 ---- */

void FUN_0001d580(void)

{
  FUN_0001ecbc(*(undefined4 *)(DAT_0001d58c + 8));
  return;
}


/* ---- FUN_0001d5b0 @ 0001d5b0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001d5b0(void)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined2 local_10;
  undefined local_e;
  
  puVar1 = _DAT_0001d614;
  local_20 = *DAT_0001d610;
  uStack_1c = DAT_0001d610[1];
  uStack_18 = DAT_0001d610[2];
  uStack_14 = DAT_0001d610[3];
  *(undefined2 *)(_DAT_0001d614 + 2) = 0xffff;
  software_interrupt(99);
  if (&stack0x00000000 != &Reserved2) {
    FUN_0001e9a8(&local_20,199,s____src_BleSrvs_UserBleSrvs_AppDa_0001d617 + 1);
  }
  local_e = *puVar1;
  local_10 = 2;
  software_interrupt(0xa0);
  FUN_0001e9a8(1,0xd3,s____src_BleSrvs_UserBleSrvs_AppDa_0001d617 + 1);
  uVar3 = DAT_0001d640 + 0xf;
  uVar2 = DAT_0001d640;
  do {
    FUN_0001d7f2(_DAT_0001d614,uVar2);
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 <= uVar3);
  return 0;
}


/* ---- FUN_0001d644 @ 0001d644 ---- */

void FUN_0001d644(short *param_1)

{
  short sVar1;
  
  if (param_1 == (short *)0x0) {
    return;
  }
  sVar1 = *param_1;
  if (sVar1 == 0x10) {
    sVar1 = param_1[2];
  }
  else {
    if (sVar1 != 0x11) {
      if (sVar1 != 0x50) {
        return;
      }
      FUN_0001d9be(DAT_0001d670,param_1 + 3);
      return;
    }
    sVar1 = -1;
  }
  *(short *)(DAT_0001d670 + 2) = sVar1;
  return;
}


/* ---- FUN_0001d674 @ 0001d674 ---- */

void FUN_0001d674(ushort **param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0001bac0(param_2,param_3,0x10);
  iVar1 = (uint)**param_1 + DAT_0001d6bc;
  if (iVar1 == 0) {
    uVar2 = 0xe7;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 5) {
        if (0xf < param_3) {
          param_3 = 0x10;
        }
        FUN_0001ea9c(param_2,param_3,DAT_0001d6c0);
      }
      return;
    }
    uVar2 = 0xe9;
  }
  FUN_0001cf3c(uVar2,0);
  return;
}


/* ---- FUN_0001d6c4 @ 0001d6c4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001d6c4(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined2 local_10;
  undefined local_e;
  
  puVar1 = _DAT_0001d764;
  local_20 = *DAT_0001d760;
  uStack_1c = DAT_0001d760[1];
  uStack_18 = DAT_0001d760[2];
  uStack_14 = DAT_0001d760[3];
  *(undefined2 *)(_DAT_0001d764 + 2) = 0xffff;
  software_interrupt(99);
  if (&stack0x00000000 != &Reserved2) {
    FUN_0001e9a8(&local_20,0x8f,s____src_BleSrvs_UserBleSrvs_DevIn_0001d767 + 1);
  }
  local_e = *puVar1;
  local_10 = 1;
  software_interrupt(0xa0);
  FUN_0001e9a8(1,0x9b,s____src_BleSrvs_UserBleSrvs_DevIn_0001d767 + 1);
  uVar2 = DAT_0001d790;
  FUN_0001c900(_DAT_0001d764 + -8,DAT_0001d790,6);
  FUN_0001c900(DAT_0001d794,uVar2,0xc);
  puVar1 = _DAT_0001d764;
  *(undefined4 *)(_DAT_0001d764 + -0x10) = 0x260;
  *(short *)(puVar1 + -0x14) = (short)DAT_0001d798;
  uVar4 = FUN_0001ba30();
  uVar3 = DAT_0001d7a0;
  puVar1 = _DAT_0001d764;
  *(undefined2 *)(_DAT_0001d764 + -0x12) = uVar4;
  uVar5 = DAT_0001d7a0;
  *(undefined4 *)(puVar1 + -0xc) = *(undefined4 *)(DAT_0001d79c + 4);
  do {
    FUN_0001d7f2(_DAT_0001d764,uVar5);
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 <= uVar3 + 0xf);
  return 0;
}


/* ---- FUN_0001d7a4 @ 0001d7a4 ---- */

void FUN_0001d7a4(short *param_1)

{
  short sVar1;
  
  if (param_1 == (short *)0x0) {
    return;
  }
  sVar1 = *param_1;
  if (sVar1 == 0x10) {
    sVar1 = param_1[2];
  }
  else {
    if (sVar1 != 0x11) {
      if (sVar1 != 0x50) {
        return;
      }
      FUN_0001d9be(DAT_0001d7d0,param_1 + 3);
      return;
    }
    sVar1 = -1;
  }
  *(short *)(DAT_0001d7d0 + 2) = sVar1;
  return;
}


/* ---- FUN_0001d7d4 @ 0001d7d4 ---- */

ushort ** FUN_0001d7d4(ushort **param_1,uint param_2)

{
  ushort **ppuVar1;
  
  if (param_1 != (ushort **)0x0) {
    ppuVar1 = (ushort **)param_1[2];
    if (ppuVar1 != (ushort **)0x0) {
      for (; *ppuVar1 != (ushort *)0x0; ppuVar1 = ppuVar1 + 4) {
        if (**ppuVar1 == param_2) {
          return ppuVar1;
        }
      }
    }
    param_1 = (ushort **)0x0;
  }
  return param_1;
}


/* ---- FUN_0001d7f2 @ 0001d7f2 ---- */

undefined2 FUN_0001d7f2(undefined *param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  byte local_60;
  byte local_5f;
  byte local_5e;
  undefined2 local_58;
  undefined local_56;
  undefined local_54;
  undefined local_53;
  byte local_52;
  byte local_50 [4];
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  undefined local_30 [28];
  
  if (param_1 == (undefined *)0x0) {
    uVar1 = 7;
  }
  else {
    puVar2 = (undefined4 *)FUN_0001d7d4();
    if ((puVar2 == (undefined4 *)0x0) ||
       (puVar4 = (undefined2 *)*puVar2, puVar4 == (undefined2 *)0x0)) {
      uVar1 = 5;
    }
    else {
      if ((*(byte *)(puVar4 + 1) & 1) != 0) {
        FUN_0001c924(&local_54,0,3);
        local_54 = 0x11;
        local_53 = 0x11;
        local_52 = (local_52 & 0xf9) + 2 & 0xfe |
                   (byte)(((uint)*(byte *)(puVar4 + 1) << 0x1b) >> 0x1f);
      }
      FUN_0001c924(local_50,0,0x1c);
      local_50[0] = local_50[0] & 0xe1 |
                    (byte)((((uint)*(byte *)(puVar4 + 1) << 0x1e) >> 0x1f) << 1) |
                    (byte)(((uint)*(byte *)(puVar4 + 1) << 0x1f) >> 0x1b) |
                    (byte)((((uint)*(byte *)(puVar4 + 1) << 0x1d) >> 0x1f) << 3) |
                    (byte)((((uint)*(byte *)(puVar4 + 1) << 0x1c) >> 0x1f) << 2);
      local_4c = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = (undefined *)((uint)*(byte *)(puVar4 + 1) << 0x1f);
      if (local_3c != (undefined *)0x0) {
        local_3c = &local_54;
      }
      local_38 = 0;
      local_56 = *param_1;
      local_58 = *puVar4;
      FUN_0001c924(&local_60,0,3);
      if ((int)((uint)*(byte *)(puVar4 + 1) << 0x1e) < 0) {
        iVar3 = 0x11;
      }
      else {
        iVar3 = 0;
      }
      local_60 = (int)((uint)*(byte *)(puVar4 + 1) << 0x1e) < 0 | (byte)(iVar3 << 4);
      if (((int)((uint)*(byte *)(puVar4 + 1) << 0x1d) < 0) ||
         ((int)((uint)*(byte *)(puVar4 + 1) << 0x1c) < 0)) {
        local_5f = 1;
      }
      else {
        local_5f = 0;
      }
      if (((int)((uint)*(byte *)(puVar4 + 1) << 0x1d) < 0) ||
         ((int)((uint)*(byte *)(puVar4 + 1) << 0x1c) < 0)) {
        iVar3 = 0x11;
      }
      else {
        iVar3 = 0;
      }
      local_5f = (byte)(iVar3 << 4) | local_5f;
      local_5e = (local_5e & 0xf9) + 4 & 0xe6 |
                 (byte)(((uint)*(byte *)(puVar4 + 1) << 0x1b) >> 0x1f);
      FUN_0001c924(local_30,0,0x14);
      uVar1 = *(undefined2 *)(param_1 + 4);
      software_interrupt(0xa2);
    }
  }
  return uVar1;
}


/* ---- FUN_0001d98e @ 0001d98e ---- */

uint FUN_0001d98e(uint param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)FUN_0001d7d4();
    if ((piVar1 == (int *)0x0) || (iVar2 = *piVar1, iVar2 == 0)) {
      return 0;
    }
    if ((*(int *)(iVar2 + 8) != 0) && (param_3 != 0)) {
      FUN_0001c900(param_3,*(int *)(iVar2 + 8),*(undefined *)(iVar2 + 4));
    }
    param_1 = (uint)*(byte *)(iVar2 + 4);
  }
  return param_1;
}


/* ---- FUN_0001d9be @ 0001d9be ---- */

undefined4 FUN_0001d9be(int param_1,short *param_2)

{
  int iVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1 == 0) || (param_2 == (short *)0x0)) {
    return 7;
  }
  iVar1 = *(int *)(param_1 + 8);
  uVar3 = 0;
  while( true ) {
    iVar4 = *(int *)(iVar1 + uVar3 * 0x10);
    if (iVar4 == 0) {
      if (param_2[5] == 2) {
        uVar3 = 0;
        while( true ) {
          iVar4 = *(int *)(iVar1 + uVar3 * 0x10);
          if (iVar4 == 0) break;
          if (((*(byte *)(iVar4 + 2) & 1) != 0) &&
             (*param_2 == *(short *)(uVar3 * 0x10 + iVar1 + 8))) {
            iVar4 = -((int)((uint)*(byte *)(param_2 + 6) << 0x1f) >> 0x1f);
            uVar2 = (undefined)iVar4;
            if (iVar4 != 0) {
              uVar2 = 1;
            }
            *(undefined *)(uVar3 * 0x10 + iVar1 + 0xc) = uVar2;
            return 0;
          }
          uVar3 = uVar3 + 1 & 0xffff;
        }
      }
      return 5;
    }
    if ((*(int *)(iVar4 + 0xc) != 0) && (*param_2 == *(short *)(uVar3 * 0x10 + iVar1 + 4))) break;
    uVar3 = uVar3 + 1 & 0xffff;
  }
  (**(code **)(iVar4 + 0xc))(uVar3 * 0x10 + iVar1,param_2 + 6,param_2[5]);
  return 0;
}


/* ---- FUN_0001da40 @ 0001da40 ---- */

undefined2 FUN_0001da40(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined local_28 [20];
  
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = 7;
  }
  else {
    piVar2 = (int *)FUN_0001d7d4();
    if (((piVar2 == (int *)0x0) || (iVar3 = *piVar2, iVar3 == 0)) ||
       (*(byte *)(iVar3 + 4) < param_4)) {
      uVar1 = 8;
    }
    else {
      if (param_4 == 0) {
        param_4 = (uint)*(byte *)(iVar3 + 3);
      }
      if (param_3 != 0) {
        FUN_0001c900(*(undefined4 *)(iVar3 + 8),param_3,param_4);
      }
      if (*(ushort *)(param_1 + 2) != DAT_0001dad8) {
        FUN_0001c924(&local_38,0,8);
        local_38 = (undefined2)param_4;
        local_36 = 0;
        local_34 = 0;
        uVar1 = *(undefined2 *)(param_1 + 2);
        software_interrupt(0xa4);
        if ((*(byte *)(piVar2 + 3) & 1) != 0) {
          FUN_0001c924(local_28,0,0x10);
          uVar1 = *(undefined2 *)(param_1 + 2);
          software_interrupt(0xa6);
        }
      }
    }
  }
  return uVar1;
}


/* ---- FUN_0001dadc @ 0001dadc ---- */

void FUN_0001dadc(undefined4 param_1)

{
  FUN_0001d7a4();
  FUN_0001d644(param_1);
  return;
}


/* ---- FUN_0001daec @ 0001daec ---- */

uint FUN_0001daec(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar3 = 0;
  pbVar2 = (byte *)(param_1 + 4);
  uVar4 = DAT_0001db08;
  do {
    bVar1 = *pbVar2;
    uVar3 = uVar3 + 1;
    pbVar2 = pbVar2 + 1;
    uVar4 = bVar1 + uVar4 & 0xffff;
  } while (uVar3 < 0x18);
  return uVar4;
}


/* ---- FUN_0001db0c @ 0001db0c ---- */

void FUN_0001db0c(void)

{
  FUN_00020434(DAT_0001db18,0x40);
  return;
}


/* ---- FUN_0001db1c @ 0001db1c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001db1c(void)

{
  int iVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((_DAT_10000010 & 0xffff) != 0x400) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  local_c = 0x10040;
  local_10 = DAT_0001dbd4;
  FUN_000204e4();
  FUN_000205d4(&local_10,DAT_0001dbd8);
  FUN_0002052c(DAT_0001dbdc,DAT_0001dbd8,0x40,0);
  uVar4 = FUN_0001daec(DAT_0001dbdc);
  iVar1 = DAT_0001dbdc;
  if (uVar4 != *(ushort *)(DAT_0001dbdc + 2)) {
    FUN_0001daec(DAT_0001dbdc);
    FUN_0001c924(iVar1,0,0x1c);
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined2 *)(iVar1 + 0xc) = 2000;
    *(undefined4 *)(iVar1 + 8) = DAT_0001dbe0;
    *(undefined *)(iVar1 + 0x11) = 3;
    *(undefined2 *)(iVar1 + 0xe) = 2000;
    *(undefined *)(iVar1 + 0x10) = 10;
    FUN_0001dd14(iVar1 + 0x12,s_12345678_0001dbe4);
    uVar2 = FUN_0001daec(iVar1);
    *(undefined2 *)(iVar1 + 2) = uVar2;
    piVar5 = *(int **)(DAT_0001dbd8 + 4);
    uVar3 = 0;
    do {
      if (*piVar5 != -1) {
        FUN_00020434(DAT_0001dbd8,0x40);
        goto LAB_0001dbcc;
      }
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar3 < 0x10);
    FUN_00020680(DAT_0001dbd8,DAT_0001dbdc,0x40,0);
LAB_0001dbcc:
    FUN_0001c9b8();
  }
  return;
}


/* ---- FUN_0001dbf0 @ 0001dbf0 ---- */

void FUN_0001dbf0(void)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = FUN_0001daec(DAT_0001dc08);
  iVar1 = DAT_0001dc08;
  *(undefined2 *)(DAT_0001dc08 + 2) = uVar2;
  FUN_0002075c(DAT_0001dc0c,iVar1,0x40,0);
  return;
}


/* ---- FUN_0001dc10 @ 0001dc10 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001dc10(void)

{
  int iVar1;
  
  iVar1 = FUN_0001ebb0(0,7,_DAT_0001dc68);
  if (iVar1 != 0) {
    FUN_0001e9a8(iVar1,0xb2,s____src_Custom_UserAppTimers_c_0001dc6b + 1);
  }
  FUN_0001eb84(DAT_0001dc90,1,DAT_0001dc8c);
  FUN_0001eb84(DAT_0001dc90 + 4,0,DAT_0001dc94);
  FUN_0001eb84(DAT_0001dc90 + 8,0,DAT_0001dc98);
  FUN_0001eb84(DAT_0001dc90 + 0xc,0,DAT_0001dc9c);
  FUN_0001eb84(DAT_0001dc90 + 0x10,0,DAT_0001dca0);
  return;
}


/* ---- FUN_0001dca4 @ 0001dca4 ---- */

void FUN_0001dca4(void)

{
  FUN_0001d6c4();
  FUN_0001d5b0();
  return;
}


/* ---- FUN_0001dcb0 @ 0001dcb0 ---- */

void FUN_0001dcb0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0001bc7c();
  iVar3 = DAT_0001dcec;
  iVar2 = DAT_0001dce8;
  iVar1 = DAT_0001dce4;
  *(int *)(DAT_0001dcec + 0x10) = DAT_0001dce4;
  *(int *)(iVar3 + 0x14) = iVar2;
  iVar3 = DAT_0001dcec;
  *(int *)(DAT_0001dcec + 0x18) = iVar1 + 4;
  *(int *)(iVar3 + 0x1c) = iVar2 + 4;
  iVar3 = DAT_0001dcec;
  *(int *)(DAT_0001dcec + 0x20) = iVar1 + 8;
  *(int *)(iVar3 + 0x24) = iVar2 + 8;
  FUN_0001f994();
  FUN_0001d258();
  return;
}


/* ---- FUN_0001dcf0 @ 0001dcf0 ---- */

void FUN_0001dcf0(void)

{
  return;
}


/* ---- FUN_0001dcf4 @ 0001dcf4 ---- */

void FUN_0001dcf4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0001df18(param_1,&uStack_c,DAT_0001dd10,DAT_0001dd0c);
  return;
}


/* ---- FUN_0001dd14 @ 0001dd14 ---- */

undefined4 FUN_0001dd14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar1 = FUN_0001df18(param_2,&uStack_8,&uStack_10,DAT_0001dd38);
  FUN_0001e650(0,&uStack_10);
  return uVar1;
}


/* ---- FUN_0001dd3c @ 0001dd3c ---- */

int FUN_0001dd3c(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x20;
  if (param_1 >> 0x10 != 0) {
    iVar1 = 0x10;
    param_1 = param_1 >> 0x10;
  }
  if (param_1 >> 8 != 0) {
    iVar1 = iVar1 + -8;
    param_1 = param_1 >> 8;
  }
  if (param_1 >> 4 != 0) {
    iVar1 = iVar1 + -4;
    param_1 = param_1 >> 4;
  }
  if (param_1 >> 2 != 0) {
    iVar1 = iVar1 + -2;
    param_1 = param_1 >> 2;
  }
  if (param_1 >> 1 != 0) {
    return iVar1 + -2;
  }
  return iVar1 - param_1;
}


/* ---- __ARM_common_switch8 @ 0001dd6a ---- */

/* WARNING: This is an inlined function */

void __ARM_common_switch8(void)

{
  uint in_r3;
  uint uVar1;
  int in_lr;
  
  uVar1 = (uint)*(byte *)(in_lr + -1);
  if (in_r3 < *(byte *)(in_lr + -1)) {
    uVar1 = in_r3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001dd82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr + (uint)*(byte *)(in_lr + uVar1) * 2))();
  return;
}


/* ---- FUN_0001dda4 @ 0001dda4 ---- */

int * FUN_0001dda4(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined uVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar1 = 0;
  if ((param_3 | param_4) == 0) {
    if (param_6 == 1) {
      uVar1 = ~param_5;
    }
    param_1[2] = 1;
    *param_1 = (int)&DAT_0001df0c;
    param_1[3] = param_6;
    param_1[1] = uVar1;
  }
  else {
    iVar6 = (int)(DAT_0001df00 * ((param_4 >> 0x14) + DAT_0001defc)) >> 0x10;
    do {
      while( true ) {
        if (param_6 == 1) {
          uVar1 = -param_5;
        }
        else {
          uVar1 = (iVar6 - param_5) + 1;
        }
        lVar10 = (ulonglong)DAT_0001df04 << 0x20;
        lVar12 = (ulonglong)DAT_0001df08 << 0x20;
        uVar4 = uVar1;
        if ((int)uVar1 < 0) {
          uVar4 = -uVar1;
        }
        iVar5 = uVar4 * 0x100000 + DAT_0001df08;
        while( true ) {
          uVar7 = (undefined4)((ulonglong)lVar10 >> 0x20);
          local_3c = (undefined4)((ulonglong)lVar12 >> 0x20);
          local_40 = (undefined4)lVar12;
          if (uVar4 == 0) break;
          if ((uVar4 & 1) != 0) {
            lVar12 = FUN_0001b3ec(local_40,local_3c,(int)lVar10,uVar7);
          }
          lVar10 = FUN_0001b3ec((int)lVar10,uVar7);
          uVar4 = (int)uVar4 >> 1;
        }
        uVar8 = 1;
        if ((int)uVar1 < 0) {
          uVar11 = FUN_0001b3ec();
          uVar11 = FUN_0001b3ec((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_40,local_3c);
        }
        else {
          uVar11 = FUN_0001b4bc(param_3,param_4,0,iVar5);
          uVar11 = FUN_0001b4bc((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_40,local_3c);
        }
        bVar9 = true;
        FUN_0001b5ec();
        if ((bool)uVar8 && !bVar9) {
          FUN_0001b288((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,DAT_0001df14);
          lVar12 = FUN_0001b5ac();
        }
        else {
          lVar12 = -1;
        }
        for (iVar5 = 0x10; (lVar12 != 0 && (-1 < iVar5)); iVar5 = iVar5 + -1) {
          cVar2 = '\n';
          lVar12 = FUN_0001b180();
          *(char *)(param_2 + iVar5) = cVar2 + '0';
        }
        iVar3 = 0x11 - (iVar5 + 1);
        if (param_6 != 1) break;
        if (lVar12 == 0) {
          iVar6 = (iVar3 - param_5) + -1;
          goto LAB_0001def0;
        }
        param_5 = 0x11;
        param_6 = 0;
      }
      bVar9 = true;
      if ((lVar12 == 0) && (iVar3 <= (int)param_5)) {
        if (iVar3 < (int)param_5) {
          bVar9 = false;
          iVar6 = iVar6 + -1;
        }
      }
      else {
        bVar9 = false;
        iVar6 = iVar6 + 1;
      }
    } while (!bVar9);
LAB_0001def0:
    param_1[2] = iVar3;
    param_1[3] = param_6;
    *param_1 = param_2 + iVar5 + 1;
    param_1[1] = iVar6;
    param_1 = param_1 + 2;
  }
  return param_1;
}


/* ---- FUN_0001df18 @ 0001df18 ---- */

int FUN_0001df18(byte *param_1,int **param_2,undefined4 param_3,code *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined uVar6;
  char extraout_r1;
  int iVar7;
  int **ppiVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  int *piVar16;
  char *pcVar17;
  int *piVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  longlong lVar22;
  int *in_stack_ffffff80;
  int *in_stack_ffffff84;
  undefined4 local_78;
  undefined4 local_74;
  int *local_70;
  int *local_6c;
  char local_63 [2];
  undefined4 local_61;
  undefined4 *******local_4c;
  char *local_48;
  byte *local_40;
  uint local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  uint local_2c;
  byte *pbStack_24;
  int **local_20;
  undefined4 local_1c;
  code *local_18;
  
  local_18 = param_4;
  local_1c = param_3;
  pbStack_24 = param_1;
  iVar14 = 0;
  local_20 = param_2;
LAB_0001e354:
  uVar3 = (uint)*param_1;
  if (uVar3 == 0) {
    return iVar14;
  }
  if (uVar3 == 0x25) {
    uVar13 = 0;
    piVar16 = (int *)0x0;
    local_70 = (int *)0x0;
    pbVar15 = param_1;
    while( true ) {
      param_1 = pbVar15 + 1;
      uVar3 = 1 << (*param_1 - 0x20 & 0xff);
      if ((uVar3 & DAT_0001e320) == 0) break;
      uVar13 = uVar13 | uVar3;
      pbVar15 = param_1;
    }
    if (*param_1 == 0x2a) {
      local_70 = *local_20;
      local_20 = local_20 + 1;
      if ((int)local_70 < 0) {
        uVar13 = uVar13 | 0x2000;
        local_70 = (int *)-(int)local_70;
      }
      uVar13 = uVar13 | 2;
      param_1 = pbVar15 + 2;
    }
    else {
      for (; *param_1 - 0x30 < 10; param_1 = param_1 + 1) {
        local_70 = (int *)((uint)*param_1 + (int)local_70 * 10 + -0x30);
        uVar13 = uVar13 | 2;
      }
    }
    if (*param_1 == 0x2e) {
      uVar13 = uVar13 | 4;
      if (param_1[1] == 0x2a) {
        param_1 = param_1 + 2;
        piVar16 = *local_20;
        local_20 = local_20 + 1;
      }
      else {
        while( true ) {
          param_1 = param_1 + 1;
          if (9 < *param_1 - 0x30) break;
          piVar16 = (int *)((uint)*param_1 + (int)piVar16 * 10 + -0x30);
        }
      }
    }
    bVar1 = *param_1;
    if (bVar1 == 0x6c) {
      uVar3 = 0x100000;
LAB_0001dfe2:
      uVar13 = uVar13 | uVar3;
      if (param_1[1] == bVar1) {
        uVar13 = uVar13 + 0x100000;
        param_1 = param_1 + 1;
      }
    }
    else if (bVar1 < 0x6d) {
      if (bVar1 != 0x4c) {
        if (bVar1 == 0x68) {
          uVar3 = 0x300000;
          goto LAB_0001dfe2;
        }
        if (bVar1 != 0x6a) goto LAB_0001dff4;
        uVar13 = uVar13 | 0x200000;
      }
    }
    else if ((bVar1 != 0x74) && (bVar1 != 0x7a)) goto LAB_0001dff4;
    param_1 = param_1 + 1;
LAB_0001dff4:
    uVar3 = (uint)*param_1;
    local_3c = uVar3;
    bVar21 = SBORROW4(uVar3,0x66);
    bVar19 = (int)(uVar3 - 0x66) < 0;
    bVar20 = uVar3 == 0x66;
LAB_0001dffa:
    while (!bVar20) {
      if (!bVar20 && bVar19 == bVar21) {
        if (uVar3 == 0x70) {
          iVar5 = 0x10;
          uVar13 = uVar13 | 4;
          piVar16 = (int *)&NMI;
        }
        else if (uVar3 < 0x71) {
          if (uVar3 == 0x67) break;
          if (uVar3 == 0x69) goto LAB_0001e12c;
          if (uVar3 == 0x6e) {
            uVar3 = (uVar13 << 9) >> 0x1d;
            if (uVar3 == 2) {
              piVar16 = *local_20;
              *piVar16 = iVar14;
              piVar16[1] = iVar14 >> 0x1f;
            }
            else if (uVar3 == 3) {
              *(short *)*local_20 = (short)iVar14;
            }
            else if (uVar3 == 4) {
              *(char *)*local_20 = (char)iVar14;
            }
            else {
              **local_20 = iVar14;
            }
            local_20 = local_20 + 1;
            goto LAB_0001e352;
          }
          if (uVar3 != 0x6f) goto LAB_0001e04a;
          iVar5 = 8;
        }
        else {
          if (uVar3 == 0x73) {
            in_stack_ffffff80 = *local_20;
            iVar5 = -1;
            goto LAB_0001e0ac;
          }
          if (uVar3 != 0x75) {
            if (uVar3 == 0x78) goto LAB_0001e1a0;
            goto LAB_0001e04a;
          }
          iVar5 = 10;
        }
LAB_0001e1bc:
        uVar12 = (uVar13 << 9) >> 0x1d;
        if (uVar12 == 2) {
          ppiVar8 = (int **)((int)local_20 + 7U & 0xfffffff8);
          piVar10 = *ppiVar8;
          piVar18 = ppiVar8[1];
          local_20 = ppiVar8 + 2;
        }
        else {
          piVar10 = *local_20;
          local_20 = local_20 + 1;
          piVar18 = (int *)0x0;
          if (uVar12 == 3) {
            piVar10 = (int *)((uint)piVar10 & 0xffff);
          }
          if (uVar12 == 4) {
            piVar10 = (int *)((uint)piVar10 & 0xff);
          }
        }
        local_78 = (undefined *)0x0;
        if ((int)(uVar13 << 0x1c) < 0) {
          if (uVar3 == 0x70) {
            local_74 = (int *)CONCAT31(local_74._1_3_,0x40);
            local_78 = (undefined *)0x1;
LAB_0001e224:
          }
          else if ((iVar5 == 0x10) && (((uint)piVar18 | (uint)piVar10) != 0)) {
            local_78 = (undefined *)0x2;
            goto LAB_0001e224;
          }
          if ((iVar5 == 8) &&
             ((((uint)piVar18 | (uint)piVar10) != 0 || ((int)(uVar13 << 0x1d) < 0)))) {
            local_74 = (int *)CONCAT31(local_74._1_3_,0x30);
            piVar16 = (int *)((int)piVar16 + -1);
            local_78 = (undefined *)0x1;
          }
        }
LAB_0001e248:
        lVar22 = CONCAT44(piVar18,piVar10);
        uVar11 = 0;
        if (uVar3 == 0x58) {
          local_48 = s_0123456789ABCDEF_0001e338;
        }
        else {
          local_48 = s_0123456789abcdef_0001e324;
        }
        local_4c = &local_4c;
        while( true ) {
          if (lVar22 == 0) break;
          iVar7 = iVar5;
          lVar22 = FUN_0001b180((int)lVar22,(int)((ulonglong)lVar22 >> 0x20),iVar5,uVar11);
          local_4c = (undefined4 *******)((int)local_4c + -1);
          *(char *)local_4c = local_48[iVar5];
          iVar5 = iVar7;
        }
        piVar10 = (int *)((int)&local_4c - (int)local_4c);
        if ((int)(uVar13 << 0x1d) < 0) {
          uVar13 = uVar13 & 0xfffeffff;
        }
        else {
          piVar16 = (int *)0x1;
        }
        if ((int)piVar10 < (int)piVar16) {
          piVar16 = (int *)((int)piVar16 - (int)piVar10);
        }
        else {
          piVar16 = (int *)0x0;
        }
        local_70 = (int *)((int)local_70 -
                          (int)((undefined *)((int)piVar16 + (int)piVar10) + (int)local_78));
        if (-1 < (int)(uVar13 << 0xf)) {
          iVar5 = FUN_0001e624(local_70,uVar13,local_1c,local_18);
          iVar14 = iVar5 + iVar14;
        }
        for (iVar5 = 0; iVar5 < (int)local_78; iVar5 = iVar5 + 1) {
          (*local_18)(*(undefined *)((int)&local_74 + iVar5),local_1c);
          iVar14 = iVar14 + 1;
        }
        if ((int)(uVar13 << 0xf) < 0) {
          iVar5 = FUN_0001e624(local_70,uVar13,local_1c,local_18);
          iVar14 = iVar5 + iVar14;
        }
        while (in_stack_ffffff80 = (int *)((int)piVar16 + -1), 0 < (int)piVar16) {
          (*local_18)(0x30,local_1c);
          iVar14 = iVar14 + 1;
          piVar16 = in_stack_ffffff80;
        }
        while (in_stack_ffffff84 = (int *)((int)piVar10 + -1), piVar16 = local_70, 0 < (int)piVar10)
        {
          cVar2 = *(char *)local_4c;
          local_4c = (undefined4 *******)((int)local_4c + 1);
          (*local_18)(cVar2,local_1c);
          iVar14 = iVar14 + 1;
          piVar10 = in_stack_ffffff84;
        }
        goto LAB_0001e34c;
      }
      if (uVar3 == 0x58) {
LAB_0001e1a0:
        iVar5 = 0x10;
        goto LAB_0001e1bc;
      }
      if (0x58 < uVar3) {
        if (uVar3 == 99) {
          in_stack_ffffff80 = &local_78;
          iVar5 = 1;
LAB_0001e0ac:
          local_20 = local_20 + 1;
          if ((int)(uVar13 << 0x1d) < 0) {
            for (iVar7 = 0;
                (iVar7 < (int)piVar16 &&
                ((iVar7 < iVar5 || (*(char *)((int)in_stack_ffffff80 + iVar7) != '\0'))));
                iVar7 = iVar7 + 1) {
            }
          }
          else {
            for (iVar7 = 0; (iVar7 < iVar5 || (*(char *)((int)in_stack_ffffff80 + iVar7) != '\0'));
                iVar7 = iVar7 + 1) {
            }
          }
          piVar16 = (int *)((int)local_70 - iVar7);
          iVar5 = FUN_0001e624(piVar16,uVar13,local_1c,local_18);
          iVar14 = iVar5 + iVar14 + iVar7;
          while (iVar7 = iVar7 + -1, iVar7 != -1) {
            uVar6 = *(undefined *)in_stack_ffffff80;
            in_stack_ffffff80 = (int *)((int)in_stack_ffffff80 + 1);
            (*local_18)(uVar6,local_1c);
          }
          in_stack_ffffff84 = (int *)0xffffffff;
          goto LAB_0001e34c;
        }
        if (uVar3 == 100) {
LAB_0001e12c:
          iVar5 = 10;
          uVar12 = (uVar13 << 9) >> 0x1d;
          if (uVar12 == 2) {
            ppiVar8 = (int **)((int)local_20 + 7U & 0xfffffff8);
            piVar10 = *ppiVar8;
            piVar18 = ppiVar8[1];
            local_20 = ppiVar8 + 2;
          }
          else {
            piVar10 = *local_20;
            local_20 = local_20 + 1;
            if (uVar12 == 3) {
              piVar10 = (int *)(int)(short)piVar10;
            }
            piVar18 = (int *)((int)piVar10 >> 0x1f);
            if (uVar12 == 4) {
              piVar10 = (int *)(int)(char)piVar10;
              piVar18 = (int *)((int)piVar10 >> 0x1f);
            }
          }
          if ((int)piVar18 < 0) {
            bVar20 = piVar10 != (int *)0x0;
            piVar10 = (int *)-(int)piVar10;
            piVar18 = (int *)(-(uint)bVar20 - (int)piVar18);
            uVar6 = 0x2d;
LAB_0001e188:
            local_74 = (int *)CONCAT31(local_74._1_3_,uVar6);
            local_78 = (undefined *)0x1;
          }
          else {
            if ((int)(uVar13 << 0x14) < 0) {
              uVar6 = 0x2b;
              goto LAB_0001e188;
            }
            local_78 = (undefined *)(uVar13 << 0x1f);
            if (local_78 != (undefined *)0x0) {
              uVar6 = 0x20;
              goto LAB_0001e188;
            }
          }
          goto LAB_0001e248;
        }
        if (uVar3 != 0x65) goto LAB_0001e04a;
        break;
      }
      if (uVar3 == 0) {
        return iVar14;
      }
      bVar21 = SBORROW4(uVar3,0x45);
      bVar19 = (int)(uVar3 - 0x45) < 0;
      bVar20 = uVar3 == 0x45;
      if (!bVar20) goto code_r0x0001e00c;
    }
    goto LAB_0001e362;
  }
  goto LAB_0001e04a;
code_r0x0001e00c:
  bVar21 = SBORROW4(uVar3,0x46);
  bVar19 = (int)(uVar3 - 0x46) < 0;
  bVar20 = uVar3 == 0x46;
  if (!bVar20) goto code_r0x0001e010;
  goto LAB_0001dffa;
code_r0x0001e010:
  if (uVar3 != 0x47) {
LAB_0001e04a:
    (*local_18)(uVar3,local_1c);
    iVar14 = iVar14 + 1;
    goto LAB_0001e352;
  }
LAB_0001e362:
  if (-1 < (int)(uVar13 << 0x1d)) {
    piVar16 = (int *)0x6;
  }
  puVar9 = (undefined4 *)((int)local_20 + 7U & 0xfffffff8);
  uVar11 = *puVar9;
  local_20 = (int **)(puVar9 + 2);
  if ((puVar9[1] & 0x80000000) == 0) {
    if ((int)(uVar13 << 0x14) < 0) {
      local_40 = &DAT_0001e5f8;
    }
    else if ((uVar13 & 1) == 0) {
      local_40 = &DAT_0001e600;
    }
    else {
      local_40 = &DAT_0001e5fc;
    }
  }
  else {
    local_40 = &DAT_0001e5f4;
  }
  uVar12 = puVar9[1] & 0x7fffffff;
  if (uVar3 == 0x65) {
LAB_0001e3bc:
    if ((int)piVar16 < 0x11) {
      puVar4 = (undefined *)((int)piVar16 + 1);
    }
    else {
      puVar4 = (undefined *)0x11;
    }
    FUN_0001dda4(&local_3c,local_63 + 3,uVar11,uVar12,puVar4,0);
    local_6c = local_34;
    local_2c = local_3c;
    in_stack_ffffff84 = (int *)((int)piVar16 + 1);
LAB_0001e48a:
    in_stack_ffffff80 = (int *)0x0;
    local_78 = (undefined *)0x1;
    local_74 = local_38;
    local_6c = local_34;
    local_3c = local_2c;
  }
  else {
    if (uVar3 < 0x66) {
      if (uVar3 == 0x45) goto LAB_0001e3bc;
      if (uVar3 != 0x46) {
        if (uVar3 == 0x47) goto LAB_0001e436;
        goto LAB_0001e4be;
      }
    }
    else if (uVar3 != 0x66) {
      if (uVar3 != 0x67) goto LAB_0001e4be;
LAB_0001e436:
      if ((int)piVar16 < 1) {
        piVar16 = (int *)0x1;
      }
      piVar10 = piVar16;
      if (0x11 < (int)piVar16) {
        piVar10 = (int *)0x11;
      }
      FUN_0001dda4(&local_3c,local_63 + 3,uVar11,uVar12,piVar10,0);
      local_6c = local_34;
      local_2c = local_3c;
      in_stack_ffffff80 = (int *)0x0;
      in_stack_ffffff84 = piVar16;
      if (-1 < (int)(uVar13 << 0x1c)) {
        piVar10 = local_34;
        if ((int)local_34 < (int)piVar16) goto LAB_0001e472;
        while ((1 < (int)in_stack_ffffff84 &&
               (*(char *)((int)in_stack_ffffff84 + (local_3c - 1)) == '0'))) {
          piVar10 = (int *)((int)in_stack_ffffff84 + -1);
LAB_0001e472:
          in_stack_ffffff84 = piVar10;
        }
      }
      if (((int)piVar16 <= (int)local_38) || ((int)(local_38 + 1) < 0 != SCARRY4((int)local_38,4)))
      goto LAB_0001e48a;
      if ((int)local_38 < 1) {
        piVar16 = (int *)((int)in_stack_ffffff84 - (int)local_38);
        in_stack_ffffff80 = local_38;
LAB_0001e4ae:
        in_stack_ffffff84 = piVar16;
      }
      else {
        piVar16 = (int *)((int)local_38 + 1);
        if ((int)in_stack_ffffff84 < (int)piVar16) goto LAB_0001e4ae;
      }
      local_78 = (undefined *)((int)local_38 + (1 - (int)in_stack_ffffff80));
      local_74 = (int *)0x80000000;
      local_3c = local_2c;
      goto LAB_0001e4be;
    }
    local_74 = (int *)0x80000000;
    FUN_0001dda4(&local_3c,local_63 + 3,uVar11,uVar12,piVar16,1);
    local_6c = local_34;
    in_stack_ffffff80 = (int *)0x0;
    local_2c = local_3c;
    in_stack_ffffff84 = local_34;
    if (local_30 == 0) {
      in_stack_ffffff84 = (int *)((int)local_38 + (int)((int)piVar16 + 1));
    }
    if (-1 < (int)piVar16 - (int)in_stack_ffffff84) {
      in_stack_ffffff80 = (int *)(-1 - ((int)piVar16 - (int)in_stack_ffffff84));
      in_stack_ffffff84 = (int *)((int)piVar16 + 1);
    }
    local_78 = (undefined *)((int)in_stack_ffffff84 - (int)piVar16);
  }
LAB_0001e4be:
  if ((-1 < (int)(uVar13 << 0x1c)) && ((int)in_stack_ffffff84 <= (int)local_78)) {
    local_78 = (undefined *)0xffffffff;
  }
  local_61._0_1_ = 0;
  pcVar17 = local_63 + 2;
  if (local_74 != (int *)0x80000000) {
    local_3c = 2;
    local_38 = (int *)0x2b;
    if ((int)local_74 < 0) {
      local_74 = (int *)-(int)local_74;
      local_38 = (int *)0x2d;
    }
    while ((uVar3 = local_3c, local_3c = local_3c - 1, 0 < (int)uVar3 || (local_74 != (int *)0x0)))
    {
      local_74 = (int *)FUN_0001b12c(local_74,10);
      pcVar17 = pcVar17 + -1;
      *pcVar17 = extraout_r1 + '0';
    }
    pcVar17[-1] = (char)local_38;
    pcVar17 = pcVar17 + -2;
    *pcVar17 = (*param_1 & 0x20) + 0x45;
  }
  local_74 = (int *)(local_63 + (2 - (int)pcVar17));
  uVar3 = (uint)*local_40;
  if (uVar3 != 0) {
    uVar3 = 1;
  }
  local_70 = (int *)((int)local_70 +
                    (-1 - (int)((undefined *)
                                ((int)in_stack_ffffff84 + ((int)local_78 >> 0x1f) + uVar3) +
                               (int)local_74)));
  if (-1 < (int)(uVar13 << 0xf)) {
    iVar5 = FUN_0001e624(local_70,uVar13,local_1c,local_18);
    iVar14 = iVar5 + iVar14;
  }
  if (*local_40 != 0) {
    (*local_18)(*local_40,local_1c);
    iVar14 = iVar14 + 1;
  }
  iVar5 = iVar14;
  piVar16 = in_stack_ffffff84;
  if ((int)(uVar13 << 0xf) < 0) {
    iVar5 = FUN_0001e624(local_70,uVar13,local_1c,local_18);
    iVar5 = iVar5 + iVar14;
    piVar16 = in_stack_ffffff84;
  }
  while (iVar14 = iVar5, in_stack_ffffff84 = (int *)((int)piVar16 + -1), 0 < (int)piVar16) {
    if (((int)in_stack_ffffff80 < 0) || ((int)local_6c <= (int)in_stack_ffffff80)) {
      uVar6 = 0x30;
    }
    else {
      uVar6 = *(undefined *)(local_2c + (int)in_stack_ffffff80);
    }
    (*local_18)(uVar6,local_1c);
    in_stack_ffffff80 = (int *)((int)in_stack_ffffff80 + 1);
    local_78 = local_78 + -1;
    iVar5 = iVar14 + 1;
    piVar16 = in_stack_ffffff84;
    if (local_78 == (undefined *)0x0) {
      (*local_18)(0x2e,local_1c);
      iVar5 = iVar14 + 2;
      piVar16 = in_stack_ffffff84;
    }
  }
  while (piVar10 = local_74, local_74 = (int *)((int)local_74 + -1), piVar16 = local_70,
        0 < (int)piVar10) {
    cVar2 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    (*local_18)(cVar2,local_1c);
    iVar14 = iVar14 + 1;
  }
LAB_0001e34c:
  iVar5 = FUN_0001e604(piVar16,uVar13,local_1c,local_18);
  iVar14 = iVar5 + iVar14;
LAB_0001e352:
  param_1 = param_1 + 1;
  goto LAB_0001e354;
}


/* ---- FUN_0001e604 @ 0001e604 ---- */

int FUN_0001e604(int param_1,int param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 << 0x12 < 0) {
    while (param_1 = param_1 + -1, -1 < param_1) {
      (*param_4)(0x20,param_3);
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001e624 @ 0001e624 ---- */

int FUN_0001e624(int param_1,int param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (param_2 << 0xf < 0) {
    uVar2 = 0x30;
  }
  else {
    uVar2 = 0x20;
  }
  if (-1 < param_2 << 0x12) {
    while (param_1 = param_1 + -1, -1 < param_1) {
      (*param_4)(uVar2,param_3);
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


/* ---- FUN_0001e650 @ 0001e650 ---- */

void FUN_0001e650(undefined param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_2;
  *param_2 = puVar1 + 1;
  *puVar1 = param_1;
  return;
}


/* ---- FUN_0001e65c @ 0001e65c ---- */

uint * FUN_0001e65c(char *param_1,undefined *param_2,ushort *param_3)

{
  undefined uVar1;
  ushort uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  bool bVar9;
  uint local_2c;
  char *local_28;
  char *pcStack_20;
  undefined *local_1c;
  ushort *puStack_18;
  
  uVar8 = (uint)*param_3;
  *param_3 = 0;
  pcStack_20 = param_1;
  local_1c = param_2;
  puStack_18 = param_3;
  if (*(undefined **)(param_1 + 0x34) == (undefined *)0x0) {
LAB_0001e698:
    iVar5 = *(int *)(param_1 + 0x30);
    if (iVar5 != 0) {
      if (uVar8 < *param_3 + 0x12) goto LAB_0001e7ba;
      param_2[*param_3] = 0x11;
      uVar2 = *param_3;
      *param_3 = uVar2 + 1;
      param_2[(ushort)(uVar2 + 1)] = 0x10;
      *param_3 = *param_3 + 1;
      iVar6 = 0xf;
      do {
        param_2[*param_3] = *(undefined *)(iVar5 + iVar6);
        iVar6 = (int)(char)((char)iVar6 + -1);
        *param_3 = *param_3 + 1;
      } while (-1 < iVar6);
    }
    puVar7 = (uint *)0x0;
    local_28 = param_1 + 0x20;
    if ((param_1[0x2e] == '\0') ||
       (puVar7 = (uint *)FUN_0001fe14(param_1[0x2e],param_2,param_3,uVar8), puVar7 == (uint *)0x0))
    {
      if (local_28[0xd] == '\0') goto LAB_0001e714;
      puVar7 = (uint *)FUN_0001f334(local_1c,param_3,uVar8);
      bVar9 = puVar7 == (uint *)0x0;
LAB_0001e712:
      if (bVar9) {
LAB_0001e714:
        if (param_1[2] != '\0') {
          if (uVar8 < *param_3 + 4) goto LAB_0001e7ba;
          software_interrupt(0x79);
          if (&local_2c != (uint *)0x0) {
            puVar7 = &local_2c;
            FUN_0001dcf4(s_C_x_0001e8a0,&local_2c);
            goto LAB_0001e7bc;
          }
          local_1c[*param_3] = 3;
          uVar2 = *param_3;
          *param_3 = uVar2 + 1;
          local_1c[(ushort)(uVar2 + 1)] = 0x19;
          uVar2 = *param_3;
          *param_3 = uVar2 + 1;
          sVar4 = FUN_0002113c(local_2c & 0xffff,local_1c + (ushort)(uVar2 + 1));
          *param_3 = sVar4 + *param_3;
        }
        if (param_1[3] != '\0') {
          cVar3 = param_1[3];
          if (uVar8 < *param_3 + 3) goto LAB_0001e7ba;
          local_1c[*param_3] = 2;
          uVar2 = *param_3;
          *param_3 = uVar2 + 1;
          local_1c[(ushort)(uVar2 + 1)] = 1;
          uVar2 = *param_3;
          *param_3 = uVar2 + 1;
          local_1c[(ushort)(uVar2 + 1)] = cVar3;
          *param_3 = *param_3 + 1;
        }
        if (*(undefined **)(param_1 + 4) != (undefined *)0x0) {
          uVar1 = **(undefined **)(param_1 + 4);
          if (uVar8 < *param_3 + 3) goto LAB_0001e7ba;
          local_1c[*param_3] = 2;
          uVar2 = *param_3;
          *param_3 = uVar2 + 1;
          local_1c[(ushort)(uVar2 + 1)] = 10;
          uVar2 = *param_3;
          *param_3 = uVar2 + 1;
          local_1c[(ushort)(uVar2 + 1)] = uVar1;
          *param_3 = *param_3 + 1;
        }
        if (*(short *)(param_1 + 8) == 0) goto LAB_0001e806;
        local_2c = uVar8;
        puVar7 = (uint *)FUN_00021228(param_1 + 8,2,6,local_1c,param_3);
        bVar9 = puVar7 == (uint *)0x0;
LAB_0001e804:
        if (bVar9) {
LAB_0001e806:
          if (*(short *)(param_1 + 0x10) != 0) goto code_r0x0001e80c;
          goto LAB_0001e822;
        }
        goto LAB_0001e712;
      }
    }
    FUN_0001dcf4(s_C_x_0001e898,puVar7);
  }
  else {
    uVar1 = **(undefined **)(param_1 + 0x34);
    if (2 < uVar8) {
      *param_2 = 2;
      uVar2 = *param_3;
      *param_3 = uVar2 + 1;
      param_2[(ushort)(uVar2 + 1)] = 0x11;
      uVar2 = *param_3;
      *param_3 = uVar2 + 1;
      param_2[(ushort)(uVar2 + 1)] = uVar1;
      *param_3 = *param_3 + 1;
      goto LAB_0001e698;
    }
LAB_0001e7ba:
    puVar7 = (uint *)&HardFault;
LAB_0001e7bc:
    FUN_0001dcf4(s_C_x_0001e898,puVar7);
  }
  return puVar7;
code_r0x0001e80c:
  local_2c = uVar8;
  puVar7 = (uint *)FUN_00021228(param_1 + 0x10,3,7,local_1c,param_3);
  bVar9 = puVar7 == (uint *)0x0;
  if (bVar9) {
LAB_0001e822:
    if (*(short *)(param_1 + 0x18) != 0) {
      local_2c = uVar8;
      puVar7 = (uint *)FUN_00021228(param_1 + 0x18,0x14,0x15,local_1c,param_3);
      bVar9 = puVar7 == (uint *)0x0;
      if (!bVar9) goto LAB_0001e804;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar7 = (uint *)FUN_0001f7c0(*(int *)(param_1 + 0x20),local_1c,param_3,uVar8);
      bVar9 = puVar7 == (uint *)0x0;
      if (!bVar9) goto LAB_0001e804;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      puVar7 = (uint *)FUN_00020154(*(int *)(param_1 + 0x24),local_1c,param_3,uVar8);
      bVar9 = puVar7 == (uint *)0x0;
      if (!bVar9) goto LAB_0001e804;
    }
    if (local_28[0xc] != '\0') {
      puVar7 = (uint *)FUN_000209a0(param_1,local_1c,param_3,uVar8);
      bVar9 = puVar7 == (uint *)0x0;
      if (!bVar9) goto LAB_0001e804;
    }
    if (*param_1 == '\0') {
      return puVar7;
    }
    puVar7 = (uint *)FUN_000201bc(param_1,local_1c,param_3,uVar8);
    bVar9 = puVar7 == (uint *)0x0;
    if (bVar9) {
      return (uint *)0x0;
    }
  }
  goto LAB_0001e804;
}


/* ---- FUN_0001e8a8 @ 0001e8a8 ---- */

void FUN_0001e8a8(void)

{
  int iVar1;
  undefined local_b4 [2];
  undefined local_b2;
  undefined local_b1;
  undefined2 *local_90;
  undefined auStack_7c [16];
  undefined2 local_6c;
  byte *local_68;
  undefined auStack_44 [12];
  undefined local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined local_2c;
  undefined4 local_28;
  undefined4 local_24;
  byte local_20;
  byte local_1f;
  byte local_1e;
  byte local_1d;
  byte local_1c;
  byte local_1b;
  undefined2 local_18 [2];
  undefined2 local_14;
  byte *local_10;
  
  local_20 = DAT_0001e95c[5];
  local_1f = DAT_0001e95c[4];
  local_1e = DAT_0001e95c[3];
  local_1d = DAT_0001e95c[2];
  local_1c = DAT_0001e95c[1] ^ 0xaa;
  local_1b = *DAT_0001e95c ^ 0xaa;
  local_18[0] = 0xffff;
  local_10 = &local_20;
  local_14 = 6;
  FUN_0001b212(local_b4,0x38);
  local_b4[0] = 2;
  local_b2 = 1;
  local_b1 = 6;
  local_90 = local_18;
  FUN_0001b212(auStack_7c,0x38);
  local_6c = 1;
  local_68 = DAT_0001e95c + -4;
  FUN_0001b212(auStack_44,0x24);
  local_38 = 1;
  local_34 = 0x40;
  local_30 = 0x708;
  local_2c = 0;
  local_28 = 0x640;
  iVar1 = FUN_0001c9d4();
  if (iVar1 == 0) {
    local_24 = 0xffffffff;
  }
  else {
    local_24 = 0;
  }
  iVar1 = FUN_0001ee44(local_b4,auStack_7c,auStack_44,DAT_0001e960,0);
  if (iVar1 != 0) {
    FUN_0001e9a8(iVar1,0x113,s____main_c_0001e964);
  }
  return;
}


/* ---- FUN_0001e970 @ 0001e970 ---- */

void FUN_0001e970(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001dcf4(s_app_error_fault_handler__u__u_0x_0001e980,param_1,param_2,param_3);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001e9a8 @ 0001e9a8 ---- */

void FUN_0001e9a8(uint param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar2 = param_2;
  uVar3 = param_3;
  uVar4 = param_1;
  v1_led_set_color(0xff0000);
  if (param_1 < 0x14) {
    pcVar1 = *(char **)(DAT_0001e9dc + param_1 * 4);
  }
  else {
    pcVar1 = s_error_0001e9e0;
  }
  FUN_0001dcf4(s_app_error_handler_line_u__s____s_0001e9e8,param_2,param_3,pcVar1,uVar2,uVar3,uVar4)
  ;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001ea0c @ 0001ea0c ---- */

void FUN_0001ea0c(undefined4 param_1,undefined *param_2)

{
  (**(code **)(DAT_0001ea30 + *(int *)(param_2 + 8) * 0xc))
            (param_2 + 8,*param_2,param_1,*(undefined4 *)(param_2 + 0x10),
             *(undefined4 *)(DAT_0001ea34 + 0x20));
  return;
}


/* ---- FUN_0001ea38 @ 0001ea38 ---- */

void FUN_0001ea38(undefined4 param_1)

{
  FUN_0001ea0c(param_1,DAT_0001ea54 + (uint)*DAT_0001ea54 * 0x14 + 4);
  FUN_00020a30(4);
  return;
}


/* ---- FUN_0001ea58 @ 0001ea58 ---- */

undefined4 FUN_0001ea58(int *param_1,undefined2 *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  
  pbVar2 = DAT_0001ea98;
  uVar6 = 5;
  if (DAT_0001ea98[1] != *DAT_0001ea98) {
    bVar1 = *DAT_0001ea98;
    if ((ushort)*DAT_0001ea98 < *(ushort *)(DAT_0001ea98 + 4)) {
      bVar5 = *DAT_0001ea98 + 1;
    }
    else {
      bVar5 = 0;
    }
    *DAT_0001ea98 = bVar5;
    *param_1 = (uint)bVar1 * (uint)*(ushort *)(pbVar2 + 2) + *(int *)(pbVar2 + 0xc);
    iVar4 = *(int *)(pbVar2 + 8);
    iVar3 = (uint)bVar1 * 8;
    *param_2 = *(undefined2 *)(iVar3 + iVar4 + 4);
    uVar6 = 0;
    *param_3 = *(undefined4 *)(iVar4 + iVar3);
  }
  return uVar6;
}


/* ---- FUN_0001ea9c @ 0001ea9c ---- */

undefined4 FUN_0001ea9c(int param_1,uint param_2,undefined4 param_3)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = DAT_0001eb34;
  pcVar1 = DAT_0001eb30;
  if (*(ushort *)(DAT_0001eb30 + 2) < param_2) {
    uVar5 = 9;
  }
  else {
    FUN_0001ed14();
    if ((ushort)(byte)pcVar1[1] < *(ushort *)(pcVar1 + 4)) {
      cVar3 = pcVar1[1] + 1;
    }
    else {
      cVar3 = '\0';
    }
    if (cVar3 == *pcVar1) {
      FUN_0001ed50(0);
    }
    else {
      uVar6 = (uint)(byte)pcVar1[1];
      if ((ushort)(byte)pcVar1[1] < *(ushort *)(pcVar1 + 4)) {
        cVar3 = pcVar1[1] + 1;
      }
      else {
        cVar3 = '\0';
      }
      pcVar1[1] = cVar3;
      FUN_0001ed50(0);
      if (uVar6 != uVar2) {
        iVar4 = *(int *)(pcVar1 + 8);
        iVar7 = uVar6 * 8;
        *(undefined4 *)(iVar4 + iVar7) = param_3;
        if ((param_1 == 0) || (param_2 == 0)) {
          *(undefined2 *)(iVar7 + iVar4 + 4) = 0;
        }
        else {
          FUN_0001b1e0(*(ushort *)(pcVar1 + 2) * uVar6 + *(int *)(pcVar1 + 0xc),param_1,param_2);
          *(short *)(iVar7 + *(int *)(pcVar1 + 8) + 4) = (short)param_2;
        }
        return 0;
      }
    }
    uVar5 = 4;
  }
  return uVar5;
}


/* ---- FUN_0001eb38 @ 0001eb38 ---- */

void FUN_0001eb38(undefined4 param_1,undefined4 param_2,uint param_3,code *param_4)

{
  int iVar1;
  undefined4 local_10;
  uint local_c;
  code *local_8 [2];
  
  local_10 = param_2;
  local_c = param_3;
  local_8[0] = param_4;
  while (iVar1 = FUN_0001ea58(&local_10,&local_c,local_8), iVar1 == 0) {
    (*local_8[0])(local_10,local_c & 0xffff);
  }
  return;
}


/* ---- FUN_0001eb58 @ 0001eb58 ---- */

undefined4 FUN_0001eb58(undefined2 param_1,short param_2,uint param_3)

{
  undefined *puVar1;
  
  puVar1 = DAT_0001eb80;
  if ((param_3 & 3) != 0) {
    return 7;
  }
  *(uint *)(DAT_0001eb80 + 8) = param_3;
  *(uint *)(puVar1 + 0xc) = param_3 + (ushort)(param_2 * 8 + 8);
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 2) = param_1;
  *(short *)(puVar1 + 4) = param_2;
  return 0;
}


/* ---- FUN_0001eb84 @ 0001eb84 ---- */

undefined4 FUN_0001eb84(int *param_1,undefined param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(DAT_0001ebac + 8) != 0) {
    if ((param_3 == 0) || (param_1 == (int *)0x0)) {
      return 7;
    }
    iVar1 = *param_1;
    if (*(char *)(iVar1 + 0x10) == '\0') {
      *(undefined *)(iVar1 + 0x11) = param_2;
      *(int *)(iVar1 + 0x14) = param_3;
      return 0;
    }
  }
  return 8;
}


/* ---- FUN_0001ebb0 @ 0001ebb0 ---- */

undefined4 FUN_0001ebb0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  puVar1 = DAT_0001ec30;
  if ((param_3 & 3) == 0) {
    if (param_3 != 0) {
      FUN_000207ec();
      *(undefined4 *)(puVar1 + 0x14) = param_4;
      *puVar1 = 3;
      iVar3 = 0;
      *(uint *)(puVar1 + 8) = param_3;
      iVar5 = param_3 + 0x18;
      do {
        puVar4 = (undefined *)(iVar3 * 8 + param_3);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = (char)param_2;
        *(int *)(puVar4 + 4) = iVar5;
        iVar5 = param_2 * 0x18 + iVar5;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
      *(undefined4 *)(puVar1 + 0xc) = 0;
      puVar1[1] = 0;
      puVar2 = DAT_0001ec34;
      puVar1[2] = 0;
      *puVar2 = 0x100000;
      FUN_0001c93c(0x14,3);
      *DAT_0001ec38 = 0x100000;
      iVar3 = DAT_0001ec3c;
      *(undefined4 *)(DAT_0001ec3c + 8) = param_1;
      FUN_0001c93c(0x11,3);
      *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)(iVar3 + 4);
      return 0;
    }
    *(undefined4 *)(DAT_0001ec30 + 8) = 0;
  }
  return 7;
}


/* ---- FUN_0001ec40 @ 0001ec40 ---- */

longlong FUN_0001ec40(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint local_20;
  int local_1c;
  undefined4 uStack_18;
  
  if ((*(int *)(DAT_0001ecb4 + 8) != 0) && (param_1 != 0)) {
    if (param_2 < 5) {
      return CONCAT44(param_2,7);
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar3 = param_2;
      if (*(char *)(param_1 + 0x11) != '\x01') {
        uVar3 = 0;
      }
      local_20 = param_2;
      local_1c = param_3;
      uStack_18 = param_4;
      local_1c = FUN_000211ac();
      local_1c = local_1c * 8;
      puVar2 = (undefined *)FUN_00021200(local_1c + *(int *)(DAT_0001ecb4 + 8),&local_20);
      if (puVar2 == (undefined *)0x0) {
        return CONCAT44(local_20,4);
      }
      *puVar2 = 1;
      iVar1 = DAT_0001ecb8;
      *(int *)(puVar2 + 4) = param_1;
      *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(iVar1 + 4);
      *(uint *)(puVar2 + 0xc) = param_2;
      *(uint *)(puVar2 + 0x10) = uVar3;
      *(undefined4 *)(puVar2 + 0x14) = param_3;
      *(undefined *)(local_1c + *(int *)(DAT_0001ecb4 + 8) + 1) = (undefined)local_20;
      FUN_00020ec4();
      return (ulonglong)local_20 << 0x20;
    }
  }
  return CONCAT44(param_2,8);
}


/* ---- FUN_0001ecbc @ 0001ecbc ---- */

undefined4 FUN_0001ecbc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 local_18;
  
  iVar1 = DAT_0001ed0c;
  if (((*(int *)(DAT_0001ed0c + 8) != 0) && (param_1 != 0)) && (*(int *)(param_1 + 0x14) != 0)) {
    *(undefined *)(param_1 + 0x10) = 0;
    local_18 = param_4;
    iVar2 = FUN_000211ac();
    puVar3 = (undefined *)FUN_00021200(iVar2 * 8 + *(int *)(iVar1 + 8),&local_18);
    if (puVar3 != (undefined *)0x0) {
      *puVar3 = 2;
      *(int *)(puVar3 + 4) = param_1;
      *(undefined *)(iVar2 * 8 + *(int *)(iVar1 + 8) + 1) = (undefined)local_18;
      FUN_00020ec4();
      return 0;
    }
    return 4;
  }
  return 8;
}


/* ---- FUN_0001ed10 @ 0001ed10 ---- */

undefined4 FUN_0001ed10(void)

{
  return 0;
}


/* ---- FUN_0001ed14 @ 0001ed14 ---- */

void FUN_0001ed14(undefined *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = DAT_0001ed44;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  if (DAT_0001ed44[1] == 0) {
    DAT_0001ed44[1] = 1;
    uVar4 = DAT_0001ed4c;
    puVar3 = DAT_0001ed48;
    *puVar2 = *DAT_0001ed48 & DAT_0001ed4c;
    *puVar3 = uVar4;
    *param_1 = 0;
  }
  else {
    *param_1 = 1;
  }
  if (iVar5 == 0) {
    enableIRQinterrupts();
  }
  return;
}


/* ---- FUN_0001ed50 @ 0001ed50 ---- */

void FUN_0001ed50(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = DAT_0001ed74;
  if ((DAT_0001ed74[1] != 0) && (param_1 == 0)) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    *DAT_0001ed78 = *DAT_0001ed74;
    puVar2[1] = 0;
    if (iVar3 == 0) {
      enableIRQinterrupts();
    }
  }
  return;
}


/* ---- FUN_0001ed7c @ 0001ed7c ---- */

void FUN_0001ed7c(void)

{
  disableIRQinterrupts();
  *DAT_0001ed88 = *DAT_0001ed88 + 1;
  return;
}


/* ---- FUN_0001ed8c @ 0001ed8c ---- */

void FUN_0001ed8c(void)

{
  int iVar1;
  
  iVar1 = *DAT_0001ed9c;
  *DAT_0001ed9c = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    enableIRQinterrupts();
  }
  return;
}


/* ---- FUN_0001eda0 @ 0001eda0 ---- */

void FUN_0001eda0(undefined4 param_1,undefined4 param_2)

{
  FUN_0001e9a8(DAT_0001edb0,param_1,param_2);
  return;
}


/* ---- FUN_0001edb4 @ 0001edb4 ---- */

undefined * FUN_0001edb4(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 local_5c [2];
  undefined auStack_58 [32];
  undefined auStack_38 [36];
  
  local_5c[0] = 0x1f;
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
LAB_0001edf0:
    if (param_2 != 0) {
      if (*(char *)(param_2 + 3) != '\0') goto LAB_0001edfa;
      puVar2 = (undefined *)FUN_0001e65c(param_2,auStack_38,local_5c);
      if (puVar2 != (undefined *)0x0) {
        FUN_0001dcf4(s_C_x_0001ee3c,puVar2);
        return puVar2;
      }
    }
    software_interrupt(0x72);
  }
  else {
    if ((int)((uint)*(byte *)(param_1 + 3) << 0x1d) < 0) {
      puVar1 = (undefined *)FUN_0001e65c(param_1,auStack_58);
      if (puVar1 != (undefined *)0x0) {
        FUN_0001dcf4(s_C_x_0001ee3c,puVar1);
        return puVar1;
      }
      puVar1 = auStack_58;
      goto LAB_0001edf0;
    }
LAB_0001edfa:
    FUN_0001dcf4(s_C_x_0001ee3c,7);
    puVar1 = (undefined *)0x7;
  }
  return puVar1;
}


/* ---- FUN_0001ee44 @ 0001ee44 ---- */

undefined4
FUN_0001ee44(undefined *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_0001ef60;
  if ((param_1 != (undefined *)0x0) && (param_3 != 0)) {
    *(undefined *)(DAT_0001ef60 + 5) = 0;
    *(undefined4 *)(iVar1 + 0xc) = param_4;
    *(undefined4 *)(iVar1 + 0x10) = param_5;
    FUN_0001b1e0(DAT_0001ef64,param_3,0x24);
    FUN_0001f008();
    iVar1 = DAT_0001ef64;
    *(int *)(DAT_0001ef64 + 0x24) = DAT_0001ef64 + 0x34;
    *(int *)(iVar1 + 0x2c) = iVar1 + 0x54;
    FUN_0001b212(iVar1 + -0x38,0x38);
    iVar1 = DAT_0001ef64;
    *(undefined *)(DAT_0001ef64 + -0x38) = *param_1;
    *(undefined *)(iVar1 + -0x36) = param_1[2];
    *(undefined *)(iVar1 + -0x35) = param_1[3];
    *(undefined *)(iVar1 + -0x37) = param_1[1];
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar1 + -0x24) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + -0x28) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar1 + -0x2c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(iVar1 + -0x30) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + -0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + -0x20) = uVar2;
    if (*(int *)(param_1 + 0x24) != 0) {
      *(undefined2 **)(iVar1 + -0x14) = (undefined2 *)(iVar1 + 0x74);
      *(int *)(iVar1 + 0x7c) = iVar1 + 0x80;
      *(undefined2 *)(iVar1 + 0x74) = **(undefined2 **)(param_1 + 0x24);
      *(undefined2 *)(*(int *)(iVar1 + -0x14) + 4) = *(undefined2 *)(*(int *)(param_1 + 0x24) + 4);
      iVar6 = *(int *)(iVar1 + -0x14);
      for (uVar3 = 0; uVar3 < *(ushort *)(iVar6 + 4); uVar3 = uVar3 + 1) {
        *(undefined *)(iVar1 + 0x80 + uVar3) =
             *(undefined *)(*(int *)(*(int *)(param_1 + 0x24) + 8) + uVar3);
      }
    }
    iVar6 = DAT_0001ef64;
    if (*(int *)(param_1 + 0x28) != 0) {
      iVar5 = DAT_0001ef64 + 0xac;
      iVar4 = DAT_0001ef64 + 0xa0;
      *(int *)(DAT_0001ef64 + 0xa8) = iVar5;
      *(int *)(iVar1 + -0x10) = iVar4;
      *(undefined2 *)(iVar6 + 0xa4) = *(undefined2 *)(*(int *)(param_1 + 0x28) + 4);
      **(undefined2 **)(iVar1 + -0x10) = **(undefined2 **)(param_1 + 0x28);
      iVar6 = *(int *)(iVar1 + -0x10);
      for (uVar3 = 0; uVar3 < *(ushort *)(iVar6 + 4); uVar3 = uVar3 + 1) {
        *(undefined *)(iVar5 + uVar3) =
             *(undefined *)(*(int *)(*(int *)(param_1 + 0x28) + 8) + uVar3);
      }
      *(undefined *)(DAT_0001ef64 + -0xc) = param_1[0x2c];
    }
    iVar6 = DAT_0001ef60;
    if (*(int *)(param_1 + 0x20) != 0) {
      *(int *)(iVar1 + -0x18) = DAT_0001ef60 + 0x14;
      *(undefined2 *)(iVar6 + 0x16) = *(undefined2 *)(*(int *)(param_1 + 0x20) + 2);
      **(undefined2 **)(iVar1 + -0x18) = **(undefined2 **)(param_1 + 0x20);
    }
    if (*(int *)(param_1 + 4) != 0) {
      *(int *)(iVar1 + -0x34) = DAT_0001ef60 + 6;
      *(undefined4 *)(iVar1 + -0x34) = *(undefined4 *)(param_1 + 4);
    }
    uVar2 = FUN_0001edb4(DAT_0001ef64 + -0x38,param_2);
    return uVar2;
  }
  return 0xe;
}


/* ---- FUN_0001ef68 @ 0001ef68 ---- */

void FUN_0001ef68(short *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  iVar3 = DAT_0001efd4;
  sVar2 = *param_1;
  if (sVar2 == 0x10) {
    if (*(char *)(param_1 + 0xb) != '\x01') {
      return;
    }
    *(short *)(DAT_0001efd4 + 8) = param_1[2];
    return;
  }
  if (sVar2 == 0x11) {
    *(undefined *)(DAT_0001efd4 + 1) = 0;
  }
  else {
    if (sVar2 != 0x1b) {
      return;
    }
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
    cVar1 = *(char *)(DAT_0001efd4 + 5);
    if (cVar1 == '\x01') {
      uVar5 = 2;
    }
    else if (cVar1 == '\x02') {
      uVar5 = 3;
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\x04') {
          return;
        }
        *(undefined *)(DAT_0001efd4 + 4) = 0;
        pcVar6 = *(code **)(iVar3 + 0xc);
        if (pcVar6 == (code *)0x0) {
          return;
        }
        (*pcVar6)(0);
        return;
      }
      *(undefined *)(DAT_0001efd4 + 4) = 3;
      uVar5 = 4;
    }
    iVar4 = FUN_0001f018(uVar5);
    if (iVar4 == 0) {
      return;
    }
    pcVar6 = *(code **)(iVar3 + 0x10);
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)();
      return;
    }
  }
  return;
}


/* ---- FUN_0001efd8 @ 0001efd8 ---- */

void FUN_0001efd8(int param_1)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar1 = DAT_0001f004;
  if (((param_1 == 2) || (param_1 == 3)) && (*DAT_0001f004 != '\0')) {
    *DAT_0001f004 = '\0';
    iVar2 = FUN_0001f018(pcVar1[5]);
    if ((iVar2 != 0) && (pcVar3 = *(code **)(pcVar1 + 0x10), pcVar3 != (code *)0x0)) {
      (*pcVar3)();
    }
  }
  return;
}


/* ---- FUN_0001f008 @ 0001f008 ---- */

void FUN_0001f008(void)

{
  FUN_0001b212(DAT_0001f014,7);
  return;
}


/* ---- FUN_0001f018 @ 0001f018 ---- */

undefined * FUN_0001f018(undefined param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined uVar5;
  int iVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined local_30 [4];
  int local_2c;
  undefined local_28;
  char *local_24;
  undefined2 local_20;
  undefined2 local_1e;
  
  iVar2 = DAT_0001f1e0;
  *(undefined *)(DAT_0001f1e0 + 5) = param_1;
  FUN_0001f008();
  pcVar3 = DAT_0001f1e4;
  if ((DAT_0001f1e4[1] == '\0') || (*(char *)(iVar2 + 5) != '\x01')) {
    if (DAT_0001f1e4[2] == '\0') goto LAB_0001f056;
    if ((*(char *)(iVar2 + 5) == '\x01') || (*(char *)(iVar2 + 5) == '\x02')) goto LAB_0001f046;
  }
  else {
LAB_0001f046:
    if (*(code **)(iVar2 + 0xc) == (code *)0x0) {
      *(undefined *)(iVar2 + 3) = 0;
    }
    else {
      *(undefined *)(iVar2 + 3) = 1;
      (**(code **)(iVar2 + 0xc))(8);
    }
LAB_0001f056:
    if ((*(char *)(iVar2 + 5) == '\x01') &&
       ((pcVar3[1] == '\0' || (iVar6 = FUN_000203dc(DAT_0001f1e0 + 0x19), iVar6 == 0)))) {
      *(undefined *)(iVar2 + 5) = 2;
    }
    else if (*(char *)(iVar2 + 5) != '\x02') goto LAB_0001f090;
    if ((pcVar3[2] == '\0') || (iVar6 = FUN_000203dc(DAT_0001f1e0 + 0x19), iVar6 == 0)) {
      *(undefined *)(iVar2 + 5) = 3;
    }
  }
LAB_0001f090:
  if ((pcVar3[0xc] == '\0') && (*(char *)(iVar2 + 5) == '\x03')) {
    *(undefined *)(iVar2 + 5) = 4;
  }
  if ((pcVar3[0x18] == '\0') && (*(char *)(iVar2 + 5) == '\x04')) {
    *(undefined *)(iVar2 + 5) = 0;
    *(undefined *)(iVar2 + 4) = 0;
  }
  if ((*(code **)(iVar2 + 0xc) == (code *)0x0) ||
     ((((*(char *)(iVar2 + 5) != '\x03' && (*(char *)(iVar2 + 5) != '\x04')) || (*pcVar3 == '\0'))
      || (*(char *)(iVar2 + 1) != '\0')))) {
    *(undefined *)(iVar2 + 2) = 0;
  }
  else {
    *(undefined *)(iVar2 + 2) = 1;
    (**(code **)(iVar2 + 0xc))(7);
  }
  FUN_0001b212(local_30,0x18);
  pcVar4 = DAT_0001f1e4;
  local_30[0] = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = (char *)0x0;
  cVar1 = *(char *)(iVar2 + 5);
  if (cVar1 == '\x01') {
    local_2c = DAT_0001f1e0 + 0x18;
    local_30[0] = 1;
    local_1e = 0;
    local_20 = 0;
    *(undefined *)(iVar2 + 4) = 1;
  }
  else if (cVar1 == '\x02') {
    local_2c = DAT_0001f1e0 + 0x18;
    local_30[0] = 1;
    local_1e = *(undefined2 *)(pcVar3 + 8);
    local_20 = *(undefined2 *)(pcVar3 + 4);
    *(undefined *)(iVar2 + 4) = 2;
  }
  else {
    pcVar8 = DAT_0001f1e4 + 0x24;
    if (cVar1 == '\x03') {
      local_1e = *(undefined2 *)(pcVar3 + 0x14);
      local_20 = *(undefined2 *)(pcVar3 + 0x10);
      iVar6 = FUN_000213a8(DAT_0001f1e4 + 0x24);
      if (((iVar6 == 0) || (*pcVar3 == '\0')) || (*(char *)(iVar2 + 1) != '\0')) {
        uVar5 = 3;
      }
      else {
        local_28 = 2;
        pcVar4[-0x35] = '\x04';
        local_24 = pcVar8;
        puVar7 = (undefined *)FUN_0001edb4(DAT_0001f1e4 + -0x38,0);
        if (puVar7 != (undefined *)0x0) goto LAB_0001f1c4;
        uVar5 = 5;
      }
LAB_0001f1b4:
      *(undefined *)(iVar2 + 4) = uVar5;
    }
    else if (cVar1 == '\x04') {
      local_20 = *(undefined2 *)(pcVar3 + 0x1c);
      local_1e = *(undefined2 *)(pcVar3 + 0x20);
      iVar6 = FUN_000213a8(DAT_0001f1e4 + 0x24);
      if (((iVar6 == 0) || (*pcVar3 == '\0')) || (*(char *)(iVar2 + 1) != '\0')) {
        uVar5 = 4;
      }
      else {
        local_28 = 2;
        pcVar4[-0x35] = '\x04';
        local_24 = pcVar8;
        puVar7 = (undefined *)FUN_0001edb4(DAT_0001f1e4 + -0x38,0);
        if (puVar7 != (undefined *)0x0) goto LAB_0001f1c4;
        uVar5 = 6;
      }
      goto LAB_0001f1b4;
    }
    if (*(char *)(iVar2 + 5) == '\0') goto LAB_0001f1d2;
  }
  software_interrupt(0x73);
  puVar7 = local_30;
  if (&stack0x00000000 != &Reserved5) {
LAB_0001f1c4:
    FUN_0001dcf4(s_C_x_0001f1e8,puVar7);
    return puVar7;
  }
LAB_0001f1d2:
  if (*(code **)(iVar2 + 0xc) != (code *)0x0) {
    (**(code **)(iVar2 + 0xc))(*(undefined *)(iVar2 + 4));
  }
  return (undefined *)0x0;
}


/* ---- FUN_0001f1f0 @ 0001f1f0 ---- */

void FUN_0001f1f0(code **param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 local_10;
  
  if ((param_1 != (code **)0x0) && (param_2 != (short *)0x0)) {
    sVar1 = *param_2;
    if (sVar1 == 0x10) {
      sVar1 = param_2[2];
    }
    else {
      if (sVar1 != 0x11) {
        if (sVar1 != 0x50) {
          return;
        }
        if (*(char *)(param_1 + 5) == '\0') {
          return;
        }
        if (param_2[3] != *(short *)((int)param_1 + 10)) {
          return;
        }
        if (param_2[8] != 2) {
          return;
        }
        if (*param_1 == (code *)0x0) {
          return;
        }
        local_10 = CONCAT31((int3)((uint)param_4 >> 8),
                            -1 < (int)((uint)*(byte *)(param_2 + 9) << 0x1f));
        (**param_1)(param_1,&local_10);
        return;
      }
      sVar1 = -1;
    }
    *(short *)((int)param_1 + 0x12) = sVar1;
  }
  return;
}


/* ---- FUN_0001f250 @ 0001f250 ---- */

void FUN_0001f250(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_0001b1e0(DAT_0001f294,param_1,0x1c);
  puVar2 = DAT_0001f298;
  *DAT_0001f298 = 0;
  if (*param_1 == 0) {
    software_interrupt(0x7b);
    puVar1 = DAT_0001f298;
  }
  else {
    FUN_0001b1e0(puVar2 + 4,*param_1,8);
    software_interrupt(0x7a);
    puVar1 = puVar2;
  }
  if (puVar1 == (undefined *)0xfffffffc) {
    *(undefined2 *)(puVar2 + 2) = 0xffff;
    puVar2[1] = 0;
    FUN_0001eb84(DAT_0001f2a0,0,DAT_0001f29c);
  }
  return;
}


/* ---- FUN_0001f2a4 @ 0001f2a4 ---- */

void FUN_0001f2a4(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = DAT_0001f330;
  iVar3 = DAT_0001f32c;
  iVar5 = DAT_0001f328;
  sVar1 = *param_1;
  sVar2 = *(short *)(DAT_0001f32c + 0xe);
  if (sVar1 == 0x10) {
    *(short *)(DAT_0001f328 + 2) = param_1[2];
    FUN_0001b1e0(DAT_0001f328 + 0xc,param_1 + 0xc,8,param_4,param_4);
    *(undefined *)(iVar5 + 1) = 0;
    if (sVar2 != 0) {
      return;
    }
  }
  else {
    if (sVar1 == 0x11) {
      *(undefined2 *)(DAT_0001f328 + 2) = 0xffff;
      *(undefined *)(iVar5 + 1) = 0;
LAB_0001f306:
      iVar5 = FUN_0001ecbc(*puVar4);
      if (iVar5 == 0) {
        return;
      }
      if (*(code **)(iVar3 + 0x18) == (code *)0x0) {
        return;
      }
      (**(code **)(iVar3 + 0x18))();
      return;
    }
    if (sVar1 == 0x12) {
      FUN_0001b1e0(DAT_0001f328 + 0xc,param_1 + 4,8,param_4,param_4);
    }
    else {
      if (sVar1 != 0x50) {
        return;
      }
      if (param_1[3] != sVar2) {
        return;
      }
      if (param_1[8] != 2) {
        return;
      }
      if (-1 < (int)((uint)*(byte *)(param_1 + 9) << 0x1f)) goto LAB_0001f306;
    }
  }
  FUN_0001f870();
  return;
}


/* ---- FUN_0001f334 @ 0001f334 ---- */

undefined4 * FUN_0001f334(int param_1,ushort *param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (param_3 < *param_2 + 9) {
    return (undefined4 *)&HardFault;
  }
  software_interrupt(0x71);
  local_18 = param_3;
  uStack_14 = param_4;
  if (&local_18 != (undefined4 *)0x0) {
    FUN_0001dcf4(DAT_0001f3a0,&local_18);
    return &local_18;
  }
  *(undefined *)(param_1 + (uint)*param_2) = 8;
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  *(undefined *)(param_1 + (uint)(ushort)(uVar1 + 1)) = 0x1b;
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  FUN_0001b1e0((uint)(ushort)(uVar1 + 1) + param_1,(int)&local_18 + 1,6);
  uVar1 = *param_2;
  *param_2 = uVar1 + 6;
  if ((char)local_18 != '\0') {
    local_18._0_1_ = '\x01';
  }
  *(char *)(param_1 + (uint)(ushort)(uVar1 + 6)) = (char)local_18;
  *param_2 = *param_2 + 1;
  return (undefined4 *)0x0;
}


/* ---- FUN_0001f3a4 @ 0001f3a4 ---- */

void FUN_0001f3a4(short *param_1)

{
  undefined4 uVar1;
  
  FUN_0001f2a4();
  FUN_0001ef68(param_1);
  if (*param_1 == 0x10) {
    *DAT_0001f3f0 = param_1[2];
    uVar1 = 0xe3;
  }
  else {
    if (*param_1 != 0x11) goto LAB_0001f3d8;
    *DAT_0001f3f0 = -1;
    uVar1 = 0xe4;
  }
  FUN_0001cf3c(uVar1,0);
LAB_0001f3d8:
  FUN_0001f1f0(DAT_0001f3f4,param_1);
  FUN_0001f3fc(DAT_0001f3f8,param_1);
  FUN_0001dadc(param_1);
  return;
}


/* ---- FUN_0001f3fc @ 0001f3fc ---- */

void FUN_0001f3fc(int param_1,short *param_2)

{
  undefined uVar1;
  short sVar2;
  int iVar3;
  
  if ((param_1 != 0) && (param_2 != (short *)0x0)) {
    sVar2 = *param_2;
    if (sVar2 == 0x10) {
      sVar2 = param_2[2];
    }
    else {
      if (sVar2 != 0x11) {
        if (sVar2 != 0x50) {
          return;
        }
        if ((param_2[3] == *(short *)(param_1 + 0x10)) && (param_2[8] == 2)) {
          iVar3 = -((int)((uint)*(byte *)(param_2 + 9) << 0x1f) >> 0x1f);
          uVar1 = (undefined)iVar3;
          if (iVar3 != 0) {
            uVar1 = 1;
          }
          *(undefined *)(param_1 + 0x16) = uVar1;
          return;
        }
        if (param_2[3] != *(short *)(param_1 + 4)) {
          return;
        }
        if (*(code **)(param_1 + 0x18) == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0001f432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x18))(param_1,param_2 + 9,param_2[8]);
        return;
      }
      sVar2 = -1;
    }
    *(short *)(param_1 + 0x14) = sVar2;
  }
  return;
}


/* ---- FUN_0001f454 @ 0001f454 ---- */

void FUN_0001f454(void)

{
  int iVar1;
  undefined2 local_20 [10];
  undefined4 local_c [3];
  
  local_c[0] = *DAT_0001f4ec;
  iVar1 = FUN_00020ad0(local_c,DAT_0001f4f0,0x48,0);
  if (iVar1 != 0) {
    FUN_0001e9a8(iVar1,0x181,s____main_c_0001f4f4);
  }
  iVar1 = FUN_00020aa0(0,1,local_20);
  if (iVar1 != 0) {
    FUN_0001e9a8(iVar1,0x185,s____main_c_0001f4f4);
  }
  local_20[0] = 2;
  iVar1 = FUN_00020884(DAT_0001f500);
  if (iVar1 != 0) {
    FUN_0001e9a8(iVar1,0x18c,s____main_c_0001f4f4);
  }
  iVar1 = FUN_00020a8c(local_20);
  if (iVar1 != 0) {
    FUN_0001e9a8(iVar1,400,s____main_c_0001f4f4);
  }
  iVar1 = FUN_00020a78(DAT_0001f504);
  if (iVar1 != 0) {
    FUN_0001e9a8(iVar1,0x194,s____main_c_0001f4f4);
  }
  iVar1 = FUN_00020b04(DAT_0001f508);
  if (iVar1 != 0) {
    FUN_0001e9a8(iVar1,0x198,s____main_c_0001f4f4);
  }
  return;
}


/* ---- FUN_0001f50c @ 0001f50c ---- */

void FUN_0001f50c(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int extraout_r1;
  uint extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  pbVar4 = DAT_0001f608;
  bVar1 = *DAT_0001f608;
  iVar11 = *(int *)(DAT_0001f608 + (uint)bVar1 * 0x14 + 0x10);
  iVar5 = *(int *)(DAT_0001f608 + (uint)bVar1 * 0x14 + 0xc) * 0xc + DAT_0001f60c;
  uVar2 = *(ushort *)(iVar5 + 8);
  uVar3 = *(ushort *)(iVar5 + 10);
  iVar5 = *(int *)(iVar5 + 4);
  uVar6 = FUN_000204d8();
  FUN_0001b12c(iVar11,uVar6);
  uVar10 = (uint)uVar3 * (uint)uVar2 + iVar5;
  uVar9 = (uint)*(ushort *)(pbVar4 + (uint)bVar1 * 0x14 + 6) +
          (uint)*(ushort *)(pbVar4 + (uint)bVar1 * 0x14 + 8) + iVar11;
  *(undefined4 *)(DAT_0001f610 + 0x10) = 0;
  if (((extraout_r1 == 0) &&
      ((uVar7 = FUN_000204d8(), uVar7 == *(ushort *)(pbVar4 + (uint)bVar1 * 0x14 + 6) ||
       ((uVar9 == uVar10 && (*(short *)(pbVar4 + (uint)bVar1 * 0x14 + 8) == 0)))))) ||
     (*(int *)(pbVar4 + (uint)bVar1 * 0x14 + 0xc) == 2)) {
    uVar6 = FUN_000204d8();
    uVar6 = FUN_0001b12c(iVar11,uVar6);
    *(undefined4 *)(DAT_0001f610 + 0x14) = uVar6;
    uVar6 = 3;
  }
  else {
    uVar6 = FUN_000204d8();
    FUN_0001b12c((uint)*(ushort *)(pbVar4 + (uint)bVar1 * 0x14 + 8) + iVar11,uVar6);
    iVar5 = DAT_0001f610;
    *(uint *)(DAT_0001f610 + 0xc) = extraout_r1_00 >> 2;
    uVar6 = FUN_000204d8();
    FUN_0001b12c(uVar9,uVar6);
    if ((uVar9 != uVar10) && (extraout_r1_01 != 0)) {
      uVar9 = uVar9 & 0xffff;
      uVar6 = FUN_000204d8();
      iVar11 = FUN_0001b12c(uVar10 & 0xffff,uVar6);
      uVar6 = FUN_000204d8();
      iVar8 = FUN_0001b12c(uVar9,uVar6);
      if (iVar11 == iVar8) {
        uVar9 = (uVar10 & 0xffff) - uVar9;
      }
      else {
        iVar11 = FUN_000204d8();
        uVar6 = FUN_000204d8();
        FUN_0001b12c(uVar9,uVar6);
        uVar9 = iVar11 - extraout_r1_02;
      }
      *(uint *)(iVar5 + 0x10) = uVar9 >> 2;
    }
    uVar6 = 2;
  }
  FUN_00020a30(uVar6);
  return;
}


/* ---- FUN_0001f614 @ 0001f614 ---- */

void FUN_0001f614(void)

{
  if (DAT_0001f634[(uint)*DAT_0001f634 * 0x14 + 4] != 4) {
    FUN_0001f6dc();
    return;
  }
  FUN_00020a30(1);
  return;
}


/* ---- FUN_0001f638 @ 0001f638 ---- */

void FUN_0001f638(void)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = DAT_0001f668;
  bVar1 = *DAT_0001f668;
  *(uint *)(DAT_0001f66c + 0x20) = (uint)*(ushort *)(DAT_0001f668 + (uint)bVar1 * 0x14 + 6);
  bVar1 = pbVar2[(uint)bVar1 * 0x14 + 4];
  if (bVar1 != 1) {
    if ((bVar1 == 3) || (bVar1 == 4)) {
      FUN_0001f50c();
    }
    return;
  }
  FUN_00020a30(1);
  return;
}


/* ---- FUN_0001f670 @ 0001f670 ---- */

void FUN_0001f670(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x14 + DAT_0001f68c;
  *(undefined *)(iVar1 + 4) = 0;
  *(undefined2 *)(iVar1 + 6) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 1;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined2 *)(iVar1 + 8) = 0;
  return;
}


/* ---- FUN_0001f690 @ 0001f690 ---- */

undefined4
FUN_0001f690(byte param_1,undefined4 *param_2,undefined4 param_3,undefined2 param_4,
            undefined2 param_5)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  
  pbVar1 = DAT_0001f6d4;
  if (DAT_0001f6d4[1] != 0x1e) {
    uVar3 = (uint)*DAT_0001f6d4 + (uint)DAT_0001f6d4[1];
    if (0x1d < uVar3) {
      uVar3 = uVar3 - 0x1e;
    }
    DAT_0001f6d4[uVar3 * 0x14 + 4] = param_1;
    *(undefined4 *)(pbVar1 + uVar3 * 0x14 + 0x14) = param_3;
    uVar2 = *param_2;
    *(undefined4 *)(pbVar1 + uVar3 * 0x14 + 0x10) = param_2[1];
    *(undefined4 *)(pbVar1 + uVar3 * 0x14 + 0xc) = uVar2;
    *(undefined2 *)(pbVar1 + uVar3 * 0x14 + 6) = param_4;
    *(undefined2 *)(pbVar1 + uVar3 * 0x14 + 8) = param_5;
    pbVar1[1] = pbVar1[1] + 1;
    if (*DAT_0001f6d8 == '\0') {
      FUN_0001f638();
    }
    return 0;
  }
  return 4;
}


/* ---- FUN_0001f6dc @ 0001f6dc ---- */

void FUN_0001f6dc(void)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = DAT_0001f714;
  FUN_0001ea0c(0,DAT_0001f714 + (uint)*DAT_0001f714 * 0x14 + 4);
  FUN_0001f670(*pbVar2);
  pbVar2[1] = pbVar2[1] - 1;
  bVar1 = *pbVar2;
  *pbVar2 = bVar1 + 1;
  if ((byte)(bVar1 + 1) == 0x1e) {
    *pbVar2 = 0;
  }
  FUN_00020a30(0);
  return;
}


/* ---- FUN_0001f718 @ 0001f718 ---- */

void FUN_0001f718(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(uint **)(DAT_0001f7a8 + 0xc) != (uint *)0x0) {
    uVar4 = **(uint **)(DAT_0001f7a8 + 0xc);
    iVar2 = *(int *)(DAT_0001f7ac + 4);
    iVar5 = *(int *)(DAT_0001f7a8 + 0x10);
    uVar3 = (iVar2 - iVar5 & 0xffffffU) + 3;
    if (*(char *)(DAT_0001f7a8 + 3) == '\0') {
      *(undefined4 *)(DAT_0001f7b0 + 4) = 0x10000;
      *(undefined4 *)(DAT_0001f7b0 + -0x3c) = 0x10000;
      *DAT_0001f7b4 = 0x20000;
      *DAT_0001f7b8 = 0x20000;
      *DAT_0001f7bc = 1;
      FUN_0001b0d4(0x2f);
      *(undefined *)(DAT_0001f7a8 + 3) = 1;
    }
    if (uVar3 < uVar4) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + iVar5 & 0xffffff;
    puVar1 = (uint *)(DAT_0001f7ac + 0x40);
    *puVar1 = uVar3;
    if ((uVar3 - iVar2 & 0xffffff) < (*(int *)(DAT_0001f7ac + 4) - iVar2 & 0xffffffU) + 3) {
      *puVar1 = *(uint *)(DAT_0001f7ac + 4);
      FUN_0001b0d4(0x2f);
      DAT_0001f7b4[-0x20] = 0x20000;
    }
    return;
  }
  FUN_000207ec();
  return;
}


/* ---- FUN_0001f7c0 @ 0001f7c0 ---- */

undefined4 FUN_0001f7c0(ushort *param_1,int param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = DAT_0001f850;
  if (param_4 < *param_3 + 6) {
    return 0xc;
  }
  uVar5 = (uint)*param_1;
  if (5 < uVar5) {
    if (((((uVar5 < 0xc81) || (uVar5 == DAT_0001f850)) && (uVar4 = (uint)param_1[1], 5 < uVar4)) &&
        ((uVar4 < 0xc81 || (uVar4 == DAT_0001f850)))) &&
       ((uVar5 == DAT_0001f850 || ((uVar4 == DAT_0001f850 || (uVar5 <= uVar4)))))) {
      *(undefined *)(param_2 + (uint)*param_3) = 5;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0x12;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      sVar3 = FUN_0002113c(*param_1,(uint)(ushort)(uVar1 + 1) + param_2,uVar2,0xc80,param_4);
      uVar1 = *param_3;
      *param_3 = sVar3 + uVar1;
      sVar3 = FUN_0002113c(param_1[1],(uint)(ushort)(sVar3 + uVar1) + param_2);
      *param_3 = sVar3 + *param_3;
      return 0;
    }
  }
  FUN_0001dcf4(DAT_0001f854,7);
  return 7;
}


/* ---- FUN_0001f870 @ 0001f870 ---- */

void FUN_0001f870(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  int in_r3;
  char *pcVar6;
  undefined4 local_18;
  
  puVar3 = &local_18;
  local_18 = in_r3;
  iVar2 = FUN_0001fd60(DAT_0001f8cc);
  iVar1 = DAT_0001f8d0;
  pcVar6 = (char *)(DAT_0001f8cc + -0xc);
  if (iVar2 == 0) {
    if (*pcVar6 == '\0') {
      if (*(char *)(DAT_0001f8cc + -0xb) == '\0') {
        uVar5 = *(undefined4 *)(DAT_0001f8d0 + 4);
      }
      else {
        uVar5 = *(undefined4 *)(DAT_0001f8d0 + 8);
      }
      puVar3 = (undefined4 *)FUN_0001ec40(*DAT_0001f8d4,uVar5,0);
      if ((puVar3 == (undefined4 *)0x0) ||
         (pcVar4 = *(code **)(iVar1 + 0x18), pcVar4 == (code *)0x0)) goto LAB_0001f8c4;
    }
    else {
      pcVar4 = *(code **)(DAT_0001f8d0 + 0x14);
      if (pcVar4 == (code *)0x0) goto LAB_0001f8c4;
      local_18 = (uint)local_18._1_3_ << 8;
    }
  }
  else {
    pcVar4 = *(code **)(DAT_0001f8d0 + 0x14);
    if (pcVar4 == (code *)0x0) goto LAB_0001f8c4;
    local_18 = CONCAT31(local_18._1_3_,1);
  }
  (*pcVar4)(puVar3);
LAB_0001f8c4:
  *pcVar6 = '\0';
  return;
}


/* ---- FUN_0001f8d8 @ 0001f8d8 ---- */

void FUN_0001f8d8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0001f928;
  if ((int)((uint)*(byte *)(DAT_0001f928 + 4) << 0x1c) < 0) {
    FUN_00020de8();
    return;
  }
  *(int *)(DAT_0001f928 + 0x14) = *(int *)(DAT_0001f928 + 0x14) + 1;
  if (*(int *)(iVar1 + 0xc) == 0) {
    iVar3 = FUN_0001fdc4();
    if (iVar3 == 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        FUN_0001f614();
        return;
      }
      if ((*(uint *)(iVar1 + 4) & 1) == 0) {
        *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
        uVar2 = 0;
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 4;
  }
  FUN_00020e00(uVar2);
  return;
}


/* ---- FUN_0001f92c @ 0001f92c ---- */

void FUN_0001f92c(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_0001f950 + 4);
  if (-1 < (int)(uVar1 << 0x1c)) {
    if ((int)(uVar1 << 0x1e) < 0) {
      *(uint *)(DAT_0001f950 + 4) = uVar1 | 1;
    }
    FUN_00020e00(2);
    return;
  }
  FUN_00020de8();
  return;
}


/* ---- FUN_0001f954 @ 0001f954 ---- */

undefined4 FUN_0001f954(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0001f990;
  cVar1 = *(char *)(DAT_0001f990 + 1);
  if (cVar1 != *(char *)(DAT_0001f990 + 2)) {
    *(char *)(DAT_0001f990 + 1) = cVar1 + '\x01';
    if (cVar1 == '\x01') {
      *(undefined *)(iVar2 + 1) = 0;
    }
    iVar3 = *(int *)(DAT_0001f990 + 0x18 + (uint)*(byte *)(iVar2 + 1) * 4);
    *param_1 = iVar3;
    *(uint *)(iVar2 + 0x10) = iVar3 + *(int *)(iVar2 + 0x10) & 0xffffff;
    return 1;
  }
  *param_1 = 0;
  return 0;
}


/* ---- FUN_0001f994 @ 0001f994 ---- */

void FUN_0001f994(void)

{
  int iVar1;
  
  iVar1 = DAT_0001f9a4;
  *(undefined4 *)(DAT_0001f9a4 + 4) = 1;
  *(undefined4 *)(iVar1 + 4) = 2;
  *(undefined4 *)(iVar1 + 4) = 4;
  return;
}


/* ---- FUN_0001f9a8 @ 0001f9a8 ---- */

void FUN_0001f9a8(int param_1)

{
  if (param_1 != 0) {
    if (param_1 == 0x11) {
      *(uint *)(DAT_0001f9c4 + 4) = *(uint *)(DAT_0001f9c4 + 4) | 8;
      return;
    }
    FUN_0001ea38();
  }
  return;
}


/* ---- FUN_0001f9c8 @ 0001f9c8 ---- */

void FUN_0001f9c8(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = DAT_0001fa3c;
  cVar1 = *DAT_0001fa3c;
  if (cVar1 == '\x01') {
    if (-1 < *(int *)(DAT_0001fa3c + 4) << 0x1c) {
      sVar2 = *(short *)(DAT_0001fa40 + (uint)*DAT_0001fa40 * 0x14 + 6);
      sVar3 = *(short *)(DAT_0001fa3c + 0x1c);
      *(short *)(DAT_0001fa40 + (uint)*DAT_0001fa40 * 0x14 + 6) = sVar2 - sVar3;
      if ((short)(sVar2 - sVar3) != 0) {
        FUN_00020d70();
        return;
      }
      FUN_0001f6dc();
      return;
    }
  }
  else {
    if (cVar1 == '\x02') {
      (**(code **)(DAT_0001fa44 + (uint)(byte)DAT_0001fa3c[1] * 4))();
      return;
    }
    if (cVar1 != '\x03') {
      return;
    }
    if (-1 < *(int *)(DAT_0001fa3c + 4) << 0x1c) {
      *(int *)(DAT_0001fa3c + 0x14) = *(int *)(DAT_0001fa3c + 0x14) + 1;
      iVar5 = FUN_0001fdc4();
      if (iVar5 != 0) {
        FUN_00020a30(*pcVar4);
        return;
      }
      FUN_0001f614();
      return;
    }
  }
  FUN_0002013c();
  return;
}


/* ---- FUN_0001fa48 @ 0001fa48 ---- */

void FUN_0001fa48(void)

{
  software_interrupt(0x28);
  FUN_0001f9a8();
  return;
}


/* ---- FUN_0001fa52 @ 0001fa52 ---- */

void FUN_0001fa52(void)

{
  software_interrupt(0x29);
  FUN_0001f9a8();
  return;
}


/* ---- FUN_0001fa5c @ 0001fa5c ---- */

uint FUN_0001fa5c(uint param_1)

{
  FUN_0001ed10(param_1 & 0xff);
  return param_1;
}


/* ---- FUN_0001fa6c @ 0001fa6c ---- */

/* WARNING: Removing unreachable block (ram,0x0001face) */

void FUN_0001fa6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8;
  
  local_8 = CONCAT31((int3)((uint)param_4 >> 8),0x11);
  software_interrupt(0x7c);
  if (&local_8 != (undefined4 *)0x0) {
    FUN_0001e9a8(&local_8,0x69,DAT_0001fae0,param_4,param_2);
  }
  software_interrupt(0x78);
  FUN_0001e9a8(0x180,0x6d,DAT_0001fae0);
  FUN_0001fc58(0x14,DAT_0001fae4,0);
  FUN_0001b1e0(&stack0xfffffff1,DAT_0001fae8,6);
  software_interrupt(0x70);
  return;
}


/* ---- lis3dh_config @ 0001faec ---- */

void lis3dh_config(int param_1)

{
  undefined4 uVar1;
  
  FUN_00020b48(0);
  FUN_0001c128(1);
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80;
  }
  FUN_0001c34c(uVar1);
  FUN_0001c240(0x20);
  FUN_0001c27e(3);
  FUN_0001c26c(10);
  FUN_0001c2b2(0x14);
  FUN_0001c298(0xd);
  FUN_0001bf6e(1);
  FUN_00020b18(0);
  return;
}


/* ---- FUN_0001fb36 @ 0001fb36 ---- */

void FUN_0001fb36(int param_1)

{
  undefined4 uVar1;
  
  FUN_00020b48(0);
  if (param_1 == 0) {
    FUN_0001c30e(0);
    uVar1 = 0x80;
  }
  else {
    FUN_0001c332(0x20);
    FUN_0001c2f4(0);
    FUN_0001c41a(0);
    FUN_0001c370(0);
    FUN_0001c128(1);
    FUN_0001c30e(0x40);
    uVar1 = 0x2a;
  }
  FUN_0001c3ee(uVar1);
  FUN_00020b18(0);
  return;
}


/* ---- FUN_0001fb80 @ 0001fb80 ---- */

void FUN_0001fb80(void)

{
  FUN_00020b48(0);
  FUN_0001c44c(2);
  FUN_00020b18(0);
  return;
}


/* ---- FUN_0001fb96 @ 0001fb96 ---- */

void FUN_0001fb96(void)

{
  FUN_0001bfa0();
  return;
}


/* ---- FUN_0001fb9e @ 0001fb9e ---- */

void FUN_0001fb9e(void)

{
  undefined4 in_r3;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = in_r3;
  FUN_0001fb36(0);
  FUN_00020b48(0);
  FUN_0001bf5c(auStack_8);
  FUN_0001c158();
  FUN_00020b18(0);
  return;
}


/* ---- FUN_0001fbbe @ 0001fbbe ---- */

void FUN_0001fbbe(void)

{
  uint in_r3;
  uint local_8 [2];
  
  local_8[0] = in_r3;
  FUN_00020b48(0);
  FUN_0001be7e(local_8);
  if (((local_8[0] & 0xff) == 0x24) || ((local_8[0] & 0xff) == 0x2c)) {
    FUN_0001bacc();
  }
  return;
}


/* ---- FUN_0001fc58 @ 0001fc58 ---- */

void FUN_0001fc58(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  int local_20;
  uint local_1c;
  undefined4 uStack_18;
  
  uVar1 = DAT_0001fcc8;
  local_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  uVar2 = FUN_0001b12c(param_1 * 1000,DAT_0001fcc8);
  if (uVar2 < 6) {
    uVar2 = 6;
  }
  uVar3 = FUN_0001b12c(param_2 * 1000,uVar1);
  if (0xc80 < uVar3) {
    uVar3 = 0xc80;
  }
  local_20 = CONCAT22(uVar3,uVar2);
  local_1c = param_3 & 0xffff;
  uVar4 = FUN_0001b158((param_2 * (param_3 + 1) * 2 + 1000) * 1000,DAT_0001fccc);
  local_1c = CONCAT22(uVar4,(undefined2)local_1c);
  software_interrupt(0x7a);
  if (&local_20 != (int *)0x0) {
    FUN_0001e9a8(&local_20,0x3f,s____main_c_0001fcd0);
  }
  return;
}


/* ---- FUN_0001fcdc @ 0001fcdc ---- */

void FUN_0001fcdc(void)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_r3;
  bool bVar4;
  undefined4 local_18;
  
  pcVar2 = DAT_0001fd58;
  if (*DAT_0001fd58 != '\0') {
    bVar4 = *(int *)(DAT_0001fd58 + 0x10) == 0;
    local_18 = in_r3;
    if (*(int *)(DAT_0001fd58 + 0xc) == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    do {
      if (!bVar4) goto LAB_0001fd04;
      while( true ) {
        if (!bVar1) {
          local_18 = CONCAT22(local_18._2_2_,*(undefined2 *)(pcVar2 + 2));
          iVar3 = *(int *)(pcVar2 + 8);
          software_interrupt(0x61);
          if (iVar3 == 5) {
            bVar1 = true;
          }
          else if (iVar3 == 0) {
            (**(code **)(pcVar2 + 0xc))(*(undefined4 *)(pcVar2 + 8));
          }
          else {
            FUN_0001e9a8(iVar3,0xb2,DAT_0001fd5c);
          }
        }
        if (bVar4) break;
LAB_0001fd04:
        software_interrupt(0x52);
        if (&local_18 == (undefined4 *)0x5) {
          bVar4 = true;
        }
        else if (&local_18 == (undefined4 *)0x0) {
          (**(code **)(pcVar2 + 0x10))(local_18);
        }
        else {
          FUN_0001e9a8(&local_18,0x93,DAT_0001fd5c);
        }
      }
    } while (!bVar1);
  }
  return;
}


/* ---- FUN_0001fd60 @ 0001fd60 ---- */

undefined4 FUN_0001fd60(int param_1)

{
  if ((*DAT_0001fd78 <= *(ushort *)(param_1 + 2)) && (*(ushort *)(param_1 + 2) <= DAT_0001fd78[1]))
  {
    return 1;
  }
  return 0;
}


/* ---- FUN_0001fd7c @ 0001fd7c ---- */

undefined4 FUN_0001fd7c(void)

{
  uint uVar1;
  
  if ((((char)*(undefined2 *)(DAT_0001fdc0 + 0x20) == '\x01') &&
      ((*(ushort *)(DAT_0001fdc0 + 0x24) & 0xf) == 0)) &&
     ((((uVar1 = (uint)*(ushort *)(DAT_0001fdc0 + 0x28) << 0x18, uVar1 >> 0x1c == 0 &&
        (((uint)*(ushort *)(DAT_0001fdc0 + 0x2c) << 0x18) >> 0x1c == 0)) ||
       ((uVar1 = uVar1 >> 0x1c, uVar1 == 1 &&
        (((uint)*(ushort *)(DAT_0001fdc0 + 0x2c) << 0x18) >> 0x1c == 0)))) ||
      ((uVar1 == 3 && (((uint)*(ushort *)(DAT_0001fdc0 + 0x2c) << 0x18) >> 0x1c == 0)))))) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0001fdc4 @ 0001fdc4 ---- */

undefined4 FUN_0001fdc4(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  pbVar2 = DAT_0001fe00;
  bVar1 = *DAT_0001fe00;
  iVar5 = *(int *)(DAT_0001fe00 + (uint)bVar1 * 0x14 + 0x10);
  uVar3 = FUN_000204d8();
  uVar4 = FUN_0001b12c((uint)*(ushort *)(pbVar2 + (uint)bVar1 * 0x14 + 6) +
                       (uint)*(ushort *)(pbVar2 + (uint)bVar1 * 0x14 + 8) + iVar5 + -1,uVar3);
  if ((uVar4 <= *(uint *)(DAT_0001fe04 + 0x14)) &&
     ((*(uint *)(DAT_0001fe04 + 0x14) != uVar4 || (*(int *)(DAT_0001fe04 + 0x10) != 0)))) {
    return 0;
  }
  return 1;
}


/* ---- FUN_0001fe08 @ 0001fe08 ---- */

undefined4 FUN_0001fe08(uint param_1)

{
  if ((param_1 & 3) != 0) {
    return 0;
  }
  return 1;
}


/* ---- FUN_0001fe14 @ 0001fe14 ---- */

undefined4 FUN_0001fe14(int param_1,int param_2,ushort *param_3,uint param_4)

{
  undefined uVar1;
  ushort uVar2;
  
  if (param_4 < *param_3 + 3) {
    return 0xc;
  }
  *(undefined *)(param_2 + (uint)*param_3) = 2;
  uVar2 = *param_3;
  *param_3 = uVar2 + 1;
  *(undefined *)(param_2 + (uint)(ushort)(uVar2 + 1)) = 0x1c;
  uVar2 = *param_3 + 1;
  *param_3 = uVar2;
  if (param_1 == 1) {
    uVar1 = 0;
  }
  else if (param_1 == 2) {
    uVar1 = 1;
  }
  else {
    if (param_1 == 3) {
      *(undefined *)(param_2 + (uint)uVar2) = 2;
      goto LAB_0001fe5e;
    }
    if (param_1 != 4) {
      return 7;
    }
    uVar1 = 3;
  }
  *(undefined *)(param_2 + (uint)uVar2) = uVar1;
LAB_0001fe5e:
  *param_3 = *param_3 + 1;
  return 0;
}


/* ---- FUN_0001fe68 @ 0001fe68 ---- */

undefined4 FUN_0001fe68(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  byte bVar15;
  
  piVar2 = *(int **)(DAT_0001ff1c + 0xc);
  uVar8 = *(undefined4 *)(DAT_0001ff1c + 0x10);
  bVar15 = DAT_0001ff1c[4];
  iVar4 = *(int *)(DAT_0001ff1c + 8);
  piVar3 = piVar2;
  uVar11 = (uint)*DAT_0001ff1c;
  do {
    pbVar13 = DAT_0001ff1c;
    uVar12 = uVar11 - 1 & 0xff;
    if (uVar11 == 0) {
      *(undefined4 *)(DAT_0001ff1c + 0x10) = uVar8;
      *(int **)(pbVar13 + 0xc) = piVar3;
      pbVar13[4] = bVar15;
      if (piVar3 == piVar2) {
        return 0;
      }
      return 1;
    }
    pbVar13 = (byte *)(uVar12 * 8 + iVar4);
    uVar9 = (uint)*pbVar13;
LAB_0001fef6:
    uVar11 = uVar12;
  } while (pbVar13[1] == uVar9);
  pcVar5 = (char *)(*(int *)(pbVar13 + 4) + uVar9 * 0x18);
  uVar9 = uVar9 + 1 & 0xff;
  if (pbVar13[2] == uVar9) {
    uVar9 = 0;
  }
  cVar1 = *pcVar5;
  if (cVar1 == '\x02') {
    piVar7 = piVar3;
    piVar10 = piVar3;
    while (piVar6 = piVar7, piVar6 != (int *)0x0) {
      if (piVar6 == *(int **)(pcVar5 + 4)) {
        if (piVar6 != (int *)0x0) {
          if ((piVar10 == piVar6) && (piVar3 = (int *)piVar3[7], piVar3 == (int *)0x0)) {
            *(undefined4 *)(DAT_0001ff20 + 8) = 1;
            uVar8 = 0;
            bVar15 = 1;
          }
          iVar14 = *piVar6;
          piVar7 = (int *)piVar6[7];
          piVar10[7] = (int)piVar7;
          if (piVar7 != (int *)0x0) {
            *piVar7 = *piVar7 + iVar14;
          }
        }
        break;
      }
      piVar10 = piVar6;
      piVar7 = (int *)piVar6[7];
    }
  }
  else if (cVar1 == '\x03') {
    for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[7]) {
      *(undefined *)(piVar3 + 4) = 0;
    }
  }
  goto LAB_0001fef6;
}


/* ---- FUN_0001ff24 @ 0001ff24 ---- */

undefined4 FUN_0001ff24(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  
  iVar3 = *(int *)(DAT_0001fff0 + 0xc);
  uVar1 = (uint)*DAT_0001fff0;
LAB_0001ffd2:
  uVar8 = uVar1 - 1 & 0xff;
  if (uVar1 == 0) {
    if (*(int *)(DAT_0001fff0 + 0xc) != iVar3) {
      return 1;
    }
    return 0;
  }
  pbVar7 = (byte *)(uVar8 * 8 + *(int *)(DAT_0001fff0 + 8));
  do {
    if (param_1 == (int *)0x0) {
      do {
        uVar1 = uVar8;
        if (*pbVar7 == pbVar7[1]) goto LAB_0001ffd2;
LAB_0001ff48:
        uVar1 = *pbVar7 + 1;
        pcVar4 = (char *)(*(int *)(pbVar7 + 4) + (uint)*pbVar7 * 0x18);
        *pbVar7 = (byte)uVar1;
        if ((uVar1 & 0xff) == (uint)pbVar7[2]) {
          *pbVar7 = 0;
        }
        piVar2 = *(int **)(pcVar4 + 4);
      } while ((*pcVar4 != '\x01') || (*(char *)(piVar2 + 4) != '\0'));
      piVar2[1] = *(int *)(pcVar4 + 8);
      piVar2[2] = *(int *)(pcVar4 + 0xc);
      piVar2[3] = *(int *)(pcVar4 + 0x10);
      piVar2[6] = *(int *)(pcVar4 + 0x14);
      piVar6 = param_1;
      if (DAT_0001fff0[4] != 0) {
        piVar2[1] = 0;
      }
    }
    else {
      if (param_1 == (int *)0x0) goto LAB_0001ff48;
      piVar6 = (int *)param_1[7];
      piVar2 = param_1;
    }
    uVar1 = piVar2[1] - *(int *)(DAT_0001fff0 + 0x10) & 0xffffff;
    if (uVar1 < DAT_0001fff4) {
      iVar5 = uVar1 + piVar2[2];
LAB_0001ffb2:
      *piVar2 = iVar5;
    }
    else {
      uVar1 = *(int *)(DAT_0001fff0 + 0x10) - piVar2[1] & 0xffffff;
      if (uVar1 < (uint)piVar2[2]) {
        iVar5 = piVar2[2] - uVar1;
        goto LAB_0001ffb2;
      }
      *piVar2 = 0;
    }
    piVar2[1] = 0;
    piVar2[2] = 0;
    *(undefined *)(piVar2 + 4) = 1;
    piVar2[7] = 0;
    FUN_00020ed4();
    param_1 = piVar6;
  } while( true );
}


/* ---- FUN_0001fff8 @ 0001fff8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001fff8(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined uStack_14;
  undefined2 uStack_12;
  undefined uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  piVar1 = DAT_00020108;
  *DAT_00020108 = 0;
  _DAT_40000000 = 1;
  do {
  } while (*piVar1 == 0);
  *(undefined4 *)(DAT_0002010c + 0x18) = 1;
  piVar1[1] = 0;
  _DAT_40000008 = 1;
  do {
  } while (piVar1[1] == 0);
  FUN_0001c900(DAT_00020114,DAT_00020110,8);
  FUN_0001db1c();
  FUN_0001dcb0();
  FUN_00021358();
  FUN_0001fb96();
  FUN_0001fb80();
  *(undefined4 *)(DAT_00020118 + 4) = 0x80000000;
  FUN_0001dc10();
  FUN_0001c650();
  v1_led_set_color(0);
  FUN_0001d100();
  FUN_0001f454();
  FUN_0001fa6c();
  FUN_0001dca4();
  FUN_0001e8a8();
  FUN_0001b212(&uStack_20,0x1c);
  uStack_1c = 0x8000;
  uStack_18 = 0x10000;
  uStack_20 = 0;
  uStack_14 = 5;
  uStack_12 = 0;
  uStack_10 = 0;
  uStack_c = DAT_0002011c;
  uStack_8 = DAT_00020120;
  iVar2 = FUN_0001f250(&uStack_20);
  if (iVar2 != 0) {
    FUN_0001e9a8(iVar2,0xbf,s____main_c_00020124);
  }
  iVar2 = FUN_0001eb58(0x10,8,DAT_00020130);
  if (iVar2 != 0) {
    FUN_0001e9a8(iVar2,0x2c0,s____main_c_00020124);
  }
  iVar2 = FUN_0001c9d4();
  if (iVar2 == 0) {
    FUN_0001d4f4(DAT_00020138);
  }
  else {
    iVar2 = FUN_0001f018(3);
    if (iVar2 != 0) {
      FUN_0001e9a8(iVar2,DAT_00020134,s____main_c_00020124);
    }
  }
  iVar2 = FUN_0001c9e4();
  if (iVar2 == 0) {
    uVar3 = 0xf6;
  }
  else {
    uVar3 = 0xf5;
  }
  FUN_0001cf3c(uVar3,1);
  do {
    do {
      FUN_0001eb38();
      iVar2 = FUN_0002133c();
      software_interrupt(0x48);
    } while (iVar2 == 0);
    FUN_0001e9a8(iVar2,0x20c,s____main_c_00020124);
  } while( true );
}


/* ---- FUN_0002013c @ 0002013c ---- */

void FUN_0002013c(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_00020150;
  *(uint *)(DAT_00020150 + 4) = *(uint *)(DAT_00020150 + 4) & 0xfffffff7;
  FUN_00020a30(*puVar1);
  return;
}


/* ---- FUN_00020154 @ 00020154 ---- */

undefined4 FUN_00020154(undefined2 *param_1,int param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  
  uVar1 = param_1[2];
  if (((uint)*param_3 + uVar1 + 4 <= param_4) && (uVar1 + 2 < 0xff)) {
    *(char *)(param_2 + (uint)*param_3) = (char)uVar1 + '\x03';
    uVar1 = *param_3;
    *param_3 = uVar1 + 1;
    *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0xff;
    uVar1 = *param_3;
    *param_3 = uVar1 + 1;
    sVar2 = FUN_0002113c(*param_1,(uint)(ushort)(uVar1 + 1) + param_2);
    uVar1 = *param_3;
    *param_3 = sVar2 + uVar1;
    if (param_1[2] != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        return 7;
      }
      FUN_0001b1e0((uint)(ushort)(sVar2 + uVar1) + param_2);
      *param_3 = *param_3 + param_1[2];
    }
    return 0;
  }
  return 0xc;
}


/* ---- FUN_000201bc @ 000201bc ---- */

longlong FUN_000201bc(char *param_1,uint param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined uVar5;
  undefined4 local_20;
  
  if ((*param_1 == '\x01') && (param_1[1] == '\0')) {
    return CONCAT44(param_2,7);
  }
  uVar3 = (uint)*param_3;
  local_20 = param_2;
  if ((uVar3 + 2 <= param_4) && ((*param_1 != '\x01' || (uVar3 + (byte)param_1[1] + 2 <= param_4))))
  {
    uVar3 = (param_4 - uVar3) - 2;
    uVar2 = (undefined2)uVar3;
    local_20._2_2_ = (undefined2)(param_2 >> 0x10);
    local_20 = CONCAT22(local_20._2_2_,uVar2);
    iVar4 = (uint)*param_3 + param_2 + 2;
    software_interrupt(0x7d);
    if (iVar4 != 0) {
      FUN_0001dcf4(DAT_00020268,iVar4);
      return CONCAT44(local_20,iVar4);
    }
    if (*param_1 == '\x02') {
      uVar5 = 9;
    }
    else {
      uVar5 = 8;
      if ((*param_1 == '\x01') && ((uint)(byte)param_1[1] <= (uVar3 & 0xffff))) {
        local_20 = CONCAT22(local_20._2_2_,(ushort)(byte)param_1[1]);
      }
      else {
        local_20 = CONCAT22(local_20._2_2_,uVar2);
      }
    }
    if ((ushort)local_20 < 0xff) {
      *(char *)(param_2 + *param_3) = (char)local_20 + '\x01';
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (ushort)(uVar1 + 1)) = uVar5;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *param_3 = uVar1 + 1 + (ushort)local_20;
      return (ulonglong)local_20 << 0x20;
    }
  }
  return CONCAT44(local_20,0xc);
}


/* ---- FUN_0002026c @ 0002026c ---- */

void FUN_0002026c(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  *(uint *)(param_1 * 4 + DAT_0002028c) =
       param_3 << 1 | param_2 | param_4 << 2 | param_5 << 8 | param_6 << 0x10;
  return;
}


/* ---- FUN_00020290 @ 00020290 ---- */

void FUN_00020290(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  *(uint *)(param_1 * 4 + DAT_000202b0) =
       param_3 << 1 | param_2 | param_4 << 2 | param_5 << 8 | param_6 << 0x10;
  return;
}


/* ---- FUN_000202b4 @ 000202b4 ---- */

void FUN_000202b4(int param_1)

{
  *(undefined4 *)(param_1 * 4 + DAT_000202c0) = 2;
  return;
}


/* ---- FUN_000202c4 @ 000202c4 ---- */

void FUN_000202c4(undefined4 param_1,undefined4 param_2)

{
  FUN_00020290(param_1,0,0,param_2,0,0);
  return;
}


/* ---- FUN_000202d6 @ 000202d6 ---- */

void FUN_000202d6(undefined4 param_1)

{
  FUN_0002026c(param_1,1,1,0,0,0);
  return;
}


/* ---- FUN_000202ea @ 000202ea ---- */

void FUN_000202ea(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00020290(param_1,0,0,param_2,0,param_3);
  return;
}


/* ---- FUN_00020300 @ 00020300 ---- */

uint FUN_00020300(uint param_1)

{
  return *(uint *)(DAT_0002030c + 0x10) >> (param_1 & 0xff) & 1;
}


/* ---- FUN_00020310 @ 00020310 ---- */

void FUN_00020310(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = param_1 * 4 + DAT_00020338;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & DAT_0002033c;
  *(uint *)(iVar1 + 0x10) =
       *(uint *)(iVar1 + 0x10) | (uint)(param_2 << 0x1b) >> 0x13 |
       (uint)(param_3 << 0x1e) >> 0xe | (uint)(param_4 << 0x1f) >> 0xb;
  return;
}


/* ---- FUN_00020340 @ 00020340 ---- */

void FUN_00020340(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 * 4 + DAT_00020360;
  uVar1 = *(uint *)(iVar2 + 0x10);
  *(uint *)(iVar2 + 0x10) = uVar1 | 0x1f03;
  *(uint *)(iVar2 + 0x10) = uVar1 | 3;
  return;
}


/* ---- FUN_00020364 @ 00020364 ---- */

void FUN_00020364(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 4 + DAT_0002037c;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffefffff | (uint)(param_2 << 0x1f) >> 0xb;
  return;
}


/* ---- FUN_00020380 @ 00020380 ---- */

int FUN_00020380(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + param_2);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_0002038a @ 0002038a ---- */

uint FUN_0002038a(int param_1,uint param_2)

{
  param_2 = *(uint *)(param_1 + 0x304) & param_2;
  if (param_2 != 0) {
    param_2 = 1;
  }
  return param_2;
}


/* ---- FUN_0002039a @ 0002039a ---- */

void FUN_0002039a(int param_1)

{
  if (param_1 == 0) {
    FUN_0001cf3c(0xe2,0);
  }
  return;
}


/* ---- FUN_000203dc @ 000203dc ---- */

undefined4 FUN_000203dc(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + uVar1) != '\0') {
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 6);
  return 0;
}


/* ---- FUN_00020434 @ 00020434 ---- */

undefined8 FUN_00020434(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar7;
  
  piVar2 = DAT_000204d4;
  if (-1 < (int)((uint)*(byte *)(DAT_000204d0 + 4) << 0x1d)) {
    return CONCAT44(param_2,8);
  }
  if (param_1 == (int *)0x0) {
    return CONCAT44(param_2,0xe);
  }
  iVar6 = param_2;
  if ((*param_1 == 0) && (*DAT_000204d4 != 0)) {
    if ((uint)param_1[1] <
        (uint)*(ushort *)(DAT_000204d4 + 2) * (uint)*(ushort *)((int)DAT_000204d4 + 10) +
        DAT_000204d4[1]) {
      iVar3 = FUN_0001fe08();
      if (iVar3 == 0) {
        return CONCAT44(iVar6,0x10);
      }
      iVar3 = param_1[1];
      iVar5 = *param_1;
      iVar6 = piVar2[iVar5 * 3 + 1];
      uVar1 = *(ushort *)(piVar2 + iVar5 * 3 + 2);
      FUN_0001b12c(iVar3 - iVar6);
      if ((((extraout_r1 == 0) && (FUN_0001b12c(param_2,(uint)uVar1), extraout_r1_00 == 0)) &&
          (param_2 != 0)) &&
         ((uint)(iVar3 + param_2) <=
          iVar6 + (uint)*(ushort *)((int)piVar2 + iVar5 * 0xc + 10) * (uint)uVar1)) {
        uVar7 = 0;
        uVar4 = FUN_0001f690(3,param_1,0,param_2,0,iVar3,param_4);
        return CONCAT44(uVar7,uVar4);
      }
    }
  }
  return CONCAT44(iVar6,7);
}


/* ---- FUN_000204d8 @ 000204d8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000204d8(void)

{
  return _DAT_10000010 & 0xffff;
}


/* ---- FUN_000204e4 @ 000204e4 ---- */

undefined4 FUN_000204e4(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = DAT_00020520;
  uVar3 = 0;
  *DAT_00020520 = 0;
  puVar1[1] = 0;
  do {
    FUN_0001f670(uVar3);
    puVar1 = DAT_00020524;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x1e);
  *(undefined2 *)(DAT_00020524 + 2) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 8) = 0x3b800;
  puVar2 = DAT_00020528;
  *DAT_00020528 = 0;
  *(undefined2 *)(puVar2 + 2) = 0;
  *(undefined2 *)((int)puVar2 + 10) = 0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 4) = 4;
  return 0;
}


/* ---- FUN_0002052c @ 0002052c ---- */

undefined4 FUN_0002052c(int param_1,int *param_2,uint param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar1 = DAT_000205d0;
  if ((int)((uint)*(byte *)(DAT_000205cc + 4) << 0x1d) < 0) {
    if ((param_2 == (int *)0x0) || (param_1 == 0)) {
      uVar2 = 0xe;
    }
    else {
      if (((((*param_2 == 0) && (*DAT_000205d0 != 0)) &&
           (uVar3 = (uint)*(ushort *)(DAT_000205d0 + 2),
           (uint)param_2[1] < uVar3 * *(ushort *)((int)DAT_000205d0 + 10) + DAT_000205d0[1])) &&
          ((param_3 != 0 && (param_3 <= uVar3)))) && (param_3 + param_4 <= uVar3)) {
        piVar5 = param_2;
        uVar3 = param_3;
        iVar6 = param_4;
        iVar4 = FUN_0001fe08(param_1);
        if (((iVar4 != 0) && (iVar4 = FUN_0001fe08(param_4), iVar4 != 0)) &&
           (iVar4 = FUN_0001fe08(param_2[1]), iVar4 != 0)) {
          FUN_0001b1e0(param_1,param_2[1] + param_4,param_3);
          (*(code *)piVar1[*param_2 * 3])(param_2,2,0,param_1,param_3,param_1,piVar5,uVar3,iVar6);
          return 0;
        }
        return 0x10;
      }
      uVar2 = 7;
    }
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}


/* ---- FUN_000205d4 @ 000205d4 ---- */

undefined4 FUN_000205d4(int *param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = DAT_00020674;
  if (-1 < (int)((uint)*(byte *)(DAT_00020674 + 4) << 0x1d)) {
    return 8;
  }
  if (((param_1 != (int *)0x0) && (param_2 != (uint *)0x0)) && (*param_1 != 0)) {
    uVar1 = *(ushort *)(param_1 + 1);
    if (((uVar1 - 0x10 < DAT_00020678) && (*(ushort *)((int)param_1 + 6) != 0)) &&
       ((uVar7 = *(uint *)(DAT_00020674 + 8),
        (uint)uVar1 * (uint)*(ushort *)((int)param_1 + 6) + uVar7 < 0x3bc01 && ((uVar1 & 3) == 0))))
    {
      uVar3 = (uint)*(ushort *)(DAT_00020674 + 2);
      if (uVar3 != 1) {
        *param_2 = uVar3;
        param_2[1] = uVar7;
        iVar5 = DAT_0002067c;
        iVar6 = uVar3 * 0xc + DAT_0002067c;
        *(uint *)(iVar6 + 4) = uVar7;
        *(int *)(iVar5 + uVar3 * 0xc) = *param_1;
        *(undefined2 *)(iVar6 + 8) = *(undefined2 *)(param_1 + 1);
        *(undefined2 *)(iVar6 + 10) = *(undefined2 *)((int)param_1 + 6);
        uVar4 = FUN_000204d8();
        iVar5 = FUN_000204d8();
        iVar5 = FUN_0001b158(iVar5 + -1 +
                             (uint)*(ushort *)((int)param_1 + 6) * (uint)*(ushort *)(param_1 + 1),
                             uVar4);
        iVar6 = FUN_000204d8();
        *(int *)(iVar2 + 8) = iVar5 * iVar6 + *(int *)(iVar2 + 8);
        *(short *)(iVar2 + 2) = *(short *)(iVar2 + 2) + 1;
        return 0;
      }
      return 4;
    }
    return 7;
  }
  return 0xe;
}


/* ---- FUN_00020680 @ 00020680 ---- */

undefined4 FUN_00020680(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (-1 < (int)((uint)*(byte *)(DAT_00020708 + 4) << 0x1d)) {
    return 8;
  }
  if ((param_2 != 0) && (param_1 != (int *)0x0)) {
    if ((*param_1 == 0) && (*DAT_0002070c != 0)) {
      uVar3 = (uint)*(ushort *)(DAT_0002070c + 2);
      if (((uint)param_1[1] < uVar3 * *(ushort *)((int)DAT_0002070c + 10) + DAT_0002070c[1]) &&
         (((param_3 != 0 && (param_3 <= uVar3)) && (param_3 + param_4 <= uVar3)))) {
        iVar1 = FUN_0001fe08(param_2);
        if (((iVar1 != 0) && (iVar1 = FUN_0001fe08(param_4), iVar1 != 0)) &&
           (iVar1 = FUN_0001fe08(param_1[1]), iVar1 != 0)) {
          uVar2 = FUN_0001f690(1,param_1,param_2,param_3,param_4);
          return uVar2;
        }
        return 0x10;
      }
    }
    return 7;
  }
  return 0xe;
}


/* ---- FUN_00020710 @ 00020710 ---- */

void FUN_00020710(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_00020758;
  cVar1 = *DAT_00020758;
  if ((cVar1 != '\0') && (cVar1 != '\x04')) {
    if (param_1 == 2) {
LAB_00020752:
      FUN_0001f9c8();
      return;
    }
    if (param_1 == 3) {
      if ((int)((uint)(byte)DAT_00020758[4] << 0x1c) < 0) goto LAB_00020752;
      iVar3 = *(int *)(DAT_00020758 + 0x18);
      *(int *)(DAT_00020758 + 0x18) = iVar3 + 1;
      if (iVar3 + 1 == 3) {
        FUN_0001ea38(0xd);
        return;
      }
      if (cVar1 == '\x02') {
        FUN_00020e00(pcVar2[1]);
        return;
      }
      FUN_00020a30();
    }
  }
  return;
}


/* ---- FUN_0002075c @ 0002075c ---- */

undefined4 FUN_0002075c(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (-1 < (int)((uint)*(byte *)(DAT_000207e4 + 4) << 0x1d)) {
    return 8;
  }
  if ((param_2 != 0) && (param_1 != (int *)0x0)) {
    if ((*param_1 == 0) && (*DAT_000207e8 != 0)) {
      uVar3 = (uint)*(ushort *)(DAT_000207e8 + 2);
      if (((uint)param_1[1] < uVar3 * *(ushort *)((int)DAT_000207e8 + 10) + DAT_000207e8[1]) &&
         (((param_3 != 0 && (param_3 <= uVar3)) && (param_3 + param_4 <= uVar3)))) {
        iVar1 = FUN_0001fe08(param_2);
        if (((iVar1 != 0) && (iVar1 = FUN_0001fe08(param_4), iVar1 != 0)) &&
           (iVar1 = FUN_0001fe08(param_1[1]), iVar1 != 0)) {
          uVar2 = FUN_0001f690(4,param_1,param_2,param_3,param_4);
          return uVar2;
        }
        return 0x10;
      }
    }
    return 7;
  }
  return 0xe;
}


/* ---- FUN_000207ec @ 000207ec ---- */

void FUN_000207ec(void)

{
  int iVar1;
  
  *DAT_00020820 = 0x20000;
  *(undefined4 *)(DAT_00020824 + 8) = 0x10000;
  *(undefined4 *)(DAT_00020824 + -0x38) = 0x10000;
  iVar1 = DAT_00020828;
  *(undefined4 *)(DAT_00020828 + 4) = 1;
  FUN_0001b0d4(0x2f);
  *(undefined4 *)(iVar1 + 8) = 1;
  iVar1 = DAT_0002082c;
  *(undefined4 *)(DAT_0002082c + 0x10) = 0;
  FUN_0001b0d4(0x2f);
  *(undefined *)(iVar1 + 3) = 0;
  return;
}


/* ---- FUN_00020830 @ 00020830 ---- */

int FUN_00020830(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00020864;
  iVar3 = DAT_0002085c;
  cVar1 = *(char *)(DAT_0002085c + 0x17);
  *(undefined4 *)(DAT_00020860 + 0x108) = 0;
  if (cVar1 != '\0') {
    *(char *)(*(int *)(iVar3 + 0xc) + (uint)*(byte *)(iVar3 + 0x19)) =
         (char)*(undefined4 *)(iVar2 + 0x18);
    *(char *)(iVar3 + 0x19) = *(char *)(iVar3 + 0x19) + '\x01';
    return iVar3;
  }
  return *(int *)(iVar2 + 0x18);
}


/* ---- FUN_00020868 @ 00020868 ---- */

undefined8 FUN_00020868(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_18 = CONCAT31((int3)((uint)param_1 >> 8),1);
  local_10 = CONCAT31((int3)((uint)param_3 >> 8),(char)param_1);
  local_14 = param_2;
  uStack_c = param_4;
  (*(code *)DAT_00020880[1])(&local_18,*DAT_00020880);
  return CONCAT44(local_14,local_18);
}


/* ---- FUN_00020884 @ 00020884 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00020884(int param_1)

{
  int iVar1;
  
  if (_DAT_000208b4 != param_1) {
    iVar1 = _DAT_10000038 * _DAT_10000034;
    FUN_0001dcf4(s_RAM_START_ADDR_0x_x_should_be_ad_000208b7 + 1,_DAT_000208b4,param_1);
    FUN_0001dcf4(s_RAM_SIZE_should_be_adjusted_to_0_000208ec,(iVar1 + 0x20000000) - param_1);
  }
  return 0;
}


/* ---- FUN_00020914 @ 00020914 ---- */

int FUN_00020914(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (((int)param_1 < 0x20) && ((1 << (param_1 & 0xff) & DAT_00020988) == 0)) {
    return DAT_0002098c;
  }
  if ((int)param_1 < 0) {
    uVar2 = *(uint *)(((param_1 & 0xf) - 8 & 0xfffffffc) + DAT_00020990 + 0x1c);
  }
  else {
    uVar2 = *(uint *)((param_1 & 0xfffffffc) + DAT_00020994);
  }
  uVar2 = ((uVar2 >> ((param_1 << 0x1e) >> 0x1b)) << 0x18) >> 0x1e;
  if (((uVar2 < 4) && (uVar2 != 0)) && (uVar2 != 2)) {
    uVar2 = 1 << (param_1 & 0x1f);
    if (*(int *)(DAT_00020998 + 4) == 0) {
      *DAT_0002099c = uVar2;
    }
    else {
      iVar1 = (param_1 >> 5) * 4;
      *(uint *)(DAT_00020998 + iVar1) = *(uint *)(DAT_00020998 + iVar1) | uVar2;
    }
    return 0;
  }
  return DAT_0002098c + 1;
}


/* ---- FUN_000209a0 @ 000209a0 ---- */

undefined4 FUN_000209a0(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  
  if (*(int *)(param_1 + 0x28) == 0) {
LAB_00020a2a:
    uVar3 = 7;
  }
  else {
    for (uVar4 = 0; uVar4 < *(byte *)(param_1 + 0x2c); uVar4 = uVar4 + 1 & 0xff) {
      puVar5 = (undefined2 *)(*(int *)(param_1 + 0x28) + uVar4 * 0xc);
      if (0xfe < (ushort)puVar5[2] + 2) {
        return 0xc;
      }
      *(char *)(param_2 + (uint)*param_3) = (char)puVar5[2] + '\x03';
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0x16;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      sVar2 = FUN_0002113c(*puVar5,(uint)(ushort)(uVar1 + 1) + param_2);
      uVar1 = *param_3;
      *param_3 = sVar2 + uVar1;
      if (puVar5[2] != 0) {
        if (*(int *)(puVar5 + 4) == 0) goto LAB_00020a2a;
        FUN_0001b1e0((uint)(ushort)(sVar2 + uVar1) + param_2);
        *param_3 = *param_3 + puVar5[2];
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* ---- FUN_00020a30 @ 00020a30 ---- */

void FUN_00020a30(int param_1)

{
  undefined *puVar1;
  
  puVar1 = DAT_00020a70;
  *DAT_00020a70 = (char)param_1;
  if (param_1 == 0) {
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    if (*(char *)(DAT_00020a74 + 1) != '\0') {
      FUN_0001f638();
      return;
    }
  }
  else {
    if (param_1 == 1) {
      FUN_00020d70();
      return;
    }
    if (param_1 == 2) {
      FUN_00020c64();
      return;
    }
    if (param_1 == 3) {
      FUN_0001fa48(*(undefined4 *)(puVar1 + 0x14));
    }
  }
  return;
}


/* ---- FUN_00020a78 @ 00020a78 ---- */

undefined4 FUN_00020a78(int param_1)

{
  if (param_1 != 0) {
    *(int *)(DAT_00020a88 + 0xc) = param_1;
    return 0;
  }
  return 0xe;
}


/* ---- FUN_00020a8c @ 00020a8c ---- */

void FUN_00020a8c(void)

{
  software_interrupt(0x60);
  return;
}


/* ---- FUN_00020aa0 @ 00020aa0 ---- */

undefined4 FUN_00020aa0(int param_1,undefined param_2,undefined2 *param_3)

{
  FUN_0001b212(param_3,0x14);
  *param_3 = 1;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined *)(param_3 + 6) = 0;
  *(undefined *)(param_3 + 4) = param_2;
  *(char *)((int)param_3 + 9) = (char)param_1;
  if (param_1 != 0) {
    *(undefined *)(param_3 + 5) = 1;
  }
  return 0;
}


/* ---- FUN_00020ad0 @ 00020ad0 ---- */

int FUN_00020ad0(int param_1,uint param_2,undefined2 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = DAT_00020afc;
  if ((param_2 == 0) || ((param_2 & 3) != 0)) {
    param_1 = 7;
  }
  else {
    *(uint *)(DAT_00020afc + 8) = param_2;
    *(undefined2 *)(puVar1 + 2) = param_3;
    uVar2 = DAT_00020b00;
    *(undefined4 *)(puVar1 + 4) = param_4;
    software_interrupt(0x10);
    if (param_1 == 0) {
      *puVar1 = 1;
      iVar3 = FUN_00020914(0x16,uVar2);
      return iVar3;
    }
  }
  return param_1;
}


/* ---- FUN_00020b04 @ 00020b04 ---- */

undefined4 FUN_00020b04(int param_1)

{
  if (param_1 != 0) {
    *(int *)(DAT_00020b14 + 0x10) = param_1;
    return 0;
  }
  return 0xe;
}


/* ---- FUN_00020b18 @ 00020b18 ---- */

void FUN_00020b18(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00020b44;
  iVar1 = DAT_00020b40;
  iVar3 = DAT_00020b3c;
  if (param_1 == 0) {
    *(undefined4 *)(DAT_00020b44 + 0x10) = 2;
    *(undefined4 *)(iVar2 + 0xc) = 2;
    *(undefined4 *)(iVar2 + 8) = 2;
    *(undefined4 *)(iVar2 + 4) = 2;
    iVar3 = iVar1;
  }
  *(undefined4 *)(iVar3 + 0x500) = 0;
  return;
}


/* ---- FUN_00020b48 @ 00020b48 ---- */

void FUN_00020b48(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00020b88;
  iVar2 = DAT_00020b84;
  if (param_1 == 0) {
    FUN_000202d6(4);
    FUN_000202d6(3);
    FUN_0002026c(2,0,0,0,0,0);
    FUN_000202d6(1);
    iVar2 = iVar1;
  }
  *(undefined4 *)(iVar2 + 0x500) = 1;
  return;
}


/* ---- FUN_00020b8c @ 00020b8c ---- */

void FUN_00020b8c(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00020bf4;
  iVar1 = DAT_00020bf0;
  iVar3 = DAT_00020bec;
  if (param_1 == 0) {
    *(undefined4 *)(DAT_00020bf4 + 8) = 4;
    *(undefined4 *)(iVar2 + 0xc) = 3;
    *(undefined4 *)(iVar2 + 0x10) = 2;
    *(undefined4 *)(DAT_00020bf8 + 8) = 2;
    *DAT_00020bfc = 1;
    iVar3 = iVar1;
  }
  *(undefined4 *)(iVar3 + 0x524) = 0x80000000;
  if (param_2 != 0) {
    if (param_2 == 1) {
      param_2 = 2;
    }
    else if (param_2 == 2) {
      param_2 = 4;
    }
    else if (param_2 == 3) {
      param_2 = 6;
    }
    else {
      param_2 = 0;
    }
  }
  if (param_3 != 0) {
    param_2 = param_2 | 1;
  }
  *(uint *)(iVar3 + 0x554) = param_2;
  *(undefined4 *)(iVar3 + 0x108) = 0;
  return;
}


/* ---- FUN_00020c00 @ 00020c00 ---- */

undefined4 FUN_00020c00(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_00020c60;
  uVar3 = 0;
  uVar2 = 0;
  *(undefined4 *)(DAT_00020c60 + 0xc) = 2;
  iVar4 = param_1 + (iVar1 >> 0x14);
  while( true ) {
    if (param_2 <= uVar2) {
      *(undefined4 *)(iVar1 + 8) = 2;
      return 1;
    }
    *(uint *)(iVar4 + 0x1c) = (uint)*(byte *)(param_3 + uVar2);
    for (; (*(int *)(param_1 + 0x108) == 0 && (uVar3 < 0x3000)); uVar3 = uVar3 + 1) {
    }
    if (uVar3 == 0x3000) break;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(char *)(param_4 + uVar2) = (char)*(undefined4 *)(iVar4 + 0x18);
    uVar2 = uVar2 + 1 & 0xffff;
  }
  *(undefined4 *)(iVar1 + 8) = 2;
  return 0;
}


/* ---- FUN_00020c64 @ 00020c64 ---- */

void FUN_00020c64(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = DAT_00020cc0;
  *(uint *)(DAT_00020cc0 + 4) = *(uint *)(DAT_00020cc0 + 4) & 0xfffffffe;
  pbVar3 = DAT_00020cc4;
  bVar1 = *DAT_00020cc4;
  iVar7 = *(int *)(DAT_00020cc4 + (uint)bVar1 * 0x14 + 0x10);
  uVar4 = FUN_000204d8();
  iVar5 = FUN_0001b12c(iVar7,uVar4);
  *(int *)(iVar2 + 0x14) = iVar5;
  uVar4 = FUN_000204d8();
  iVar7 = FUN_0001b12c((uint)*(ushort *)(pbVar3 + (uint)bVar1 * 0x14 + 6) + iVar7 + -1,uVar4);
  if (iVar5 == iVar7) {
    uVar6 = *(uint *)(iVar2 + 4) | 2;
  }
  else {
    uVar6 = *(uint *)(iVar2 + 4) & 0xfffffffd;
  }
  *(uint *)(iVar2 + 4) = uVar6;
  if ((uVar6 & 2 | *(uint *)(iVar2 + 0xc)) == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = 0;
  }
  FUN_00020e00(uVar4);
  return;
}


/* ---- FUN_00020cc8 @ 00020cc8 ---- */

void FUN_00020cc8(void)

{
  FUN_0001fa48(*(undefined4 *)(DAT_00020cd4 + 0x14));
  return;
}


/* ---- FUN_00020cf8 @ 00020cf8 ---- */

void FUN_00020cf8(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int extraout_r1;
  int iVar4;
  
  pbVar2 = DAT_00020d2c;
  bVar1 = *DAT_00020d2c;
  iVar4 = *(int *)(DAT_00020d2c + (uint)bVar1 * 0x14 + 0x10);
  uVar3 = FUN_000204d8();
  iVar4 = (uint)*(ushort *)(pbVar2 + (uint)bVar1 * 0x14 + 6) +
          (uint)*(ushort *)(pbVar2 + (uint)bVar1 * 0x14 + 8) + iVar4;
  FUN_0001b12c(iVar4,uVar3);
  FUN_0001fa52(iVar4,extraout_r1 + 0x3bc00,*(undefined4 *)(DAT_00020d30 + 0x10));
  return;
}


/* ---- FUN_00020d70 @ 00020d70 ---- */

void FUN_00020d70(void)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  pbVar3 = DAT_00020dc4;
  bVar1 = *DAT_00020dc4;
  uVar5 = FUN_000204d8();
  iVar4 = DAT_00020dc8;
  if (uVar5 < *(ushort *)(pbVar3 + (uint)bVar1 * 0x14 + 6)) {
    iVar6 = FUN_000204d8();
    uVar2 = *(ushort *)(pbVar3 + (uint)bVar1 * 0x14 + 6);
    uVar5 = FUN_000204d8();
    FUN_0001fa52(*(int *)(pbVar3 + (uint)bVar1 * 0x14 + 0x10) +
                 (uint)*(ushort *)(pbVar3 + (uint)bVar1 * 0x14 + 8) + ((uint)uVar2 - iVar6),
                 *(int *)(pbVar3 + (uint)bVar1 * 0x14 + 0x14) + ((uint)uVar2 - iVar6),uVar5 >> 2);
    uVar5 = FUN_000204d8();
  }
  else {
    FUN_0001fa52(*(int *)(pbVar3 + (uint)bVar1 * 0x14 + 0x10) +
                 (uint)*(ushort *)(pbVar3 + (uint)bVar1 * 0x14 + 8),
                 *(undefined4 *)(pbVar3 + (uint)bVar1 * 0x14 + 0x14),
                 *(ushort *)(pbVar3 + (uint)bVar1 * 0x14 + 6) >> 2);
    uVar5 = (uint)*(ushort *)(pbVar3 + (uint)bVar1 * 0x14 + 6);
  }
  *(uint *)(iVar4 + 0x1c) = uVar5;
  return;
}


/* ---- FUN_00020dcc @ 00020dcc ---- */

void FUN_00020dcc(void)

{
  if (-1 < (int)((uint)*(byte *)(DAT_00020de4 + 4) << 0x1c)) {
    FUN_00020e00(1);
    return;
  }
  FUN_00020de8();
  return;
}


/* ---- FUN_00020de8 @ 00020de8 ---- */

void FUN_00020de8(void)

{
  int iVar1;
  
  iVar1 = DAT_00020dfc;
  *(uint *)(DAT_00020dfc + 4) = *(uint *)(DAT_00020dfc + 4) & 0xfffffff7;
  FUN_00020e00(*(undefined *)(iVar1 + 1));
  return;
}


/* ---- FUN_00020e00 @ 00020e00 ---- */

void FUN_00020e00(int param_1)

{
  *(char *)(DAT_00020e0c + 1) = (char)param_1;
                    /* WARNING: Could not recover jumptable at 0x00020e0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_00020e10 + param_1 * 4))();
  return;
}


/* ---- FUN_00020e14 @ 00020e14 ---- */

void FUN_00020e14(undefined4 param_1)

{
  FUN_00020710();
  FUN_0001efd8(param_1);
  return;
}


/* ---- FUN_00020e24 @ 00020e24 ---- */

void FUN_00020e24(void)

{
  if (-1 < (int)((uint)*(byte *)(DAT_00020e3c + 4) << 0x1c)) {
    FUN_0001f614();
    return;
  }
  FUN_00020de8();
  return;
}


/* ---- FUN_00020e40 @ 00020e40 ---- */

void FUN_00020e40(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  
  iVar1 = DAT_00020ec0;
  iVar8 = *(int *)(DAT_00020ec0 + 0x10);
  local_18 = *(undefined4 *)(DAT_00020ec0 + 0xc);
  local_20 = param_2;
  local_1c = param_3;
  local_1c = FUN_0001f954(&local_20);
  iVar2 = FUN_0001fe68();
  if (local_1c == 0) {
    iVar8 = FUN_0001ff24(0);
    if ((iVar8 == 0) && (iVar2 == 0)) goto LAB_00020eba;
  }
  else {
    iVar2 = 0;
    uVar3 = local_20;
    puVar4 = *(uint **)(iVar1 + 0xc);
    puVar6 = (uint *)0x0;
    while (puVar5 = puVar4, puVar5 != (uint *)0x0) {
      uVar7 = *puVar5;
      if (uVar3 < uVar7) {
        *puVar5 = uVar7 - uVar3;
        break;
      }
      uVar3 = uVar3 - uVar7;
      iVar2 = uVar7 + iVar2;
      *puVar5 = 0;
      puVar4 = (uint *)puVar5[7];
      if (puVar5[3] != 0) {
        puVar5[1] = iVar8 + iVar2 & 0xffffff;
        puVar5[2] = puVar5[3];
        puVar5[7] = (uint)puVar6;
        puVar6 = puVar5;
      }
    }
    *(uint **)(iVar1 + 0xc) = puVar5;
    FUN_0001ff24(puVar6);
  }
  FUN_0001f718(local_18);
LAB_00020eba:
  *(undefined *)(iVar1 + 4) = 0;
  return;
}


/* ---- FUN_00020ec4 @ 00020ec4 ---- */

void FUN_00020ec4(void)

{
  *DAT_00020ed0 = 0x100000;
  return;
}


/* ---- FUN_00020ed4 @ 00020ed4 ---- */

void FUN_00020ed4(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  iVar1 = DAT_00020f10;
  puVar2 = *(uint **)(DAT_00020f10 + 0xc);
  if (puVar2 != (uint *)0x0) {
    uVar4 = *param_1;
    puVar3 = puVar2;
    if (*puVar2 < uVar4) {
      do {
        puVar5 = puVar3;
        uVar6 = *puVar5;
        if (uVar4 <= uVar6) {
          *puVar5 = uVar6 - uVar4;
          puVar3 = puVar5;
          puVar5 = puVar2;
          break;
        }
        puVar3 = (uint *)puVar5[7];
        uVar4 = uVar4 - uVar6;
        puVar2 = puVar5;
      } while (puVar3 != (uint *)0x0);
      *param_1 = uVar4;
      param_1[7] = (uint)puVar3;
      puVar5[7] = (uint)param_1;
      return;
    }
    *puVar2 = *puVar2 - uVar4;
    param_1[7] = (uint)puVar2;
  }
  *(uint **)(iVar1 + 0xc) = param_1;
  return;
}


/* ---- FUN_00020f14 @ 00020f14 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00020f14(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_r3;
  code *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = DAT_00020f90;
  if (*(uint **)(DAT_00020f90 + 0xc) != (uint *)0x0) {
    iVar8 = 0;
    uVar7 = *(int *)(_DAT_00020f94 + 4) - *(int *)(DAT_00020f90 + 0x10) & 0xffffff;
    puVar5 = *(uint **)(DAT_00020f90 + 0xc);
    do {
      uVar2 = *puVar5;
      if (uVar7 < uVar2) break;
      uVar7 = uVar7 - uVar2;
      iVar8 = uVar2 + iVar8;
      puVar6 = (uint *)puVar5[7];
      if (*(char *)(puVar5 + 4) != '\0') {
        *(undefined *)(puVar5 + 4) = 0;
        pcVar4 = *(code **)(iVar1 + 0x14);
        if (pcVar4 == (code *)0x0) {
          (*(code *)puVar5[5])(puVar5[6]);
        }
        else {
          iVar3 = (*pcVar4)(puVar5[5],puVar5[6],puVar5,pcVar4,in_r3);
          if (iVar3 != 0) {
            FUN_0001e9a8(iVar3,0x165,s___________components_libraries_t_00020f97 + 1);
          }
        }
      }
      puVar5 = puVar6;
    } while (puVar6 != (uint *)0x0);
    uVar7 = (uint)*(byte *)(iVar1 + 2);
    if (*(byte *)(iVar1 + 1) == uVar7) {
      uVar2 = uVar7 + 1;
      uVar7 = uVar2 & 0xff;
      *(char *)(iVar1 + 2) = (char)uVar2;
      if (uVar7 == 2) {
        uVar7 = 0;
        *(undefined *)(iVar1 + 2) = 0;
      }
    }
    *(int *)(DAT_00020f90 + 0x18 + ((uVar7 << 0x18) >> 0x16)) = iVar8;
    FUN_00020ec4();
  }
  return;
}


/* ---- FUN_00020fc8 @ 00020fc8 ---- */

void FUN_00020fc8(void)

{
  byte bVar1;
  
  *(undefined4 *)(DAT_00020fe8 + 0x11c) = 0;
  bVar1 = *(byte *)(*(int *)(DAT_00020fec + 8) + (uint)*(ushort *)(DAT_00020fec + 0x14));
  *(short *)(DAT_00020fec + 0x14) = *(short *)(DAT_00020fec + 0x14) + 1;
  *(uint *)(DAT_00020ff0 + 0x1c) = (uint)bVar1;
  return;
}


/* ---- FUN_00020ff4 @ 00020ff4 ---- */

undefined8 FUN_00020ff4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  puVar1 = DAT_00021010;
  local_18 = param_1 & 0xffffff00;
  local_10 = CONCAT31((int3)((uint)param_3 >> 8),(char)param_1);
  local_14 = DAT_00021010[2];
  *(undefined *)((int)DAT_00021010 + 0x16) = 0;
  uStack_c = param_4;
  (*(code *)puVar1[1])(&local_18,*puVar1);
  return CONCAT44(local_14,local_18);
}


/* ---- FUN_00021014 @ 00021014 ---- */

void FUN_00021014(void)

{
  undefined uVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined local_28 [4];
  undefined4 local_24;
  undefined local_20;
  undefined4 local_1c;
  
  puVar3 = DAT_0002112c;
  iVar5 = FUN_0002038a(DAT_0002112c,0x200);
  puVar4 = DAT_00021130;
  if ((iVar5 == 0) || (iVar5 = FUN_00020380(puVar3,0x124), iVar5 == 0)) {
    iVar5 = FUN_0002038a(puVar3,4);
    if ((iVar5 != 0) &&
       ((iVar5 = FUN_00020380(puVar3,0x108), iVar5 != 0 &&
        (FUN_00020830(), *(char *)((int)puVar4 + 0x17) == *(char *)((int)puVar4 + 0x19))))) {
      if (*(char *)(puVar4 + 6) == '\0') {
        if (*(char *)((int)puVar4 + 0x1a) == '\0') {
          puVar3[1] = 1;
        }
        *(undefined4 *)(DAT_00021134 + 8) = 0x204;
        *(undefined *)((int)puVar4 + 0x17) = 0;
        uVar1 = *(undefined *)((int)puVar4 + 0x19);
        uVar6 = puVar4[3];
      }
      else {
        uVar1 = *(undefined *)((int)puVar4 + 0x19);
        uVar6 = puVar4[3];
        *(char *)((int)puVar4 + 0x17) = *(char *)(puVar4 + 6);
        puVar4[3] = puVar4[4];
        *(undefined *)(puVar4 + 6) = 0;
        *(undefined *)((int)puVar4 + 0x19) = 0;
      }
      FUN_00020868(uVar1,uVar6);
    }
  }
  else {
    puVar3[0x49] = 0;
    *(undefined4 *)(DAT_00021134 + 8) = 0x204;
    if (*(char *)((int)puVar4 + 0x1a) == '\0') {
      puVar3[1] = 1;
    }
    local_28[0] = 2;
    local_1c = *DAT_00021138;
    *DAT_00021138 = local_1c;
    local_20 = *(undefined *)((int)puVar4 + 0x17);
    local_24 = puVar4[3];
    *(undefined *)((int)puVar4 + 0x17) = 0;
    *(undefined *)(puVar4 + 6) = 0;
    (*(code *)puVar4[1])(local_28,*puVar4);
  }
  iVar5 = FUN_00020380(puVar3,0x11c);
  if (iVar5 != 0) {
    bVar2 = *(byte *)((int)puVar4 + 0x16);
    if (*(ushort *)(puVar4 + 5) < (ushort)bVar2) {
      FUN_00020fc8();
    }
    else {
      puVar3[0x47] = 0;
      if (bVar2 != 0) {
        FUN_00020ff4();
      }
    }
  }
  iVar5 = FUN_00020380(puVar3,0x144);
  if (iVar5 != 0) {
    puVar3[0x51] = 0;
    if (*(char *)((int)puVar4 + 0x1a) != '\0') {
      *puVar3 = 1;
    }
    if (*(char *)((int)puVar4 + 0x17) != '\0') {
      *(undefined *)((int)puVar4 + 0x17) = 0;
      FUN_00020868(*(undefined *)((int)puVar4 + 0x19),puVar4[3]);
    }
  }
  return;
}


/* ---- FUN_0002113c @ 0002113c ---- */

undefined4 FUN_0002113c(undefined4 param_1,undefined *param_2)

{
  *param_2 = (char)param_1;
  param_2[1] = (char)((uint)param_1 >> 8);
  return 2;
}


/* ---- FUN_000211ac @ 000211ac ---- */

undefined4 FUN_000211ac(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1f;
  }
  if (uVar2 != 0) {
    uVar2 = (uint)(char)((char)uVar2 + -0x10);
    if ((int)uVar2 < 0) {
      uVar3 = *(uint *)(((uVar2 & 0xf) - 8 & 0xfffffffc) + DAT_000211f8 + 0x1c);
    }
    else {
      uVar3 = *(uint *)((uVar2 & 0xfffffffc) + DAT_000211fc);
    }
    uVar2 = ((uVar3 >> ((uVar2 << 0x1e) >> 0x1b)) << 0x18) >> 0x1e;
    if (uVar2 == 1) {
      return 0;
    }
    if (uVar2 == 3) {
      return 1;
    }
  }
  return 2;
}


/* ---- FUN_00021200 @ 00021200 ---- */

int FUN_00021200(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = param_1[1] + '\x01';
  if (param_1[2] == cVar1) {
    cVar1 = '\0';
  }
  if (*param_1 == cVar1) {
    return 0;
  }
  *param_2 = cVar1;
  return *(int *)(param_1 + 4) + (uint)(byte)param_1[1] * 0x18;
}


/* ---- FUN_00021228 @ 00021228 ---- */

int FUN_00021228(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00021274(param_1,param_2,2,param_4,param_5,param_6);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_00021274(param_1,param_3,0x10,param_4,param_5,param_6), iVar1 == 0)) {
    return 0;
  }
  FUN_0001dcf4(s_C_x_0002126c,iVar1);
  return iVar1;
}


/* ---- FUN_00021274 @ 00021274 ---- */

undefined2 *
FUN_00021274(ushort *param_1,undefined4 param_2,uint param_3,int param_4,ushort *param_5,
            uint param_6)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  byte local_2c;
  undefined2 local_28;
  undefined2 local_26;
  ushort *puStack_24;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  
  bVar2 = false;
  uVar1 = *param_5;
  for (iVar6 = 0; iVar6 < (int)(uint)*param_1; iVar6 = iVar6 + 1) {
    puVar4 = (undefined2 *)(*(int *)(param_1 + 2) + iVar6 * 4);
    local_28 = *puVar4;
    local_26 = puVar4[1];
    software_interrupt(0x65);
    if (&param_5 != (ushort **)&Reserved4) {
      puStack_24 = param_1;
      local_20 = param_2;
      local_1c = param_3;
      local_18 = param_4;
      FUN_0001dcf4(s_C_x_00021334,&local_28,0);
      return &local_28;
    }
    if (local_2c == param_3) {
      if (bVar2) {
        iVar5 = 0;
      }
      else {
        iVar5 = 2;
      }
      if (param_6 < (uint)*param_5 + (uint)local_2c + iVar5) goto LAB_000212fc;
      if (!bVar2) {
        uVar3 = *param_5 + 1;
        *param_5 = (ushort)uVar3;
        *(char *)(param_4 + (uVar3 & 0xffff)) = (char)param_2;
        *param_5 = *param_5 + 1;
        bVar2 = true;
      }
      software_interrupt(0x65);
      *param_5 = *param_5 + (ushort)local_2c;
    }
  }
  if (bVar2) {
    uVar3 = ((uint)*param_5 - (uint)uVar1) - 1 & 0xffff;
    if (0xff < uVar3) {
LAB_000212fc:
      return (undefined2 *)&HardFault;
    }
    *(char *)(param_4 + (uint)uVar1) = (char)uVar3;
  }
  return (undefined2 *)0x0;
}


/* ---- FUN_0002133c @ 0002133c ---- */

void FUN_0002133c(void)

{
  if ((*DAT_0002134c & 1) != 0) {
    *DAT_00021354 = DAT_00021350;
  }
  return;
}


/* ---- FUN_00021358 @ 00021358 ---- */

void FUN_00021358(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_0002138c;
  *DAT_0002138c = 0;
  iVar2 = DAT_00021394;
  *(undefined4 *)(DAT_00021394 + 4) = DAT_00021390;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 8) = 1;
  *(undefined4 *)(DAT_00021398 + 4) = 1;
  *DAT_0002139c = 0x10000;
  *DAT_000213a0 = *DAT_000213a0 & 0xffffff00 | 0xc0;
  *DAT_000213a4 = 0x10000;
  *puVar1 = 1;
  return;
}


/* ---- FUN_000213a8 @ 000213a8 ---- */

char FUN_000213a8(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 4) != '\0') || (cVar1 = *(char *)(param_1 + 0xc), cVar1 != '\0')) {
    cVar1 = '\x01';
  }
  return cVar1;
}


