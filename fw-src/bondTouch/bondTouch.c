/* Ghidra 11.1.2 headless decompilation of application.bin, base 0x1b000. */
/* Derived from vendor firmware: for private interoperability study only. */

/* ---- thunk_FUN_00024630 @ 0001b0c8 ---- */

void thunk_FUN_00024630(void)

{
  (*DAT_0001b0cc)();
  return;
}


/* ---- FUN_0001b0d8 @ 0001b0d8 ---- */

void FUN_0001b0d8(void)

{
  *DAT_0001b100 = *DAT_0001b100 | 3;
  *DAT_0001b104 = *DAT_0001b104 | 3;
  (*DAT_0001b108)();
                    /* WARNING: Could not recover jumptable at 0x0001b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001b10c)();
  return;
}


/* ---- FUN_0001b0f2 @ 0001b0f2 ---- */

void FUN_0001b0f2(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001b0f4 @ 0001b0f4 ---- */

void FUN_0001b0f4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001b0f6 @ 0001b0f6 ---- */

void FUN_0001b0f6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001b0f8 @ 0001b0f8 ---- */

void FUN_0001b0f8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001b0fa @ 0001b0fa ---- */

void FUN_0001b0fa(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001b0fc @ 0001b0fc ---- */

void FUN_0001b0fc(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001b110 @ 0001b110 ---- */

int FUN_0001b110(uint param_1,uint param_2)

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


/* ---- FUN_0001b13c @ 0001b13c ---- */

longlong FUN_0001b13c(uint param_1,int param_2,uint param_3,uint param_4)

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
    uVar6 = FUN_0001b7b0(param_1,local_2c,iVar4);
    uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
    iVar3 = iVar4;
    if (param_4 < uVar2 || uVar2 - param_4 < (uint)(param_3 <= (uint)uVar6)) {
      uVar6 = FUN_0001b790(param_3,param_4,iVar4);
      bVar5 = param_1 < (uint)uVar6;
      param_1 = param_1 - (uint)uVar6;
      local_2c = (local_2c - (int)((ulonglong)uVar6 >> 0x20)) - (uint)bVar5;
      lVar7 = FUN_0001b790(1,0,iVar4);
      lVar1 = lVar7 + lVar1;
    }
  }
  return lVar1;
}


/* ---- FUN_0001b19c @ 0001b19c ---- */

void FUN_0001b19c(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


/* ---- FUN_0001b1c0 @ 0001b1c0 ---- */

void FUN_0001b1c0(undefined *param_1,int param_2,undefined param_3)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    *param_1 = param_3;
    param_1 = param_1 + 1;
  }
  return;
}


/* ---- FUN_0001b1ce @ 0001b1ce ---- */

void FUN_0001b1ce(undefined4 param_1,undefined4 param_2)

{
  FUN_0001b1c0(param_1,param_2,0);
  return;
}


/* ---- FUN_0001b1d2 @ 0001b1d2 ---- */

undefined4 FUN_0001b1d2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001b1c0(param_1,param_3,param_2);
  return param_1;
}


/* ---- FUN_0001b1e4 @ 0001b1e4 ---- */

int FUN_0001b1e4(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1 + 1;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return (int)param_1 - (int)pcVar2;
}


/* ---- FUN_0001b1f2 @ 0001b1f2 ---- */

void FUN_0001b1f2(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 < param_3 && (*(char *)(param_1 + uVar1) == *(char *)(param_2 + uVar1)));
      uVar1 = uVar1 + 1) {
  }
  return;
}


/* ---- FUN_0001b20c @ 0001b20c ---- */

void FUN_0001b20c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0;
      ((uVar1 < param_3 && (*(char *)(param_1 + uVar1) == *(char *)(param_2 + uVar1))) &&
      (*(char *)(param_1 + uVar1) != '\0')); uVar1 = uVar1 + 1) {
  }
  return;
}


/* ---- FUN_0001b22a @ 0001b22a ---- */

uint FUN_0001b22a(uint param_1,undefined *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 3;
  uVar1 = param_1;
  do {
    *param_2 = (char)uVar1;
    uVar1 = uVar1 >> 8;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return param_1;
}


/* ---- FUN_0001b23c @ 0001b23c ---- */

void FUN_0001b23c(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = param_1 ^ param_2;
  uVar1 = param_1;
  if ((param_1 & 0x7fffffff) < (param_2 & 0x7fffffff)) {
    uVar1 = param_2;
    param_2 = param_1;
  }
  if ((param_2 & 0x7fffffff) == 0) {
    return;
  }
  uVar6 = uVar1 >> 0x17;
  uVar7 = (uVar6 & 0xff) - ((param_2 << 1) >> 0x18);
  if ((int)uVar7 < 0x20) {
    iVar4 = (param_2 & 0x7fffff) + 0x800000;
    if ((int)uVar3 < 0) {
      iVar4 = -iVar4;
    }
    uVar2 = iVar4 << (0x20 - uVar7 & 0xff);
    uVar1 = (iVar4 >> (uVar7 & 0xff)) + uVar1;
    uVar5 = uVar1 >> 0x17;
    if (uVar5 != uVar6) {
      if ((int)uVar3 < 0) {
        if ((int)uVar7 < 2) {
          FUN_0001b808(uVar1 + uVar6 * -0x800000 + 0x800000,uVar2,uVar6 * 0x800000 & 0x80000000,
                       uVar6 & 0xff);
          return;
        }
        iVar4 = uVar6 * -0x800000;
        uVar6 = 0x1000000;
        uVar5 = uVar2 >> 0x1f;
        uVar1 = uVar1 * 2 + iVar4 | uVar5;
        uVar2 = uVar2 << 1;
      }
      else {
        uVar2 = uVar2 >> 1 | uVar1 * -0x80000000;
        uVar5 = uVar6 * 0x800000;
        uVar1 = (uVar1 + uVar6 * -0x800000 + 0x800000 >> 1) + uVar5;
      }
    }
  }
  else {
    uVar5 = 1;
    uVar2 = ((int)uVar3 >> 0x1f) * 2 + 1;
    uVar1 = uVar1 + ((int)uVar3 >> 0x1f);
  }
  FUN_0001b7f8(uVar1,uVar2,uVar5,uVar6,param_4);
  return;
}


/* ---- FUN_0001b2de @ 0001b2de ---- */

void FUN_0001b2de(undefined4 param_1,uint param_2)

{
  FUN_0001b23c(param_1,param_2 ^ 0x80000000);
  return;
}


/* ---- FUN_0001b2ee @ 0001b2ee ---- */

undefined4 FUN_0001b2ee(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (((param_1 & 0x7fffffff) != 0) && ((param_2 & 0x7fffffff) != 0)) {
    uVar1 = 0x800000;
    iVar6 = ((param_1 & 0x7fffffff) >> 0x17) - ((param_2 & 0x7fffffff) >> 0x17);
    uVar3 = (param_1 & 0x7fffff) + 0x800000;
    uVar4 = (param_2 & 0x7fffff) + 0x800000;
    iVar7 = iVar6 + 0x7d;
    if (uVar3 < uVar4) {
      uVar3 = uVar3 * 2;
    }
    else {
      iVar7 = iVar6 + 0x7e;
    }
    if (-1 < iVar7) {
      uVar5 = 0;
      do {
        if (uVar4 <= uVar3) {
          uVar3 = uVar3 - uVar4;
          uVar5 = uVar5 | uVar1;
        }
        uVar1 = uVar1 >> 1;
        uVar3 = uVar3 * 2;
      } while (uVar1 != 0);
      if (uVar3 != 0) {
        if (uVar3 - uVar4 == 0) {
          uVar3 = 0x80000000;
        }
        else if (uVar3 < uVar4) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0xfffffffe;
        }
      }
      uVar2 = FUN_0001b7f8(iVar7 * 0x800000 + uVar5 + ((param_1 ^ param_2) & 0x80000000),uVar3);
      return uVar2;
    }
  }
  return 0;
}


/* ---- FUN_0001b36a @ 0001b36a ---- */

uint FUN_0001b36a(uint param_1,int param_2)

{
  if ((param_1 & 0x7fffffff) != 0) {
    if ((int)-((param_1 << 1) >> 0x18) < param_2) {
      return param_2 * 0x800000 + param_1;
    }
    param_1 = 0;
  }
  return param_1;
}


/* ---- FUN_0001b384 @ 0001b384 ---- */

uint FUN_0001b384(uint param_1,uint param_2,uint param_3,uint param_4)

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
      uVar8 = FUN_0001b790(uVar5,uVar3,0x40 - iVar2);
      uVar6 = (uint)(uVar8 >> 0x20);
      uVar4 = (uint)uVar8;
      lVar9 = FUN_0001b7d2(uVar5,uVar3,iVar2,&local_24);
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
            uVar5 = FUN_0001b894(uVar5,uVar3 + local_24 * -0x100000 + 0x100000,uVar4,uVar6,0,
                                 local_24 * 0x100000 & 0x80000000,local_1c);
            return uVar5;
          }
          lVar9 = CONCAT44(local_24 * -0x100000 + DAT_0001b4e8 +
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
    param_1 = FUN_0001b87a((int)lVar9,(int)((ulonglong)lVar9 >> 0x20),(int)uVar8,
                           (int)(uVar8 >> 0x20));
  }
  return param_1;
}


/* ---- FUN_0001b4ce @ 0001b4ce ---- */

void FUN_0001b4ce(void)

{
  FUN_0001b384();
  return;
}


/* ---- FUN_0001b4ec @ 0001b4ec ---- */

void FUN_0001b4ec(uint param_1,uint param_2,uint param_3,uint param_4)

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
    FUN_0001b894(local_30,local_2c,local_38,local_34,0,(param_2 ^ param_4) & 0x80000000,
                 (((param_2 & 0x7fffffff) << 1) >> 0x15) + (((param_4 & 0x7fffffff) << 1) >> 0x15) +
                 DAT_0001b5b8);
  }
  return;
}


/* ---- FUN_0001b5bc @ 0001b5bc ---- */

void FUN_0001b5bc(uint param_1,uint param_2,uint param_3,uint param_4)

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
            DAT_0001b6a8;
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
      FUN_0001b87a(uVar7,iVar1 * 0x100000 + uVar8 + ((param_2 ^ param_4) & 0x80000000),param_1,uVar4
                  );
    }
  }
  return;
}


/* ---- FUN_0001b6ac @ 0001b6ac ---- */

undefined8 FUN_0001b6ac(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if ((param_2 & 0x7fffffff | param_1) != 0) {
    uVar2 = (param_2 << 1) >> 0x15;
    iVar1 = -(uint)(uVar2 != 0);
    iVar3 = (int)param_3 >> 0x1f;
    bVar4 = -uVar2 < param_3;
    if ((int)((iVar1 - iVar3) - (uint)bVar4) < 0 !=
        (SBORROW4(iVar1,iVar3) != SBORROW4(iVar1 - iVar3,(uint)bVar4))) {
      return CONCAT44(param_2 + param_3 * 0x100000,param_1);
    }
    param_1 = 0;
    param_2 = 0;
  }
  return CONCAT44(param_2,param_1);
}


/* ---- FUN_0001b6d8 @ 0001b6d8 ---- */

void FUN_0001b6d8(undefined4 param_1)

{
  FUN_0001b808(param_1,0,0,0x96);
  return;
}


/* ---- FUN_0001b6e8 @ 0001b6e8 ---- */

void FUN_0001b6e8(undefined4 param_1)

{
  FUN_0001b894(param_1,0,0,0,0,0,DAT_0001b700);
  return;
}


/* ---- FUN_0001b704 @ 0001b704 ---- */

uint FUN_0001b704(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 << 1) >> 0x18;
  uVar1 = (param_1 & 0x7fffff) + 0x800000;
  if (uVar2 < 0x7f) {
    return 0;
  }
  if (uVar2 < 0x97) {
    return uVar1 >> (0x96 - uVar2 & 0xff);
  }
  return uVar1 << (uVar2 - 0x96 & 0xff);
}


/* ---- FUN_0001b72c @ 0001b72c ---- */

int FUN_0001b72c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_2 << 1) >> 0x15;
  if ((int)uVar2 < DAT_0001b760) {
    return 0;
  }
  if ((int)uVar2 <= DAT_0001b760 + 0x34) {
    iVar1 = FUN_0001b7b0(param_1,param_2 & 0xfffff | 0x100000,(DAT_0001b760 + 0x34) - uVar2);
    return iVar1;
  }
  return param_1 << (uVar2 + DAT_0001b764 & 0xff);
}


/* ---- FUN_0001b768 @ 0001b768 ---- */

undefined8 FUN_0001b768(uint param_1)

{
  if ((param_1 & 0x7fffffff) != 0) {
    return CONCAT44((((param_1 & 0x7fffffff) >> 0x17) + 0x380) * 0x100000 | param_1 & 0x80000000 |
                    (param_1 & 0x7fffff) >> 3,(param_1 & 0x7fffff) << 0x1d);
  }
  return 0;
}


/* ---- FUN_0001b790 @ 0001b790 ---- */

longlong FUN_0001b790(uint param_1,int param_2,uint param_3)

{
  if (0x1f < (int)param_3) {
    return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
  }
  return CONCAT44(param_2 << (param_3 & 0xff) | param_1 >> (0x20 - param_3 & 0xff),
                  param_1 << (param_3 & 0xff));
}


/* ---- FUN_0001b7b0 @ 0001b7b0 ---- */

ulonglong FUN_0001b7b0(uint param_1,uint param_2,uint param_3)

{
  if (0x1f < (int)param_3) {
    return (ulonglong)(param_2 >> (param_3 - 0x20 & 0xff));
  }
  return CONCAT44(param_2 >> (param_3 & 0xff),
                  param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
}


/* ---- FUN_0001b7d2 @ 0001b7d2 ---- */

undefined8 FUN_0001b7d2(uint param_1,uint param_2,uint param_3)

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


/* ---- FUN_0001b7f8 @ 0001b7f8 ---- */

uint FUN_0001b7f8(uint param_1,uint param_2)

{
  if (((int)param_2 < 0) && (param_1 = param_1 + 1, (param_2 & 0x7fffffff) == 0)) {
    param_1 = param_1 & 0xfffffffe;
  }
  return param_1;
}


/* ---- FUN_0001b808 @ 0001b808 ---- */

uint FUN_0001b808(uint param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 >> 0x10 == 0) {
    uVar3 = 0x10;
    param_1 = param_1 << 0x10;
    if (param_1 == 0) {
      if (param_2 == 0) {
        return 0;
      }
      uVar3 = 0x11;
    }
  }
  if (param_1 >> 0x18 == 0) {
    param_1 = param_1 << 8;
    uVar3 = uVar3 + 8;
  }
  if (param_1 >> 0x1c == 0) {
    param_1 = param_1 << 4;
    uVar3 = uVar3 + 4;
  }
  if (param_1 >> 0x1e == 0) {
    param_1 = param_1 << 2;
    uVar3 = uVar3 + 2;
  }
  if (-1 < (int)param_1) {
    param_1 = param_1 << 1;
    uVar3 = uVar3 + 1;
  }
  if (param_2 != 0) {
    uVar1 = param_2 << (uVar3 & 0xff);
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    param_1 = param_1 | uVar1 | param_2 >> (0x20 - uVar3 & 0xff);
  }
  iVar2 = (param_4 - uVar3) + 7;
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = iVar2 * 0x800000 + (param_1 >> 8) + param_3;
    if (((int)(param_1 * 0x1000000) < 0) && (uVar3 = uVar3 + 1, (param_1 & 0x7f) == 0)) {
      return uVar3 & 0xfffffffe;
    }
  }
  return uVar3;
}


/* ---- FUN_0001b87a @ 0001b87a ---- */

undefined8 FUN_0001b87a(uint param_1,int param_2,uint param_3,int param_4)

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


/* ---- FUN_0001b894 @ 0001b894 ---- */

uint FUN_0001b894(undefined4 param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
                 int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    iVar1 = FUN_0001c148();
    iVar1 = iVar1 + 0x20;
  }
  else {
    iVar1 = FUN_0001c148(param_2);
  }
  uVar4 = FUN_0001b790(param_1,param_2,iVar1);
  uVar2 = (uint)(uVar4 >> 0x20);
  uVar3 = (uint)uVar4;
  if ((uVar3 | param_3 | uVar2 | param_4) != 0) {
    if ((param_3 | param_4) != 0) {
      uVar5 = FUN_0001b7b0(param_3,param_4,0x40 - iVar1);
      lVar6 = FUN_0001b790(param_3,param_4,iVar1);
      uVar4 = CONCAT44(uVar2 | (uint)((ulonglong)uVar5 >> 0x20),
                       uVar3 | (uint)uVar5 | (uint)(lVar6 != 0));
    }
    uVar3 = (uint)(uVar4 >> 0xb);
    iVar1 = (param_7 - iVar1) + 10;
    if (iVar1 < 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0001b87a(uVar3 + param_5,
                           iVar1 * 0x100000 + (int)((uVar4 >> 0xb) >> 0x20) + param_6 +
                           (uint)CARRY4(uVar3,param_5),0,(int)uVar4 << 0x15);
    }
  }
  return uVar3;
}


/* ---- FUN_0001b938 @ 0001b938 ---- */

longlong FUN_0001b938(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  if ((param_2 & 0x7fffffff | param_1) != 0) {
    uVar1 = (param_2 << 1) >> 0x15;
    if ((int)uVar1 <= DAT_0001b9ac) {
      if (DAT_0001b9ac + -0x35 < (int)uVar1) {
        iVar2 = DAT_0001b9ac - uVar1;
        uVar3 = FUN_0001b790(param_1,param_2,0x40 - iVar2,param_4,param_4);
        uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
        uVar4 = FUN_0001b7b0(param_1,param_2,iVar2);
        uVar3 = FUN_0001b87a((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar3,uVar6);
        lVar5 = FUN_0001b790((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),iVar2);
        return lVar5;
      }
      if ((DAT_0001b9ac + -0x35 <= (int)uVar1) &&
         ((param_1 << 0xc | param_2 << 0xc | param_1 >> 0x14) != 0)) {
        return (ulonglong)((param_2 & 0x80000000) + DAT_0001b9b0) << 0x20;
      }
      return 0;
    }
  }
  return CONCAT44(param_2,param_1);
}


/* ---- FUN_0001b9b4 @ 0001b9b4 ---- */

int FUN_0001b9b4(int param_1,int param_2)

{
  if (-1 < param_2) {
    param_1 = -param_1;
  }
  return param_1;
}


/* ---- FUN_0001b9dc @ 0001b9dc ---- */

int FUN_0001b9dc(int param_1,int param_2)

{
  if (-1 < param_2) {
    param_1 = -param_1;
  }
  return param_1;
}


/* ---- FUN_0001ba04 @ 0001ba04 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001ba04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  uint uVar13;
  code *UNRECOVERED_JUMPTABLE_00;
  char cVar14;
  char cVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined *puVar18;
  
  puVar12 = &DAT_0002da58;
  while( true ) {
    cVar15 = SBORROW4((int)puVar12,0x2da78);
    cVar14 = (int)(puVar12 + -0xb69e) < 0;
    if ((undefined4 *)0x2da77 < puVar12) break;
    param_3 = puVar12[2];
    (*(code *)puVar12[3])(*puVar12,puVar12[1],param_3);
    puVar12 = puVar12 + 4;
  }
  UNRECOVERED_JUMPTABLE_00 = (code *)0x1ba21;
  uVar16 = thunk_FUN_00024630();
  iVar6 = (int)((ulonglong)uVar16 >> 0x20);
  iVar4 = (int)uVar16;
  if (cVar14 == cVar15) {
    uVar2 = (undefined)uVar16;
    *(undefined *)(iVar4 + 0xc) = uVar2;
    *(undefined *)(iVar4 + 4) = uVar2;
    *(undefined *)(iVar4 + 0x14) = uVar2;
    FUN_00022bf8(DAT_0001baf4,iVar4,iVar6,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001baf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (iVar4 < 0 == (bool)cVar15) {
    puVar18 = &DAT_0002da78;
    uVar17 = 1;
    FUN_000286e0(s_STDA217Test_0001bc58);
    iVar4 = FUN_00025cec(DAT_0001bc68 + -8,DAT_0001bc68,0,0,puVar12,uVar17,puVar18,
                         UNRECOVERED_JUMPTABLE_00);
    if (iVar4 != 0) {
      app_error_handler(iVar4,0xee,s__________DA217_c_0001bc6c);
      FUN_000286e0(s_error_0001bc80);
    }
    FUN_0002ab34();
    uVar17 = FUN_00029598(1);
    uVar5 = FUN_00029598(0);
    FUN_000286e0(s_reg_data__x__x_0001bc88,uVar5,uVar17);
    uVar2 = FUN_00029598(0);
    puVar18 = _DAT_0001bc98;
    *_DAT_0001bc98 = uVar2;
    uVar17 = FUN_00029598(1);
    uVar5 = FUN_00029598(0);
    FUN_000286e0(s_reg_data__x__x_BMA253_USE__x_0001bc9b + 1,uVar5,uVar17,*puVar18);
    FUN_0002ca44(0,0x24);
    FUN_0002a404(0x14);
    FUN_0002ca44(0x11,4);
    FUN_0002ca44(0xf,0xc0);
    FUN_0002ca44(0x10,7);
    FUN_00024830();
    FUN_0002ca44(0x7f,0x83);
    FUN_0002ca44(0x7f,0x69);
    FUN_0002ca44(0x7f,0xbd);
    FUN_0002485c(0x8c,0x40,0);
    uVar17 = FUN_00029598(1);
    uVar5 = FUN_00029598(0);
    FUN_000286e0(s_reg_data__x__x_0001bc88,uVar5,uVar17);
    uVar17 = FUN_00029598(0x21);
    FUN_000286e0(s_NSA_REG_INT_LATCH__x_0001bcc0,uVar17);
    uVar17 = FUN_00029598(0x2a);
    FUN_000286e0(s_NSA_REG_TAP_DURATION__x_0001bcd8,uVar17);
    uVar17 = FUN_00029598(0x2b);
    FUN_000286e0(s_NSA_REG_TAP_THRESHOLD__x_0001bcf4,uVar17);
    uVar17 = FUN_00029598(0x19);
    FUN_000286e0(s_NSA_REG_INTERRUPT_MAPPING1__x_0001bd10,uVar17);
    uVar17 = FUN_00029598(0x16);
    FUN_000286e0(s_NSA_REG_INTERRUPT_SETTINGS1__x_0001bd30,uVar17);
    uVar17 = FUN_00029598(0x10);
    FUN_000286e0(s_10__x_0001bd50,uVar17);
    uVar17 = FUN_00029598(0x11);
    FUN_000286e0(s_11__x_0001bd58,uVar17);
    FUN_0002a404(1000);
    FUN_000286e0(s_da217_config_ok_0001bd60);
    return;
  }
  do {
    pbVar7 = (byte *)((ulonglong)uVar16 >> 0x20);
    pbVar11 = (byte *)uVar16;
    uVar13 = (uint)*pbVar11;
    pbVar3 = pbVar11 + 1;
    uVar10 = uVar13 & 7;
    if ((*pbVar11 & 7) == 0) {
      uVar10 = (uint)*pbVar3;
      pbVar3 = pbVar11 + 2;
    }
    uVar8 = (int)uVar13 >> 4;
    if (uVar8 == 0) {
      uVar8 = (uint)*pbVar3;
      pbVar3 = pbVar3 + 1;
    }
    while (uVar10 = uVar10 - 1, uVar10 != 0) {
      *pbVar7 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      pbVar7 = pbVar7 + 1;
    }
    if ((int)(uVar13 << 0x1c) < 0) {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      pbVar11 = pbVar7 + -(uint)bVar1;
      iVar9 = uVar8 + 2;
      while (iVar9 = iVar9 + -1, -1 < iVar9) {
        *pbVar7 = *pbVar11;
        pbVar7 = pbVar7 + 1;
        pbVar11 = pbVar11 + 1;
      }
    }
    else {
      while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
        *pbVar7 = 0;
        pbVar7 = pbVar7 + 1;
      }
    }
    uVar16 = CONCAT44(pbVar7,pbVar3);
  } while (pbVar7 < (byte *)(iVar6 + iVar4));
                    /* WARNING: Could not recover jumptable at 0x0001ba7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(0);
  return;
}


/* ---- FUN_0001ba28 @ 0001ba28 ---- */

void FUN_0001ba28(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  code *UNRECOVERED_JUMPTABLE;
  
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
                    /* WARNING: Could not recover jumptable at 0x0001ba7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}


/* ---- FUN_0001ba80 @ 0001ba80 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001ba80(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  code **ppcVar1;
  int iVar2;
  code *pcVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  ppcVar1 = DAT_0001bad0;
  local_18 = param_4;
  if (DAT_0001bad0[3] == (code *)0x0) {
    _DAT_40007100 = 0;
    _DAT_40007308 = 1;
    _DAT_40007500 = 0;
    local_20 = CONCAT31((int3)(param_2 >> 8),1);
    local_1c = (code *)CONCAT22((short)((uint)param_3 >> 0x10),(short)_DAT_40007508);
    *(undefined *)((int)DAT_0001bad0 + 0x12) = 1;
    pcVar3 = *ppcVar1;
  }
  else {
    local_20 = param_2;
    local_1c = (code *)param_3;
    iVar2 = FUN_0001cbc8();
    if (iVar2 == 0) {
      return;
    }
    _DAT_40007308 = 1;
    local_20 = local_20 & 0xffffff00;
    local_1c = ppcVar1[3];
    local_18 = CONCAT22(local_18._2_2_,(ushort)*(byte *)(ppcVar1 + 4));
    *(undefined *)((int)ppcVar1 + 0x12) = 1;
    pcVar3 = *ppcVar1;
  }
  (*pcVar3)(&local_20);
  return;
}


/* ---- FUN_0001bb18 @ 0001bb18 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001bb18(void)

{
  undefined *puVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_000286e0(s_STDA217Test_0001bc58);
  iVar3 = FUN_00025cec(DAT_0001bc68 + -8,DAT_0001bc68,0);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0xee,s__________DA217_c_0001bc6c);
    FUN_000286e0(s_error_0001bc80);
  }
  FUN_0002ab34();
  uVar4 = FUN_00029598(1);
  uVar5 = FUN_00029598(0);
  FUN_000286e0(s_reg_data__x__x_0001bc88,uVar5,uVar4);
  uVar2 = FUN_00029598(0);
  puVar1 = _DAT_0001bc98;
  *_DAT_0001bc98 = uVar2;
  uVar4 = FUN_00029598(1);
  uVar5 = FUN_00029598(0);
  FUN_000286e0(s_reg_data__x__x_BMA253_USE__x_0001bc9b + 1,uVar5,uVar4,*puVar1);
  FUN_0002ca44(0,0x24);
  FUN_0002a404(0x14);
  FUN_0002ca44(0x11,4);
  FUN_0002ca44(0xf,0xc0);
  FUN_0002ca44(0x10,7);
  FUN_00024830();
  FUN_0002ca44(0x7f,0x83);
  FUN_0002ca44(0x7f,0x69);
  FUN_0002ca44(0x7f,0xbd);
  FUN_0002485c(0x8c,0x40,0);
  uVar4 = FUN_00029598(1);
  uVar5 = FUN_00029598(0);
  FUN_000286e0(s_reg_data__x__x_0001bc88,uVar5,uVar4);
  uVar4 = FUN_00029598(0x21);
  FUN_000286e0(s_NSA_REG_INT_LATCH__x_0001bcc0,uVar4);
  uVar4 = FUN_00029598(0x2a);
  FUN_000286e0(s_NSA_REG_TAP_DURATION__x_0001bcd8,uVar4);
  uVar4 = FUN_00029598(0x2b);
  FUN_000286e0(s_NSA_REG_TAP_THRESHOLD__x_0001bcf4,uVar4);
  uVar4 = FUN_00029598(0x19);
  FUN_000286e0(s_NSA_REG_INTERRUPT_MAPPING1__x_0001bd10,uVar4);
  uVar4 = FUN_00029598(0x16);
  FUN_000286e0(s_NSA_REG_INTERRUPT_SETTINGS1__x_0001bd30,uVar4);
  uVar4 = FUN_00029598(0x10);
  FUN_000286e0(s_10__x_0001bd50,uVar4);
  uVar4 = FUN_00029598(0x11);
  FUN_000286e0(s_11__x_0001bd58,uVar4);
  FUN_0002a404(1000);
  FUN_000286e0(s_da217_config_ok_0001bd60);
  return;
}


/* ---- FUN_0001bd74 @ 0001bd74 ---- */

void FUN_0001bd74(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_28 [2];
  undefined4 local_20;
  undefined4 local_1c [2];
  
  uVar6 = 0;
  sVar8 = 0x100;
  uVar7 = 1;
  uVar9 = 0;
  local_28[0] = 0;
  do {
    iVar2 = FUN_00025fc4(sVar8);
    if ((iVar2 != 0) && ((*(uint *)(DAT_0001bee0 + 4) & uVar7) != 0)) {
      FUN_00025fb4(sVar8);
      uVar6 = uVar6 | uVar7;
    }
    sVar8 = sVar8 + 4;
    uVar7 = uVar7 << 1;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  iVar2 = FUN_00025fc4(0x17c);
  if (iVar2 != 0) {
    FUN_00025fb4(0x17c);
    uVar6 = uVar6 | 0x80000000;
    FUN_00025f8c(0,1,local_28);
  }
  iVar2 = DAT_0001bee4;
  if ((uVar6 & 0xf) != 0) {
    uVar9 = 1;
    uVar7 = 0;
    do {
      if ((uVar9 & uVar6) != 0) {
        iVar3 = uVar7 * 4 + DAT_0001bee8;
        pcVar5 = *(code **)(iVar2 + uVar7 * 4);
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)((uint)(*(int *)(iVar3 + 0x10) << 0x13) >> 0x1b,
                    (uint)(*(int *)(iVar3 + 0x10) << 0xe) >> 0x1e);
        }
      }
      uVar9 = uVar9 << 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
  }
  if (-1 < (int)uVar6) {
    return;
  }
  local_20 = 0;
  local_1c[0] = 0xffffffff;
  do {
    uVar7 = 0;
    uVar6 = uVar7;
    do {
      bVar1 = *(byte *)(iVar2 + uVar7 + 0x44);
      local_40 = bVar1 & 0x3f;
      if ((*(char *)(iVar2 + uVar7 + 0x44) != -1) &&
         (iVar3 = FUN_00024e28(local_40,local_1c), iVar3 != 0)) {
        local_3c = (uint)(bVar1 >> 6);
        iVar3 = FUN_000209b0(local_40);
        pcVar5 = *(code **)(iVar2 + iVar3 * 4);
        if (pcVar5 == (code *)0x0) {
          if (local_3c == 3) goto LAB_0001be46;
        }
        else {
          if (local_3c == 3) {
LAB_0001be46:
            *(byte *)((int)&local_20 + (local_40 >> 3)) =
                 *(byte *)((int)&local_20 + (local_40 >> 3)) | (byte)(1 << (local_40 & 7));
          }
          local_38 = (uint)(*(int *)(local_40 * 4 + 0x50000700) << 0xe) >> 0x1e;
          iVar3 = FUN_00024e28(local_40,local_28);
          if (iVar3 == 0) {
            if (local_38 == 3) goto LAB_0001be8e;
          }
          else if (local_38 == 2) {
LAB_0001be8e:
            if (local_3c == 3) {
              if (local_38 == 2) {
                uVar4 = 3;
              }
              else {
                uVar4 = 2;
              }
              FUN_00025f5a(local_40,uVar4);
              uVar6 = uVar6 + 1 & 0xff;
            }
            if (pcVar5 != (code *)0x0) {
              (*pcVar5)(local_40,local_3c);
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 5);
    if (uVar6 == 0) {
      return;
    }
    FUN_00025f8c(0,1,&local_40);
    if (local_40 == local_28[0]) {
      return;
    }
    local_28[0] = local_40;
    local_1c[0] = local_20;
  } while( true );
}


/* ---- FUN_0001beec @ 0001beec ---- */

void FUN_0001beec(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = (param_1 << 0x1e) >> 0x1b;
  uVar2 = 0xff << uVar3;
  uVar3 = ((uint)(param_2 << 0x1e) >> 0x18) << uVar3;
  if ((int)param_1 < 0) {
    iVar1 = ((param_1 & 0xf) - 8 & 0xfffffffc) + DAT_0001bf28;
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & ~uVar2 | uVar3;
    return;
  }
  puVar4 = (uint *)((param_1 & 0xfffffffc) + DAT_0001bf2c);
  *puVar4 = *puVar4 & ~uVar2 | uVar3;
  return;
}


/* ---- nvic_system_reset @ 0001bf30 ---- */

void nvic_system_reset(void)

{
  DataSynchronizationBarrier(0xf);
  *(undefined4 *)(DAT_0001bf48 + 0xc) = DAT_0001bf44;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001bf4c @ 0001bf4c ---- */

void FUN_0001bf4c(void)

{
  DataSynchronizationBarrier(0xf);
  *(undefined4 *)(DAT_0001bf64 + 0xc) = DAT_0001bf60;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001bf68 @ 0001bf68 ---- */

void FUN_0001bf68(void)

{
  FUN_00025310();
  FUN_0002577c();
  return;
}


/* ---- FUN_0001bf74 @ 0001bf74 ---- */

void FUN_0001bf74(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0001bf90;
  *DAT_0001bf90 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1 = DAT_0001bf90;
  DAT_0001bf90[-0x10] = 0;
  puVar1[-0xf] = 0;
  FUN_0002aee0();
  return;
}


/* ---- FUN_0001bf94 @ 0001bf94 ---- */

void FUN_0001bf94(void)

{
  FUN_000231f0(DAT_0001bfa4,DAT_0001bfa0);
  return;
}


/* ---- FUN_0001bfa8 @ 0001bfa8 ---- */

void FUN_0001bfa8(void)

{
  FUN_000231f0(DAT_0001bfb8,DAT_0001bfb4);
  return;
}


/* ---- FUN_0001bfbc @ 0001bfbc ---- */

void FUN_0001bfbc(void)

{
  FUN_0002adc4();
  return;
}


/* ---- FUN_0001bfc4 @ 0001bfc4 ---- */

void FUN_0001bfc4(void)

{
  int iVar1;
  
  if (*(code **)(DAT_0001bfe8 + 4) != (code *)0x0) {
    iVar1 = (**(code **)(DAT_0001bfe8 + 4))();
    if (iVar1 != 0) {
      app_error_handler(iVar1,0x1ab,DAT_0001bfec);
    }
    return;
  }
  FUN_00023138();
  return;
}


/* ---- FUN_0001bff0 @ 0001bff0 ---- */

void FUN_0001bff0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = FUN_00023360();
  iVar2 = DAT_0001c078;
  if (iVar4 != 0) {
    *(undefined4 *)(DAT_0001c078 + 4) = DAT_0001c074;
    *(int *)(DAT_0001c07c + 0x18) = iVar2 >> 0xf;
  }
  iVar2 = DAT_0001c080;
  cVar1 = (char)*(undefined2 *)(DAT_0001c080 + 0x20);
  if ((((cVar1 == '\x01') && ((*(ushort *)(DAT_0001c080 + 0x24) & 0xf) == 0)) &&
      (((uint)*(ushort *)(DAT_0001c080 + 0x28) << 0x18) >> 0x1c == 4)) &&
     (((uint)*(ushort *)(DAT_0001c080 + 0x2c) << 0x18) >> 0x1c == 0)) {
    *(undefined4 *)(DAT_0001c084 + 8) = 1;
  }
  else {
    if (cVar1 != '\x01') {
      return;
    }
    if ((*(ushort *)(DAT_0001c080 + 0x24) & 0xf) != 0) {
      return;
    }
  }
  piVar3 = DAT_0001c088;
  uVar5 = ((uint)*(ushort *)(iVar2 + 0x28) << 0x18) >> 0x1c;
  if (((uVar5 == 10) && (((uint)*(ushort *)(iVar2 + 0x2c) << 0x18) >> 0x1c == 0)) ||
     ((uVar5 == 0xd && (((uint)*(ushort *)(iVar2 + 0x2c) << 0x18) >> 0x1c == 0)))) {
    if (*DAT_0001c088 != 1) {
      *DAT_0001c088 = DAT_0001c08c;
      do {
      } while (*piVar3 != 1);
    }
    piVar3[5] = 0xc0;
  }
  return;
}


/* ---- FUN_0001c090 @ 0001c090 ---- */

void FUN_0001c090(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_0001c0cc;
  uVar3 = 0;
  do {
    iVar2 = uVar3 * 4 + 0x140;
    if ((*(int *)(iVar1 + iVar2) != 0) && ((*(uint *)(iVar1 + 0x304) & 0x10000 << uVar3) != 0)) {
      *(undefined4 *)(iVar1 + iVar2) = 0;
      (**DAT_0001c0d0)(iVar2,DAT_0001c0d0[1]);
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 4);
  return;
}


/* ---- FUN_0001c0d4 @ 0001c0d4 ---- */

void FUN_0001c0d4(void)

{
  int iVar1;
  
  iVar1 = DAT_0001c0f4;
  if (*(int *)(DAT_0001c0f4 + 8) != 0) {
    *(undefined4 *)(DAT_0001c0f4 + 8) = 0;
  }
  if (*(int *)(iVar1 + 0x1c) != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  if (*(int *)(iVar1 + 0x24) != 0) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  return;
}


/* ---- FUN_0001c0f8 @ 0001c0f8 ---- */

void FUN_0001c0f8(void)

{
  if ((*(uint *)(DAT_0001c114 + 4) & 1) != 0) {
    *DAT_0001c118 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001c10e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_0001c11c + 4))();
    return;
  }
  return;
}


/* ---- FUN_0001c120 @ 0001c120 ---- */

undefined4 FUN_0001c120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  uVar1 = FUN_0001c1cc(param_2,&uStack_8,&uStack_10,DAT_0001c144);
  FUN_0001c31c(0,&uStack_10);
  return uVar1;
}


/* ---- FUN_0001c148 @ 0001c148 ---- */

int FUN_0001c148(uint param_1)

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


/* ---- __ARM_common_switch8 @ 0001c176 ---- */

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
                    /* WARNING: Could not recover jumptable at 0x0001c18e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr + (uint)*(byte *)(in_lr + uVar1) * 2))();
  return;
}


/* ---- FUN_0001c1b0 @ 0001c1b0 ---- */

undefined4 FUN_0001c1b0(uint param_1)

{
  if (((int)param_1 < 0x20) && ((1 << (param_1 & 0xff) & DAT_0001c1c8) == 0)) {
    return 0;
  }
  return 1;
}


/* ---- FUN_0001c1cc @ 0001c1cc ---- */

int FUN_0001c1cc(byte *param_1,int *param_2,undefined4 param_3,code *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char extraout_r1;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int local_58;
  int local_54;
  undefined local_50 [35];
  undefined local_2d;
  int local_2c [2];
  byte *pbStack_24;
  int *local_20;
  undefined4 local_1c;
  code *local_18;
  
  local_18 = param_4;
  local_1c = param_3;
  pbStack_24 = param_1;
  iVar6 = 0;
  local_20 = param_2;
  do {
    while( true ) {
      bVar1 = *param_1;
      if (bVar1 == 0) {
        return iVar6;
      }
      if (bVar1 == 0x25) break;
      (*local_18)(bVar1,local_1c);
      param_1 = param_1 + 1;
      iVar6 = iVar6 + 1;
    }
    uVar8 = 0;
    local_58 = 0;
    while( true ) {
      pbVar5 = param_1 + 1;
      uVar3 = 1 << (*pbVar5 - 0x20 & 0xff);
      if ((uVar3 & DAT_0001c318) == 0) break;
      uVar8 = uVar8 | uVar3;
      param_1 = pbVar5;
    }
    if (*pbVar5 == 0x2e) {
      uVar8 = uVar8 | 4;
      pbVar5 = param_1 + 2;
      if (param_1[2] == 0x2a) {
        pbVar5 = param_1 + 3;
        local_58 = *local_20;
        local_20 = local_20 + 1;
      }
      else {
        for (; *pbVar5 - 0x30 < 10; pbVar5 = pbVar5 + 1) {
          local_58 = (uint)*pbVar5 + local_58 * 10 + -0x30;
        }
      }
    }
    bVar1 = *pbVar5;
    if (bVar1 == 0) {
      return iVar6;
    }
    if ((bVar1 == 100) || (bVar1 == 0x69)) {
      iVar4 = *local_20;
      local_20 = local_20 + 1;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
        local_50[0] = 0x2d;
      }
      else if ((int)(uVar8 << 0x14) < 0) {
        local_50[0] = 0x2b;
      }
      else {
        if ((uVar8 & 1) == 0) goto LAB_0001c28c;
        local_50[0] = 0x20;
      }
      local_2c[0] = 1;
LAB_0001c286:
      piVar7 = local_2c;
      while (iVar4 != 0) {
        iVar4 = FUN_0001b110(iVar4,10);
        piVar7 = (int *)((int)piVar7 + -1);
        *(char *)piVar7 = extraout_r1 + '0';
      }
      local_54 = (int)local_2c - (int)piVar7;
      if (-1 < (int)(uVar8 << 0x1d)) {
        local_58 = 1;
      }
      if (local_54 < local_58) {
        local_58 = local_58 - local_54;
      }
      else {
        local_58 = 0;
      }
      for (iVar4 = 0; iVar4 < local_2c[0]; iVar4 = iVar4 + 1) {
        (*local_18)(local_50[iVar4],local_1c);
        iVar6 = iVar6 + 1;
      }
      while (0 < local_58) {
        (*local_18)(0x30,local_1c);
        iVar6 = iVar6 + 1;
        local_58 = local_58 + -1;
      }
      while (0 < local_54) {
        cVar2 = *(char *)piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
        (*local_18)(cVar2,local_1c);
        iVar6 = iVar6 + 1;
        local_54 = local_54 + -1;
      }
    }
    else {
      if (bVar1 == 0x75) {
        iVar4 = *local_20;
        local_20 = local_20 + 1;
LAB_0001c28c:
        local_2c[0] = 0;
        goto LAB_0001c286;
      }
      (*local_18)(bVar1,local_1c);
      iVar6 = iVar6 + 1;
    }
    param_1 = pbVar5 + 1;
  } while( true );
}


/* ---- FUN_0001c31c @ 0001c31c ---- */

void FUN_0001c31c(undefined param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_2;
  *param_2 = puVar1 + 1;
  *puVar1 = param_1;
  return;
}


/* ---- FUN_0001c328 @ 0001c328 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001c328(void)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  
  bVar3 = FUN_00029598(9);
  uVar7 = (uint)bVar3;
  FUN_000286e0(s_accel_event_process______________0001c430,uVar7);
  iVar4 = _DAT_0001c458;
  iVar6 = _DAT_0001c458 + 0xd;
  if ((int)(uVar7 * 0x8000000) < 0) {
    FUN_000286e0(s_Double_TAP_detected__int_state__0_0001c45b + 1,uVar7,
                 *(undefined *)(_DAT_0001c458 + 8),*(undefined *)(_DAT_0001c458 + 0xd));
    if (*(int *)(_DAT_0001c48c + 8) == -1) {
      FUN_00028e68();
    }
    cVar1 = *(char *)(iVar4 + 8);
    if ((cVar1 == -0x7f) || (cVar1 == '\x01')) {
      FUN_000286e0(s_Double_TAP_detected__001_0001c48f + 1);
      FUN_0002bfb4();
      if (*(char *)(iVar4 + 8) == -0x7f) {
        iVar4 = FUN_000286e0(s_Double_TAP_detected__002_0001c4ac);
        software_interrupt(0x74);
        if (iVar4 != 0) {
          FUN_000286e0(s_Stop_adv_ERROR_in_func___s__line_0001c4cc,DAT_0001c4c8,0x4e);
        }
      }
      iVar4 = FUN_0001cf18();
      if (iVar4 != 0) {
        FUN_000286e0(s_Start_adv_ERROR_in_func___s__lin_0001c4f4,DAT_0001c4c8,0x59);
      }
      pcVar5 = s_Double_TAP_detected__003_0001c520;
    }
    else {
      if (cVar1 == -0x7c) {
        if (*(char *)(iVar4 + 0xd) == '\x12') {
          FUN_000286e0(s_Double_TAP_detected__004_0001c558);
          FUN_00028e90();
          return;
        }
      }
      else if (cVar1 == -0x7b) {
        if (*(char *)(iVar4 + 0x1b) != '\x01') {
          FUN_000286e0(s_Double_tap_detected_in_double_ta_0001c574);
          FUN_0002c974(0);
          FUN_0002bcf0(200,0);
          return;
        }
        FUN_000286e0(s_Double_tap_detected_in_double_ta_0001c5a8);
        *(undefined *)(iVar4 + 0xd) = 0x17;
        iVar2 = _DAT_0001c458;
        *(undefined *)(iVar4 + 0xe) = 0;
        FUN_0001b22a(0,iVar2 + 0xf);
        FUN_0001b22a(0,_DAT_0001c458 + 0x13);
        goto LAB_0001c422;
      }
      FUN_0002bfb4();
      pcVar5 = s_Double_TAP_detected__007_0001c53c;
    }
  }
  else {
    if ((int)(uVar7 << 0x1a) < 0) {
      FUN_000286e0(s_Single_TAP_detected__int_state__0_0001c5dc,uVar7);
      FUN_0001b1ce(iVar6,0xe);
      *(undefined *)(iVar4 + 0xd) = 0x16;
LAB_0001c422:
      FUN_00024d24(iVar6);
      return;
    }
    pcVar5 = s_Double_TAP_detected__006_0001c604;
  }
  FUN_000286e0(pcVar5);
  return;
}


/* ---- FUN_0001c620 @ 0001c620 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001c620(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint in_r3;
  uint local_10;
  
  local_10 = in_r3;
  FUN_000286e0(s_accel_event_process_0001c72c);
  iVar3 = FUN_0001fcf0(&local_10);
  iVar5 = _DAT_0001c768;
  if (iVar3 == 0) {
    uVar6 = local_10 & 0xff;
    iVar3 = _DAT_0001c768 + 0xd;
    if ((int)(uVar6 * 0x8000000) < 0) {
      FUN_000286e0(s_Double_TAP_detected__int_state__0_0001c76b + 1,uVar6,
                   *(undefined *)(_DAT_0001c768 + 8),*(undefined *)(_DAT_0001c768 + 0xd));
      if (*(int *)(_DAT_0001c79c + 8) == -1) {
        FUN_00028e68();
      }
      cVar1 = *(char *)(iVar5 + 8);
      if ((cVar1 == -0x7f) || (cVar1 == '\x01')) {
        FUN_000286e0(s_Double_TAP_detected__001_0001c79f + 1);
        FUN_0002bfb4();
        if (*(char *)(iVar5 + 8) == -0x7f) {
          iVar5 = FUN_000286e0(s_Double_TAP_detected__002_0001c7bc);
          software_interrupt(0x74);
          if (iVar5 != 0) {
            FUN_000286e0(s_Stop_adv_ERROR_in_func___s__line_0001c7dc,DAT_0001c7d8,200);
          }
        }
        iVar5 = FUN_0001cf18();
        if (iVar5 != 0) {
          FUN_000286e0(s_Start_adv_ERROR_in_func___s__lin_0001c804,DAT_0001c7d8,0xd3);
        }
        pcVar4 = s_Double_TAP_detected__003_0001c830;
      }
      else {
        if (cVar1 == -0x7c) {
          if (*(char *)(iVar5 + 0xd) == '\x12') {
            FUN_000286e0(s_Double_TAP_detected__004_0001c868);
            FUN_00028e90();
            return;
          }
        }
        else if (cVar1 == -0x7b) {
          if (*(char *)(iVar5 + 0x1b) != '\x01') {
            FUN_000286e0(s_Double_tap_detected_in_double_ta_0001c884);
            FUN_0002c974(0);
            FUN_0002bcf0(200,0);
            return;
          }
          FUN_000286e0(s_Double_tap_detected_in_double_ta_0001c8b8);
          *(undefined *)(iVar5 + 0xd) = 0x17;
          iVar2 = _DAT_0001c768;
          *(undefined *)(iVar5 + 0xe) = 0;
          FUN_0001b22a(0,iVar2 + 0xf);
          FUN_0001b22a(0,_DAT_0001c768 + 0x13);
          goto LAB_0001c71e;
        }
        FUN_0002bfb4();
        pcVar4 = s_Double_TAP_detected__007_0001c84c;
      }
    }
    else {
      if ((int)(uVar6 << 0x1a) < 0) {
        FUN_000286e0(s_Single_TAP_detected__int_state__0_0001c8ec);
        FUN_0001b1ce(iVar3,0xe);
        *(undefined *)(iVar5 + 0xd) = 0x16;
LAB_0001c71e:
        FUN_00024d24(iVar3);
        return;
      }
      pcVar4 = s_Double_TAP_detected__006_0001c914;
    }
  }
  else {
    pcVar4 = s_bma2x2_get_intr_stat____SUCCESS_0001c744;
  }
  FUN_000286e0(pcVar4);
  return;
}


/* ---- FUN_0001c930 @ 0001c930 ---- */

int FUN_0001c930(void)

{
  int iVar1;
  
  iVar1 = FUN_0001fdd8();
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_0001c940 @ 0001c940 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001c940(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  FUN_000286e0(s_____accel_init______0001ca58);
  pcVar1 = DAT_0001ca70;
  *DAT_0001ca70 = '\0';
  iVar3 = FUN_0001c930();
  if (iVar3 == 0) {
    FUN_0001fe18();
    FUN_0001bb18();
    FUN_0001fd18();
    FUN_000286e0(s_____accel_init__error____0001ca9c);
  }
  else {
    iVar3 = FUN_0001fe28(DAT_0001ca74);
    pcVar2 = _DAT_0001ca78;
    FUN_000286e0(s_____bma2x2_init____x__d___0001ca7b + 1,*_DAT_0001ca78,iVar3);
    if (*pcVar2 == -6) {
      *pcVar1 = -6;
      if (((((((iVar3 == 0) && (iVar3 = FUN_000207ec(), iVar3 == 0)) &&
             (iVar3 = FUN_00020324(1), iVar3 == 0)) &&
            ((iVar3 = FUN_000204a4(9), iVar3 == 0 && (iVar3 = FUN_00020534(1), iVar3 == 0)))) &&
           ((iVar3 = FUN_0001fe9c(0xd), iVar3 == 0 &&
            ((iVar3 = FUN_00020410(5), iVar3 == 0 && (iVar3 = FUN_0002058c(4,1), iVar3 == 0)))))) &&
          (iVar3 = FUN_000207a0(*(undefined *)(DAT_0001cab8 + 6)), iVar3 == 0)) &&
         (((((iVar3 = FUN_00020148(0,1), iVar3 == 0 && (iVar3 = FUN_000200d4(0), iVar3 == 0)) &&
            (iVar3 = FUN_0001ff3c(0,1), iVar3 == 0)) &&
           (((iVar3 = FUN_00020230(2), iVar3 == 0 && (iVar3 = FUN_00020670(6), iVar3 == 0)) &&
            ((iVar3 = FUN_00020754(1), iVar3 == 0 &&
             ((iVar3 = FUN_000206bc(1), iVar3 == 0 && (iVar3 = FUN_00020708(), iVar3 == 0)))))))) &&
          (iVar3 = FUN_0001ffb0(9,1), iVar3 == 0)))) {
        FUN_0001fd18();
        return 1;
      }
    }
    else {
      FUN_0001fe18();
      *pcVar1 = *pcVar2;
      FUN_0001bb18();
      FUN_0001fd18();
    }
  }
  return 0;
}


/* ---- FUN_0001cb30 @ 0001cb30 ---- */

undefined4 FUN_0001cb30(void)

{
  int iVar1;
  
  if ((*DAT_0001cb70 == -6) &&
     ((((iVar1 = FUN_0001ffb0(8,0), iVar1 != 0 || (iVar1 = FUN_000201bc(0), iVar1 != 0)) ||
       (iVar1 = FUN_0001ff3c(0,1), iVar1 != 0)) || (iVar1 = FUN_0001ffb0(9,1), iVar1 != 0)))) {
    return 0;
  }
  return 1;
}


/* ---- FUN_0001cb74 @ 0001cb74 ---- */

undefined4 FUN_0001cb74(void)

{
  int iVar1;
  
  if ((*DAT_0001cbc0 == -6) &&
     ((((iVar1 = FUN_000207a0(*(undefined *)(DAT_0001cbc4 + 6)), iVar1 != 0 ||
        (iVar1 = FUN_0001ffb0(9,0), iVar1 != 0)) || (iVar1 = FUN_0001ff3c(0), iVar1 != 0)) ||
      ((iVar1 = FUN_000201bc(0,1), iVar1 != 0 || (iVar1 = FUN_0001ffb0(8,1), iVar1 != 0)))))) {
    return 0;
  }
  return 1;
}


/* ---- FUN_0001cbc8 @ 0001cbc8 ---- */

undefined4 FUN_0001cbc8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  puVar1 = DAT_0001cc18;
  *DAT_0001cc1c = 0;
  puVar2 = DAT_0001cc20;
  *DAT_0001cc20 = 0;
  iVar3 = DAT_0001cc24;
  uVar4 = *(byte *)(DAT_0001cc24 + 0x11) + 1;
  *(short *)(*(int *)(DAT_0001cc24 + 0xc) + (uint)*(byte *)(DAT_0001cc24 + 0x11) * 2) =
       (short)puVar2[2];
  *(char *)(iVar3 + 0x11) = (char)uVar4;
  if ((uVar4 & 0xff) < (uint)*(byte *)(iVar3 + 0x10)) {
    puVar5 = *(undefined4 **)(*(int *)(iVar3 + 8) + 4);
    bVar6 = puVar5 == (undefined4 *)0x0;
    if (bVar6) {
      puVar5 = *(undefined4 **)(iVar3 + 4);
      *(undefined4 **)(iVar3 + 8) = puVar5;
    }
    else {
      *(undefined4 **)(iVar3 + 8) = puVar5;
    }
    puVar2[1] = *puVar5;
    *puVar2 = 1;
    if (!bVar6) {
      *puVar1 = 1;
    }
    return 0;
  }
  return 1;
}


/* ---- FUN_0001cc28 @ 0001cc28 ---- */

undefined4 FUN_0001cc28(char *param_1,char *param_2)

{
  int iVar1;
  
  if ((((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) && (*param_1 == *param_2)) &&
     (iVar1 = FUN_0001b1f2(param_1 + 1,param_2 + 1,6), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0001cc50 @ 0001cc50 ---- */

undefined * FUN_0001cc50(char *param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  char cVar2;
  undefined uVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  bool bVar7;
  ushort *local_30;
  uint local_2c;
  char *local_28;
  char *pcStack_20;
  int local_1c;
  ushort *puStack_18;
  
  puVar5 = (undefined *)0x0;
  uVar6 = (uint)*param_3;
  *param_3 = 0;
  local_28 = param_1 + 0x20;
  pcStack_20 = param_1;
  local_1c = param_2;
  puStack_18 = param_3;
  if ((param_1[0x2d] != '\0') &&
     (puVar5 = (undefined *)FUN_0001f824(param_2,param_3,uVar6), puVar5 != (undefined *)0x0)) {
    return puVar5;
  }
  if (param_1[2] == '\0') {
LAB_0001ccc4:
    if (param_1[3] != '\0') {
      cVar2 = param_1[3];
      if (uVar6 < *param_3 + 3) goto LAB_0001cc88;
      *(undefined *)(local_1c + (uint)*param_3) = 2;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(local_1c + (uint)(ushort)(uVar1 + 1)) = 1;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(char *)(local_1c + (uint)(ushort)(uVar1 + 1)) = cVar2;
      *param_3 = *param_3 + 1;
    }
    if (*(undefined **)(param_1 + 4) != (undefined *)0x0) {
      uVar3 = **(undefined **)(param_1 + 4);
      if (uVar6 < *param_3 + 3) goto LAB_0001cc88;
      *(undefined *)(local_1c + (uint)*param_3) = 2;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(local_1c + (uint)(ushort)(uVar1 + 1)) = 10;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(local_1c + (uint)(ushort)(uVar1 + 1)) = uVar3;
      *param_3 = *param_3 + 1;
    }
    if (*(short *)(param_1 + 8) == 0) goto LAB_0001cd4c;
    local_30 = param_3;
    local_2c = uVar6;
    puVar5 = (undefined *)FUN_0002c884(param_1 + 8,2,6,local_1c);
    bVar7 = puVar5 == (undefined *)0x0;
LAB_0001cd4a:
    do {
      if (!bVar7) {
        return puVar5;
      }
LAB_0001cd4c:
      if ((*(short *)(param_1 + 0x10) != 0) &&
         (local_30 = param_3, local_2c = uVar6,
         puVar5 = (undefined *)FUN_0002c884(param_1 + 0x10,3,7,local_1c), puVar5 != (undefined *)0x0
         )) {
        return puVar5;
      }
      if ((*(short *)(param_1 + 0x18) != 0) &&
         (local_30 = param_3, local_2c = uVar6,
         puVar5 = (undefined *)FUN_0002c884(param_1 + 0x18,0x14,0x15,local_1c),
         puVar5 != (undefined *)0x0)) {
        return puVar5;
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        puVar5 = (undefined *)FUN_00021230(*(int *)(param_1 + 0x20),local_1c,param_3,uVar6);
        bVar7 = puVar5 == (undefined *)0x0;
        if (!bVar7) goto LAB_0001cd4a;
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        puVar5 = (undefined *)FUN_000247c8(*(int *)(param_1 + 0x24),local_1c,param_3,uVar6);
        bVar7 = puVar5 == (undefined *)0x0;
        if (!bVar7) goto LAB_0001cd4a;
      }
      if (local_28[0xc] != '\0') {
        puVar5 = (undefined *)FUN_00029f74(param_1,local_1c,param_3,uVar6);
        bVar7 = puVar5 == (undefined *)0x0;
        if (!bVar7) goto LAB_0001cd4a;
      }
      if (*param_1 == '\0') {
        return puVar5;
      }
      puVar5 = (undefined *)FUN_0002497c(param_1,local_1c,param_3,uVar6);
      bVar7 = puVar5 == (undefined *)0x0;
    } while (!bVar7);
  }
  else {
    if (*param_3 + 4 <= uVar6) {
      software_interrupt(0x79);
      if (&stack0x00000000 != &Reserved5) {
        return (undefined *)&local_30;
      }
      *(undefined *)(local_1c + (uint)*param_3) = 3;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(local_1c + (uint)(ushort)(uVar1 + 1)) = 0x19;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      sVar4 = FUN_0002b86c((uint)local_30 & 0xffff,(uint)(ushort)(uVar1 + 1) + local_1c);
      *param_3 = sVar4 + *param_3;
      goto LAB_0001ccc4;
    }
LAB_0001cc88:
    puVar5 = &HardFault;
  }
  return puVar5;
}


/* ---- FUN_0001cde0 @ 0001cde0 ---- */

undefined4 FUN_0001cde0(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (*(char *)(DAT_0001ce40 + uVar2) != '\0') {
      bVar1 = true;
      goto LAB_0001cdf6;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  bVar1 = false;
LAB_0001cdf6:
  if (param_1 == 1) {
    if ((*(char *)(DAT_0001ce44 + 1) != '\0') && (bVar1)) {
      return 1;
    }
LAB_0001ce18:
    if ((*(char *)(DAT_0001ce44 + 2) != '\0') && (bVar1)) {
      return 2;
    }
  }
  else {
    if (param_1 == 2) goto LAB_0001ce18;
    if (param_1 != 3) {
      if (param_1 != 4) {
        return 0;
      }
      goto LAB_0001ce30;
    }
  }
  if (*(char *)(DAT_0001ce44 + 3) != '\0') {
    return 3;
  }
LAB_0001ce30:
  if (*(char *)(DAT_0001ce44 + 4) == '\0') {
    return 0;
  }
  return 4;
}


/* ---- FUN_0001ce48 @ 0001ce48 ---- */

void FUN_0001ce48(void)

{
  int iVar1;
  undefined local_bc [2];
  undefined local_ba;
  undefined local_b9;
  undefined2 *local_98;
  undefined auStack_80 [16];
  undefined2 local_70;
  undefined4 local_6c;
  undefined auStack_44 [3];
  undefined local_41;
  undefined local_40;
  uint local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  undefined local_24;
  undefined local_23;
  undefined local_22;
  undefined local_21;
  undefined local_20;
  undefined local_1f;
  undefined2 local_1c [2];
  undefined2 local_18;
  undefined *local_14;
  
  local_24 = *(undefined *)(DAT_0001cee4 + 9);
  local_23 = *(undefined *)(DAT_0001cee4 + 8);
  local_22 = *(undefined *)(DAT_0001cee4 + 7);
  local_21 = *(undefined *)(DAT_0001cee4 + 6);
  local_20 = *(undefined *)(DAT_0001cee4 + 5);
  local_1f = *(undefined *)(DAT_0001cee4 + 4);
  local_1c[0] = 0xffff;
  local_14 = &local_24;
  local_18 = 6;
  FUN_0001b1ce(local_bc,0x3c);
  local_bc[0] = 2;
  local_ba = 1;
  local_b9 = 6;
  local_98 = local_1c;
  FUN_0001b1ce(auStack_80,0x3c);
  local_70 = 1;
  local_6c = DAT_0001cee8;
  FUN_0001b1ce(auStack_44,0x20);
  local_41 = 1;
  local_34 = (uint)*(ushort *)(DAT_0001ceec + 0x34);
  local_30 = (uint)*(ushort *)(DAT_0001ceec + 0x36);
  local_40 = 1;
  local_2c = DAT_0001cef0;
  local_28 = 0;
  iVar1 = FUN_0001eb1c(local_bc,auStack_80,auStack_44,DAT_0001cef4,0);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0001cef0 + -0xbe,s__________application_user_ble_c_0001cef8);
  }
  return;
}


/* ---- FUN_0001cf18 @ 0001cf18 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001cf18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  
  FUN_000286e0(s_advertising_start__OUID___0x_x__0001cfc7 + 1,*(undefined4 *)(_DAT_0001cfc4 + 8),
               param_3,param_4,param_4);
  iVar3 = DAT_0001cfec;
  FUN_0001b1c0(DAT_0001cff0,0x10,DAT_0001cfec);
  iVar1 = _DAT_0001cff4;
  *(undefined4 *)(_DAT_0001cff4 + 0x14) = 8;
  piVar6 = (int *)(iVar1 + 0x14);
  iVar7 = 8;
  iVar9 = DAT_0001cff0;
  iVar2 = FUN_00028168(iVar3);
  *piVar6 = 0;
  while ((iVar2 != iVar3 && (bVar8 = iVar7 != 0, iVar7 = iVar7 + -1, bVar8))) {
    iVar5 = *piVar6;
    *piVar6 = iVar5 + 1;
    *(short *)(iVar9 + iVar5 * 2) = (short)iVar2;
    iVar2 = FUN_00028168();
  }
  iVar3 = FUN_0002855c(DAT_0001cff0,*(undefined4 *)(iVar1 + 0x14));
  if (iVar3 != 0) {
    app_error_handler(iVar3,DAT_0001d018,s__________application_user_ble_c_0001cff7 + 1);
  }
  iVar3 = FUN_00027c14(DAT_0001cff0,*(undefined4 *)(iVar1 + 0x14));
  if ((iVar3 != 6) && (iVar3 != 0)) {
    app_error_handler(iVar3,0x304,s__________application_user_ble_c_0001cff7 + 1);
  }
  *(undefined *)(iVar1 + 5) = 0;
  uVar4 = FUN_0001ed00(3);
  FUN_000286e0(s_ble_advertising_start__x_0001d01c,uVar4);
  if (*(int *)(_DAT_0001cfc4 + 8) == -1) {
    FUN_000286e0(s_OUID_NOT_INIT__0001d038);
    FUN_0002c7d0(DAT_0001d04c,_DAT_0001cff4 + 4);
  }
  return uVar4;
}


/* ---- FUN_0001d050 @ 0001d050 ---- */

void FUN_0001d050(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined local_48 [16];
  undefined auStack_38 [13];
  undefined auStack_2b [16];
  undefined auStack_1b [7];
  
  uVar2 = 0;
  do {
    local_48[uVar2] = *(undefined *)(param_1 + (0xf - uVar2));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  FUN_0001b1ce(auStack_38,0xd);
  uVar2 = 0;
  do {
    uVar1 = uVar2 + 1;
    auStack_2b[2 - uVar2] = *(undefined *)(param_2 + uVar2);
    uVar2 = uVar1;
  } while (uVar1 < 3);
  software_interrupt(0x4d);
  uVar2 = 0;
  do {
    *(undefined *)(param_3 + uVar2) = auStack_1b[2 - uVar2];
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}


/* ---- FUN_0001d09e @ 0001d09e ---- */

undefined4 FUN_0001d09e(int param_1)

{
  if (*(int *)(param_1 + 0xd8) != 0) {
    return 0;
  }
  return 1;
}


/* ---- FUN_0001d0ae @ 0001d0ae ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0001d0da) */
/* WARNING: Removing unreachable block (ram,0x0001d0da) */

void FUN_0001d0ae(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 != 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0xdc);
                    /* WARNING: Could not recover jumptable at 0x0001d0da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (DAT_0001d0de <= uVar1) {
      uVar1 = (uint)DAT_0001d0de;
    }
    (*(code *)((uint)*(byte *)(uVar1 + 0x1d0df) * 2 + 0x1d0df))();
    return;
  }
  return;
}


/* ---- FUN_0001d23e @ 0001d23e ---- */

undefined8 FUN_0001d23e(int param_1,int param_2)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined local_26;
  undefined local_24 [24];
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_0001b1ce(local_48,0x1c);
  local_48[0] = local_48[0] & 0xf7 | 2;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_26 = *(undefined *)(param_1 + 0x5a);
  local_28 = 0xff10;
  local_2c = 0x20011;
  FUN_0001b1ce(local_24,0x14);
  software_interrupt(0xa2);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 0x20));
}


/* ---- FUN_0001d2d0 @ 0001d2d0 ---- */

undefined2 FUN_0001d2d0(int param_1,int param_2)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined local_26;
  undefined local_24 [20];
  
  FUN_0001b19c(param_1 + 0x23,param_2 + 0x23,0x14);
  FUN_0001b1ce(local_48,0x1c);
  local_48[0] = local_48[0] & 0xf6 | 6;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_26 = *(undefined *)(param_1 + 0xa8);
  local_28 = 0xffa6;
  local_2c = 0x21111;
  FUN_0001b1ce(local_24,0x14);
  software_interrupt(0xa2);
  return *(undefined2 *)(param_1 + 0xac);
}


/* ---- app_error_fault_handler @ 0001d370 ---- */
/* -> NVIC_SystemReset */

/* -> NVIC_SystemReset */

void app_error_fault_handler
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined extraout_r1;
  undefined4 uVar2;
  undefined *unaff_r4;
  int unaff_r5;
  byte *unaff_r6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  
  FUN_000286e0(0x1d380,param_1,param_2);
  nvic_system_reset();
  unaff_r4[0x11] = extraout_r1;
  uVar2 = *(undefined4 *)(unaff_r4 + 0x44);
  *(undefined4 *)(unaff_r5 + 0x44) = uVar2;
  *unaff_r4 = 0x21;
  bVar1 = *unaff_r6;
  uStack_20 = uVar2;
  uStack_1c = uVar2;
  uStack_18 = param_4;
  FUN_000286e0(s_app_error_handler__x__d__s_0001d3c8,(uint)bVar1,uVar2,uVar2);
  uStack_20 = CONCAT22(uStack_20._2_2_,(short)uVar2);
  uStack_1c = uVar2;
  uStack_18 = (uint)bVar1;
  app_error_fault_handler(DAT_0001d3e4,0,&uStack_20);
  return;
}


/* ---- app_error_handler @ 0001d3a0 ---- */

void app_error_handler(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_000286e0(s_app_error_handler__x__d__s_0001d3c8,param_1,param_2,param_3);
  local_20 = CONCAT22(local_20._2_2_,(short)param_2);
  local_1c = param_3;
  local_18 = param_1;
  app_error_fault_handler(DAT_0001d3e4,0,&local_20);
  return;
}


/* ---- motor_off @ 0001d3e8 ---- */

void motor_off(void)

{
  int iVar1;
  
  motor_pwm_stop();
  FUN_0002c0f8();
  iVar1 = DAT_0001d404;
  *(undefined *)(DAT_0001d404 + 0xb) = 0;
  if (*(char *)(iVar1 + 10) != '\x01') {
    FUN_00028688();
  }
  return;
}


/* ---- motor_on @ 0001d408 ---- */
/* (strength %, timeout ms) */

/* (strength %, timeout ms) */

void motor_on(undefined4 param_1,undefined4 param_2)

{
  if (*(char *)(DAT_0001d430 + 0xf) != '\x01') {
    FUN_000286a0();
  }
  motor_pwm_set_duty(param_1);
  motor_timer_start(param_2);
  *(undefined *)(DAT_0001d430 + -0x15) = 1;
  return;
}


/* ---- FUN_0001d434 @ 0001d434 ---- */

undefined4 FUN_0001d434(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = DAT_0001d468;
  cVar1 = *(char *)(DAT_0001d468 + (uint)*(byte *)(*(int *)(param_1 + 4) + 4));
  if (cVar1 != -1) {
    if (cVar1 == -2) {
      return 1;
    }
    iVar3 = FUN_00025aac();
    uVar4 = (uint)*(byte *)(*(int *)(param_1 + 4) + 4);
    if (iVar3 != *(int *)(DAT_0001d46c + uVar4 * 4)) {
      return 1;
    }
    *(undefined *)(iVar2 + uVar4) = 0xff;
  }
  return 0;
}


/* ---- FUN_0001d470 @ 0001d470 ---- */

void FUN_0001d470(int *param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0001b110(param_3 * (uint)*(ushort *)(*param_1 + 0x18),100);
  FUN_0001d490(param_1,param_2,uVar1);
  return;
}


/* ---- FUN_0001d490 @ 0001d490 ---- */

undefined4 FUN_0001d490(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x23) != '\x02') {
    return 8;
  }
  if (*(uint *)(param_2 * 0xc + iVar1 + 4) == param_3) {
    if (*(code **)(iVar1 + 0x1c) != (code *)0x0) {
      (**(code **)(iVar1 + 0x1c))(*(undefined *)(param_1[1] + 4));
    }
  }
  else {
    iVar1 = FUN_0001d434(param_1);
    if (iVar1 != 0) {
      return 0x11;
    }
    *(undefined *)(DAT_0001d53c + (uint)*(byte *)(param_1[1] + 4)) = 0xfe;
    iVar1 = *param_1;
    uVar2 = *(uint *)(iVar1 + param_2 * 0xc + 4);
    if ((uVar2 == 0) || (*(uint *)(iVar1 + 0x18) <= uVar2)) {
      if ((param_3 == 0) || (*(uint *)(iVar1 + 0x18) <= param_3)) {
        FUN_00029054();
      }
      else {
        FUN_000290c8();
      }
    }
    else if ((param_3 == 0) || (*(uint *)(iVar1 + 0x18) <= param_3)) {
      FUN_000291dc();
    }
    else {
      FUN_000292e8(param_1,param_2);
    }
    if (*(int *)(*param_1 + 0x1c) != 0) {
      *(undefined *)((uint)*(byte *)(param_1[1] + 4) * 2 + DAT_0001d53c + 3 + param_2) = 2;
      FUN_00025b18(param_1[1],2);
    }
  }
  return 0;
}


/* ---- FUN_0001d540 @ 0001d540 ---- */

undefined4 FUN_0001d540(int *param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *param_1;
  puVar4 = (undefined4 *)(param_2 * 0xc + iVar6);
  if (*(char *)(iVar6 + 0x23) == '\0') {
    puVar4[1] = 0;
    *(char *)((int)puVar4 + 10) = (char)param_4;
    iVar2 = FUN_0002560c(param_3);
    if (iVar2 == 0) {
      *(uint *)(iVar6 + param_2 * 0xc) = param_3;
      iVar6 = 1 << (param_3 & 0xff);
      if (param_4 == 0) {
        *(int *)(DAT_0001d61c + 8) = iVar6;
      }
      else {
        *(int *)(DAT_0001d61c + 0xc) = iVar6;
      }
      uVar5 = 0;
      do {
        iVar6 = FUN_000257a4((int)puVar4 + uVar5 + 8);
        if (iVar6 != 0) goto LAB_0001d5b6;
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 < 2);
      FUN_0002584c(*(undefined *)(puVar4 + 2));
      FUN_0002584c(*(undefined *)((int)puVar4 + 9));
      uVar1 = FUN_000256a8(*puVar4);
      uVar3 = FUN_00025af8(param_1[1],param_2);
      FUN_0002580c(*(undefined *)(puVar4 + 2),uVar3,uVar1);
      uVar1 = FUN_000256a8(*puVar4);
      uVar3 = FUN_00025af8(param_1[1],2);
      FUN_0002580c(*(undefined *)((int)puVar4 + 9),uVar3,uVar1);
      *(undefined *)((int)puVar4 + 0xb) = 1;
      uVar1 = 0;
      *(undefined *)((uint)*(byte *)(param_1[1] + 4) * 2 + DAT_0001d620 + param_2) = 0;
    }
    else {
LAB_0001d5b6:
      uVar1 = 4;
    }
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}


/* ---- FUN_0001d624 @ 0001d624 ---- */

void FUN_0001d624(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  FUN_00025b3c(param_1[1]);
  FUN_00025b06(param_1[1],2);
  uVar1 = 0;
  do {
    FUN_0002584c(*(undefined *)(iVar3 + uVar1 + 0x20));
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 2);
  uVar1 = 0;
  do {
    puVar2 = (undefined4 *)(uVar1 * 0xc + iVar3);
    if (*(sbyte *)((int)puVar2 + 0xb) != 0) {
      if (*(char *)(*param_1 + uVar1 * 0xc + 10) == '\0') {
        *(int *)(DAT_0001d6a8 + 8) = 1 << *(sbyte *)puVar2;
      }
      else {
        *(int *)(DAT_0001d6a8 + 0xc) = 1 << *(sbyte *)puVar2;
      }
      FUN_000256bc(*puVar2);
      FUN_0002584c(*(sbyte *)(puVar2 + 2));
      FUN_0002584c(*(sbyte *)((int)puVar2 + 9));
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 2);
  FUN_00026e94(*(undefined4 *)param_1[1],0);
  *(undefined *)(iVar3 + 0x23) = 1;
  return;
}


/* ---- FUN_0001d6ac @ 0001d6ac ---- */

void FUN_0001d6ac(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *param_1;
  uVar3 = 0;
  do {
    iVar2 = (uint)*(byte *)(param_1[1] + 4) * 2;
    puVar4 = (undefined4 *)(uVar3 * 0xc + iVar5);
    iVar1 = iVar2 + DAT_0001d720;
    *(undefined *)(iVar1 + uVar3) = 0;
    if (*(char *)((int)puVar4 + 0xb) != '\0') {
      FUN_0002570c(*puVar4,*(char *)(*param_1 + uVar3 * 0xc + 10) == '\0',iVar1,iVar2,param_4);
      FUN_000256dc(*puVar4);
      puVar4[1] = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  *(undefined *)(DAT_0001d720 + -3 + (uint)*(byte *)(param_1[1] + 4)) = 0xff;
  FUN_00026e94(*(undefined4 *)param_1[1],1);
  FUN_00025ac6(param_1[1]);
  FUN_00025b54(param_1[1]);
  *(undefined *)(iVar5 + 0x23) = 2;
  return;
}


/* ---- FUN_0001d724 @ 0001d724 ---- */

int FUN_0001d724(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_3c;
  uint local_38;
  int local_30;
  undefined *local_28;
  int *piStack_20;
  int iStack_1c;
  undefined4 local_18;
  
  if (param_2 == 0) {
    iVar5 = 0xb;
  }
  else {
    iVar5 = *param_1;
    local_28 = (undefined *)(iVar5 + 0x20);
    if (*(char *)(iVar5 + 0x23) == '\0') {
      piStack_20 = param_1;
      iStack_1c = param_2;
      local_18 = param_3;
      iVar1 = FUN_00025a94();
      if ((iVar1 == 0) || (iVar1 == 0x85)) {
        iVar1 = FUN_000255fc();
        if ((iVar1 == 0) && (iVar1 = FUN_000255a0(), iVar1 != 0)) {
          return 3;
        }
        *local_28 = 0xff;
        local_28[1] = 0xff;
        local_28[2] = 0xff;
        uVar2 = 0;
        do {
          iVar1 = uVar2 * 0xc;
          iVar4 = iVar1 + iVar5;
          *(undefined *)(iVar4 + 0xb) = 0;
          *(undefined *)(iVar4 + 8) = 0xff;
          *(undefined *)(iVar4 + 9) = 0xff;
          uVar2 = uVar2 + 1 & 0xff;
          *(undefined4 *)(iVar5 + iVar1) = 0xffffffff;
        } while (uVar2 < 2);
        iVar1 = FUN_000259ac(iVar5 + 0x22);
        if (iVar1 == 0) {
          uVar2 = 0;
          while (iVar1 = FUN_000257a4(iVar5 + uVar2 + 0x20), iVar1 == 0) {
            uVar2 = uVar2 + 1 & 0xff;
            if (1 < uVar2) {
              uVar2 = 0;
              do {
                iVar1 = *(int *)(param_2 + uVar2 * 4);
                if (iVar1 != -1) {
                  local_30 = FUN_0001d540(param_1,uVar2,iVar1,*(undefined *)(param_2 + uVar2 + 8));
                  if (local_30 != 0) {
                    FUN_00028f68(param_1);
                    return local_30;
                  }
                  FUN_0001d490(param_1,uVar2,0);
                }
                uVar2 = uVar2 + 1 & 0xff;
              } while (uVar2 < 2);
              uVar3 = *(uint *)(param_2 + 0x10);
              for (uVar2 = 0; (DAT_0001d890 < uVar3 && (uVar2 < 9)); uVar2 = uVar2 + 1) {
                uVar3 = uVar3 >> 1;
              }
              local_3c = CONCAT31((int3)((uint)*(undefined4 *)(DAT_0001d894 + 4) >> 8),(char)uVar2);
              local_38 = (uint)*(byte *)(param_1[1] + 4);
              iVar1 = FUN_00025ba0(param_1[1],&local_3c,DAT_0001d898);
              if (iVar1 != 0) {
                FUN_00028f68(param_1);
                return iVar1;
              }
              uVar2 = (uint)(*(int *)(param_2 + 0x10) << 4) >>
                      (*(uint *)(*(int *)param_1[1] + 0x510) & 0xff);
              *(uint *)(iVar5 + 0x18) = uVar2;
              FUN_00025ac6(param_1[1]);
              FUN_00025b70(param_1[1],2,uVar2,4,1);
              FUN_00025b06(param_1[1],2);
              *(undefined4 *)(iVar5 + 0x1c) = local_18;
              iVar5 = DAT_0001d8a0;
              *(int **)(DAT_0001d89c + (uint)*(byte *)(param_1[1] + 4) * 4) = param_1;
              *(undefined *)(iVar5 + (uint)*(byte *)(param_1[1] + 4)) = 0xff;
              local_28[3] = 1;
              return 0;
            }
          }
        }
        FUN_00028f68(param_1);
      }
      iVar5 = 4;
    }
    else {
      iVar5 = 8;
    }
  }
  return iVar5;
}


/* ---- FUN_0001d8a4 @ 0001d8a4 ---- */

void FUN_0001d8a4(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  
  pbVar1 = DAT_0001d8dc;
  while (pbVar1[1] != *pbVar1) {
    iVar3 = (uint)*pbVar1 * 8;
    (**(code **)(*(int *)(pbVar1 + 8) + iVar3))
              ((uint)*pbVar1 * (uint)*(ushort *)(pbVar1 + 2) + *(int *)(pbVar1 + 0xc),
               *(undefined2 *)(iVar3 + *(int *)(pbVar1 + 8) + 4));
    if ((ushort)*pbVar1 < *(ushort *)(pbVar1 + 4)) {
      bVar2 = *pbVar1 + 1;
    }
    else {
      bVar2 = 0;
    }
    *pbVar1 = bVar2;
  }
  return;
}


/* ---- FUN_0001d8e0 @ 0001d8e0 ---- */

void FUN_0001d8e0(void)

{
  FUN_00021350(DAT_0001d8f0,0x78,0);
  return;
}


/* ---- FUN_0001d8f4 @ 0001d8f4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001d8f4(void)

{
  char **ppcVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  
  ppcVar1 = DAT_0001d954;
  debug_printf_stub(DAT_0001d958,*DAT_0001d954,DAT_0001d954[1],0x7c);
  uVar3 = 0;
  pcVar5 = *ppcVar1;
  do {
    if (*pcVar5 != -1) {
      FUN_0001b19c(_DAT_0001d95c,*ppcVar1,0x7c);
      debug_printf_stub(s_app_setting____________app_setti_0001d95f + 1,0x7c);
      piVar2 = _DAT_0001d95c;
      if (*(char *)(_DAT_0001d95c + 1) == '\x03') {
        iVar4 = FUN_0001d8e0();
        if (iVar4 == *piVar2) {
          return 0;
        }
      }
      pcVar5 = s_app_setting____________APP_setti_0001d9cc;
      goto LAB_0001d944;
    }
    uVar3 = uVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (uVar3 < 0x7c);
  pcVar5 = s_app_setting____________APP_data_s_0001d990;
LAB_0001d944:
  debug_printf_stub(pcVar5);
  FUN_0001da5c();
  return 1;
}


/* ---- FUN_0001da0c @ 0001da0c ---- */

void FUN_0001da0c(void)

{
  int iVar1;
  
  iVar1 = FUN_000221bc();
  if (iVar1 != 0) {
    debug_printf_stub(s_app_setting____________fs_init_E_0001da24);
    FUN_0001bf4c();
  }
  return;
}


/* ---- FUN_0001da5c @ 0001da5c ---- */

void FUN_0001da5c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_0001b1ce(DAT_0001db08,0x7c);
  puVar1 = DAT_0001db08;
  *(undefined *)(DAT_0001db08 + 1) = 3;
  puVar1[2] = 0xffffffff;
  FUN_0001c120(puVar1 + 3,s_12345678_0001db0c);
  *(undefined *)(puVar1 + 5) = 10;
  puVar1[6] = 0x32;
  puVar1[7] = 16000;
  puVar1[8] = 2000;
  *(undefined *)(puVar1 + 9) = 5;
  *(undefined *)((int)puVar1 + 0x25) = 0x50;
  *(undefined *)((int)puVar1 + 0x26) = 6;
  *(undefined *)((int)puVar1 + 0x27) = 1;
  *(undefined2 *)(puVar1 + 10) = 1000;
  *(undefined2 *)((int)puVar1 + 0x2a) = 500;
  *(short *)(puVar1 + 0xb) = (short)DAT_0001db18;
  uVar2 = DAT_0001db1c;
  puVar1[0xc] = DAT_0001db1c;
  *(undefined2 *)(puVar1 + 0xd) = 0x20;
  *(undefined2 *)((int)puVar1 + 0x36) = 0x1e;
  *(undefined2 *)(puVar1 + 0xe) = 0x18;
  *(undefined2 *)((int)puVar1 + 0x3a) = 0xf0;
  *(undefined2 *)(puVar1 + 0xf) = 0;
  *(undefined2 *)((int)puVar1 + 0x3e) = 400;
  *(undefined *)(puVar1 + 0x19) = 1;
  *(undefined2 *)((int)puVar1 + 0x66) = 1000;
  *(undefined2 *)(puVar1 + 0x1a) = 700;
  puVar1[0x1b] = DAT_0001db20;
  puVar1[0x10] = uVar2;
  puVar1[0x11] = uVar2;
  puVar1[0x12] = uVar2;
  puVar1[0x13] = uVar2;
  puVar1[0x18] = 0xff0000;
  puVar1[0x14] = uVar2;
  puVar1[0x16] = uVar2;
  puVar1[0x15] = 0xff0000;
  puVar1[0x17] = uVar2;
  *(undefined *)((int)puVar1 + 0x7a) = 0;
  uVar2 = FUN_0001d8e0();
  *puVar1 = uVar2;
  *DAT_0001db24 = 0;
  return;
}


/* ---- FUN_0001db28 @ 0001db28 ---- */

void FUN_0001db28(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0001db4c;
  *DAT_0001db4c = '\0';
  iVar2 = FUN_0001db54(0x11);
  if (iVar2 == 0) {
    debug_printf_stub(DAT_0001db50);
    do {
    } while (*pcVar1 != '\x02');
    FUN_0001bf4c();
  }
  return;
}


/* ---- FUN_0001db54 @ 0001db54 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001db54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  pcVar1 = _DAT_0001dbb0;
  if (*_DAT_0001dbb0 != '\x02') {
    debug_printf_stub(s_app_setting____________app_setti_0001dbb3 + 1);
    *pcVar1 = '\x01';
    uVar3 = FUN_0001d8e0();
    puVar2 = DAT_0001dbe8;
    *DAT_0001dbe4 = uVar3;
    iVar4 = FUN_00022018(puVar2,*puVar2,*(undefined *)(puVar2 + 3),param_1,param_4);
    uVar3 = DAT_0001dbec;
    if ((iVar4 == 0) &&
       (iVar4 = FUN_00022294(DAT_0001dbe8,*puVar2,DAT_0001dbe4,0x20,param_1), uVar3 = DAT_0001dbf0,
       iVar4 == 0)) {
      debug_printf_stub(s_app_setting____________app_setti_0001dbf4);
      return 1;
    }
    debug_printf_stub(uVar3);
  }
  return 0;
}


/* ---- FUN_0001dc28 @ 0001dc28 ---- */

undefined4 FUN_0001dc28(void)

{
  return *(undefined4 *)(DAT_0001dc30 + 4);
}


/* ---- FUN_0001dc34 @ 0001dc34 ---- */

undefined4 FUN_0001dc34(int *param_1,undefined param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(DAT_0001dc60 + 4) != 0) {
    if ((param_3 == 0) || (param_1 == (int *)0x0)) {
      return 7;
    }
    iVar1 = *param_1;
    if (*(char *)(iVar1 + 0x10) == '\0') {
      *(undefined *)(iVar1 + 0x10) = 0;
      *(undefined *)(iVar1 + 0x11) = param_2;
      *(int *)(iVar1 + 0x14) = param_3;
      return 0;
    }
  }
  return 8;
}


/* ---- FUN_0001dc64 @ 0001dc64 ---- */

undefined4 FUN_0001dc64(undefined4 param_1,undefined param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (((param_3 & 3) == 0) && (param_3 != 0)) {
    *DAT_0001dcec = 0x20000;
    *(undefined4 *)(DAT_0001dcf0 + 8) = 0x10000;
    *(undefined4 *)(DAT_0001dcf0 + -0x38) = 0x10000;
    iVar1 = DAT_0001dcf4;
    *(undefined4 *)(DAT_0001dcf4 + 4) = 1;
    FUN_00024f38(0x2f);
    *(undefined4 *)(iVar1 + 8) = 1;
    puVar2 = DAT_0001dcf8;
    *(undefined4 *)(DAT_0001dcf8 + 8) = 0;
    FUN_00024f38(0x2f);
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 0xc) = param_4;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = param_2;
    *(uint *)(puVar2 + 0x14) = param_3;
    *(undefined4 *)(puVar2 + 4) = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    *DAT_0001dcfc = 0x100000;
    FUN_0001beec(0x14,3);
    DAT_0001dcec[-0x20] = 0x100000;
    iVar1 = DAT_0001dd00;
    *(undefined4 *)(DAT_0001dd00 + 8) = param_1;
    FUN_0001beec(0x11,3);
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(iVar1 + 4);
    uVar3 = 0;
  }
  else {
    uVar3 = 7;
  }
  return uVar3;
}


/* ---- app_timer_start @ 0001dd04 ---- */
/* returns 7 (INVALID_PARAM) if ticks < 5 */

/* returns 7 (INVALID_PARAM) if ticks < 5 */

undefined8 app_timer_start(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  
  if ((*(int *)(DAT_0001dd84 + 4) != 0) && (param_1 != 0)) {
    if (param_2 < 5) {
      return CONCAT44(param_2,7);
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar4 = param_2;
      if (*(char *)(param_1 + 0x11) != '\x01') {
        uVar4 = 0;
      }
      uVar3 = 0;
      local_20 = param_2 & 0xffffff00;
      local_1c = param_3;
      local_18 = param_2;
      FUN_0001ddb4(&local_20);
      puVar2 = (undefined *)FUN_0002c140(&local_1c);
      if (puVar2 == (undefined *)0x0) {
        uVar3 = 4;
        FUN_0001ddf0(local_20 & 0xff);
      }
      else {
        *puVar2 = 1;
        iVar1 = DAT_0001dd88;
        *(int *)(puVar2 + 4) = param_1;
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(iVar1 + 4);
        *(uint *)(puVar2 + 0x10) = uVar4;
        *(undefined4 *)(puVar2 + 0x14) = param_3;
        *(uint *)(puVar2 + 0xc) = local_18;
        *(undefined *)(DAT_0001dd84 + 1) = (undefined)local_1c;
        FUN_0001ddf0(local_20 & 0xff);
        FUN_0002ae48();
      }
      return CONCAT44(local_20,uVar3);
    }
  }
  return CONCAT44(param_2,8);
}


/* ---- FUN_0001dd8c @ 0001dd8c ---- */

undefined4 FUN_0001dd8c(int param_1)

{
  undefined4 uVar1;
  
  if (((*(int *)(DAT_0001ddb0 + 4) != 0) && (param_1 != 0)) && (*(int *)(param_1 + 0x14) != 0)) {
    *(undefined *)(param_1 + 0x10) = 0;
    uVar1 = FUN_0002ae98(param_1,2);
    return uVar1;
  }
  return 8;
}


/* ---- FUN_0001ddb4 @ 0001ddb4 ---- */

void FUN_0001ddb4(undefined *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = DAT_0001dde4;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  if (DAT_0001dde4[1] == 0) {
    DAT_0001dde4[1] = 1;
    uVar4 = DAT_0001ddec;
    puVar3 = DAT_0001dde8;
    *puVar2 = *DAT_0001dde8 & DAT_0001ddec;
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


/* ---- FUN_0001ddf0 @ 0001ddf0 ---- */

void FUN_0001ddf0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = DAT_0001de14;
  if ((DAT_0001de14[1] != 0) && (param_1 == 0)) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    *DAT_0001de18 = *DAT_0001de14;
    puVar2[1] = 0;
    if (iVar3 == 0) {
      enableIRQinterrupts();
    }
  }
  return;
}


/* ---- FUN_0001de4c @ 0001de4c ---- */

void FUN_0001de4c(void)

{
  int iVar1;
  
  iVar1 = DAT_0001dea0;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = FUN_0001eef8(DAT_0001deac);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x1c5,DAT_0001deb0);
  }
  iVar1 = FUN_0001ee08(DAT_0001deac);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x1c8,DAT_0001deb0);
  }
  FUN_000286e0(s___________________Notifications_E_0001deb4);
  return;
}


/* ---- FUN_0001dee0 @ 0001dee0 ---- */

undefined4 FUN_0001dee0(uint param_1)

{
  if (param_1 >> 0xe != 0) {
    return 0;
  }
  return 1;
}


/* ---- FUN_0001deec @ 0001deec ---- */

undefined4 FUN_0001deec(code **param_1,int param_2,int *param_3,undefined4 param_4)

{
  code cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(ushort *)(param_1 + 0x39) < *(ushort *)(param_1[0x34] + (int)param_1[0x40] * 0x10 + 8)) &&
     (*(ushort *)(param_1 + 0x39) < *(ushort *)(param_1 + 0x3f))) {
    iVar4 = *param_3;
    *param_3 = iVar4 + 1;
    cVar1 = *(code *)(param_2 + iVar4);
    uVar2 = *(ushort *)(param_1 + 0x39);
    *(ushort *)(param_1 + 0x39) = uVar2 + 1;
    param_1[0x41][uVar2] = cVar1;
  }
  if ((*(short *)(param_1 + 0x39) != *(short *)(param_1 + 0x3f)) &&
     (*(short *)(param_1[0x34] + (int)param_1[0x40] * 0x10 + 8) != *(short *)(param_1 + 0x39))) {
    return 6;
  }
  iVar4 = FUN_0001df96(param_1,param_1[0x3f],param_1[0x40],param_1[0x41],param_4);
  if (iVar4 != 0) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x39);
    if (uVar3 == *(ushort *)(param_1 + 0x3f)) {
      param_1[0x41][uVar3] = (code)0x0;
    }
    else {
      param_1[0x41][uVar3 - 1] = (code)0x0;
    }
  }
  if (*(ushort *)(param_1 + 0x39) < *(ushort *)(param_1 + 0x3f)) {
    return 7;
  }
  iVar4 = FUN_0001df96(param_1,param_1[0x3f],param_1[0x40],param_1[0x41],param_4);
  if (iVar4 != 0) {
    (**param_1)(param_1 + 0x3b);
  }
  iVar4 = FUN_0001d09e(param_1);
  if (iVar4 != 0) {
    return 8;
  }
  return 3;
}


/* ---- FUN_0001df96 @ 0001df96 ---- */

char FUN_0001df96(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xd0) + param_3 * 0x10);
  if (cVar1 != '\x01') {
    cVar1 = '\0';
  }
  return cVar1;
}


/* ---- FUN_0001dfa6 @ 0001dfa6 ---- */

undefined8 FUN_0001dfa6(int param_1,int param_2)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined local_26;
  undefined local_24 [20];
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  FUN_0001b1ce(local_48,0x1c);
  local_48[0] = local_48[0] & 0xfe | 0xc;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_26 = *(undefined *)(param_1 + 0xa8);
  local_28 = 0xffa2;
  local_2c = 0x21111;
  FUN_0001b1ce(local_24,0x14);
  software_interrupt(0xa2);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 0xac));
}


/* ---- FUN_0001e048 @ 0001e048 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001e048(undefined2 *param_1)

{
  undefined uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined local_40;
  undefined local_3c [2];
  undefined2 local_3a;
  byte local_38;
  byte local_37;
  undefined local_36;
  undefined local_35;
  undefined local_30 [2];
  undefined2 local_2e;
  undefined4 local_2c;
  int local_28;
  
  local_2c = FUN_0001f608(*param_1);
  uVar3 = FUN_00022fdc(*param_1);
  puVar2 = _DAT_0001e0e8;
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined *)((int)param_1 + 9);
  local_30[0] = uVar1;
  FUN_0001f6dc(*param_1,*_DAT_0001e0e8,0);
  if (local_2c != 0) {
    if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1d) < 0) {
      debug_printf_stub(s_auth_status_success_process_0001e0eb + 1);
      iVar5 = FUN_0002738c(uVar3,7);
      if (iVar5 != 0) {
        local_30[0] = 8;
        local_2e = *param_1;
        local_2c = CONCAT22(local_2c._2_2_,(short)uVar3);
        local_28 = iVar5;
        FUN_00021850(local_30);
      }
    }
    else {
      iVar5 = FUN_0001f6b8(*param_1,puVar2[2]);
      if (iVar5 != 0) {
        FUN_00022fb0(uVar3);
      }
    }
    local_3c[0] = 3;
    local_3a = *param_1;
    local_38 = (byte)(((uint)*(byte *)((int)param_1 + 5) << 0x1d) >> 0x1f);
    local_37 = (byte)(((uint)*(byte *)(param_1 + 3) << 0x1d) >> 0x1f);
    local_40 = (undefined)uVar4;
    local_36 = local_40;
    local_35 = uVar1;
    FUN_00021850(local_3c);
  }
  return;
}


/* ---- aw9109_encode_wait @ 0001e10c ---- */
/* 0x3800 | (ms<510 ? ms*2 : 0x400|ms>>4) */

/* 0x3800 | (ms<510 ? ms*2 : 0x400|ms>>4) */

uint aw9109_encode_wait(uint param_1)

{
  uint uVar1;
  
  if (0x1fd < param_1) {
    uVar1 = param_1 >> 4;
  }
  else {
    uVar1 = (param_1 << 0x11) >> 0x10;
  }
  return (uint)(0x1fd < param_1) << 10 | uVar1 | 0x3800;
}


/* ---- FUN_0001e12c @ 0001e12c ---- */

void FUN_0001e12c(void)

{
  *(undefined4 *)(DAT_0001e134 + 0xc) = 2;
  return;
}


/* ---- aw9109_prog_set_channel_blink @ 0001e138 ---- */

undefined4
aw9109_prog_set_channel_blink
          (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (((param_5 == 0) || (9 < param_1)) || (param_1 == 0)) {
    uVar4 = 0;
  }
  else {
    iVar5 = 0;
    uVar3 = 0;
    do {
      iVar5 = (uint)*(byte *)(param_5 + uVar3) + iVar5;
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 0x2a);
    if (iVar5 == 0) {
      uVar3 = 1;
      do {
        iVar5 = uVar3 * 2 + param_5;
        bVar1 = (byte)(uVar3 * 0x100 + 0x100 >> 8) | 0xa0;
        *(undefined *)(iVar5 + -2) = 0;
        *(byte *)(iVar5 + -1) = bVar1;
        *(undefined *)(iVar5 + 0x12) = 0;
        uVar3 = uVar3 + 1 & 0xff;
        *(byte *)(iVar5 + 0x13) = bVar1;
      } while (uVar3 < 10);
    }
    bVar1 = (byte)(param_1 * 0x100 + 0x100 >> 8);
    iVar5 = param_1 * 2 + param_5;
    *(char *)(iVar5 + -2) = (char)param_2;
    *(byte *)(iVar5 + -1) = (byte)((uint)param_2 >> 8) | bVar1 | 0xa0;
    *(undefined *)(iVar5 + 0x12) = 0;
    *(byte *)(iVar5 + 0x13) = bVar1 | 0xa0;
    uVar2 = aw9109_encode_wait(param_3);
    *(char *)(param_5 + 0x12) = (char)uVar2;
    *(char *)(param_5 + 0x13) = (char)((ushort)uVar2 >> 8);
    uVar2 = aw9109_encode_wait(param_4);
    *(char *)(param_5 + 0x26) = (char)uVar2;
    *(char *)(param_5 + 0x27) = (char)((ushort)uVar2 >> 8);
    *(undefined *)(param_5 + 0x28) = 0;
    *(undefined *)(param_5 + 0x29) = 0;
    uVar4 = 1;
  }
  return uVar4;
}


/* ---- aw9109_prog_set_channel_breath @ 0001e1e0 ---- */

undefined4
aw9109_prog_set_channel_breath
          (int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
          undefined *param_7)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  if (param_7 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    *param_7 = 0;
    param_7[1] = 0xbf;
    uVar3 = param_1 * 0x100 + 0x100;
    bVar1 = (byte)(uVar3 >> 8) | (byte)((uint)param_2 >> 8);
    puVar8 = param_7 + param_1 * 2;
    puVar8[0x12] = (char)param_2;
    puVar8[0x13] = bVar1 | 0xe0;
    puVar8[0x38] = (char)param_2;
    puVar8[0x39] = bVar1 | 0xc0;
    uVar4 = FUN_0001b6d8(param_2);
    uVar5 = FUN_0001b6d8(param_3);
    iVar6 = FUN_0001b2ee(uVar5,uVar4);
    if (iVar6 < 0x42000001) {
      uVar9 = FUN_0001b768();
      uVar9 = FUN_0001b6ac((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),1);
      FUN_0001b4ce((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,DAT_0001e330);
      FUN_000298bc();
      bVar1 = FUN_0001b72c();
      uVar7 = 0x8000;
    }
    else {
      uVar5 = FUN_0001b36a(iVar6,0xfffffffc);
      FUN_0001b2de(uVar5,0x3f800000);
      bVar1 = FUN_0001b704();
      uVar7 = DAT_0001e334;
    }
    uVar7 = uVar3 | bVar1 | uVar7;
    *puVar8 = (char)uVar7;
    puVar8[1] = (char)(uVar7 >> 8);
    uVar5 = FUN_0001b6d8(param_4);
    iVar6 = FUN_0001b2ee(uVar5,uVar4);
    if (iVar6 < 0x42000001) {
      uVar9 = FUN_0001b768();
      uVar9 = FUN_0001b6ac((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),1);
      FUN_0001b4ce((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,DAT_0001e330);
      FUN_000298bc();
      bVar1 = FUN_0001b72c();
      uVar7 = 0x8000;
    }
    else {
      uVar4 = FUN_0001b36a(iVar6,0xfffffffc);
      FUN_0001b2de(uVar4,0x3f800000);
      FUN_0001b768();
      FUN_000298bc();
      bVar1 = FUN_0001b72c();
      uVar7 = DAT_0001e334;
    }
    uVar7 = uVar3 | bVar1 | uVar7;
    param_7[param_1 * 2 + 0x26] = (char)uVar7;
    param_7[param_1 * 2 + 0x27] = (char)(uVar7 >> 8);
    uVar2 = aw9109_encode_wait(param_3 + param_5 & 0xffff);
    param_7[0x26] = (char)uVar2;
    param_7[0x27] = (char)((ushort)uVar2 >> 8);
    uVar2 = aw9109_encode_wait(param_4 + param_6 & 0xffff);
    param_7[0x4c] = (char)uVar2;
    param_7[0x4d] = (char)((ushort)uVar2 >> 8);
    param_7[0x4e] = 0;
    param_7[0x4f] = 0;
    uVar4 = 1;
  }
  return uVar4;
}


/* ---- FUN_0001e338 @ 0001e338 ---- */

undefined4 FUN_0001e338(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  
  if (param_5 == 0) {
    uVar5 = 0;
  }
  else {
    iVar7 = 0;
    uVar4 = 0;
    do {
      iVar7 = (uint)*(byte *)(param_5 + uVar4) + iVar7;
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 0x2a);
    if (iVar7 == 0) {
      uVar4 = 1;
      do {
        iVar7 = uVar4 * 0x100;
        iVar9 = uVar4 * 2 + param_5;
        *(undefined *)(iVar9 + 0x10) = 0;
        uVar4 = uVar4 + 1 & 0xff;
        *(byte *)(iVar9 + 0x11) = (byte)((uint)(iVar7 + 0x100) >> 8) | 0xa0;
      } while (uVar4 < 10);
    }
    uVar4 = param_1 * 0x100 + 0x100;
    bVar1 = (byte)(uVar4 >> 8) | (byte)((uint)param_2 >> 8);
    iVar9 = param_1 * 2 + param_5;
    *(char *)(iVar9 + 0x10) = (char)param_2;
    *(byte *)(iVar9 + 0x11) = bVar1 | 0xa0;
    uVar5 = FUN_0001b6d8(param_2);
    uVar6 = FUN_0001b6d8(param_3);
    iVar7 = FUN_0001b2ee(uVar6,uVar5);
    if (iVar7 < 0x42000001) {
      uVar10 = FUN_0001b768();
      uVar10 = FUN_0001b6ac((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1);
      FUN_0001b4ce((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,DAT_0001e43c);
      FUN_000298bc();
      bVar2 = FUN_0001b72c();
      uVar8 = 0x8000;
    }
    else {
      uVar5 = FUN_0001b36a(iVar7,0xfffffffc);
      FUN_0001b2de(uVar5,0x3f800000);
      FUN_0001b768();
      FUN_000298bc();
      bVar2 = FUN_0001b72c();
      uVar8 = DAT_0001e440;
    }
    uVar8 = uVar4 | bVar2 | uVar8;
    *(char *)(iVar9 + -2) = (char)uVar8;
    *(char *)(iVar9 + -1) = (char)(uVar8 >> 8);
    *(char *)(iVar9 + 0x22) = (char)param_2;
    *(byte *)(iVar9 + 0x23) = bVar1 | 0xc0;
    uVar3 = aw9109_encode_wait(param_3 + param_4 & 0xffff);
    *(char *)(param_5 + 0x36) = (char)uVar3;
    *(char *)(param_5 + 0x37) = (char)((ushort)uVar3 >> 8);
    *(undefined *)(param_5 + 0x38) = 0;
    *(undefined *)(param_5 + 0x39) = 0;
    uVar5 = 1;
  }
  return uVar5;
}


/* ---- FUN_0001e444 @ 0001e444 ---- */

undefined4 FUN_0001e444(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (((param_4 != 0) && (param_1 < 10)) && (param_1 != 0)) {
    iVar3 = 0;
    uVar2 = 0;
    do {
      iVar3 = (uint)*(byte *)(param_4 + uVar2) + iVar3;
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0x2a);
    if (iVar3 == 0) {
      uVar2 = 1;
      do {
        iVar3 = uVar2 * 0x100;
        iVar4 = uVar2 * 2 + param_4;
        *(undefined *)(iVar4 + -2) = 0;
        uVar2 = uVar2 + 1 & 0xff;
        *(byte *)(iVar4 + -1) = (byte)((uint)(iVar3 + 0x100) >> 8) | 0xa0;
      } while (uVar2 < 10);
    }
    iVar3 = param_1 * 2 + param_4;
    *(char *)(iVar3 + -2) = (char)param_2;
    *(byte *)(iVar3 + -1) = (byte)(param_1 * 0x100 + 0x100 >> 8) | (byte)((uint)param_2 >> 8) | 0xa0
    ;
    uVar1 = aw9109_encode_wait(param_3);
    *(char *)(param_4 + 0x12) = (char)uVar1;
    *(char *)(param_4 + 0x13) = (char)((ushort)uVar1 >> 8);
    *(undefined *)(param_4 + 0x14) = 0;
    *(undefined *)(param_4 + 0x15) = 0;
    return 1;
  }
  return 0;
}


/* ---- FUN_0001e4bc @ 0001e4bc ---- */

undefined4 FUN_0001e4bc(undefined2 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001e538(0x55);
  if (iVar1 == 0) {
    if ((param_2 != 1) && (param_1 = 0, param_2 == 0)) {
      param_1 = 0;
    }
    iVar1 = aw9109_write_reg16(0x55,param_1);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


/* ---- FUN_0001e502 @ 0001e502 ---- */

void FUN_0001e502(void)

{
  FUN_0002a404();
  return;
}


/* ---- FUN_0001e50a @ 0001e50a ---- */

int FUN_0001e50a(void)

{
  int iVar1;
  
  iVar1 = FUN_0001e818();
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_0001e518 @ 0001e518 ---- */

void FUN_0001e518(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0001e530;
  if (*DAT_0001e530 == '\0') {
    FUN_00022ba4(DAT_0001e534);
    *pcVar1 = '\x01';
  }
  return;
}


/* ---- FUN_0001e538 @ 0001e538 ---- */

void FUN_0001e538(undefined4 param_1,ushort *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  uint local_1c;
  undefined4 uStack_18;
  
  local_1c = param_3;
  uStack_18 = param_4;
  FUN_0001e518();
  bVar2 = 0;
  local_1c = 0;
  do {
    iVar1 = FUN_00022bf8(DAT_0001e56c,0x2c,param_1,&local_1c,2);
    *param_2 = (ushort)((local_1c & 0xff) << 8) | (ushort)local_1c >> 8;
    if (-1 < iVar1) {
      return;
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 5);
  return;
}


/* ---- aw9109_write_reg16 @ 0001e570 ---- */
/* I2C addr 0x2C, TWI0 400 kHz */

/* I2C addr 0x2C, TWI0 400 kHz */

void aw9109_write_reg16(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  uint local_14;
  
  local_14 = param_4;
  FUN_0001e518();
  bVar2 = 0;
  local_14 = (uint)CONCAT11((char)param_2,(char)((uint)param_2 >> 8));
  do {
    iVar1 = FUN_00022ca8(DAT_0001e5a4,0x2c,param_1,&local_14,2);
    if (-1 < iVar1) {
      return;
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 5);
  return;
}


/* ---- FUN_0001e5a8 @ 0001e5a8 ---- */

undefined8 FUN_0001e5a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_0001e780();
  iVar2 = FUN_0001e65c();
  if (iVar2 == DAT_0001e604) {
    iVar2 = FUN_0001e71a(2);
    if (iVar2 == 0) goto LAB_0001e5d0;
    iVar2 = aw9109_write_reg16(0x52,0x8a);
    uVar1 = DAT_0001e608;
    if (iVar2 == 0) {
      iVar2 = FUN_0001e60c(DAT_0001e608,1);
      if (iVar2 != 0) {
        FUN_0001b1c0(&uStack_18,9,1);
        iVar2 = FUN_0001e682(&uStack_18);
        if ((iVar2 != 0) && (iVar2 = FUN_0001e4bc(uVar1,0), iVar2 != 0)) {
          return CONCAT44(uStack_18,1);
        }
      }
      goto LAB_0001e5d0;
    }
  }
  iVar2 = 0;
LAB_0001e5d0:
  return CONCAT44(uStack_18,iVar2);
}


/* ---- FUN_0001e60c @ 0001e60c ---- */

undefined4 FUN_0001e60c(undefined2 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001e538(0x50);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      param_1 = 0;
    }
    iVar1 = aw9109_write_reg16(0x50,param_1);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


/* ---- FUN_0001e648 @ 0001e648 ---- */

int FUN_0001e648(void)

{
  int iVar1;
  
  iVar1 = -((int)((*(uint *)(DAT_0001e658 + 4) >> 1) << 0x1f) >> 0x1f);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_0001e65c @ 0001e65c ---- */

uint FUN_0001e65c(void)

{
  int iVar1;
  uint in_r3;
  byte bVar2;
  uint local_10;
  
  bVar2 = 0;
  local_10 = in_r3 & 0xffff0000;
  do {
    iVar1 = FUN_0001e538(0,&local_10);
    if (iVar1 == 0) {
      return local_10 & 0xffff;
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 5);
  return 0;
}


/* ---- FUN_0001e682 @ 0001e682 ---- */

undefined4 FUN_0001e682(byte *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  iVar1 = FUN_0001e538(0x57,&local_18);
  if (((iVar1 == 0) && (iVar1 = FUN_0001e538(0x58,(int)&local_18 + 2), iVar1 == 0)) &&
     (iVar1 = FUN_0001e538(0x59,&local_14), iVar1 == 0)) {
    local_18._0_2_ = (ushort)((param_1[1] & 0xf) << 0xc) | (ushort)*param_1 << 8;
    local_18._2_2_ =
         (ushort)param_1[2] | (ushort)param_1[5] << 0xc |
         (ushort)param_1[4] << 8 | (ushort)param_1[3] << 4;
    local_14 = CONCAT22(local_14._2_2_,
                        (ushort)param_1[8] << 8 | (ushort)param_1[7] << 4 | (ushort)param_1[6]);
    iVar1 = aw9109_write_reg16(0x57);
    if (((iVar1 == 0) && (iVar1 = aw9109_write_reg16(0x58,local_18._2_2_), iVar1 == 0)) &&
       (iVar1 = aw9109_write_reg16(0x59,local_14 & 0xffff), iVar1 == 0)) {
      return 1;
    }
  }
  return 0;
}


/* ---- FUN_0001e71a @ 0001e71a ---- */

undefined4 FUN_0001e71a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    FUN_0001e12c();
  }
  else {
    if (param_1 == 1) {
      iVar1 = FUN_0001e648();
      if (iVar1 == 0) {
        FUN_0001e774();
        FUN_0001e502(5);
        return 1;
      }
      uVar2 = 0;
    }
    else {
      if (param_1 != 2) {
        return 0;
      }
      iVar1 = FUN_0001e648();
      if (iVar1 == 0) {
        FUN_0001e774();
        FUN_0001e502(5);
      }
      uVar2 = 1;
    }
    iVar1 = aw9109_write_reg16(1,uVar2);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


/* ---- FUN_0001e774 @ 0001e774 ---- */

void FUN_0001e774(void)

{
  *(undefined4 *)(DAT_0001e77c + 8) = 2;
  return;
}


/* ---- FUN_0001e780 @ 0001e780 ---- */

int FUN_0001e780(void)

{
  int iVar1;
  
  iVar1 = aw9109_write_reg16(0,DAT_0001e794);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- aw9109_load_program @ 0001e798 ---- */
/* 0x53=0,0x54=0,0x7E=0, then N x reg 0x7F */

/* 0x53=0,0x54=0,0x7E=0, then N x reg 0x7F */

undefined4 aw9109_load_program(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (iVar1 = aw9109_write_reg16(0x53,0), iVar1 == 0)) &&
     ((iVar1 = aw9109_write_reg16(0x54,0), iVar1 == 0 &&
      (iVar1 = aw9109_write_reg16(0x7e,0), iVar1 == 0)))) {
    uVar2 = 0;
    while( true ) {
      if (param_2 <= uVar2) {
        return 1;
      }
      iVar1 = aw9109_write_reg16(0x7f,*(undefined2 *)(param_1 + uVar2 * 2));
      if (iVar1 != 0) break;
      uVar2 = uVar2 + 1 & 0xffff;
    }
  }
  return 0;
}


/* ---- aw9109_run_program @ 0001e7ea ---- */
/* 0x5F=0,0x54=2,0x53=1 */

/* 0x5F=0,0x54=2,0x53=1 */

undefined4 aw9109_run_program(void)

{
  int iVar1;
  
  iVar1 = aw9109_write_reg16(0x5f,0);
  if (((iVar1 == 0) && (iVar1 = aw9109_write_reg16(0x54,2), iVar1 == 0)) &&
     (iVar1 = aw9109_write_reg16(0x53,1), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0001e818 @ 0001e818 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001e818(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = _DAT_0001e858;
  uVar3 = 2;
  *_DAT_0001e858 = 3;
  FUN_0001e774(3,puVar1,2);
  FUN_0002a404(uVar3);
  FUN_000286e0(s_Paw9109_support_init_0001e85b + 1);
  iVar2 = FUN_00022bac(DAT_0001e878,DAT_0001e874);
  if (iVar2 != 0) {
    FUN_0001e518();
    return 1;
  }
  FUN_000286e0(s_Func___s_Failed___s___d_n_0001e884,DAT_0001e880,DAT_0001e87c,0x68);
  return 0;
}


/* ---- FUN_0001e8a0 @ 0001e8a0 ---- */

undefined8 FUN_0001e8a0(undefined2 *param_1,undefined2 *param_2)

{
  byte local_4c [4];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined local_2a;
  undefined local_28 [20];
  
  *param_1 = *param_2;
  local_30 = 0x21111;
  FUN_0001b1ce(local_4c,0x1c);
  local_4c[0] = local_4c[0] | 0x12;
  local_38 = &local_30;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2a = *(undefined *)(param_1 + 0x2d);
  local_2c = 0xff06;
  FUN_0001b1ce(local_28,0x14);
  software_interrupt(0xa2);
  return CONCAT44(local_4c,(uint)(ushort)param_1[0x10]);
}


/* ---- FUN_0001e958 @ 0001e958 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001e958(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined uVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_3;
  local_c = param_4;
  FUN_00025f46(9,3);
  FUN_00025f46(8,3);
  uVar2 = FUN_000228f8();
  *(undefined *)(_DAT_0001e9fc + 9) = uVar2;
  iVar3 = FUN_000255fc();
  if ((iVar3 == 0) && (iVar3 = FUN_000255a0(), iVar3 != 0)) {
    app_error_handler(iVar3,0xf3,s__________battery_measure_c_0001e9ff + 1);
  }
  puVar1 = DAT_0001ea1c;
  iVar3 = FUN_000254e4(9,&local_10,DAT_0001ea20);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0xf9,s__________battery_measure_c_0001e9ff + 1);
  }
  iVar3 = FUN_000254e4(8,&local_10,DAT_0001ea20);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0xfb,s__________battery_measure_c_0001e9ff + 1);
  }
  FUN_0002544c(9,1);
  FUN_0002544c(8,1);
  local_c = *puVar1;
  iVar3 = FUN_00025100(&local_c,0);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x102,s__________battery_measure_c_0001e9ff + 1);
  }
  FUN_000250e0(DAT_0001ea24);
  FUN_0002b888();
  FUN_0002c16c();
  return;
}


/* ---- FUN_0001ea28 @ 0001ea28 ---- */

undefined4 FUN_0001ea28(int param_1)

{
  if (DAT_0001eaac <= param_1) {
    return 100;
  }
  if (DAT_0001eaac + -0x28 <= param_1) {
    return 0x5a;
  }
  if (DAT_0001eaac + -0x82 <= param_1) {
    return 0x50;
  }
  if (DAT_0001eaac + -200 <= param_1) {
    return 0x46;
  }
  if (0xeff < param_1) {
    return 0x3c;
  }
  if (DAT_0001eab0 <= param_1) {
    return 0x32;
  }
  if (0xeaf < param_1) {
    return 0x28;
  }
  if (DAT_0001eab0 + -0x3c <= param_1) {
    return 0x1e;
  }
  if (DAT_0001eab0 + -0x50 <= param_1) {
    return 0x14;
  }
  if (DAT_0001eab0 + -0x8c <= param_1) {
    return 10;
  }
  if (DAT_0001eab0 + -200 <= param_1) {
    return 5;
  }
  return 1;
}


/* ---- FUN_0001eab4 @ 0001eab4 ---- */

undefined * FUN_0001eab4(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 local_5c [2];
  undefined auStack_58 [32];
  undefined auStack_38 [36];
  
  local_5c[0] = 0x1f;
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
LAB_0001eae2:
    if (param_2 != 0) {
      if (*(char *)(param_2 + 3) != '\0') goto LAB_0001eaec;
      puVar2 = (undefined *)FUN_0001cc50(param_2,auStack_38,local_5c);
      if (puVar2 != (undefined *)0x0) {
        return puVar2;
      }
    }
    software_interrupt(0x72);
  }
  else {
    if ((int)((uint)*(byte *)(param_1 + 3) << 0x1d) < 0) {
      puVar1 = (undefined *)FUN_0001cc50(param_1,auStack_58);
      if (puVar1 != (undefined *)0x0) {
        return puVar1;
      }
      puVar1 = auStack_58;
      goto LAB_0001eae2;
    }
LAB_0001eaec:
    puVar1 = (undefined *)0x7;
  }
  return puVar1;
}


/* ---- FUN_0001eb1c @ 0001eb1c ---- */

undefined4
FUN_0001eb1c(undefined *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  puVar1 = DAT_0001ec70;
  if ((param_1 == (undefined *)0x0) || (param_3 == 0)) {
    uVar7 = 0xe;
  }
  else {
    *DAT_0001ec70 = 1;
    puVar1[3] = 0;
    FUN_0001b19c(DAT_0001ec74,param_3,0x20);
    *(undefined4 *)(puVar1 + 0x14) = param_5;
    *(undefined4 *)(puVar1 + 0x10) = param_4;
    *(undefined2 *)(puVar1 + 8) = 0xffff;
    FUN_0001b1ce(puVar1 + 0x18,7);
    FUN_0001b1ce(DAT_0001ec74 + 0x20,0x3c);
    iVar2 = DAT_0001ec74;
    *(undefined *)(DAT_0001ec74 + 0x20) = *param_1;
    *(undefined *)(iVar2 + 0x22) = param_1[2];
    *(undefined *)(iVar2 + 0x23) = param_1[3];
    *(undefined *)(iVar2 + 0x21) = param_1[1];
    iVar8 = DAT_0001ec74;
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(DAT_0001ec74 + 0x34) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
    uVar7 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar8 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(iVar8 + 0x28) = uVar7;
    iVar8 = DAT_0001ec74;
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(DAT_0001ec74 + 0x3c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar8 + 0x38) = uVar7;
    if (*(int *)(param_1 + 0x24) != 0) {
      *(undefined2 **)(iVar2 + 0x44) = (undefined2 *)(iVar2 + 0x5c);
      *(int *)(iVar2 + 100) = iVar2 + 0x68;
      *(undefined2 *)(iVar2 + 0x5c) = **(undefined2 **)(param_1 + 0x24);
      *(undefined2 *)(*(int *)(iVar2 + 0x44) + 4) = *(undefined2 *)(*(int *)(param_1 + 0x24) + 4);
      iVar8 = *(int *)(iVar2 + 0x44);
      for (uVar3 = 0; uVar3 < *(ushort *)(iVar8 + 4); uVar3 = uVar3 + 1) {
        *(undefined *)(iVar2 + 0x68 + uVar3) =
             *(undefined *)(*(int *)(*(int *)(param_1 + 0x24) + 8) + uVar3);
      }
    }
    iVar8 = DAT_0001ec74;
    if (*(int *)(param_1 + 0x28) != 0) {
      iVar6 = DAT_0001ec74 + 0x94;
      iVar4 = DAT_0001ec74 + 0x88;
      *(int *)(DAT_0001ec74 + 0x90) = iVar6;
      *(int *)(iVar2 + 0x48) = iVar4;
      *(undefined2 *)(iVar8 + 0x8c) = *(undefined2 *)(*(int *)(param_1 + 0x28) + 4);
      **(undefined2 **)(iVar2 + 0x48) = **(undefined2 **)(param_1 + 0x28);
      iVar8 = *(int *)(iVar2 + 0x48);
      for (uVar3 = 0; uVar3 < *(ushort *)(iVar8 + 4); uVar3 = uVar3 + 1) {
        *(undefined *)(iVar6 + uVar3) =
             *(undefined *)(*(int *)(*(int *)(param_1 + 0x28) + 8) + uVar3);
      }
      *(undefined *)(DAT_0001ec74 + 0x4c) = param_1[0x2c];
    }
    puVar1 = DAT_0001ec70;
    if (*(int *)(param_1 + 0x20) != 0) {
      *(undefined **)(iVar2 + 0x40) = DAT_0001ec70 + 10;
      *(undefined2 *)(puVar1 + 0xc) = *(undefined2 *)(*(int *)(param_1 + 0x20) + 2);
      **(undefined2 **)(iVar2 + 0x40) = **(undefined2 **)(param_1 + 0x20);
    }
    if (*(int *)(param_1 + 4) != 0) {
      *(int *)(iVar2 + 0x24) = *(int *)(param_1 + 4);
    }
    puVar1 = DAT_0001ec70;
    iVar2 = 0;
    iVar8 = DAT_0001ec74 + 0xb3;
    piVar5 = (int *)(DAT_0001ec70 + 0x20);
    do {
      iVar4 = iVar2 * 7;
      iVar6 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(int *)(*piVar5 + iVar6) = iVar4 + iVar8;
    } while (iVar2 < 8);
    iVar2 = 0;
    iVar8 = DAT_0001ec74 + 0xeb;
    do {
      iVar4 = iVar2 * 0x10;
      iVar6 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(int *)(*(int *)(puVar1 + 0x28) + iVar6) = iVar4 + iVar8;
    } while (iVar2 < 8);
    uVar7 = FUN_0001eab4(DAT_0001ec74 + 0x20,param_2);
  }
  return uVar7;
}


/* ---- FUN_0001ec78 @ 0001ec78 ---- */

void FUN_0001ec78(short *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  code *pcVar5;
  
  iVar2 = DAT_0001eccc;
  sVar1 = *param_1;
  if (sVar1 == 0x10) {
    if (*(char *)(param_1 + 0xb) == '\x01') {
      *(short *)(DAT_0001eccc + 8) = param_1[2];
      return;
    }
  }
  else {
    if (sVar1 == 0x11) {
      *(undefined *)(DAT_0001eccc + 5) = 0;
      if (param_1[2] != *(short *)(iVar2 + 8)) {
        return;
      }
      uVar4 = 1;
    }
    else {
      if (sVar1 != 0x1b) {
        return;
      }
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      FUN_0001b110(*(byte *)(DAT_0001eccc + 3) + 1,5);
      uVar4 = extraout_r1;
    }
    iVar3 = FUN_0001ed00(uVar4);
    if ((iVar3 != 0) && (pcVar5 = *(code **)(iVar2 + 0x14), pcVar5 != (code *)0x0)) {
      (*pcVar5)();
    }
  }
  return;
}


/* ---- FUN_0001ecd0 @ 0001ecd0 ---- */

void FUN_0001ecd0(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar1 = DAT_0001ecfc;
  if (((param_1 == 2) || (param_1 == 3)) && (*(char *)(DAT_0001ecfc + 1) != '\0')) {
    *(undefined *)(DAT_0001ecfc + 1) = 0;
    iVar2 = FUN_0001ed00(*(undefined *)(iVar1 + 3));
    if ((iVar2 != 0) && (pcVar3 = *(code **)(iVar1 + 0x14), pcVar3 != (code *)0x0)) {
      (*pcVar3)();
    }
  }
  return;
}


/* ---- FUN_0001ed00 @ 0001ed00 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0001ed9c) */
/* WARNING: Removing unreachable block (ram,0x0001ed9c) */

undefined4 FUN_0001ed00(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined local_38 [8];
  undefined local_30;
  int local_20 [2];
  undefined4 local_18;
  
  pcVar1 = DAT_0001ee00;
  if (*DAT_0001ee00 == '\0') {
    uVar4 = 8;
  }
  else {
    DAT_0001ee00[3] = (char)param_1;
    local_18 = param_1;
    FUN_0002227c(local_20);
    if (local_20[0] == 0) {
      FUN_0001b1ce(DAT_0001ee00 + 0x18,7);
      pcVar2 = DAT_0001ee04;
      if (((DAT_0001ee04[1] != '\0') && (pcVar1[3] == '\x01')) ||
         ((DAT_0001ee04[2] != '\0' && ((pcVar1[3] == '\x01' || (pcVar1[3] == '\x02')))))) {
        if (*(code **)(pcVar1 + 0x10) == (code *)0x0) {
          pcVar1[4] = '\0';
        }
        else {
          pcVar1[4] = '\x01';
          (**(code **)(pcVar1 + 0x10))(8);
        }
      }
      iVar3 = FUN_0001cde0(local_18);
      pcVar1[3] = (char)iVar3;
      if (((*(code **)(pcVar1 + 0x10) == (code *)0x0) ||
          (((iVar3 != 3 && (iVar3 != 4)) || (*pcVar2 == '\0')))) || (pcVar1[5] != '\0')) {
        pcVar1[6] = '\0';
      }
      else {
        pcVar1[6] = '\x01';
        (**(code **)(pcVar1 + 0x10))(7);
      }
      FUN_0001b1ce(local_38,0x18);
      local_38[0] = 0;
      local_30 = 0;
      uVar5 = (uint)(byte)pcVar1[3];
                    /* WARNING: Could not recover jumptable at 0x0001ed9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (DAT_0001eda0 <= uVar5) {
        uVar5 = (uint)DAT_0001eda0;
      }
      uVar4 = (*(code *)((uint)*(byte *)(uVar5 + 0x1eda1) * 2 + 0x1eda1))(DAT_0001ee00 + 0x18);
      return uVar4;
    }
    pcVar1[1] = '\x01';
    uVar4 = 0;
  }
  return uVar4;
}


/* ---- FUN_0001ee08 @ 0001ee08 ---- */

void FUN_0001ee08(int param_1)

{
  FUN_000286e0(s_Enable_Data_Source_notifications_0001ee20,*(undefined2 *)(param_1 + 0x36));
  FUN_0002090c(*(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x36),1);
  return;
}


/* ---- FUN_0001ee5c @ 0001ee5c ---- */

/* WARNING: Removing unreachable block (ram,0x0001eeca) */
/* WARNING: Removing unreachable block (ram,0x0001eebc) */
/* WARNING: Removing unreachable block (ram,0x0001eed8) */

int FUN_0001ee5c(int *param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (*param_2 != 0)) {
    *(undefined *)(param_1 + 0x37) = 0;
    param_1[0x38] = 0;
    *(undefined2 *)(param_1 + 0x39) = 0;
    param_1[0x3a] = 0;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined2 *)(param_1 + 2) = 0xffff;
    uVar1 = (undefined2)DAT_0001eeec;
    *(undefined2 *)(param_1 + 0xe) = uVar1;
    *(undefined2 *)(param_1 + 10) = uVar1;
    FUN_0001b1ce((int)param_1 + 10,0x32);
    FUN_0002b7b8();
    software_interrupt(99);
    iVar2 = DAT_0001eef0;
    if (DAT_0001eef0 == 0) {
      iVar2 = 0x10;
      software_interrupt(99);
    }
    return iVar2;
  }
  return 0xe;
}


/* ---- FUN_0001eef8 @ 0001eef8 ---- */

void FUN_0001eef8(int param_1)

{
  FUN_000286e0(DAT_0001ef10,*(undefined2 *)(param_1 + 0x26));
  FUN_0002090c(*(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x26),1);
  return;
}


/* ---- FUN_0001ef14 @ 0001ef14 ---- */

void FUN_0001ef14(code **param_1,short *param_2)

{
  short sVar1;
  undefined local_78 [12];
  short local_6c;
  
  sVar1 = *param_2;
  if (sVar1 == 0x11) {
    if (*(short *)(param_1 + 2) == param_2[2]) {
      *(undefined2 *)(param_1 + 2) = 0xffff;
    }
  }
  else if (sVar1 == 0x38) {
    if (*(short *)(param_1 + 2) == param_2[2]) {
      if ((param_2[4] != 0) && (param_2[4] == *(short *)((int)param_1 + 0x1a))) {
        local_78[0] = 6;
        local_6c = param_2[3];
        (**param_1)(local_78);
      }
      FUN_0002b828();
    }
  }
  else if ((sVar1 == 0x39) && (param_2[2] == *(short *)(param_1 + 2))) {
    if (param_2[6] == *(short *)(param_1 + 9)) {
      FUN_00026f08(param_1,param_2 + 9,param_2[8]);
    }
    else if (param_2[6] == *(short *)(param_1 + 0xd)) {
      FUN_0001d0ae(param_1,param_2 + 9,param_2[8]);
    }
  }
  return;
}


/* ---- FUN_0001ef94 @ 0001ef94 ---- */

/* WARNING: Type propagation algorithm not settling */

void FUN_0001ef94(code **param_1,char *param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  char *pcVar4;
  undefined local_90 [2];
  undefined2 local_8e;
  undefined auStack_48 [10];
  undefined auStack_3e [10];
  undefined2 local_34;
  undefined auStack_2e [10];
  undefined2 local_24;
  char *local_1c;
  
  FUN_000286e0(s_Database_Discovery_handler_calle_0001f058,*param_2);
  pcVar4 = param_2 + 0xe;
  if (((*param_2 == '\0') && (*(ushort *)(param_2 + 4) == DAT_0001f090)) &&
     (param_2[6] == *(char *)(param_1 + 3))) {
    for (uVar3 = 0; uVar3 < (byte)param_2[8]; uVar3 = uVar3 + 1) {
      local_1c = (char *)(uVar3 * 0x12);
      if ((uint)*(ushort *)(pcVar4 + (int)local_1c) + DAT_0001f094 == 0) {
        FUN_000286e0(s_Notification_point_Characteristi_0001f0ec);
        local_1c = local_1c + (int)pcVar4;
        FUN_0001b19c(auStack_3e,local_1c,10);
        local_34 = *(undefined2 *)(local_1c + 10);
      }
      else {
        iVar1 = (uint)*(ushort *)(pcVar4 + (int)local_1c) + DAT_0001f094 + DAT_0001f098;
        if (iVar1 == 0) {
          FUN_000286e0(s_Data_Source_Characteristic_found_0001f0c4);
          local_1c = local_1c + (int)pcVar4;
          FUN_0001b19c(auStack_2e,local_1c,10);
          local_24 = *(undefined2 *)(local_1c + 10);
        }
        else if (iVar1 + DAT_0001f094 + 3 == 0) {
          FUN_000286e0(s_Control_Point_Characteristic_fou_0001f09c);
          FUN_0001b19c(auStack_48,local_1c + (int)pcVar4,10);
        }
      }
    }
    local_90[0] = 0;
    local_8e = *(undefined2 *)(param_2 + 2);
    pcVar2 = *param_1;
  }
  else {
    local_90[0] = 1;
    pcVar2 = *param_1;
  }
  (*pcVar2)(local_90);
  return;
}


/* ---- FUN_0001f118 @ 0001f118 ---- */

undefined4 FUN_0001f118(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 local_38;
  undefined local_36;
  undefined local_34 [20];
  undefined local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined *local_18;
  
  FUN_0001b1ce(&local_38,0x24);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  local_1e = *(undefined2 *)(param_1 + 0x1a);
  local_18 = local_34;
  local_1c = 0;
  local_20 = 1;
  local_34[0] = 0;
  iVar2 = FUN_0002b876(param_2,local_34 + 1);
  uVar4 = 0;
  iVar2 = iVar2 + 1;
  do {
    iVar5 = uVar4 * 0x10 + param_1;
    iVar3 = iVar2;
    if (*(char *)(iVar5 + 0x3c) == '\x01') {
      iVar3 = iVar2 + 1;
      local_34[iVar2] = (char)uVar4;
      if (((uVar4 == 1) || (uVar4 == 2)) || (uVar4 == 3)) {
        uVar1 = *(undefined2 *)(iVar5 + 0x44);
        local_34[iVar2 + 1] = (char)uVar1;
        local_34[iVar2 + 2] = (char)((ushort)uVar1 >> 8);
        iVar3 = iVar2 + 3;
      }
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
    }
    uVar4 = uVar4 + 1;
    iVar2 = iVar3;
  } while (uVar4 < 8);
  local_1a = (undefined2)iVar3;
  local_38 = *(undefined2 *)(param_1 + 8);
  local_36 = 2;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xcc);
  FUN_0002b7cc(&local_38);
  FUN_0002b828();
  return 0;
}


/* ---- FUN_0001f1aa @ 0001f1aa ---- */

undefined4 FUN_0001f1aa(int param_1)

{
  if ((*(byte *)(param_1 + 4) < 3) && (*(byte *)(param_1 + 6) < 0xc)) {
    return 0;
  }
  return 7;
}


/* ---- FUN_0001f1c0 @ 0001f1c0 ---- */

undefined8 FUN_0001f1c0(int param_1,uint param_2)

{
  uint uVar1;
  
  debug_printf_stub(s_app_cmd_set__0001f1fc);
  FUN_000286de(param_2,0x14);
  uVar1 = DAT_0001f20c;
  if (*(ushort *)(param_1 + 0xaa) != DAT_0001f20c) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x88);
    param_2 = (uint)*(ushort *)(param_1 + 0xaa);
    software_interrupt(0xa4);
  }
  return CONCAT44(uVar1,param_2);
}


/* ---- FUN_0001f210 @ 0001f210 ---- */

/* WARNING: Removing unreachable block (ram,0x0001f268) */
/* WARNING: Removing unreachable block (ram,0x0001f274) */
/* WARNING: Removing unreachable block (ram,0x0001f280) */
/* WARNING: Removing unreachable block (ram,0x0001f28c) */
/* WARNING: Removing unreachable block (ram,0x0001f298) */

void FUN_0001f210(int param_1,int param_2)

{
  *(undefined2 *)(param_1 + 0xaa) = 0xffff;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x74);
  software_interrupt(99);
  if (&stack0x00000000 == &Reserved2) {
    software_interrupt(0xa0);
  }
  return;
}


/* ---- FUN_0001f2a8 @ 0001f2a8 ---- */

void FUN_0001f2a8(int param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = *param_2;
  if (sVar1 == 0x10) {
    sVar1 = param_2[2];
  }
  else {
    if (sVar1 != 0x11) {
      if (sVar1 == 0x50) {
        FUN_00026a88();
      }
      return;
    }
    sVar1 = -1;
  }
  *(short *)(param_1 + 0xaa) = sVar1;
  return;
}


/* ---- FUN_0001f2d0 @ 0001f2d0 ---- */

undefined8 FUN_0001f2d0(int param_1,undefined4 param_2)

{
  undefined local_20 [16];
  undefined2 local_10;
  
  local_10 = 0xe;
  FUN_000286e0(s_notify_send__d_0001f314);
  FUN_000286e2(param_2,local_10);
  software_interrupt(0xa6);
  return CONCAT44(local_20,(uint)*(ushort *)(param_1 + 0xaa));
}


/* ---- FUN_0001f324 @ 0001f324 ---- */

undefined8 FUN_0001f324(int param_1)

{
  undefined local_18 [24];
  
  software_interrupt(0xa6);
  return CONCAT44(local_18,(uint)*(ushort *)(param_1 + 0xaa));
}


/* ---- FUN_0001f354 @ 0001f354 ---- */

undefined8 FUN_0001f354(int param_1,undefined4 param_2,uint param_3)

{
  uint local_28;
  undefined4 local_24;
  uint *local_20;
  undefined4 local_1c;
  int iStack_18;
  undefined4 uStack_14;
  uint local_10;
  
  local_24 = 0;
  local_28 = (uint)CONCAT12(1,*(undefined2 *)(param_1 + 0x78));
  local_20 = &local_10;
  local_1c = param_2;
  iStack_18 = param_1;
  uStack_14 = param_2;
  local_10 = param_3;
  FUN_000286e0(s_BLE_SEND_ANCS___d_0001f39c,param_3 & 0xffff);
  FUN_000286e2(param_2,local_10 & 0xffff);
  software_interrupt(0xa6);
  return CONCAT44(&local_28,(uint)*(ushort *)(param_1 + 0xaa));
}


/* ---- FUN_0001f3b0 @ 0001f3b0 ---- */

void FUN_0001f3b0(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_0001b19c(DAT_0001f3f4,param_1,0x1c);
  puVar2 = DAT_0001f3f8;
  *DAT_0001f3f8 = 0;
  if (*param_1 == 0) {
    software_interrupt(0x7b);
    puVar1 = DAT_0001f3f8;
  }
  else {
    FUN_0001b19c(puVar2 + 4,*param_1,8);
    software_interrupt(0x7a);
    puVar1 = puVar2;
  }
  if (puVar1 == (undefined *)0xfffffffc) {
    *(undefined2 *)(puVar2 + 2) = 0xffff;
    puVar2[1] = 0;
    FUN_0001dc34(DAT_0001f400,0,DAT_0001f3fc);
  }
  return;
}


/* ---- FUN_0001f404 @ 0001f404 ---- */

void FUN_0001f404(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = DAT_0001f490;
  iVar3 = DAT_0001f48c;
  iVar5 = DAT_0001f488;
  sVar1 = *param_1;
  sVar2 = *(short *)(DAT_0001f48c + 0xe);
  if (sVar1 == 0x10) {
    *(short *)(DAT_0001f488 + 2) = param_1[2];
    FUN_0001b19c(DAT_0001f488 + 0xc,param_1 + 0xc,8,param_4,param_4);
    *(undefined *)(iVar5 + 1) = 0;
    if (sVar2 != 0) {
      return;
    }
  }
  else {
    if (sVar1 == 0x11) {
      *(undefined2 *)(DAT_0001f488 + 2) = 0xffff;
      *(undefined *)(iVar5 + 1) = 0;
LAB_0001f464:
      iVar5 = FUN_0001dd8c(*puVar4);
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
      FUN_0001b19c(DAT_0001f488 + 0xc,param_1 + 4,8,param_4,param_4);
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
      iVar5 = FUN_0001fc2e(param_1 + 9);
      if (iVar5 == 0) goto LAB_0001f464;
    }
  }
  FUN_000212e8();
  return;
}


/* ---- FUN_0001f494 @ 0001f494 ---- */

void FUN_0001f494(undefined4 param_1)

{
  FUN_00029b20(param_1,DAT_0001f4a4 + 4,*(undefined *)(DAT_0001f4a4 + 0x14));
  return;
}


/* ---- FUN_0001f4a8 @ 0001f4a8 ---- */

void FUN_0001f4a8(undefined4 param_1)

{
  FUN_00029acc(DAT_0001f4b8 + 4,*(undefined *)(DAT_0001f4b8 + 0x17),param_1);
  return;
}


/* ---- FUN_0001f4bc @ 0001f4bc ---- */

void FUN_0001f4bc(undefined4 param_1)

{
  FUN_00029acc(DAT_0001f4cc + 4,*(undefined *)(DAT_0001f4cc + 0x18),param_1);
  return;
}


/* ---- FUN_0001f4d0 @ 0001f4d0 ---- */

void FUN_0001f4d0(short *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  bool bVar6;
  uint local_40;
  undefined2 local_3c [8];
  undefined auStack_2c [4];
  int local_28;
  
  iVar1 = DAT_0001f5c4;
  sVar4 = *param_1;
  iVar3 = DAT_0001f5c4 + 0x15;
  if (sVar4 == 0x10) {
    FUN_00029b20(auStack_2c,DAT_0001f5c4 + 4,
                 *(byte *)(DAT_0001f5c4 + 0x14) & ~*(byte *)(DAT_0001f5c4 + 0x15));
    FUN_0001b19c(&local_40,auStack_2c,0x14);
    local_28 = DAT_0001f5c4 + 0x14;
    for (uVar5 = 0; uVar5 < local_40; uVar5 = uVar5 + 1) {
      FUN_000299dc(iVar1 + 4,local_28,0x1d,local_3c[uVar5],0);
    }
    sVar4 = param_1[2];
    iVar2 = FUN_00029a60(~*(byte *)(iVar1 + 0x14));
    if (iVar2 == DAT_0001f5c8) {
      app_error_handler(4,0xe1,s___________________components_ble_0001f5cc);
      return;
    }
    *(short *)(iVar2 * 2 + iVar1 + 4) = sVar4;
    FUN_00029b94(iVar1 + 4,iVar3,sVar4,1);
    FUN_00029b94(iVar1 + 4,local_28,sVar4,1);
    bVar6 = *(char *)(param_1 + 0xb) == '\x02';
    sVar4 = param_1[2];
    iVar3 = DAT_0001f5c4 + 0x16;
  }
  else if (sVar4 == 0x11) {
    bVar6 = false;
    sVar4 = param_1[2];
  }
  else {
    if (sVar4 != 0x1a) {
      return;
    }
    FUN_00029b94(DAT_0001f5c4 + 4,DAT_0001f5c4 + 0x17,param_1[2],1 < *(byte *)(param_1 + 4) >> 4);
    bVar6 = 2 < *(byte *)(param_1 + 4) >> 4;
    sVar4 = param_1[2];
    iVar3 = DAT_0001f5c4 + 0x18;
  }
  FUN_00029b94(iVar1 + 4,iVar3,sVar4,bVar6);
  return;
}


/* ---- FUN_0001f608 @ 0001f608 ---- */

undefined4 FUN_0001f608(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_0001f638;
  uVar3 = 0;
  iVar1 = FUN_00029acc(DAT_0001f638 + 4,*(undefined *)(DAT_0001f638 + 0x14),param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_00029acc(iVar2 + 4,*(undefined *)(iVar2 + 0x16),param_1);
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
  }
  return uVar3;
}


/* ---- FUN_0001f63c @ 0001f63c ---- */

undefined4 FUN_0001f63c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_0001f66c;
  uVar3 = 0;
  iVar1 = FUN_00029acc(DAT_0001f66c + 4,*(undefined *)(DAT_0001f66c + 0x14),param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_00029acc(iVar2 + 4,*(undefined *)(iVar2 + 0x15),param_1);
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
  }
  return uVar3;
}


/* ---- FUN_0001f670 @ 0001f670 ---- */

uint FUN_0001f670(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_0002bda8(uVar2);
    if (iVar1 == 0) {
      *DAT_0001f69c = *DAT_0001f69c | 1 << uVar2;
      return uVar2;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x18);
  return 0x18;
}


/* ---- FUN_0001f6a0 @ 0001f6a0 ---- */

uint FUN_0001f6a0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0002bda8();
  if (uVar1 != 0) {
    uVar1 = (uint)*(byte *)(DAT_0001f6b4 + param_1 + 0x19);
  }
  return uVar1;
}


/* ---- FUN_0001f6b8 @ 0001f6b8 ---- */

void FUN_0001f6b8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002bda8(param_2);
  if (iVar1 != 0) {
    FUN_00029acc(DAT_0001f6d8 + 4,*(undefined *)(DAT_0001f6d8 + param_2 + 0x19),param_1);
  }
  return;
}


/* ---- FUN_0001f6dc @ 0001f6dc ---- */

void FUN_0001f6dc(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0002bda8(param_2);
  if (iVar1 != 0) {
    FUN_00029b94(DAT_0001f700 + 4,DAT_0001f700 + param_2 + 0x19,param_1,param_3);
  }
  return;
}


/* ---- FUN_0001f704 @ 0001f704 ---- */

undefined4 FUN_0001f704(undefined2 *param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  
  pcVar1 = DAT_0001f748;
  if (param_1 == (undefined2 *)0x0) {
    return 0xe;
  }
  if (*DAT_0001f748 != '\0') {
    iVar2 = FUN_000297e4();
    if (iVar2 == 0) {
      uVar3 = *(uint *)(pcVar1 + 0xc);
      if (5 < uVar3) {
        return 4;
      }
      puVar4 = (undefined2 *)(uVar3 * 4 + DAT_0001f74c);
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
      *(uint *)(pcVar1 + 0xc) = uVar3 + 1;
    }
    return 0;
  }
  return 8;
}


/* ---- FUN_0001f750 @ 0001f750 ---- */

undefined4 FUN_0001f750(int param_1)

{
  undefined *puVar1;
  
  puVar1 = DAT_0001f76c;
  if (param_1 != 0) {
    *(undefined4 *)(DAT_0001f76c + 0xc) = 0;
    *puVar1 = 1;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(int *)(puVar1 + 4) = param_1;
    return 0;
  }
  return 0xe;
}


/* ---- FUN_0001f770 @ 0001f770 ---- */

void FUN_0001f770(int param_1,short *param_2)

{
  short sVar1;
  
  if (((param_1 == 0) || (param_2 == (short *)0x0)) || (*DAT_0001f7c0 == '\0')) {
    return;
  }
  sVar1 = *param_2;
  if (sVar1 == 0x11) {
    if (param_2[2] == *(short *)(param_1 + 0x25e)) {
      *(undefined *)(param_1 + 0x25b) = 0;
      return;
    }
  }
  else {
    if (sVar1 == 0x30) {
      FUN_000269b0(param_1,param_2 + 2);
      return;
    }
    if (sVar1 != 0x32) {
      if (sVar1 != 0x33) {
        return;
      }
      FUN_00026868(param_1,param_2 + 2);
      return;
    }
    FUN_00026654(param_1,param_2 + 2);
  }
  return;
}


/* ---- FUN_0001f7c4 @ 0001f7c4 ---- */

undefined8 FUN_0001f7c4(undefined2 *param_1,int param_2)

{
  undefined2 *puVar1;
  char *pcVar2;
  
  pcVar2 = DAT_0001f81c;
  if (param_1 == (undefined2 *)0x0) {
    return CONCAT44(param_2,0xe);
  }
  if ((*DAT_0001f81c == '\0') || (*(int *)(DAT_0001f81c + 0xc) == 0)) {
    param_2 = 8;
  }
  else {
    if (*(char *)((int)param_1 + 0x25b) != '\0') {
      return CONCAT44(DAT_0001f81c,0x11);
    }
    param_1[0x12f] = (short)param_2;
    *(undefined4 *)(pcVar2 + 8) = 0;
    *(undefined *)(param_1 + 0x12e) = 0;
    *(undefined *)(param_1 + 0x12d) = 0;
    *(undefined *)((int)param_1 + 0x259) = 0;
    puVar1 = DAT_0001f820;
    *param_1 = *DAT_0001f820;
    param_1[1] = puVar1[1];
    software_interrupt(0x90);
    pcVar2 = (char *)0x1;
    if (param_2 == 0) {
      *(undefined *)((int)param_1 + 0x25b) = 1;
      return 0x100000000;
    }
  }
  return CONCAT44(pcVar2,param_2);
}


/* ---- FUN_0001f824 @ 0001f824 ---- */

undefined4 * FUN_0001f824(int param_1,ushort *param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar2 = &local_18;
  if (param_3 < *param_2 + 9) {
    puVar2 = (undefined4 *)&HardFault;
  }
  else {
    software_interrupt(0x71);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined *)(param_1 + (uint)*param_2) = 8;
      uVar1 = *param_2;
      *param_2 = uVar1 + 1;
      *(undefined *)(param_1 + (uint)(ushort)(uVar1 + 1)) = 0x1b;
      uVar1 = *param_2;
      *param_2 = uVar1 + 1;
      local_18 = param_3;
      uStack_14 = param_4;
      FUN_0001b19c((uint)(ushort)(uVar1 + 1) + param_1,(int)&local_18 + 1,6);
      uVar1 = *param_2;
      *param_2 = uVar1 + 6;
      if ((char)local_18 != '\0') {
        local_18._0_1_ = '\x01';
      }
      *(char *)(param_1 + (uint)(ushort)(uVar1 + 6)) = (char)local_18;
      *param_2 = *param_2 + 1;
      return (undefined4 *)0x0;
    }
  }
  return puVar2;
}


/* ---- FUN_0001f884 @ 0001f884 ---- */

uint FUN_0001f884(int param_1,uint param_2)

{
  if (*(ushort *)(param_1 + 0x5c) != DAT_0001f8b0) {
    param_2 = (uint)*(ushort *)(param_1 + 0x5c);
    software_interrupt(0xa4);
  }
  return param_2;
}


/* ---- FUN_0001f8b4 @ 0001f8b4 ---- */

/* WARNING: Removing unreachable block (ram,0x0001f8f8) */
/* WARNING: Removing unreachable block (ram,0x0001f904) */
/* WARNING: Removing unreachable block (ram,0x0001f910) */
/* WARNING: Removing unreachable block (ram,0x0001f91c) */

void FUN_0001f8b4(int param_1,int param_2)

{
  *(undefined2 *)(param_1 + 0x5c) = 0xffff;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  software_interrupt(99);
  if (&stack0x00000000 == &Reserved4) {
    software_interrupt(0xa0);
  }
  return;
}


/* ---- FUN_0001f92c @ 0001f92c ---- */

undefined8 FUN_0001f92c(int param_1)

{
  undefined local_18 [24];
  
  software_interrupt(0xa6);
  return CONCAT44(local_18,(uint)*(ushort *)(param_1 + 0x5c));
}


/* ---- FUN_0001f95a @ 0001f95a ---- */

void FUN_0001f95a(int param_1,short *param_2)

{
  short sVar1;
  
  if (*param_2 == 0x10) {
    sVar1 = param_2[2];
  }
  else {
    if (*param_2 != 0x11) {
      return;
    }
    sVar1 = -1;
  }
  *(short *)(param_1 + 0x5c) = sVar1;
  return;
}


/* ---- FUN_0001f974 @ 0001f974 ---- */

/* WARNING: Removing unreachable block (ram,0x0001f98e) */
/* WARNING: Removing unreachable block (ram,0x0001f998) */
/* WARNING: Removing unreachable block (ram,0x0001f9ac) */
/* WARNING: Removing unreachable block (ram,0x0001f9b2) */
/* WARNING: Removing unreachable block (ram,0x0001f9c8) */
/* WARNING: Removing unreachable block (ram,0x0001f9ce) */
/* WARNING: Removing unreachable block (ram,0x0001f9e4) */
/* WARNING: Removing unreachable block (ram,0x0001f9ea) */
/* WARNING: Removing unreachable block (ram,0x0001fa00) */
/* WARNING: Removing unreachable block (ram,0x0001fa06) */
/* WARNING: Removing unreachable block (ram,0x0001fa1c) */
/* WARNING: Removing unreachable block (ram,0x0001fa22) */
/* WARNING: Removing unreachable block (ram,0x0001fa38) */
/* WARNING: Removing unreachable block (ram,0x0001fa3e) */
/* WARNING: Removing unreachable block (ram,0x0001fa5c) */
/* WARNING: Removing unreachable block (ram,0x0001fa62) */
/* WARNING: Removing unreachable block (ram,0x0001fa7a) */
/* WARNING: Removing unreachable block (ram,0x0001fa80) */
/* WARNING: Removing unreachable block (ram,0x0001faa4) */

undefined4 FUN_0001f974(void)

{
  software_interrupt(0xa0);
  return 1;
}


/* ---- FUN_0001fab8 @ 0001fab8 ---- */

void FUN_0001fab8(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(DAT_0001faf4 + 8) < 0x82) || (*(byte *)(DAT_0001faf4 + 8) == 0xff)) {
    if (param_1 == 0) {
      return;
    }
    FUN_000286b8();
  }
  uVar1 = (uint)*(ushort *)(DAT_0001faf8 + 6);
  if (uVar1 != DAT_0001fafc) {
    uVar2 = CONCAT44(0x13,uVar1);
    software_interrupt(0x76);
    if (uVar1 != 0) {
      uVar2 = app_error_handler(uVar1,DAT_0001fb20,s__________application_user_ble_c_0001fb00);
    }
    if (param_1 != 0) {
      FUN_000286b8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
    }
  }
  return;
}


/* ---- FUN_0001fb24 @ 0001fb24 ---- */

void FUN_0001fb24(undefined4 param_1)

{
  FUN_0001f4d0();
  FUN_00028184(param_1);
  FUN_0001f770(DAT_0001fb68,param_1);
  FUN_0001f404(param_1);
  FUN_0001ef14(DAT_0001fb6c,param_1);
  FUN_0001f95a(DAT_0001fb70,param_1);
  FUN_0001f2a8(DAT_0001fb74,param_1);
  FUN_0002635c(param_1);
  FUN_0001ec78(param_1);
  return;
}


/* ---- FUN_0001fb78 @ 0001fb78 ---- */

void FUN_0001fb78(void)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined local_14;
  undefined2 local_12;
  undefined local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0002afa0();
  FUN_0002799c(0);
  iVar1 = FUN_0001f750(DAT_0001fbe4);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0001fc08,s__________application_user_ble_c_0001fbe8);
  }
  FUN_00022380();
  FUN_0002a004();
  FUN_0001ce48();
  FUN_0001b1ce(&local_20,0x1c);
  local_1c = DAT_0001fc0c;
  local_18 = DAT_0001fc10;
  local_20 = 0;
  local_14 = 3;
  local_12 = 0;
  local_10 = 0;
  local_c = DAT_0001fc14;
  local_8 = DAT_0001fc18;
  iVar1 = FUN_0001f3b0(&local_20);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0001fc08 + -0x36,s__________application_user_ble_c_0001fbe8);
  }
  return;
}


/* ---- FUN_0001fc1c @ 0001fc1c ---- */

void FUN_0001fc1c(undefined2 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0001b1e4(param_2);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = param_2;
  return;
}


/* ---- FUN_0001fc2e @ 0001fc2e ---- */

byte FUN_0001fc2e(byte *param_1)

{
  return *param_1 & 1;
}


/* ---- FUN_0001fc3c @ 0001fc3c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001fc3c(void)

{
  int iVar1;
  undefined2 local_20 [10];
  undefined4 local_c [3];
  
  local_c[0] = *(undefined4 *)(DAT_0001fcbc + 0xc);
  iVar1 = FUN_0002a91c(local_c,_DAT_0001fcc0,0x48,0);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0001fce4,s__________application_user_ble_c_0001fcc3 + 1);
  }
  iVar1 = FUN_0002a8ec(0,1,local_20);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0001fce4 + 6,s__________application_user_ble_c_0001fcc3 + 1);
  }
  local_20[0] = 0xe;
  iVar1 = FUN_0002a8d8(local_20);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x518,s__________application_user_ble_c_0001fcc3 + 1);
  }
  iVar1 = FUN_0002a8c4(DAT_0001fce8);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0001fce4 + 0x17,s__________application_user_ble_c_0001fcc3 + 1);
  }
  iVar1 = FUN_0002a980(DAT_0001fcec);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x520,s__________application_user_ble_c_0001fcc3 + 1);
  }
  return;
}


/* ---- FUN_0001fcf0 @ 0001fcf0 ---- */

undefined4 FUN_0001fcf0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_0001fd14 + 4);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001fd0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(iVar1 + 0xc))(*(undefined *)(iVar1 + 4),9,param_1,4);
    return uVar2;
  }
  return 0xffffff81;
}


/* ---- FUN_0001fd18 @ 0001fd18 ---- */

void FUN_0001fd18(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = *DAT_0001fd88;
  local_c = DAT_0001fd88[1];
  iVar2 = FUN_000255fc();
  if ((iVar2 == 0) && (iVar2 = FUN_000255a0(), iVar2 != 0)) {
    app_error_handler(iVar2,0xbe,DAT_0001fd8c);
  }
  pcVar1 = DAT_0001fd90;
  if (*DAT_0001fd90 == -6) {
    local_10._0_2_ = CONCAT11(3,(byte)local_10);
    iVar2 = FUN_000254e4(0,&local_10,DAT_0001fd94);
    if (iVar2 == 0) goto LAB_0001fd5e;
    uVar3 = 199;
  }
  else {
    local_10._0_2_ = (ushort)(byte)local_10;
    iVar2 = FUN_000254e4(0,&local_c,DAT_0001fd94);
    if (iVar2 == 0) goto LAB_0001fd5e;
    uVar3 = 0xce;
  }
  app_error_handler(iVar2,uVar3,DAT_0001fd8c);
LAB_0001fd5e:
  FUN_000286e0(s_______bma2x2_gpiote_init__x_0001fd98,*pcVar1);
  FUN_0002544c(0,1);
  return;
}


/* ---- FUN_0001fdb8 @ 0001fdb8 ---- */

void FUN_0001fdb8(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0001fdd0;
  if (*DAT_0001fdd0 == '\0') {
    FUN_00022ba4(DAT_0001fdd4);
    *pcVar1 = '\x01';
  }
  return;
}


/* ---- FUN_0001fdd8 @ 0001fdd8 ---- */

int FUN_0001fdd8(void)

{
  int iVar1;
  
  iVar1 = DAT_0001fe08;
  *(undefined4 *)(DAT_0001fe08 + 8) = DAT_0001fe04;
  *(undefined4 *)(iVar1 + 0xc) = DAT_0001fe0c;
  *(undefined4 *)(iVar1 + 0x14) = DAT_0001fe10;
  *(undefined *)(iVar1 + 4) = 0x18;
  iVar1 = FUN_00022bac(DAT_0001fe14 + -8);
  if (iVar1 != 0) {
    FUN_0001fdb8();
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_0001fe18 @ 0001fe18 ---- */

void FUN_0001fe18(void)

{
  FUN_00022bec(DAT_0001fe24);
  return;
}


/* ---- FUN_0001fe28 @ 0001fe28 ---- */

int FUN_0001fe28(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint local_18;
  uint local_14;
  
  iVar1 = DAT_0001fe70;
  local_18 = param_3 & 0xffffff00;
  local_14 = param_4 & 0xffffff00;
  *(int *)(DAT_0001fe70 + 4) = param_1;
  if (param_1 != 0) {
    cVar2 = (**(code **)(param_1 + 0xc))(*(undefined *)(param_1 + 4),0,&local_18,1);
    *(undefined *)(*(int *)(iVar1 + 4) + 1) = (undefined)local_18;
    *(undefined *)(iVar1 + 1) = (undefined)local_18;
    cVar3 = FUN_0001fe74(0x3e,&local_14,1);
    *(undefined *)(*(int *)(iVar1 + 4) + 5) = (undefined)local_14;
    return (int)(char)(cVar3 + cVar2);
  }
  return -0x7f;
}


/* ---- FUN_0001fe74 @ 0001fe74 ---- */

undefined4 FUN_0001fe74(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0001fe98 + 4);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001fe8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(iVar2 + 0xc))(*(undefined *)(iVar2 + 4),param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffff81;
}


/* ---- FUN_0001fe9c @ 0001fe9c ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0001ff08) */
/* WARNING (jumptable): Removing unreachable block (ram,0x0001fecc) */
/* WARNING: Removing unreachable block (ram,0x0001ff08) */
/* WARNING: Removing unreachable block (ram,0x0001fecc) */

undefined4 FUN_0001fe9c(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)(DAT_0001ff38 + 4) == 0) {
    return 0xffffff81;
  }
  uVar2 = param_1 - 8;
  if (*(char *)(*(int *)(DAT_0001ff38 + 4) + 1) == -5) {
    if (uVar2 < 7) {
                    /* WARNING: Could not recover jumptable at 0x0001fecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar2 < DAT_0001fed0) {
        pbVar1 = (byte *)(param_1 + 0x1fec9);
      }
      else {
        pbVar1 = (byte *)(DAT_0001fed0 + 0x1fed1);
      }
      uVar3 = (*(code *)((uint)*pbVar1 * 2 + 0x1fed1))();
      return uVar3;
    }
  }
  else if (uVar2 < 8) {
                    /* WARNING: Could not recover jumptable at 0x0001ff08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (uVar2 < DAT_0001ff0c) {
      pbVar1 = (byte *)(param_1 + 0x1ff05);
    }
    else {
      pbVar1 = (byte *)(DAT_0001ff0c + 0x1ff0d);
    }
    uVar3 = (*(code *)((uint)*pbVar1 * 2 + 0x1ff0d))();
    return uVar3;
  }
  return 0xfffffffe;
}


/* ---- FUN_0001ff3c @ 0001ff3c ---- */

int FUN_0001ff3c(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_18;
  
  local_18 = param_4 & 0xffffff00;
  iVar5 = *(int *)(DAT_0001ffac + 4);
  if (iVar5 == 0) {
    return -0x7f;
  }
  bVar1 = (byte)((uint)(param_2 << 0x1f) >> 0x18);
  if (param_1 == 0) {
    cVar2 = (**(code **)(iVar5 + 0xc))(*(undefined *)(iVar5 + 4),0x19,&local_18,1);
    local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & 0xef | bVar1 >> 3);
    uVar4 = 0x19;
  }
  else {
    if (param_1 != 1) {
      return -2;
    }
    cVar2 = (**(code **)(iVar5 + 0xc))(*(undefined *)(iVar5 + 4),0x1b,&local_18,1);
    local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & 0xef | bVar1 >> 3);
    uVar4 = 0x1b;
  }
  cVar3 = FUN_00020810(uVar4,&local_18,1);
  return (int)(char)(cVar3 + cVar2);
}


/* ---- FUN_0001ffb0 @ 0001ffb0 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0001fff2) */
/* WARNING: Removing unreachable block (ram,0x0001fff2) */

undefined8 FUN_0001ffb0(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_20;
  uint local_1c;
  undefined4 uStack_18;
  
  iVar2 = DAT_000200d0;
  local_20 = param_2 & 0xffffff00;
  local_1c = param_3 & 0xffffff00;
  iVar3 = *(int *)(DAT_000200d0 + 4);
  if (iVar3 == 0) {
    return CONCAT44(local_20,0xffffff81);
  }
  uStack_18 = param_4;
  (**(code **)(iVar3 + 0xc))(*(undefined *)(iVar3 + 4),0x16,&local_20,1);
  (**(code **)(*(int *)(iVar2 + 4) + 0xc))(*(undefined *)(*(int *)(iVar2 + 4) + 4),0x17,&local_1c,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x0001fff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (param_1 < DAT_0001fff6) {
    pbVar1 = (byte *)(param_1 + 0x1fff7);
  }
  else {
    pbVar1 = (byte *)(DAT_0001fff6 + 0x1fff7);
  }
  uVar4 = (*(code *)((uint)*pbVar1 * 2 + 0x1fff7))(param_2 & 1,0xfb,0xfd);
  return uVar4;
}


/* ---- FUN_000200d4 @ 000200d4 ---- */

int FUN_000200d4(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 local_10;
  
  local_10 = param_4 & 0xffffff00;
  iVar4 = *(int *)(DAT_00020144 + 4);
  if (iVar4 == 0) {
    return -0x7f;
  }
  if (param_1 == 0) {
    cVar1 = (**(code **)(iVar4 + 0xc))(*(undefined *)(iVar4 + 4),0x20,&local_10,1);
    bVar2 = (byte)local_10 & 0xfe | (byte)(param_2 & 1);
  }
  else {
    if (param_1 != 1) {
      return -2;
    }
    cVar1 = (**(code **)(iVar4 + 0xc))(*(undefined *)(iVar4 + 4),0x20,&local_10,1);
    bVar2 = (byte)local_10 & 0xfb | (byte)((param_2 & 1) << 2);
  }
  local_10 = CONCAT31(local_10._1_3_,bVar2);
  cVar3 = FUN_00020810(0x20,&local_10,1);
  return (int)(char)(cVar3 + cVar1);
}


/* ---- FUN_00020148 @ 00020148 ---- */

int FUN_00020148(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 local_10;
  
  local_10 = param_4 & 0xffffff00;
  iVar5 = *(int *)(DAT_000201b8 + 4);
  if (iVar5 == 0) {
    return -0x7f;
  }
  if (param_1 == 0) {
    cVar2 = (**(code **)(iVar5 + 0xc))(*(undefined *)(iVar5 + 4),0x20,&local_10,1);
    bVar1 = (byte)local_10 & 0xfd;
    bVar4 = (byte)((param_2 & 1) << 1);
  }
  else {
    if (param_1 != 1) {
      return -2;
    }
    cVar2 = (**(code **)(iVar5 + 0xc))(*(undefined *)(iVar5 + 4),0x20,&local_10,1);
    bVar1 = (byte)local_10 & 0xf7;
    bVar4 = (byte)((param_2 & 1) << 3);
  }
  local_10 = CONCAT31(local_10._1_3_,bVar1 | bVar4);
  cVar3 = FUN_00020810(0x20,&local_10,1);
  return (int)(char)(cVar3 + cVar2);
}


/* ---- FUN_000201bc @ 000201bc ---- */

int FUN_000201bc(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_18;
  
  local_18 = param_4 & 0xffffff00;
  iVar5 = *(int *)(DAT_0002022c + 4);
  if (iVar5 == 0) {
    return -0x7f;
  }
  bVar1 = (byte)((uint)(param_2 << 0x1f) >> 0x18);
  if (param_1 == 0) {
    cVar2 = (**(code **)(iVar5 + 0xc))(*(undefined *)(iVar5 + 4),0x19,&local_18,1);
    local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & 0xdf | bVar1 >> 2);
    uVar4 = 0x19;
  }
  else {
    if (param_1 != 1) {
      return -2;
    }
    cVar2 = (**(code **)(iVar5 + 0xc))(*(undefined *)(iVar5 + 4),0x1b,&local_18,1);
    local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & 0xdf | bVar1 >> 2);
    uVar4 = 0x1b;
  }
  cVar3 = FUN_00020810(uVar4,&local_18,1);
  return (int)(char)(cVar3 + cVar2);
}


/* ---- FUN_00020230 @ 00020230 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00020248) */
/* WARNING: Removing unreachable block (ram,0x00020248) */

undefined4 FUN_00020230(uint param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_000202cc + 4) == 0) {
    return 0xffffff81;
  }
  if (0xf < param_1) {
    return 0xfffffffe;
  }
                    /* WARNING: Could not recover jumptable at 0x00020248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (param_1 < DAT_0002024c) {
    pbVar1 = (byte *)(param_1 + 0x2024d);
  }
  else {
    pbVar1 = (byte *)(DAT_0002024c + 0x2024d);
  }
  uVar2 = (*(code *)((uint)*pbVar1 * 2 + 0x2024d))();
  return uVar2;
}


/* ---- FUN_000202d0 @ 000202d0 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000202ec) */
/* WARNING: Removing unreachable block (ram,0x000202ec) */

undefined4 FUN_000202d0(uint param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_00020320 + 4) == 0) {
    return 0xffffff81;
  }
  if (5 < param_1) {
    return 0xfffffffe;
  }
                    /* WARNING: Could not recover jumptable at 0x000202ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (param_1 < DAT_000202f0) {
    pbVar1 = (byte *)(param_1 + 0x202f1);
  }
  else {
    pbVar1 = (byte *)(DAT_000202f0 + 0x202f1);
  }
  uVar2 = (*(code *)((uint)*pbVar1 * 2 + 0x202f1))(0,*(int *)(DAT_00020320 + 4),0);
  return uVar2;
}


/* ---- FUN_00020324 @ 00020324 ---- */

undefined8 FUN_00020324(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = DAT_0002040c;
  local_20 = param_2 & 0xffffff00;
  local_1c = param_3 & 0xffffff00;
  local_18 = param_4 & 0xffffff00;
  iVar7 = *(int *)(DAT_0002040c + 4);
  if (iVar7 == 0) {
    return CONCAT44(local_20,0xffffff81);
  }
  cVar2 = (**(code **)(iVar7 + 0xc))(*(undefined *)(iVar7 + 4),0x11,&local_20,1);
  cVar3 = (**(code **)(*(int *)(iVar1 + 4) + 0xc))
                    (*(undefined *)(*(int *)(iVar1 + 4) + 4),0x12,&local_1c,1);
  local_18 = CONCAT31(local_18._1_3_,*(undefined *)(*(int *)(iVar1 + 4) + 5)) | 0xc;
  cVar4 = FUN_000202d0(param_1);
  cVar6 = *(char *)(*(int *)(iVar1 + 4) + 2);
  local_1c = CONCAT31(local_1c._1_3_,
                      (byte)local_1c & 0xbf |
                      (byte)(((uint)*(byte *)(*(int *)(iVar1 + 4) + 3) << 0x1f) >> 0x19));
  cVar5 = FUN_00020810(0x12,&local_1c,1);
  cVar5 = cVar5 + cVar4 + cVar3 + cVar2;
  (**(code **)(*(int *)(iVar1 + 4) + 0x14))(1);
  if (((**(char **)(iVar1 + 4) == '\x01') || (**(char **)(iVar1 + 4) == '\x04')) && (param_1 == 0))
  {
    local_20 = CONCAT31(local_20._1_3_,((byte)local_20 & 0x1f) + 0x80);
    cVar2 = FUN_00020810(0x11,&local_20,1);
    cVar3 = FUN_00020810(0x3e,&local_18,1);
    cVar5 = cVar3 + cVar2 + cVar5;
  }
  local_20 = CONCAT31(local_20._1_3_,(byte)local_20 & 0x1f | cVar6 << 5);
  cVar6 = FUN_00020810(0x11,&local_20,1);
  (**(code **)(*(int *)(iVar1 + 4) + 0x14))(1);
  cVar2 = FUN_00020810(0x3e,&local_18,1);
  **(undefined **)(iVar1 + 4) = (char)param_1;
  return CONCAT44(local_20,(int)(char)(cVar2 + cVar6 + cVar5));
}


/* ---- FUN_00020410 @ 00020410 ---- */

int FUN_00020410(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4 & 0xffffff00;
  iVar3 = *(int *)(DAT_000204a0 + 4);
  if (iVar3 == 0) {
    return -0x7f;
  }
  if ((((param_1 != 3) && (param_1 != 5)) && (param_1 != 8)) && (param_1 != 0xc)) {
    return -2;
  }
  cVar1 = (**(code **)(iVar3 + 0xc))(*(undefined *)(iVar3 + 4),0xf,&local_18,1);
  if (param_1 == 3) {
    cVar2 = ((byte)local_18 & 0xf0) + 3;
  }
  else if (param_1 == 5) {
    cVar2 = ((byte)local_18 & 0xf0) + 5;
  }
  else if (param_1 == 8) {
    cVar2 = ((byte)local_18 & 0xf0) + 8;
  }
  else {
    if (param_1 != 0xc) goto LAB_00020478;
    cVar2 = ((byte)local_18 & 0xf0) + 0xc;
  }
  local_18 = CONCAT31(local_18._1_3_,cVar2);
LAB_00020478:
  cVar2 = FUN_00020810(0xf,&local_18,1);
  return (int)(char)(cVar2 + cVar1);
}


/* ---- FUN_000204a4 @ 000204a4 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000204be) */
/* WARNING: Removing unreachable block (ram,0x000204be) */

undefined4 FUN_000204a4(int param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_00020530 + 4) == 0) {
    return 0xffffff81;
  }
  if (10 < param_1 - 5U) {
    return 0xfffffffe;
  }
                    /* WARNING: Could not recover jumptable at 0x000204be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (param_1 - 5U < (uint)DAT_000204c2) {
    pbVar1 = (byte *)(param_1 + 0x204be);
  }
  else {
    pbVar1 = (byte *)(DAT_000204c2 + 0x204c3);
  }
  uVar2 = (*(code *)((uint)*pbVar1 * 2 + 0x204c3))();
  return uVar2;
}


/* ---- FUN_00020534 @ 00020534 ---- */

int FUN_00020534(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4 & 0xffffff00;
  iVar3 = *(int *)(DAT_00020588 + 4);
  if (iVar3 == 0) {
    return -0x7f;
  }
  if (param_1 < 2) {
    cVar1 = (**(code **)(iVar3 + 0xc))(*(undefined *)(iVar3 + 4),0x12,&local_18,1);
    local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & 0xdf | (byte)((param_1 << 0x1f) >> 0x1a));
    cVar2 = FUN_00020810(0x12,&local_18,1);
    return (int)(char)(cVar2 + cVar1);
  }
  return -2;
}


/* ---- FUN_0002058c @ 0002058c ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000205a2) */
/* WARNING: Removing unreachable block (ram,0x000205a2) */

undefined4 FUN_0002058c(uint param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_0002066c + 4) == 0) {
    return 0xffffff81;
  }
                    /* WARNING: Could not recover jumptable at 0x000205a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (param_1 < DAT_000205a6) {
    pbVar1 = (byte *)(param_1 + 0x205a7);
  }
  else {
    pbVar1 = (byte *)(DAT_000205a6 + 0x205a7);
  }
  uVar2 = (*(code *)((uint)*pbVar1 * 2 + 0x205a7))();
  return uVar2;
}


/* ---- FUN_00020670 @ 00020670 ---- */

int FUN_00020670(byte param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4 & 0xffffff00;
  iVar3 = *(int *)(DAT_000206b8 + 4);
  if (iVar3 != 0) {
    cVar1 = (**(code **)(iVar3 + 0xc))(*(undefined *)(iVar3 + 4),0x2a,&local_18,1);
    local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & 0xf8 | param_1 & 7);
    cVar2 = FUN_00020810(0x2a,&local_18,1);
    return (int)(char)(cVar2 + cVar1);
  }
  return -0x7f;
}


/* ---- FUN_000206bc @ 000206bc ---- */

int FUN_000206bc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4 & 0xffffff00;
  iVar3 = *(int *)(DAT_00020704 + 4);
  if (iVar3 != 0) {
    cVar1 = (**(code **)(iVar3 + 0xc))(*(undefined *)(iVar3 + 4),0x2a,&local_18,1);
    local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & 0x7f | (byte)(param_1 << 7));
    cVar2 = FUN_00020810(0x2a,&local_18,1);
    return (int)(char)(cVar2 + cVar1);
  }
  return -0x7f;
}


/* ---- FUN_00020708 @ 00020708 ---- */

int FUN_00020708(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4 & 0xffffff00;
  iVar3 = *(int *)(DAT_00020750 + 4);
  if (iVar3 != 0) {
    cVar1 = (**(code **)(iVar3 + 0xc))(*(undefined *)(iVar3 + 4),0x2b,&local_18,1);
    local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & 0x3f | (byte)(param_1 << 6));
    cVar2 = FUN_00020810(0x2b,&local_18,1);
    return (int)(char)(cVar2 + cVar1);
  }
  return -0x7f;
}


/* ---- FUN_00020754 @ 00020754 ---- */

int FUN_00020754(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4 & 0xffffff00;
  iVar3 = *(int *)(DAT_0002079c + 4);
  if (iVar3 != 0) {
    cVar1 = (**(code **)(iVar3 + 0xc))(*(undefined *)(iVar3 + 4),0x2a,&local_18,1);
    local_18 = CONCAT31(local_18._1_3_,
                        (byte)local_18 & 0xbf | (byte)((uint)(param_1 << 0x1f) >> 0x19));
    cVar2 = FUN_00020810(0x2a,&local_18,1);
    return (int)(char)(cVar2 + cVar1);
  }
  return -0x7f;
}


/* ---- FUN_000207a0 @ 000207a0 ---- */

int FUN_000207a0(byte param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4 & 0xffffff00;
  iVar3 = *(int *)(DAT_000207e8 + 4);
  if (iVar3 != 0) {
    cVar1 = (**(code **)(iVar3 + 0xc))(*(undefined *)(iVar3 + 4),0x2b,&local_18,1);
    local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & 0xe0 | param_1 & 0x1f);
    cVar2 = FUN_00020810(0x2b,&local_18,1);
    return (int)(char)(cVar2 + cVar1);
  }
  return -0x7f;
}


/* ---- FUN_000207ec @ 000207ec ---- */

undefined4 FUN_000207ec(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = CONCAT31((int3)((uint)in_r3 >> 8),0xb6);
  if (*(int *)(DAT_0002080c + 4) != 0) {
    uVar1 = FUN_00020810(0x14,&local_8,1);
    return uVar1;
  }
  return 0xffffff81;
}


/* ---- FUN_00020810 @ 00020810 ---- */

undefined4 FUN_00020810(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_00020844;
  iVar3 = *(int *)(DAT_00020844 + 4);
  if (iVar3 != 0) {
    uVar2 = (**(code **)(iVar3 + 8))(*(undefined *)(iVar3 + 4),param_1,param_2,param_3);
    if (**(char **)(iVar1 + 4) != '\0') {
      (**(code **)(*(char **)(iVar1 + 4) + 0x14))(1);
    }
    return uVar2;
  }
  return 0xffffff81;
}


/* ---- ffa6_on_write @ 00020848 ---- */
/* FFA6 app-command write (no batching on v2): -> process_app_cmd(data,len) */

/* FFA6 app-command write (no batching on v2): -> process_app_cmd(data,len) */

void ffa6_on_write(undefined4 param_1,undefined4 param_2)

{
  debug_printf_stub(s_appcmd_rev__d_00020868);
  FUN_000286de(param_1,param_2);
  process_app_cmd(param_1,param_2);
  return;
}


/* ---- ffa1_token_write @ 000208ac ---- */
/* token write ("12345678") */

/* token write ("12345678") */

void ffa1_token_write(undefined4 param_1,undefined4 param_2)

{
  debug_printf_stub(s_token_rev__d_000208cc);
  FUN_000286de(param_1,param_2);
  FUN_00028efc(param_1,param_2);
  return;
}


/* ---- FUN_000208dc @ 000208dc ---- */

void FUN_000208dc(void)

{
  *DAT_000208f8 = 0xc;
  if (-1 < (int)((*(uint *)(DAT_000208fc + 0x10) >> 0xd) << 0x1f)) {
    cmd29_factory_mode();
  }
  return;
}


/* ---- FUN_00020900 @ 00020900 ---- */

void FUN_00020900(void)

{
  *DAT_00020908 = 3;
  return;
}


/* ---- FUN_0002090c @ 0002090c ---- */

undefined4 FUN_0002090c(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 local_38;
  undefined local_36;
  undefined local_34;
  undefined local_33;
  undefined local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined *local_18;
  
  FUN_0001b1ce(&local_38,0x24);
  local_1a = 2;
  local_18 = &local_34;
  local_1c = 0;
  local_20 = 1;
  local_34 = (undefined)param_3;
  local_33 = (undefined)((uint)param_3 >> 8);
  local_36 = 2;
  local_38 = param_1;
  local_1e = param_2;
  FUN_0002b7cc();
  FUN_0002b828();
  return 0;
}


/* ---- FUN_0002094c @ 0002094c ---- */

void FUN_0002094c(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_00020964;
  *(undefined4 *)(DAT_00020964 + param_1 * 4) = 0xffffffff;
  if (3 < param_1) {
    *(undefined *)(iVar1 + param_1 + 0x40) = 0xff;
  }
  return;
}


/* ---- FUN_00020968 @ 00020968 ---- */

int FUN_00020968(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = DAT_000209ac;
  if (param_3 == 0) {
    uVar3 = 4;
    uVar4 = 9;
  }
  else {
    uVar3 = 0;
    uVar4 = 4;
  }
  while( true ) {
    if (uVar4 <= uVar3) {
      return -1;
    }
    if (*(int *)(DAT_000209ac + uVar3 * 4) == -1) break;
    uVar3 = uVar3 + 1;
  }
  cVar1 = (char)uVar3;
  *(char *)(DAT_000209ac + param_1 + 0x24) = cVar1;
  *(undefined4 *)(iVar2 + uVar3 * 4) = param_2;
  if (param_3 != 0) {
    return (int)cVar1;
  }
  *(char *)(iVar2 + uVar3 + 0x40) = (char)param_1;
  return (int)cVar1;
}


/* ---- FUN_000209b0 @ 000209b0 ---- */

int FUN_000209b0(int param_1)

{
  return (int)*(char *)(DAT_000209bc + param_1 + 0x24);
}


/* ---- FUN_000209c0 @ 000209c0 ---- */

undefined8 FUN_000209c0(undefined4 param_1,int param_2,int param_3,undefined2 *param_4)

{
  byte local_60 [4];
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40;
  undefined local_3e;
  undefined local_3c [24];
  undefined4 local_24;
  int iStack_20;
  int iStack_1c;
  undefined2 *puStack_18;
  
  local_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  puStack_18 = param_4;
  if (param_2 == 0) {
    app_error_handler(0,0x88,s___________________components_ble_00020a5c);
  }
  if (param_3 == 0) {
    app_error_handler(0,0x89,s___________________components_ble_00020a5c);
  }
  FUN_0001b1ce(local_60,0x1c);
  local_60[0] = local_60[0] | 2;
  local_5c = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_3e = 1;
  local_40 = (undefined2)local_24;
  local_44 = (uint)CONCAT12(2,*param_4);
  FUN_0001b1ce(local_3c,0x14);
  software_interrupt(0xa2);
  return CONCAT44(local_60,(uint)*DAT_00020a9c);
}


/* ---- FUN_00020aa0 @ 00020aa0 ---- */

undefined8 FUN_00020aa0(undefined4 param_1,undefined4 param_2)

{
  undefined local_10 [4];
  
  software_interrupt(0x92);
  return CONCAT44(local_10,param_2);
}


/* ---- FUN_00020adc @ 00020adc ---- */

undefined4 FUN_00020adc(uint param_1)

{
  if (((param_1 != 0) && (DAT_00020af4 <= param_1)) && (param_1 < DAT_00020af8)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00020afc @ 00020afc ---- */

void FUN_00020afc(int *param_1)

{
  int iVar1;
  
  if (*param_1 == DAT_00020b10) {
    iVar1 = DAT_00020b10 + -0x38;
  }
  else {
    iVar1 = *param_1 + 8;
  }
  *param_1 = iVar1;
  return;
}


/* ---- FUN_00020b14 @ 00020b14 ---- */

uint FUN_00020b14(uint param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = DAT_00020b4c;
  if (param_1 == DAT_00020b4c) {
    uVar2 = FUN_000280e4(param_2,0x100);
    if (uVar2 == 0x100) {
      return uVar1;
    }
  }
  else {
    uVar2 = DAT_00020b4c;
    if (param_1 < 0x100) {
      iVar3 = FUN_000280c8(param_2,param_1);
      if (iVar3 == 0) {
        return uVar1;
      }
      return param_1;
    }
  }
  return uVar2;
}


/* ---- FUN_00020b50 @ 00020b50 ---- */

void FUN_00020b50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    puVar2 = (undefined4 *)(DAT_00020b74 + 8);
  }
  else {
    puVar2 = (undefined4 *)(DAT_00020b74 + 0x10);
  }
  while (puVar1 = (undefined4 *)*puVar2, puVar1 != (undefined4 *)0x0) {
    *puVar2 = *puVar1;
    (*(code *)puVar1[1])(param_1);
  }
  return;
}


/* ---- FUN_00020b78 @ 00020b78 ---- */

void FUN_00020b78(void)

{
  int iVar1;
  
  iVar1 = FUN_00025240();
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x59,s__________bsp_bsp_bond_c_00020ba8);
  }
  FUN_000251c8(0);
  do {
    iVar1 = FUN_000251a8();
  } while (iVar1 == 0);
  FUN_000252a4(0);
  do {
    iVar1 = FUN_00025288();
  } while (iVar1 == 0);
  return;
}


/* ---- FUN_00020bc0 @ 00020bc0 ---- */

void FUN_00020bc0(void)

{
  FUN_0002ca44(0x11,0x85);
  return;
}


/* ---- FUN_00020bcc @ 00020bcc ---- */

void FUN_00020bcc(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(uint **)(DAT_00020c54 + 4) != (uint *)0x0) {
    uVar4 = **(uint **)(DAT_00020c54 + 4);
    iVar2 = *(int *)(DAT_00020c58 + 4);
    iVar5 = *(int *)(DAT_00020c54 + 8);
    uVar3 = (iVar2 - iVar5 & 0xffffffU) + 3;
    if (*(char *)(DAT_00020c54 + 2) == '\0') {
      *(undefined4 *)(DAT_00020c5c + 4) = 0x10000;
      *(undefined4 *)(DAT_00020c5c + -0x3c) = 0x10000;
      *DAT_00020c60 = 0x20000;
      *DAT_00020c64 = 0x20000;
      *DAT_00020c68 = 1;
      FUN_00024f38(0x2f);
      *(undefined *)(DAT_00020c54 + 2) = 1;
    }
    if (uVar3 < uVar4) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + iVar5 & 0xffffff;
    puVar1 = (uint *)(DAT_00020c58 + 0x40);
    *puVar1 = uVar3;
    if ((uVar3 - iVar2 & 0xffffff) < (*(int *)(DAT_00020c58 + 4) - iVar2 & 0xffffffU) + 3) {
      *puVar1 = *(uint *)(DAT_00020c58 + 4);
      FUN_00024f38(0x2f);
      DAT_00020c60[-0x20] = 0x20000;
    }
  }
  return;
}


/* ---- config_cmd_process @ 00020c6c ---- */
/* 0x27 configuration write */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00020cae) */
/* WARNING (jumptable): Removing unreachable block (ram,0x00020cd6) */
/* WARNING: Removing unreachable block (ram,0x00020cae) */
/* WARNING: Removing unreachable block (ram,0x00020cd6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0x27 configuration write */

void config_cmd_process(byte *param_1)

{
  byte *pbVar1;
  undefined uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined local_30 [2];
  undefined local_2e;
  undefined local_2d;
  undefined4 local_2c;
  int local_24;
  byte *local_20;
  
  bVar4 = param_1[1];
  uVar5 = (uint)*param_1;
  if (bVar4 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  *_DAT_00021054 = uVar2;
  FUN_000286e0(s_config_cmd_process__x_00021057 + 1,uVar5);
  local_20 = param_1 + 9;
  local_24 = DAT_00021070 + 0x60;
  if (uVar5 == 0x24) {
    if (bVar4 != 1) {
      if (bVar4 != 0x10) {
        return;
      }
      FUN_0002bb14(0x24,*(undefined4 *)(DAT_00021070 + 0x48));
      return;
    }
    iVar3 = DAT_00021224 + 8;
    param_1 = param_1 + 2;
LAB_000210ea:
    FUN_000231c4(param_1,iVar3,4);
    return;
  }
  if (uVar5 < 0x25) {
    local_2c = param_1 + 2;
                    /* WARNING: Could not recover jumptable at 0x00020cae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (uVar5 - 0x11 < (uint)DAT_00020cb2) {
      pbVar1 = (byte *)(uVar5 + 0x20ca2);
    }
    else {
      pbVar1 = (byte *)(DAT_00020cb2 + 0x20cb3);
    }
    (*(code *)((uint)*pbVar1 * 2 + 0x20cb3))();
    return;
  }
  if (uVar5 == 0x30) {
    if (bVar4 == 1) {
      *(byte *)(DAT_00021070 + 0x26) = param_1[2];
      return;
    }
    if (bVar4 != 0x10) {
      return;
    }
    uVar2 = *(undefined *)(DAT_00021070 + 0x26);
    FUN_0001b1ce(local_30,0x14);
    local_30[0] = 0x27;
    local_2e = 0x30;
    local_2d = 0x10;
    local_2c = (byte *)CONCAT31(local_2c._1_3_,uVar2);
    iVar3 = FUN_0001f1c0(DAT_00021228,local_30);
    if (iVar3 == 0) {
      return;
    }
    app_error_handler(iVar3,0x2f4,DAT_0002122c);
    return;
  }
  if (uVar5 < 0x31) {
                    /* WARNING: Could not recover jumptable at 0x00020cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (uVar5 - 0x25 < (uint)DAT_00020cda) {
      pbVar1 = (byte *)(uVar5 + 0x20cb6);
    }
    else {
      pbVar1 = (byte *)(DAT_00020cda + 0x20cdb);
    }
    (*(code *)((uint)*pbVar1 * 2 + 0x20cdb))();
    return;
  }
  if (uVar5 == 0x35) {
    FUN_000286e0(s_SYS_CONFIG_FACTORY_MODE_0002107c);
    factory_mode_enter();
    return;
  }
  if (uVar5 < 0x36) {
    if (uVar5 == 0x31) {
      if (bVar4 != 1) {
        if (bVar4 != 0x10) {
          return;
        }
        FUN_0002b9e0();
        return;
      }
      bVar4 = param_1[2];
      if (bVar4 != 0) {
        bVar4 = 1;
      }
      *(byte *)(DAT_00021070 + 0x27) = bVar4;
      if (bVar4 == 0) {
        return;
      }
      FUN_000231c4(param_1 + 3,DAT_00021224 + -0x18,2);
      FUN_000231c4(param_1 + 5,DAT_00021224 + -0x16,2);
      FUN_000231c4(param_1 + 7,DAT_00021224 + -0x14,2);
      iVar3 = DAT_00021224 + -0x10;
      param_1 = local_20;
      goto LAB_000210ea;
    }
    if (uVar5 == 0x33) {
      if (bVar4 == 1) {
        bVar4 = param_1[2];
        *(byte *)(DAT_00021070 + 0x7a) = bVar4;
        if (bVar4 != 1) {
          return;
        }
        if (*(char *)(DAT_000210dc + 1) != '\0') {
          return;
        }
        FUN_00029830();
        return;
      }
      if (bVar4 != 0x10) {
        return;
      }
      uVar2 = *(undefined *)(DAT_00021070 + 0x7a);
      FUN_0001b1ce(local_30,0x14);
      local_30[0] = 0x27;
      local_2e = 0x33;
      local_2d = 0x10;
      local_2c = (byte *)CONCAT31(local_2c._1_3_,uVar2);
      iVar3 = FUN_0001f1c0(DAT_00021074,local_30);
      if (iVar3 == 0) {
        return;
      }
      app_error_handler(iVar3,DAT_00021098,DAT_00021078);
      FUN_000286e0(s___S__failed___s___d__000210c4,DAT_000210c0,
                   s__________application_app_misc_c_000210a0,DAT_0002109c);
      return;
    }
  }
  else {
    if (uVar5 == 0x36) {
      FUN_0002837c();
      return;
    }
    if (uVar5 == 0xef) {
      FUN_0001da5c();
      uVar2 = 1;
      goto LAB_00020ff6;
    }
  }
  *_DAT_00021054 = 2;
  uVar2 = 0;
LAB_00020ff6:
  *DAT_000210e0 = uVar2;
  return;
}


/* ---- FUN_00021230 @ 00021230 ---- */

undefined4 FUN_00021230(ushort *param_1,int param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = DAT_000212b4;
  if (param_4 < *param_3 + 6) {
    uVar4 = 0xc;
  }
  else {
    uVar6 = (uint)*param_1;
    uVar4 = 7;
    if (((5 < uVar6) &&
        ((((uVar6 < 0xc81 || (uVar6 == DAT_000212b4)) && (uVar5 = (uint)param_1[1], 5 < uVar5)) &&
         ((uVar5 < 0xc81 || (uVar5 == DAT_000212b4)))))) &&
       ((uVar6 == DAT_000212b4 || ((uVar5 == DAT_000212b4 || (uVar6 <= uVar5)))))) {
      *(undefined *)(param_2 + (uint)*param_3) = 5;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0x12;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      sVar3 = FUN_0002b86c(*param_1,(uint)(ushort)(uVar1 + 1) + param_2,uVar6,uVar2,param_4);
      uVar1 = *param_3;
      *param_3 = sVar3 + uVar1;
      sVar3 = FUN_0002b86c(param_1[1],(uint)(ushort)(sVar3 + uVar1) + param_2);
      *param_3 = sVar3 + *param_3;
      return 0;
    }
  }
  return uVar4;
}


/* ---- FUN_000212e8 @ 000212e8 ---- */

void FUN_000212e8(void)

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
  iVar2 = FUN_00023300(DAT_00021344);
  iVar1 = DAT_00021348;
  pcVar6 = (char *)(DAT_00021344 + -0xc);
  if (iVar2 == 0) {
    if (*pcVar6 == '\0') {
      if (*(char *)(DAT_00021344 + -0xb) == '\0') {
        uVar5 = *(undefined4 *)(DAT_00021348 + 4);
      }
      else {
        uVar5 = *(undefined4 *)(DAT_00021348 + 8);
      }
      puVar3 = (undefined4 *)app_timer_start(*DAT_0002134c,uVar5,0);
      if ((puVar3 == (undefined4 *)0x0) ||
         (pcVar4 = *(code **)(iVar1 + 0x18), pcVar4 == (code *)0x0)) goto LAB_0002133c;
    }
    else {
      pcVar4 = *(code **)(DAT_00021348 + 0x14);
      if (pcVar4 == (code *)0x0) goto LAB_0002133c;
      local_18 = (uint)local_18._1_3_ << 8;
    }
  }
  else {
    pcVar4 = *(code **)(DAT_00021348 + 0x14);
    if (pcVar4 == (code *)0x0) goto LAB_0002133c;
    local_18 = CONCAT31(local_18._1_3_,1);
  }
  (*pcVar4)(puVar3);
LAB_0002133c:
  *pcVar6 = '\0';
  return;
}


/* ---- FUN_00021350 @ 00021350 ---- */

uint FUN_00021350(int param_1,uint param_2,ushort *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = DAT_00021388;
  if (param_3 != (ushort *)0x0) {
    uVar1 = (uint)*param_3;
  }
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    uVar1 = (uint)*(byte *)(param_1 + uVar2) ^ (uVar1 >> 8 | uVar1 << 8);
    uVar1 = (uVar1 << 0x18) >> 0x1c ^ uVar1;
    uVar1 = (uVar1 << 0xc ^ uVar1) & 0xffff;
    uVar1 = (uVar1 << 0x18) >> 0x13 ^ uVar1;
  }
  return uVar1;
}


/* ---- FUN_0002138c @ 0002138c ---- */

uint FUN_0002138c(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = 0xffffffff;
  if (param_3 != (uint *)0x0) {
    uVar1 = ~*param_3;
  }
  for (uVar3 = 0; uVar3 < param_2; uVar3 = uVar3 + 1) {
    uVar1 = uVar1 ^ *(byte *)(param_1 + uVar3);
    iVar4 = 8;
    do {
      uVar2 = uVar1 << 0x1f;
      if (uVar1 << 0x1f != 0) {
        uVar2 = 0xffffffff;
      }
      uVar1 = uVar2 & DAT_000213c4 ^ uVar1 >> 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return ~uVar1;
}


/* ---- FUN_000213c8 @ 000213c8 ---- */

void FUN_000213c8(undefined4 param_1)

{
  FUN_0001ef94(DAT_000213d4,param_1);
  return;
}


/* ---- FUN_000213d8 @ 000213d8 ---- */

void FUN_000213d8(void)

{
  return;
}


/* ---- FUN_000213dc @ 000213dc ---- */

void FUN_000213dc(void)

{
  int iVar1;
  
  iVar1 = DAT_00021408;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_0001d8a4();
  return;
}


/* ---- FUN_00021414 @ 00021414 ---- */

int FUN_00021414(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint local_20;
  int local_1c;
  undefined2 *local_18;
  undefined4 local_14;
  
  iVar3 = DAT_00021498;
  if (param_1 == 0) {
    cVar1 = *(char *)(param_2 + 4);
    local_20 = param_1;
    if (cVar1 == '\0') {
      local_18 = (undefined2 *)0x0;
      local_14 = 0;
      local_1c = *(int *)(param_2 + 0xc);
      iVar3 = FUN_00029638(&local_1c,&local_20);
      if (iVar3 == 0) {
        iVar3 = 10;
      }
      else {
        *(undefined2 *)(param_2 + 6) = local_18[2];
        *(undefined2 *)(param_2 + 8) = *local_18;
        iVar3 = FUN_0002972c(local_18,local_20 & 0xffff);
      }
      *(undefined *)(param_2 + 4) = 2;
    }
    else if (cVar1 == '\x01') {
      local_1c = param_2;
      local_18 = (undefined2 *)param_3;
      local_14 = param_4;
      iVar4 = FUN_000295b4(param_2 + 6,0,&local_20,DAT_0002149c);
      puVar2 = DAT_0002149c;
      if (iVar4 == 0) {
        iVar4 = FUN_0002972c(local_1c,*(undefined2 *)(DAT_0002149c + 1));
      }
      else {
        *DAT_0002149c = 0;
        puVar2[1] = 0;
      }
      if (iVar4 != 10) {
        return iVar4;
      }
    }
    else if (cVar1 != '\x02') {
      return 0xf;
    }
  }
  else {
    iVar3 = 1;
  }
  return iVar3;
}


/* ---- FUN_000214a0 @ 000214a0 ---- */

undefined8 FUN_000214a0(int param_1,undefined *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined auStack_24 [4];
  int iStack_20;
  undefined *local_1c;
  undefined4 local_18;
  
  iVar5 = (uint)*(byte *)(param_1 + 0x25a) * 100 + param_1;
  uVar4 = (uint)*(byte *)(param_1 + 0x259);
  iVar2 = uVar4 * 0x12 + iVar5 + 10;
  iStack_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  if (uVar4 + 1 == (uint)*(byte *)(iVar5 + 4)) {
    iVar2 = FUN_0002331c(param_1,iVar2,0,auStack_24);
    if (iVar2 != 0) {
LAB_000214f8:
      *local_1c = 0;
      puVar3 = auStack_24;
      software_interrupt(0x93);
      goto LAB_00021504;
    }
  }
  else {
    for (; uVar4 < *(byte *)(iVar5 + 4); uVar4 = uVar4 + 1 & 0xff) {
      if (*(byte *)(iVar5 + 4) - 1 == uVar4) {
        iVar1 = 0;
      }
      else {
        iVar1 = uVar4 * 0x12 + iVar5 + 0x1c;
      }
      iVar2 = FUN_0002331c(param_1,iVar2,iVar1,auStack_24);
      if (iVar2 != 0) goto LAB_000214f8;
      *(char *)(param_1 + 0x259) = *(char *)(param_1 + 0x259) + '\x01';
      iVar2 = iVar1;
    }
  }
  puVar3 = (undefined *)0x1;
  *local_1c = 1;
  local_18 = 0;
LAB_00021504:
  return CONCAT44(puVar3,local_18);
}


/* ---- FUN_0002153c @ 0002153c ---- */

void FUN_0002153c(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  param_1 = (uint)*(byte *)(param_1 + 0x25a) * 100 + param_1;
  iVar3 = FUN_000297e4(param_1);
  iVar2 = DAT_000215c8;
  iVar1 = DAT_000215c4;
  if (iVar3 != 0) {
    if (*(uint *)(DAT_000215c4 + 8) < 6) {
      iVar4 = *(uint *)(DAT_000215c4 + 8) * 0x6c + DAT_000215c8;
      *(undefined2 *)(iVar4 + 2) = param_3;
      FUN_0001b19c(iVar4 + 4,param_1,100);
      if (param_2 == 0) {
        *(undefined *)(iVar2 + *(int *)(iVar1 + 8) * 0x6c) = 2;
      }
      else {
        *(undefined *)(iVar2 + *(int *)(iVar1 + 8) * 0x6c) = 0;
      }
      iVar4 = *(int *)(iVar1 + 8) + 1;
      *(int *)(*(int *)(iVar1 + 8) * 0x6c + iVar2 + 0x68) = iVar3;
      *(int *)(iVar1 + 8) = iVar4;
      if (iVar4 == *(int *)(iVar1 + 0xc)) {
        for (uVar5 = 0; uVar5 < *(uint *)(iVar1 + 0xc); uVar5 = uVar5 + 1) {
          (**(code **)(uVar5 * 0x6c + iVar2 + 0x68))();
        }
        *(undefined4 *)(iVar1 + 8) = 0;
      }
    }
  }
  return;
}


/* ---- FUN_000215cc @ 000215cc ---- */

void FUN_000215cc(int param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_000297e4((uint)*(byte *)(param_1 + 0x25a) * 100 + param_1);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}


/* ---- FUN_000215fc @ 000215fc ---- */

undefined4 FUN_000215fc(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = DAT_00021638;
  bVar1 = *DAT_00021638;
  if (bVar1 != DAT_00021638[1]) {
    *DAT_00021638 = bVar1 + 1;
    if (bVar1 == 1) {
      *pbVar2 = 0;
    }
    iVar3 = *(int *)(DAT_00021638 + (uint)*pbVar2 * 4 + 0x18);
    *param_1 = iVar3;
    *(uint *)(pbVar2 + 8) = iVar3 + *(int *)(pbVar2 + 8) & 0xffffff;
    return 1;
  }
  *param_1 = 0;
  return 0;
}


/* ---- FUN_0002163c @ 0002163c ---- */

void FUN_0002163c(undefined4 param_1,undefined2 param_2,undefined param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = DAT_00021664[2];
  local_18 = CONCAT22((short)param_1,(short)*DAT_00021664);
  FUN_0001f6dc(param_1,*DAT_00021668,0);
  FUN_00021850(&local_18);
  return;
}


/* ---- FUN_0002166c @ 0002166c ---- */

void FUN_0002166c(void)

{
  *(undefined4 *)(DAT_0002167c + 0x58) = 1;
  FUN_0002506c(DAT_00021680);
  return;
}


/* ---- FUN_00021684 @ 00021684 ---- */

undefined8 FUN_00021684(int param_1,int param_2)

{
  byte local_4c [4];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined local_2a;
  undefined local_28 [20];
  
  FUN_0001b19c(param_1 + 0x15,param_2 + 0x15,0xe);
  local_30 = 0x21111;
  FUN_0001b1ce(local_4c,0x1c);
  local_4c[0] = local_4c[0] | 0x12;
  local_38 = &local_30;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2a = *(undefined *)(param_1 + 0xa8);
  local_2c = 0xffa5;
  FUN_0001b1ce(local_28,0x14);
  software_interrupt(0xa2);
  return CONCAT44(local_4c,(uint)*(ushort *)(param_1 + 0xac));
}


/* ---- FUN_00021742 @ 00021742 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0002174a) */
/* WARNING: Removing unreachable block (ram,0x0002174a) */

void FUN_00021742(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
                    /* WARNING: Could not recover jumptable at 0x0002174a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (DAT_0002174e <= uVar1) {
    uVar1 = (uint)DAT_0002174e;
  }
  (*(code *)((uint)*(byte *)(uVar1 + 0x2174f) * 2 + 0x2174f))(param_1,param_2,0);
  return;
}


/* ---- FUN_000217ac @ 000217ac ---- */

void FUN_000217ac(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  
  iVar1 = DAT_000217c8;
  uVar3 = 0;
  do {
    pcVar2 = *(code **)(iVar1 + uVar3 * 4);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return;
}


/* ---- FUN_000217cc @ 000217cc ---- */

void FUN_000217cc(ushort param_1,int param_2)

{
  undefined uVar1;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  if ((param_2 != 0) && (param_2 != 0x11)) {
    local_8 = 0;
    local_10 = (uint)param_1 << 0x10;
    if (param_2 == 0xd) {
      uVar1 = 0xb;
    }
    else if (param_2 == 0x86) {
      uVar1 = 10;
    }
    else {
      uVar1 = 9;
    }
    local_10 = CONCAT31(local_10._1_3_,uVar1);
    local_c = param_2;
    thunk_FUN_00028400(&local_10);
  }
  return;
}


/* ---- FUN_00021800 @ 00021800 ---- */

void FUN_00021800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00021804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**DAT_00021808)();
  return;
}


/* ---- FUN_0002180c @ 0002180c ---- */

void FUN_0002180c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_00021824;
  uVar2 = 0;
  do {
    (**(code **)(iVar1 + uVar2 * 4))(param_1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return;
}


/* ---- FUN_00021828 @ 00021828 ---- */

void FUN_00021828(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0002184c;
  iVar1 = DAT_00021848;
  for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(iVar2 + 3); iVar3 = iVar3 + 1) {
    (**(code **)(iVar1 + iVar3 * 4))(param_1);
  }
  return;
}


/* ---- FUN_00021850 @ 00021850 ---- */

void FUN_00021850(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_00021868;
  uVar2 = 0;
  do {
    (**(code **)(iVar1 + uVar2 * 4))(param_1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return;
}


/* ---- thunk_FUN_00028400 @ 0002186c ---- */

void thunk_FUN_00028400(void)

{
  (**DAT_00021874)();
  return;
}


/* ---- cmd26_led_motor_ctrl_execute @ 00021878 ---- */
/* 0x26 frame (p=frame+2): p[1]=strength 1..100, p[2..3]=vibMs, p[4]=ledMode 1 solid/2 breath/3 blink/4 off, p[5..7]=RGB, p[8]=bright 1..100, p[9..10]=transition, p[11..12]=hold, p[13..14]=sleep, p[15..16]=execute */

/* 0x26 frame (p=frame+2): p[1]=strength 1..100, p[2..3]=vibMs, p[4]=ledMode 1 solid/2 breath/3
   blink/4 off, p[5..7]=RGB, p[8]=bright 1..100, p[9..10]=transition, p[11..12]=hold,
   p[13..14]=sleep, p[15..16]=execute */

void cmd26_led_motor_ctrl_execute
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  
  if (((*(byte *)(param_1 + 1) == 0) || (100 < *(byte *)(param_1 + 1))) ||
     (*(short *)(param_1 + 2) == 0)) {
    motor_off();
  }
  else {
    motor_on();
  }
  sVar3 = *(short *)(param_1 + 0xf);
  if (((sVar3 == 0) || (cVar1 = *(char *)(param_1 + 4), cVar1 == '\x04')) ||
     ((bVar2 = *(byte *)(param_1 + 8), 100 < bVar2 || (bVar2 == 0)))) {
    leds_off();
  }
  else {
    uVar6 = (uint)*(byte *)(param_1 + 5) << 0x10 | (uint)*(byte *)(param_1 + 6) << 8 |
            (uint)*(byte *)(param_1 + 7);
    if (cVar1 == '\x01') {
      uVar5 = 0;
      uVar4 = DAT_0002192c;
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 == '\x02') {
          leds_req_breath(uVar6,bVar2,*(undefined2 *)(param_1 + 9),*(undefined2 *)(param_1 + 9),
                          *(undefined2 *)(param_1 + 0xb),*(undefined2 *)(param_1 + 0xd),sVar3);
        }
        goto LAB_00021922;
      }
      uVar5 = *(undefined2 *)(param_1 + 0xd);
      uVar4 = (uint)*(ushort *)(param_1 + 0xb);
    }
    leds_req_blink(uVar6,bVar2,uVar4,uVar5,sVar3,param_3,param_4);
  }
LAB_00021922:
  post_state_event(DAT_00021930);
  return;
}


/* ---- cmd33_test_step_execute @ 00021934 ---- */
/* 0x33 step: p[0]=strength, p[1..3]=bright x3, p[4..12]=RGB x3, p[13..14]=ms */

/* 0x33 step: p[0]=strength, p[1..3]=bright x3, p[4..12]=RGB x3, p[13..14]=ms */

void cmd33_test_step_execute(byte *param_1)

{
  byte bVar1;
  
  if (*(short *)(param_1 + 0xd) == 0) {
    motor_off();
  }
  else {
    if ((*param_1 == 0) || (100 < *param_1)) {
      motor_off();
    }
    else {
      motor_on();
    }
    bVar1 = param_1[1];
    if ((((bVar1 != 0) && (bVar1 < 0x65)) || ((param_1[2] != 0 && (param_1[2] < 0x65)))) ||
       ((param_1[3] != 0 && (param_1[3] < 0x65)))) {
      leds_req_test_3color
                ((uint)param_1[4] << 0x10 | (uint)param_1[5] << 8 | (uint)param_1[6],
                 (uint)param_1[7] << 0x10 | (uint)param_1[8] << 8 | (uint)param_1[9],
                 (uint)param_1[10] << 0x10 | (uint)param_1[0xb] << 8 | (uint)param_1[0xc],bVar1,
                 param_1[2],param_1[3],*(undefined2 *)(param_1 + 0xd));
      goto LAB_000219c2;
    }
  }
  leds_off();
LAB_000219c2:
  post_state_event(DAT_000219cc);
  return;
}


/* ---- factory_mode_enter @ 000219d0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void factory_mode_enter(void)

{
  int iVar1;
  
  FUN_000286e0(s_factory_mode_enter_01_00021a48);
  do {
  } while (*_DAT_00021a60 != '\x02');
  FUN_000286e0(s_factory_mode_enter_02_00021a63 + 1);
  FUN_0002c974(0);
  FUN_0002c974(1);
  FUN_0002c994(2);
  if (*_DAT_00021a7c == -6) {
    FUN_00020324(3);
  }
  else {
    FUN_00020bc0();
  }
  FUN_00028688();
  FUN_0002c7b4();
  iVar1 = FUN_000286e0(s_into_system_power_off_00021a7f + 1);
  software_interrupt(0x3c);
  FUN_000286e0(s_sd_power_system_off___x__00021a9c,iVar1);
  if ((iVar1 != DAT_00021ab8) &&
     (FUN_000286e0(s_sd_power_system_off_return_ERROR_00021abc,iVar1), iVar1 == 0)) {
    return;
  }
  app_error_handler(iVar1,0xb2,s__________application_app_misc_c_00021ae4);
  return;
}


/* ---- cmd29_factory_mode @ 00021b04 ---- */
/* 0x29 + 11 22 33 44: state 0x87 FACTORY, white LED, 30 s */

/* 0x29 + 11 22 33 44: state 0x87 FACTORY, white LED, 30 s */

void cmd29_factory_mode(void)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  
  leds_power_on();
  iVar2 = DAT_00021b50;
  *(undefined *)(DAT_00021b50 + 0x10) = 1;
  bVar1 = *(byte *)(iVar2 + -0x38);
  if ((bVar1 < 0x85) || (bVar1 == 0xff)) {
    uVar3 = 0x80;
  }
  else {
    uVar3 = 0x87;
  }
  *(undefined *)(iVar2 + -0x38) = uVar3;
  post_state_event(DAT_00021b50 + -0x38);
  FUN_0002c974(0);
  FUN_0002c994(1);
  FUN_0002c83c();
  FUN_0002c7d0(DAT_00021b58,DAT_00021b54);
  leds_req_constant_on(DAT_00021b5c,100,0);
  return;
}


/* ---- FUN_00021c7c @ 00021c7c ---- */

undefined4 FUN_00021c7c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined local_20 [4];
  undefined local_1c;
  undefined2 local_1a;
  
  if ((int)((uint)*DAT_00021cc0 << 0x1e) < 0) {
    if (param_1 == DAT_00021cc4) {
      uVar1 = 4;
    }
    else {
      local_20[0] = 5;
      local_1c = 1;
      local_1a = (undefined2)param_1;
      iVar2 = FUN_00026b84(local_20,0);
      if (iVar2 == 0) {
        uVar1 = 8;
      }
      else {
        FUN_00029564();
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


/* ---- FUN_00021cc8 @ 00021cc8 ---- */

undefined4 FUN_00021cc8(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined local_20 [32];
  
  if ((int)((uint)*DAT_00021d08 << 0x1e) < 0) {
    local_20[0] = 6;
    iVar2 = FUN_00026b84(local_20,0);
    if (iVar2 == 0) {
      uVar1 = 8;
    }
    else {
      if (*DAT_00021d0c != '\0') {
        DAT_00021d0c[0xc] = '\x01';
      }
      FUN_00029564();
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


/* ---- FUN_00021d10 @ 00021d10 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00021d46) */
/* WARNING: Removing unreachable block (ram,0x00021d46) */

undefined4 FUN_00021d10(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined auStack_38 [20];
  undefined local_24;
  
  FUN_0001b1ce(auStack_38,0x14);
  if ((int)((uint)*DAT_00021d94 << 0x1e) < 0) {
    FUN_000217ac(auStack_38);
  }
  else if ((*DAT_00021d94 & 1) == 0) {
    FUN_00021f9c(1);
    FUN_000221bc();
    local_24 = 1;
    uVar1 = FUN_00026d38();
                    /* WARNING: Could not recover jumptable at 0x00021d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (DAT_00021d4a <= uVar1) {
      uVar1 = (uint)DAT_00021d4a;
    }
    uVar2 = (*(code *)((uint)*(byte *)(uVar1 + 0x21d4b) * 2 + 0x21d4b))();
    return uVar2;
  }
  return 0;
}


/* ---- FUN_00021d98 @ 00021d98 ---- */

undefined4 FUN_00021d98(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  uint local_10;
  
  if (param_1 == 0) {
    return 5;
  }
  local_10 = param_4;
  iVar2 = FUN_00029638(param_1,&local_10);
  if (iVar2 != 0) {
    iVar2 = (local_10 & 0xffff) * 0x10 + DAT_00021dd4;
    sVar1 = *(short *)(iVar2 + 0xc);
    if ((sVar1 != 0) && (*(char *)(param_1 + 10) != '\0')) {
      *(short *)(iVar2 + 0xc) = sVar1 + -1;
      *(undefined *)(param_1 + 10) = 0;
      return 0;
    }
    return 6;
  }
  return 10;
}


/* ---- FUN_00021dd8 @ 00021dd8 ---- */

void FUN_00021dd8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_000295b4(&uStack_18,&uStack_14);
  return;
}


/* ---- FUN_00021de6 @ 00021de6 ---- */

void FUN_00021de6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  FUN_000295b4(0,&uStack_10,param_2,param_3);
  return;
}


/* ---- FUN_00021df6 @ 00021df6 ---- */

void FUN_00021df6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  FUN_000295b4(&uStack_10,0,param_2,param_3);
  return;
}


/* ---- FUN_00021e06 @ 00021e06 ---- */

undefined4 FUN_00021e06(undefined4 *param_1,undefined4 *param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *param_1;
    return 0;
  }
  return 5;
}


/* ---- FUN_00021e1c @ 00021e1c ---- */

undefined4 FUN_00021e1c(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    local_10 = param_4;
    iVar1 = FUN_00029638(param_1,&local_10);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 4);
      iVar1 = (local_10 & 0xffff) * 0x10 + DAT_00021e5c;
      *(short *)(iVar1 + 0xc) = *(short *)(iVar1 + 0xc) + 1;
      *param_2 = uVar2;
      param_2[1] = *(int *)(param_1 + 4) + 0xc;
      *(undefined *)(param_1 + 10) = 1;
      return 0;
    }
    return 10;
  }
  return 5;
}


/* ---- FUN_00021e60 @ 00021e60 ---- */

undefined4 FUN_00021e60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_0002cb1c(param_1,param_2,0,3);
    return uVar1;
  }
  return 5;
}


/* ---- FUN_00021e74 @ 00021e74 ---- */

void FUN_00021e74(undefined4 param_1,undefined4 param_2)

{
  FUN_0002cb1c(param_1,param_2,0,2);
  return;
}


/* ---- FUN_00021e80 @ 00021e80 ---- */

undefined4 FUN_00021e80(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    uVar1 = FUN_0002cb1c();
    return uVar1;
  }
  return 5;
}


/* ---- FUN_00021e94 @ 00021e94 ---- */

undefined4 FUN_00021e94(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = DAT_00021eb0;
  bVar1 = *(byte *)(DAT_00021eb0 + 1);
  if (bVar1 != 8) {
    *(undefined4 *)(DAT_00021eb4 + (uint)bVar1 * 4) = param_1;
    *(byte *)(iVar2 + 1) = bVar1 + 1;
    return 0;
  }
  return 0xc;
}


/* ---- FUN_00021eb8 @ 00021eb8 ---- */

int FUN_00021eb8(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  if ((int)((uint)*DAT_00021ee8 << 0x1e) < 0) {
    if (param_1 == (undefined2 *)0x0) {
      return 5;
    }
    local_10 = param_4;
    iVar1 = FUN_0002cd3c(param_2,&local_10);
    if (iVar1 == 0) {
      *param_1 = (undefined2)local_10;
      param_1[1] = (short)param_2;
      return 0;
    }
  }
  else {
    iVar1 = 2;
  }
  return iVar1;
}


/* ---- FUN_00021eec @ 00021eec ---- */

undefined4 FUN_00021eec(ushort *param_1)

{
  if (-1 < (int)((uint)*DAT_00021f2c << 0x1e)) {
    return 2;
  }
  if (param_1 != (ushort *)0x0) {
    if (*param_1 < 3) {
      if (-1 < (int)(((uint)*(ushort *)((uint)*param_1 * 0x10 + DAT_00021f30 + 10) -
                     (uint)param_1[1]) + -3)) {
        FUN_0002cd28();
        *param_1 = 0;
        param_1[1] = 0;
        return 0;
      }
    }
    return 4;
  }
  return 5;
}


/* ---- FUN_00021f34 @ 00021f34 ---- */

void FUN_00021f34(void)

{
  FUN_00025e90(*(undefined *)(DAT_00021f40 + 1));
  return;
}


/* ---- FUN_00021f44 @ 00021f44 ---- */

short FUN_00021f44(short param_1)

{
  return param_1 + 0x4000;
}


/* ---- FUN_00021f68 @ 00021f68 ---- */

void FUN_00021f68(byte param_1)

{
  *DAT_00021f74 = *DAT_00021f74 & ~param_1;
  return;
}


/* ---- FUN_00021f78 @ 00021f78 ---- */

void FUN_00021f78(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\x18') {
    cVar1 = FUN_0001f670();
    *param_1 = cVar1;
  }
  return;
}


/* ---- FUN_00021f8a @ 00021f8a ---- */

void FUN_00021f8a(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\x18') {
    cVar1 = FUN_0001f670();
    *param_1 = cVar1;
  }
  return;
}


/* ---- FUN_00021f9c @ 00021f9c ---- */

void FUN_00021f9c(byte param_1)

{
  *DAT_00021fa8 = *DAT_00021fa8 | param_1;
  return;
}


/* ---- FUN_00021fac @ 00021fac ---- */

void FUN_00021fac(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00022004;
  uVar2 = 0;
  uVar3 = 0;
  if (param_2 == 0x86) {
    uVar2 = 1;
  }
  else if (param_2 == 0x11) {
    uVar3 = 1;
  }
  else if (param_2 != 0) {
    return;
  }
  if (param_3 == 0) {
    FUN_0001f6dc(param_1,DAT_00022004[1],uVar2);
  }
  else {
    FUN_0001f6dc(param_1,DAT_00022004[5],uVar2);
    FUN_0001f6dc(param_1,puVar1[4],uVar3);
    FUN_0001f6dc(param_1,puVar1[1],0);
    uVar3 = 0;
  }
  FUN_0001f6dc(param_1,*puVar1,uVar3);
  return;
}


/* ---- FUN_00022018 @ 00022018 ---- */

undefined4 FUN_00022018(uint *param_1,uint param_2,int param_3,uint **param_4)

{
  int iVar1;
  uint **local_18;
  
  if ((*DAT_00022090 & 1) == 0) {
    return 1;
  }
  local_18 = param_4;
  iVar1 = FUN_00020adc(param_1);
  if (iVar1 == 0) {
    return 2;
  }
  if (param_2 == 0) {
    return 3;
  }
  if ((param_2 & 0x3ff) != 0) {
    return 6;
  }
  if ((param_2 < *param_1) || (param_1[1] < param_3 * 0x400 + param_2)) {
    return 5;
  }
  if (param_3 == 0) {
    return 4;
  }
  iVar1 = FUN_000293ec(&local_18);
  if (iVar1 != 0) {
    *local_18 = param_1;
    local_18[1] = (uint *)param_4;
    *(undefined *)(local_18 + 2) = 2;
    *(short *)(local_18 + 3) = (short)((param_2 << 6) >> 0x10);
    *(short *)(local_18 + 4) = (short)param_3;
    FUN_00029548();
    return 0;
  }
  return 7;
}


/* ---- FUN_00022094 @ 00022094 ---- */

void FUN_00022094(undefined4 param_1,undefined4 param_2)

{
  FUN_00029490(param_2);
  return;
}


/* ---- FUN_000220a0 @ 000220a0 ---- */

undefined * FUN_000220a0(byte *param_1,uint param_2,uint param_3,uint *param_4)

{
  undefined *puVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 *unaff_r4;
  byte *pbVar6;
  uint uVar7;
  int unaff_r5;
  int iVar8;
  byte **unaff_r6;
  int iVar9;
  undefined4 unaff_r7;
  int unaff_r8;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar10;
  longlong lVar11;
  
  puVar1 = (undefined *)(uint)*param_1;
  if (puVar1 == (undefined *)0x1) {
    if (param_2 == 0) {
      debug_printf_stub(0x2210c);
      puVar1 = *(undefined **)(param_1 + 4);
      if (puVar1 == (undefined *)0x11) {
        pcVar2 = s_app_setting____________fs_evt_ha_0002d800;
      }
      else {
        if (puVar1 != (undefined *)0x22) {
          return puVar1;
        }
        pcVar2 = s_app_setting____________fs_evt_ha_0002d7b4;
      }
      puVar1 = (undefined *)debug_printf_stub(pcVar2);
      return puVar1;
    }
    pcVar2 = s_app_setting____________FS_EVT_ER_0002d894;
  }
  else {
    if (puVar1 != (undefined *)0x0) {
      return puVar1;
    }
    if (param_2 == 0) {
      puVar1 = *(undefined **)(param_1 + 4);
      if ((puVar1 != (undefined *)0x11) && (puVar1 != (undefined *)0x22)) {
        return puVar1;
      }
      debug_printf_stub(0x22150);
      DAT_200034f9 = 2;
      bVar10 = true;
      if (DAT_200034fa == '\0') {
        DAT_200034f9 = 2;
        return &DAT_200034f9;
      }
      DAT_200034fa = '\0';
      UNRECOVERED_JUMPTABLE = (code *)0x22102;
      lVar11 = FUN_0001bf4c();
      pbVar3 = (byte *)lVar11;
      if (!bVar10 || pbVar3 == (byte *)0x0) {
        if (bVar10 && pbVar3 != (byte *)0x0) {
          if (param_1 == (byte *)0x0) {
            return (undefined *)0x3;
          }
          if (((uint)param_1 & 0x3ff) != 0) {
            return (undefined *)0x6;
          }
          if ((param_1 < *unaff_r6) || (unaff_r6[1] < param_1 + unaff_r5 * 0x400)) {
            return (undefined *)0x5;
          }
          if (unaff_r5 == 0) {
            return (undefined *)0x4;
          }
          iVar8 = FUN_000293ec(&stack0xfffffff8);
          if (iVar8 == 0) {
            return (undefined *)0x7;
          }
          *unaff_r4 = unaff_r6;
          unaff_r4[1] = unaff_r7;
          *(undefined *)(unaff_r4 + 2) = 2;
          *(short *)(unaff_r4 + 3) = (short)((uint)((int)param_1 << 6) >> 0x10);
          *(short *)(unaff_r4 + 4) = (short)unaff_r5;
          FUN_00029548();
          return (undefined *)0x0;
        }
        param_1[1] = (byte)((ulonglong)lVar11 >> 0x20);
        unaff_r6[0x15] = (byte *)param_4;
        *(char *)((int)unaff_r6 + 0x11) = (char)param_1;
        uVar4 = *(undefined4 *)(unaff_r5 + 100);
        unaff_r6[5] = pbVar3;
        unaff_r6[0x15] = (byte *)param_4;
        *(undefined4 *)(param_1 + 0x10) = 0x70;
        *(undefined *)((int)unaff_r6 + 1) = 0x70;
        param_1[0xc] = 0x70;
        param_1[0x11] = (byte)unaff_r5;
        pbVar6 = unaff_r6[5];
        *(byte ***)(unaff_r5 + 0x74) = unaff_r6;
        pcVar2 = (char *)0x73;
        pbVar6[9] = (byte)uVar4;
        *(int *)(pbVar6 + 0x14) = unaff_r5;
        *(undefined2 *)((int)pbVar6 * 2) = 0x73;
        iVar8 = (int)pbVar3 * unaff_r5;
        *(short *)(pbVar3 + iVar8) = (short)param_4;
        param_2 = (uint)pbVar6 >> 0x14;
        param_3 = param_2;
        if (SBORROW4((int)param_4,unaff_r8) == false) goto LAB_000220b4;
        pbVar6[1] = (byte)param_2;
        unaff_r6[0x15] = (byte *)param_4;
        *(char *)((int)unaff_r6 + 0x11) = (char)pbVar6;
        uVar4 = *(undefined4 *)(iVar8 + 100);
        iVar9 = (int)(char)pbVar6[iVar8];
        iVar5 = *(int *)(iVar9 + 0x14);
        *(byte **)(iVar9 + 0x54) = pbVar6;
        *(undefined4 *)(pbVar6 + 0x10) = 0x70;
        *(undefined *)(iVar9 + 1) = 0x70;
        pbVar6[0xc] = 0x70;
        pbVar6[0x11] = (byte)iVar8;
        uVar7 = *(uint *)(iVar9 + 0x14);
        *(int *)(iVar8 + 0x74) = iVar9;
        *(char *)(uVar7 + 9) = (char)uVar4;
        *(int *)(uVar7 + 0x14) = iVar8;
        *(undefined2 *)(uVar7 * 2) = 0x73;
        *(short *)(iVar5 + iVar5 * iVar8) = (short)param_4;
        lVar11 = (ulonglong)(uVar7 >> 0x14) << 0x20;
        param_1 = (byte *)0x2;
        param_3 = *DAT_000221b8;
        param_4 = DAT_000221b8;
      }
      param_3 = param_3 & 0xfffffffe;
      *param_4 = param_3;
      if ((int)((ulonglong)lVar11 >> 0x20) == 0) {
        param_3 = param_3 & ~(uint)param_1;
      }
      else {
        param_3 = param_3 | (uint)param_1;
      }
      *param_4 = param_3;
      UNRECOVERED_JUMPTABLE_00 = *(code **)((int)lVar11 + 4);
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000221b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar1 = (undefined *)(*UNRECOVERED_JUMPTABLE)();
        return puVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x000221ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = (undefined *)(*UNRECOVERED_JUMPTABLE_00)();
      return puVar1;
    }
    pcVar2 = s_app_setting____________Write_app_0002d848;
  }
LAB_000220b4:
  puVar1 = (undefined *)debug_printf_stub(pcVar2,param_2,param_3);
  return puVar1;
}


/* ---- FUN_000221bc @ 000221bc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000221bc(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  byte bVar9;
  
  uVar8 = (uint)(DAT_00022258 - DAT_0002225c) >> 4;
  iVar2 = *(int *)(DAT_00022260 + 0x14);
  if (iVar2 == -1) {
    iVar2 = _DAT_10000014 << 10;
  }
  bVar1 = *DAT_00022264;
  uVar4 = (uint)bVar1 << 0x1f;
  uVar3 = uVar8;
  if (uVar4 == 0) {
    for (; uVar4 < uVar8; uVar4 = uVar4 + 1) {
      piVar7 = (int *)(uVar4 * 0x10 + DAT_0002225c);
      if ((*piVar7 != 0) && (piVar7[1] != 0)) {
        uVar3 = uVar3 - 1;
      }
    }
    for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
      uVar5 = uVar4 & 0xff;
      bVar9 = 0;
      for (uVar6 = 0; uVar6 < uVar8; uVar6 = uVar6 + 1) {
        piVar7 = (int *)(uVar6 * 0x10 + DAT_0002225c);
        if (((*piVar7 == 0) || (piVar7[1] == 0)) && (bVar9 < *(byte *)((int)piVar7 + 0xd))) {
          uVar5 = uVar6 & 0xff;
          bVar9 = *(byte *)((int)piVar7 + 0xd);
        }
      }
      piVar7 = (int *)(uVar5 * 0x10 + DAT_0002225c);
      piVar7[1] = iVar2;
      iVar2 = iVar2 + (uint)*(byte *)(piVar7 + 3) * -0x400;
      *piVar7 = iVar2;
    }
    *DAT_00022264 = bVar1 | 1;
  }
  return 0;
}


/* ---- FUN_00022268 @ 00022268 ---- */

undefined4 FUN_00022268(void)

{
  if (*(int *)(DAT_00022278 + 100) != 4) {
    return 0;
  }
  return 1;
}


/* ---- FUN_0002227c @ 0002227c ---- */

undefined4 FUN_0002227c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(DAT_00022290 + 100);
    return 0;
  }
  return 3;
}


/* ---- FUN_00022294 @ 00022294 ---- */

undefined4 FUN_00022294(uint *param_1,uint *param_2,uint *param_3,uint **param_4,uint *param_5)

{
  int iVar1;
  uint **local_18;
  
  if ((*DAT_00022314 & 1) == 0) {
    return 1;
  }
  local_18 = param_4;
  iVar1 = FUN_00020adc(param_1);
  if (iVar1 == 0) {
    return 2;
  }
  if ((param_3 == (uint *)0x0) || (param_2 == (uint *)0x0)) {
    return 3;
  }
  if ((((uint)param_3 | (uint)param_2) & 3) != 0) {
    return 6;
  }
  if (((uint *)*param_1 <= param_2) && (param_2 + (int)param_4 <= (uint *)param_1[1])) {
    if (param_4 == (uint **)0x0) {
      return 4;
    }
    iVar1 = FUN_000293ec(&local_18);
    if (iVar1 != 0) {
      *local_18 = param_1;
      local_18[1] = param_5;
      *(undefined *)(local_18 + 2) = 1;
      local_18[3] = param_3;
      local_18[4] = param_2;
      *(short *)(local_18 + 5) = (short)param_4;
      FUN_00029548();
      return 0;
    }
    return 7;
  }
  return 5;
}


/* ---- FUN_00022318 @ 00022318 ---- */

void FUN_00022318(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar3 = DAT_0002237c;
  iVar2 = DAT_00022378;
  iVar4 = *(int *)(DAT_00022378 + 0x60) * 0x18 + DAT_00022378;
  bVar1 = *DAT_0002237c;
  if ((int)((uint)bVar1 << 0x1e) < 0) {
    if (param_1 == 2) {
      FUN_0002695c(iVar4);
    }
    else if ((param_1 == 3) &&
            (bVar1 = DAT_0002237c[1], DAT_0002237c[1] = bVar1 + 1, 3 < (byte)(bVar1 + 1))) {
      pbVar3[1] = 0;
      FUN_00029df8(iVar4,8);
      FUN_000293c0();
    }
  }
  else if ((int)((uint)bVar1 << 0x1d) < 0) {
    *DAT_0002237c = bVar1 & 0xfb;
    if (*(int *)(iVar2 + 100) != 0) {
      *pbVar3 = bVar1 & 0xfb | 2;
    }
  }
  FUN_00029424();
  return;
}


/* ---- FUN_00022380 @ 00022380 ---- */

/* WARNING: Removing unreachable block (ram,0x000223a6) */

void FUN_00022380(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined local_10 [4];
  undefined uStack_c;
  undefined auStack_b [11];
  
  local_10[0] = 0x11;
  software_interrupt(0x7c);
  if (local_10 != (undefined *)0x0) {
    app_error_handler(local_10,DAT_00022438,s__________application_user_ble_c_00022418);
  }
  software_interrupt(0x77);
  software_interrupt(0x78);
  app_error_handler(0xc1,DAT_00022438 + 7,s__________application_user_ble_c_00022418);
  local_18 = *(undefined4 *)(DAT_0002243c + 0x38);
  local_14 = *(undefined4 *)(DAT_0002243c + 0x3c);
  software_interrupt(0x7a);
  if (&stack0x00000000 != &UsageFault) {
    app_error_handler(&local_18,DAT_00022438 + 0x11,s__________application_user_ble_c_00022418);
  }
  software_interrupt(0x71);
  if (&uStack_c != (undefined *)0x0) {
    app_error_handler(&uStack_c,DAT_00022438 + 0x17,s__________application_user_ble_c_00022418);
  }
  FUN_0001b19c(DAT_00022440,auStack_b,6);
  return;
}


/* ---- FUN_00022444 @ 00022444 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00022464) */
/* WARNING: Removing unreachable block (ram,0x00022464) */

undefined4 FUN_00022444(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  
  pbVar1 = DAT_000224b0;
  if (param_1 != 0) {
    return 1;
  }
  if (DAT_000224b0[0xc] == 0) {
    FUN_000225a0();
  }
  else {
    DAT_000224b0[0xc] = 0;
  }
  uVar2 = (uint)*pbVar1;
                    /* WARNING: Could not recover jumptable at 0x00022464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (DAT_00022468 <= uVar2) {
    uVar2 = (uint)DAT_00022468;
  }
  uVar3 = (*(code *)((uint)*(byte *)(uVar2 + 0x22469) * 2 + 0x22469))();
  return uVar3;
}


/* ---- FUN_000224b4 @ 000224b4 ---- */

undefined4 FUN_000224b4(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  
  puVar1 = DAT_000224f8;
  uVar2 = 0;
  puVar4 = (undefined2 *)(DAT_000224f8 + 2);
  do {
    if (puVar1[uVar2 + 10] != '\0') {
      puVar1[uVar2 + 10] = 0;
      if ((*(short *)(puVar1 + uVar2 * 0x10 + -0x14) == 0) &&
         (puVar1[uVar2 * 0x10 + -0x12] == '\x01')) {
        *puVar4 = (short)uVar2;
        uVar3 = FUN_00022580();
        return uVar3;
      }
    }
    uVar2 = uVar2 + 1 & 0xffff;
    if (1 < uVar2) {
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 2) = 0;
      uVar3 = DAT_000224fc;
      *(undefined4 *)(puVar1 + 4) = 0;
      return uVar3;
    }
  } while( true );
}


/* ---- FUN_00022500 @ 00022500 ---- */

void FUN_00022500(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_00022540;
  if (*(short *)(DAT_00022540 + (uint)*(ushort *)(DAT_00022540 + 2) * 0x10 + -0x14) != 0) {
    *DAT_00022540 = 5;
    puVar2 = DAT_00022544;
    *(undefined2 *)(DAT_00022544 + 1) = 2;
    FUN_00022018(DAT_00022548,*puVar2,1,0);
    return;
  }
  FUN_00022018(DAT_00022548,
               *(undefined4 *)(DAT_00022540 + (uint)*(ushort *)(DAT_00022540 + 2) * 0x10 + -0x1c),1,
               0);
  *puVar1 = 4;
  return;
}


/* ---- FUN_0002254c @ 0002254c ---- */

void FUN_0002254c(void)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = *DAT_00022578;
  uVar2 = *(ushort *)(DAT_00022578 + 1);
  piVar1 = (int *)(DAT_00022574 + 4);
  sVar3 = *(short *)(*piVar1 + 2);
  *DAT_00022574 = 3;
  FUN_00022294(DAT_0002257c,iVar4 + (uint)uVar2 * 4,*piVar1,sVar3 + 3,0);
  return;
}


/* ---- FUN_00022580 @ 00022580 ---- */

void FUN_00022580(void)

{
  int iVar1;
  
  iVar1 = FUN_000296d8(*(undefined2 *)(DAT_0002259c + 2),DAT_0002259c + 4);
  if (iVar1 != 0) {
    FUN_0002254c();
    return;
  }
  FUN_00022500();
  return;
}


/* ---- FUN_000225a0 @ 000225a0 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000225b4) */
/* WARNING: Removing unreachable block (ram,0x000225b4) */

void FUN_000225a0(void)

{
  uint uVar1;
  
  uVar1 = (uint)*DAT_00022618;
                    /* WARNING: Could not recover jumptable at 0x000225b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (DAT_000225b8 <= uVar1) {
    uVar1 = (uint)DAT_000225b8;
  }
  (*(code *)((uint)*(byte *)(uVar1 + 0x225b9) * 2 + 0x225b9))
            (DAT_00022618,DAT_0002261c,DAT_00022618 + -0x20);
  return;
}


/* ---- FUN_00022620 @ 00022620 ---- */

void FUN_00022620(short *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_50;
  undefined2 local_4c [10];
  undefined local_38 [2];
  undefined2 local_36;
  short local_34;
  undefined auStack_2c [24];
  
  iVar2 = DAT_000226d0;
  sVar1 = *param_1;
  if (sVar1 == 0x50) {
    if (((*(char *)(param_1 + 6) == '\x01') && (*(char *)(param_1 + 5) == '\x01')) &&
       ((ushort)param_1[4] == DAT_000226d4)) {
      debug_printf_stub(s_gcm_ble_evt_handler_BLE_GATTS_EV_000226d8);
    }
  }
  else if (sVar1 == 0x52) {
    FUN_00024450(param_1[2]);
  }
  else if (sVar1 == 0x54) {
    local_38[0] = 6;
    local_36 = FUN_00022fdc(param_1[2]);
    local_34 = param_1[2];
    FUN_00022990();
    FUN_0001f6dc(param_1[2],*(undefined *)(iVar2 + 3),0);
    FUN_00021800(local_38);
  }
  iVar3 = FUN_0001f6a0(*(undefined *)(iVar2 + 2));
  if (iVar3 != 0) {
    FUN_0001f494(auStack_2c);
    FUN_0001b19c(&local_50,auStack_2c,0x14);
    for (uVar4 = 0; uVar4 < local_50; uVar4 = uVar4 + 1) {
      iVar3 = FUN_0001f6b8(local_4c[uVar4],*(undefined *)(iVar2 + 2));
      if (iVar3 != 0) {
        FUN_00024450(local_4c[uVar4]);
      }
    }
  }
  FUN_0002bbbc();
  FUN_00029e40();
  return;
}


/* ---- FUN_0002276c @ 0002276c ---- */

void FUN_0002276c(char *param_1)

{
  int iVar1;
  
  if (*param_1 == '\x01') {
    FUN_00024450(*(undefined2 *)(param_1 + 2));
    iVar1 = FUN_00022b40(*(undefined2 *)(param_1 + 2));
    if (iVar1 != 0) {
      FUN_0001f6dc(*(undefined2 *)(param_1 + 2),*(undefined *)(DAT_00022794 + 3),1);
    }
  }
  return;
}


/* ---- FUN_00022798 @ 00022798 ---- */

undefined4 FUN_00022798(void)

{
  undefined *puVar1;
  undefined uVar2;
  int iVar3;
  
  puVar1 = DAT_000227dc;
  *DAT_000227dc = 0;
  uVar2 = FUN_0001f670();
  puVar1[1] = uVar2;
  uVar2 = FUN_0001f670();
  puVar1[2] = uVar2;
  uVar2 = FUN_0001f670();
  puVar1[3] = uVar2;
  iVar3 = FUN_0001f670();
  puVar1[4] = (char)iVar3;
  if ((((puVar1[1] != '\x18') && (puVar1[2] != '\x18')) && (puVar1[3] != '\x18')) && (iVar3 != 0x18)
     ) {
    *puVar1 = 1;
    return 0;
  }
  return 3;
}


/* ---- FUN_000227e0 @ 000227e0 ---- */

void FUN_000227e0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_28;
  undefined2 local_24 [8];
  
  FUN_000229c0();
  FUN_0001f494(&local_28);
  iVar1 = DAT_00022824;
  for (uVar3 = 0; uVar3 < local_28; uVar3 = uVar3 + 1 & 0xffff) {
    iVar2 = FUN_00022fdc(local_24[uVar3]);
    if (iVar2 == iVar1) {
      FUN_0001f6dc(local_24[uVar3],*(undefined *)(DAT_00022828 + 3),1);
    }
  }
  FUN_00029e40();
  return;
}


/* ---- FUN_0002282c @ 0002282c ---- */

void FUN_0002282c(char *param_1)

{
  if (*param_1 == '\a') {
    debug_printf_stub(s_gcm_smd_evt_handler_00022844);
    FUN_000244c8(*(undefined2 *)(param_1 + 2));
  }
  return;
}


/* ---- FUN_0002285c @ 0002285c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002285c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_00022898;
  FUN_0001b1ce(_DAT_00022898,0x50);
  FUN_000282f0(param_1,iVar1);
  debug_printf_stub(s_get_bonding_info_addr___p__d_0002289b + 1,iVar1,0x50);
  uVar2 = 0;
  do {
    debug_printf_stub(&DAT_000228c0,*(undefined *)(iVar1 + uVar2));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x50);
  debug_printf_stub(s_bonding_data_peer_ble_id_id_addr_000228c4,_DAT_00022898 + 0x12);
  return;
}


/* ---- FUN_000228f8 @ 000228f8 ---- */

undefined4 FUN_000228f8(undefined4 param_1)

{
  if ((int)((*(uint *)(DAT_00022924 + 0x10) >> 8) << 0x1f) < 0) {
    param_1 = 0;
  }
  else if (-1 < (int)((*(uint *)(DAT_00022924 + 0x10) >> 8) << 0x1f)) {
    if ((int)((*(uint *)(DAT_00022924 + 0x10) >> 9) << 0x1f) < 0) {
      return 2;
    }
    return 1;
  }
  return param_1;
}


/* ---- FUN_00022928 @ 00022928 ---- */

uint FUN_00022928(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0001f6b8(param_1,*(undefined *)(DAT_00022958 + 1));
  if (iVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(ushort *)(uVar2 * 0xc + DAT_0002295c + 2) == param_1) {
        return uVar2 & 0xff;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
  }
  return 0xff;
}


/* ---- FUN_00022960 @ 00022960 ---- */

uint FUN_00022960(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = DAT_0002298c;
  iVar1 = DAT_00022988;
  uVar4 = 0;
  do {
    iVar3 = FUN_0001f6b8(*(undefined2 *)(uVar4 * 0xc + iVar1 + 2),*(undefined *)(iVar2 + 1));
    if (iVar3 == 0) {
      return uVar4 & 0xff;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  return 0xff;
}


/* ---- FUN_00022990 @ 00022990 ---- */

void FUN_00022990(undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = *(undefined4 *)(DAT_000229a8 + 8);
  local_c = *(undefined4 *)(DAT_000229a8 + 0xc);
  FUN_00027224(param_1,&local_10,0);
  return;
}


/* ---- FUN_000229ac @ 000229ac ---- */

undefined4 FUN_000229ac(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_000229bc;
  *(undefined2 *)(DAT_000229bc + 4) = 0xffff;
  *puVar1 = 1;
  return 0;
}


/* ---- FUN_000229c0 @ 000229c0 ---- */

void FUN_000229c0(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0002702c(DAT_000229d4);
  *(undefined2 *)(DAT_000229d8 + 4) = uVar1;
  FUN_00029e98();
  return;
}


/* ---- FUN_000229dc @ 000229dc ---- */

undefined8 FUN_000229dc(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_20;
  int *local_1c;
  int local_18;
  
  local_18 = param_1;
  iVar2 = FUN_00022fdc(param_1);
  uVar3 = 0;
  iVar4 = 3;
  bVar1 = true;
  uVar5 = 0;
  if ((iVar2 != DAT_00022a44) && (iVar2 = FUN_000271d0(iVar2,8,&uStack_20), iVar2 == 0)) {
    iVar4 = *local_1c;
    uVar3 = (int)local_1c + 6;
    uVar5 = (uint)*(ushort *)(local_1c + 1);
  }
  do {
    software_interrupt(0xa9);
    if (local_18 == 4) {
      local_18 = 0x11;
LAB_00022a26:
      if (!bVar1) {
LAB_00022a2a:
        local_18 = 0xb;
      }
      return CONCAT44(uStack_20,local_18);
    }
    if (local_18 == 8) {
      local_18 = 0;
      goto LAB_00022a26;
    }
    if (local_18 != 0xb) goto LAB_00022a26;
    bVar1 = false;
    if (iVar4 << 0x1e < 0) {
      iVar4 = 1;
    }
    else {
      if ((uVar3 | uVar5) == 0) goto LAB_00022a2a;
      uVar3 = 0;
      iVar4 = 3;
      uVar5 = uVar3;
    }
  } while( true );
}


/* ---- FUN_00022a48 @ 00022a48 ---- */

undefined8 FUN_00022a48(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 uStack_20;
  undefined4 *local_1c;
  int local_18;
  
  local_18 = param_1;
  iVar2 = FUN_00022fdc(param_1);
  if (iVar2 == DAT_00022acc) {
    return CONCAT44(uStack_20,DAT_00022ad0);
  }
  sVar5 = 1;
  while( true ) {
    bVar1 = false;
    iVar3 = FUN_00027258(iVar2,8,sVar5,&uStack_20);
    if (iVar3 != 0) {
      if (iVar3 == 7) {
        iVar3 = 0xc;
      }
      goto LAB_00022ac6;
    }
    *local_1c = 3;
    software_interrupt(0xaa);
    if (local_18 == 0) break;
    iVar3 = local_18;
    if (local_18 == 0xc) {
      bVar1 = true;
    }
    else if (local_18 == 5) {
      iVar3 = 0;
    }
    iVar4 = FUN_00027360(iVar2,8);
    if (iVar4 != 0) {
      iVar3 = 3;
    }
    sVar5 = sVar5 + 1;
    if (!bVar1) {
LAB_00022ac6:
      return CONCAT44(uStack_20,iVar3);
    }
  }
  debug_printf_stub(s_gscm_local_db_cache_update_00022ad4,(int)local_1c + 6,local_1c + 1);
  iVar3 = FUN_0002738c(iVar2,8);
  goto LAB_00022ac6;
}


/* ---- FUN_00022b40 @ 00022b40 ---- */

undefined FUN_00022b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined *local_c;
  
  uStack_10 = param_3;
  local_c = param_4;
  uVar1 = FUN_00022fdc();
  iVar2 = FUN_000271d0(uVar1,1,&uStack_10);
  if (iVar2 != 0) {
    return 0;
  }
  return *local_c;
}


/* ---- FUN_00022b5c @ 00022b5c ---- */

void FUN_00022b5c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00022b84;
  iVar1 = DAT_00022b80;
  while (software_interrupt(0xa7), param_1 == iVar2) {
    *(short *)(iVar1 + 2) = *(short *)(iVar1 + 2) + 1;
  }
  return;
}


/* ---- FUN_00022b88 @ 00022b88 ---- */

undefined4 FUN_00022b88(short *param_1)

{
  if (((ushort)param_1[2] != DAT_00022ba0) && (*param_1 != 0)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00022ba4 @ 00022ba4 ---- */

void FUN_00022ba4(void)

{
  FUN_00025ccc();
  return;
}


/* ---- FUN_00022bac @ 00022bac ---- */

undefined4 FUN_00022bac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00025cec(param_1,param_2,0);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x80,s__________bsp_interface_i2c_c_00022bcc);
    return 0;
  }
  return 1;
}


/* ---- FUN_00022bec @ 00022bec ---- */

undefined4 FUN_00022bec(void)

{
  FUN_00025dbc();
  return 1;
}


/* ---- FUN_00022bf8 @ 00022bf8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00022bf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char *pcVar1;
  int iVar2;
  undefined local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_2c[0] = 0;
  local_24 = param_1;
  local_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  FUN_0001ddb4(local_2c);
  iVar2 = FUN_00025d98(local_24,local_20,&uStack_1c,1);
  FUN_0001ddf0(local_2c[0]);
  pcVar1 = _DAT_00022c84;
  if (*_DAT_00022c84 == '\0') {
    if (iVar2 != 0) {
      return 0xffffffff;
    }
  }
  else if (iVar2 != 0) {
    app_error_handler(iVar2,0xd7,s__________bsp_interface_i2c_c_00022c87 + 1);
    return 0xffffffff;
  }
  FUN_0001ddb4();
  iVar2 = FUN_00025d74(local_24,local_20,local_18,param_5);
  if (*pcVar1 != '\0') {
    if (iVar2 == 0) {
      FUN_0001ddf0(0);
      return 0;
    }
    app_error_handler(iVar2,0xe5,s__________bsp_interface_i2c_c_00022c87 + 1);
  }
  FUN_0001ddf0(0);
  if (iVar2 == 0) {
    return 0;
  }
  return 0xffffffff;
}


/* ---- FUN_00022ca8 @ 00022ca8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00022ca8(undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined local_2c;
  undefined auStack_2b [15];
  undefined local_1c [8];
  
  local_2c = param_3;
  FUN_0001b19c(auStack_2b,param_4,param_5);
  *_DAT_00022d08 = 0;
  local_1c[0] = 0;
  FUN_0001ddb4(local_1c);
  iVar1 = FUN_00025d98(param_1,param_2,&local_2c,param_5 + 1U & 0xff,0);
  if (iVar1 == 0) {
    FUN_0001ddf0(local_1c[0]);
    uVar2 = 0;
  }
  else {
    app_error_handler(iVar1,0xb3,s__________bsp_interface_i2c_c_00022d0b + 1);
    FUN_0001ddf0(local_1c[0]);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* ---- FUN_00022d2c @ 00022d2c ---- */

longlong FUN_00022d2c(char *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = param_2;
  if (*param_1 == '\x02') {
    uStack_14 = param_3;
    uStack_10 = param_4;
    FUN_0001b19c(&uStack_18,param_1 + 1,3);
    FUN_0001b19c(&uStack_10,param_1 + 4,3);
    FUN_0001d050(param_2,&uStack_10,&uStack_14);
    iVar1 = FUN_0001b1f2(&uStack_18,&uStack_14,3);
    if (iVar1 == 0) {
      return CONCAT44(uStack_18,1);
    }
  }
  return (ulonglong)uStack_18 << 0x20;
}


/* ---- FUN_00022d6c @ 00022d6c ---- */

undefined4 FUN_00022d6c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00022928();
  if (iVar1 != 0xff) {
    FUN_0001b19c(param_2,iVar1 * 0xc + DAT_00022d94 + 4,7);
    return 0;
  }
  return 5;
}


/* ---- FUN_00022d98 @ 00022d98 ---- */

void FUN_00022d98(short *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_48 [2];
  char local_44 [40];
  undefined auStack_1c [4];
  int local_18;
  
  if (*param_1 != 0x10) {
    return;
  }
  FUN_0001b19c(local_48,param_1 + 2,0x2c);
  uVar1 = DAT_00022e3c;
  uVar3 = uVar1;
  if (local_44[0] != '\x03') {
    FUN_000275f8();
    if ((local_44[0] == '\0') || (local_44[0] == '\x01')) {
      do {
        iVar2 = FUN_000275a4(7,&local_50,auStack_1c);
        if (iVar2 == 0) goto LAB_00022e10;
        iVar2 = FUN_0001cc28(local_44,local_18 + 0x11);
      } while (iVar2 == 0);
    }
    else {
      if (local_44[0] != '\x02') goto LAB_00022e10;
      do {
        iVar2 = FUN_000275a4(7,&local_50,auStack_1c);
        if (iVar2 == 0) goto LAB_00022e10;
        iVar2 = FUN_00022d2c(local_44,local_18 + 1);
      } while (iVar2 == 0);
    }
    uVar3 = (uint)local_50;
  }
LAB_00022e10:
  FUN_00024a1c(local_48[0],local_44);
  if (uVar3 != uVar1) {
    FUN_00022f38(local_48[0],uVar3);
    local_4e = local_48[0];
    local_50 = CONCAT11(local_50._1_1_,1);
    FUN_0002180c();
  }
  return;
}


/* ---- FUN_00022e40 @ 00022e40 ---- */

uint FUN_00022e40(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(ushort *)(DAT_00022e64 + uVar1 * 0xc) == param_1) {
      return (uint)*(ushort *)(uVar1 * 0xc + DAT_00022e64 + 2);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  return DAT_00022e68;
}


/* ---- FUN_00022e6c @ 00022e6c ---- */

undefined4 FUN_00022e6c(void)

{
  return 6;
}


/* ---- FUN_00022e70 @ 00022e70 ---- */

undefined4 FUN_00022e70(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = DAT_00022eac;
  DAT_00022eac[1] = 0x18;
  iVar4 = DAT_00022eb4;
  uVar2 = DAT_00022eb0;
  uVar3 = 0;
  do {
    iVar5 = uVar3 * 0xc;
    uVar3 = uVar3 + 1;
    *(short *)(iVar5 + iVar4 + 2) = (short)uVar2;
  } while (uVar3 < 8);
  iVar4 = FUN_0001f670();
  puVar1[1] = (char)iVar4;
  if ((iVar4 != 0x18) && (software_interrupt(0x71), DAT_00022eac == (undefined *)0xfffffffd)) {
    *puVar1 = 1;
    return 0;
  }
  return 3;
}


/* ---- FUN_00022eb8 @ 00022eb8 ---- */

uint FUN_00022eb8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_000233b4(param_1 + 1);
  if (uVar1 != 0) {
    iVar2 = FUN_0001b1f2(param_1 + 1,param_2 + 1,0x10);
    uVar1 = FUN_0001cc28(param_1 + 0x11,param_2 + 0x11);
    uVar1 = iVar2 == 0 | uVar1;
  }
  return uVar1;
}


/* ---- FUN_00022ef0 @ 00022ef0 ---- */

undefined4 FUN_00022ef0(ushort *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (uVar1 == 0) {
    while (*(char *)((int)param_1 + uVar1 + 2) == '\0') {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        return 0;
      }
    }
  }
  return 1;
}


/* ---- FUN_00022f0c @ 00022f0c ---- */

int FUN_00022f0c(short *param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00022ef0();
  if (iVar1 != 0) {
    if ((*param_1 == *param_2) && (iVar1 = FUN_0001b1f2(param_1 + 1,param_2 + 1,8), iVar1 == 0)) {
      return 1;
    }
    iVar1 = 0;
  }
  return iVar1;
}


/* ---- FUN_00022f38 @ 00022f38 ---- */

void FUN_00022f38(void)

{
  FUN_00027974();
  return;
}


/* ---- FUN_00022f40 @ 00022f40 ---- */

void FUN_00022f40(char *param_1)

{
  int iVar1;
  short local_28 [2];
  undefined auStack_24 [4];
  undefined4 local_20;
  undefined auStack_1c [4];
  undefined4 local_18;
  undefined local_14 [2];
  undefined2 local_12;
  undefined2 local_10;
  short local_e;
  
  if (((*param_1 == '\0') && (param_1[4] == '\a')) &&
     (iVar1 = FUN_000271d0(*(undefined2 *)(param_1 + 2),7,auStack_24), iVar1 == 0)) {
    FUN_000275f8();
    do {
      iVar1 = FUN_000275a4(7,local_28,auStack_1c);
      if (iVar1 == 0) {
        return;
      }
    } while ((*(short *)(param_1 + 2) == local_28[0]) ||
            (iVar1 = FUN_00022eb8(local_20,local_18), iVar1 == 0));
    local_12 = FUN_00022e40(*(undefined2 *)(param_1 + 2));
    local_14[0] = 0;
    local_10 = *(undefined2 *)(param_1 + 2);
    local_e = local_28[0];
    FUN_0002180c(local_14);
  }
  return;
}


/* ---- FUN_00022fb0 @ 00022fb0 ---- */

int FUN_00022fb0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00022e40();
  iVar2 = FUN_000271da(param_1);
  if ((iVar1 != DAT_00022fd8) && (iVar2 == 0)) {
    FUN_00027974(iVar1);
  }
  return iVar2;
}


/* ---- FUN_00022fdc @ 00022fdc ---- */

uint FUN_00022fdc(void)

{
  int iVar1;
  
  iVar1 = FUN_00022928();
  if (iVar1 != 0xff) {
    return (uint)*(ushort *)(DAT_00022ff4 + iVar1 * 0xc);
  }
  return DAT_00022ff8;
}


/* ---- FUN_00022ffc @ 00022ffc ---- */

ulonglong FUN_00022ffc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_18;
  int local_14;
  undefined4 local_10;
  
  uStack_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  FUN_000275f8();
  do {
    iVar1 = FUN_000275a4(7,&local_10,&uStack_18);
    if (iVar1 == 0) {
      return CONCAT44(uStack_18,DAT_0002303c);
    }
    iVar1 = FUN_00022f0c(param_1,local_14 + 0x46);
  } while ((iVar1 == 0) && (iVar1 = FUN_00022f0c(param_1,local_14 + 0x2a), iVar1 == 0));
  return CONCAT44(uStack_18,local_10) & 0xffffffff0000ffff;
}


/* ---- FUN_00023040 @ 00023040 ---- */

undefined4 FUN_00023040(int param_1,int param_2)

{
  FUN_0001b1ce(DAT_00023070,0x10);
  if ((param_1 == 0) || (param_2 == 0)) {
    *(undefined *)(DAT_00023074 + 2) = 0;
  }
  else {
    *(char *)(DAT_00023074 + 2) = (char)param_2;
    FUN_0001b19c(DAT_00023070,param_1,param_2 << 1);
  }
  return 0;
}


/* ---- FUN_00023078 @ 00023078 ---- */

undefined4 FUN_00023078(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  puVar2 = DAT_0002312c;
  iVar5 = DAT_00023128;
  if (param_1 != 0) {
    FUN_00021f68(1);
    return 1;
  }
  cVar1 = *(char *)(param_2 + 4);
  if (cVar1 == '\0') {
    iVar4 = FUN_00026d14();
    *(undefined *)(param_2 + 4) = 1;
  }
  else if (cVar1 == '\x01') {
    uVar3 = 0;
    while (*(char *)(DAT_00023128 + uVar3 * 0x10) != '\x02') {
      uVar3 = uVar3 + 1 & 0xffff;
      if (1 < uVar3) {
        FUN_00021f9c(2);
        FUN_00021f68(1);
        return DAT_00023130;
      }
    }
    iVar4 = FUN_00026cf8(*(undefined4 *)(uVar3 * 0x10 + DAT_00023128 + 4));
    *(undefined *)(iVar5 + uVar3 * 0x10) = 0;
  }
  else {
    if (cVar1 == '\x02') {
      iVar4 = FUN_00022018(DAT_00023134,*DAT_0002312c,1,0,param_4);
      *(undefined2 *)(puVar2 + 1) = 2;
    }
    else {
      if (cVar1 != '\x03') goto LAB_0002311c;
      iVar4 = FUN_00026cf8();
      uVar7 = *puVar2;
      iVar6 = (uint)*(ushort *)(DAT_00023128 + 0x22) * 0x10;
      iVar5 = iVar6 + DAT_00023128;
      *puVar2 = *(undefined4 *)(iVar5 + 4);
      *(undefined4 *)(iVar5 + 4) = uVar7;
      *(undefined2 *)(iVar5 + 8) = *(undefined2 *)(puVar2 + 1);
      *(undefined2 *)(puVar2 + 1) = 2;
      *(undefined *)(DAT_00023128 + iVar6) = 0;
    }
    *(undefined *)(param_2 + 4) = 0;
  }
  if (iVar4 == 0) {
    return 0;
  }
LAB_0002311c:
  FUN_00021f68(1);
  return 0xe;
}


/* ---- FUN_00023138 @ 00023138 ---- */

void FUN_00023138(void)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_r3;
  undefined4 local_18;
  
  pcVar3 = DAT_000231bc;
  if (*DAT_000231bc != '\0') {
    bVar1 = false;
    local_18 = in_r3;
    if (*(int *)(DAT_000231bc + 0xc) == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    while (pcVar3[1] == '\0') {
      software_interrupt(0x52);
      if (&local_18 == (undefined4 *)0x5) {
        bVar1 = true;
      }
      else if (&local_18 == (undefined4 *)0x0) {
        FUN_00025398(local_18);
        if (*(code **)(pcVar3 + 0x10) != (code *)0x0) {
          (**(code **)(pcVar3 + 0x10))(local_18);
        }
      }
      else {
        app_error_handler(&local_18,0xa5,DAT_000231c0);
      }
      while( true ) {
        if (!bVar2) {
          if (pcVar3[1] != '\0') {
            return;
          }
          local_18 = CONCAT22(local_18._2_2_,*(undefined2 *)(pcVar3 + 2));
          iVar4 = *(int *)(pcVar3 + 8);
          software_interrupt(0x61);
          if (iVar4 == 5) {
            bVar2 = true;
          }
          else if (iVar4 == 0) {
            (**(code **)(pcVar3 + 0xc))(*(undefined4 *)(pcVar3 + 8));
          }
          else {
            app_error_handler(iVar4,0xca,DAT_000231c0);
          }
        }
        if (!bVar1) break;
        if (bVar2) {
          return;
        }
      }
    }
  }
  return;
}


/* ---- FUN_000231c4 @ 000231c4 ---- */

undefined4 FUN_000231c4(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1 & 0xffff) {
      *(undefined *)(param_2 + uVar1) = *(undefined *)((param_3 - uVar1) + param_1 + -1);
    }
    return 1;
  }
  return 0;
}


/* ---- FUN_000231f0 @ 000231f0 ---- */

undefined8 FUN_000231f0(int param_1,code **param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 local_20;
  code *local_1c;
  code *pcStack_18;
  code *pcStack_14;
  
  local_1c = (code *)(uint)*(byte *)((int)param_2 + 0x21);
  local_20 = (uint)*(byte *)(param_2 + 8);
  pcStack_18 = (code *)param_3;
  pcStack_14 = (code *)param_4;
  iVar3 = FUN_0002b586(param_1,(int)param_2 + 0x23,(int)param_2 + 0x26,param_2[7]);
  if (iVar3 != 0) {
LAB_00023248:
    return CONCAT44(local_1c,local_20);
  }
  if ((*(char *)((int)param_2 + 0x23) == '\0') &&
     (((cVar1 = *(char *)(param_2 + 3), cVar1 == '\x02' || (cVar1 == '\x03')) &&
      (param_2[7] == param_2[4])))) {
    param_2[7] = param_2[5];
    *(byte *)(param_2 + 8) = *(byte *)((int)param_2 + 0xf);
    *(byte *)((int)param_2 + 0x21) = (byte)(((uint)*(byte *)(param_2 + 6) << 0x1a) >> 0x1f);
    if (cVar1 != '\x03') {
      FUN_0002b4b8(param_2,param_1);
      goto LAB_00023248;
    }
    local_20 = ((uint)*(byte *)(param_2 + 6) << 0x1a) >> 0x1f;
    FUN_0002b690(param_2,param_1);
    goto LAB_00023254;
  }
  local_1c = param_2[3];
  pcStack_18 = param_2[4];
  pcStack_14 = param_2[5];
  if (*(char *)((int)param_2 + 0x23) == '\0') {
    local_20 = (uint)local_20._1_3_ << 8;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4c4);
    *(int *)(param_1 + 0x4c4) = iVar3;
    if (iVar3 << 0x1e < 0) {
      uVar2 = 1;
    }
    else {
      if (-1 < iVar3 << 0x1d) goto LAB_0002328a;
      uVar2 = 2;
    }
    local_20 = CONCAT31(local_20._1_3_,uVar2);
  }
LAB_0002328a:
  *(undefined *)(param_2 + 9) = 0;
  if (-1 < (int)((uint)*(byte *)(param_2 + 6) << 0x1d)) {
    (**param_2)(&local_20,param_2[1],*param_2,&stack0xfffffff0);
    return CONCAT44(local_1c,local_20);
  }
LAB_00023254:
  return CONCAT44(local_1c,local_20);
}


/* ---- FUN_0002329c @ 0002329c ---- */

undefined4 FUN_0002329c(void)

{
  int iVar1;
  
  iVar1 = FUN_0001fe28(DAT_000232b0);
  if (iVar1 != 0) {
    return 0;
  }
  return 1;
}


/* ---- FUN_000232b4 @ 000232b4 ---- */

undefined4 FUN_000232b4(uint param_1)

{
  if ((1 << (param_1 & 0xff) & *(uint *)(DAT_000232c8 + 4)) != 0) {
    return 1;
  }
  return 0;
}


/* ---- FUN_000232cc @ 000232cc ---- */

undefined4 FUN_000232cc(uint param_1)

{
  if ((1 << (param_1 & 0xff) & (uint)*(byte *)(DAT_000232e0 + 1)) != 0) {
    return 1;
  }
  return 0;
}


/* ---- FUN_000232e4 @ 000232e4 ---- */

void FUN_000232e4(uint param_1)

{
  FUN_0001dee0(1 << (param_1 & 0xff));
  return;
}


/* ---- FUN_000232f2 @ 000232f2 ---- */

int FUN_000232f2(uint param_1)

{
  int iVar1;
  
  iVar1 = (1 << (param_1 & 0xff)) << 0x1e;
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_00023300 @ 00023300 ---- */

undefined4 FUN_00023300(int param_1)

{
  if ((*DAT_00023318 <= *(ushort *)(param_1 + 2)) && (*(ushort *)(param_1 + 2) <= DAT_00023318[1]))
  {
    return 1;
  }
  return 0;
}


/* ---- FUN_0002331c @ 0002331c ---- */

undefined4 FUN_0002331c(int param_1,int param_2,int param_3,short *param_4)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if (param_3 == 0) {
    if ((uint)uVar1 != (uint)*(ushort *)((uint)*(byte *)(param_1 + 0x25a) * 100 + param_1 + 8)) {
      *param_4 = uVar1 + 1;
      sVar2 = *(short *)((uint)*(byte *)(param_1 + 0x25a) * 100 + param_1 + 8);
      goto LAB_0002335a;
    }
  }
  else {
    uVar3 = uVar1 + 1;
    if (uVar3 != *(ushort *)(param_3 + 6)) {
      *param_4 = (short)uVar3;
      sVar2 = *(short *)(param_3 + 6) + -1;
LAB_0002335a:
      param_4[1] = sVar2;
      return 1;
    }
  }
  return 0;
}


/* ---- FUN_00023360 @ 00023360 ---- */

undefined4 FUN_00023360(void)

{
  uint uVar1;
  
  if ((((char)*(undefined2 *)(DAT_000233a4 + 0x20) == '\x01') &&
      ((*(ushort *)(DAT_000233a4 + 0x24) & 0xf) == 0)) &&
     ((((uVar1 = (uint)*(ushort *)(DAT_000233a4 + 0x28) << 0x18, uVar1 >> 0x1c == 0 &&
        (((uint)*(ushort *)(DAT_000233a4 + 0x2c) << 0x18) >> 0x1c == 0)) ||
       ((uVar1 = uVar1 >> 0x1c, uVar1 == 1 &&
        (((uint)*(ushort *)(DAT_000233a4 + 0x2c) << 0x18) >> 0x1c == 0)))) ||
      ((uVar1 == 3 && (((uint)*(ushort *)(DAT_000233a4 + 0x2c) << 0x18) >> 0x1c == 0)))))) {
    return 1;
  }
  return 0;
}


/* ---- FUN_000233a8 @ 000233a8 ---- */

int FUN_000233a8(uint param_1)

{
  int iVar1;
  
  iVar1 = (1 << (param_1 & 0xff)) << 0x12;
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_000233b4 @ 000233b4 ---- */

undefined4 FUN_000233b4(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + uVar1) != '\0') {
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return 0;
}


/* ---- FUN_000233ca @ 000233ca ---- */

undefined4 FUN_000233ca(uint param_1)

{
  if ((param_1 & 3) != 0) {
    return 0;
  }
  return 1;
}


/* ---- FUN_000233d6 @ 000233d6 ---- */

void FUN_000233d6(int **param_1,int **param_2)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)*param_1;
  while( true ) {
    if (ppiVar1 == (int **)0x0) {
      *param_2 = *param_1;
      *param_1 = (int *)param_2;
      return;
    }
    if (ppiVar1 == param_2) break;
    ppiVar1 = (int **)*ppiVar1;
  }
  return;
}


/* ---- led_motor_ctrl_queue_add @ 000233ec ---- */
/* nrf_queue: 20 x 17 B */

/* nrf_queue: 20 x 17 B */

undefined4 led_motor_ctrl_queue_add(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00026072(DAT_00023418);
  if (iVar1 == 0) {
    iVar1 = FUN_0002609e(DAT_00023418,param_1);
    if (iVar1 == 0) {
      return 1;
    }
    app_error_handler(iVar1,0x43,s__________user_queue_c_0002341c);
  }
  return 0;
}


/* ---- led_motor_ctrl_queue_get @ 00023434 ---- */

undefined4 led_motor_ctrl_queue_get(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00026062(DAT_00023464);
  if (iVar1 == 0) {
    iVar1 = FUN_00025fd8(DAT_00023464,param_1,0);
    if (iVar1 == 0) {
      return 1;
    }
    app_error_handler(iVar1,0x51,s__________user_queue_c_00023468);
  }
  return 0;
}


/* ---- FUN_00023480 @ 00023480 ---- */

void FUN_00023480(void)

{
  FUN_0002614e(DAT_0002348c);
  return;
}


/* ---- led_motor_test_queue_add @ 00023490 ---- */
/* nrf_queue: 256 x 15 B */

/* nrf_queue: 256 x 15 B */

undefined4 led_motor_test_queue_add(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00026072(DAT_000234c4);
  if (iVar1 == 0) {
    iVar1 = FUN_0002609e(DAT_000234c4,param_1);
    if (iVar1 == 0) {
      return 1;
    }
    app_error_handler(iVar1,0x75,s__________user_queue_c_000234f0);
  }
  else {
    debug_printf_stub(s_led_motor_test_queue_is_full____t_000234c8);
  }
  return 0;
}


/* ---- led_motor_test_queue_get @ 00023508 ---- */

undefined4 led_motor_test_queue_get(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00026062(DAT_00023538);
  if (iVar1 == 0) {
    iVar1 = FUN_00025fd8(DAT_00023538,param_1,0);
    if (iVar1 == 0) {
      return 1;
    }
    app_error_handler(iVar1,0x83,s__________user_queue_c_0002353c);
  }
  return 0;
}


/* ---- FUN_00023554 @ 00023554 ---- */

void FUN_00023554(void)

{
  FUN_0002614e(DAT_00023560);
  return;
}


/* ---- leds_mode_blink_run @ 00023564 ---- */

undefined4 leds_mode_blink_run(void)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_000235b4;
  if (*(char *)(DAT_000235b4 + 0x11) == '\x16') {
    leds_power_on();
    leds_execute_timer_stop();
    iVar3 = DAT_000235b4;
    uVar1 = (undefined)*(undefined2 *)(DAT_000235b4 + 0x18);
    uVar4 = *(undefined4 *)(DAT_000235b4 + 0x14);
    aw9109_build_blink_program_3rgb
              (uVar4,uVar4,uVar4,uVar1,uVar1,uVar1,*(undefined2 *)(DAT_000235b4 + 0x1c),
               *(uint *)(DAT_000235b4 + 0x20) & 0xffff);
    if (*(int *)(iVar3 + 0x24) != 0) {
      leds_execute_timer_start(*(int *)(iVar3 + 0x24),0);
    }
    *(undefined *)(iVar2 + 0x11) = 0;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


/* ---- leds_mode_breath_disconnect_run @ 000235b8 ---- */

longlong leds_mode_breath_disconnect_run
                   (undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_00023604;
  if (*(char *)(DAT_00023604 + 0x11) != '\x12') {
    return (ulonglong)param_2 << 0x20;
  }
  leds_power_on();
  iVar4 = DAT_00023608;
  iVar3 = DAT_00023604;
  uVar5 = 0;
  uVar1 = *(ushort *)(DAT_00023608 + 0x28) >> 1;
  aw9109_build_breath_program
            (*(undefined4 *)(DAT_00023608 + 0x30),(char)*(undefined2 *)(DAT_00023604 + 0x14),uVar1,
             uVar1,0,*(short *)(DAT_00023608 + 0x2a) + 100,param_4);
  *(undefined *)(iVar3 + -0x16) = 1;
  leds_execute_timer_start
            ((uint)*(ushort *)(iVar4 + 0x28) * 2 + (uint)*(ushort *)(iVar4 + 0x2a),DAT_0002360c);
  *(undefined *)(iVar2 + 0x11) = 0;
  return CONCAT44(uVar5,1);
}


/* ---- leds_mode_breath_lowbattery_run @ 00023610 ---- */

longlong leds_mode_breath_lowbattery_run
                   (undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_00023660;
  if (*(char *)(DAT_00023660 + 0x11) != '\x13') {
    return (ulonglong)param_2 << 0x20;
  }
  leds_power_on();
  iVar3 = DAT_00023664;
  uVar4 = 0;
  uVar1 = *(ushort *)(DAT_00023664 + -0x18) >> 1;
  aw9109_build_breath_program
            (*(undefined4 *)(DAT_00023664 + 0x20),(char)*(undefined2 *)(DAT_00023660 + 0x14),uVar1,
             uVar1,0,*(short *)(DAT_00023664 + 0x28) + 100,param_4);
  iVar3 = (uint)*(ushort *)(iVar3 + -0x18) * 2 + (uint)*(ushort *)(iVar3 + 0x28);
  if (iVar3 != 0) {
    leds_execute_timer_start(iVar3,0);
  }
  *(undefined *)(iVar2 + 0x11) = 0;
  return CONCAT44(uVar4,1);
}


/* ---- leds_mode_breath_run @ 00023668 ---- */

undefined4 leds_mode_breath_run(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_000236b4;
  if (*(char *)(DAT_000236b4 + 0x11) != '\x11') {
    return 0;
  }
  leds_power_on();
  leds_execute_timer_stop();
  iVar2 = DAT_000236b4;
  aw9109_build_breath_program
            (*(undefined4 *)(DAT_000236b4 + 0x14),(char)*(undefined2 *)(DAT_000236b4 + 0x18),
             *(undefined2 *)(DAT_000236b4 + 0x1c),*(uint *)(DAT_000236b4 + 0x20) & 0xffff,
             *(uint *)(DAT_000236b4 + 0x24) & 0xffff,*(uint *)(DAT_000236b4 + 0x28) & 0xffff);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    leds_execute_timer_start(*(int *)(iVar2 + 0x2c),0);
  }
  *(undefined *)(iVar1 + 0x11) = 0;
  return 1;
}


/* ---- leds_mode_constant_on_run @ 000236b8 ---- */

undefined4 leds_mode_constant_on_run(void)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_000236f8;
  if (*(char *)(DAT_000236f8 + 0x11) != '\x15') {
    return 0;
  }
  leds_power_on();
  leds_execute_timer_stop();
  iVar3 = DAT_000236f8;
  uVar1 = (undefined)*(undefined2 *)(DAT_000236f8 + 0x18);
  uVar4 = *(undefined4 *)(DAT_000236f8 + 0x14);
  aw9109_build_constant_program(uVar4,uVar4,uVar4,uVar1,uVar1,uVar1);
  if (*(int *)(iVar3 + 0x1c) != 0) {
    leds_execute_timer_start(*(int *)(iVar3 + 0x1c),0);
  }
  *(undefined *)(iVar2 + 0x11) = 0;
  return 1;
}


/* ---- leds_mode_fade_out_run @ 000236fc ---- */

undefined4 leds_mode_fade_out_run(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002373c;
  if (*(char *)(DAT_0002373c + 0x11) != '\x14') {
    return 0;
  }
  leds_power_on();
  leds_execute_timer_stop();
  iVar2 = DAT_0002373c;
  FUN_00023e88(*(undefined4 *)(DAT_0002373c + 0x14),(char)*(undefined2 *)(DAT_0002373c + 0x18),
               *(undefined2 *)(DAT_0002373c + 0x1c),*(uint *)(DAT_0002373c + 0x20) & 0xffff);
  if (*(int *)(iVar2 + 0x24) != 0) {
    leds_execute_timer_start(*(int *)(iVar2 + 0x24),0);
  }
  *(undefined *)(iVar1 + 0x11) = 0;
  return 1;
}


/* ---- leds_mode_test_run @ 00023740 ---- */
/* on = ms + 100, off = 0 */

/* on = ms + 100, off = 0 */

bool leds_mode_test_run(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_00023784;
  bVar2 = *(char *)(DAT_00023784 + 0x11) == '\x17';
  if (bVar2) {
    leds_power_on();
    aw9109_build_blink_program_3rgb
              (*(undefined4 *)(DAT_00023784 + 0x14),*(undefined4 *)(DAT_00023784 + 0x18),
               *(undefined4 *)(DAT_00023784 + 0x1c),*(uint *)(DAT_00023784 + 0x20) & 0xff,
               *(uint *)(DAT_00023784 + 0x24) & 0xff,*(uint *)(DAT_00023784 + 0x28) & 0xff,
               *(int *)(DAT_00023784 + 0x2c) + 100U & 0xffff,0);
    *(undefined *)(iVar1 + 0x11) = 0;
  }
  return bVar2;
}


/* ---- leds_power_on @ 00023788 ---- */

void leds_power_on(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_000237cc;
  if ((*(char *)(DAT_000237cc + 0xf) != '\x01') || (*(char *)(DAT_000237cc + 0x10) != '\x01')) {
    FUN_000286a0();
    iVar2 = 0x96;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = FUN_0001e5a8();
    if (iVar2 != 0) {
      *(undefined *)(iVar1 + 0x10) = 1;
    }
  }
  return;
}


/* ---- aw9109_build_breath_program @ 000237d8 ---- */

int aw9109_build_breath_program
              (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined8 local_88;
  uint local_80;
  undefined4 local_7c;
  undefined auStack_78 [84];
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uStack_24 = param_1;
  uStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_0001e71a(2);
  FUN_0001b1ce(auStack_78,0x50);
  led_color_calibration(param_1,&local_9c,&local_98,&local_7c);
  local_88 = FUN_0001b768(local_9c);
  uVar5 = FUN_0001b6e8(param_2);
  uVar5 = FUN_0001b5bc((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,DAT_00023954);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar3 = (undefined4)uVar5;
  local_8c = uVar6;
  uVar5 = FUN_0001b6e8((param_1 << 8) >> 0x18);
  uVar5 = FUN_0001b4ec((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar3,local_8c);
  FUN_0001b4ec((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(undefined4)local_88,local_88._4_4_);
  bVar1 = FUN_0001b72c();
  local_80 = (uint)bVar1;
  uVar5 = FUN_0001b768(local_98);
  local_8c = uVar6;
  local_88 = uVar5;
  uVar5 = FUN_0001b6e8((param_1 << 0x10) >> 0x18);
  uVar5 = FUN_0001b4ec((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar3,local_8c);
  FUN_0001b4ec((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(undefined4)local_88,local_88._4_4_);
  bVar1 = FUN_0001b72c();
  local_90 = (uint)bVar1;
  uVar5 = FUN_0001b768(local_7c);
  local_94 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar7 = (undefined4)uVar5;
  local_88._0_4_ = uVar3;
  uVar5 = FUN_0001b6e8(param_1 & 0xff);
  uVar5 = FUN_0001b4ec((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(undefined4)local_88,uVar6);
  FUN_0001b4ec((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar7,local_94);
  uVar2 = FUN_0001b72c();
  aw9109_prog_set_channel_breath(6,local_80,local_1c,local_18,param_5,param_6,auStack_78);
  aw9109_prog_set_channel_breath(3,local_80,local_1c,local_18,param_5,param_6,auStack_78);
  aw9109_prog_set_channel_breath(8,local_80,local_1c,local_18,param_5,param_6,auStack_78);
  aw9109_prog_set_channel_breath(5,local_90,local_1c,local_18,param_5,param_6,auStack_78);
  aw9109_prog_set_channel_breath(2,local_90,local_1c,local_18,param_5,param_6,auStack_78);
  aw9109_prog_set_channel_breath(9,local_90,local_1c,local_18,param_5,param_6,auStack_78);
  aw9109_prog_set_channel_breath(4,uVar2,local_1c,local_18,param_5,param_6,auStack_78);
  aw9109_prog_set_channel_breath(1,uVar2,local_1c,local_18,param_5,param_6,auStack_78);
  aw9109_prog_set_channel_breath(7,uVar2,local_1c,local_18,param_5,param_6,auStack_78);
  iVar4 = aw9109_load_program(auStack_78,0x50);
  if ((iVar4 != 0) && (iVar4 = aw9109_run_program(), iVar4 != 0)) {
    iVar4 = 1;
  }
  return iVar4;
}


/* ---- aw9109_build_blink_program_3rgb @ 00023958 ---- */
/* LED A ch6/5/4, LED B ch3/2/1, LED C ch8/9/7 */

/* LED A ch6/5/4, LED B ch3/2/1, LED C ch8/9/7 */

int aw9109_build_blink_program_3rgb
              (uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
              undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined auStack_6c [44];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined8 local_20;
  uint local_18;
  
  FUN_0001e71a(2);
  FUN_0001b1ce(auStack_6c,0x2c);
  FUN_0001b1ce(auStack_6c,0x2c);
  led_color_calibration(param_1,&local_34,&local_30,&local_2c);
  uVar6 = FUN_0001b768(local_34);
  local_3c = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_18 = (uint)uVar6;
  uVar6 = FUN_0001b6e8(param_4);
  uVar6 = FUN_0001b5bc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,DAT_00023bf4);
  local_40 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar3 = (undefined4)uVar6;
  local_24 = local_40;
  uVar6 = FUN_0001b6e8((param_1 << 8) >> 0x18);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar3,local_24);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),local_18,local_3c);
  bVar1 = FUN_0001b72c();
  local_18 = (uint)bVar1;
  local_20 = FUN_0001b768(local_30);
  local_24 = local_40;
  uVar6 = FUN_0001b6e8((param_1 << 0x10) >> 0x18);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar3,local_24);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(undefined4)local_20,local_20._4_4_);
  bVar1 = FUN_0001b72c();
  local_28 = (uint)bVar1;
  uVar6 = FUN_0001b768(local_2c);
  uVar4 = local_40;
  local_3c = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_38 = (undefined4)uVar6;
  local_20._0_4_ = uVar3;
  uVar6 = FUN_0001b6e8(param_1 & 0xff);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(undefined4)local_20,uVar4);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),local_38,local_3c);
  uVar2 = FUN_0001b72c();
  aw9109_prog_set_channel_blink(6,local_18,0,0,auStack_6c);
  aw9109_prog_set_channel_blink(5,local_28,0,0,auStack_6c);
  aw9109_prog_set_channel_blink(4,uVar2,0,0,auStack_6c);
  led_color_calibration(param_2,&local_34,&local_30,&local_2c);
  uVar6 = FUN_0001b768(local_34);
  local_3c = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_38 = (undefined4)uVar6;
  uVar6 = FUN_0001b6e8(param_5);
  uVar6 = FUN_0001b5bc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,DAT_00023bf4);
  local_40 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar4 = (undefined4)uVar6;
  local_20._4_4_ = local_40;
  uVar6 = FUN_0001b6e8((param_2 << 8) >> 0x18);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4,local_20._4_4_);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),local_38,local_3c);
  bVar1 = FUN_0001b72c();
  local_18 = (uint)bVar1;
  local_20 = FUN_0001b768(local_30);
  local_24 = local_40;
  uVar6 = FUN_0001b6e8((param_2 << 0x10) >> 0x18);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4,local_24);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(undefined4)local_20,local_20._4_4_);
  bVar1 = FUN_0001b72c();
  local_28 = (uint)bVar1;
  uVar6 = FUN_0001b768(local_2c);
  local_3c = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_38 = (undefined4)uVar6;
  local_24 = local_40;
  uVar6 = FUN_0001b6e8(param_2 & 0xff);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4,local_24);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),local_38,local_3c);
  uVar2 = FUN_0001b72c();
  aw9109_prog_set_channel_blink(3,local_18,0,0,auStack_6c);
  aw9109_prog_set_channel_blink(2,local_28,0,0,auStack_6c);
  aw9109_prog_set_channel_blink(1,uVar2,0,0,auStack_6c);
  led_color_calibration(param_3,&local_34,&local_30,&local_2c);
  uVar6 = FUN_0001b768(local_34);
  local_20 = uVar6;
  uVar6 = FUN_0001b6e8(param_6);
  uVar6 = FUN_0001b5bc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,DAT_00023bf4);
  uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar4 = (undefined4)uVar6;
  uVar6 = FUN_0001b6e8((param_3 << 8) >> 0x18);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4,uVar3);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(undefined4)local_20,local_20._4_4_);
  bVar1 = FUN_0001b72c();
  local_18 = (uint)bVar1;
  uVar6 = FUN_0001b768(local_30);
  local_20 = uVar6;
  uVar6 = FUN_0001b6e8((param_3 << 0x10) >> 0x18);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4,uVar3);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(undefined4)local_20,local_20._4_4_);
  bVar1 = FUN_0001b72c();
  local_28 = (uint)bVar1;
  uVar6 = FUN_0001b768(local_2c);
  local_3c = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_38 = (undefined4)uVar6;
  uVar6 = FUN_0001b6e8(param_3 & 0xff);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4,uVar3);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),local_38,local_3c);
  uVar2 = FUN_0001b72c();
  aw9109_prog_set_channel_blink(8,local_18,0,0,auStack_6c);
  aw9109_prog_set_channel_blink(9,local_28,0,0,auStack_6c);
  aw9109_prog_set_channel_blink(7,uVar2,param_7,param_8,auStack_6c);
  iVar5 = aw9109_load_program(auStack_6c,0x2a);
  if ((iVar5 != 0) && (iVar5 = aw9109_run_program(), iVar5 != 0)) {
    iVar5 = 1;
  }
  return iVar5;
}


/* ---- aw9109_build_constant_program @ 00023bf8 ---- */

int aw9109_build_constant_program
              (uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
              undefined4 param_6)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auStack_60 [28];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  uint local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  FUN_0001e71a(2);
  FUN_0001b1ce(auStack_60,0x18);
  FUN_0001b1ce(auStack_60,0x18);
  led_color_calibration(param_1,&local_28,&local_24,&local_20);
  local_30 = FUN_0001b768(local_28);
  uVar6 = FUN_0001b6e8(param_4);
  uVar6 = FUN_0001b5bc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,DAT_00023e80);
  local_44 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar3 = (undefined4)uVar6;
  local_34 = local_44;
  uVar6 = FUN_0001b6e8((param_1 << 8) >> 0x18);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar3,local_34);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(undefined4)local_30,local_30._4_4_);
  bVar1 = FUN_0001b72c();
  local_1c = (uint)bVar1;
  uVar6 = FUN_0001b768(local_24);
  local_34 = local_44;
  local_30 = uVar6;
  uVar6 = FUN_0001b6e8((param_1 << 0x10) >> 0x18);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar3,local_34);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(undefined4)local_30,local_30._4_4_);
  bVar1 = FUN_0001b72c();
  local_34 = (uint)bVar1;
  uVar6 = FUN_0001b768(local_20);
  uVar5 = local_44;
  local_40 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_38 = (undefined4)uVar6;
  local_30._0_4_ = uVar3;
  uVar6 = FUN_0001b6e8(param_1 & 0xff);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(undefined4)local_30,uVar5);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),local_38,local_40);
  uVar2 = FUN_0001b72c();
  FUN_0001e444(6,local_1c,0,auStack_60);
  FUN_0001e444(5,local_34,0,auStack_60);
  FUN_0001e444(4,uVar2,0,auStack_60);
  led_color_calibration(param_2,&local_28,&local_24,&local_20);
  uVar6 = FUN_0001b768(local_28);
  local_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_38 = (undefined4)uVar6;
  uVar6 = FUN_0001b6e8(param_5);
  uVar6 = FUN_0001b5bc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,DAT_00023e80);
  uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar3 = (undefined4)uVar6;
  local_44 = uVar5;
  uVar6 = FUN_0001b6e8((param_2 << 8) >> 0x18);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar3,uVar5);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),local_38,local_30._4_4_);
  bVar1 = FUN_0001b72c();
  local_1c = (uint)bVar1;
  local_30 = FUN_0001b768(local_24);
  uVar5 = local_44;
  uVar6 = FUN_0001b6e8((param_2 << 0x10) >> 0x18);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar3,uVar5);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(undefined4)local_30,local_30._4_4_);
  bVar1 = FUN_0001b72c();
  local_34 = (uint)bVar1;
  uVar6 = FUN_0001b768(local_20);
  uVar5 = local_44;
  local_40 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_30._0_4_ = uVar3;
  uVar7 = FUN_0001b6e8(param_2 & 0xff);
  uVar7 = FUN_0001b4ec((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(undefined4)local_30,uVar5);
  FUN_0001b4ec((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,local_40);
  uVar2 = FUN_0001b72c();
  FUN_0001e444(3,local_1c,0,auStack_60);
  FUN_0001e444(2,local_34,0,auStack_60);
  FUN_0001e444(1,uVar2,0,auStack_60);
  led_color_calibration(param_3,&local_28,&local_24,&local_20);
  local_30 = FUN_0001b768(local_28);
  uVar6 = FUN_0001b6e8(param_6);
  uVar6 = FUN_0001b5bc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,DAT_00023e80);
  uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar5 = (undefined4)uVar6;
  uVar6 = FUN_0001b6e8((param_3 << 8) >> 0x18);
  uVar6 = FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar5,uVar3);
  FUN_0001b4ec((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(undefined4)local_30,local_30._4_4_);
  bVar1 = FUN_0001b72c();
  local_1c = (uint)bVar1;
  uVar6 = FUN_0001b768(local_24);
  local_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar7 = FUN_0001b6e8((param_3 << 0x10) >> 0x18);
  uVar7 = FUN_0001b4ec((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar5,uVar3);
  FUN_0001b4ec((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,local_30._4_4_);
  bVar1 = FUN_0001b72c();
  local_34 = (uint)bVar1;
  uVar6 = FUN_0001b768(local_20);
  local_40 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar7 = FUN_0001b6e8(param_3 & 0xff);
  uVar7 = FUN_0001b4ec((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar5,uVar3);
  FUN_0001b4ec((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,local_40);
  uVar2 = FUN_0001b72c();
  FUN_0001e444(8,local_1c,0,auStack_60);
  FUN_0001e444(9,local_34,0,auStack_60);
  FUN_0001e444(7,uVar2,DAT_00023e84,auStack_60);
  iVar4 = aw9109_load_program(auStack_60,0x16);
  if ((iVar4 != 0) && (iVar4 = aw9109_run_program(), iVar4 != 0)) {
    iVar4 = 1;
  }
  return iVar4;
}


/* ---- FUN_00023e88 @ 00023e88 ---- */

int FUN_00023e88(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined auStack_74 [60];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uStack_24 = param_1;
  uStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_0001e71a(2);
  FUN_0001b1ce(auStack_74,0x3c);
  FUN_0001b1ce(auStack_74,0x3c);
  led_color_calibration(param_1,&local_38,&local_34,&local_30);
  uVar6 = FUN_0001b768(local_38);
  uVar8 = (undefined4)uVar6;
  uVar7 = FUN_0001b6e8(param_2);
  uVar7 = FUN_0001b5bc((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,DAT_00023fd8);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar3 = (undefined4)uVar7;
  uVar7 = FUN_0001b6e8((param_1 << 8) >> 0x18);
  uVar7 = FUN_0001b4ec((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar5);
  FUN_0001b4ec((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar8,(int)((ulonglong)uVar6 >> 0x20));
  bVar1 = FUN_0001b72c();
  local_28 = (uint)bVar1;
  uVar6 = FUN_0001b768(local_34);
  uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar7 = FUN_0001b6e8((param_1 << 0x10) >> 0x18);
  uVar7 = FUN_0001b4ec((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar5);
  FUN_0001b4ec((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,uVar8);
  bVar1 = FUN_0001b72c();
  local_2c = (uint)bVar1;
  uVar6 = FUN_0001b768(local_30);
  uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar7 = FUN_0001b6e8(param_1 & 0xff);
  uVar7 = FUN_0001b4ec((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar5);
  FUN_0001b4ec((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,uVar8);
  uVar2 = FUN_0001b72c();
  FUN_0001e338(6,local_28,local_1c,local_18,auStack_74);
  FUN_0001e338(3,local_28,local_1c,local_18,auStack_74);
  FUN_0001e338(8,local_28,local_1c,local_18,auStack_74);
  FUN_0001e338(5,local_2c,local_1c,local_18,auStack_74);
  FUN_0001e338(2,local_2c,local_1c,local_18,auStack_74);
  FUN_0001e338(9,local_2c,local_1c,local_18,auStack_74);
  FUN_0001e338(4,uVar2,local_1c,local_18,auStack_74);
  FUN_0001e338(1,uVar2,local_1c,local_18,auStack_74);
  FUN_0001e338(7,uVar2,local_1c,local_18,auStack_74);
  iVar4 = aw9109_load_program(auStack_74,0x3a);
  if ((iVar4 != 0) && (iVar4 = aw9109_run_program(), iVar4 != 0)) {
    iVar4 = 1;
  }
  return iVar4;
}


/* ---- FUN_00023fdc @ 00023fdc ---- */

int FUN_00023fdc(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00024070;
  if ((*(byte *)(DAT_00024070 + 8) | param_2) == 0) {
    iVar2 = 5;
  }
  else {
    if (param_2 == 0) {
      iVar1 = DAT_00024070 + 0x10;
    }
    else {
      iVar1 = 0;
    }
    iVar1 = FUN_0002a6c8(param_1,iVar1,param_3);
    FUN_00021fac(param_1,iVar1,0);
    if (param_4 != 0) {
      FUN_000217cc(param_1,iVar1);
    }
    if (iVar1 == 0x11) {
      FUN_0001f6dc(param_1,*(undefined *)(iVar2 + 3),param_2);
      FUN_0001f6dc(param_1,*(undefined *)(iVar2 + 2),param_3);
      iVar2 = 0;
    }
    else {
      if (iVar1 < 0x12) {
        if (iVar1 == 0) {
          return 0;
        }
        if (iVar1 == 8) {
          return 8;
        }
        if (iVar1 == 0xd) {
          return 0xd;
        }
      }
      else {
        if (iVar1 == 0x86) {
          FUN_0001f6dc(param_1,*(undefined *)(iVar2 + 3),param_2);
          FUN_0001f6dc(param_1,*(undefined *)(iVar2 + 2),param_3);
          return 0x86;
        }
        if (iVar1 + DAT_00024074 == 0) {
          return iVar1;
        }
      }
      iVar2 = 3;
    }
  }
  return iVar2;
}


/* ---- FUN_00024078 @ 00024078 ---- */

ulonglong FUN_00024078(uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_20 = &local_1c;
  if (param_2 == (undefined4 *)0x0) {
    software_interrupt(0x7e);
    return (ulonglong)param_1;
  }
  if ((*(byte *)param_2 & 1) == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  local_1c = CONCAT31((int3)((uint)param_3 >> 8),uVar1);
  uStack_18 = param_4;
  iVar2 = FUN_00022fdc(param_1);
  if (iVar2 == DAT_000240fc) {
    if ((*(byte *)param_2 & 1) == 0) {
      software_interrupt(0x7e);
      local_20 = (undefined4 *)0x0;
      FUN_00029cd0(param_1,iVar2,param_1 == 0,1);
      uVar3 = param_1;
    }
    else {
      uVar3 = FUN_000241c8(param_1,param_2);
      local_20 = param_2;
    }
  }
  else {
    uVar3 = FUN_00024100(param_1,param_2,param_3,iVar2);
  }
  if (uVar3 == 0) {
    FUN_00029ddc(param_1,local_1c & 0xff);
  }
  return CONCAT44(local_20,uVar3);
}


/* ---- FUN_00024100 @ 00024100 ---- */

uint FUN_00024100(uint param_1,byte *param_2,uint param_3,undefined4 param_4,char *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined auStack_34 [4];
  int local_30;
  undefined auStack_2c [8];
  uint local_24;
  byte *local_20;
  uint local_1c;
  undefined4 local_18;
  
  iVar2 = 0;
  iVar3 = 0;
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  uVar1 = FUN_000271d0(param_4,7,auStack_34);
  if (uVar1 == 0) {
    iVar2 = local_30 + 0x18;
    iVar3 = -((int)((uint)*(byte *)(local_30 + 0x44) << 0x1f) >> 0x1f);
    if (iVar3 != 0) {
      iVar2 = local_30 + 0x34;
    }
  }
  if ((((local_1c | uVar1) == 0) && (iVar2 != 0)) &&
     ((iVar3 != 0 || (iVar2 = FUN_00022ef0(iVar2 + 0x12), iVar2 != 0)))) {
    software_interrupt(0x85);
    *param_5 = '\0';
    uVar1 = local_24;
  }
  else if ((((uVar1 == 0) || (uVar1 == 5)) &&
           ((((*local_20 & 1) != 0 &&
             ((uVar1 = FUN_00027258(local_18,7,1,auStack_2c), uVar1 != 0 ||
              (uVar1 = FUN_00027484(local_18,7), uVar1 != 0)))) ||
            (software_interrupt(0x7e), uVar1 = local_24, local_24 != 0)))) &&
          ((iVar2 = FUN_00027360(local_18,7), iVar2 != 0 && (iVar2 != 5)))) {
    uVar1 = 3;
  }
  FUN_00029cd0(local_24,local_18,uVar1 == 0,*param_5 != '\0',0);
  return uVar1;
}


/* ---- FUN_000241c8 @ 000241c8 ---- */

undefined8 FUN_000241c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = param_3;
  uStack_18 = param_4;
  iVar1 = FUN_0002718c();
  if (iVar1 == DAT_00024238) {
    iVar2 = 3;
    uVar5 = 0;
  }
  else {
    iVar2 = FUN_00027258(iVar1,7,1,&uStack_1c,param_2);
    if ((((iVar2 != 0) || (iVar2 = FUN_00027484(iVar1,7), iVar2 != 0)) ||
        (software_interrupt(0x7e), iVar2 = param_1, param_1 != 0)) &&
       ((iVar3 = FUN_00027360(iVar1,7), iVar3 != 0 && (iVar3 != 5)))) {
      iVar2 = 3;
    }
    uVar5 = 1;
    if (iVar2 == 0) {
      uVar4 = 1;
      goto LAB_00024224;
    }
  }
  uVar4 = 0;
LAB_00024224:
  FUN_00029cd0(param_1,iVar1,uVar4,1);
  return CONCAT44(uVar5,iVar2);
}


/* ---- FUN_0002423c @ 0002423c ---- */

void FUN_0002423c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = DAT_00024284;
  uVar4 = param_2;
  uVar5 = param_3;
  iVar2 = FUN_0001f6b8(param_1,*DAT_00024284);
  if ((iVar2 != 0) && (iVar2 = FUN_00022fdc(param_1), iVar2 != DAT_00024288)) {
    iVar3 = FUN_0001f6b8(param_1,puVar1[1]);
    if (iVar3 == 0) {
      FUN_0002163c(param_1,param_2,param_3);
      return;
    }
    FUN_00026e28(param_1,iVar2,param_2,param_3,param_1,uVar4,uVar5);
  }
  return;
}


/* ---- FUN_0002428c @ 0002428c ---- */

void FUN_0002428c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_30;
  undefined2 local_2c [8];
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = param_1;
  iVar1 = FUN_0001f6a0(param_1);
  if (iVar1 != 0) {
    FUN_0001f494(&local_30);
    for (uVar4 = 0; uVar4 < local_30; uVar4 = uVar4 + 1) {
      iVar2 = FUN_0001f6b8(local_2c[uVar4],local_18);
      iVar1 = DAT_000242e4;
      if (iVar2 != 0) {
        local_1c = FUN_0001f6b8(local_2c[uVar4],*(undefined *)(DAT_000242e4 + 2));
        uVar3 = FUN_0001f6b8(local_2c[uVar4],*(undefined *)(iVar1 + 3));
        FUN_00023fdc(local_2c[uVar4],uVar3,local_1c,1);
      }
    }
  }
  return;
}


/* ---- FUN_000242e8 @ 000242e8 ---- */

undefined4 FUN_000242e8(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  byte bVar14;
  
  pbVar3 = DAT_0002438c;
  piVar5 = *(int **)(DAT_0002438c + -0xc);
  uVar11 = *(undefined4 *)(DAT_0002438c + -8);
  uVar10 = (uint)*DAT_0002438c;
  bVar14 = DAT_0002438c[-0xd];
  bVar1 = DAT_0002438c[1];
  piVar6 = piVar5;
  do {
    while( true ) {
      pbVar4 = DAT_0002438c;
      if (bVar1 == uVar10) {
        *(undefined4 *)(DAT_0002438c + -8) = uVar11;
        *(int **)(pbVar4 + -0xc) = piVar6;
        pbVar4[-0xd] = bVar14;
        if (piVar6 == piVar5) {
          return 0;
        }
        return 1;
      }
      pcVar7 = (char *)(*(int *)(pbVar3 + 4) + uVar10 * 0x18);
      uVar10 = uVar10 + 1 & 0xff;
      if (pbVar3[2] == uVar10) {
        uVar10 = 0;
      }
      cVar2 = *pcVar7;
      if (cVar2 == '\x02') break;
      if (cVar2 == '\x03') {
        for (; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[7]) {
          *(undefined *)(piVar6 + 4) = 0;
        }
      }
    }
    piVar9 = piVar6;
    piVar12 = piVar6;
    while (piVar8 = piVar9, piVar8 != (int *)0x0) {
      if (piVar8 == *(int **)(pcVar7 + 4)) {
        if (piVar8 != (int *)0x0) {
          if ((piVar12 == piVar8) && (piVar6 = (int *)piVar6[7], piVar6 == (int *)0x0)) {
            *(undefined4 *)(DAT_00024390 + 8) = 1;
            uVar11 = 0;
            bVar14 = 1;
          }
          iVar13 = *piVar8;
          piVar9 = (int *)piVar8[7];
          piVar12[7] = (int)piVar9;
          if (piVar9 != (int *)0x0) {
            *piVar9 = *piVar9 + iVar13;
          }
        }
        break;
      }
      piVar12 = piVar8;
      piVar9 = (int *)piVar8[7];
    }
  } while( true );
}


/* ---- FUN_00024394 @ 00024394 ---- */

undefined4 FUN_00024394(int *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  
  iVar1 = DAT_00024448;
  iVar2 = *(int *)(DAT_00024448 + 4);
  do {
    if (param_1 == (int *)0x0) {
      do {
        if (*(char *)(DAT_00024448 + 0x10) == *(char *)(DAT_00024448 + 0x11)) {
          if (*(int *)(iVar1 + 4) != iVar2) {
            return 1;
          }
          return 0;
        }
LAB_000243ac:
        iVar6 = DAT_00024448;
        pbVar3 = (byte *)(DAT_00024448 + 0x10);
        uVar5 = *pbVar3 + 1;
        pcVar7 = (char *)(*(int *)(DAT_00024448 + 0x14) + (uint)*pbVar3 * 0x18);
        *pbVar3 = (byte)uVar5;
        if ((uVar5 & 0xff) == (uint)*(byte *)(iVar6 + 0x12)) {
          *pbVar3 = 0;
        }
        piVar4 = *(int **)(pcVar7 + 4);
      } while ((*pcVar7 != '\x01') || (*(char *)(piVar4 + 4) != '\0'));
      piVar4[1] = *(int *)(pcVar7 + 8);
      piVar4[2] = *(int *)(pcVar7 + 0xc);
      piVar4[3] = *(int *)(pcVar7 + 0x10);
      piVar4[6] = *(int *)(pcVar7 + 0x14);
      piVar8 = param_1;
      if (*(char *)(iVar1 + 3) != '\0') {
        piVar4[1] = 0;
      }
    }
    else {
      if (param_1 == (int *)0x0) goto LAB_000243ac;
      piVar8 = (int *)param_1[7];
      piVar4 = param_1;
    }
    uVar5 = piVar4[1] - *(int *)(iVar1 + 8) & 0xffffff;
    if (uVar5 < DAT_0002444c) {
      iVar6 = uVar5 + piVar4[2];
LAB_00024412:
      *piVar4 = iVar6;
    }
    else {
      uVar5 = *(int *)(iVar1 + 8) - piVar4[1] & 0xffffff;
      if (uVar5 < (uint)piVar4[2]) {
        iVar6 = piVar4[2] - uVar5;
        goto LAB_00024412;
      }
      *piVar4 = 0;
    }
    piVar4[1] = 0;
    piVar4[2] = 0;
    *(undefined *)(piVar4 + 4) = 1;
    piVar4[7] = 0;
    FUN_0002ae58();
    param_1 = piVar8;
  } while( true );
}


/* ---- FUN_00024450 @ 00024450 ---- */

void FUN_00024450(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 == DAT_000244bc) {
    return;
  }
  iVar1 = FUN_000229dc(param_1);
  if ((iVar1 == 0) || (iVar1 == 0xb)) {
    FUN_00022fdc(param_1);
  }
  else {
    if (iVar1 == 0x11) {
      uVar2 = 1;
      goto LAB_000244ac;
    }
    if (iVar1 + DAT_000244c0 == 0) goto LAB_000244ac;
    FUN_00022fdc(param_1);
  }
  FUN_00021800();
LAB_000244ac:
  FUN_0001f6dc(param_1,*(undefined *)(DAT_000244c4 + 2),uVar2);
  return;
}


/* ---- FUN_000244c8 @ 000244c8 ---- */

void FUN_000244c8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  debug_printf_stub(s_local_db_update_in_evt__d_00024544,param_1);
  iVar1 = FUN_00022a48(param_1);
  if (iVar1 == 0x11) {
    uVar2 = 1;
    goto LAB_00024530;
  }
  if (iVar1 < 0x12) {
    if ((iVar1 == 0) || (iVar1 == 0xc)) goto LAB_0002451a;
LAB_000244f8:
    FUN_00022fdc(param_1);
  }
  else {
    if (iVar1 != 0x86) {
      if (iVar1 + DAT_00024560 == 0) goto LAB_00024530;
      goto LAB_000244f8;
    }
LAB_0002451a:
    FUN_00022fdc(param_1);
  }
  FUN_00021800();
LAB_00024530:
  FUN_0001f6dc(param_1,*(undefined *)(DAT_00024564 + 1),uVar2);
  return;
}


/* ---- FUN_00024568 @ 00024568 ---- */

bool FUN_00024568(byte *param_1,byte param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint local_18;
  
  bVar1 = false;
  if ((*param_1 & param_2) == 0) {
    local_18 = param_4 & 0xffffff00;
    FUN_0001ddb4(&local_18);
    bVar1 = (*param_1 & param_2) == 0;
    if (bVar1) {
      *param_1 = *param_1 | param_2;
    }
    FUN_0001ddf0(local_18 & 0xff);
  }
  return bVar1;
}


/* ---- FUN_0002459a @ 0002459a ---- */

undefined8 FUN_0002459a(int param_1,int param_2)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined local_26;
  undefined local_24 [24];
  
  FUN_0001b19c(param_1 + 2,param_2 + 2,6);
  FUN_0001b1ce(local_48,0x1c);
  local_48[0] = local_48[0] & 0xf7 | 2;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_26 = *(undefined *)(param_1 + 0x5a);
  local_28 = 0xff01;
  local_2c = 0x20011;
  FUN_0001b1ce(local_24,0x14);
  software_interrupt(0xa2);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 0x20));
}


/* ---- FUN_00024630 @ 00024630 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00024748) */
/* WARNING: Removing unreachable block (ram,0x00024748) */

void FUN_00024630(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char local_28 [32];
  undefined4 uStack_8;
  
  FUN_000213d8();
  FUN_00020b78();
  FUN_000286e0(s_System_start__0002478c);
  FUN_0002c9bc();
  FUN_00021f34();
  FUN_0001fc3c();
  FUN_0001da0c();
  iVar3 = FUN_0001d8f4();
  FUN_0001b1ce(DAT_000247a0,0x54);
  iVar2 = DAT_000247a0;
  *(undefined *)(DAT_000247a0 + 8) = 1;
  *(undefined *)(iVar2 + 9) = 0xff;
  *(undefined *)(iVar2 + 0x1b) = 0;
  *(undefined *)(iVar2 + 0x2e) = 0;
  *(undefined *)(iVar2 + 0x2f) = 0;
  *(undefined *)(iVar2 + 0x30) = 0;
  *(undefined *)(iVar2 + 0x31) = 0;
  *(undefined *)(iVar2 + 0x50) = 0;
  *(undefined *)(iVar2 + 0x51) = 0;
  FUN_0002c378();
  FUN_0001c940();
  FUN_0001e958();
  FUN_00024878();
  FUN_00020900();
  FUN_000286a0();
  FUN_0002b39c();
  FUN_0001e50a();
  FUN_0002bfb4();
  FUN_0001fb78();
  FUN_00024fac(1);
  iVar4 = DAT_000247a4;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (iVar3 != 0) {
    FUN_0001db28();
  }
  FUN_000208dc();
  if (*(char *)(iVar2 + 0x50) != '\x01') {
    iVar4 = FUN_000228f8();
    if (iVar4 == 1) {
      FUN_00028c70();
    }
    else if (iVar4 == 2) {
      FUN_00028b60();
    }
    else if (iVar4 == 0) {
      FUN_0001cf18();
    }
  }
  *(uint *)(DAT_000247b0 + 0x10) = *(uint *)(DAT_000247b0 + 0x10) | 4;
  software_interrupt(0x3d);
  FUN_000286e0(s_powerSource___x_000247b4,uStack_8);
  software_interrupt(0x3e);
  iVar4 = 0;
  do {
    local_28[iVar4] = (char)iVar4 + '\x01';
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x16);
  if ((*(char *)(iVar2 + 0x50) == '\x01') &&
     ((*(char *)(iVar2 + 8) == -0x79 || (*(char *)(iVar2 + 8) == -0x80)))) {
    FUN_00028b8c();
  }
                    /* WARNING: Could not recover jumptable at 0x00024748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (*(byte *)(iVar2 + 0x31) - 0x11 < (uint)DAT_0002474c) {
    pbVar1 = (byte *)(*(byte *)(iVar2 + 0x31) + 0x2473c);
  }
  else {
    pbVar1 = (byte *)(DAT_0002474c + 0x2474d);
  }
  (*(code *)((uint)*pbVar1 * 2 + 0x2474d))();
  return;
}


/* ---- FUN_000247c8 @ 000247c8 ---- */

undefined4 FUN_000247c8(undefined2 *param_1,int param_2,ushort *param_3,uint param_4)

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
    sVar2 = FUN_0002b86c(*param_1,(uint)(ushort)(uVar1 + 1) + param_2);
    uVar1 = *param_3;
    *param_3 = sVar2 + uVar1;
    if (param_1[2] != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        return 7;
      }
      FUN_0001b19c((uint)(ushort)(sVar2 + uVar1) + param_2);
      *param_3 = *param_3 + param_1[2];
    }
    return 0;
  }
  return 0xc;
}


/* ---- FUN_00024830 @ 00024830 ---- */

void FUN_00024830(void)

{
  FUN_0002ca44(0x21,0xd);
  FUN_0002ca44(0x2a,6);
  FUN_0002ca44(0x2b,0xc);
  FUN_0002ca44(0x19,0x10);
  FUN_0002ca44(0x16,0x90);
  return;
}


/* ---- FUN_0002485c @ 0002485c ---- */

void FUN_0002485c(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00029598();
  FUN_0002ca44(param_1,param_3 & param_2 | uVar1 & ~param_2);
  return;
}


/* ---- FUN_00024878 @ 00024878 ---- */

void FUN_00024878(void)

{
  int iVar1;
  undefined auStack_18 [8];
  undefined local_10;
  
  FUN_0001b19c(auStack_18,DAT_000248a8,0x14);
  local_10 = 1;
  iVar1 = FUN_0001d724(DAT_000248a8 + -0x14,auStack_18,0);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0xb1,s__________bsp_bsp_bond_c_000248ac);
  }
  return;
}


/* ---- motor_pwm_set_duty @ 000248c4 ---- */
/* app_pwm 5000 us period, duty = strength % */

/* app_pwm 5000 us period, duty = strength % */

undefined4 motor_pwm_set_duty(uint param_1)

{
  int iVar1;
  
  if ((param_1 < 0x65) && (param_1 != 0)) {
    if (*DAT_000248fc == '\0') {
      *DAT_000248fc = '\x01';
      FUN_0001d6ac(DAT_00024900);
    }
    do {
      iVar1 = FUN_0001d470(DAT_00024900,0,param_1);
    } while (iVar1 == 0x11);
    return 1;
  }
  return 0;
}


/* ---- motor_pwm_stop @ 00024904 ---- */

void motor_pwm_stop(void)

{
  if (*DAT_0002491c != '\0') {
    *DAT_0002491c = '\0';
    FUN_0001d624(DAT_00024920);
  }
  return;
}


/* ---- FUN_00024924 @ 00024924 ---- */

void FUN_00024924(void)

{
  int iVar1;
  
  if (*(char *)(DAT_0002494c + 2) == '\0') {
    *(undefined *)(DAT_0002494c + 2) = 1;
    iVar1 = app_timer_start(*(undefined4 *)(DAT_00024954 + 8),DAT_00024950,0);
    if (iVar1 != 0) {
      app_error_handler(iVar1,DAT_00024978,s__________application_user_ble_c_00024958);
    }
  }
  return;
}


/* ---- FUN_0002497c @ 0002497c ---- */

longlong FUN_0002497c(byte *param_1,int param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  ushort local_18 [2];
  
  puVar5 = local_18;
  uVar4 = (uint)*param_1;
  if ((uVar4 == 1) && (param_1[1] == 0)) {
    iVar3 = 7;
    puVar5 = (ushort *)0x1;
LAB_000249a0:
    return CONCAT44(puVar5,iVar3);
  }
  uVar2 = (uint)*param_3;
  if ((uVar2 + 2 <= param_4) && ((uVar4 != 1 || (uVar4 = uVar2 + param_1[1] + 2, uVar4 <= param_4)))
     ) {
    uVar2 = (param_4 - uVar2) - 2;
    local_18[0] = (ushort)uVar2;
    iVar3 = (uint)*param_3 + param_2 + 2;
    software_interrupt(0x7d);
    if (iVar3 != 0) goto LAB_000249a0;
    if (*param_1 == 2) {
      uVar4 = 9;
    }
    else {
      uVar4 = 8;
      if ((*param_1 == 1) && ((uint)param_1[1] <= (uVar2 & 0xffff))) {
        local_18[0] = (ushort)param_1[1];
      }
    }
    if (local_18[0] < 0xff) {
      *(char *)(param_2 + (uint)*param_3) = (char)local_18[0] + '\x01';
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(char *)(param_2 + (uint)(ushort)(uVar1 + 1)) = (char)uVar4;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *param_3 = uVar1 + 1 + local_18[0];
      return (ulonglong)local_18[0] << 0x20;
    }
  }
  return CONCAT44(uVar4,0xc);
}


/* ---- FUN_00024a1c @ 00024a1c ---- */

int FUN_00024a1c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_00024a6c;
  iVar4 = 0xff;
  if ((param_2 != 0) && (param_1 != DAT_00024a6c)) {
    FUN_0001f6dc(param_1,*(undefined *)(DAT_00024a70 + 1),1,param_4,param_4);
    iVar4 = FUN_00022928(param_1);
    if ((iVar4 != 0xff) || (iVar4 = FUN_00022960(), iVar4 != 0xff)) {
      iVar2 = DAT_00024a74;
      iVar3 = iVar4 * 0xc + DAT_00024a74;
      *(short *)(iVar3 + 2) = (short)param_1;
      *(short *)(iVar2 + iVar4 * 0xc) = (short)iVar1;
      FUN_0001b19c(iVar3 + 4,param_2,7);
    }
  }
  return iVar4;
}


/* ---- FUN_00024a78 @ 00024a78 ---- */

uint FUN_00024a78(uint param_1,undefined4 param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = DAT_00024aa8;
  if (param_1 == DAT_00024aa8) {
    uVar2 = 0;
  }
  else {
    uVar2 = (short)param_1 + 1;
  }
  uVar4 = (uint)uVar2;
  while( true ) {
    if (0xff < uVar4) {
      return uVar1;
    }
    iVar3 = FUN_00028118(param_2,uVar4);
    if (iVar3 != 0) break;
    uVar4 = uVar4 + 1 & 0xffff;
  }
  return uVar4;
}


/* ---- FUN_00024aac @ 00024aac ---- */

void FUN_00024aac(ushort *param_1)

{
  ushort uVar1;
  undefined auStack_28 [32];
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    FUN_000286e0(DAT_00024b48,*(undefined4 *)(DAT_00024b44 + *(int *)(param_1 + 2) * 4));
  }
  else if (*(int *)(param_1 + 2) == 0) {
    if (0x1d < uVar1) {
      *param_1 = 0x1e;
    }
    FUN_0001b19c(auStack_28,*(undefined4 *)(param_1 + 4),*param_1);
    debug_printf_stub(s_APP_NAME__d__s_00024b34,*param_1,auStack_28);
    FUN_0002abd8(auStack_28,*param_1);
  }
  else if (*(int *)(param_1 + 2) == 1) {
    if (0x1d < uVar1) {
      *param_1 = 0x1e;
    }
    FUN_0001b19c(auStack_28,*(undefined4 *)(param_1 + 4),*param_1);
    FUN_000286e0(s_APP_TITLE__d__s_00024b20,*param_1,auStack_28);
    FUN_0002ab54(auStack_28,*param_1);
  }
  return;
}


/* ---- FUN_00024b4c @ 00024b4c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00024b4c(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = _DAT_00024c04;
  debug_printf_stub(s_Notification_ancsConnect__d_msgB_00024c07 + 1,*_DAT_00024c04,_DAT_00024c04[1])
  ;
  debug_printf_stub(s_Event___s_00024c3c,
                    *(undefined4 *)(pcVar1 + (uint)*(byte *)(param_1 + 1) * 4 + 0x50));
  debug_printf_stub(s_Category_ID___s_00024c50,
                    *(undefined4 *)(pcVar1 + (uint)*(byte *)((int)param_1 + 6) * 4 + 0x20));
  debug_printf_stub(s_Category_Cnt__u_00024c64,*(undefined *)((int)param_1 + 7));
  debug_printf_stub(s_UID___u_00024c78,*param_1);
  debug_printf_stub(s_Flags__00024c8c);
  if (*pcVar1 == '\0') {
    pcVar1[1] = '\x04';
    FUN_00024924();
  }
  if (pcVar1[1] == '\0') {
    debug_printf_stub(s_mes_get_____00024c98);
    iVar2 = FUN_00024eb8(_DAT_00024ca8,_DAT_00024c04 + 0x18);
    if (iVar2 != 0) {
      app_error_handler(iVar2,0x1ef,s__________application_user_ble_c_00024cab + 1);
    }
  }
  if ((*(byte *)((int)param_1 + 5) & 1) != 0) {
    FUN_000286e0(s_Silent_00024ccc);
  }
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1e) < 0) {
    FUN_000286e0(s_Important_00024cd8);
  }
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1d) < 0) {
    FUN_000286e0(s_Pre_existing_00024ce8);
  }
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1c) < 0) {
    FUN_000286e0(s_Positive_Action_00024cfc);
  }
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1b) < 0) {
    FUN_000286e0(s_Negative_Action_00024d10);
  }
  return;
}


/* ---- FUN_00024d24 @ 00024d24 ---- */

uint FUN_00024d24(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_000286e0(s_notify_event_to_app_00024d68);
  iVar1 = DAT_00024d80;
  uVar2 = 0;
  if ((*(ushort *)(DAT_00024d80 + 0x2a) != DAT_00024d84) &&
     (uVar2 = FUN_0001f2d0(DAT_00024d80 + -0x80,param_1), uVar2 == DAT_00024d88)) {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x2a);
    software_interrupt(0xa9);
    if (uVar2 != 0) {
      app_error_handler(uVar2,0x13e,s__________application_app_misc_c_00024d8c,1);
    }
  }
  return uVar2;
}


/* ---- post_state_event @ 00024dac ---- */

uint post_state_event(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_00024de8;
  uVar2 = 0;
  if ((*(ushort *)(DAT_00024de8 + 0x2a) != DAT_00024dec) &&
     (uVar2 = FUN_0001f324(DAT_00024de8 + -0x80,param_1), uVar2 == DAT_00024df0)) {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x2a);
    software_interrupt(0xa9);
    if (uVar2 != 0) {
      app_error_handler(uVar2,0x1a3,s__________application_app_misc_c_00024df4,2);
    }
  }
  return uVar2;
}


/* ---- FUN_00024e14 @ 00024e14 ---- */

int FUN_00024e14(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + DAT_00024e24);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_00024e28 @ 00024e28 ---- */

uint FUN_00024e28(uint param_1,int param_2)

{
  return 1 << (param_1 & 7) & (uint)*(byte *)(param_2 + (param_1 >> 3));
}


/* ---- FUN_00024e38 @ 00024e38 ---- */

undefined4 FUN_00024e38(int param_1,int param_2,int param_3,uint param_4)

{
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0xe;
  }
  if ((param_4 != 0) && (param_4 < 0x21)) {
    param_1 = param_2 * 0x10 + param_1;
    *(undefined *)(param_1 + 0xbc) = 1;
    *(short *)(param_1 + 0xc4) = (short)param_4;
    *(int *)(param_1 + 200) = param_3;
    return 0;
  }
  return 9;
}


/* ---- FUN_00024e68 @ 00024e68 ---- */

undefined4 FUN_00024e68(int param_1,int param_2,int param_3,uint param_4)

{
  if (param_3 == 0) {
    return 0xe;
  }
  if ((param_4 != 0) && (param_4 < 0x21)) {
    param_1 = param_2 * 0x10 + param_1;
    *(undefined *)(param_1 + 0x3c) = 1;
    *(short *)(param_1 + 0x44) = (short)param_4;
    *(int *)(param_1 + 0x48) = param_3;
    return 0;
  }
  return 9;
}


/* ---- FUN_00024eb8 @ 00024eb8 ---- */

void FUN_00024eb8(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001f1aa(param_2);
  if (iVar1 == 0) {
    FUN_0001f118(param_1,*param_2);
    *(undefined *)(param_1 + 0xdc) = 0;
  }
  return;
}


/* ---- FUN_00024ed8 @ 00024ed8 ---- */

int FUN_00024ed8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40000000);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_00024ee8 @ 00024ee8 ---- */

undefined4 FUN_00024ee8(int param_1)

{
  if ((*(uint *)(DAT_00024f00 + 0xc) & DAT_00024f04) == param_1 + DAT_00024f04 * 0x10000) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00024f08 @ 00024f08 ---- */

void FUN_00024f08(int param_1)

{
  if (param_1 != 0) {
    do {
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* ---- FUN_00024f38 @ 00024f38 ---- */

void FUN_00024f38(int param_1)

{
  if (param_1 != 0) {
    do {
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* ---- FUN_00024f68 @ 00024f68 ---- */

int FUN_00024f68(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = DAT_00024fa8;
  puVar1 = DAT_00024fa4;
  uVar4 = *DAT_00024fa4;
  iVar3 = 0;
  if ((int)(uVar4 << 0x1d) < 0) {
    if (-1 < (int)(uVar4 << 0x1e)) {
      *DAT_00024fa4 = uVar4 | 1;
      iVar3 = FUN_00022018(uVar2,param_1,param_2,param_3);
      uVar4 = *puVar1;
      if (iVar3 == 0) {
        uVar4 = uVar4 | 1;
      }
      else {
        uVar4 = uVar4 & 0xfffffffe;
      }
      *puVar1 = uVar4;
      return iVar3;
    }
    iVar3 = 10;
  }
  return iVar3;
}


/* ---- FUN_00024fac @ 00024fac ---- */

undefined4 FUN_00024fac(void)

{
  *DAT_00024fbc = 4;
  FUN_00025014();
  return 0;
}


/* ---- FUN_00024fc0 @ 00024fc0 ---- */

int FUN_00024fc0(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = DAT_00024ff8;
  uVar3 = *DAT_00024ff8;
  if (-1 < (int)(uVar3 << 0x1d)) {
    return 0;
  }
  if ((int)(uVar3 << 0x1e) < 0) {
    iVar2 = 10;
  }
  else {
    *DAT_00024ff8 = uVar3 | 1;
    iVar2 = FUN_00022294(DAT_00024ffc,param_1,param_2,param_3,param_4);
    if (iVar2 == 0) {
      *puVar1 = *puVar1 | 1;
      return 0;
    }
  }
  return iVar2;
}


/* ---- FUN_00025000 @ 00025000 ---- */

void FUN_00025000(void)

{
  FUN_0002138c(DAT_00025010,0x58,0);
  return;
}


/* ---- FUN_00025014 @ 00025014 ---- */

void FUN_00025014(void)

{
  int *piVar1;
  int iVar2;
  
  *DAT_0002505c = 0;
  FUN_0001b19c(DAT_00025064,DAT_00025060,0x15c);
  piVar1 = DAT_00025064;
  if ((*DAT_00025064 == -1) || (iVar2 = FUN_00025000(), *piVar1 != iVar2)) {
    FUN_0001b1ce(DAT_00025064,0x15c);
    piVar1[1] = 1;
    iVar2 = FUN_0002506c(0);
    if (iVar2 != 0) {
      app_error_handler(iVar2,199,DAT_00025068);
    }
  }
  return;
}


/* ---- FUN_0002506c @ 0002506c ---- */

undefined4 FUN_0002506c(undefined4 param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar1 = DAT_000250cc;
  while (*pcVar1 != '\0') {
    FUN_000213dc();
  }
  *pcVar1 = '\x01';
  *(undefined4 *)(pcVar1 + 4) = param_1;
  do {
    FUN_0002c962();
    iVar3 = FUN_00024f68(DAT_000250d0,1,0);
  } while (iVar3 == 7);
  if (iVar3 == 0) {
    uVar4 = FUN_00025000();
    puVar2 = DAT_000250d4;
    *DAT_000250d4 = uVar4;
    FUN_0001b19c(puVar2 + -0x57);
    do {
      FUN_0002c962();
      iVar3 = FUN_00024fc0(DAT_000250d0,DAT_000250dc,0x57,DAT_000250d8);
    } while (iVar3 == 7);
    if (iVar3 == 0) {
      return 0;
    }
  }
  *pcVar1 = '\0';
  return 3;
}


/* ---- FUN_000250e0 @ 000250e0 ---- */

void FUN_000250e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_000250fc;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(iVar2 + 4);
  if (iVar1 != 0) {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 4);
    } while (iVar1 != 0);
    *(int *)(iVar2 + 4) = param_1;
    return;
  }
  *(int *)(iVar2 + 4) = param_1;
  return;
}


/* ---- FUN_00025100 @ 00025100 ---- */

undefined4 FUN_00025100(undefined *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = DAT_00025134;
  if (*(char *)((int)DAT_00025134 + 0x12) != '\0') {
    return 8;
  }
  *DAT_00025138 = 0;
  if (param_2 != 0) {
    if (param_1 == (undefined *)0x0) {
      param_1 = DAT_0002513c;
    }
    FUN_000253a4(7,*param_1);
  }
  *piVar1 = param_2;
  *(undefined *)((int)piVar1 + 0x12) = 1;
  return 0;
}


/* ---- FUN_00025140 @ 00025140 ---- */

undefined4 FUN_00025140(undefined4 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = DAT_00025194;
  if (*(char *)(DAT_00025194 + 0x12) != '\x02') {
    *(undefined *)(DAT_00025194 + 0x12) = 2;
    puVar2 = DAT_00025198;
    DAT_00025198[1] = *param_1;
    *puVar2 = 1;
    iVar3 = DAT_0002519c;
    *(undefined4 *)(DAT_0002519c + 8) = 1;
    *DAT_000251a0 = 1;
    if (param_2 == (undefined2 *)0x0) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 4) = 1;
    }
    else {
      do {
        iVar3 = FUN_00024e14(0x100);
      } while (iVar3 == 0);
      *DAT_000251a4 = 0;
      *param_2 = (short)puVar2[2];
      *puVar2 = 0;
      *(undefined *)(iVar1 + 0x12) = 1;
    }
    return 0;
  }
  return 0x11;
}


/* ---- FUN_000251a8 @ 000251a8 ---- */

int FUN_000251a8(void)

{
  int iVar1;
  int in_r3;
  
  iVar1 = FUN_0002a974();
  if (iVar1 != 0) {
    software_interrupt(0x4b);
    if (in_r3 != 0) {
      in_r3 = 1;
    }
    return in_r3;
  }
  iVar1 = FUN_00024ee8(1);
  return iVar1;
}


/* ---- FUN_000251c8 @ 000251c8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000251c8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00025234;
  if (*(char *)(DAT_00025234 + 1) == '\0') {
    FUN_0001ddb4();
    if (param_1 != 0) {
      FUN_000233d6(DAT_00025234 + 8,param_1);
    }
    if (*(int *)(iVar1 + 4) == 0) {
      iVar2 = FUN_0002a974();
      if (iVar2 == 0) {
        *DAT_00025238 = 0;
        *(undefined4 *)(DAT_0002523c + 4) = 1;
        _DAT_40000000 = 1;
      }
      else {
        software_interrupt(0x49);
      }
    }
  }
  else {
    if (param_1 != 0) {
      (**(code **)(param_1 + 4))(0);
    }
    FUN_0001ddb4();
  }
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  FUN_0001ddf0(0);
  return;
}


/* ---- FUN_00025240 @ 00025240 ---- */

undefined4 FUN_00025240(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = DAT_0002527c;
  uVar3 = 0;
  if (*DAT_0002527c == '\0') {
    *(undefined4 *)(DAT_0002527c + 8) = 0;
    *(undefined4 *)(pcVar1 + 4) = 0;
    *(undefined4 *)(pcVar1 + 0x10) = 0;
    *(undefined4 *)(pcVar1 + 0xc) = 0;
    if ((*DAT_00025280 & 1) == 0) {
      FUN_000253a4(0,3);
    }
    iVar2 = FUN_0002a974();
    if (iVar2 == 0) {
      *(undefined4 *)(DAT_00025284 + 0x18) = 1;
    }
    *pcVar1 = '\x01';
  }
  else {
    uVar3 = 0x85;
  }
  return uVar3;
}


/* ---- FUN_00025288 @ 00025288 ---- */

uint FUN_00025288(void)

{
  int iVar1;
  
  iVar1 = FUN_0002a974();
  if (iVar1 != 0) {
    return 1;
  }
  return (uint)(*(int *)(DAT_000252a0 + 0x18) << 0xf) >> 0x1f;
}


/* ---- FUN_000252a4 @ 000252a4 ---- */

void FUN_000252a4(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00025304;
  if (*(char *)(DAT_00025304 + 2) == '\0') {
    FUN_0001ddb4();
    if (param_1 != 0) {
      FUN_000233d6(DAT_00025304 + 0x10,param_1);
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      *DAT_00025308 = 0;
      *(undefined4 *)(DAT_0002530c + 4) = 2;
      DAT_00025308[-0x3f] = 1;
    }
  }
  else {
    if (param_1 != 0) {
      (**(code **)(param_1 + 4))(1);
    }
    FUN_0001ddb4();
  }
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  FUN_0001ddf0(0);
  return;
}


/* ---- FUN_00025310 @ 00025310 ---- */

void FUN_00025310(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_00024ed8(0x100);
  iVar2 = DAT_0002535c;
  iVar1 = DAT_00025358;
  if (iVar3 != 0) {
    *DAT_00025360 = 0;
    *(undefined4 *)(iVar1 + 8) = 1;
    *(undefined *)(iVar2 + 1) = 1;
    FUN_00020b50(0);
  }
  iVar3 = FUN_00024ed8(0x104);
  if (iVar3 != 0) {
    DAT_00025360[1] = 0;
    *(undefined4 *)(iVar1 + 8) = 2;
    *(undefined *)(iVar2 + 2) = 1;
    FUN_00020b50(1);
  }
  return;
}


/* ---- FUN_00025364 @ 00025364 ---- */

void FUN_00025364(void)

{
  char *pcVar1;
  uint in_r3;
  uint local_10;
  
  local_10 = in_r3 & 0xffffff00;
  FUN_0001ddb4(&local_10);
  pcVar1 = DAT_00025394;
  if (*DAT_00025394 == '\0') {
    FUN_00025240();
  }
  *(int *)(pcVar1 + 0xc) = *(int *)(pcVar1 + 0xc) + 1;
  pcVar1[2] = '\x01';
  FUN_0001ddf0(local_10 & 0xff);
  return;
}


/* ---- FUN_00025398 @ 00025398 ---- */

void FUN_00025398(int param_1)

{
  if (param_1 == 0) {
    FUN_00020b50();
  }
  return;
}


/* ---- FUN_000253a4 @ 000253a4 ---- */

void FUN_000253a4(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  uVar2 = (param_1 << 0x1e) >> 0x1b;
  uVar1 = 0xff << uVar2;
  uVar2 = ((uint)(param_2 << 0x1e) >> 0x18) << uVar2;
  if ((int)param_1 < 0) {
    iVar3 = ((param_1 & 0xf) - 8 & 0xfffffffc) + DAT_000253f4;
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & ~uVar1 | uVar2;
  }
  else {
    puVar4 = (uint *)((param_1 & 0xfffffffc) + DAT_000253f8);
    *puVar4 = *puVar4 & ~uVar1 | uVar2;
  }
  iVar3 = 1 << (param_1 & 0x1f);
  *DAT_000253fc = iVar3;
  *DAT_00025400 = iVar3;
  return;
}


/* ---- FUN_00025404 @ 00025404 ---- */

void FUN_00025404(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00027a4c();
  if (iVar1 == 0) {
    iVar1 = FUN_00027a64(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_000209b0(param_1);
      iVar1 = uVar2 * 4 + DAT_00025444;
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xfffffffe;
      *(int *)(DAT_00025448 + 8) = 1 << (uVar2 & 0xff);
      return;
    }
  }
  else {
    FUN_00025f5a(param_1,0);
  }
  return;
}


/* ---- FUN_0002544c @ 0002544c ---- */

void FUN_0002544c(uint param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_00027a4c();
  iVar2 = DAT_000254d4;
  if (iVar3 == 0) {
    iVar3 = FUN_00027a64(param_1);
    if (iVar3 == 0) {
      return;
    }
    uVar4 = FUN_000209b0(param_1);
    iVar3 = uVar4 * 4 + DAT_000254dc;
    *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 1;
    FUN_00025fb4(uVar4 * 4 + 0x100 & 0xffff);
    if (param_2 == 0) {
      return;
    }
    iVar3 = FUN_000209b0(param_1);
    if (*(int *)(iVar2 + iVar3 * 4) == 0) {
      return;
    }
    *(int *)(DAT_000254e0 + 4) = 1 << (uVar4 & 0xff);
    return;
  }
  iVar3 = FUN_000209b0();
  bVar1 = *(byte *)(iVar3 + iVar2 + 0x40) >> 6;
  if (bVar1 == 3) {
    if (-1 < (int)((*(uint *)(DAT_000254d8 + 0x10) >> (param_1 & 0xff)) << 0x1f)) goto LAB_0002548a;
  }
  else if (bVar1 == 1) {
LAB_0002548a:
    uVar5 = 2;
    goto LAB_00025482;
  }
  uVar5 = 3;
LAB_00025482:
  FUN_00025f5a(param_1,uVar5);
  return;
}


/* ---- FUN_000254e4 @ 000254e4 ---- */

undefined8 FUN_000254e4(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  
  uVar5 = 0;
  pbVar6 = param_2;
  if (*(char *)(DAT_00025580 + param_1 + 0x24) < '\0') {
    iVar2 = FUN_00020968(param_1,param_3,param_2[3],param_3,param_2,param_3,param_4);
    if (iVar2 == -1) {
      uVar5 = 4;
    }
    else {
      if (param_2[2] == 0) {
        pbVar6 = (byte *)0x0;
        FUN_00025f0c(param_1,0,0,param_2[1],0,0);
      }
      else {
        puVar4 = (uint *)(param_1 * 4 + 0x50000700);
        *puVar4 = *puVar4 & 0xfffffffd;
      }
      if (param_2[3] == 0) {
        pbVar3 = (byte *)(DAT_00025580 + iVar2 + 0x40);
        *pbVar3 = *pbVar3 | *param_2 << 6;
      }
      else {
        iVar2 = iVar2 * 4 + DAT_00025584;
        bVar1 = *param_2;
        *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & DAT_00025588;
        *(uint *)(iVar2 + 0x10) =
             (uint)(param_1 << 0x1b) >> 0x13 | ((uint)bVar1 << 0x1e) >> 0xe |
             *(uint *)(iVar2 + 0x10);
      }
    }
  }
  else {
    uVar5 = 8;
  }
  return CONCAT44(pbVar6,uVar5);
}


/* ---- FUN_0002558c @ 0002558c ---- */

int FUN_0002558c(uint param_1)

{
  int iVar1;
  
  iVar1 = -((int)((*(uint *)(DAT_0002559c + 0x10) >> (param_1 & 0xff)) << 0x1f) >> 0x1f);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_000255a0 @ 000255a0 ---- */

undefined4 FUN_000255a0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  
  iVar1 = DAT_000255f4;
  if (*(char *)(DAT_000255f4 + 9) != '\0') {
    return 8;
  }
  uVar2 = 0;
  do {
    iVar3 = iVar1 + uVar2;
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined *)(iVar3 + -0x1c) = 0xff;
  } while (uVar2 < 0x20);
  bVar4 = 0;
  do {
    FUN_0002094c(bVar4);
    bVar4 = bVar4 + 1;
  } while (bVar4 < 9);
  FUN_000253a4(6,3);
  FUN_00025fb4(0x17c);
  *(undefined4 *)(DAT_000255f8 + 4) = 0x80000000;
  *(undefined *)(iVar1 + 9) = 1;
  return 0;
}


/* ---- FUN_000255fc @ 000255fc ---- */

char FUN_000255fc(void)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_00025608 + 9);
  if (cVar1 != '\0') {
    cVar1 = '\x01';
  }
  return cVar1;
}


/* ---- FUN_0002560c @ 0002560c ---- */

undefined8 FUN_0002560c(uint param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  
  uVar4 = 0;
  pbVar5 = param_2;
  if (*(char *)(DAT_00025698 + param_1 + 0x24) == -1) {
    if (param_2[2] == 0) {
      *(undefined *)(DAT_00025698 + param_1 + 0x24) = 0xfe;
    }
    else {
      iVar3 = FUN_00020968(param_1,0,1,param_4,param_2,param_3,param_4);
      if (iVar3 == -1) {
        uVar4 = 4;
        goto LAB_0002568e;
      }
      bVar1 = *param_2;
      iVar3 = iVar3 * 4 + DAT_0002569c;
      bVar2 = param_2[1];
      *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & DAT_000256a0;
      *(uint *)(iVar3 + 0x10) =
           *(uint *)(iVar3 + 0x10) | (param_1 << 0x1b) >> 0x13 |
           ((uint)bVar1 << 0x1e) >> 0xe | ((uint)bVar2 << 0x1f) >> 0xb;
    }
    iVar3 = 1 << (param_1 & 0xff);
    if (param_2[1] == 1) {
      *(int *)(DAT_000256a4 + 8) = iVar3;
    }
    else {
      *(int *)(DAT_000256a4 + 0xc) = iVar3;
    }
    pbVar5 = (byte *)0x0;
    FUN_00025f0c(param_1,1,1,0,0,0);
  }
  else {
    uVar4 = 8;
  }
LAB_0002568e:
  return CONCAT44(pbVar5,uVar4);
}


/* ---- FUN_000256a8 @ 000256a8 ---- */

int FUN_000256a8(void)

{
  int iVar1;
  
  iVar1 = FUN_000209b0();
  return ((uint)(iVar1 << 0x1a) >> 0x18) + DAT_000256b8;
}


/* ---- FUN_000256bc @ 000256bc ---- */

void FUN_000256bc(int param_1)

{
  int iVar1;
  
  iVar1 = *(char *)(DAT_000256d4 + param_1 + 0x24) * 4 + DAT_000256d8;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xfffffffc;
  return;
}


/* ---- FUN_000256dc @ 000256dc ---- */

void FUN_000256dc(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(char *)(DAT_00025704 + param_1 + 0x24) * 4 + DAT_00025708;
  uVar1 = *(uint *)(iVar2 + 0x10);
  *(uint *)(iVar2 + 0x10) = uVar1 | 0x1f03;
  *(uint *)(iVar2 + 0x10) = uVar1 | 3;
  return;
}


/* ---- FUN_0002570c @ 0002570c ---- */

void FUN_0002570c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    param_2 = 1;
  }
  iVar1 = *(char *)(DAT_00025730 + param_1 + 0x24) * 4 + DAT_00025734;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffefffff | param_2 << 0x14;
  return;
}


/* ---- FUN_00025738 @ 00025738 ---- */

void FUN_00025738(int param_1)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = FUN_00027a64();
  if (iVar2 != 0) {
    uVar1 = FUN_000209b0(param_1);
    FUN_0002094c(uVar1);
    iVar2 = FUN_000209b0(param_1);
    *(undefined4 *)(iVar2 * 4 + DAT_00025774 + 0x10) = 0;
  }
  *(undefined *)(DAT_00025778 + param_1 + 0x24) = 0xff;
  FUN_00025f34(param_1);
  return;
}


/* ---- FUN_0002577c @ 0002577c ---- */

void FUN_0002577c(void)

{
  if (*(int *)(DAT_00025798 + 4) << 0x1d < 0) {
    if (*DAT_0002579c != 0) {
      *DAT_0002579c = 0;
                    /* WARNING: Could not recover jumptable at 0x00025794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(DAT_000257a0 + 4))();
      return;
    }
  }
  return;
}


/* ---- FUN_000257a4 @ 000257a4 ---- */

undefined8 FUN_000257a4(undefined *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_20 [2];
  undefined *local_18;
  
  uVar4 = 4;
  uVar2 = 0;
  uVar3 = DAT_00025804;
  local_18 = param_1;
  while( true ) {
    local_20[0] = local_20[0] & 0xffffff00;
    FUN_0001ddb4(local_20);
    if (((1 << uVar2 & uVar3) != 0) && (iVar1 = FUN_000232b4(uVar2), iVar1 == 0)) break;
    FUN_0001ddf0(local_20[0] & 0xff);
    uVar3 = uVar3 & ~(1 << uVar2);
    uVar2 = uVar2 + 1 & 0xff;
    if (uVar3 == 0) {
LAB_000257e2:
      return CONCAT44(local_20[0],uVar4);
    }
  }
  *(uint *)(DAT_00025808 + 4) = 1 << uVar2 | *(uint *)(DAT_00025808 + 4);
  uVar4 = 0;
  *local_18 = (char)uVar2;
  FUN_0001ddf0(local_20[0] & 0xff);
  goto LAB_000257e2;
}


/* ---- FUN_0002580c @ 0002580c ---- */

undefined4 FUN_0002580c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar2 = 0;
    iVar1 = FUN_000233a8();
    if (iVar1 == 0) {
      uVar2 = 7;
    }
    else {
      iVar1 = FUN_000232b4(param_1);
      if (iVar1 == 0) {
        uVar2 = 8;
      }
      else {
        iVar1 = param_1 * 8 + DAT_00025848;
        *(int *)(iVar1 + 0x10) = param_2;
        *(int *)(iVar1 + 0x14) = param_3;
      }
    }
    return uVar2;
  }
  return 0xe;
}


/* ---- FUN_0002584c @ 0002584c ---- */

undefined4 FUN_0002584c(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_000232e4();
  if (iVar1 == 0) {
    uVar2 = 7;
  }
  else {
    iVar1 = FUN_000233a8(param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_000232b4(param_1), iVar1 != 0)) {
      *(int *)(DAT_00025884 + 8) = 1 << (param_1 & 0xff);
    }
    else {
      uVar2 = 8;
    }
  }
  return uVar2;
}


/* ---- FUN_00025888 @ 00025888 ---- */

undefined4 FUN_00025888(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_000232e4();
  if (iVar1 == 0) {
    uVar2 = 7;
  }
  else {
    iVar1 = FUN_000233a8(param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_000232b4(param_1), iVar1 != 0)) {
      *(int *)(DAT_000258c0 + 4) = 1 << (param_1 & 0xff);
    }
    else {
      uVar2 = 8;
    }
  }
  return uVar2;
}


/* ---- FUN_000258c4 @ 000258c4 ---- */

undefined4 FUN_000258c4(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_000233a8();
  if (iVar1 == 0) {
    uVar3 = 7;
  }
  else {
    uVar2 = 1 << (param_1 & 0xff);
    *(uint *)(DAT_000258fc + 8) = uVar2;
    FUN_0001ddb4();
    *(uint *)(DAT_00025900 + 4) = *(uint *)(DAT_00025900 + 4) & ~uVar2;
    FUN_0001ddf0(0);
  }
  return uVar3;
}


/* ---- FUN_00025904 @ 00025904 ---- */

undefined4 FUN_00025904(uint param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_000232f2(param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_000232cc(param_2);
    if (iVar1 == 0) {
      return 8;
    }
    iVar1 = FUN_0001dee0(param_1);
    if (iVar1 != 0) {
      FUN_0001ddb4();
      puVar2 = (uint *)(param_2 * 4 + DAT_00025954);
      *puVar2 = *puVar2 | param_1;
      FUN_0001ddf0(0);
      return 0;
    }
  }
  return 7;
}


/* ---- FUN_00025958 @ 00025958 ---- */

undefined4 FUN_00025958(uint param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_000232f2(param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_000232cc(param_2);
    if (iVar1 == 0) {
      return 8;
    }
    iVar1 = FUN_0001dee0(param_1);
    if (iVar1 != 0) {
      FUN_0001ddb4();
      puVar2 = (uint *)(param_2 * 4 + DAT_000259a8);
      *puVar2 = *puVar2 & ~param_1;
      FUN_0001ddf0(0);
      return 0;
    }
  }
  return 7;
}


/* ---- FUN_000259ac @ 000259ac ---- */

undefined8 FUN_000259ac(undefined *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_20 [2];
  undefined *local_18;
  
  uVar4 = 4;
  uVar3 = 3;
  uVar2 = 0;
  local_18 = param_1;
  while( true ) {
    local_20[0] = local_20[0] & 0xffffff00;
    FUN_0001ddb4(local_20);
    if (((1 << uVar2 & uVar3) != 0) && (iVar1 = FUN_000232cc(uVar2), iVar1 == 0)) break;
    FUN_0001ddf0(local_20[0] & 0xff);
    uVar3 = uVar3 & ~(1 << uVar2);
    uVar2 = uVar2 + 1 & 0xff;
    if (uVar3 == 0) {
LAB_000259ea:
      return CONCAT44(local_20[0],uVar4);
    }
  }
  *(byte *)(DAT_00025a0c + 1) = (byte)(1 << uVar2) | *(byte *)(DAT_00025a0c + 1);
  uVar4 = 0;
  *local_18 = (char)uVar2;
  FUN_0001ddf0(local_20[0] & 0xff);
  goto LAB_000259ea;
}


/* ---- FUN_00025a10 @ 00025a10 ---- */

undefined4 FUN_00025a10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_000232f2();
  if (iVar1 == 0) {
    uVar2 = 7;
  }
  else {
    iVar1 = FUN_000232cc(param_1);
    if (iVar1 == 0) {
      uVar2 = 8;
    }
    else {
      *(undefined4 *)(param_1 * 8 + DAT_00025a40) = 1;
    }
  }
  return uVar2;
}


/* ---- FUN_00025a44 @ 00025a44 ---- */

undefined4 FUN_00025a44(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_000232f2();
  if (iVar1 == 0) {
    uVar2 = 7;
  }
  iVar1 = FUN_000232cc(param_1);
  if (iVar1 == 0) {
    uVar2 = 8;
  }
  else {
    *(undefined4 *)(param_1 * 8 + DAT_00025a8c + 4) = 1;
    FUN_0001ddb4();
    *(byte *)(DAT_00025a90 + 1) = *(byte *)(DAT_00025a90 + 1) & ~(byte)(1 << (param_1 & 0xff));
    FUN_0001ddf0(0);
  }
  return uVar2;
}


/* ---- FUN_00025a94 @ 00025a94 ---- */

undefined4 FUN_00025a94(void)

{
  if (*DAT_00025aa8 != '\0') {
    return 0x85;
  }
  *DAT_00025aa8 = '\x01';
  return 0;
}


/* ---- FUN_00025aac @ 00025aac ---- */

undefined4 FUN_00025aac(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 4 + 0x540);
}


/* ---- FUN_00025aba @ 00025aba ---- */

int FUN_00025aba(int *param_1,char param_2)

{
  return *param_1 + (uint)(byte)(param_2 * '\x04' + 0x40);
}


/* ---- FUN_00025ac6 @ 00025ac6 ---- */

void FUN_00025ac6(int *param_1)

{
  *(undefined4 *)(*param_1 + 0xc) = 1;
  return;
}


/* ---- FUN_00025ace @ 00025ace ---- */

void FUN_00025ace(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0x10000 << (param_2 & 0xff);
  if (param_4 == 0) {
    *(int *)(*param_1 + 0x308) = iVar1;
  }
  else {
    *(int *)(*param_1 + 0x304) = iVar1;
  }
  *(undefined4 *)(param_2 * 4 + *param_1 + 0x540) = param_3;
  return;
}


/* ---- FUN_00025af8 @ 00025af8 ---- */

int FUN_00025af8(int *param_1,short param_2)

{
  return *param_1 + (uint)(ushort)(param_2 * 4 + 0x140);
}


/* ---- FUN_00025b06 @ 00025b06 ---- */

void FUN_00025b06(int *param_1,uint param_2)

{
  *(int *)(*param_1 + 0x308) = 0x10000 << (param_2 & 0xff);
  return;
}


/* ---- FUN_00025b18 @ 00025b18 ---- */

void FUN_00025b18(int *param_1,uint param_2)

{
  *(undefined4 *)(*param_1 + (param_2 * 4 + 0x140 & 0xffff)) = 0;
  *(int *)(*param_1 + 0x304) = 0x10000 << (param_2 & 0xff);
  return;
}


/* ---- FUN_00025b3c @ 00025b3c ---- */

void FUN_00025b3c(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x10) = 1;
  *(undefined *)((uint)*(byte *)(param_1 + 1) * 0xc + DAT_00025b50 + 8) = 1;
  return;
}


/* ---- FUN_00025b54 @ 00025b54 ---- */

void FUN_00025b54(undefined4 *param_1)

{
  *(undefined4 *)*param_1 = 1;
  *(undefined *)((uint)*(byte *)(param_1 + 1) * 0xc + DAT_00025b6c + 8) = 2;
  return;
}


/* ---- FUN_00025b70 @ 00025b70 ---- */

void FUN_00025b70(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  *(uint *)(*param_1 + 0x200) = *(uint *)(*param_1 + 0x200) & ~(0x101 << (param_2 & 0xff));
  *(uint *)(*param_1 + 0x200) = *(uint *)(*param_1 + 0x200) | param_4;
  FUN_00025ace();
  return;
}


/* ---- FUN_00025ba0 @ 00025ba0 ---- */

undefined4 FUN_00025ba0(uint *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = (int *)((uint)*(byte *)(param_1 + 1) * 0xc + DAT_00025c38);
  if (*(char *)(piVar2 + 2) != '\0') {
    return 8;
  }
  if (param_3 != 0) {
    *piVar2 = param_3;
    piVar2[1] = *(int *)(param_2 + 4);
    for (uVar1 = 0; uVar1 < *(byte *)((int)param_1 + 5); uVar1 = uVar1 + 1 & 0xff) {
      *(undefined4 *)(*param_1 + uVar1 * 4 + 0x140) = 0;
    }
    FUN_000253a4((int)(char)(*param_1 >> 0xc),param_2[3]);
    *(uint *)(*param_1 + 0x504) = *(uint *)(*param_1 + 0x504) & 0xfffffffe | param_2[1] & 1;
    *(uint *)(*param_1 + 0x508) = *(uint *)(*param_1 + 0x508) & 0xfffffffc | param_2[2] & 3;
    *(uint *)(*param_1 + 0x510) = *(uint *)(*param_1 + 0x510) & 0xfffffff0 | *param_2 & 0xf;
    *(undefined *)(piVar2 + 2) = 1;
    return 0;
  }
  return 7;
}


/* ---- FUN_00025c3c @ 00025c3c ---- */

void FUN_00025c3c(int *param_1)

{
  int iVar1;
  
  *DAT_00025c8c = 1 << ((uint)(*param_1 << 0xf) >> 0x1b);
  *(undefined4 *)(*param_1 + 0x200) = 0;
  *(undefined4 *)(*param_1 + 0x308) = 0xffffffff;
  iVar1 = DAT_00025c90;
  if (*(char *)((uint)*(byte *)(param_1 + 1) * 0xc + DAT_00025c90 + 8) == '\x02') {
    FUN_00025b3c(param_1);
  }
  *(undefined *)((uint)*(byte *)(param_1 + 1) * 0xc + iVar1 + 8) = 0;
  return;
}


/* ---- FUN_00025c94 @ 00025c94 ---- */

void FUN_00025c94(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(param_1 + 1) * 0x28 + DAT_00025cc8;
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x308) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x200) = 0;
  *(undefined4 *)(iVar1 + 0x500) = 0;
  *(undefined *)(iVar2 + 0x22) = 1;
  return;
}


/* ---- FUN_00025ccc @ 00025ccc ---- */

void FUN_00025ccc(int *param_1)

{
  int iVar1;
  
  iVar1 = (uint)*(byte *)(param_1 + 1) * 0x28 + DAT_00025ce8;
  *(undefined4 *)(*param_1 + 0x500) = 5;
  *(undefined *)(iVar1 + 0x22) = 2;
  return;
}


/* ---- FUN_00025cec @ 00025cec ---- */

undefined4 FUN_00025cec(uint *param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)((uint)*(byte *)(param_1 + 1) * 0x28 + DAT_00025d68);
  if (*(char *)((int)piVar4 + 0x22) != '\0') {
    return 8;
  }
  *piVar4 = param_3;
  piVar4[1] = param_4;
  piVar4[2] = 0;
  *(undefined *)((int)piVar4 + 0x25) = 0;
  *(undefined *)(piVar4 + 9) = 0;
  *(undefined *)((int)piVar4 + 0x27) = *(undefined *)((int)param_2 + 0xe);
  if (*(char *)((int)param_2 + 0xd) != '\0') {
    FUN_0002b400(param_2);
  }
  iVar3 = DAT_00025d70;
  uVar1 = DAT_00025d6c;
  *(undefined4 *)(*param_2 * 4 + DAT_00025d70) = DAT_00025d6c;
  *(undefined4 *)(param_2[1] * 4 + iVar3) = uVar1;
  uVar2 = *param_1;
  iVar3 = param_2[1];
  *(int *)(uVar2 + 0x508) = *param_2;
  *(int *)(uVar2 + 0x50c) = iVar3;
  *(int *)(uVar2 + 0x524) = param_2[2];
  if (*piVar4 != 0) {
    FUN_000253a4((int)(char)(*param_1 >> 0xc),*(undefined *)(param_2 + 3),iVar3,0x500,param_4);
  }
  *(undefined *)((int)piVar4 + 0x22) = 1;
  return 0;
}


/* ---- FUN_00025d74 @ 00025d74 ---- */

void FUN_00025d74(undefined4 param_1,undefined param_2,undefined4 param_3,undefined param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = DAT_00025d94[2];
  local_14 = param_3;
  FUN_00025e24(param_1,&local_18,0);
  return;
}


/* ---- FUN_00025d98 @ 00025d98 ---- */

void FUN_00025d98(undefined4 param_1,undefined param_2,undefined4 param_3,undefined param_4,
                 int param_5)

{
  undefined4 uVar1;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0;
  local_18 = (uint)CONCAT11(param_4,param_2) << 8;
  if (param_5 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x20;
  }
  local_14 = param_3;
  FUN_00025e24(param_1,&local_18,uVar1);
  return;
}


/* ---- FUN_00025dbc @ 00025dbc ---- */

void FUN_00025dbc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((uint)*(byte *)(param_1 + 1) * 0x28 + DAT_00025e14);
  if (*piVar3 != 0) {
    *DAT_00025e18 = 1 << ((uint)(*param_1 << 0xf) >> 0x1b);
  }
  FUN_00025c94(param_1);
  iVar2 = DAT_00025e20;
  uVar1 = DAT_00025e1c;
  if (*(char *)((int)piVar3 + 0x27) == '\0') {
    *(undefined4 *)(*(int *)(*param_1 + 0x508) * 4 + DAT_00025e20) = DAT_00025e1c;
    *(undefined4 *)(*(int *)(*param_1 + 0x50c) * 4 + iVar2) = uVar1;
  }
  *(undefined *)((int)piVar3 + 0x22) = 0;
  return;
}


/* ---- FUN_00025e24 @ 00025e24 ---- */

undefined4 FUN_00025e24(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((param_3 & 3) != 0) {
    return 6;
  }
  uVar1 = FUN_0002b72c((uint)*(byte *)(param_1 + 1) * 0x28 + DAT_00025e48,*param_1,param_2,param_3);
  return uVar1;
}


/* ---- FUN_00025e4c @ 00025e4c ---- */

undefined4 FUN_00025e4c(undefined *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_10;
  
  local_10 = param_4 & 0xffffff00;
  FUN_0001ddb4(&local_10);
  iVar1 = DAT_00025e88;
  uVar2 = *(uint *)(DAT_00025e88 + 8);
  if (uVar2 < 8) {
    *param_1 = (char)uVar2;
    *(uint *)(iVar1 + 8) = uVar2 + 1;
    *(uint *)(DAT_00025e8c + 8) = *(uint *)(DAT_00025e8c + 8) | 1 << (uVar2 & 0xff);
    uVar3 = 0;
  }
  else {
    uVar3 = 4;
  }
  FUN_0001ddf0(local_10 & 0xff);
  return uVar3;
}


/* ---- FUN_00025e90 @ 00025e90 ---- */

void FUN_00025e90(int param_1)

{
  *(undefined4 *)(param_1 * 4 + DAT_00025ea0) = DAT_00025e9c;
  return;
}


/* ---- FUN_00025ea4 @ 00025ea4 ---- */

void FUN_00025ea4(void)

{
  *(undefined4 *)(DAT_00025eb8 + 4) = 1;
  *DAT_00025ebc = 1;
  *DAT_00025ec0 = 2;
  return;
}


/* ---- FUN_00025ec4 @ 00025ec4 ---- */

undefined4 FUN_00025ec4(byte *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = DAT_00025f00;
  *(undefined4 *)(DAT_00025f00 + 4) = param_2;
  if (*pcVar1 != '\0') {
    return 8;
  }
  *pcVar1 = '\x01';
  iVar2 = DAT_00025f08;
  if (param_1 == (byte *)0x0) {
    param_1 = DAT_00025f04;
  }
  *(uint *)(DAT_00025f08 + 0xc) = (uint)*param_1;
  uVar3 = FUN_0001b110(*(int *)(param_1 + 4) << 0xf,1000);
  *(undefined4 *)(iVar2 + 4) = uVar3;
  FUN_000253a4(0x10,param_1[8]);
  return 0;
}


/* ---- FUN_00025f0c @ 00025f0c ---- */

void FUN_00025f0c(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  *(uint *)(param_1 * 4 + 0x50000700) =
       param_3 << 1 | param_2 | param_4 << 2 | param_5 << 8 | param_6 << 0x10;
  return;
}


/* ---- FUN_00025f34 @ 00025f34 ---- */

void FUN_00025f34(undefined4 param_1)

{
  FUN_00025f0c(param_1,0,1,0,0,0);
  return;
}


/* ---- FUN_00025f46 @ 00025f46 ---- */

void FUN_00025f46(int param_1,int param_2)

{
  *(int *)(param_1 * 4 + 0x50000700) = param_2 << 2;
  return;
}


/* ---- FUN_00025f5a @ 00025f5a ---- */

void FUN_00025f5a(int param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 * 4 + 0x50000700);
  *puVar1 = *puVar1 & 0xfffcffff;
  *puVar1 = *puVar1 | param_2 << 0x10;
  return;
}


/* ---- FUN_00025f7c @ 00025f7c ---- */

void FUN_00025f7c(uint param_1)

{
  *(int *)(DAT_00025f88 + 8) = 1 << (param_1 & 0xff);
  return;
}


/* ---- FUN_00025f8c @ 00025f8c ---- */

void FUN_00025f8c(uint param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int local_10;
  
  local_10 = *DAT_00025fb0;
  uVar1 = param_1 + param_2;
  for (; param_1 < uVar1; param_1 = param_1 + 1) {
    *param_3 = *(undefined4 *)((&local_10)[param_1] + 0x510);
    param_3 = param_3 + 1;
  }
  return;
}


/* ---- FUN_00025fb4 @ 00025fb4 ---- */

void FUN_00025fb4(int param_1)

{
  *(undefined4 *)(param_1 + DAT_00025fc0) = 0;
  return;
}


/* ---- FUN_00025fc4 @ 00025fc4 ---- */

int FUN_00025fc4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + DAT_00025fd4);
  if (iVar1 != 1) {
    iVar1 = 0;
  }
  return iVar1;
}


/* ---- FUN_00025fd8 @ 00025fd8 ---- */

undefined4 FUN_00025fd8(int **param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined local_28 [8];
  int **ppiStack_20;
  int *piStack_1c;
  int local_18;
  
  uVar4 = 0;
  local_28[0] = 0;
  ppiStack_20 = param_1;
  piStack_1c = param_2;
  local_18 = param_3;
  FUN_0001ddb4(local_28);
  iVar2 = **param_1;
  if (iVar2 == (*param_1)[1]) {
    uVar4 = 5;
  }
  else {
    if (local_18 == 0) {
      iVar1 = FUN_00026090(param_1);
      **param_1 = iVar1;
    }
    piVar3 = param_1[3];
    if (piVar3 == (int *)0x1) {
      *(undefined *)param_2 = *(undefined *)((int)param_1[1] + iVar2);
    }
    else if (piVar3 == (int *)0x2) {
      *(undefined2 *)param_2 = *(undefined2 *)((int)param_1[1] + iVar2 * 2);
    }
    else if (piVar3 == (int *)&Reset) {
      *param_2 = param_1[1][iVar2];
    }
    else if (piVar3 == (int *)&NMI) {
      iVar1 = (param_1[1] + iVar2 * 2)[1];
      *param_2 = param_1[1][iVar2 * 2];
      param_2[1] = iVar1;
    }
    else {
      FUN_0001b19c(param_2,(int *)((int)param_1[1] + iVar2 * (int)piVar3));
    }
  }
  FUN_0001ddf0(local_28[0]);
  return uVar4;
}


/* ---- FUN_00026062 @ 00026062 ---- */

undefined4 FUN_00026062(int **param_1)

{
  if (**param_1 == (*param_1)[1]) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00026072 @ 00026072 ---- */

undefined4 FUN_00026072(int **param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*param_1)[1];
  if (piVar1 < param_1[2]) {
    iVar2 = (int)piVar1 + 1;
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 == **param_1) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00026090 @ 00026090 ---- */

int FUN_00026090(int param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 8)) {
    return param_2 + 1;
  }
  return 0;
}


/* ---- FUN_0002609e @ 0002609e ---- */

undefined8 FUN_0002609e(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_1c = 0;
  local_20 = (uint)param_2 & 0xffffff00;
  uStack_18 = param_4;
  FUN_0001ddb4(&local_20);
  iVar1 = FUN_00026072(param_1);
  if ((iVar1 == 0) || (*(char *)(param_1 + 4) == '\0')) {
    iVar4 = *(int *)(*param_1 + 4);
    uVar2 = FUN_00026090(param_1);
    *(undefined4 *)(*param_1 + 4) = uVar2;
    if (iVar1 != 0) {
      uVar2 = FUN_00026090(param_1,*(undefined4 *)*param_1);
      *(undefined4 *)*param_1 = uVar2;
    }
    iVar1 = param_1[3];
    if (iVar1 == 1) {
      *(undefined *)(param_1[1] + iVar4) = *(undefined *)param_2;
    }
    else if (iVar1 == 2) {
      *(undefined2 *)(param_1[1] + iVar4 * 2) = *(undefined2 *)param_2;
    }
    else if (iVar1 == 4) {
      *(undefined4 *)(param_1[1] + iVar4 * 4) = *param_2;
    }
    else if (iVar1 == 8) {
      uVar2 = param_2[1];
      puVar5 = (undefined4 *)(param_1[1] + iVar4 * 8);
      *puVar5 = *param_2;
      puVar5[1] = uVar2;
    }
    else {
      FUN_0001b19c(param_1[1] + iVar4 * iVar1,param_2);
    }
    uVar3 = FUN_00029580(param_1);
    if (*(uint *)(*param_1 + 8) < uVar3) {
      *(uint *)(*param_1 + 8) = uVar3;
    }
  }
  else {
    local_1c = 4;
  }
  FUN_0001ddf0(local_20 & 0xff);
  return CONCAT44(local_20,local_1c);
}


/* ---- FUN_0002614e @ 0002614e ---- */

void FUN_0002614e(undefined4 *param_1)

{
  FUN_0001ddb4();
  param_1 = (undefined4 *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0001ddf0(0);
  return;
}


/* ---- FUN_0002616e @ 0002616e ---- */

int FUN_0002616e(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + param_2);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_00026178 @ 00026178 ---- */

void FUN_00026178(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    *(undefined *)(DAT_000261b0 + 8) = 1;
    FUN_000286e0(s_Func___s__event___BLE_ADV_EVT_ID_000261c0,DAT_000261b4);
    FUN_0002a2b8();
    return;
  }
  if (param_1 == 3) {
    *(undefined *)(DAT_000261b0 + 8) = 0x81;
    uVar1 = DAT_000261bc;
  }
  else {
    if (param_1 != 4) {
      return;
    }
    *(undefined *)(DAT_000261b0 + 8) = 0x81;
    uVar1 = DAT_000261b8;
  }
  FUN_000286e0(uVar1,DAT_000261b4);
  return;
}


/* ---- FUN_000261f4 @ 000261f4 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000261fc) */
/* WARNING: Removing unreachable block (ram,0x000261fc) */

void FUN_000261f4(byte *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
                    /* WARNING: Could not recover jumptable at 0x000261fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (DAT_00026200 <= uVar1) {
    uVar1 = (uint)DAT_00026200;
  }
  (*(code *)((uint)*(byte *)(uVar1 + 0x26201) * 2 + 0x26201))();
  return;
}


/* ---- FUN_0002635c @ 0002635c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002635c(ushort *param_1)

{
  undefined *puVar1;
  undefined uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  int iVar5;
  char local_20 [8];
  char local_18;
  
  puVar1 = DAT_00026514;
  uVar3 = *param_1;
  if (uVar3 == 0x11) {
    *DAT_00026580 = 0;
    iVar5 = FUN_0001dd8c(*(undefined4 *)(DAT_00026584 + 4));
    if (iVar5 != 0) {
      app_error_handler(iVar5,DAT_0002653c + -0x37,s__________application_user_ble_c_0002651b + 1);
    }
    FUN_000286e0(s_Disconnected__reason___0x_x__STA_00026588,*(undefined *)(param_1 + 4));
    FUN_00028b04(*(undefined *)(param_1 + 4));
    if (param_1[2] == *(ushort *)(DAT_000265b8 + 8)) {
      *(undefined2 *)(DAT_000265b8 + 8) = 0xffff;
    }
    if (puVar1[5] == '\0') {
      return;
    }
    FUN_000286e0(DAT_000265bc,*(undefined4 *)(puVar1 + 0x14));
    iVar5 = FUN_0002855c(_DAT_000265c0,*(undefined4 *)(puVar1 + 0x14));
    if (iVar5 != 0) {
      app_error_handler(iVar5,0x430,s__________application_user_ble_c_0002651b + 1);
    }
    iVar5 = FUN_00027c14(_DAT_000265c0,*(undefined4 *)(puVar1 + 0x14));
    if ((iVar5 != 6) && (iVar5 != 0)) {
      app_error_handler(iVar5,DAT_0002653c + -0x17,s__________application_user_ble_c_0002651b + 1);
    }
    puVar1[5] = 0;
    return;
  }
  if (uVar3 < 0x12) {
    if (uVar3 == 1) {
      return;
    }
    if (uVar3 != 2) {
      if (uVar3 != 0x10) {
        return;
      }
      *(ushort *)(DAT_00026514 + 6) = param_1[2];
      puVar1[1] = 6;
      FUN_00024924();
      *puVar1 = 0;
      FUN_00029830();
      software_interrupt(0xa9);
      if (*(short *)(_DAT_00026518 + 0x2a) != 0) {
        app_error_handler(*(short *)(_DAT_00026518 + 0x2a),DAT_0002653c,
                          s__________application_user_ble_c_0002651b + 1,2);
      }
      uVar4 = 0;
      software_interrupt(0xa9);
      if (*(short *)(DAT_00026540 + 0x1c) != 0) {
        app_error_handler(*(short *)(DAT_00026540 + 0x1c),DAT_0002653c + 2,
                          s__________application_user_ble_c_0002651b + 1,2);
        uVar4 = extraout_r1;
      }
      iVar5 = _DAT_00026544;
      if (*(char *)(_DAT_00026544 + 8) == -0x80) {
        FUN_000286e0(s_Connected__STATE_FACTORY__000265c3 + 1,uVar4);
        uVar2 = 0x87;
      }
      else {
        FUN_000286e0(s_Connected__waiting_TOKEN____00026547 + 1,uVar4);
        uVar2 = 0x82;
      }
      *(undefined *)(iVar5 + 8) = uVar2;
      post_state_event(_DAT_00026544 + 8);
      return;
    }
    FUN_000286e0(s_BLE_EVT_USER_MEM_REQUEST_in___s__000265fc,DAT_00026584 + 0x1b);
    uVar3 = param_1[2];
    software_interrupt(0x67);
    if (uVar3 == 0) {
      return;
    }
    iVar5 = DAT_0002653c + 0x35;
  }
  else if (uVar3 == 0x3a) {
    FUN_000286e0(s_GATT_Client_Timeout__000265e4);
    uVar3 = param_1[2];
    software_interrupt(0x76);
    if (uVar3 == 0) {
      return;
    }
    iVar5 = DAT_0002653c + 0x23;
  }
  else if (uVar3 == 0x51) {
    debug_printf_stub(s_BLE_GATTS_EVT_RW_AUTHORIZE_REQUE_00026624,DAT_00026584 + 0x1b);
    FUN_0001b19c(local_20,param_1 + 3,0x10);
    if (local_20[0] == '\0') {
      return;
    }
    if (((local_18 != '\x04') && (local_18 != '\x06')) && (local_18 != '\x05')) {
      return;
    }
    uVar3 = param_1[2];
    software_interrupt(0xa8);
    if (uVar3 == 0) {
      return;
    }
    iVar5 = DAT_0002653c + 0x52;
  }
  else {
    if (uVar3 != 0x55) {
      return;
    }
    FUN_000286e0(s_GATT_Server_Timeout__00026568);
    uVar3 = param_1[2];
    software_interrupt(0x76);
    if (uVar3 == 0) {
      return;
    }
    iVar5 = DAT_0002653c + 0x2d;
  }
  app_error_handler(uVar3,iVar5,s__________application_user_ble_c_0002651b + 1);
  return;
}


/* ---- FUN_00026654 @ 00026654 ---- */

void FUN_00026654(int param_1,short *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int local_28;
  int local_24;
  short *local_20;
  int local_1c;
  short *psStack_18;
  
  if (*param_2 != *(short *)(param_1 + 0x25e)) {
    return;
  }
  iVar4 = (uint)*(byte *)(param_1 + 0x25a) * 100 + param_1;
  local_1c = param_1;
  psStack_18 = param_2;
  if (param_2[1] == 0) {
    local_20 = param_2 + 4;
    uVar3 = (uint)*(byte *)(iVar4 + 4);
    uVar2 = uVar3 + *(byte *)(param_2 + 4);
    if (5 < uVar2) {
      uVar2 = 5;
    }
    *(char *)(iVar4 + 4) = (char)uVar2;
    local_24 = 0;
    for (; uVar3 < *(byte *)(iVar4 + 4); uVar3 = uVar3 + 1) {
      local_28 = uVar3 * 0x12 + iVar4;
      FUN_0001b19c(local_28 + 10,local_20 + local_24 * 5 + 1,10);
      *(undefined2 *)(local_28 + 0x14) = 0;
      *(undefined2 *)(local_28 + 0x16) = 0;
      *(undefined2 *)(local_28 + 0x18) = 0;
      *(undefined2 *)(local_28 + 0x1a) = 0;
      local_24 = local_24 + 1;
    }
    if ((*(ushort *)(uVar3 * 0x12 + iVar4) <
         *(ushort *)((uint)*(byte *)(param_1 + 0x25a) * 100 + local_1c + 8)) &&
       (*(char *)(iVar4 + 4) != '\x05')) {
      *(char *)(param_1 + 0x259) = *(char *)(iVar4 + 4);
      iVar4 = FUN_00020aa0(local_1c,*param_2);
      if (iVar4 == 0) {
        return;
      }
      *(undefined *)(param_1 + 0x25b) = 0;
      goto LAB_00026716;
    }
  }
  *(undefined *)(param_1 + 0x259) = 0;
  iVar4 = FUN_000214a0(local_1c,&local_28,*param_2);
  if (iVar4 == 0) {
    if ((char)local_28 == '\0') {
      return;
    }
    FUN_0002153c(local_1c,1,*param_2);
    FUN_00026a1c(local_1c,*param_2);
    return;
  }
  *(undefined *)(param_1 + 0x25b) = 0;
LAB_00026716:
  FUN_000215cc(local_1c,iVar4,*param_2);
  puVar1 = DAT_00026748;
  *DAT_00026748 = 3;
  *(short *)(puVar1 + 2) = *param_2;
  return;
}


/* ---- FUN_00026868 @ 00026868 ---- */

void FUN_00026868(int param_1,short *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  char local_20 [4];
  int local_1c;
  short *psStack_18;
  
  if (*param_2 == *(short *)(param_1 + 0x25e)) {
    iVar6 = (uint)*(byte *)(param_1 + 0x25a) * 100 + param_1;
    iVar3 = (uint)*(byte *)(param_1 + 0x259) * 0x12 + iVar6;
    uVar4 = (uint)(ushort)param_2[1];
    puVar5 = (ushort *)(param_2 + 4);
    if (uVar4 == 0) {
      for (; uVar4 < *puVar5; uVar4 = uVar4 + 1) {
        uVar1 = puVar5[uVar4 * 3 + 2];
        if (uVar1 == 0x2900) {
          *(ushort *)(iVar3 + 0x16) = puVar5[uVar4 * 3 + 1];
        }
        else if (uVar1 == 0x2901) {
          *(ushort *)(iVar3 + 0x18) = puVar5[uVar4 * 3 + 1];
        }
        else if (uVar1 == 0x2902) {
          *(ushort *)(iVar3 + 0x14) = puVar5[uVar4 * 3 + 1];
        }
        else if (uVar1 == 0x2908) {
          *(ushort *)(iVar3 + 0x1a) = puVar5[uVar4 * 3 + 1];
        }
        if ((((*(short *)(iVar3 + 0x14) != 0) && (*(short *)(iVar3 + 0x16) != 0)) &&
            (*(short *)(iVar3 + 0x18) != 0)) && (*(short *)(iVar3 + 0x1a) != 0)) break;
      }
    }
    local_20[0] = '\0';
    uVar4 = *(byte *)(param_1 + 0x259) + 1;
    local_1c = param_1;
    psStack_18 = param_2;
    if (uVar4 == *(byte *)(iVar6 + 4)) {
      local_20[0] = '\x01';
LAB_00026942:
      FUN_0002153c(local_1c,1,*param_2);
      FUN_00026a1c(local_1c,*param_2);
      return;
    }
    *(char *)(param_1 + 0x259) = (char)uVar4;
    iVar3 = FUN_000214a0(param_1,local_20,*param_2);
    if (iVar3 == 0) {
      if (local_20[0] != '\0') goto LAB_00026942;
    }
    else {
      *(undefined *)(param_1 + 0x25b) = 0;
      FUN_000215cc(local_1c,iVar3,*param_2);
      puVar2 = DAT_00026958;
      *DAT_00026958 = 3;
      *(short *)(puVar2 + 2) = *param_2;
    }
  }
  return;
}


/* ---- FUN_0002695c @ 0002695c ---- */

void FUN_0002695c(int param_1)

{
  short sVar1;
  uint uVar2;
  
  *(undefined *)(DAT_000269ac + 1) = 0;
  if (*(char *)(param_1 + 8) == '\x01') {
    uVar2 = (uint)*(ushort *)(param_1 + 0x14) - (uint)*(ushort *)(param_1 + 0x16);
    if ((int)uVar2 < 0x100) {
      uVar2 = uVar2 & 0xffff;
    }
    else {
      uVar2 = 0x100;
    }
    uVar2 = *(ushort *)(param_1 + 0x16) + uVar2;
    *(short *)(param_1 + 0x16) = (short)uVar2;
    if ((uVar2 & 0xffff) != (uint)*(ushort *)(param_1 + 0x14)) {
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 8) != '\x02') {
      return;
    }
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
    sVar1 = *(short *)(param_1 + 0xe) + 1;
    *(short *)(param_1 + 0xe) = sVar1;
    if (sVar1 != *(short *)(param_1 + 0x10)) {
      return;
    }
  }
  FUN_00029df8(param_1,0);
  FUN_000293c0();
  return;
}


/* ---- FUN_000269b0 @ 000269b0 ---- */

void FUN_000269b0(int param_1,short *param_2)

{
  undefined *puVar1;
  int iVar2;
  short *psVar3;
  
  psVar3 = (short *)((uint)*(byte *)(param_1 + 0x25a) * 100 + param_1);
  if (*param_2 == *(short *)(param_1 + 0x25e)) {
    if (param_2[1] == 0) {
      *psVar3 = param_2[5];
      psVar3[1] = param_2[6];
      psVar3[3] = param_2[7];
      psVar3[4] = param_2[8];
      iVar2 = FUN_00020aa0(param_1,*param_2);
      if (iVar2 != 0) {
        *(undefined *)(param_1 + 0x25b) = 0;
        FUN_000215cc(param_1,iVar2,*param_2);
        puVar1 = DAT_00026a18;
        *DAT_00026a18 = 3;
        *(short *)(puVar1 + 2) = *param_2;
        return;
      }
    }
    else {
      FUN_0002153c(param_1,0);
      FUN_00026a1c(param_1,*param_2);
    }
  }
  return;
}


/* ---- FUN_00026a1c @ 00026a1c ---- */

void FUN_00026a1c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  iVar1 = DAT_00026a80;
  bVar2 = *(char *)(param_1 + 0x25c) + 1;
  *(byte *)(param_1 + 0x25c) = bVar2;
  if ((uint)bVar2 < *(uint *)(iVar1 + 0xc)) {
    *(undefined *)(param_1 + 0x259) = 0;
    bVar2 = *(char *)(param_1 + 0x25a) + 1;
    puVar4 = (undefined2 *)((uint)bVar2 * 100 + param_1);
    *(byte *)(param_1 + 0x25a) = bVar2;
    puVar3 = (undefined2 *)((uint)bVar2 * 4 + DAT_00026a84);
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    *(undefined *)(puVar4 + 2) = 0;
    software_interrupt(0x90);
    if (param_2 == 0) {
      return;
    }
    *(undefined *)(param_1 + 0x25b) = 0;
    FUN_000215cc(param_1,param_2,param_2,param_4,param_4);
  }
  else {
    *(undefined *)(param_1 + 0x25b) = 0;
  }
  iVar1 = DAT_00026a84;
  *(undefined *)(DAT_00026a84 + 0x18) = 3;
  *(short *)(iVar1 + 0x1a) = (short)param_2;
  return;
}


/* ---- FUN_00026a88 @ 00026a88 ---- */

void FUN_00026a88(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  
  sVar1 = *(short *)(param_2 + 6);
  iVar2 = param_2 + 0x12;
  if ((((sVar1 == *(short *)(param_1 + 0x60)) && (*(short *)(param_2 + 0x10) != 0)) &&
      (UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0xb4),
      UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) ||
     (((sVar1 == *(short *)(param_1 + 0x68) && (*(short *)(param_2 + 0x10) != 0)) &&
      (UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0xb8),
      UNRECOVERED_JUMPTABLE_00 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x00026ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(iVar2);
    return;
  }
  if ((((sVar1 != *(short *)(param_1 + 0x70)) || (*(short *)(param_2 + 0x10) == 0)) ||
      (UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0xbc),
      UNRECOVERED_JUMPTABLE_00 == (code *)0x0)) &&
     (((sVar1 != *(short *)(param_1 + 0x88) || (*(short *)(param_2 + 0x10) == 0)) ||
      (UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0xc0),
      UNRECOVERED_JUMPTABLE_00 == (code *)0x0)))) {
    if (((sVar1 == *(short *)(param_1 + 0xa0)) && (*(short *)(param_2 + 0x10) != 0)) &&
       (*(code **)(param_1 + 0xc4) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00026b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0xc4))(iVar2);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00026aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(iVar2);
  return;
}


/* ---- FUN_00026b0c @ 00026b0c ---- */

void FUN_00026b0c(void)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = DAT_00026b48;
  cVar1 = DAT_00026b48[1];
  if ((cVar1 != '\0') && (DAT_00026b48[1] = cVar1 + -1, cVar1 == '\x01')) {
    *puVar2 = 1;
    puVar2[2] = 0;
    iVar3 = FUN_0001dd8c(*(undefined4 *)(DAT_00026b4c + 8));
    if (iVar3 != 0) {
      app_error_handler(iVar3,DAT_00026b70,s__________application_user_ble_c_00026b50);
    }
  }
  FUN_000286e0(s_one_seoncd__d_00026b74,puVar2[1]);
  return;
}


/* ---- FUN_00026b84 @ 00026b84 ---- */

undefined4 FUN_00026b84(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *local_28 [2];
  undefined4 uStack_20;
  uint uStack_1c;
  int local_18;
  
  iVar1 = DAT_00026bf8;
  uVar2 = 0;
  if (*(uint *)(DAT_00026bf8 + 0x74) < 4) {
    iVar5 = DAT_00026bf8 + 0x78;
    if (*(uint *)(DAT_00026bf8 + 0xbc) <= 8 - param_2) {
      uStack_20 = param_1;
      uStack_1c = param_2;
      local_18 = param_3;
      FUN_0001b19c((*(uint *)(DAT_00026bf8 + 0x74) + *(int *)(DAT_00026bf8 + 0x70) & 3) * 0x1c +
                   DAT_00026bf8,param_1);
      *(int *)(iVar1 + 0x74) = *(int *)(iVar1 + 0x74) + 1;
      if (param_2 != 0) {
        local_28[0] = (undefined4 *)
                      (((uint)((*(int *)(iVar1 + 0xbc) + *(int *)(iVar1 + 0xb8)) * 0x20000000) >>
                       0x1a) + iVar5);
        for (uVar4 = 0; uVar4 < param_2; uVar4 = uVar4 + 1) {
          puVar3 = (undefined4 *)(uVar4 * 8 + local_18);
          uVar2 = puVar3[1];
          *local_28[0] = *puVar3;
          local_28[0][1] = uVar2;
          FUN_00020afc(local_28);
        }
        *(uint *)(iVar1 + 0xbc) = *(int *)(iVar1 + 0xbc) + param_2;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* ---- FUN_00026bfc @ 00026bfc ---- */

undefined8 FUN_00026bfc(int param_1,int param_2)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined local_26;
  undefined local_24 [24];
  
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  FUN_0001b1ce(local_48,0x1c);
  local_48[0] = local_48[0] & 0xf7 | 2;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_26 = *(undefined *)(param_1 + 0x5a);
  local_28 = 0xff05;
  local_2c = 0x20011;
  FUN_0001b1ce(local_24,0x14);
  software_interrupt(0xa2);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 0x20));
}


/* ---- FUN_00026c8e @ 00026c8e ---- */

void FUN_00026c8e(int param_1,short param_2)

{
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + param_2 + 3;
  *(short *)(param_1 + 10) = (*(short *)(param_1 + 10) - param_2) + -3;
  return;
}


/* ---- FUN_00026ca0 @ 00026ca0 ---- */

void FUN_00026ca0(int param_1,short *param_2,undefined *param_3)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  
  uVar4 = 0;
  *param_2 = 2;
  for (piVar3 = (int *)(param_1 + 8); (piVar3 < (int *)(param_1 + 0x400) && (*piVar3 != -1));
      piVar3 = piVar3 + uVar1 + 3) {
    iVar2 = FUN_00022b88(piVar3);
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    else if (*(uint *)(DAT_00026cf4 + 4) < (uint)piVar3[2]) {
      *(int *)(DAT_00026cf4 + 4) = piVar3[2];
    }
    uVar1 = *(ushort *)((int)piVar3 + 2);
    *param_2 = *param_2 + uVar1 + 3;
  }
  if (param_3 != (undefined *)0x0) {
    *param_3 = uVar4;
  }
  return;
}


/* ---- FUN_00026cf8 @ 00026cf8 ---- */

void FUN_00026cf8(undefined4 param_1)

{
  FUN_00022294(DAT_00026d10,param_1,DAT_00026d0c,2,0);
  return;
}


/* ---- FUN_00026d14 @ 00026d14 ---- */

void FUN_00026d14(void)

{
  FUN_00022294(DAT_00026d34,*DAT_00026d2c,DAT_00026d30,2,0);
  return;
}


/* ---- FUN_00026d38 @ 00026d38 ---- */

uint FUN_00026d38(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar2 = DAT_00026e14;
  uVar9 = 0;
  uVar8 = 0;
  uVar10 = 0;
  bVar1 = false;
  do {
    ppiVar4 = DAT_00026e24;
    iVar7 = DAT_00026e20;
    piVar5 = (int *)(*DAT_00026e18 + uVar10 * 0x400);
    if (*piVar5 == iVar2) {
      if (piVar5[1] + DAT_00026e1c == 0) {
        *(undefined *)(DAT_00026e20 + uVar8 * 0x10) = 0;
        iVar7 = uVar8 * 0x10 + iVar7;
        *(int **)(iVar7 + 4) = piVar5;
        FUN_00026ca0(piVar5,iVar7 + 8,iVar7 + 0xe);
        uVar9 = uVar9 | 2;
LAB_00026d72:
        uVar8 = uVar8 + 1 & 0xffff;
      }
      else {
        if (piVar5[1] + DAT_00026e1c != 1) goto LAB_00026d5e;
        if (bVar1) {
          *(undefined *)(DAT_00026e20 + uVar8 * 0x10) = 2;
          iVar7 = uVar8 * 0x10 + DAT_00026e20;
          *(int **)(iVar7 + 4) = *DAT_00026e24;
          *(undefined2 *)(iVar7 + 8) = 2;
          uVar8 = uVar8 + 1 & 0xffff;
        }
        ppiVar4 = DAT_00026e24;
        *DAT_00026e24 = piVar5;
        FUN_00026ca0(piVar5,ppiVar4 + 1,0);
        if (*(short *)(DAT_00026e24 + 1) == 2) {
          uVar6 = 4;
        }
        else {
          uVar6 = 8;
        }
        uVar9 = uVar9 | uVar6;
      }
    }
    else {
LAB_00026d5e:
      uVar6 = 0;
      do {
        if (piVar5[uVar6] != -1) {
          *(undefined *)(DAT_00026e20 + uVar8 * 0x10) = 3;
          goto LAB_00026d72;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x100);
      if (*DAT_00026e24 == (int *)0x0) {
        *DAT_00026e24 = piVar5;
        *(undefined2 *)(ppiVar4 + 1) = 2;
        bVar1 = true;
      }
      else {
        *(undefined *)(DAT_00026e20 + uVar8 * 0x10) = 2;
        iVar7 = uVar8 * 0x10 + iVar7;
        *(int **)(iVar7 + 4) = piVar5;
        iVar3 = DAT_00026e20;
        *(undefined2 *)(iVar7 + 8) = 2;
        *(short *)(iVar3 + 0x22) = (short)uVar8;
        uVar8 = uVar8 + 1 & 0xffff;
      }
      uVar9 = uVar9 | 1;
    }
    uVar10 = uVar10 + 1 & 0xffff;
    if (2 < uVar10) {
      return uVar9;
    }
  } while( true );
}


/* ---- FUN_00026e28 @ 00026e28 ---- */

void FUN_00026e28(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined local_1c [2];
  undefined2 local_1a;
  int local_18;
  
  puVar1 = DAT_00026e90;
  local_20 = DAT_00026e8c[2];
  local_28 = CONCAT22((short)param_1,(short)*DAT_00026e8c);
  iVar2 = FUN_0001f6b8(param_1,DAT_00026e90[2]);
  if (iVar2 == 0) {
    iVar2 = FUN_00027360(param_2,7);
    if ((iVar2 != 0) && (iVar2 == 5)) {
      local_1c[0] = 9;
      local_1a = (short)param_1;
      local_18 = iVar2;
      FUN_00021850(local_1c);
    }
  }
  else {
    FUN_00022fb0(param_2);
  }
  FUN_0001f6dc(param_1,*puVar1,0);
  FUN_00021850(&local_28);
  return;
}


/* ---- FUN_00026e94 @ 00026e94 ---- */

void FUN_00026e94(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00026eb8;
  if (((param_1 == DAT_00026eb4) || (iVar1 = DAT_00026ec0, param_1 == DAT_00026ebc)) ||
     (iVar1 = DAT_00026ec8, param_1 == DAT_00026ec4)) {
    *(undefined4 *)(iVar1 + 0xc) = param_2;
  }
  return;
}


/* ---- FUN_00026ecc @ 00026ecc ---- */

void FUN_00026ecc(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint local_28;
  undefined2 local_24 [8];
  
  iVar1 = FUN_0001f6a0();
  if (iVar1 != 0) {
    FUN_0001f494(&local_28);
    for (uVar2 = 0; uVar2 < local_28; uVar2 = uVar2 + 1) {
      iVar1 = FUN_0001f6b8(local_24[uVar2],param_1);
      if (iVar1 != 0) {
        FUN_0002a808(local_24[uVar2]);
      }
    }
  }
  return;
}


/* ---- FUN_00026f08 @ 00026f08 ---- */

void FUN_00026f08(code **param_1,undefined *param_2,int param_3)

{
  int iVar1;
  undefined local_88 [4];
  uint local_84;
  undefined local_80;
  byte local_7f;
  undefined local_7e;
  undefined local_7d;
  
  if (param_3 != 8) {
    local_88[0] = 3;
    (**param_1)();
  }
  local_80 = *param_2;
  local_7f = (byte)((local_7f >> 1 & 0x78) << 1) & 0xef | param_2[1] & 1 |
             (byte)((((uint)(byte)param_2[1] << 0x1e) >> 0x1f) << 1) |
             (byte)((((uint)(byte)param_2[1] << 0x1d) >> 0x1f) << 2) |
             (byte)((((uint)(byte)param_2[1] << 0x1c) >> 0x1f) << 3) |
             (byte)((((uint)(byte)param_2[1] << 0x1b) >> 0x1f) << 4);
  local_7e = param_2[2];
  local_7d = param_2[3];
  local_84 = (uint)(byte)param_2[6] << 0x10 | (uint)(byte)param_2[7] << 0x18 |
             (uint)*(ushort *)(param_2 + 4);
  iVar1 = FUN_0001f1aa(&local_84);
  if (iVar1 == 0) {
    local_88[0] = 2;
  }
  else {
    local_88[0] = 3;
  }
  (**param_1)(local_88);
  return;
}


/* ---- FUN_00026fbc @ 00026fbc ---- */

void FUN_00026fbc(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_00026fd4;
  uVar2 = 0;
  do {
    (**(code **)(iVar1 + uVar2 * 4))(param_1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 5);
  return;
}


/* ---- FUN_00026fd8 @ 00026fd8 ---- */

longlong FUN_00026fd8(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_00027018;
  uVar2 = 0;
  do {
    FUN_0002cad0(uVar2 * 0x14 + iVar1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  uVar2 = 1;
  iVar1 = FUN_00027ada(DAT_00027020 + 0x280,DAT_00027020,0x280,DAT_0002701c,1,8,0x50);
  if (iVar1 != 0) {
    return CONCAT44(uVar2,3);
  }
  *(undefined *)(DAT_0002701c + 1) = 1;
  return (ulonglong)uVar2 << 0x20;
}


/* ---- FUN_00027024 @ 00027024 ---- */

void FUN_00027024(void)

{
  FUN_00027594();
  return;
}


/* ---- FUN_0002702c @ 0002702c ---- */

void FUN_0002702c(void)

{
  FUN_0002759c();
  return;
}


/* ---- FUN_00027034 @ 00027034 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00027062) */
/* WARNING: Removing unreachable block (ram,0x00027062) */

void FUN_00027034(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = FUN_0002ca84(*(undefined2 *)(param_1 + 2),param_1[4],param_3,param_4,
                       (uint)*(ushort *)(param_1 + 2) << 0x10,param_1[4],0,0,0);
  uVar3 = (uint)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00027062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = uVar3;
  if (DAT_00027066 <= uVar3) {
    uVar1 = (uint)DAT_00027066;
  }
  (*(code *)((uint)*(byte *)(uVar1 + 0x27067) * 2 + 0x27067))(uVar2,uVar3,4);
  return;
}


/* ---- FUN_0002718c @ 0002718c ---- */

void FUN_0002718c(void)

{
  FUN_00027728();
  return;
}


/* ---- FUN_00027194 @ 00027194 ---- */

void FUN_00027194(undefined4 param_1,undefined4 param_2,ushort *param_3,int param_4)

{
  int local_18;
  
  local_18 = param_4;
  debug_printf_stub(s_pdb_peer_data_load__d_000271b8,param_1);
  local_18 = (uint)*param_3 << 2;
  FUN_00027608(param_1,param_2,param_3,&local_18);
  return;
}


/* ---- FUN_000271d0 @ 000271d0 ---- */

void FUN_000271d0(void)

{
  FUN_00027608();
  return;
}


/* ---- FUN_000271da @ 000271da ---- */

int FUN_000271da(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  
  iVar2 = 0;
  local_10 = 0;
  while( true ) {
    iVar1 = FUN_0002caa8(param_1,&local_10);
    if (iVar1 == 0) break;
    iVar1 = FUN_00027360(param_1,*(undefined *)(iVar1 + 2));
    if ((iVar1 != 0) && (iVar1 != 5)) {
      iVar2 = 3;
    }
    local_10 = local_10 + 1;
  }
  if ((iVar2 == 0) && (iVar1 = FUN_00027738(param_1), iVar1 != 0)) {
    if (iVar1 == 7) {
      iVar2 = 7;
    }
    else {
      iVar2 = 3;
    }
  }
  return iVar2;
}


/* ---- FUN_00027224 @ 00027224 ---- */

void FUN_00027224(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  debug_printf_stub(s_pdb_raw_store__d_00027244,param_1);
  FUN_00027678(param_1,param_2,0,param_3);
  return;
}


/* ---- FUN_00027258 @ 00027258 ---- */

undefined4 FUN_00027258(undefined4 param_1,int param_2,uint param_3,short *param_4)

{
  bool bVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_4 == (short *)0x0) {
    return 0xe;
  }
  if ((((param_2 != 7) && (param_2 != 8)) || (param_3 == 0)) ||
     ((8 < param_3 || (iVar2 = FUN_0002774e(param_1), iVar2 == 0)))) {
    return 7;
  }
  bVar1 = false;
  puVar3 = (undefined2 *)FUN_0002ca84(param_1,param_2);
  if (puVar3 == (undefined2 *)0x0) {
LAB_000272e6:
    puVar3 = (undefined2 *)FUN_0002ca84(DAT_0002735c,0xff);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = (short)param_1;
      *(char *)(puVar3 + 1) = (char)param_2;
      goto LAB_000272f8;
    }
LAB_00027300:
    uVar4 = 0x11;
  }
  else {
    if (*(uint *)(puVar3 + 6) < param_3) {
      for (uVar5 = 0; uVar5 < *(uint *)(puVar3 + 6); uVar5 = uVar5 + 1 & 0xff) {
        FUN_00027b4a(DAT_00027358,*(byte *)(puVar3 + 8) + uVar5 & 0xff);
      }
      FUN_0002cad0(puVar3);
      goto LAB_000272e6;
    }
    if (param_3 < *(uint *)(puVar3 + 6)) {
      for (uVar5 = param_3 & 0xff; uVar5 < *(uint *)(puVar3 + 6); uVar5 = uVar5 + 1 & 0xff) {
        FUN_00027b4a(DAT_00027358,*(byte *)(puVar3 + 8) + uVar5 & 0xff);
      }
      if (puVar3 == (undefined2 *)0x0) goto LAB_000272e6;
    }
LAB_000272f8:
    if (*(char *)(puVar3 + 8) == -1) {
      iVar2 = FUN_00027a7c(DAT_00027358,param_3);
      *(char *)(puVar3 + 8) = (char)iVar2;
      if (iVar2 == 0xff) {
        FUN_0002cad0(puVar3);
        goto LAB_00027300;
      }
      bVar1 = true;
    }
    *(uint *)(puVar3 + 6) = param_3;
    iVar2 = FUN_00027b1c(DAT_00027358,*(undefined *)(puVar3 + 8));
    if (iVar2 == 0) {
      uVar4 = 3;
    }
    else {
      FUN_00027870(param_4,param_2,iVar2,param_3 & 0xffff);
      if ((bVar1) && (param_2 == 8)) {
        *(short *)(*(int *)(param_4 + 2) + 4) = *param_4 * 4 + -6;
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* ---- FUN_00027360 @ 00027360 ---- */

int FUN_00027360(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_0002ca84();
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 4) != 0) && (iVar2 = FUN_00027786(), iVar2 != 0)) {
      iVar2 = 3;
    }
    FUN_0002caf4(iVar1);
    return iVar2;
  }
  return 5;
}


/* ---- FUN_0002738c @ 0002738c ---- */

int FUN_0002738c(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  undefined4 local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  debug_printf_stub(s________________pdb_write_buf_sto_00027454,param_1);
  if ((param_2 != 7) && (param_2 != 8)) {
    return 7;
  }
  local_14 = 0;
  local_18 = (param_2 & 0xff) << 0x10;
  iVar2 = FUN_0002ca84(param_1,param_2);
  if (iVar2 == 0) {
    return 5;
  }
  if ((*(byte *)(iVar2 + 0x11) & 1) == 0) {
    iVar3 = FUN_00027b1c(DAT_0002747c,*(undefined *)(iVar2 + 0x10));
    if (iVar3 == 0) {
      return 3;
    }
    FUN_00027796(&local_18,param_2,iVar3,*(undefined4 *)(iVar2 + 0xc));
    FUN_0002ca60(&local_18);
    iVar4 = FUN_00027678(param_1,&local_18,*(undefined4 *)(iVar2 + 4),iVar2 + 8);
    iVar3 = DAT_00027480;
    bVar1 = *(byte *)(iVar2 + 0x11);
    if (((int)((uint)bVar1 << 0x1d) < 0) && ((int)((uint)bVar1 << 0x1e) < 0)) {
      *(int *)(DAT_00027480 + 4) = *(int *)(DAT_00027480 + 4) + -1;
    }
    if (iVar4 == 0) {
      bVar1 = bVar1 & 0xf9 | 1;
    }
    else {
      if (iVar4 == 0x11) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        *(byte *)(iVar2 + 0x11) = bVar1 & 0xfd | 4;
        return 0;
      }
      if (iVar4 != 0x86) {
        if (iVar4 == 7) {
          return 7;
        }
        return 3;
      }
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      bVar1 = bVar1 & 0xfb | 2;
    }
    *(byte *)(iVar2 + 0x11) = bVar1;
    return iVar4;
  }
  return 0;
}


/* ---- FUN_00027484 @ 00027484 ---- */

int FUN_00027484(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_18;
  undefined4 local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  debug_printf_stub(s_pdb_write_buf_store_prepare__d_000274f4,param_1);
  if ((param_2 != 7) && (param_2 != 8)) {
    return 7;
  }
  iVar1 = FUN_0002ca84(param_1,param_2);
  if (iVar1 == 0) {
    return 5;
  }
  if (*(int *)(iVar1 + 4) != 0) {
    return 0;
  }
  iVar2 = FUN_00027b1c(DAT_00027514,*(undefined *)(iVar1 + 0x10));
  local_14 = 0;
  local_18 = (param_2 & 0xff) << 0x10;
  if (iVar2 != 0) {
    FUN_00027796(&local_18,param_2,iVar2,*(undefined4 *)(iVar1 + 0xc));
    FUN_0002ca60(&local_18);
    iVar1 = FUN_00027756(&local_18,iVar1 + 4);
    if (iVar1 != 9) {
      return iVar1;
    }
  }
  return 3;
}


/* ---- thunk_FUN_00027034 @ 00027518 ---- */

void thunk_FUN_00027034(void)

{
  (**DAT_00027520)();
  return;
}


/* ---- FUN_00027524 @ 00027524 ---- */

undefined4 FUN_00027524(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined auStack_20 [16];
  
  iVar2 = FUN_00021e94(DAT_00027588);
  if (iVar2 == 0) {
    iVar2 = FUN_00021d10();
    if (iVar2 == 0) {
      FUN_0002791c();
      iVar2 = DAT_0002758c;
      local_28 = 0;
      iVar5 = DAT_0002758c + -7;
      local_24 = 0;
      while (iVar4 = FUN_00021de6(iVar2,auStack_20,&local_28), iVar4 == 0) {
        FUN_00021e1c(auStack_20,local_30);
        uVar1 = *(ushort *)(local_30[0] + 4);
        FUN_00021d98(auStack_20);
        FUN_00027884((uint)uVar1 - iVar5 & 0xffff);
      }
      *DAT_00027590 = 1;
      uVar3 = 0;
    }
    else {
      uVar3 = 0x86;
    }
  }
  else {
    uVar3 = 3;
  }
  return uVar3;
}


/* ---- FUN_00027594 @ 00027594 ---- */

void FUN_00027594(void)

{
  FUN_000278d8();
  return;
}


/* ---- FUN_0002759c @ 0002759c ---- */

void FUN_0002759c(void)

{
  FUN_000278e8();
  return;
}


/* ---- FUN_000275a4 @ 000275a4 ---- */

undefined4 FUN_000275a4(short param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined auStack_28 [12];
  int local_1c;
  undefined4 local_18;
  
  iVar2 = FUN_00021de6(param_1 + -0x4000,auStack_28,DAT_000275f4);
  if ((iVar2 == 0) && (iVar2 = FUN_00021e1c(auStack_28,&local_1c), iVar2 == 0)) {
    *(char *)(param_3 + 1) = (char)param_1;
    *param_3 = *(undefined2 *)(local_1c + 2);
    *(undefined4 *)(param_3 + 2) = local_18;
    uVar1 = FUN_00021f44(*(undefined2 *)(local_1c + 4));
    *param_2 = uVar1;
    FUN_00021d98(auStack_28);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* ---- FUN_000275f8 @ 000275f8 ---- */

void FUN_000275f8(void)

{
  int iVar1;
  
  iVar1 = DAT_00027604;
  *(undefined4 *)(DAT_00027604 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}


/* ---- FUN_00027608 @ 00027608 ---- */

undefined4 FUN_00027608(uint param_1,undefined4 param_2,ushort *param_3,uint *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_2c;
  undefined4 local_28;
  undefined auStack_24 [16];
  
  if ((param_1 < 0x100) && (iVar2 = FUN_00027850(param_2), iVar2 != 0)) {
    iVar2 = FUN_00027820(param_1,param_2,auStack_24);
    if ((iVar2 == 0) && (iVar2 = FUN_00021e1c(auStack_24,&local_2c), iVar2 == 0)) {
      *(char *)(param_3 + 1) = (char)param_2;
      uVar1 = *(ushort *)(local_2c + 2);
      *param_3 = uVar1;
      if (param_4 == (uint *)0x0) {
        *(undefined4 *)(param_3 + 2) = local_28;
      }
      else {
        if ((uint)uVar1 * 4 < *param_4) {
          return 4;
        }
        FUN_0001b19c(*(undefined4 *)(param_3 + 2),local_28);
      }
      FUN_00021d98(auStack_24);
      uVar3 = 0;
    }
    else {
      uVar3 = 5;
    }
  }
  else {
    uVar3 = 7;
  }
  return uVar3;
}


/* ---- FUN_00027678 @ 00027678 ---- */

undefined4 FUN_00027678(uint param_1,undefined2 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_40;
  short local_3e;
  undefined4 *local_3c;
  undefined2 local_38;
  undefined auStack_34 [12];
  undefined4 local_28;
  undefined2 local_24;
  uint uStack_20;
  undefined2 *puStack_1c;
  int local_18;
  int iStack_14;
  
  if ((param_1 < 0x100) &&
     (uStack_20 = param_1, puStack_1c = param_2, local_18 = param_3, iStack_14 = param_4,
     iVar1 = FUN_00027850(*(undefined *)(param_2 + 1)), iVar1 != 0)) {
    local_28 = *(undefined4 *)(param_2 + 2);
    local_24 = *param_2;
    local_40 = FUN_00027990(param_1);
    local_3e = *(byte *)(param_2 + 1) + 0xc000;
    local_3c = &local_28;
    local_38 = 1;
    iVar1 = FUN_00027820(param_1,*(undefined *)(param_2 + 1),auStack_34);
    if (iVar1 == 5) {
      if (local_18 == 0) {
        iVar1 = FUN_00021e74(auStack_34,&local_40);
      }
      else {
        iVar1 = FUN_00021e80(auStack_34,&local_40,&local_18);
      }
    }
    else {
      if (local_18 != 0) {
        FUN_00021eec(&local_18);
      }
      iVar1 = FUN_00021e60(auStack_34,&local_40);
    }
    if (iVar1 == 0) {
      if (param_4 != 0) {
        FUN_00021e06(auStack_34,param_4);
      }
      uVar2 = 0;
    }
    else if (iVar1 == 7) {
      uVar2 = 0x86;
    }
    else if ((iVar1 == 8) || (iVar1 == 0xe)) {
      uVar2 = 0x11;
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 7;
  }
  return uVar2;
}


/* ---- FUN_00027728 @ 00027728 ---- */

void FUN_00027728(void)

{
  FUN_00027884(DAT_00027734);
  return;
}


/* ---- FUN_00027738 @ 00027738 ---- */

undefined4 FUN_00027738(uint param_1)

{
  if (0xff < param_1) {
    return 7;
  }
  FUN_00027894();
  FUN_000277a0();
  return 0;
}


/* ---- FUN_0002774e @ 0002774e ---- */

void FUN_0002774e(void)

{
  FUN_00027944();
  return;
}


/* ---- FUN_00027756 @ 00027756 ---- */

int FUN_00027756(undefined2 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00027850(*(undefined *)(param_1 + 1));
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = FUN_00021eb8(param_2,*param_1);
  if (iVar1 != 0) {
    if (iVar1 == 7) {
      return 0x86;
    }
    if (iVar1 != 9) {
      iVar1 = 3;
    }
  }
  return iVar1;
}


/* ---- FUN_00027786 @ 00027786 ---- */

int FUN_00027786(undefined4 param_1)

{
  int iVar1;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_1;
  iVar1 = FUN_00021eec(auStack_8);
  if (iVar1 != 0) {
    iVar1 = 3;
  }
  return iVar1;
}


/* ---- FUN_00027796 @ 00027796 ---- */

void FUN_00027796(void)

{
  FUN_00027870();
  return;
}


/* ---- FUN_000277a0 @ 000277a0 ---- */

void FUN_000277a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined local_38 [2];
  undefined2 local_36;
  undefined local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined auStack_20 [12];
  
  iVar1 = DAT_00027818;
  local_28 = 0;
  local_24 = 0;
  iVar2 = DAT_00027818;
  while (iVar2 = FUN_000278d8(iVar2), iVar2 != iVar1) {
    uVar3 = FUN_00027990();
    iVar4 = FUN_00021df6(uVar3,auStack_20,&local_28);
    if (iVar4 != 10) break;
    FUN_000278bc(iVar2);
  }
  iVar4 = DAT_0002781c;
  if ((*(char *)(DAT_0002781c + 2) == '\0') && (iVar2 != iVar1)) {
    *(undefined *)(DAT_0002781c + 2) = 1;
    local_2c = FUN_00021c7c(iVar2 + 0xc000U & 0xffff);
    if (local_2c == 8) {
      *(undefined *)(iVar4 + 1) = 1;
    }
    else if (local_2c != 0) {
      *(undefined *)(iVar4 + 2) = 0;
      local_38[0] = 9;
      local_36 = (undefined2)iVar2;
      local_34 = 0xff;
      local_30 = 0;
      thunk_FUN_00027034(local_38);
    }
  }
  return;
}


/* ---- FUN_00027820 @ 00027820 ---- */

int FUN_00027820(short param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  FUN_00027850(param_2);
  local_18 = 0;
  local_14 = 0;
  iVar1 = FUN_00021dd8(param_1 + -0x4000,param_2 + 0xc000U & 0xffff,param_3,&local_18);
  if (iVar1 != 0) {
    iVar1 = 5;
  }
  return iVar1;
}


/* ---- FUN_00027850 @ 00027850 ---- */

undefined4 FUN_00027850(int param_1)

{
  if ((((param_1 != 7) && (param_1 != 1)) && (param_1 != 8)) &&
     (((param_1 != 5 && (param_1 != 6)) && (param_1 != 4)))) {
    return 0;
  }
  return 1;
}


/* ---- FUN_00027870 @ 00027870 ---- */

void FUN_00027870(undefined2 *param_1,undefined param_2,undefined4 param_3,short param_4)

{
  *(undefined *)(param_1 + 1) = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  *param_1 = (short)((ushort)(param_4 * 0x50) + 3 >> 2);
  return;
}


/* ---- FUN_00027884 @ 00027884 ---- */

void FUN_00027884(undefined4 param_1)

{
  FUN_00020b14(param_1,DAT_00027890);
  return;
}


/* ---- FUN_00027894 @ 00027894 ---- */

undefined4 FUN_00027894(int param_1)

{
  int iVar1;
  
  if ((param_1 != DAT_000278b4) && (iVar1 = FUN_00020b14(param_1,DAT_000278b8), iVar1 == param_1)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_000278bc @ 000278bc ---- */

void FUN_000278bc(undefined4 param_1)

{
  FUN_0002981c(param_1,DAT_000278d4);
  FUN_0002981c(param_1,DAT_000278d4 + 0x20);
  return;
}


/* ---- FUN_000278d8 @ 000278d8 ---- */

void FUN_000278d8(undefined4 param_1)

{
  FUN_00024a78(param_1,DAT_000278e4);
  return;
}


/* ---- FUN_000278e8 @ 000278e8 ---- */

int FUN_000278e8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00024a78(param_1,DAT_00027914);
  iVar1 = DAT_00027918;
  while( true ) {
    if (iVar2 == iVar1) {
      return iVar2;
    }
    iVar3 = FUN_0002795c();
    if (iVar3 == 0) break;
    iVar2 = FUN_00024a78(iVar2,DAT_00027914);
  }
  return iVar2;
}


/* ---- FUN_0002791c @ 0002791c ---- */

void FUN_0002791c(void)

{
  FUN_0001b1ce(DAT_00027940,0x40);
  FUN_000280b8(DAT_00027940,0x100);
  FUN_000280b8(DAT_00027940 + 0x20,0x100);
  return;
}


/* ---- FUN_00027944 @ 00027944 ---- */

undefined4 FUN_00027944(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x100) {
    uVar1 = FUN_00028118(DAT_00027958,param_1);
    return uVar1;
  }
  return 0;
}


/* ---- FUN_0002795c @ 0002795c ---- */

undefined4 FUN_0002795c(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x100) {
    uVar1 = FUN_00028118(DAT_00027970,param_1);
    return uVar1;
  }
  return 0;
}


/* ---- FUN_00027974 @ 00027974 ---- */

void FUN_00027974(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00022928();
  if (iVar1 != 0xff) {
    *(undefined2 *)(DAT_0002798c + iVar1 * 0xc) = param_2;
  }
  return;
}


/* ---- FUN_00027990 @ 00027990 ---- */

short FUN_00027990(short param_1)

{
  return param_1 + -0x4000;
}


/* ---- FUN_0002799c @ 0002799c ---- */

void FUN_0002799c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00028034();
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_00027a44,s__________application_user_ble_c_00027a24);
  }
  if ((param_1 != 0) && (iVar1 = FUN_0002837c(), iVar1 != 0)) {
    app_error_handler(iVar1,DAT_00027a44 + 5,s__________application_user_ble_c_00027a24);
  }
  iVar1 = FUN_000283e8();
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_00027a44 + 0x19,s__________application_user_ble_c_00027a24);
  }
  iVar1 = FUN_000283b8(DAT_00027a48);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_00027a44 + 0x1c,s__________application_user_ble_c_00027a24);
  }
  return;
}


/* ---- FUN_00027a4c @ 00027a4c ---- */

undefined4 FUN_00027a4c(int param_1)

{
  if ('\x03' < *(char *)(DAT_00027a60 + param_1 + 0x24)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00027a64 @ 00027a64 ---- */

undefined4 FUN_00027a64(int param_1)

{
  if (*(byte *)(DAT_00027a78 + param_1 + 0x24) < 4) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00027a7c @ 00027a7c ---- */

uint FUN_00027a7c(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) {
    uVar2 = 0xff;
    for (uVar3 = 0; uVar3 < (uint)param_1[2]; uVar3 = uVar3 + 1 & 0xff) {
      iVar1 = FUN_000280c8(param_1[1],uVar3);
      if (iVar1 == 0) {
        if (uVar2 != 0xff) {
          for (; uVar2 < uVar3; uVar2 = uVar2 + 1 & 0xff) {
            FUN_00027b4a(param_1,uVar2);
          }
          uVar2 = 0xff;
        }
      }
      else {
        if (uVar2 == 0xff) {
          uVar2 = uVar3;
        }
        if ((uVar3 - uVar2) + 1 == param_2) {
          return uVar2;
        }
      }
    }
  }
  return 0xff;
}


/* ---- FUN_00027ada @ 00027ada ---- */

undefined4
FUN_00027ada(int *param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6,int param_7
            )

{
  uint uVar1;
  
  if ((((param_1 != (int *)0x0) && (param_2 != 0)) && (param_4 != 0)) &&
     (((param_7 * param_6 < param_3 || param_7 * param_6 - param_3 == 0 &&
       (uVar1 = param_6 + 7 >> 3, uVar1 <= param_5)) && ((param_6 != 0 && (param_7 != 0)))))) {
    param_1[3] = param_7;
    param_1[2] = param_6;
    *param_1 = param_2;
    param_1[1] = param_4;
    FUN_000280b8(param_4,param_6 & 0xffff,uVar1,param_4,param_4);
    return 0;
  }
  return 7;
}


/* ---- FUN_00027b1c @ 00027b1c ---- */

int FUN_00027b1c(int *param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) &&
     ((param_2 != 0xff && (iVar1 = FUN_00028118(), iVar1 != 0)))) {
    return *param_1 + param_2 * param_1[3];
  }
  return 0;
}


/* ---- FUN_00027b4a @ 00027b4a ---- */

void FUN_00027b4a(int *param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) &&
     ((param_2 != 0xff && (iVar1 = FUN_00028118(), iVar1 != 0)))) {
    FUN_00028130(param_1[1],param_2);
  }
  return;
}


/* ---- FUN_00027b74 @ 00027b74 ---- */

void FUN_00027b74(void)

{
  FUN_0002a44c();
  return;
}


/* ---- FUN_00027b7c @ 00027b7c ---- */

undefined4 FUN_00027b7c(undefined4 param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  
  pcVar1 = DAT_00027bf4;
  if (*DAT_00027bf4 == '\0') {
    return 8;
  }
  if (param_2 != (byte *)0x0) {
    iVar3 = FUN_0001f63c(param_1);
    if (iVar3 != 0) {
      if (iVar3 == 2) {
        bVar2 = *param_2 | 1;
      }
      else {
        bVar2 = *param_2 & 0xfe;
      }
      *param_2 = bVar2;
      iVar3 = FUN_0001f6b8(param_1,pcVar1[5]);
      *param_2 = *param_2 & 0xf7 | (byte)(iVar3 << 3);
      iVar3 = FUN_0001f4a8(param_1);
      *param_2 = *param_2 & 0xfd | (byte)(iVar3 << 1);
      iVar3 = FUN_0001f4bc(param_1);
      *param_2 = *param_2 & 0xfb | (byte)(iVar3 << 2);
      return 0;
    }
    return DAT_00027bf8;
  }
  return 0xe;
}


/* ---- FUN_00027bfc @ 00027bfc ---- */

undefined4 FUN_00027bfc(void)

{
  undefined4 uVar1;
  
  if (*DAT_00027c10 != '\0') {
    uVar1 = FUN_0002a4b8();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_00027c14 @ 00027c14 ---- */

undefined4 FUN_00027c14(void)

{
  undefined4 uVar1;
  
  if (*DAT_00027c28 != '\0') {
    uVar1 = FUN_00022e6c();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_00027f54 @ 00027f54 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00027f7c) */
/* WARNING: Removing unreachable block (ram,0x00027f7c) */

void FUN_00027f54(byte *param_1)

{
  uint uVar1;
  undefined auStack_28 [2];
  undefined2 local_26;
  undefined2 local_24;
  
  FUN_0001b1ce(auStack_28,0x14);
  local_24 = *(undefined2 *)(param_1 + 2);
  local_26 = FUN_00022e40();
  uVar1 = (uint)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00027f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (DAT_00027f80 <= uVar1) {
    uVar1 = (uint)DAT_00027f80;
  }
  (*(code *)((uint)*(byte *)(uVar1 + 0x27f81) * 2 + 0x27f81))(0,7,8);
  return;
}


/* ---- FUN_00027fe4 @ 00027fe4 ---- */

void FUN_00027fe4(char *param_1)

{
  undefined local_20 [2];
  undefined2 local_1e;
  undefined2 local_1c;
  
  if (*param_1 == '\0') {
    FUN_00028364(*(undefined2 *)(param_1 + 6));
  }
  else if (*param_1 == '\x01') {
    FUN_0001f6dc(*(undefined2 *)(param_1 + 2),*(undefined *)(DAT_00028030 + 5),1);
    FUN_0001b1ce(local_20,0x14);
    local_1e = *(undefined2 *)(param_1 + 2);
    local_1c = FUN_00022fdc(*(undefined2 *)(param_1 + 2));
    local_20[0] = 0;
    FUN_00021828(local_20);
  }
  return;
}


/* ---- FUN_00028034 @ 00028034 ---- */

undefined4 FUN_00028034(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = FUN_00027524();
  if ((((iVar2 == 0) && (iVar2 = FUN_00026fd8(), iVar2 == 0)) &&
      (iVar2 = FUN_0002a468(), iVar2 == 0)) &&
     (((iVar2 = FUN_0002a68c(), iVar2 == 0 && (iVar2 = FUN_00022798(), iVar2 == 0)) &&
      ((iVar2 = FUN_000229ac(), iVar2 == 0 &&
       (iVar2 = FUN_00022e70(), puVar1 = DAT_000280a0, iVar2 == 0)))))) {
    *(undefined2 *)(DAT_000280a0 + 6) = 0xffff;
    *(undefined4 *)(puVar1 + 8) = 0;
    puVar1[4] = 0x18;
    puVar1[5] = 0x18;
    iVar2 = FUN_0001f670();
    puVar1[4] = (char)iVar2;
    if (iVar2 != 0x18) {
      iVar2 = FUN_0001f670();
      puVar1[5] = (char)iVar2;
      if (iVar2 != 0x18) {
        puVar1[1] = 0;
        *puVar1 = 1;
        return 0;
      }
    }
  }
  return 3;
}


/* ---- FUN_000280a4 @ 000280a4 ---- */

void FUN_000280a4(void)

{
  if (*DAT_000280b4 != '\0') {
    FUN_000227e0();
  }
  return;
}


/* ---- FUN_000280b8 @ 000280b8 ---- */

void FUN_000280b8(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_0001b1ce(param_1,param_2 + 7U >> 3);
  }
  return;
}


/* ---- FUN_000280c8 @ 000280c8 ---- */

void FUN_000280c8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_00024568((param_2 >> 3) + param_1,1 << (param_2 & 7) & 0xff);
  }
  return;
}


/* ---- FUN_000280e4 @ 000280e4 ---- */

uint FUN_000280e4(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1 & 0xffff) {
      iVar1 = FUN_00024568((uVar2 >> 3) + param_1,1 << (uVar2 & 7) & 0xff);
      if (iVar1 != 0) {
        return uVar2;
      }
    }
  }
  return param_2;
}


/* ---- FUN_00028118 @ 00028118 ---- */

uint FUN_00028118(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 == 0) ||
     (uVar1 = (uint)*(byte *)(param_1 + (param_2 >> 3)) & 1 << (param_2 & 7), uVar1 != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}


/* ---- FUN_00028130 @ 00028130 ---- */

void FUN_00028130(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_2 << 0x15) >> 0x18;
  uVar1 = 1 << (param_2 & 7);
  if ((param_1 != 0) && (((uint)*(byte *)(param_1 + uVar2) & uVar1 & 0xff) != 0)) {
    FUN_0001ddb4();
    *(byte *)(param_1 + uVar2) = *(byte *)(param_1 + uVar2) & ~(byte)uVar1;
    FUN_0001ddf0(0);
  }
  return;
}


/* ---- FUN_00028168 @ 00028168 ---- */

undefined4 FUN_00028168(void)

{
  undefined4 uVar1;
  
  if (*DAT_0002817c != '\0') {
    uVar1 = FUN_0002702c();
    return uVar1;
  }
  return DAT_00028180;
}


/* ---- FUN_00028184 @ 00028184 ---- */

void FUN_00028184(undefined4 param_1)

{
  if (*DAT_000281a4 != '\0') {
    FUN_00022d98(param_1);
    FUN_0002a438(param_1);
    FUN_00022620(param_1);
  }
  return;
}


/* ---- FUN_000281a8 @ 000281a8 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000281d2) */
/* WARNING: Removing unreachable block (ram,0x000281d2) */

void FUN_000281a8(byte *param_1)

{
  uint uVar1;
  undefined auStack_40 [2];
  undefined2 local_3e;
  undefined2 local_3c;
  
  FUN_0001b1ce(auStack_40,0x14);
  local_3c = *(undefined2 *)(param_1 + 2);
  local_3e = FUN_00022e40();
  uVar1 = (uint)*param_1;
                    /* WARNING: Could not recover jumptable at 0x000281d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (DAT_000281d6 <= uVar1) {
    uVar1 = (uint)DAT_000281d6;
  }
  (*(code *)((uint)*(byte *)(uVar1 + 0x281d7) * 2 + 0x281d7))(1,7,8);
  return;
}


/* ---- FUN_000282f0 @ 000282f0 ---- */

void FUN_000282f0(undefined4 param_1,undefined4 param_2)

{
  FUN_00028304(param_1,7,param_2);
  return;
}


/* ---- FUN_00028304 @ 00028304 ---- */

undefined4 FUN_00028304(undefined4 param_1,undefined4 param_2,int param_3,ushort *param_4)

{
  undefined4 uVar1;
  uint local_18;
  int local_14;
  
  if (*DAT_00028360 == '\0') {
    return 8;
  }
  if ((param_3 != 0) && (param_4 != (ushort *)0x0)) {
    if ((int)(*param_4 - 1) % 4 != 3) {
      return 7;
    }
    local_18 = (uint)CONCAT12((char)param_2,(short)(*param_4 + 3 >> 2));
    local_14 = param_3;
    uVar1 = FUN_00027194(param_1,param_2,&local_18);
    *param_4 = (short)local_18 << 2;
    return uVar1;
  }
  return 0xe;
}


/* ---- FUN_00028364 @ 00028364 ---- */

undefined4 FUN_00028364(void)

{
  undefined4 uVar1;
  
  if (*DAT_00028378 != '\0') {
    uVar1 = FUN_00022fb0();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_0002837c @ 0002837c ---- */

undefined4 FUN_0002837c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_000283b4;
  if (*DAT_000283b0 == '\0') {
    return 8;
  }
  DAT_000283b0[2] = '\x01';
  iVar3 = iVar1;
  do {
    iVar3 = FUN_0002702c(iVar3);
    if (iVar3 == iVar1) {
      return 0;
    }
    iVar2 = FUN_00028364();
  } while (iVar2 == 0);
  return 3;
}


/* ---- FUN_000283b8 @ 000283b8 ---- */

undefined4 FUN_000283b8(undefined4 param_1)

{
  byte bVar1;
  char *pcVar2;
  
  pcVar2 = DAT_000283e0;
  if (*DAT_000283e0 == '\0') {
    return 8;
  }
  bVar1 = DAT_000283e0[3];
  if (2 < bVar1) {
    return 4;
  }
  *(undefined4 *)(DAT_000283e4 + (uint)bVar1 * 4) = param_1;
  pcVar2[3] = bVar1 + 1;
  return 0;
}


/* ---- FUN_000283e8 @ 000283e8 ---- */

undefined4 FUN_000283e8(void)

{
  undefined4 uVar1;
  
  if (*DAT_000283fc != '\0') {
    uVar1 = FUN_0002a4fc();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_00028400 @ 00028400 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00028422) */
/* WARNING: Removing unreachable block (ram,0x00028422) */

void FUN_00028400(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined auStack_28 [2];
  undefined2 local_26;
  
  FUN_0001b1ce(auStack_28,0x14);
  local_26 = *(undefined2 *)(param_1 + 2);
  uVar2 = (uint)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00028422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = uVar2;
  if (DAT_00028426 <= uVar2) {
    uVar1 = (uint)DAT_00028426;
  }
  (*(code *)((uint)*(byte *)(uVar1 + 0x28427) * 2 + 0x28427))
            (uVar2,*(undefined *)(DAT_0002854c + 4),*(undefined *)(DAT_0002854c + 5));
  return;
}


/* ---- FUN_0002855c @ 0002855c ---- */

undefined4 FUN_0002855c(void)

{
  undefined4 uVar1;
  
  if (*DAT_00028570 != '\0') {
    uVar1 = FUN_00023040();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_00028574 @ 00028574 ---- */

void FUN_00028574(undefined *param_1,undefined *param_2)

{
  undefined2 uVar1;
  
  if (param_2 == (undefined *)0x0) {
    app_error_handler(0,0x66,s___________________components_ble_000285b4);
  }
  if (param_1 == (undefined *)0x0) {
    app_error_handler(0,0x67,s___________________components_ble_000285b4);
  }
  *param_1 = *param_2;
  uVar1 = *(undefined2 *)(param_2 + 2);
  param_1[1] = (char)uVar1;
  param_1[2] = (char)((ushort)uVar1 >> 8);
  uVar1 = *(undefined2 *)(param_2 + 4);
  param_1[3] = (char)uVar1;
  param_1[4] = (char)((ushort)uVar1 >> 8);
  uVar1 = *(undefined2 *)(param_2 + 6);
  param_1[5] = (char)uVar1;
  param_1[6] = (char)((ushort)uVar1 >> 8);
  return;
}


/* ---- FUN_000285f4 @ 000285f4 ---- */

void FUN_000285f4(int param_1)

{
  int iVar1;
  
  if ((param_1 != 9) && (param_1 != 8)) {
    return;
  }
  iVar1 = FUN_000228f8();
  *(char *)(DAT_0002863c + 9) = (char)iVar1;
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (param_1 != 9) {
        return;
      }
      FUN_00028b60();
      return;
    }
    if (iVar1 != 0) {
      return;
    }
    leds_off();
    post_state_event(DAT_0002863c + 8);
    FUN_0002c994(0);
    FUN_0002c994(1);
  }
  FUN_000286b8();
  return;
}


/* ---- FUN_00028640 @ 00028640 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00028640(void)

{
  uint uVar1;
  
  uVar1 = _DAT_00028664;
  if ((*(char *)(_DAT_00028664 + 0xb) != '\x01') &&
     (uVar1 = (uint)*(byte *)(_DAT_00028664 + 10), uVar1 != 1)) {
    uVar1 = FUN_00028688();
  }
  software_interrupt(0x48);
  if (uVar1 != 0) {
    app_error_handler(uVar1,0x79,s__________application_app_misc_c_00028667 + 1);
  }
  return;
}


/* ---- FUN_00028688 @ 00028688 ---- */

void FUN_00028688(void)

{
  int iVar1;
  
  *(undefined4 *)(DAT_00028698 + 0xc) = 0x80;
  iVar1 = DAT_0002869c;
  *(undefined *)(DAT_0002869c + 0xf) = 0;
  *(undefined *)(iVar1 + 0x10) = 0;
  return;
}


/* ---- FUN_000286a0 @ 000286a0 ---- */

void FUN_000286a0(void)

{
  *(undefined4 *)(DAT_000286b0 + 8) = 0x80;
  *(undefined *)(DAT_000286b4 + 0xf) = 1;
  return;
}


/* ---- FUN_000286b8 @ 000286b8 ---- */

void FUN_000286b8(void)

{
  int iVar1;
  
  do {
    iVar1 = FUN_0001db54(0x22);
  } while (iVar1 != 0);
  DataSynchronizationBarrier(0xf);
  *(undefined4 *)(DAT_000286d8 + 0xc) = DAT_000286d4;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- debug_printf_stub @ 000286dc ---- */

void debug_printf_stub(void)

{
  return;
}


/* ---- FUN_000286de @ 000286de ---- */

void FUN_000286de(void)

{
  return;
}


/* ---- FUN_000286e0 @ 000286e0 ---- */

void FUN_000286e0(void)

{
  return;
}


/* ---- FUN_000286e2 @ 000286e2 ---- */

void FUN_000286e2(void)

{
  return;
}


/* ---- process_app_cmd @ 000286e4 ---- */
/* opcode switch 0x25..0x34 (Keil switch8; target = 0x2870a + 2*b) */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00028706) */
/* WARNING: Removing unreachable block (ram,0x00028706) */
/* opcode switch 0x25..0x34 (Keil switch8; target = 0x2870a + 2*b) */

void process_app_cmd(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  
  if ((param_1 == (byte *)0x0) && (param_2 != 0)) {
    return;
  }
  debug_printf_stub(s_process_app_cmd__x_000288c0,*param_1,param_3,param_4,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00028706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (*param_1 - 0x25 < (uint)DAT_0002870a) {
    pbVar1 = (byte *)(*param_1 + 0x286e6);
  }
  else {
    pbVar1 = (byte *)(DAT_0002870a + 0x2870b);
  }
  (*(code *)((uint)*pbVar1 * 2 + 0x2870b))(DAT_000288d8);
  return;
}


/* ---- FUN_00028a54 @ 00028a54 ---- */

void FUN_00028a54(ushort *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined uVar3;
  uint uVar4;
  
  iVar1 = DAT_00028af4;
  if ((param_1 != (ushort *)0x0) || (param_2 == 4)) {
    uVar4 = ((*param_1 & 0xff) << 8 | (uint)(*param_1 >> 8)) << 0x10 |
            (uint)*(byte *)(param_1 + 1) << 8 | (uint)*(byte *)((int)param_1 + 3);
    *(uint *)(DAT_00028af4 + 0x20) = uVar4;
    if (*(char *)(iVar1 + 8) == -0x7d) {
      FUN_0002c83c();
      uVar2 = DAT_00028afc;
      if (*(uint *)(DAT_00028af8 + 8) == uVar4) {
        FUN_0002c994(0);
        FUN_0002c974(1);
        *(undefined *)(iVar1 + 8) = 0x85;
        uVar3 = 0x11;
      }
      else {
        leds_req_breath(*(undefined4 *)(DAT_00028af8 + 0x40),0x1e,0xfa,0xfa,1000,500,DAT_00028afc);
        FUN_0002c7d0(uVar2,DAT_00028b00);
        *(undefined *)(iVar1 + 8) = 0x84;
        uVar3 = 0x12;
      }
      *(undefined *)(iVar1 + 0xd) = uVar3;
      *(undefined *)(iVar1 + 0xe) = 0;
      FUN_0001b22a(0,iVar1 + 0xf);
      FUN_0001b22a(0,iVar1 + 0x13);
      FUN_00024d24(DAT_00028af4 + 0xd);
      post_state_event(DAT_00028af4 + 8);
    }
  }
  return;
}


/* ---- FUN_00028b04 @ 00028b04 ---- */

void FUN_00028b04(void)

{
  int iVar1;
  
  iVar1 = DAT_00028b58;
  *(undefined *)(DAT_00028b58 + 8) = 1;
  FUN_0002c994(0);
  FUN_0002c974(1);
  motor_off();
  leds_off();
  FUN_0002c0f8();
  leds_execute_timer_stop();
  FUN_0002c328();
  FUN_0002c83c();
  FUN_00023480();
  FUN_00023554();
  *(undefined *)(iVar1 + 0x1b) = 0;
  FUN_0001cb30();
  if ((*(char *)(DAT_00028b5c + 7) == '\x01') && (*(char *)(iVar1 + 9) == '\0')) {
    FUN_0002be10(100);
  }
  return;
}


/* ---- FUN_00028b60 @ 00028b60 ---- */

void FUN_00028b60(void)

{
  leds_off();
  leds_req_constant_on(DAT_00028b84,0x1e,0);
  FUN_0002c974(0);
  FUN_0002c974(1);
  post_state_event(DAT_00028b88);
  return;
}


/* ---- FUN_00028b8c @ 00028b8c ---- */

void FUN_00028b8c(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)(DAT_00028c38 + 0x11);
  if (cVar1 == '\x01') {
LAB_00028c1e:
    uVar3 = 0xff0000;
  }
  else {
    uVar3 = 0xff00;
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        uVar3 = 0xff;
      }
      else {
        if (cVar1 == '\x04') {
          motor_pwm_set_duty(0x50);
          *(undefined *)(DAT_00028c38 + -0x35) = 1;
LAB_00028c00:
          leds_off();
          goto LAB_00028bcc;
        }
        if (cVar1 == '\x05') {
          motor_pwm_stop();
          iVar2 = FUN_0002329c();
          if (iVar2 == 0) goto LAB_00028c1e;
        }
        else {
          if (cVar1 == '\x06') goto LAB_00028c00;
          uVar3 = DAT_00028c48;
          if (cVar1 != '\a') goto LAB_00028bcc;
        }
      }
    }
  }
  aw9109_build_constant_program(uVar3,uVar3,uVar3,100,100,100);
LAB_00028bcc:
  post_state_event(DAT_00028c38 + -0x38);
  if (-1 < (int)((*(uint *)(DAT_00028c3c + 0x10) >> 0xd) << 0x1f)) {
    return;
  }
  DataSynchronizationBarrier(0xf);
  *(undefined4 *)(DAT_00028c44 + 0xc) = DAT_00028c40;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_00028c4c @ 00028c4c ---- */

void FUN_00028c4c(void)

{
  *(char *)(DAT_00028c64 + 0x1c) = *(char *)(DAT_00028c64 + 0x1c) + '\x01';
  FUN_0002c83c();
  FUN_0002c7d0(DAT_00028c6c,DAT_00028c68);
  return;
}


/* ---- FUN_00028c70 @ 00028c70 ---- */

void FUN_00028c70(void)

{
  leds_req_breath(DAT_00028ca8,0x1e,400,400,0,200,0);
  FUN_0002c974(0);
  FUN_0002c974(1);
  if ((0x81 < *(byte *)(DAT_00028cac + 8)) && (*(byte *)(DAT_00028cac + 8) != 0xff)) {
    FUN_0001fab8(1);
  }
  return;
}


/* ---- FUN_00028cb0 @ 00028cb0 ---- */

void FUN_00028cb0(void)

{
  int iVar1;
  int iVar2;
  
  FUN_000286e0(s_process_msg_double_tap_detected__00028cf0);
  iVar1 = DAT_00028d20;
  *(undefined *)(DAT_00028d20 + 0x1c) = 0;
  *(undefined *)(iVar1 + 8) = 0x86;
  FUN_0002c994(1);
  iVar1 = DAT_00028d24;
  FUN_0002c7d0(*(undefined4 *)(DAT_00028d24 + 0x20),DAT_00028d28);
  iVar2 = *(int *)(iVar1 + 0x20);
  leds_req_breath(*(undefined4 *)(iVar1 + 0x48),0x3c,500,iVar2 - 500U & 0xffff,0x32,0x32,iVar2);
  return;
}


/* ---- FUN_00028d2c @ 00028d2c ---- */

void FUN_00028d2c(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = DAT_00028d9c;
  cVar1 = *(char *)(DAT_00028d9c + 0x1c);
  if (cVar1 != *(char *)(DAT_00028da0 + 0x14)) {
    *(undefined *)(DAT_00028d9c + 0xd) = 0x15;
    if (cVar1 == '\0') {
      *(undefined *)(iVar2 + 0xe) = 0;
    }
    else {
      *(char *)(iVar2 + 0xe) = cVar1 + '\x01';
    }
    FUN_0001b22a(0,DAT_00028d9c + 0xf);
    FUN_0001b22a(0,DAT_00028d9c + 0x13);
    FUN_0001b22a(0xffffffff,DAT_00028d9c + 0x17);
    FUN_00024d24(DAT_00028d9c + 0xd);
  }
  FUN_0002c274();
  FUN_0002c994(0);
  FUN_0002c974(1);
  motor_off();
  leds_off();
  *(undefined *)(iVar2 + 0x1c) = 0;
  *(undefined *)(iVar2 + 8) = 0x85;
  post_state_event(DAT_00028d9c + 8);
  return;
}


/* ---- FUN_00028da4 @ 00028da4 ---- */

void FUN_00028da4(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = DAT_00028e5c;
  iVar2 = DAT_00028e58;
  iVar4 = DAT_00028e5c + 0xf;
  bVar1 = *(byte *)(DAT_00028e5c + 0x1c);
  iVar6 = DAT_00028e5c + 0x13;
  uVar5 = *(uint *)(DAT_00028e58 + 0x20);
  iVar7 = DAT_00028e5c + 0x17;
  if (bVar1 < *(byte *)(DAT_00028e58 + 0x14)) {
    *(undefined *)(DAT_00028e5c + 0xd) = 0x14;
    *(byte *)(iVar3 + 0xe) = bVar1;
    FUN_0001b22a(param_1,iVar4);
    if (bVar1 == 1) {
      param_2 = 0;
    }
    FUN_0001b22a(param_2,iVar6);
    FUN_0001b22a(0,iVar7);
    leds_req_fade_out(*(undefined4 *)(iVar2 + 0x4c),0xf,uVar5 & 0xffff,100,uVar5);
  }
  else if (bVar1 == *(byte *)(DAT_00028e58 + 0x14)) {
    *(undefined *)(DAT_00028e5c + 0xd) = 0x14;
    *(byte *)(iVar3 + 0xe) = bVar1;
    FUN_0001b22a(param_1,iVar4);
    FUN_0001b22a(param_2,iVar6);
    FUN_0001b22a(0xffffffff,iVar7);
    FUN_0002c974(0);
    FUN_0002c974(1);
    uVar5 = DAT_00028e60;
    leds_req_breath(*(undefined4 *)(iVar2 + 0x50),0x3c,0x1c2,0x1c2,0,0x96,DAT_00028e60);
  }
  FUN_0002c7d0(uVar5,DAT_00028e64);
  FUN_00024d24(DAT_00028e5c + 0xd);
  return;
}


/* ---- FUN_00028e68 @ 00028e68 ---- */

void FUN_00028e68(void)

{
  FUN_0001cf18();
  leds_req_breath(DAT_00028e8c,0x1e,200,200,0x32,0x96,DAT_00028e88);
  return;
}


/* ---- FUN_00028e90 @ 00028e90 ---- */

void FUN_00028e90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_00028eec;
  *(undefined *)(DAT_00028eec + 0xd) = 0x13;
  *(undefined *)(iVar1 + 0xe) = 0;
  FUN_0001b22a(0,iVar1 + 0xf,param_3,param_4,param_2,param_3,param_4);
  FUN_0001b22a(0,DAT_00028eec + 0x13);
  FUN_00024d24(DAT_00028eec + 0xd);
  leds_req_breath(*(undefined4 *)(DAT_00028ef0 + 0x44),0x1e,200,200,0x32,0x32,1000);
  motor_on(0x50,2000);
  FUN_0002c83c();
  FUN_0002c7d0(DAT_00028ef8,DAT_00028ef4);
  return;
}


/* ---- FUN_00028efc @ 00028efc ---- */

void FUN_00028efc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00028f40;
  if (((param_1 != 0) || (param_2 == 8)) && (*(char *)(DAT_00028f40 + 8) == -0x7e)) {
    iVar2 = FUN_0001b20c(param_1,DAT_00028f44,8);
    if (iVar2 == 0) {
      *(undefined *)(iVar1 + 8) = 0x83;
      post_state_event(DAT_00028f40 + 8);
      FUN_0002c83c();
      FUN_0002c7d0(DAT_00028f4c,DAT_00028f48);
      return;
    }
    FUN_0001fab8(0);
    FUN_0002a2b8();
  }
  return;
}


/* ---- FUN_00028f50 @ 00028f50 ---- */

void FUN_00028f50(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 0xc + *param_1;
  FUN_0002584c(*(undefined *)(iVar1 + 8));
  FUN_0002584c(*(undefined *)(iVar1 + 9));
  return;
}


/* ---- FUN_00028f68 @ 00028f68 ---- */

void FUN_00028f68(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  iVar4 = *param_1;
  do {
    if (*(char *)(iVar4 + uVar3 + 0x20) != -1) {
      FUN_000258c4();
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 2);
  if (*(char *)(iVar4 + 0x22) != -1) {
    FUN_00025a44();
  }
  uVar3 = 0;
  do {
    iVar1 = uVar3 * 0xc;
    uVar5 = 0;
    do {
      iVar2 = iVar1 + iVar4 + uVar5;
      if (*(char *)(iVar2 + 8) != -1) {
        FUN_000258c4();
        *(undefined *)(iVar2 + 8) = 0xff;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 2);
    if (*(int *)(iVar4 + iVar1) != -1) {
      FUN_00025738();
      *(undefined4 *)(iVar4 + iVar1) = 0xffffffff;
    }
    uVar3 = uVar3 + 1 & 0xff;
    *(undefined *)(iVar1 + iVar4 + 0xb) = 0;
  } while (uVar3 < 2);
  FUN_00025c3c(param_1[1]);
  return;
}


/* ---- FUN_00028fe8 @ 00028fe8 ---- */

void FUN_00028fe8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_0002584c(*(undefined *)(iVar1 + 0x20));
  FUN_0002584c(*(undefined *)(iVar1 + 0x21));
  return;
}


/* ---- FUN_00028ffc @ 00028ffc ---- */

void FUN_00028ffc(undefined4 param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  bVar1 = true;
  uVar2 = 0;
  iVar3 = param_2 * 2 + DAT_0002904c;
  do {
    if (*(char *)(iVar3 + uVar2) != '\0') {
      *(char *)(iVar3 + uVar2) = *(char *)(iVar3 + uVar2) + -1;
      if (*(char *)(iVar3 + uVar2) == '\0') {
        (**(code **)(**(int **)(DAT_00029050 + param_2 * 4) + 0x1c))(param_2);
      }
      else {
        bVar1 = false;
      }
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 2);
  if (bVar1) {
    FUN_00025b06(*(undefined4 *)(*(int *)(DAT_00029050 + param_2 * 4) + 4),2);
  }
  return;
}


/* ---- FUN_00029054 @ 00029054 ---- */

void FUN_00029054(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *param_1;
  iVar2 = param_2 * 0xc;
  puVar4 = (undefined4 *)(iVar2 + iVar3);
  FUN_00028fe8(param_1);
  FUN_00028f50(param_1,param_2);
  if (param_3 == 0) {
    cVar1 = *(char *)(*param_1 + iVar2 + 10);
  }
  else {
    if (param_3 < *(uint *)(iVar3 + 0x18)) goto LAB_000290aa;
    param_3 = *(uint *)(iVar3 + 0x18) & 0xffff;
    cVar1 = *(char *)(*param_1 + iVar2 + 10);
  }
  FUN_0002570c(*puVar4,cVar1 == '\0');
LAB_000290aa:
  FUN_00025ace(param_1[1],param_2,param_3,0,iVar3,iVar2,param_4);
  puVar4[1] = param_3;
  *(undefined *)(DAT_000290c4 + (uint)*(byte *)(param_1[1] + 4)) = 0xff;
  return;
}


/* ---- FUN_000290c8 @ 000290c8 ---- */

void FUN_000290c8(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *param_1;
  iVar7 = param_2 * 0xc + iVar3;
  puVar4 = (undefined *)(iVar3 + 0x20);
  uVar5 = (uint)*(byte *)(iVar3 + 0x22);
  FUN_00028fe8(param_1);
  FUN_00028f50(param_1,param_2);
  FUN_00025ace(param_1[1],param_2,param_3,0);
  FUN_00025958(DAT_000291cc,uVar5);
  FUN_00025904(1 << *(sbyte *)(iVar7 + 9) | 1 << *(sbyte *)(iVar7 + 8),uVar5);
  if (*(int *)(iVar7 + 4) == 0) {
    iVar6 = uVar5 * 8 + DAT_000291d0;
    uVar1 = FUN_00025af8(param_1[1],param_2);
    FUN_0002580c(*puVar4,uVar1,iVar6);
    FUN_00025ace(param_1[1],3,0);
    uVar1 = FUN_00025aac(param_1[1],param_2);
    *(undefined4 *)(DAT_000291d4 + (uint)*(byte *)(param_1[1] + 4) * 4) = uVar1;
    uVar1 = FUN_00025aba(param_1[1],3);
    iVar6 = param_1[1];
  }
  else {
    iVar6 = uVar5 * 8 + DAT_000291d0;
    uVar1 = FUN_00025af8(param_1[1],2);
    FUN_0002580c(*puVar4,uVar1,iVar6);
    FUN_00025ace(param_1[1],3,1,0);
    *(undefined4 *)(DAT_000291d4 + (uint)*(byte *)(param_1[1] + 4) * 4) = 0;
    uVar1 = FUN_00025aba(param_1[1],3);
    param_2 = 2;
    iVar6 = param_1[1];
  }
  uVar2 = FUN_00025af8(iVar6,param_2);
  FUN_0002580c(*(undefined *)(iVar3 + 0x21),uVar2,uVar1);
  FUN_00025888(*puVar4);
  FUN_00025888(*(undefined *)(iVar3 + 0x21));
  *(undefined4 *)(iVar7 + 4) = param_3;
  *(undefined *)(DAT_000291d8 + (uint)*(byte *)(param_1[1] + 4)) = 3;
  return;
}


/* ---- FUN_000291dc @ 000291dc ---- */

void FUN_000291dc(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_18;
  
  iVar7 = *param_1;
  iVar3 = param_2 * 0xc + iVar7;
  puVar4 = (undefined *)(iVar7 + 0x20);
  uVar5 = (uint)*(byte *)(iVar7 + 0x22);
  FUN_00028fe8(param_1);
  FUN_00025958(DAT_000292d8,uVar5);
  FUN_00025904(1 << *(sbyte *)(iVar3 + 8) | 1 << (uint)*(byte *)(iVar3 + 9),uVar5);
  if (param_3 == 0) {
    iVar6 = uVar5 * 8 + DAT_000292dc;
    uVar1 = FUN_00025af8(param_1[1],param_2);
    FUN_0002580c(*puVar4,uVar1,iVar6);
    FUN_00025ace(param_1[1],3,0);
    uVar1 = FUN_00025aac(param_1[1],param_2);
    *(undefined4 *)(DAT_000292e0 + (uint)*(byte *)(param_1[1] + 4) * 4) = uVar1;
    uVar1 = FUN_00025aba(param_1[1],3);
    iVar6 = param_1[1];
    local_18 = 0;
  }
  else {
    local_18 = (uint)*(ushort *)(iVar7 + 0x18);
    iVar6 = uVar5 * 8 + DAT_000292dc;
    uVar1 = FUN_00025af8(param_1[1],2);
    FUN_0002580c(*puVar4,uVar1,iVar6);
    FUN_00025ace(param_1[1],3,1,0);
    *(undefined4 *)(DAT_000292e0 + (uint)*(byte *)(param_1[1] + 4) * 4) = 0;
    uVar1 = FUN_00025aba(param_1[1],3);
    param_2 = 2;
    iVar6 = param_1[1];
  }
  uVar2 = FUN_00025af8(iVar6,param_2);
  FUN_0002580c(*(undefined *)(iVar7 + 0x21),uVar2,uVar1);
  FUN_00025888(*puVar4);
  FUN_00025888(*(undefined *)(iVar7 + 0x21));
  *(uint *)(iVar3 + 4) = local_18;
  *(undefined *)(DAT_000292e4 + (uint)*(byte *)(param_1[1] + 4)) = 3;
  return;
}


/* ---- FUN_000292e8 @ 000292e8 ---- */

void FUN_000292e8(int *param_1,int param_2,int param_3)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *param_1;
  puVar5 = (undefined4 *)(param_2 * 0xc + iVar4);
  uVar1 = *(undefined *)(iVar4 + 0x22);
  FUN_00028fe8(param_1);
  FUN_00025958(DAT_000293b4,uVar1);
  FUN_00025904(1 << *(sbyte *)(iVar4 + 0x20) | 1 << (uint)*(byte *)(iVar4 + 0x21),uVar1);
  uVar2 = FUN_00025aba(param_1[1],param_2);
  uVar3 = FUN_00025af8(param_1[1],3);
  FUN_0002580c(*(sbyte *)(iVar4 + 0x20),uVar3,uVar2);
  if ((uint)((*(uint *)(*(int *)param_1[1] + 0x510) & 0xff) == 0) + param_3 < (uint)puVar5[1]) {
    uVar2 = FUN_000256a8(*puVar5);
    uVar3 = FUN_00025af8(param_1[1],3);
    FUN_0002580c(*(undefined *)(iVar4 + 0x21),uVar3,uVar2);
  }
  else {
    FUN_00025958(1 << (uint)*(byte *)(iVar4 + 0x21),uVar1);
  }
  puVar5[1] = param_3;
  FUN_00025ace(param_1[1],3,param_3,0);
  FUN_00025a10(uVar1);
  *(int *)(DAT_000293b8 + (uint)*(byte *)(param_1[1] + 4) * 4) = param_3;
  *(char *)(DAT_000293bc + (uint)*(byte *)(param_1[1] + 4)) = (char)param_2;
  return;
}


/* ---- FUN_000293c0 @ 000293c0 ---- */

void FUN_000293c0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_000293e4;
  iVar2 = *(int *)(DAT_000293e4 + 100) + -1;
  *(int *)(DAT_000293e4 + 100) = iVar2;
  if (iVar2 == 0) {
    *DAT_000293e8 = *DAT_000293e8 & 0xfd;
  }
  iVar2 = *(int *)(iVar1 + 0x60) + 1;
  *(int *)(iVar1 + 0x60) = iVar2;
  if (iVar2 == 4) {
    *(undefined4 *)(iVar1 + 0x60) = 0;
  }
  return;
}


/* ---- FUN_000293ec @ 000293ec ---- */

undefined4 FUN_000293ec(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = DAT_00029420;
  iVar1 = *(int *)(DAT_00029420 + 100);
  if (iVar1 != 4) {
    uVar2 = *(int *)(DAT_00029420 + 0x60) + iVar1;
    if (3 < uVar2) {
      uVar2 = uVar2 - 4;
    }
    *(int *)(DAT_00029420 + 100) = iVar1 + 1;
    iVar3 = uVar2 * 0x18 + iVar3;
    FUN_0001b1ce(iVar3,0x18);
    *param_1 = iVar3;
    return 1;
  }
  return 0;
}


/* ---- FUN_00029424 @ 00029424 ---- */

void FUN_00029424(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0x18;
  iVar3 = *(int *)(DAT_00029488 + 0x60) * 0x18 + DAT_00029488;
  if (*(int *)(DAT_00029488 + 100) == 0) {
    return;
  }
  if (*(char *)(iVar3 + 8) == '\x01') {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x14) - (uint)*(ushort *)(iVar3 + 0x16);
    if ((int)uVar2 < 0x100) {
      uVar2 = uVar2 & 0xffff;
    }
    else {
      uVar2 = 0x100;
    }
    uVar1 = *(int *)(iVar3 + 0x10) + (uint)*(ushort *)(iVar3 + 0x16) * 4;
    software_interrupt(0x29);
  }
  else {
    if (*(char *)(iVar3 + 8) != '\x02') goto LAB_0002946e;
    uVar1 = (uint)*(ushort *)(iVar3 + 0xc);
    software_interrupt(0x28);
  }
  if (uVar1 == 0x11) {
    *DAT_0002948c = *DAT_0002948c & 0xfd | 4;
    return;
  }
  if (uVar1 == 0) {
    return;
  }
LAB_0002946e:
  FUN_00029df8(iVar3,9,uVar2);
  return;
}


/* ---- FUN_00029490 @ 00029490 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000294a6) */
/* WARNING: Removing unreachable block (ram,0x000294a6) */

void FUN_00029490(void)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(*(int *)(DAT_00029540 + 0x70) * 0x1c + DAT_00029540);
                    /* WARNING: Could not recover jumptable at 0x000294a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (DAT_000294aa <= uVar1) {
    uVar1 = (uint)DAT_000294aa;
  }
  (*(code *)((uint)*(byte *)(uVar1 + 0x294ab) * 2 + 0x294ab))();
  return;
}


/* ---- FUN_00029548 @ 00029548 ---- */

void FUN_00029548(void)

{
  if (((uint)*DAT_00029560 << 0x1d) >> 0x1e == 0) {
    *DAT_00029560 = *DAT_00029560 | 2;
    FUN_00029424();
  }
  return;
}


/* ---- FUN_00029564 @ 00029564 ---- */

void FUN_00029564(void)

{
  if (-1 < (int)((uint)*DAT_0002957c << 0x1d)) {
    FUN_00021f9c(4);
    FUN_00029490(0);
  }
  return;
}


/* ---- FUN_00029580 @ 00029580 ---- */

int FUN_00029580(uint **param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = **param_1;
  uVar2 = (*param_1)[1];
  if (uVar1 <= uVar2) {
    return uVar2 - uVar1;
  }
  return (int)param_1[2] + uVar2 + (1 - uVar1);
}


/* ---- FUN_00029598 @ 00029598 ---- */

uint FUN_00029598(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint local_c;
  
  local_c = param_4;
  FUN_00022bf8(DAT_000295b0,0x26,param_1,&local_c,1);
  return local_c & 0xff;
}


/* ---- FUN_000295b4 @ 000295b4 ---- */

undefined4 FUN_000295b4(short *param_1,short *param_2,undefined4 *param_3,short **param_4)

{
  short *psVar1;
  int iVar2;
  
  if (-1 < (int)((uint)*DAT_00029630 << 0x1e)) {
    return 2;
  }
  if ((param_3 != (undefined4 *)0x0) && (param_4 != (short **)0x0)) {
    do {
      if (1 < *(ushort *)(param_4 + 1)) {
        return 10;
      }
      if (*(char *)(DAT_00029634 + (uint)*(ushort *)(param_4 + 1) * 0x10) == '\0') {
        while (iVar2 = FUN_000296d8(*(undefined2 *)(param_4 + 1),param_4), iVar2 != 0) {
          psVar1 = *param_4;
          if (((param_1 == (short *)0x0) || (psVar1[2] == *param_1)) &&
             ((param_2 == (short *)0x0 || (*psVar1 == *param_2)))) {
            *param_3 = *(undefined4 *)(psVar1 + 4);
            param_3[1] = *param_4;
            *(undefined2 *)(param_3 + 2) = *(undefined2 *)(DAT_00029634 + 0x28);
            return 0;
          }
        }
        *param_4 = (short *)0x0;
      }
      *(short *)(param_4 + 1) = *(short *)(param_4 + 1) + 1;
    } while( true );
  }
  return 5;
}


/* ---- FUN_00029638 @ 00029638 ---- */

undefined4 FUN_00029638(int *param_1,ushort *param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_18;
  
  iVar2 = DAT_000296d0;
  uVar3 = param_1[1];
  if (((((uVar3 == 0) || (uVar3 < *DAT_000296d4)) || (DAT_000296d4[1] < uVar3)) ||
      ((local_18 = param_4, iVar4 = FUN_000233ca(), iVar4 == 0 ||
       (*(short *)(param_1 + 2) != *(short *)(iVar2 + 8))))) ||
     (uVar3 = param_1[1], *param_1 != *(int *)(uVar3 + 8))) {
    *param_2 = 0;
    do {
      local_18 = 0;
      while (iVar4 = FUN_000296d8(*param_2,&local_18), iVar4 != 0) {
        if (*(int *)(local_18 + 8) == *param_1) {
          param_1[1] = local_18;
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar2 + 8);
          return 1;
        }
      }
      uVar1 = *param_2;
      *param_2 = uVar1 + 1;
    } while ((ushort)(uVar1 + 1) < 2);
  }
  else {
    uVar5 = 0;
    do {
      uVar6 = *(uint *)(uVar5 * 0x10 + iVar2 + -0x1c);
      if ((uVar6 < uVar3) && (uVar3 < uVar6 + 0x400)) {
        *param_2 = (ushort)uVar5;
        return 1;
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 2);
  }
  return 0;
}


/* ---- FUN_000296d8 @ 000296d8 ---- */

undefined4 FUN_000296d8(int param_1,int **param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *param_2;
  iVar3 = param_1 * 0x10 + DAT_00029728;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(*(int *)(iVar3 + 4) + 8);
  }
  else {
    piVar2 = piVar2 + *(ushort *)((int)piVar2 + 2) + 3;
  }
  for (; (piVar2 < (int *)(*(int *)(iVar3 + 4) + 0x400U) && (*piVar2 != -1));
      piVar2 = piVar2 + *(ushort *)((int)piVar2 + 2) + 3) {
    iVar1 = FUN_00022b88(piVar2);
    if (iVar1 != 0) {
      *param_2 = piVar2;
      return 1;
    }
  }
  return 0;
}


/* ---- FUN_0002972c @ 0002972c ---- */

undefined4 FUN_0002972c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00022294(DAT_0002975c,param_1,DAT_00029758,1,0);
  if (iVar1 != 0) {
    return 0xe;
  }
  *(undefined *)(param_2 * 0x10 + DAT_00029760 + 0xe) = 1;
  return 0;
}


/* ---- FUN_00029788 @ 00029788 ---- */

int FUN_00029788(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  
  iVar2 = DAT_000297dc;
  puVar4 = (undefined4 *)0x0;
  if (*(int *)(DAT_000297dc + 0x44) != 0) {
    piVar1 = (int *)(DAT_000297dc + 0x40);
    puVar4 = (undefined4 *)(*piVar1 * 8 + DAT_000297dc);
    *(int *)(DAT_000297dc + 0x44) = *(int *)(DAT_000297dc + 0x44) + -1;
    *(uint *)(iVar2 + 0x40) = *piVar1 + 1U & 7;
  }
  iVar2 = FUN_00022294(DAT_000297e0,(uint)*(ushort *)(param_1 + 0x14) * 4 + param_2,*puVar4,
                       *(undefined2 *)(puVar4 + 1),0);
  *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + *(short *)(puVar4 + 1);
  cVar3 = *(char *)(param_1 + 0x16) + -1;
  *(char *)(param_1 + 0x16) = cVar3;
  if (cVar3 == '\0') {
    *(undefined *)(param_1 + 0x10) = 1;
  }
  if (iVar2 != 0) {
    iVar2 = 0xe;
  }
  return iVar2;
}


/* ---- FUN_000297e4 @ 000297e4 ---- */

undefined4 FUN_000297e4(short *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(DAT_00029818 + 0xc) <= uVar1) {
      return 0;
    }
    if ((*(char *)(uVar1 * 4 + DAT_00029814 + 2) == *(char *)(param_1 + 1)) &&
       (*(short *)(DAT_00029814 + uVar1 * 4) == *param_1)) break;
    uVar1 = uVar1 + 1;
  }
  return *(undefined4 *)(DAT_00029818 + 4);
}


/* ---- FUN_0002981c @ 0002981c ---- */

void FUN_0002981c(uint param_1,undefined4 param_2)

{
  if (param_1 < 0x100) {
    FUN_00028130(param_2,param_1);
  }
  return;
}


/* ---- FUN_00029830 @ 00029830 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00029830(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = _DAT_00029870;
  FUN_000286e0(s_request_ANCS_ENABLE__d_00029873 + 1,*(undefined *)(_DAT_00029870 + 0x1a));
  puVar1 = DAT_0002988c;
  DAT_0002988c[1] = 6;
  *puVar1 = 0;
  FUN_00024924();
  if (*(char *)(iVar2 + 0x1a) == '\x01') {
    *DAT_00029890 = 1;
    iVar2 = app_timer_start(*(undefined4 *)(DAT_00029898 + 4),DAT_00029894,0);
    if (iVar2 != 0) {
      app_error_handler(iVar2,0x1b5,s__________application_user_ble_c_0002989c);
    }
  }
  return;
}


/* ---- FUN_000298bc @ 000298bc ---- */

undefined8 FUN_000298bc(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = FUN_0001b938(param_1,param_2,param_3,param_4,param_1);
  uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar1 = (undefined4)uVar7;
  uVar8 = FUN_0001b4ce(param_1,param_2,uVar1,uVar3);
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar2 = (undefined4)uVar8;
  cVar5 = true;
  if ((int)param_2 < 0) {
    bVar6 = true;
    FUN_0001b9b4(uVar2,uVar4,0,DAT_0002994c);
    if (!(bool)cVar5 || bVar6) {
LAB_00029908:
      uVar7 = FUN_0001b4ce(uVar1,uVar3,0,DAT_00029954);
      goto LAB_00029938;
    }
    FUN_0001b9dc(uVar2,uVar4,0,DAT_00029950);
    if (cVar5 != '\0') goto LAB_00029938;
  }
  else {
    FUN_0001b9b4(uVar2,uVar4,0,DAT_0002994c);
    if (cVar5 == '\0') goto LAB_00029908;
    bVar6 = true;
    FUN_0001b9dc(uVar2,uVar4,0,DAT_00029950);
    if ((bool)cVar5 && !bVar6) goto LAB_00029938;
  }
  uVar7 = FUN_0001b384(uVar1,uVar3,0,DAT_00029954);
LAB_00029938:
  return CONCAT44((uint)((ulonglong)uVar7 >> 0x20) & 0x7fffffff | param_2 & 0x80000000,(int)uVar7);
}


/* ---- FUN_00029958 @ 00029958 ---- */

int FUN_00029958(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0001c1b0();
  if (iVar1 == 0) {
    return DAT_000299cc;
  }
  if ((int)param_1 < 0) {
    uVar2 = *(uint *)(((param_1 & 0xf) - 8 & 0xfffffffc) + DAT_000299c8 + 0x1c);
  }
  else {
    uVar2 = *(uint *)((param_1 & 0xfffffffc) + DAT_000299d0);
  }
  uVar2 = ((uVar2 >> ((param_1 << 0x1e) >> 0x1b)) << 0x18) >> 0x1e;
  if (((uVar2 < 4) && (uVar2 != 0)) && (uVar2 != 2)) {
    uVar2 = 1 << (param_1 & 0x1f);
    if (*(int *)(DAT_000299d4 + 4) == 0) {
      *DAT_000299d8 = uVar2;
    }
    else {
      iVar1 = (param_1 >> 5) * 4;
      *(uint *)(DAT_000299d4 + iVar1) = *(uint *)(DAT_000299d4 + iVar1) | uVar2;
    }
    return 0;
  }
  return DAT_000299cc + 1;
}


/* ---- FUN_000299dc @ 000299dc ---- */

void FUN_000299dc(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  FUN_000286e0(s_sdk_mapped_flags_bulk_update_by__00029a34,param_3,param_4,param_4,param_4);
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar1 = 0;
    while (*(ushort *)(param_1 + uVar1 * 2) != param_4) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        return;
      }
    }
    for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 1) {
      bVar3 = (byte)(1 << (uVar1 & 0xff));
      if (param_5 == 0) {
        bVar3 = *(byte *)(param_2 + uVar2) & ~bVar3;
      }
      else {
        bVar3 = *(byte *)(param_2 + uVar2) | bVar3;
      }
      *(byte *)(param_2 + uVar2) = bVar3;
    }
  }
  return;
}


/* ---- FUN_00029a60 @ 00029a60 ---- */

uint FUN_00029a60(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_000286e0(s_sdk_mapped_flags_first_key_index_00029a8c,param_1);
  uVar2 = 0;
  do {
    iVar1 = FUN_00029abc(param_1,uVar2);
    if (iVar1 != 0) {
      return uVar2;
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 8);
  return DAT_00029ab8;
}


/* ---- FUN_00029abc @ 00029abc ---- */

undefined4 FUN_00029abc(uint param_1,uint param_2)

{
  if ((1 << (param_2 & 0xff) & param_1) != 0) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00029acc @ 00029acc ---- */

undefined4 FUN_00029acc(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_000286e0(s_sdk_mapped_flags_get_by_key__d___00029afc);
  if (param_1 != 0) {
    uVar1 = 0;
    do {
      if (*(ushort *)(param_1 + uVar1 * 2) == param_3) {
        uVar2 = FUN_00029abc(param_2,uVar1 & 0xffff);
        return uVar2;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 8);
  }
  return 0;
}


/* ---- FUN_00029b20 @ 00029b20 ---- */

void FUN_00029b20(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int local_38;
  undefined2 auStack_34 [10];
  undefined4 local_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  local_38 = 0;
  local_20 = param_1;
  iStack_1c = param_2;
  uStack_18 = param_3;
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      iVar1 = FUN_00029abc(param_3,uVar2 & 0xffff);
      if (iVar1 != 0) {
        auStack_34[local_38] = *(undefined2 *)(param_2 + uVar2 * 2);
        local_38 = local_38 + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
  }
  FUN_000286e0(s_sdk_mapped_flags_key_list_get__d_00029b70,param_3);
  FUN_0001b19c(local_20,&local_38,0x14);
  return;
}


/* ---- FUN_00029b94 @ 00029b94 ---- */

void FUN_00029b94(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000299dc(param_1,param_2,1,param_3,param_4);
  return;
}


/* ---- FUN_00029ba4 @ 00029ba4 ---- */

void FUN_00029ba4(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined local_2c [2];
  ushort local_2a;
  undefined4 local_28;
  undefined auStack_20 [4];
  int local_1c;
  
  iVar4 = 0;
  iVar2 = FUN_00022ffc();
  iVar3 = DAT_00029c50;
  local_2a = *param_1;
  if (iVar2 == DAT_00029c50) {
    iVar2 = FUN_00022fdc(*param_1);
  }
  if ((iVar2 != iVar3) && (iVar3 = FUN_000271d0(iVar2,7,auStack_20), iVar3 == 0)) {
    if (((*(byte *)(local_1c + 0x44) & 1) != 0) ||
       (iVar3 = FUN_00022f0c(local_1c + 0x46,param_1 + 6), iVar3 != 0)) {
      iVar4 = local_1c + 0x34;
    }
  }
  software_interrupt(0x86);
  if (*param_1 == 0) {
    if (iVar4 == 0) {
      local_2c[0] = 6;
      FUN_00021850(local_2c,DAT_00029c54,0);
      uVar1 = *param_1;
    }
    else {
      FUN_00029ddc(*param_1,0);
      uVar1 = *param_1;
    }
    FUN_00029cd0(uVar1,iVar2,iVar4 != 0,0);
  }
  else {
    local_2c[0] = 9;
    local_28 = (uint)*param_1;
    FUN_00021850(local_2c);
  }
  return;
}


/* ---- FUN_00029c58 @ 00029c58 ---- */

byte * FUN_00029c58(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    uVar5 = (uint)bVar1;
    if (((((int)(uVar5 << 0x1e) < 0) || (-1 < (char)bVar1)) &&
        (uVar4 = (uVar5 << 0x19) >> 0x1d, uVar4 < 5)) &&
       (((-1 < (int)(uVar5 << 0x1e) || (uVar4 != 3)) || ((char)bVar1 < '\0')))) {
      if (((param_1[1] <= param_1[2]) && (6 < param_1[1])) && (param_1[2] < 0x11)) {
        bVar2 = param_1[3];
        uVar5 = (uint)bVar2;
        if (-1 < (int)(uVar5 << 0x1d)) {
          bVar3 = param_1[4];
          uVar4 = (uint)bVar3;
          if (((-1 < (int)(uVar4 << 0x1d)) && (-1 < (int)(uVar5 << 0x1c))) &&
             (-1 < (int)(uVar4 << 0x1c))) {
            if ((bVar1 & 1) == 0) {
              if ((((bVar2 & 1) == 0) && (-1 < (int)(uVar5 << 0x1e))) &&
                 (((bVar3 & 1) == 0 && (-1 < (int)(uVar4 << 0x1e))))) {
                return (byte *)0x1;
              }
            }
            else if ((((bVar2 & 1) != 0) || ((int)(uVar5 << 0x1e) < 0)) ||
                    (((bVar3 & 1) != 0 || ((int)(uVar4 << 0x1e) < 0)))) {
              return (byte *)0x1;
            }
          }
        }
      }
    }
    param_1 = (byte *)0x0;
  }
  return param_1;
}


/* ---- FUN_00029cd0 @ 00029cd0 ---- */

void FUN_00029cd0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined *puVar1;
  
  puVar1 = DAT_00029d18;
  FUN_0001f6dc(param_1,*DAT_00029d18);
  if (param_3 == 0) {
    if (param_5 != 0) {
      FUN_00022fb0(param_2);
    }
  }
  else {
    FUN_0001f6dc(param_1,puVar1[1],param_4);
    FUN_0001f6dc(param_1,puVar1[2],param_5);
    if (param_5 != 0) {
      FUN_00022f38(param_1,param_2);
    }
  }
  return;
}


/* ---- FUN_00029ddc @ 00029ddc ---- */

void FUN_00029ddc(undefined2 param_1,undefined param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = DAT_00029df4[2];
  local_18 = CONCAT22(param_1,(short)*DAT_00029df4);
  local_14 = CONCAT31((int3)((uint)DAT_00029df4[1] >> 8),param_2);
  FUN_00021850(&local_18);
  return;
}


/* ---- FUN_00029df8 @ 00029df8 ---- */

undefined8 FUN_00029df8(int *param_1)

{
  undefined4 local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  if (*(char *)(param_1 + 2) == '\x01') {
    local_18 = 0;
    local_10 = param_1[4];
    local_c = (uint)*(ushort *)(param_1 + 5);
  }
  else if (*(char *)(param_1 + 2) == '\x02') {
    local_18 = 1;
    local_10 = CONCAT22(*(undefined2 *)(param_1 + 3),
                        *(short *)(param_1 + 3) - *(short *)((int)param_1 + 0xe));
  }
  local_14 = param_1[1];
  (**(code **)(*param_1 + 8))(&local_18);
  return CONCAT44(local_14,local_18);
}


/* ---- FUN_00029e40 @ 00029e40 ---- */

void FUN_00029e40(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_40;
  undefined2 local_3c [8];
  undefined auStack_2c [24];
  
  iVar1 = DAT_00029e94;
  iVar2 = FUN_0001f6a0(*(undefined *)(DAT_00029e94 + 3));
  if (iVar2 != 0) {
    FUN_0001f494(auStack_2c);
    FUN_0001b19c(&local_40,auStack_2c,0x14);
    for (uVar3 = 0; uVar3 < local_40; uVar3 = uVar3 + 1) {
      iVar2 = FUN_0001f6b8(local_3c[uVar3],*(undefined *)(iVar1 + 3));
      if ((iVar2 != 0) &&
         (iVar2 = FUN_0001f6b8(local_3c[uVar3],*(undefined *)(iVar1 + 4)), iVar2 == 0)) {
        FUN_00029edc(local_3c[uVar3]);
      }
    }
  }
  return;
}


/* ---- FUN_00029e98 @ 00029e98 ---- */

void FUN_00029e98(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = DAT_00029ed4;
  local_18 = *DAT_00029ed0;
  local_14 = DAT_00029ed0[1];
  iVar3 = FUN_00027224(*(undefined2 *)(DAT_00029ed4 + 4),&local_18,0);
  uVar2 = DAT_00029ed8;
  while ((uVar5 = (uint)*(ushort *)(iVar1 + 4), uVar5 != uVar2 && (iVar3 != 0x11))) {
    uVar4 = FUN_0002702c(uVar5);
    *(short *)(iVar1 + 4) = (short)uVar4;
    iVar3 = FUN_00027224(uVar4,&local_18,0);
  }
  return;
}


/* ---- FUN_00029edc @ 00029edc ---- */

void FUN_00029edc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  uVar4 = 1;
  uVar3 = 0;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  iVar2 = FUN_00022b5c();
  if (iVar2 == 0x11) goto LAB_00029f2a;
  if (iVar2 < 0x12) {
    if (iVar2 != 0) {
      if ((iVar2 == 6) || (iVar2 == 8)) {
        uVar4 = 0;
        FUN_00022fdc(param_1);
        FUN_00022990();
        goto LAB_00029f2a;
      }
      goto LAB_00029f10;
    }
    local_20 = CONCAT31(local_20._1_3_,5);
    uVar3 = 1;
    uVar1 = FUN_00022fdc(param_1);
    local_20 = CONCAT22(uVar1,(undefined2)local_20);
    local_1c = CONCAT22(local_1c._2_2_,(short)param_1);
  }
  else {
    if (iVar2 + DAT_00029f68 == 0) goto LAB_00029f2a;
    if (iVar2 + DAT_00029f68 + DAT_00029f6c == 0) {
      FUN_00024450(param_1);
      goto LAB_00029f2a;
    }
LAB_00029f10:
    local_20 = CONCAT31(local_20._1_3_,9);
    local_1c = CONCAT22(local_1c._2_2_,(short)param_1);
    local_18 = iVar2;
    uVar1 = FUN_00022fdc(param_1);
    local_20 = CONCAT22(uVar1,(undefined2)local_20);
  }
  FUN_00021800(&local_20);
LAB_00029f2a:
  iVar2 = DAT_00029f70;
  FUN_0001f6dc(param_1,*(undefined *)(DAT_00029f70 + 3),uVar4);
  FUN_0001f6dc(param_1,*(undefined *)(iVar2 + 4),uVar3);
  return;
}


/* ---- FUN_00029f74 @ 00029f74 ---- */

undefined4 FUN_00029f74(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  
  if (*(int *)(param_1 + 0x28) == 0) {
LAB_00029ffe:
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
      sVar2 = FUN_0002b86c(*puVar5,(uint)(ushort)(uVar1 + 1) + param_2);
      uVar1 = *param_3;
      *param_3 = sVar2 + uVar1;
      if (puVar5[2] != 0) {
        if (*(int *)(puVar5 + 4) == 0) goto LAB_00029ffe;
        FUN_0001b19c((uint)(ushort)(sVar2 + uVar1) + param_2);
        *param_3 = *param_3 + puVar5[2];
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* ---- FUN_0002a004 @ 0002a004 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002a004(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined auStack_f4 [8];
  undefined auStack_ec [8];
  undefined auStack_e4 [8];
  undefined auStack_dc [8];
  undefined auStack_d4 [28];
  undefined local_b8;
  undefined local_b7;
  undefined auStack_b4 [17];
  undefined local_a3;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined auStack_3a [6];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = 0;
  local_18 = 0;
  iVar2 = FUN_00024e68(_DAT_0002a170,0,DAT_0002a16c,0x20);
  if (iVar2 != 0) {
    app_error_handler(iVar2,DAT_0002a194,s__________application_user_ble_c_0002a173 + 1);
  }
  iVar2 = FUN_00024e38(_DAT_0002a170,0,DAT_0002a16c + 0x40,0x20);
  if (iVar2 != 0) {
    app_error_handler(iVar2,0x5c8,s__________application_user_ble_c_0002a173 + 1);
  }
  iVar2 = FUN_00024e68(_DAT_0002a170,1,DAT_0002a16c + 0x20,0x20);
  if (iVar2 != 0) {
    app_error_handler(iVar2,DAT_0002a194 + 0xc,s__________application_user_ble_c_0002a173 + 1);
  }
  local_1c = DAT_0002a198;
  local_18 = DAT_0002a19c;
  iVar2 = FUN_0001ee5c(_DAT_0002a170,&local_1c);
  if (iVar2 != 0) {
    app_error_handler(iVar2,0x5f8,s__________application_user_ble_c_0002a173 + 1);
  }
  FUN_0001b1ce(auStack_f4,0x40);
  FUN_0001fc1c(auStack_f4,s_Bond_Touch__Inc__0002a1a0);
  FUN_0001fc1c(auStack_ec,s_Bond002_0002a1b4);
  FUN_0001fc1c(auStack_e4,s_1234567890_0002a1bc);
  FUN_0001fc1c(auStack_dc,s_Bond2_Rev_B3_0002a1c8);
  FUN_0001c120(DAT_0002a16c + 0xc0,s__d__d__d_0002a1d8,2,7,9);
  FUN_0001fc1c(auStack_d4,DAT_0002a16c + 0xc0);
  local_b8 = 0x11;
  local_b7 = 0;
  iVar2 = FUN_0001f974(auStack_f4);
  if (iVar2 != 0) {
    app_error_handler(iVar2,DAT_0002a194 + 0x52,s__________application_user_ble_c_0002a173 + 1);
  }
  FUN_0001b1ce(&local_3c,0x20);
  puVar1 = DAT_0002a1e8;
  iVar2 = DAT_0002a1e4;
  local_20 = 0;
  local_3c = *(undefined2 *)(DAT_0002a1e4 + 0x2c);
  FUN_0001b19c(auStack_3a,DAT_0002a1e8,6);
  local_34 = *puVar1;
  local_30 = puVar1[1];
  local_28 = *(undefined4 *)(DAT_0002a1ec + 8);
  local_24 = 0x42;
  iVar3 = FUN_0001f8b4(DAT_0002a1f0,&local_3c);
  if (iVar3 != 0) {
    app_error_handler(iVar3,DAT_0002a194 + 0x62,s__________application_user_ble_c_0002a173 + 1);
  }
  FUN_0001b1ce(auStack_b4,0x78);
  local_a3 = *(undefined *)(iVar2 + 9);
  local_50 = DAT_0002a1f4;
  local_4c = DAT_0002a1f8;
  local_48 = DAT_0002a1fc;
  local_44 = DAT_0002a200;
  local_54 = 0;
  local_40 = DAT_0002a204;
  iVar2 = FUN_0001f210(DAT_0002a208,auStack_b4);
  if (iVar2 != 0) {
    app_error_handler(iVar2,DAT_0002a194 + 0x70,s__________application_user_ble_c_0002a173 + 1);
  }
  return;
}


/* ---- FUN_0002a20c @ 0002a20c ---- */

int FUN_0002a20c(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  
  iVar2 = DAT_0002a260;
  pcVar1 = DAT_0002a25c;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(DAT_0002a25c + 0x10);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(pcVar1 + 0x14);
  if (((*pcVar1 == '\0') || (*(char *)(iVar2 + 5) != '\0')) || (iVar4 = FUN_0002ca2c(), iVar4 == 0))
  {
    uVar3 = 3;
  }
  else {
    *(int *)(param_1 + 0xc) = iVar2 + 0x20;
    pcVar1 = DAT_0002a25c;
    *(undefined *)(param_1 + 8) = 2;
    pcVar1[0x23] = '\x04';
    iVar4 = FUN_0001eab4(DAT_0002a25c + 0x20,0);
    if (iVar4 != 0) {
      return iVar4;
    }
    uVar3 = 5;
  }
  *(undefined *)(iVar2 + 2) = uVar3;
  return 0;
}


/* ---- FUN_0002a264 @ 0002a264 ---- */

int FUN_0002a264(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = DAT_0002a2b0;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(DAT_0002a2b0 + 0x18);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(pcVar3 + 0x1c);
  iVar1 = DAT_0002a2b4;
  if (((*pcVar3 == '\0') || (*(char *)(DAT_0002a2b4 + 5) != '\0')) ||
     (iVar2 = FUN_0002ca2c(), iVar2 == 0)) {
    *(undefined *)(iVar1 + 2) = 4;
  }
  else {
    *(int *)(param_1 + 0xc) = iVar1 + 0x20;
    *(undefined *)(param_1 + 8) = 2;
    pcVar3 = DAT_0002a2b0 + 0x20;
    DAT_0002a2b0[0x23] = '\x04';
    iVar2 = FUN_0001eab4(pcVar3,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    *(undefined *)(iVar1 + 2) = 6;
  }
  return 0;
}


/* ---- FUN_0002a2b8 @ 0002a2b8 ---- */

void FUN_0002a2b8(void)

{
  int iVar1;
  
  do {
  } while (*DAT_0002a300 != '\x02');
  FUN_0002c994(0);
  FUN_0002c994(1);
  FUN_0002c994(2);
  FUN_00028688();
  iVar1 = FUN_0002c7b4();
  software_interrupt(0x3c);
  if ((iVar1 != DAT_0002a304) &&
     (FUN_000286e0(s_sd_power_system_off_return_ERROR_0002a308,iVar1), iVar1 == 0)) {
    return;
  }
  app_error_handler(iVar1,0xdf,s__________application_app_misc_c_0002a330);
  return;
}


/* ---- FUN_0002a350 @ 0002a350 ---- */

void FUN_0002a350(void)

{
  int iVar1;
  
  do {
  } while (*DAT_0002a3b0 != '\x02');
  FUN_0002c974(0);
  FUN_0002c974(1);
  FUN_0002c994(2);
  if (*DAT_0002a3b4 == -6) {
    FUN_00020324(3);
  }
  else {
    FUN_00020bc0();
  }
  FUN_00028688();
  iVar1 = FUN_0002c7b4();
  software_interrupt(0x3c);
  if ((iVar1 != DAT_0002a3b8) &&
     (FUN_000286e0(s_sd_power_system_off_return_ERROR_0002a3bc,iVar1), iVar1 == 0)) {
    return;
  }
  app_error_handler(iVar1,0x10f,s__________application_app_misc_c_0002a3e4);
  return;
}


/* ---- FUN_0002a404 @ 0002a404 ---- */

void FUN_0002a404(int param_1)

{
  for (param_1 = param_1 * 1000; param_1 != 0; param_1 = param_1 + -1) {
  }
  return;
}


/* ---- FUN_0002a438 @ 0002a438 ---- */

void FUN_0002a438(void)

{
  FUN_0002a5a8();
  FUN_0002428c(*DAT_0002a448);
  return;
}


/* ---- FUN_0002a44c @ 0002a44c ---- */

void FUN_0002a44c(undefined4 param_1,char *param_2)

{
  FUN_0001f6dc(param_1,*(undefined *)(DAT_0002a464 + 6),*param_2 == '\0');
  return;
}


/* ---- FUN_0002a468 @ 0002a468 ---- */

undefined4 FUN_0002a468(void)

{
  FUN_00021f8a(DAT_0002a4b4);
  FUN_00021f8a(DAT_0002a4b4 + 1);
  FUN_00021f8a(DAT_0002a4b4 + 2);
  FUN_00021f8a(DAT_0002a4b4 + 3);
  FUN_00021f8a(DAT_0002a4b4 + 4);
  FUN_00021f8a(DAT_0002a4b4 + 5);
  FUN_00021f8a(DAT_0002a4b4 + 6);
  if (*(char *)(DAT_0002a4b4 + 6) != '\x18') {
    *(undefined *)(DAT_0002a4b4 + 7) = 1;
    return 0;
  }
  return 3;
}


/* ---- FUN_0002a4b8 @ 0002a4b8 ---- */

void FUN_0002a4b8(undefined4 param_1,undefined4 param_2)

{
  FUN_00023fdc(param_1,0,param_2);
  return;
}


/* ---- FUN_0002a4fc @ 0002a4fc ---- */

undefined4 FUN_0002a4fc(int param_1)

{
  int iVar1;
  undefined uVar2;
  int iVar3;
  
  iVar1 = DAT_0002a528;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_00029c58();
    if (iVar3 == 0) {
      return 7;
    }
    FUN_0001b19c(iVar1 + 0x10,param_1,5);
    uVar2 = 1;
  }
  *(undefined *)(iVar1 + 8) = uVar2;
  return 0;
}


/* ---- FUN_0002a52c @ 0002a52c ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0002a534) */
/* WARNING: Removing unreachable block (ram,0x0002a534) */

void FUN_0002a52c(byte *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
                    /* WARNING: Could not recover jumptable at 0x0002a534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (DAT_0002a538 <= uVar1) {
    uVar1 = (uint)DAT_0002a538;
  }
  (*(code *)((uint)*(byte *)(uVar1 + 0x2a539) * 2 + 0x2a539))();
  return;
}


/* ---- FUN_0002a5a8 @ 0002a5a8 ---- */

void FUN_0002a5a8(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar1 = *param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  if (uVar1 == 0x19) {
    uVar5 = (uint)*(byte *)(param_1 + 4);
    if (uVar5 == 0) {
      FUN_0001e048();
      return;
    }
    uVar1 = param_1[2];
    bVar6 = *(byte *)((int)param_1 + 9) & 3;
LAB_0002a62c:
    FUN_0002423c(uVar1,uVar5,bVar6);
    return;
  }
  if (uVar1 < 0x1a) {
    if (uVar1 == 0x11) {
      uVar5 = DAT_0002a684;
      if (*(char *)(param_1 + 4) != '=') {
        uVar5 = 0x1100;
      }
      uVar1 = param_1[2];
      bVar6 = 0;
      goto LAB_0002a62c;
    }
    if (uVar1 != 0x13) {
      if (uVar1 == 0x14) {
        FUN_00029ba4(param_1 + 2);
      }
      return;
    }
    local_14 = 0;
    local_10 = 0;
    local_18 = (uint)param_1[2] << 0x10;
  }
  else if (uVar1 == 0x1a) {
    iVar4 = FUN_0001f4a8(param_1[2]);
    puVar2 = DAT_0002a688;
    if (iVar4 == 0) {
      FUN_0002163c(param_1[2],DAT_0002a684 - 0x37,1);
      return;
    }
    iVar4 = FUN_0001f6b8(param_1[2],DAT_0002a688[1]);
    if (iVar4 == 0) {
      FUN_0001f6dc(param_1[2],*puVar2,0);
    }
    local_18 = CONCAT22(param_1[2],(undefined2)local_18);
    local_18 = CONCAT31(local_18._1_3_,5);
    uVar3 = FUN_0001f4bc(param_1[2]);
    local_14 = CONCAT31(local_14._1_3_,uVar3);
  }
  else {
    if (uVar1 != 0x1e) {
      return;
    }
    local_10 = DAT_0002a680[2];
    local_18._0_2_ = (undefined2)*DAT_0002a680;
    local_18 = CONCAT22(param_1[2],(undefined2)local_18);
    local_14._1_3_ = (undefined3)((uint)DAT_0002a680[1] >> 8);
    local_14 = CONCAT31(local_14._1_3_,*(undefined *)(param_1 + 4)) & 0xffffff01;
  }
  FUN_00021850(&local_18);
  return;
}


/* ---- FUN_0002a68c @ 0002a68c ---- */

undefined4 FUN_0002a68c(void)

{
  FUN_00021f78(DAT_0002a6c4);
  FUN_00021f78(DAT_0002a6c4 + 1);
  FUN_00021f78(DAT_0002a6c4 + 2);
  if (((*DAT_0002a6c4 != '\x18') && (DAT_0002a6c4[1] != '\x18')) && (DAT_0002a6c4[2] != '\x18')) {
    DAT_0002a6c4[3] = '\x01';
    return 0;
  }
  return 3;
}


/* ---- FUN_0002a6c8 @ 0002a6c8 ---- */

undefined4 FUN_0002a6c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001f608();
  if (iVar1 == 1) {
    software_interrupt(0x7e);
    return param_1;
  }
  if (iVar1 != 2) {
    return DAT_0002a6f4;
  }
  uVar2 = FUN_00024078(param_1,param_2,param_3);
  return uVar2;
}


/* ---- FUN_0002a6f8 @ 0002a6f8 ---- */

int FUN_0002a6f8(int param_1,byte *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined auStack_4c [4];
  undefined *local_48;
  int local_44;
  undefined *local_40 [3];
  undefined4 local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined4 local_24;
  int local_20;
  byte *pbStack_1c;
  undefined4 local_18;
  
  local_20 = param_1;
  pbStack_1c = param_2;
  local_18 = param_3;
  iVar1 = FUN_0001f608(param_1);
  iVar5 = DAT_0002a7fc;
  uVar6 = 0;
  local_44 = 0;
  FUN_0001b1ce(local_40,0x20);
  if (iVar1 == 0) {
    return DAT_0002a800;
  }
  if (param_2 == (byte *)0x0) {
    local_44 = 0x85;
LAB_0002a7a0:
    iVar3 = local_20;
    iVar2 = iVar5;
    if (iVar1 == 2) {
      software_interrupt(0x7f);
LAB_0002a7c6:
      if (iVar3 != 0) goto LAB_0002a7ec;
    }
    else {
      software_interrupt(0x7f);
      if ((param_2 == (byte *)0x0) || (local_20 != 0)) goto LAB_0002a7c6;
      if ((*param_2 & 1) == 0) {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
      FUN_00029ddc(0,uVar4,param_2,local_40);
    }
    if (local_44 != 0x85) {
      uVar4 = 1;
      goto LAB_0002a7ee;
    }
  }
  else {
    if ((*param_2 & 1) == 0) goto LAB_0002a7a0;
    iVar2 = FUN_00022fdc(local_20);
    if (iVar2 != iVar5) {
LAB_0002a740:
      iVar3 = FUN_00027258(iVar2,7,1,auStack_4c);
      if (iVar3 == 0) {
        FUN_0001b1ce(local_48,0x50);
        *local_48 = (char)iVar1;
        local_40[0] = local_48 + 0x34;
        local_34 = local_18;
        local_30 = local_48 + 0x18;
        local_2c = local_48 + 1;
        local_24 = DAT_0002a804;
        FUN_00022d6c(local_20,local_48 + 0x11);
        iVar3 = FUN_00027484(iVar2,7);
        iVar5 = iVar2;
        if (iVar3 == 0) goto LAB_0002a7a0;
      }
      goto LAB_0002a7c6;
    }
    iVar2 = FUN_0002718c();
    if (iVar2 != iVar5) {
      uVar6 = 1;
      goto LAB_0002a740;
    }
    iVar3 = 3;
    uVar6 = 0;
  }
LAB_0002a7ec:
  uVar4 = 0;
LAB_0002a7ee:
  FUN_00029cd0(local_20,iVar2,uVar4,1,uVar6);
  return iVar3;
}


/* ---- FUN_0002a808 @ 0002a808 ---- */

void FUN_0002a808(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0001f608();
  iVar2 = DAT_0002a888;
  if ((iVar1 == 1) && (iVar1 = FUN_00022fdc(param_1), iVar1 != DAT_0002a88c)) {
    FUN_0001f6dc(param_1,*(undefined *)(iVar2 + 6),1);
    thunk_FUN_00028400();
  }
  else {
    FUN_0001f6dc(param_1,*(undefined *)(iVar2 + 6),0);
  }
  if ((*(char *)(iVar2 + 8) == '\0') ||
     (iVar1 = FUN_0001f6b8(param_1,*(undefined *)(iVar2 + 6)), iVar1 != 0)) {
    uVar3 = 0;
    iVar2 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = DAT_0002a888 + 0x10;
  }
  uVar3 = FUN_0002a6f8(param_1,iVar2,uVar3);
  FUN_00021fac(param_1,uVar3,1);
  FUN_000217cc(param_1,uVar3);
  return;
}


/* ---- FUN_0002a8c4 @ 0002a8c4 ---- */

undefined4 FUN_0002a8c4(int param_1)

{
  if (param_1 != 0) {
    *(int *)(DAT_0002a8d4 + 0xc) = param_1;
    return 0;
  }
  return 0xe;
}


/* ---- FUN_0002a8d8 @ 0002a8d8 ---- */

void FUN_0002a8d8(void)

{
  software_interrupt(0x60);
  return;
}


/* ---- FUN_0002a8ec @ 0002a8ec ---- */

undefined4 FUN_0002a8ec(int param_1,undefined param_2,undefined2 *param_3)

{
  FUN_0001b1ce(param_3,0x14);
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


/* ---- FUN_0002a91c @ 0002a91c ---- */

int FUN_0002a91c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  puVar2 = DAT_0002a96c;
  puVar1 = DAT_0002a968;
  if ((param_2 == 0) || ((param_2 & 3) != 0)) {
    param_1 = 7;
  }
  else {
    *(uint *)(DAT_0002a968 + 8) = param_2;
    *(short *)(puVar1 + 2) = (short)param_3;
    *(undefined4 *)(puVar1 + 4) = param_4;
    bVar5 = (*puVar2 & 1) != 0;
    if (bVar5) {
      DAT_0002a96c[0x20] = 1;
    }
    uVar3 = DAT_0002a970;
    software_interrupt(0x10);
    if (param_1 == 0) {
      *puVar1 = 1;
      FUN_00025364(0,uVar3,param_3,param_4,param_4);
      iVar4 = FUN_00029958(0x16);
      return iVar4;
    }
    if (bVar5) {
      *puVar2 = 1;
      return param_1;
    }
  }
  return param_1;
}


/* ---- FUN_0002a974 @ 0002a974 ---- */

undefined FUN_0002a974(void)

{
  return *DAT_0002a97c;
}


/* ---- FUN_0002a980 @ 0002a980 ---- */

undefined4 FUN_0002a980(int param_1)

{
  if (param_1 != 0) {
    *(int *)(DAT_0002a990 + 0x10) = param_1;
    return 0;
  }
  return 0xe;
}


/* ---- start_execute_queue_led_motor_ctrl @ 0002a994 ---- */
/* runs next 0x26 item, timer = max(vibMs, execute) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* runs next 0x26 item, timer = max(vibMs, execute) */

void start_execute_queue_led_motor_ctrl(void)

{
  int iVar1;
  int iVar2;
  undefined auStack_20 [2];
  ushort local_1e;
  ushort local_11;
  
  iVar2 = led_motor_ctrl_queue_get(auStack_20);
  iVar1 = DAT_0002aa0c;
  if (iVar2 == 0) {
    debug_printf_stub(s_led_motor_ctrl_queue_get_NONE__S_0002aa64);
    FUN_0002c328();
    iVar2 = FUN_0001cb30();
    if (iVar2 == 0) {
      debug_printf_stub(s_accel_switch_double_tap_error____0002aa98,DAT_0002aa10);
    }
    *(undefined *)(iVar1 + 8) = 0x85;
  }
  else {
    iVar2 = FUN_0001cb74();
    if (iVar2 == 0) {
      debug_printf_stub(s_accel_switch_single_tap_error____0002aa14,DAT_0002aa10);
    }
    cmd26_led_motor_ctrl_execute(auStack_20);
    if (local_11 <= local_1e) {
      local_11 = local_1e;
    }
    queue_step_timer_start(local_11,_DAT_0002aa3c);
    *(undefined *)(iVar1 + 8) = 0x88;
    debug_printf_stub(s_Func___s__STATE_QUEUE_EXECUTING__0002aa3f + 1,DAT_0002aa10);
  }
  post_state_event(DAT_0002aa0c + 8);
  return;
}


/* ---- start_execute_queue_led_motor_test @ 0002aac0 ---- */
/* runs next 0x33 item, timer = ms (0xFFFF = forever) */

/* runs next 0x33 item, timer = ms (0xFFFF = forever) */

undefined8
start_execute_queue_led_motor_test
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  iVar3 = led_motor_test_queue_get(&uStack_18);
  iVar1 = DAT_0002ab28;
  if (iVar3 == 0) {
    FUN_0002c328();
    FUN_0001cb30();
    motor_off();
    leds_off();
    uVar2 = 0x85;
  }
  else {
    if (uStack_c._1_2_ == 0) {
      FUN_0002c328();
      return CONCAT44(uStack_14,uStack_18);
    }
    FUN_0001cb74();
    cmd33_test_step_execute(&uStack_18);
    uVar4 = uStack_c >> 8 & 0xffff;
    if (uVar4 == DAT_0002ab2c) {
      uVar4 = 0xffffffff;
    }
    queue_step_timer_start(uVar4,DAT_0002ab30);
    uVar2 = 0x88;
  }
  *(undefined *)(iVar1 + 8) = uVar2;
  post_state_event(DAT_0002ab28 + 8);
  return CONCAT44(uStack_14,uStack_18);
}


/* ---- FUN_0002ab34 @ 0002ab34 ---- */

void FUN_0002ab34(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0002ab4c;
  if (*DAT_0002ab4c == '\0') {
    FUN_00022ba4(DAT_0002ab50);
    *pcVar1 = '\x01';
  }
  return;
}


/* ---- FUN_0002ab54 @ 0002ab54 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002ab54(int param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined auStack_25 [17];
  
  FUN_0001b1ce(&local_28,0x14);
  if (0x20 < param_2) {
    param_2 = 0x20;
  }
  local_28 = 0x50;
  local_27 = 2;
  local_26 = (undefined)param_2;
  if (param_2 < 0x12) {
    puVar1 = auStack_25;
  }
  else {
    FUN_0001b19c(auStack_25,param_1,0x11);
    FUN_0001f354(_DAT_0002abcc,&local_28,0x14);
    FUN_0001b1ce(&local_28,0x14);
    local_27 = 3;
    param_2 = param_2 - 0x11;
    param_1 = param_1 + 0x11;
    puVar1 = &local_26;
  }
  local_28 = 0x50;
  FUN_0001b19c(puVar1,param_1,param_2);
  uVar2 = FUN_0001f354(_DAT_0002abcc,&local_28,0x14);
  FUN_000286e0(s_SR___d_0002abcf + 1,uVar2);
  return;
}


/* ---- FUN_0002abd8 @ 0002abd8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002abd8(int param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined auStack_25 [17];
  
  FUN_0001b1ce(&local_28,0x14);
  if (0x20 < param_2) {
    param_2 = 0x20;
  }
  local_28 = 0x50;
  local_27 = 0;
  local_26 = (undefined)param_2;
  bVar3 = 0x11 < param_2;
  if (bVar3) {
    FUN_0001b19c(auStack_25,param_1,0x11);
    FUN_0001f354(_DAT_0002ac50,&local_28,0x14);
    FUN_0001b1ce(&local_28,0x14);
    param_2 = param_2 - 0x11;
    param_1 = param_1 + 0x11;
    puVar1 = &local_26;
  }
  else {
    puVar1 = auStack_25;
  }
  local_28 = 0x50;
  local_27 = bVar3;
  FUN_0001b19c(puVar1,param_1,param_2);
  uVar2 = FUN_0001f354(_DAT_0002ac50,&local_28,0x14);
  FUN_000286e0(s_SR___d_0002ac53 + 1,uVar2);
  return;
}


/* ---- FUN_0002ac5c @ 0002ac5c ---- */

void FUN_0002ac5c(undefined4 param_1)

{
  FUN_00022318();
  FUN_0001ecd0(param_1);
  return;
}


/* ---- FUN_0002ac6c @ 0002ac6c ---- */

void FUN_0002ac6c(undefined *param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    app_error_handler(0,0x4e,s___________________components_ble_0002acc4);
  }
  if (param_1 == (undefined *)0x0) {
    app_error_handler(0,0x4f,s___________________components_ble_0002acc4);
  }
  *param_1 = *(undefined *)param_2;
  param_1[1] = (char)((ushort)*(undefined2 *)param_2 >> 8);
  param_1[2] = (char)((uint)*param_2 >> 0x10);
  param_1[3] = (char)((uint)*param_2 >> 0x18);
  param_1[4] = *(undefined *)(param_2 + 1);
  param_1[5] = *(undefined *)(param_2 + 2);
  param_1[6] = (char)((ushort)*(undefined2 *)(param_2 + 2) >> 8);
  param_1[7] = (char)((uint)param_2[2] >> 0x10);
  return;
}


/* ---- FUN_0002ad04 @ 0002ad04 ---- */

undefined8 FUN_0002ad04(int param_1,int param_2)

{
  byte local_4c [4];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined local_2a;
  undefined local_28 [20];
  
  FUN_0001b19c(param_1 + 0x10,param_2 + 0x10,5);
  local_30 = 0x21111;
  FUN_0001b1ce(local_4c,0x1c);
  local_4c[0] = local_4c[0] | 0x12;
  local_38 = &local_30;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2a = *(undefined *)(param_1 + 0xa8);
  local_2c = 0xffa4;
  FUN_0001b1ce(local_28,0x14);
  software_interrupt(0xa2);
  return CONCAT44(local_4c,(uint)*(ushort *)(param_1 + 0xac));
}


/* ---- FUN_0002adc4 @ 0002adc4 ---- */

void FUN_0002adc4(undefined4 param_1,uint param_2,undefined4 param_3)

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
  
  iVar1 = DAT_0002ae44;
  iVar8 = *(int *)(DAT_0002ae44 + 8);
  local_18 = *(undefined4 *)(DAT_0002ae44 + 4);
  local_20 = param_2;
  local_1c = param_3;
  local_1c = FUN_000215fc(&local_20);
  iVar2 = FUN_000242e8();
  if (local_1c == 0) {
    iVar8 = FUN_00024394(0);
    if ((iVar8 == 0) && (iVar2 == 0)) goto LAB_0002ae3e;
  }
  else {
    iVar2 = 0;
    uVar3 = local_20;
    puVar4 = *(uint **)(iVar1 + 4);
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
    *(uint **)(iVar1 + 4) = puVar5;
    FUN_00024394(puVar6);
  }
  FUN_00020bcc(local_18);
LAB_0002ae3e:
  *(undefined *)(iVar1 + 3) = 0;
  return;
}


/* ---- FUN_0002ae48 @ 0002ae48 ---- */

void FUN_0002ae48(void)

{
  *DAT_0002ae54 = 0x100000;
  return;
}


/* ---- FUN_0002ae58 @ 0002ae58 ---- */

void FUN_0002ae58(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  iVar1 = DAT_0002ae94;
  puVar2 = *(uint **)(DAT_0002ae94 + 4);
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
  *(uint **)(iVar1 + 4) = param_1;
  return;
}


/* ---- FUN_0002ae98 @ 0002ae98 ---- */

undefined4 FUN_0002ae98(undefined4 param_1,undefined param_2,uint param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint local_18;
  undefined4 local_14;
  
  uVar2 = 0;
  local_18 = param_3 & 0xffffff00;
  local_14 = param_4;
  FUN_0001ddb4(&local_18);
  puVar1 = (undefined *)FUN_0002c140(&local_14);
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 4;
    FUN_0001ddf0(local_18 & 0xff);
  }
  else {
    *puVar1 = param_2;
    *(undefined4 *)(puVar1 + 4) = param_1;
    *(undefined *)(DAT_0002aedc + 1) = (undefined)local_14;
    FUN_0001ddf0(local_18 & 0xff);
    FUN_0002ae48();
  }
  return uVar2;
}


/* ---- FUN_0002aee0 @ 0002aee0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002aee0(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_r3;
  code *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  
  pbVar1 = DAT_0002af5c;
  if (*(uint **)(DAT_0002af5c + 4) != (uint *)0x0) {
    iVar8 = 0;
    uVar7 = *(int *)(_DAT_0002af60 + 4) - *(int *)(DAT_0002af5c + 8) & 0xffffff;
    puVar5 = *(uint **)(DAT_0002af5c + 4);
    do {
      uVar2 = *puVar5;
      if (uVar7 < uVar2) break;
      uVar7 = uVar7 - uVar2;
      iVar8 = uVar2 + iVar8;
      puVar6 = (uint *)puVar5[7];
      if (*(char *)(puVar5 + 4) != '\0') {
        *(undefined *)(puVar5 + 4) = 0;
        pcVar4 = *(code **)(pbVar1 + 0xc);
        if (pcVar4 == (code *)0x0) {
          (*(code *)puVar5[5])(puVar5[6]);
        }
        else {
          iVar3 = (*pcVar4)(puVar5[5],puVar5[6],puVar5,pcVar4,in_r3);
          if (iVar3 != 0) {
            app_error_handler(iVar3,0x169,s____________________components_li_0002af63 + 1);
          }
        }
      }
      puVar5 = puVar6;
    } while (puVar6 != (uint *)0x0);
    uVar7 = (uint)pbVar1[1];
    if (*pbVar1 == uVar7) {
      uVar2 = uVar7 + 1;
      uVar7 = uVar2 & 0xff;
      pbVar1[1] = (byte)uVar2;
      if (uVar7 == 2) {
        uVar7 = 0;
        pbVar1[1] = 0;
      }
    }
    *(int *)(DAT_0002af5c + ((uVar7 << 0x18) >> 0x16) + 0x18) = iVar8;
    FUN_0002ae48();
  }
  return;
}


/* ---- FUN_0002afa0 @ 0002afa0 ---- */

void FUN_0002afa0(void)

{
  int iVar1;
  
  iVar1 = FUN_0001dc34(DAT_0002afd8,0,DAT_0002afd4);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0002afe0,DAT_0002afdc);
  }
  iVar1 = FUN_0001dc34(DAT_0002afd8 + 4,1,DAT_0002afe4);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0002afe0 + 5,DAT_0002afdc);
  }
  return;
}


/* ---- FUN_0002afe8 @ 0002afe8 ---- */

undefined8 FUN_0002afe8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined local_26;
  undefined local_24 [20];
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  FUN_0001b1ce(local_48,0x1c);
  local_48[0] = local_48[0] & 0xfe | 0xc;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_26 = *(undefined *)(param_1 + 0x2a);
  local_28 = 0xffa1;
  local_2c = 0x21111;
  FUN_0001b1ce(local_24,0x14);
  software_interrupt(0xa2);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 0x2b));
}


/* ---- FUN_0002b088 @ 0002b088 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002b088(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  
  pbVar3 = _DAT_0002b250;
  iVar2 = DAT_0002b24c;
  iVar1 = DAT_0002b248;
  if (param_1 != 5) {
    pcVar6 = s_touch_INT_pin____TOUCH_PIN__0002b224;
LAB_0002b196:
    debug_printf_stub(pcVar6);
    return;
  }
  if (-1 < (int)((*(uint *)(DAT_0002b244 + 0x10) >> 5) << 0x1f)) {
    iVar8 = FUN_0002558c();
    if (iVar8 != 0) {
      return;
    }
    debug_printf_stub(s_Touch_release__0002b2c4);
    iVar8 = DAT_0002b24c;
    *(undefined *)(iVar2 + 0xc) = 0;
    if ((*(char *)(iVar8 + 0x50) == '\x01') &&
       (bVar9 = *(char *)(iVar8 + 0x51) + 1, *(byte *)(iVar8 + 0x51) = bVar9, 6 < bVar9)) {
      *(undefined *)(iVar8 + 0x51) = 1;
    }
    cVar5 = *(char *)(iVar2 + 8);
    if ((cVar5 == -0x79) || (cVar5 == -0x80)) {
      FUN_00028c4c();
      if (*(char *)(iVar2 + 8) != -0x79) {
        return;
      }
      post_state_event(DAT_0002b24c + 8);
      return;
    }
    if (cVar5 == -0x7a) {
      motor_off();
      if ((*(byte *)(iVar2 + 0x1c) | *pbVar3) == 0) {
        pcVar6 = s_This_touch_release_have_NOT_a_to_0002b2d8;
        goto LAB_0002b196;
      }
      uVar7 = FUN_0002bdfc();
      *(uint *)(pbVar3 + 8) = uVar7;
      uVar10 = *(uint *)(pbVar3 + 4);
      if (uVar7 < uVar10) {
        iVar8 = 0x20000 - uVar10;
      }
      else {
        iVar8 = -uVar10;
      }
      *(uint *)(pbVar3 + 0xc) = iVar8 + uVar7;
      debug_printf_stub(s_release_time_ms__d_press_time_ms_0002b318,uVar7,uVar10,iVar8 + uVar7,
                        param_4);
      if (*(uint *)(iVar1 + 0x1c) < *(uint *)(pbVar3 + 0xc)) {
        debug_printf_stub(DAT_0002b354);
        *(undefined4 *)(pbVar3 + 0xc) = *(undefined4 *)(iVar1 + 0x1c);
      }
      uVar7 = *(uint *)(pbVar3 + 0xc);
      if (uVar7 < *(uint *)(iVar1 + 0x18)) {
        debug_printf_stub(s_Touch_duration_time____dms_is_to_0002b358,uVar7);
        leds_off();
        FUN_0002c274();
        motor_off();
        FUN_0002c7d0(*(undefined4 *)(iVar1 + 0x20),_DAT_0002b250 + 2);
      }
      else {
        cVar5 = *(char *)(iVar2 + 0x1c) + '\x01';
        *(char *)(iVar2 + 0x1c) = cVar5;
        debug_printf_stub(DAT_0002b398,cVar5,uVar7,*(undefined4 *)(pbVar3 + 0x10));
        FUN_0002c274();
        motor_off();
        FUN_00028da4(*(undefined4 *)(pbVar3 + 0xc),*(undefined4 *)(pbVar3 + 0x10));
        if (*(char *)(DAT_0002b24c + 0x2e) == '\x01') {
          *(undefined *)(DAT_0002b24c + 0x2e) = 0;
        }
      }
      *pbVar3 = 0;
    }
    if (*(char *)(iVar2 + 0x1c) != *(char *)(iVar1 + 0x14)) {
      return;
    }
    *(undefined4 *)(pbVar3 + 0x10) = 0;
    FUN_0002c974(1);
    return;
  }
  debug_printf_stub(s_Touch_press__0002b253 + 1);
  *(undefined *)(iVar2 + 0xc) = 1;
  if (*(char *)(iVar2 + 8) != -0x7a) {
    return;
  }
  uVar7 = FUN_0002bdfc();
  *(uint *)(pbVar3 + 4) = uVar7;
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    *(undefined4 *)(pbVar3 + 0x10) = 0;
  }
  else {
    uVar10 = *(uint *)(pbVar3 + 8);
    if (uVar7 < uVar10) {
      iVar8 = 0x20000 - uVar10;
    }
    else {
      iVar8 = -uVar10;
    }
    *(uint *)(pbVar3 + 0x10) = iVar8 + uVar7;
    debug_printf_stub(s_press_time_ms__d_release_time_ms_0002b264,uVar7,uVar10,iVar8 + uVar7,param_4
                     );
    if ((*(uint *)(iVar1 + 0x20) < *(uint *)(pbVar3 + 0x10)) && (*(char *)(iVar2 + 8) == -0x7a)) {
      pcVar6 = s_release_duration_ms_ERROR__0002b2a4;
      goto LAB_0002b196;
    }
  }
  FUN_0002c83c();
  pbVar4 = _DAT_0002b250;
  pbVar3[1] = 0x16;
  FUN_0002c208(*(undefined4 *)(iVar1 + 0x1c),pbVar4 + 1);
  motor_on(*(undefined *)(DAT_0002b248 + 0x25),*(undefined4 *)(iVar1 + 0x1c));
  leds_req_constant_on(*(undefined4 *)(iVar1 + 0x4c),0x50,*(undefined4 *)(iVar1 + 0x1c));
  *pbVar3 = 1;
  return;
}


/* ---- FUN_0002b39c @ 0002b39c ---- */

void FUN_0002b39c(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  iVar1 = FUN_000255fc();
  if ((iVar1 == 0) && (iVar1 = FUN_000255a0(), iVar1 != 0)) {
    app_error_handler(iVar1,0xf1,s__________user_touch_c_0002b3e0);
  }
  local_8._0_2_ = (ushort)(byte)*DAT_0002b3f8;
  iVar1 = FUN_000254e4(5,&local_8,DAT_0002b3fc);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0xf8,s__________user_touch_c_0002b3e0);
  }
  FUN_0002544c(5,1);
  return;
}


/* ---- FUN_0002b400 @ 0002b400 ---- */

void FUN_0002b400(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0002b490;
  iVar1 = DAT_0002b48c;
  *(int *)(*param_1 * 4 + DAT_0002b490) = DAT_0002b48c;
  *(int *)(param_1[1] * 4 + iVar2) = iVar1;
  FUN_00025f7c(*param_1);
  FUN_00025f7c(param_1[1]);
  iVar1 = DAT_0002b48c + 1;
  *(int *)(*param_1 * 4 + iVar2) = iVar1;
  *(int *)(param_1[1] * 4 + iVar2) = iVar1;
  FUN_00024f08(4);
  iVar1 = DAT_0002b494;
  iVar2 = 0;
  do {
    if ((int)((*(uint *)(iVar1 + 0x10) >> (uint)*(byte *)(param_1 + 1)) << 0x1f) < 0) {
      if (iVar2 == 0) {
        return;
      }
      break;
    }
    *(int *)(iVar1 + 0xc) = 1 << (uint)*(byte *)param_1;
    FUN_00024f08(4);
    FUN_00025f7c(*param_1);
    FUN_00024f08(4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  *(int *)(iVar1 + 0xc) = 1 << *(byte *)(param_1 + 1);
  FUN_00024f08(4);
  FUN_00025f7c(param_1[1]);
  return;
}


/* ---- FUN_0002b498 @ 0002b498 ---- */

int FUN_0002b498(uint param_1)

{
  int iVar1;
  
  iVar1 = 3;
  if ((param_1 & 1) != 0) {
    iVar1 = 0x8200;
  }
  if ((int)(param_1 << 0x1e) < 0) {
    iVar1 = DAT_0002b4b4;
  }
  if ((int)(param_1 << 0x1d) < 0) {
    iVar1 = DAT_0002b4b4 + 1;
  }
  return iVar1;
}


/* ---- FUN_0002b4b8 @ 0002b4b8 ---- */

undefined4 FUN_0002b4b8(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  
  local_28 = 0;
  param_2[0x41] = 0;
  param_2[0x49] = 0;
  param_2[0x47] = 0;
  param_2[0x42] = 0;
  *(undefined *)((int)param_1 + 0x26) = 0;
  *(undefined *)((int)param_1 + 0x23) = 0;
  if (param_4 == 1) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  param_2[0x80] = uVar2;
  param_2[8] = 1;
  *param_2 = 1;
  if (*param_1 == 0) {
    do {
      iVar1 = FUN_0002b586(param_2,(int)param_1 + 0x23,(int)param_1 + 0x26,param_3,param_4,0);
    } while (iVar1 != 0);
    if (*(char *)((int)param_1 + 0x23) != '\0') {
      iVar1 = param_2[0x131];
      param_2[0x131] = iVar1;
      if (iVar1 != 0) {
        local_28 = FUN_0002b498();
      }
    }
  }
  else {
    param_1[2] = DAT_0002b554;
    param_2[0xc1] = param_1[2];
  }
  return local_28;
}


/* ---- FUN_0002b558 @ 0002b558 ---- */

undefined4 FUN_0002b558(int param_1,int param_2,uint param_3,byte *param_4,int param_5)

{
  if (*param_4 < param_3) {
    *(uint *)(param_1 + 0x51c) = (uint)*(byte *)(param_2 + (uint)*param_4);
    *param_4 = *param_4 + 1;
  }
  else {
    if (param_5 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  return 1;
}


/* ---- FUN_0002b586 @ 0002b586 ---- */

undefined4
FUN_0002b586(int param_1,char *param_2,byte *param_3,int param_4,uint param_5,undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  
  if ((*param_2 == '\0') && (*param_3 != param_5)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (*param_2 != '\0') {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    goto LAB_0002b66c;
  }
  iVar2 = FUN_0002616e(param_1,0x124);
  if (iVar2 == 0) {
    iVar2 = FUN_0002616e(param_1,0x11c);
    if (iVar2 == 0) {
      iVar2 = FUN_0002616e(param_1,0x108);
      if (iVar2 == 0) goto LAB_0002b66c;
      *(undefined4 *)(param_1 + 0x108) = 0;
      iVar2 = FUN_0002616e(param_1,0x124);
      if (iVar2 == 0) {
        if (*param_3 < param_5) {
          *(char *)(param_4 + (uint)*param_3) = (char)*(undefined4 *)(param_1 + 0x518);
          bVar4 = *param_3 + 1;
          *param_3 = bVar4;
          if ((uint)bVar4 == param_5 - 1) {
            *(undefined4 *)(param_1 + 0x200) = 2;
          }
          else if (bVar4 == param_5) goto LAB_0002b66c;
          *(undefined4 *)(param_1 + 0x20) = 1;
        }
        goto LAB_0002b66c;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x11c) = 0;
      iVar2 = FUN_0002616e(param_1,0x124);
      if (iVar2 == 0) {
        iVar2 = FUN_0002b558(param_1,param_4,param_5,param_3,param_6);
        if (iVar2 == 0) {
          return 0;
        }
        goto LAB_0002b66c;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *param_2 = '\x01';
LAB_0002b66c:
  if ((bVar1) && (iVar2 = FUN_0002616e(param_1,0x104), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x104) = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


/* ---- FUN_0002b690 @ 0002b690 ---- */

undefined4
FUN_0002b690(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 local_2c;
  
  local_2c = 0;
  *(undefined4 *)(param_2 + 0x104) = 0;
  *(undefined4 *)(param_2 + 0x124) = 0;
  *(undefined4 *)(param_2 + 0x11c) = 0;
  *(undefined4 *)(param_2 + 0x108) = 0;
  *(undefined4 *)(param_2 + 0x200) = 0;
  *(undefined *)((int)param_1 + 0x26) = 0;
  *(undefined *)((int)param_1 + 0x23) = 0;
  *(undefined4 *)(param_2 + 0x20) = 1;
  *(undefined4 *)(param_2 + 8) = 1;
  FUN_0002b558(param_2,param_3,param_4,(int)param_1 + 0x26,param_5);
  if (*param_1 == 0) {
    do {
      iVar1 = FUN_0002b586(param_2,(int)param_1 + 0x23,(int)param_1 + 0x26,param_3,param_4,param_5);
    } while (iVar1 != 0);
    if (*(char *)((int)param_1 + 0x23) != '\0') {
      iVar1 = *(int *)(param_2 + 0x4c4);
      *(int *)(param_2 + 0x4c4) = iVar1;
      if (iVar1 != 0) {
        local_2c = FUN_0002b498();
      }
    }
  }
  else {
    param_1[2] = DAT_0002b728;
    *(int *)(param_2 + 0x304) = param_1[2];
  }
  return local_2c;
}


/* ---- FUN_0002b72c @ 0002b72c ---- */

undefined4 FUN_0002b72c(int *param_1,int param_2,int *param_3,int param_4)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_2 + 0x308) = 0xffffffff;
  if (*(char *)(param_1 + 9) != '\0') {
    *(int *)(param_2 + 0x304) = param_1[2];
    return 0x11;
  }
  *(char *)(param_1 + 9) = (char)((param_4 << 0x1d) >> 0x1f) + '\x01';
  if (param_4 << 0x1c < 0) {
    uVar2 = 6;
  }
  else {
    param_1[6] = param_4;
    iVar3 = param_3[1];
    iVar4 = param_3[2];
    param_1[3] = *param_3;
    param_1[4] = iVar3;
    param_1[5] = iVar4;
    *(char *)(param_1 + 8) = *(char *)((int)param_3 + 2);
    param_1[7] = param_3[1];
    *(uint *)(param_2 + 0x588) = (uint)*(byte *)((int)param_3 + 1);
    if (*(char *)param_3 == '\x01') {
      *(undefined *)((int)param_1 + 0x21) = 0;
      uVar2 = FUN_0002b4b8(param_1,param_2,param_3[1],*(char *)((int)param_3 + 2),param_4);
    }
    else {
      if ((*(char *)param_3 == '\0') && (-1 < param_4 << 0x1a)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      *(undefined *)((int)param_1 + 0x21) = uVar1;
      uVar2 = FUN_0002b690(param_1,param_2,param_3[1],*(char *)((int)param_3 + 2),uVar1);
    }
    if (*param_1 == 0) {
      *(undefined *)(param_1 + 9) = 0;
      return uVar2;
    }
  }
  return uVar2;
}


/* ---- FUN_0002b7b8 @ 0002b7b8 ---- */

void FUN_0002b7b8(void)

{
  FUN_0001b1ce(DAT_0002b7c8,0x120);
  return;
}


/* ---- FUN_0002b7cc @ 0002b7cc ---- */

void FUN_0002b7cc(undefined2 *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar2 = DAT_0002b824;
  puVar1 = DAT_0002b820;
  uVar4 = *DAT_0002b820;
  puVar3 = (undefined4 *)(uVar4 * 0x24 + DAT_0002b824);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined2 *)(iVar2 + uVar4 * 0x24) = *param_1;
  *(undefined *)((int)puVar3 + 2) = *(undefined *)(param_1 + 1);
  *(undefined2 *)((int)puVar3 + 0x1a) = param_1[0xd];
  *(undefined2 *)((int)puVar3 + 0x1e) = param_1[0xf];
  *(undefined *)(puVar3 + 6) = *(undefined *)(param_1 + 0xc);
  *(undefined *)((int)puVar3 + 0x19) = *(undefined *)((int)param_1 + 0x19);
  puVar3[8] = puVar3 + 1;
  *(undefined2 *)(puVar3 + 7) = param_1[0xe];
  if (*(char *)(param_1 + 1) == '\x02') {
    FUN_0001b19c(puVar3 + 1,param_1 + 2,0x14);
  }
  *puVar1 = *(byte *)puVar1 + 1 & 7;
  return;
}


/* ---- FUN_0002b828 @ 0002b828 ---- */

void FUN_0002b828(void)

{
  short sVar1;
  int iVar2;
  
  if (DAT_0002b864[1] != *DAT_0002b864) {
    iVar2 = DAT_0002b864[1] * 0x24;
    if (*(char *)(iVar2 + DAT_0002b868 + 2) == '\x01') {
      sVar1 = *(short *)(DAT_0002b868 + iVar2);
      software_interrupt(0x96);
    }
    else {
      sVar1 = *(short *)(DAT_0002b868 + iVar2);
      software_interrupt(0x98);
    }
    if (sVar1 == 0) {
      DAT_0002b864[1] = *(byte *)(DAT_0002b864 + 1) + 1 & 7;
    }
  }
  return;
}


/* ---- FUN_0002b86c @ 0002b86c ---- */

undefined4 FUN_0002b86c(undefined4 param_1,undefined *param_2)

{
  *param_2 = (char)param_1;
  param_2[1] = (char)((uint)param_1 >> 8);
  return 2;
}


/* ---- FUN_0002b876 @ 0002b876 ---- */

undefined4 FUN_0002b876(undefined4 param_1,undefined *param_2)

{
  *param_2 = (char)param_1;
  param_2[1] = (char)((uint)param_1 >> 8);
  param_2[2] = (char)((uint)param_1 >> 0x10);
  param_2[3] = (char)((uint)param_1 >> 0x18);
  return 4;
}


/* ---- FUN_0002b888 @ 0002b888 ---- */

/* WARNING: Removing unreachable block (ram,0x0002b8f4) */
/* WARNING: Removing unreachable block (ram,0x0002b8d0) */

void FUN_0002b888(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_0002b93c;
  if (((*(char *)(DAT_0002b93c + 10) != '\x01') && (*(char *)(DAT_0002b93c + 0xb) != '\x01')) ||
     (*(short *)(DAT_0002b93c + 0x2c) == 0)) {
    iVar1 = FUN_00025140(DAT_0002b940);
    if (iVar1 == 0) {
      uVar3 = FUN_0001ea28(0);
      FUN_000286e0(s_Battery_voltage____dmV___d___0002b970,0,uVar3);
    }
    else {
      uVar3 = (uint)(byte)*(undefined2 *)(iVar2 + 0x2c);
    }
    *(short *)(iVar2 + 0x2c) = (short)uVar3;
  }
  if (((0x84 < *(byte *)(iVar2 + 8)) && (*(byte *)(iVar2 + 8) != 0xff)) &&
     ((iVar2 = FUN_0001f92c(DAT_0002b9bc,DAT_0002b93c + 0x2c), iVar2 != 0 && (iVar2 == DAT_0002b9c0)
      ))) {
    software_interrupt(0xa9);
    if (*(short *)(DAT_0002b9bc + 0x5c) != 0) {
      app_error_handler(*(short *)(DAT_0002b9bc + 0x5c),0xae,s__________battery_measure_c_0002b9c4,2
                       );
    }
  }
  return;
}


/* ---- FUN_0002b9e0 @ 0002b9e0 ---- */

int FUN_0002b9e0(void)

{
  int iVar1;
  undefined local_20 [2];
  undefined local_1e;
  undefined local_1d;
  undefined local_1c;
  undefined2 local_1b;
  undefined2 local_19;
  undefined2 local_17;
  undefined4 local_15;
  
  FUN_0001b1ce(local_20,0x14);
  local_20[0] = 0x27;
  local_1e = 0x31;
  local_1d = 0x10;
  local_1b = *(undefined2 *)(DAT_0002ba34 + 0x28);
  local_19 = *(undefined2 *)(DAT_0002ba34 + 0x2a);
  local_17 = *(undefined2 *)(DAT_0002ba34 + 0x2c);
  local_15 = *(undefined4 *)(DAT_0002ba34 + 0x30);
  local_1c = *(undefined *)(DAT_0002ba34 + 0x27);
  iVar1 = FUN_0001f1c0(DAT_0002ba38,local_20);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0002ba40,DAT_0002ba3c);
  }
  return iVar1;
}


/* ---- FUN_0002ba44 @ 0002ba44 ---- */

int FUN_0002ba44(void)

{
  int iVar1;
  undefined local_20 [2];
  undefined local_1e;
  undefined local_1d;
  undefined local_1c;
  undefined2 local_1b;
  undefined2 local_19;
  undefined2 local_17;
  undefined4 local_15;
  
  FUN_0001b1ce(local_20,0x14);
  local_20[0] = 0x27;
  local_1e = 0x21;
  local_1d = 0x10;
  local_1b = *(undefined2 *)(DAT_0002ba9c + 0x26);
  local_19 = *(undefined2 *)(DAT_0002ba9c + 0x28);
  local_17 = (undefined2)*(undefined4 *)(DAT_0002ba9c + 0x2c);
  local_15 = *(undefined4 *)(DAT_0002ba9c + 0x20);
  local_1c = *(undefined *)(DAT_0002ba9c + 0x24);
  iVar1 = FUN_0001f1c0(DAT_0002baa0,local_20);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0002baa8,DAT_0002baa4);
  }
  return iVar1;
}


/* ---- FUN_0002baac @ 0002baac ---- */

int FUN_0002baac(void)

{
  int iVar1;
  undefined local_28 [2];
  undefined local_26;
  undefined local_25;
  undefined auStack_24 [16];
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  FUN_0001b1ce(local_28,0x14);
  local_28[0] = 0x27;
  local_26 = 0x19;
  local_25 = 0x10;
  local_14 = *(undefined2 *)(DAT_0002bb08 + 0x34);
  local_12 = *(undefined2 *)(DAT_0002bb08 + 0x36);
  local_10 = *(undefined2 *)(DAT_0002bb08 + 0x38);
  local_e = *(undefined2 *)(DAT_0002bb08 + 0x3a);
  local_c = *(undefined2 *)(DAT_0002bb08 + 0x3c);
  local_a = *(undefined2 *)(DAT_0002bb08 + 0x3e);
  FUN_0001b19c(auStack_24,&local_14,0xc);
  iVar1 = FUN_0001f1c0(DAT_0002bb0c,local_28);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x2cc,DAT_0002bb10);
  }
  return iVar1;
}


/* ---- FUN_0002bb14 @ 0002bb14 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0002bb14(undefined param_1,undefined4 param_2)

{
  int iVar1;
  undefined local_20 [2];
  undefined local_1e;
  undefined local_1d;
  undefined auStack_1c [16];
  undefined4 local_c;
  
  local_c = param_2;
  FUN_0001b1ce(local_20,0x14);
  local_20[0] = 0x27;
  local_1d = 0x10;
  local_1e = param_1;
  FUN_0001b19c(auStack_1c,&local_c,4);
  iVar1 = FUN_0001f1c0(_DAT_0002bb54,local_20);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0002bb78,s__________application_app_misc_c_0002bb57 + 1);
  }
  return iVar1;
}


/* ---- FUN_0002bb7c @ 0002bb7c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0002bb7c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0001f884(_DAT_0002bb98,param_1);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x1af,s__________application_app_misc_c_0002bb9b + 1);
  }
  return iVar1;
}


/* ---- FUN_0002bbbc @ 0002bbbc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002bbbc(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_40;
  undefined2 local_3c [8];
  undefined auStack_2c [24];
  
  debug_printf_stub(s_update_pending_flags_check_______0002bc1c);
  iVar1 = _DAT_0002bc40;
  iVar2 = FUN_0001f6a0(*(undefined *)(_DAT_0002bc40 + 1));
  if (iVar2 != 0) {
    FUN_0001f494(auStack_2c);
    FUN_0001b19c(&local_40,auStack_2c,0x14);
    debug_printf_stub(s_update_pending_flags_check_____d_0002bc43 + 1,local_40);
    for (uVar3 = 0; uVar3 < local_40; uVar3 = uVar3 + 1) {
      iVar2 = FUN_0001f6b8(local_3c[uVar3],*(undefined *)(iVar1 + 1));
      if (iVar2 != 0) {
        debug_printf_stub(s_local_db_update_in_evt_____d__d_0002bc68,local_40,
                          *(undefined *)(iVar1 + 1));
        FUN_000244c8(local_3c[uVar3]);
      }
    }
  }
  return;
}


/* ---- FUN_0002bcf0 @ 0002bcf0 ---- */

void FUN_0002bcf0(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0002bd38;
  if (*(char *)(DAT_0002bd38 + 6) != '\0') {
    FUN_0002bd5c();
  }
  uVar2 = FUN_0001b13c(param_1 * 0x8000 + DAT_0002bd3c,
                       (param_1 >> 0x11) + (uint)CARRY4(param_1 * 0x8000,DAT_0002bd3c),
                       DAT_0002bd3c << 1,0);
  iVar3 = app_timer_start(*(undefined4 *)(DAT_0002bd40 + 0x18),uVar2,param_2);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x208,s__________user_timer_c_0002bd44);
    return;
  }
  *(undefined *)(iVar1 + 6) = 1;
  return;
}


/* ---- FUN_0002bd5c @ 0002bd5c ---- */

void FUN_0002bd5c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002bd84;
  if (*(char *)(DAT_0002bd84 + 6) != '\0') {
    iVar2 = FUN_0001dd8c(*(undefined4 *)(DAT_0002bd88 + 0x18));
    if (iVar2 == 0) {
      *(undefined *)(iVar1 + 6) = 0;
      return;
    }
    app_error_handler(iVar2,DAT_0002bda4,s__________user_timer_c_0002bd8c);
  }
  return;
}


/* ---- FUN_0002bda8 @ 0002bda8 ---- */

undefined4 FUN_0002bda8(uint param_1)

{
  if ((*DAT_0002bdbc & 1 << (param_1 & 0xff)) != 0) {
    return 1;
  }
  return 0;
}


/* ---- led_color_calibration @ 0002bdc0 ---- */

undefined4
led_color_calibration(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (*(int *)(DAT_0002bdf8 + uVar2 * 0x10) == param_1) {
      iVar1 = uVar2 * 0x10 + DAT_0002bdf8;
      *param_2 = *(undefined4 *)(iVar1 + 4);
      *param_3 = *(undefined4 *)(iVar1 + 8);
      *param_4 = *(undefined4 *)(iVar1 + 0xc);
      return 1;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x14);
  *param_2 = 0x3f800000;
  *param_3 = 0x3f800000;
  *param_4 = 0x3f800000;
  return 0;
}


/* ---- FUN_0002bdfc @ 0002bdfc ---- */

uint FUN_0002bdfc(void)

{
  int iVar1;
  
  iVar1 = FUN_0001dc28();
  return (uint)(DAT_0002be0c * iVar1) >> 0xf;
}


/* ---- FUN_0002be10 @ 0002be10 ---- */

void FUN_0002be10(undefined4 param_1)

{
  undefined4 *puVar1;
  
  FUN_0001b1ce(DAT_0002be2c,0x1c);
  puVar1 = DAT_0002be2c;
  *DAT_0002be2c = param_1;
  *(undefined *)((int)puVar1 + -3) = 0x12;
  return;
}


/* ---- FUN_0002be30 @ 0002be30 ---- */

void FUN_0002be30(undefined4 param_1)

{
  undefined4 *puVar1;
  
  FUN_0001b1ce(DAT_0002be58,0x1c);
  puVar1 = DAT_0002be58;
  *DAT_0002be58 = param_1;
  *(undefined *)((int)puVar1 + -3) = 0x13;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  post_state_event(puVar1 + -0xb);
  return;
}


/* ---- leds_off @ 0002be5c ---- */

void leds_off(void)

{
  int iVar1;
  
  if (*(char *)(DAT_0002be8c + 0xf) == '\x01') {
    FUN_0001e71a();
  }
  leds_execute_timer_stop();
  iVar1 = DAT_0002be8c;
  *(undefined *)(DAT_0002be8c + -0x16) = 0;
  post_state_event(iVar1 + -0x18);
  if (*(char *)(iVar1 + -0x15) != '\x01') {
    FUN_00028688();
  }
  return;
}


/* ---- leds_req_blink @ 0002be90 ---- */
/* mode 0x16 (rgb, bright, on_ms, off_ms, execute_ms) */

/* mode 0x16 (rgb, bright, on_ms, off_ms, execute_ms) */

void leds_req_blink(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  undefined4 *puVar1;
  
  FUN_0001b1ce(DAT_0002bec4,0x1c,param_3,param_4,param_4);
  puVar1 = DAT_0002bec4;
  *DAT_0002bec4 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  *(undefined *)((int)puVar1 + -3) = 0x16;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  post_state_event(puVar1 + -0xb);
  return;
}


/* ---- leds_req_breath @ 0002bec8 ---- */
/* mode 0x11 (rgb, bright, rise, fall, hold, off, execute) */

/* mode 0x11 (rgb, bright, rise, fall, hold, off, execute) */

void leds_req_breath(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  
  FUN_0001b1ce(DAT_0002bf04,0x1c,param_3,param_4,param_4);
  puVar1 = DAT_0002bf04;
  *DAT_0002bf04 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  puVar1[5] = param_6;
  puVar1[6] = param_7;
  *(undefined *)((int)puVar1 + -3) = 0x11;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  post_state_event(puVar1 + -0xb);
  return;
}


/* ---- leds_req_constant_on @ 0002bf08 ---- */
/* mode 0x15 */

/* mode 0x15 */

void leds_req_constant_on(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  FUN_0001b1ce(DAT_0002bf38,0x1c);
  puVar1 = DAT_0002bf38;
  *DAT_0002bf38 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined *)((int)puVar1 + -3) = 0x15;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  post_state_event(puVar1 + -0xb,0x15,puVar1 + 3);
  return;
}


/* ---- leds_req_fade_out @ 0002bf3c ---- */
/* mode 0x14 */

/* mode 0x14 */

void leds_req_fade_out(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  undefined4 *puVar1;
  
  FUN_0001b1ce(DAT_0002bf70,0x1c,param_3,param_4,param_4);
  puVar1 = DAT_0002bf70;
  *DAT_0002bf70 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  *(undefined *)((int)puVar1 + -3) = 0x14;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  post_state_event(puVar1 + -0xb);
  return;
}


/* ---- leds_req_test_3color @ 0002bf74 ---- */
/* mode 0x17 (3 colours, 3 brightness, ms) */

/* mode 0x17 (3 colours, 3 brightness, ms) */

void leds_req_test_3color
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  
  FUN_0001b1ce(DAT_0002bfb0,0x1c,param_3,param_4,param_4);
  puVar1 = DAT_0002bfb0;
  *DAT_0002bfb0 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  puVar1[5] = param_6;
  puVar1[6] = param_7;
  *(undefined *)((int)puVar1 + -3) = 0x17;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  post_state_event(puVar1 + -0xb);
  return;
}


/* ---- FUN_0002bfb4 @ 0002bfb4 ---- */

void FUN_0002bfb4(void)

{
  leds_req_breath(DAT_0002bfd4,0x1e,500,500,0,0x32,0x3fc);
  return;
}


/* ---- leds_execute_timer_start @ 0002bfd8 ---- */
/* ms -> ticks = (ms*32768+16500)/33000 (prescaler 32); <5 ticks -> app_error -> reset */

/* ms -> ticks = (ms*32768+16500)/33000 (prescaler 32); <5 ticks -> app_error -> reset */

void leds_execute_timer_start(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0002c020;
  if (*(char *)(DAT_0002c020 + 2) != '\0') {
    leds_execute_timer_stop();
  }
  uVar2 = FUN_0001b13c(param_1 * 0x8000 + DAT_0002c024,
                       (param_1 >> 0x11) + (uint)CARRY4(param_1 * 0x8000,DAT_0002c024),
                       DAT_0002c024 << 1,0);
  iVar3 = app_timer_start(*(undefined4 *)(DAT_0002c028 + 8),uVar2,param_2);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x11f,s__________user_timer_c_0002c02c);
    return;
  }
  *(undefined *)(iVar1 + 2) = 1;
  return;
}


/* ---- leds_execute_timer_stop @ 0002c044 ---- */

void leds_execute_timer_stop(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002c06c;
  if (*(char *)(DAT_0002c06c + 2) != '\0') {
    iVar2 = FUN_0001dd8c(*(undefined4 *)(DAT_0002c070 + 8));
    if (iVar2 == 0) {
      *(undefined *)(iVar1 + 2) = 0;
      return;
    }
    app_error_handler(iVar2,300,s__________user_timer_c_0002c074);
  }
  return;
}


/* ---- motor_timer_start @ 0002c08c ---- */

void motor_timer_start(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0002c0d4;
  if (*(char *)(DAT_0002c0d4 + 3) != '\0') {
    FUN_0002c0f8();
  }
  uVar2 = FUN_0001b13c(param_1 * 0x8000 + DAT_0002c0d8,
                       (param_1 >> 0x11) + (uint)CARRY4(param_1 * 0x8000,DAT_0002c0d8),
                       DAT_0002c0d8 << 1,0);
  iVar3 = app_timer_start(*(undefined4 *)(DAT_0002c0dc + 0xc),uVar2,0);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x168,s__________user_timer_c_0002c0e0);
    return;
  }
  *(undefined *)(iVar1 + 3) = 1;
  return;
}


/* ---- FUN_0002c0f8 @ 0002c0f8 ---- */

void FUN_0002c0f8(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002c120;
  if (*(char *)(DAT_0002c120 + 3) != '\0') {
    iVar2 = FUN_0001dd8c(*(undefined4 *)(DAT_0002c124 + 0xc));
    if (iVar2 == 0) {
      *(undefined *)(iVar1 + 3) = 0;
      return;
    }
    app_error_handler(iVar2,0x175,s__________user_timer_c_0002c128);
  }
  return;
}


/* ---- FUN_0002c140 @ 0002c140 ---- */

int FUN_0002c140(undefined *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = DAT_0002c168;
  bVar1 = DAT_0002c168[1];
  uVar3 = bVar1 + 1 & 0xff;
  if (DAT_0002c168[2] == uVar3) {
    uVar3 = 0;
  }
  if (*DAT_0002c168 == uVar3) {
    return 0;
  }
  *param_1 = (char)uVar3;
  return *(int *)(pbVar2 + 4) + (uint)bVar1 * 0x18;
}


/* ---- FUN_0002c16c @ 0002c16c ---- */

void FUN_0002c16c(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0002c19c;
  if (*DAT_0002c19c != '\0') {
    FUN_0002c1c0();
  }
  iVar2 = app_timer_start(*DAT_0002c1a4,DAT_0002c1a0,0);
  if (iVar2 != 0) {
    app_error_handler(iVar2,0x82,s__________user_timer_c_0002c1a8);
    return;
  }
  *pcVar1 = '\x01';
  return;
}


/* ---- FUN_0002c1c0 @ 0002c1c0 ---- */

void FUN_0002c1c0(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0002c1e8;
  if (*DAT_0002c1e8 != '\0') {
    iVar2 = FUN_0001dd8c(*DAT_0002c1ec);
    if (iVar2 == 0) {
      *pcVar1 = '\0';
      return;
    }
    app_error_handler(iVar2,0x8f,s__________user_timer_c_0002c1f0);
  }
  return;
}


/* ---- FUN_0002c208 @ 0002c208 ---- */

void FUN_0002c208(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0002c250;
  if (*(char *)(DAT_0002c250 + 5) != '\0') {
    FUN_0002c274();
  }
  uVar2 = FUN_0001b13c(param_1 * 0x8000 + DAT_0002c254,
                       (param_1 >> 0x11) + (uint)CARRY4(param_1 * 0x8000,DAT_0002c254),
                       DAT_0002c254 << 1,0);
  iVar3 = app_timer_start(*(undefined4 *)(DAT_0002c258 + 0x14),uVar2,param_2);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x1c4,s__________user_timer_c_0002c25c);
    return;
  }
  *(undefined *)(iVar1 + 5) = 1;
  return;
}


/* ---- FUN_0002c274 @ 0002c274 ---- */

void FUN_0002c274(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002c29c;
  if (*(char *)(DAT_0002c29c + 5) != '\0') {
    iVar2 = FUN_0001dd8c(*(undefined4 *)(DAT_0002c2a0 + 0x14));
    if (iVar2 == 0) {
      *(undefined *)(iVar1 + 5) = 0;
      return;
    }
    app_error_handler(iVar2,0x1d2,s__________user_timer_c_0002c2a4);
  }
  return;
}


/* ---- queue_step_timer_start @ 0002c2bc ---- */

void queue_step_timer_start(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0002c304;
  if (*(char *)(DAT_0002c304 + 4) != '\0') {
    FUN_0002c328();
  }
  uVar2 = FUN_0001b13c(param_1 * 0x8000 + DAT_0002c308,
                       (param_1 >> 0x11) + (uint)CARRY4(param_1 * 0x8000,DAT_0002c308),
                       DAT_0002c308 << 1,0);
  iVar3 = app_timer_start(*(undefined4 *)(DAT_0002c30c + 0x10),uVar2,param_2);
  if (iVar3 != 0) {
    app_error_handler(iVar3,400,s__________user_timer_c_0002c310);
    return;
  }
  *(undefined *)(iVar1 + 4) = 1;
  return;
}


/* ---- FUN_0002c328 @ 0002c328 ---- */

void FUN_0002c328(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002c350;
  if (*(char *)(DAT_0002c350 + 4) != '\0') {
    iVar2 = FUN_0001dd8c(*(undefined4 *)(DAT_0002c354 + 0x10));
    if (iVar2 == 0) {
      *(undefined *)(iVar1 + 4) = 0;
      return;
    }
    app_error_handler(iVar2,0x19d,s__________user_timer_c_0002c358);
  }
  return;
}


/* ---- FUN_0002c378 @ 0002c378 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002c378(void)

{
  int iVar1;
  
  iVar1 = FUN_0001dc64(0x20,0x13,_DAT_0002c448,0);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0002c464,s__________user_timer_c_0002c44b + 1);
  }
  iVar1 = FUN_0001dc34(DAT_0002c46c,1,DAT_0002c468);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0002c464 + 7,s__________user_timer_c_0002c44b + 1);
  }
  iVar1 = FUN_0001dc34(DAT_0002c46c + 4,0,DAT_0002c470);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x244,s__________user_timer_c_0002c44b + 1);
  }
  iVar1 = FUN_0001dc34(DAT_0002c46c + 8,0,DAT_0002c474);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0002c464 + 0x13,s__________user_timer_c_0002c44b + 1);
  }
  iVar1 = FUN_0001dc34(DAT_0002c46c + 0xc,0,DAT_0002c478);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x250,s__________user_timer_c_0002c44b + 1);
  }
  iVar1 = FUN_0001dc34(DAT_0002c46c + 0x10,0,DAT_0002c47c);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0002c464 + 0x1f,s__________user_timer_c_0002c44b + 1);
  }
  iVar1 = FUN_0001dc34(DAT_0002c46c + 0x14,0,DAT_0002c480);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x25c,s__________user_timer_c_0002c44b + 1);
  }
  iVar1 = FUN_0001dc34(DAT_0002c46c + 0x18,0,DAT_0002c484);
  if (iVar1 != 0) {
    app_error_handler(iVar1,DAT_0002c464 + 0x2b,s__________user_timer_c_0002c44b + 1);
  }
  return;
}


/* ---- FUN_0002c7b4 @ 0002c7b4 ---- */

void FUN_0002c7b4(void)

{
  FUN_0002c1c0();
  FUN_0002c83c();
  FUN_0002c0f8();
  leds_execute_timer_stop();
  FUN_0002c328();
  FUN_0002c274();
  return;
}


/* ---- FUN_0002c7d0 @ 0002c7d0 ---- */

void FUN_0002c7d0(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0002c818;
  if (*(char *)(DAT_0002c818 + 1) != '\0') {
    FUN_0002c83c();
  }
  uVar2 = FUN_0001b13c(param_1 * 0x8000 + DAT_0002c81c,
                       (param_1 >> 0x11) + (uint)CARRY4(param_1 * 0x8000,DAT_0002c81c),
                       DAT_0002c81c << 1,0);
  iVar3 = app_timer_start(*(undefined4 *)(DAT_0002c820 + 4),uVar2,param_2);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x100,s__________user_timer_c_0002c824);
    return;
  }
  *(undefined *)(iVar1 + 1) = 1;
  return;
}


/* ---- FUN_0002c83c @ 0002c83c ---- */

void FUN_0002c83c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002c864;
  if (*(char *)(DAT_0002c864 + 1) != '\0') {
    iVar2 = FUN_0001dd8c(*(undefined4 *)(DAT_0002c868 + 4));
    if (iVar2 == 0) {
      *(undefined *)(iVar1 + 1) = 0;
      return;
    }
    app_error_handler(iVar2,0x10c,s__________user_timer_c_0002c86c);
  }
  return;
}


/* ---- FUN_0002c884 @ 0002c884 ---- */

void FUN_0002c884(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_0002c8b4(param_1,param_2,2,param_4,param_5,param_6);
  if (iVar1 == 0) {
    FUN_0002c8b4(param_1,param_3,0x10,param_4,param_5,param_6);
  }
  return;
}


/* ---- FUN_0002c8b4 @ 0002c8b4 ---- */

undefined8
FUN_0002c8b4(ushort *param_1,undefined *param_2,uint param_3,undefined *param_4,ushort *param_5,
            undefined *param_6)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte local_30 [4];
  undefined local_2c [24];
  
  bVar2 = false;
  uVar1 = *param_5;
  pbVar5 = param_2;
  for (iVar7 = 0; iVar7 < (int)(uint)*param_1; iVar7 = iVar7 + 1) {
    puVar4 = local_2c;
    software_interrupt(0x65);
    pbVar5 = local_30;
    if (puVar4 != (undefined *)0x0) goto LAB_0002c956;
    if (local_30[0] == param_3) {
      if (bVar2) {
        iVar6 = 0;
      }
      else {
        iVar6 = 2;
      }
      if (param_6 < (undefined *)((uint)*param_5 + (uint)local_30[0] + iVar6)) goto LAB_0002c954;
      if (!bVar2) {
        uVar3 = *param_5 + 1;
        *param_5 = (ushort)uVar3;
        param_4[uVar3 & 0xffff] = (char)param_2;
        *param_5 = *param_5 + 1;
        bVar2 = true;
      }
      puVar4 = local_2c;
      software_interrupt(0x65);
      pbVar5 = local_30;
      if (puVar4 != (undefined *)0x0) goto LAB_0002c956;
      *param_5 = *param_5 + (ushort)local_30[0];
    }
    pbVar5 = (byte *)(uint)local_30[0];
  }
  if (bVar2) {
    uVar3 = ((uint)*param_5 - (uint)uVar1) - 1 & 0xffff;
    param_6 = pbVar5;
    if (0xff < uVar3) {
LAB_0002c954:
      puVar4 = &HardFault;
      pbVar5 = param_6;
      goto LAB_0002c956;
    }
    param_4[uVar1] = (char)uVar3;
    pbVar5 = param_4;
  }
  puVar4 = (undefined *)0x0;
LAB_0002c956:
  return CONCAT44(pbVar5,puVar4);
}


/* ---- FUN_0002c962 @ 0002c962 ---- */

void FUN_0002c962(void)

{
  int iVar1;
  
  while (iVar1 = FUN_00022268(), iVar1 != 0) {
    FUN_000213dc();
  }
  return;
}


/* ---- FUN_0002c974 @ 0002c974 ---- */

void FUN_0002c974(int param_1)

{
  if (param_1 != 0) {
    if (param_1 == 1) {
      param_1 = 5;
    }
    else {
      if (param_1 != 2) {
        return;
      }
      FUN_00025404(9);
      param_1 = 8;
    }
  }
  FUN_00025404(param_1);
  return;
}


/* ---- FUN_0002c994 @ 0002c994 ---- */

void FUN_0002c994(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (param_1 == 1) {
    uVar1 = 5;
  }
  else {
    if (param_1 != 2) {
      return;
    }
    uVar1 = 8;
  }
  FUN_0002544c(uVar1,1);
  return;
}


/* ---- FUN_0002c9bc @ 0002c9bc ---- */

void FUN_0002c9bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined auStack_4 [4];
  
  local_10 = param_2;
  uStack_c = param_3;
  uStack_8 = param_4;
  FUN_000286e0(s_wdt_init______0002c9f8);
  local_10 = *DAT_0002ca08;
  uStack_c = DAT_0002ca08[1];
  uStack_8 = DAT_0002ca08[2];
  iVar1 = FUN_00025ec4(&local_10,DAT_0002ca0c,uStack_8,auStack_4);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x43,s__________bsp_bsp_bond_c_0002ca10);
  }
  iVar1 = FUN_00025e4c(DAT_0002ca28);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x45,s__________bsp_bsp_bond_c_0002ca10);
  }
  FUN_00025ea4();
  return;
}


/* ---- FUN_0002ca2c @ 0002ca2c ---- */

char FUN_0002ca2c(void)

{
  char cVar1;
  
  if ((*(char *)(DAT_0002ca40 + 4) != '\0') ||
     (cVar1 = *(char *)(DAT_0002ca40 + 0xc), cVar1 != '\0')) {
    cVar1 = '\x01';
  }
  return cVar1;
}


/* ---- FUN_0002ca44 @ 0002ca44 ---- */

void FUN_0002ca44(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  
  local_c = CONCAT31((int3)((uint)param_4 >> 8),param_2);
  FUN_00022ca8(DAT_0002ca5c,0x26,param_1,&local_c,1);
  return;
}


/* ---- FUN_0002ca60 @ 0002ca60 ---- */

void FUN_0002ca60(undefined2 *param_1)

{
  char cVar1;
  undefined2 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  uVar2 = 1;
  if ((cVar1 != '\x01') && (cVar1 != '\x06')) {
    if (cVar1 == '\a') {
      uVar2 = 0x14;
    }
    else {
      if (cVar1 != '\b') {
        return;
      }
      uVar2 = (undefined2)(*(ushort *)(*(int *)(param_1 + 2) + 4) + 9 >> 2);
    }
  }
  *param_1 = uVar2;
  return;
}


/* ---- FUN_0002ca84 @ 0002ca84 ---- */

void FUN_0002ca84(undefined4 param_1,uint param_2)

{
  int iVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    iVar1 = FUN_0002caa8(param_1,&local_10);
    if ((iVar1 == 0) || (*(byte *)(iVar1 + 2) == param_2)) break;
    local_10 = local_10 + 1;
  }
  return;
}


/* ---- FUN_0002caa8 @ 0002caa8 ---- */

int FUN_0002caa8(uint param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  while( true ) {
    if (7 < uVar1) {
      return 0;
    }
    if (*(ushort *)(DAT_0002cacc + uVar1 * 0x14) == param_1) break;
    uVar1 = uVar1 + 1;
  }
  return uVar1 * 0x14 + DAT_0002cacc;
}


/* ---- FUN_0002cad0 @ 0002cad0 ---- */

void FUN_0002cad0(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined *)(param_1 + 1) = 0xff;
  *(undefined *)(param_1 + 8) = 0xff;
  *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xf8;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* ---- FUN_0002caf4 @ 0002caf4 ---- */

void FUN_0002caf4(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0xc); uVar1 = uVar1 + 1) {
    FUN_00027b4a(DAT_0002cb18,*(byte *)(param_1 + 0x10) + uVar1 & 0xff);
  }
  FUN_0002cad0(param_1);
  return;
}


/* ---- FUN_0002cb1c @ 0002cb1c ---- */

int FUN_0002cb1c(int *param_1,ushort *param_2,undefined2 *param_3,int param_4)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  undefined local_50 [4];
  ushort local_4c;
  short local_4a;
  ushort local_48;
  undefined2 local_46;
  int local_44;
  undefined local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined local_3a;
  int local_38;
  undefined2 local_34 [2];
  undefined4 local_30;
  uint local_2c;
  int local_28;
  int *piStack_24;
  ushort *puStack_20;
  undefined2 *local_1c;
  int local_18;
  
  sVar2 = 0;
  local_30 = 0;
  if ((int)((uint)*DAT_0002cc28 << 0x1e) < 0) {
    if (param_2 == (ushort *)0x0) {
      iVar1 = 5;
    }
    else if ((*param_2 == DAT_0002cc2c) || (param_2[1] == 0)) {
      iVar1 = 4;
    }
    else {
      local_28 = *(int *)(param_2 + 2);
      local_2c = (uint)param_2[4];
      piStack_24 = param_1;
      puStack_20 = param_2;
      local_1c = param_3;
      local_18 = param_4;
      for (uVar3 = 0; uVar3 < local_2c; uVar3 = uVar3 + 1) {
        iVar1 = FUN_000233ca(*(undefined4 *)(local_28 + uVar3 * 8));
        if (iVar1 == 0) {
          return 3;
        }
      }
      if (local_1c == (undefined2 *)0x0) {
        for (uVar3 = 0; uVar3 < param_2[4]; uVar3 = uVar3 + 1) {
          sVar2 = *(short *)(*(int *)(param_2 + 2) + uVar3 * 8 + 4) + sVar2;
        }
        iVar1 = FUN_0002cd3c(sVar2,local_34);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      else {
        local_34[0] = *local_1c;
        sVar2 = local_1c[1];
      }
      local_50[0] = (undefined)local_18;
      local_40 = 0;
      local_3e = local_34[0];
      local_3a = *(undefined *)(param_2 + 4);
      local_3c = 3;
      local_44 = *(int *)(DAT_0002cc28 + 4) + 1;
      *(int *)(DAT_0002cc28 + 4) = local_44;
      local_48 = *param_2;
      local_4c = param_2[1];
      if (local_18 == 3) {
        local_40 = 4;
        local_38 = *param_1;
      }
      local_46 = (undefined2)local_30;
      local_4a = sVar2;
      iVar1 = FUN_00026b84(local_50,param_2[4],*(undefined4 *)(param_2 + 2));
      if (iVar1 == 0) {
        FUN_0002cd28(sVar2,local_34[0]);
        iVar1 = 8;
      }
      else {
        if (param_1 != (int *)0x0) {
          param_1[1] = 0;
          *param_1 = local_44;
          iVar1 = DAT_0002cc30;
          *(undefined *)((int)param_1 + 10) = 0;
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar1 + 8);
        }
        FUN_00029564();
        iVar1 = 0;
      }
    }
  }
  else {
    iVar1 = 2;
  }
  return iVar1;
}


/* ---- FUN_0002cc34 @ 0002cc34 ---- */

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0002cc62) */
/* WARNING: Removing unreachable block (ram,0x0002cc62) */

undefined4 FUN_0002cc34(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    FUN_00026c8e((uint)*(ushort *)(param_2 + 0x12) * 0x10 + DAT_0002cd18,
                 *(undefined2 *)(param_2 + 6),DAT_0002cd18,param_4,param_4);
    return 1;
  }
  uVar2 = (uint)*(byte *)(param_2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0002cc62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (DAT_0002cc66 <= uVar2) {
    uVar2 = (uint)DAT_0002cc66;
  }
  uVar1 = (*(code *)((uint)*(byte *)(uVar2 + 0x2cc67) * 2 + 0x2cc67))(DAT_0002cd18 + -0xec);
  return uVar1;
}


/* ---- FUN_0002cd28 @ 0002cd28 ---- */

void FUN_0002cd28(short param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 0x10 + DAT_0002cd38;
  *(short *)(iVar1 + 10) = (*(short *)(iVar1 + 10) - param_1) + -3;
  return;
}


/* ---- FUN_0002cd3c @ 0002cd3c ---- */

undefined4 FUN_0002cd3c(short param_1,undefined2 *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0002cd84;
  uVar1 = param_1 + 3;
  if (0xfd < uVar1) {
    return 9;
  }
  uVar2 = 0;
  while ((*(char *)(DAT_0002cd84 + uVar2 * 0x10) != '\0' ||
         (iVar4 = uVar2 * 0x10 + DAT_0002cd84,
         0xff < (ushort)(*(short *)(iVar4 + 10) + *(short *)(iVar4 + 8) + uVar1)))) {
    uVar2 = uVar2 + 1 & 0xffff;
    if (1 < uVar2) {
      return 7;
    }
  }
  *param_2 = (short)uVar2;
  iVar3 = uVar2 * 0x10 + iVar3;
  *(ushort *)(iVar3 + 10) = *(short *)(iVar3 + 10) + uVar1;
  return 0;
}


