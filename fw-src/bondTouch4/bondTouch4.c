/* Ghidra 11.1.2 headless decompilation of application.bin, base 0x26000. */
/* Derived from vendor firmware: for private interoperability study only. */

/* ---- main_loop @ 00026208 ---- */

void main_loop(void)

{
  (*DAT_0002620c)();
  return;
}


/* ---- app_error_handler @ 00026218 ---- */

void app_error_handler(void)

{
  app_error_fault_handler(0x4001);
  return;
}


/* ---- FUN_00026234 @ 00026234 ---- */

undefined4 FUN_00026234(int param_1,uint *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  while( true ) {
    ExclusiveAccess((uint *)(param_1 + 4));
    uVar3 = *(uint *)(param_1 + 4);
    uVar4 = (uVar3 & 0xffff) + (uint)*(ushort *)(param_1 + 0xe);
    if (*(ushort *)(param_1 + 0xc) <= uVar4) {
      uVar4 = uVar4 - *(ushort *)(param_1 + 0xc);
    }
    if (uVar4 == *(ushort *)(param_1 + 8)) break;
    bVar1 = (bool)hasExclusiveAccess((uint *)(param_1 + 4));
    if (bVar1) {
      *(uint *)(param_1 + 4) = uVar4 & 0xffff | uVar3 & 0xffff0000;
      uVar2 = 1;
LAB_00026266:
      *param_2 = uVar3;
      return uVar2;
    }
  }
  ClearExclusiveLocal();
  uVar2 = 0;
  goto LAB_00026266;
}


/* ---- FUN_0002626c @ 0002626c ---- */

void FUN_0002626c(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  do {
    ExclusiveAccess((uint *)(param_1 + 4));
    uVar2 = *(uint *)(param_1 + 4);
    bVar1 = (bool)hasExclusiveAccess((uint *)(param_1 + 4));
  } while (!bVar1);
  *(uint *)(param_1 + 4) = uVar2 & 0xffff | uVar2 << 0x10;
  return;
}


/* ---- FUN_0002627e @ 0002627e ---- */

undefined4 FUN_0002627e(int param_1,uint *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  do {
    ExclusiveAccess((uint *)(param_1 + 8));
    uVar3 = *(uint *)(param_1 + 8);
    if (uVar3 >> 0x10 == (uint)*(ushort *)(param_1 + 6)) {
      ClearExclusiveLocal();
      uVar2 = 0;
      goto LAB_000262b2;
    }
    uVar4 = (uVar3 >> 0x10) + (uint)*(ushort *)(param_1 + 0xe);
    if (*(ushort *)(param_1 + 0xc) <= uVar4) {
      uVar4 = uVar4 - *(ushort *)(param_1 + 0xc);
    }
    bVar1 = (bool)hasExclusiveAccess((uint *)(param_1 + 8));
  } while (!bVar1);
  *(uint *)(param_1 + 8) = uVar3 & 0xffff | uVar4 << 0x10;
  uVar2 = 1;
LAB_000262b2:
  *param_2 = uVar3;
  return uVar2;
}


/* ---- FUN_000262b8 @ 000262b8 ---- */

void FUN_000262b8(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  do {
    ExclusiveAccess((uint *)(param_1 + 8));
    uVar2 = *(uint *)(param_1 + 8);
    bVar1 = (bool)hasExclusiveAccess((uint *)(param_1 + 8));
  } while (!bVar1);
  *(uint *)(param_1 + 8) = uVar2 & 0xffff0000 | (int)uVar2 >> 0x10 & 0xffffU;
  return;
}


/* ---- FUN_000262ca @ 000262ca ---- */

undefined4 FUN_000262ca(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  do {
    ExclusiveAccess((uint *)(param_1 + 8));
    uVar4 = *(uint *)(param_1 + 8);
    uVar1 = *(ushort *)(param_1 + 6);
    uVar3 = (uint)uVar1;
    bVar5 = uVar4 != (uVar4 >> 0x10 | uVar4 << 0x10);
    uVar2 = 0;
    if (bVar5) {
      uVar4 = uVar4 & 0xffff;
    }
    else {
      uVar3 = CONCAT22(uVar1,uVar1);
    }
    if (bVar5) {
      uVar3 = uVar4 | uVar3 << 0x10;
    }
    else {
      uVar4 = *(uint *)(param_1 + 4);
      if (uVar4 == (uVar4 >> 0x10 | uVar4 << 0x10)) {
        uVar2 = 1;
      }
    }
    bVar5 = (bool)hasExclusiveAccess((uint *)(param_1 + 8));
  } while (!bVar5);
  *(uint *)(param_1 + 8) = uVar3;
  return uVar2;
}


/* ---- FUN_000262fc @ 000262fc ---- */

undefined4 FUN_000262fc(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  do {
    ExclusiveAccess(param_1);
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = param_2;
  *param_3 = param_2;
  return uVar2;
}


/* ---- FUN_00026314 @ 00026314 ---- */

void FUN_00026314(uint *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  
  do {
    ExclusiveAccess(param_1);
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 | param_2;
  *param_3 = uVar2 | param_2;
  return;
}


/* ---- FUN_0002632e @ 0002632e ---- */

void FUN_0002632e(uint *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  
  do {
    ExclusiveAccess(param_1);
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 & param_2;
  *param_3 = uVar2 & param_2;
  return;
}


/* ---- FUN_00026348 @ 00026348 ---- */

void FUN_00026348(uint *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  
  do {
    ExclusiveAccess(param_1);
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 ^ param_2;
  *param_3 = uVar2 ^ param_2;
  return;
}


/* ---- FUN_00026362 @ 00026362 ---- */

void FUN_00026362(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  
  do {
    ExclusiveAccess(param_1);
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + param_2;
  *param_3 = iVar2 + param_2;
  return;
}


/* ---- FUN_0002637c @ 0002637c ---- */

void FUN_0002637c(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  
  do {
    ExclusiveAccess(param_1);
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 - param_2;
  *param_3 = iVar2 - param_2;
  return;
}


/* ---- FUN_00026396 @ 00026396 ---- */

undefined4 FUN_00026396(int *param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  do {
    uVar2 = 0;
    ExclusiveAccess(param_1);
    iVar3 = *param_1;
    bVar4 = iVar3 == *param_2;
    if (bVar4) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      param_4 = 1;
      if (bVar1) {
        param_4 = 0;
        *param_1 = param_3;
      }
    }
    if (bVar4) {
      uVar2 = 1;
    }
    else {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      param_4 = 1;
      if (bVar1) {
        param_4 = 0;
        *param_1 = iVar3;
      }
    }
    if (!bVar4) {
      *param_2 = iVar3;
    }
  } while (param_4 != 0);
  return uVar2;
}


/* ---- FUN_000263c0 @ 000263c0 ---- */

void FUN_000263c0(uint *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  
  do {
    ExclusiveAccess(param_1);
    uVar2 = *param_1;
    if (param_2 <= uVar2) {
      uVar2 = uVar2 - param_2;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2;
  *param_3 = uVar2;
  return;
}


/* ---- FUN_000263e0 @ 000263e0 ---- */

void FUN_000263e0(void)

{
  (*DAT_000263fc)();
                    /* WARNING: Could not recover jumptable at 0x000263e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00026400)();
  return;
}


/* ---- FUN_000263e8 @ 000263e8 ---- */

void FUN_000263e8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263ea @ 000263ea ---- */

void FUN_000263ea(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263ec @ 000263ec ---- */

void FUN_000263ec(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263ee @ 000263ee ---- */

void FUN_000263ee(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263f0 @ 000263f0 ---- */

void FUN_000263f0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263f2 @ 000263f2 ---- */

void FUN_000263f2(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263f4 @ 000263f4 ---- */

void FUN_000263f4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263f6 @ 000263f6 ---- */

void FUN_000263f6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263f8 @ 000263f8 ---- */

void FUN_000263f8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263fa @ 000263fa ---- */

void FUN_000263fa(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_00026404 @ 00026404 ---- */

longlong FUN_00026404(uint param_1,int param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar1 = 0;
  iVar3 = 0x40;
  while (iVar4 = iVar3 + -1, 0 < iVar3) {
    uVar6 = FUN_0002693a(param_1,param_2,iVar4);
    uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
    iVar3 = iVar4;
    if (param_4 < uVar2 || uVar2 - param_4 < (uint)(param_3 <= (uint)uVar6)) {
      uVar6 = FUN_00026466(param_3,param_4,iVar4);
      bVar5 = param_1 < (uint)uVar6;
      param_1 = param_1 - (uint)uVar6;
      param_2 = (param_2 - (int)((ulonglong)uVar6 >> 0x20)) - (uint)bVar5;
      lVar7 = FUN_00026466(1,0,iVar4);
      lVar1 = lVar7 + lVar1;
    }
  }
  return lVar1;
}


/* ---- FUN_00026466 @ 00026466 ---- */

longlong FUN_00026466(uint param_1,int param_2,uint param_3)

{
  if (0x1f < (int)param_3) {
    return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
  }
  return CONCAT44(param_2 << (param_3 & 0xff) | param_1 >> (0x20 - param_3 & 0xff),
                  param_1 << (param_3 & 0xff));
}


/* ---- FUN_00026484 @ 00026484 ---- */

undefined4 FUN_00026484(void)

{
  return DAT_00026488;
}


/* ---- FUN_0002648c @ 0002648c ---- */

void FUN_0002648c(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


/* ---- FUN_000264b0 @ 000264b0 ---- */

void FUN_000264b0(undefined *param_1,int param_2,undefined param_3)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    *param_1 = param_3;
    param_1 = param_1 + 1;
  }
  return;
}


/* ---- FUN_000264be @ 000264be ---- */

void FUN_000264be(undefined4 param_1,undefined4 param_2)

{
  FUN_000264b0(param_1,param_2,0);
  return;
}


/* ---- FUN_000264c2 @ 000264c2 ---- */

undefined4 FUN_000264c2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000264b0(param_1,param_3,param_2);
  return param_1;
}


/* ---- FUN_000264d4 @ 000264d4 ---- */

int FUN_000264d4(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  return (int)pcVar2 - (int)(param_1 + 1);
}


/* ---- FUN_000264e2 @ 000264e2 ---- */

void FUN_000264e2(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 < param_3 && (*(char *)(param_1 + uVar1) == *(char *)(param_2 + uVar1)));
      uVar1 = uVar1 + 1) {
  }
  return;
}


/* ---- FUN_000264fc @ 000264fc ---- */

char * FUN_000264fc(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return param_1;
}


/* ---- FUN_0002650e @ 0002650e ---- */

void FUN_0002650e(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0;
      ((uVar1 < param_3 && (*(char *)(param_1 + uVar1) == *(char *)(param_2 + uVar1))) &&
      (*(char *)(param_1 + uVar1) != '\0')); uVar1 = uVar1 + 1) {
  }
  return;
}


/* ---- FUN_0002652c @ 0002652c ---- */

uint FUN_0002652c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  iVar1 = (int)(param_2 ^ param_4) >> 0x1f;
  uVar2 = -iVar1;
  uVar6 = param_3;
  uVar9 = param_4;
  if ((param_2 & 0x7fffffff) <= (param_4 & 0x7fffffff) &&
      (uint)(param_3 <= param_1) <= (param_2 & 0x7fffffff) - (param_4 & 0x7fffffff)) {
    uVar6 = param_1;
    uVar9 = param_2;
    param_2 = param_4;
    param_1 = param_3;
  }
  if ((uVar9 & 0x7fffffff | uVar6) != 0) {
    uVar8 = param_2 >> 0x14;
    uVar3 = uVar8 & 0x7ff;
    iVar4 = uVar3 - ((uVar9 << 1) >> 0x15);
    if (iVar4 < 0x40) {
      uVar9 = uVar9 & 0xfffff | 0x100000;
      if (uVar2 != 0) {
        bVar10 = uVar6 != 0;
        uVar6 = -uVar6;
        uVar9 = -(uint)bVar10 - uVar9;
      }
      uVar11 = FUN_00026466(uVar6,uVar9,0x40 - iVar4);
      uVar7 = (uint)(uVar11 >> 0x20);
      uVar5 = (uint)uVar11;
      lVar12 = FUN_0002695a(uVar6,uVar9,iVar4);
      lVar12 = lVar12 + CONCAT44(param_2,param_1);
      uVar6 = (uint)lVar12;
      uVar9 = (uint)((ulonglong)lVar12 >> 0x20);
      if ((param_2 ^ uVar9) >> 0x14 != 0) {
        if (uVar2 == 0) {
          uVar11 = CONCAT44(uVar7 >> 1 | uVar6 * -0x80000000,
                            (uint)((uVar11 & 0x100000000) != 0) << 0x1f | uVar5 >> 1);
          uVar9 = uVar9 + uVar8 * -0x100000 + 0x100000;
          lVar12 = CONCAT44((uVar9 >> 1) + uVar8 * 0x100000,
                            (uint)((uVar9 & 1) != 0) << 0x1f | uVar6 >> 1);
        }
        else {
          if (iVar4 < 2) {
            uVar6 = FUN_0002699c(uVar6,uVar9 + uVar8 * -0x100000 + 0x100000,uVar5,uVar7,0,
                                 (uVar8 & 0x800) << 0x14,uVar3);
            return uVar6;
          }
          lVar12 = CONCAT44(uVar8 * -0x100000 + uVar9 * 2 + (uint)CARRY4(uVar6,uVar6),
                            uVar6 * 2 | uVar7 >> 0x1f);
          uVar11 = CONCAT44(uVar7 * 2 + (uint)CARRY4(uVar5,uVar5),uVar5 * 2);
        }
      }
    }
    else {
      uVar11 = CONCAT44(-(uint)(1 < (uint)(iVar1 * -2)),iVar1 * 2 + 1);
      lVar12 = CONCAT44(param_2 - (param_1 < uVar2),param_1 + iVar1);
    }
    uVar6 = FUN_0002697e((int)lVar12,(int)((ulonglong)lVar12 >> 0x20),(int)uVar11,
                         (int)(uVar11 >> 0x20));
    return uVar6;
  }
  return param_1;
}


/* ---- FUN_0002666e @ 0002666e ---- */

void FUN_0002666e(void)

{
  FUN_0002652c();
  return;
}


/* ---- FUN_0002667a @ 0002667a ---- */

void FUN_0002667a(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (((param_1 | param_2 & 0x7fffffff) != 0) && ((param_3 | param_4 & 0x7fffffff) != 0)) {
    uVar6 = (uint)((ulonglong)param_1 * (ulonglong)param_3);
    uVar2 = param_2 & 0xfffff | 0x100000;
    uVar3 = param_4 & 0xfffff | 0x100000;
    uVar4 = param_1 >> 10 | (param_2 & 0xfffff) << 0x16;
    uVar8 = param_3 >> 10 | (param_4 & 0xfffff) << 0x16;
    lVar1 = (ulonglong)uVar4 * (ulonglong)uVar8;
    uVar7 = (uint)lVar1;
    iVar5 = uVar4 * (uVar3 >> 10) + (uVar2 >> 10) * uVar8 + (int)((ulonglong)lVar1 >> 0x20);
    uVar8 = ((param_1 * uVar3 +
             uVar2 * param_3 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20)) -
            (iVar5 * 0x100000 | uVar7 >> 0xc)) - (uint)(uVar6 < uVar7 * 0x100000);
    uVar4 = param_1 >> 0x1a | uVar2 << 6;
    uVar2 = param_3 >> 0x1a | uVar3 << 6;
    uVar3 = uVar6 + uVar7 * -0x100000 >> 0x14 | uVar8 * 0x1000;
    lVar1 = (ulonglong)uVar4 * (ulonglong)uVar2 +
            (ulonglong)((iVar5 - uVar4 * uVar2) + (uVar8 >> 0x14) + (uint)CARRY4(uVar3,uVar7));
    FUN_0002699c((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),uVar6 * 0x1000,uVar3 + uVar7,0,
                 (param_2 ^ param_4) & 0x80000000,
                 (((param_4 & 0x7fffffff) << 1) >> 0x15) + (((param_2 & 0x7fffffff) << 1) >> 0x15) +
                 -0x3ff);
  }
  return;
}


/* ---- FUN_0002675e @ 0002675e ---- */

void FUN_0002675e(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  if (((param_1 | param_2 & 0x7fffffff) != 0) && ((param_3 | param_4 & 0x7fffffff) != 0)) {
    uVar5 = param_4 & 0xfffff | 0x100000;
    uVar4 = param_2 & 0xfffff | 0x100000;
    iVar7 = (((param_2 & 0x7fffffff) << 1) >> 0x15) - (((param_4 & 0x7fffffff) << 1) >> 0x15);
    iVar8 = iVar7 + 0x3fd;
    if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
      iVar8 = iVar7 + 0x3fe;
    }
    else {
      bVar10 = CARRY4(param_1,param_1);
      param_1 = param_1 * 2;
      uVar4 = uVar4 * 2 + (uint)bVar10;
    }
    if (-1 < iVar8) {
      uVar3 = 0x100000;
      uVar6 = 0;
      uVar9 = 0;
      for (uVar2 = 0; (uVar2 | uVar3) != 0; uVar2 = (uint)(uVar1 != 0) << 0x1f | uVar2 >> 1) {
        if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
          bVar10 = param_1 < param_3;
          param_1 = param_1 - param_3;
          uVar4 = (uVar4 - uVar5) - (uint)bVar10;
          uVar6 = uVar6 | uVar2;
          uVar9 = uVar9 | uVar3;
        }
        uVar1 = uVar3 & 1;
        uVar3 = uVar3 >> 1;
        bVar10 = CARRY4(param_1,param_1);
        param_1 = param_1 * 2;
        uVar4 = uVar4 * 2 + (uint)bVar10;
      }
      if ((param_1 | uVar4) != 0) {
        if ((param_1 ^ param_3 | uVar4 ^ uVar5) == 0) {
          param_1 = 0;
          uVar4 = 0x80000000;
        }
        else if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
          param_1 = 0xfffffffe;
          uVar4 = 0xffffffff;
        }
        else {
          param_1 = 1;
          uVar4 = 0;
        }
      }
      FUN_0002697e(uVar6,uVar9 + iVar8 * 0x100000 + ((param_2 ^ param_4) & 0x80000000),param_1,uVar4
                  );
      return;
    }
  }
  return;
}


/* ---- FUN_0002683c @ 0002683c ---- */

void FUN_0002683c(uint param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 >> 0x1f;
  FUN_0002699c((param_1 ^ uVar1) - uVar1,0,0,0,0,uVar1 * -0x80000000,0x433);
  return;
}


/* ---- FUN_0002685e @ 0002685e ---- */

void FUN_0002685e(undefined4 param_1)

{
  FUN_0002699c(param_1,0,0,0,0,0,0x433);
  return;
}


/* ---- FUN_00026878 @ 00026878 ---- */

int FUN_00026878(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 << 1) >> 0x15;
  if (uVar1 < 0x3ff) {
    param_1 = 0;
  }
  else {
    if (uVar1 < 0x434) {
      param_1 = FUN_0002693a(param_1,param_2 & 0xfffff | 0x100000,-(uVar1 - 0x433));
    }
    else {
      param_1 = param_1 << (uVar1 - 0x433 & 0xff);
    }
    if ((param_2 & 0x80000000) != 0) {
      return -param_1;
    }
  }
  return param_1;
}


/* ---- FUN_000268b6 @ 000268b6 ---- */

int FUN_000268b6(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_2 << 1) >> 0x15;
  if (uVar2 < 0x3ff) {
    return 0;
  }
  if (uVar2 < 0x434) {
    iVar1 = FUN_0002693a(param_1,param_2 & 0xfffff | 0x100000,-(uVar2 - 0x433));
    return iVar1;
  }
  return param_1 << (uVar2 - 0x433 & 0xff);
}


/* ---- FUN_000268e8 @ 000268e8 ---- */

undefined8 FUN_000268e8(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x7fffffff;
  if (uVar1 != 0) {
    return CONCAT44(param_1 & 0x80000000 | ((uVar1 >> 0x17) + 0x380) * 0x100000 |
                    (uVar1 << 9) >> 0xc,param_1 << 0x1d);
  }
  return 0;
}


/* ---- FUN_0002690e @ 0002690e ---- */

int FUN_0002690e(uint param_1,uint param_2)

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


/* ---- FUN_0002693a @ 0002693a ---- */

ulonglong FUN_0002693a(uint param_1,uint param_2,uint param_3)

{
  if (0x1f < (int)param_3) {
    return (ulonglong)(param_2 >> (param_3 - 0x20 & 0xff));
  }
  return CONCAT44(param_2 >> (param_3 & 0xff),
                  param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
}


/* ---- FUN_0002695a @ 0002695a ---- */

undefined8 FUN_0002695a(uint param_1,uint param_2,uint param_3)

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


/* ---- FUN_0002697e @ 0002697e ---- */

undefined8 FUN_0002697e(uint param_1,int param_2,uint param_3,int param_4)

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


/* ---- FUN_0002699c @ 0002699c ---- */

ulonglong FUN_0002699c(undefined4 param_1,int param_2,uint param_3,uint param_4,uint param_5,
                      int param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    iVar1 = LZCOUNT(param_1) + 0x20;
  }
  else {
    iVar1 = LZCOUNT(param_2);
  }
  uVar3 = FUN_00026466();
  uVar2 = (uint)(uVar3 >> 0x20);
  if (((uint)uVar3 | param_3 | uVar2 | param_4) != 0) {
    if ((param_3 | param_4) != 0) {
      uVar4 = FUN_0002693a(param_3,param_4,0x40 - iVar1);
      lVar5 = FUN_00026466(param_3,param_4,iVar1);
      uVar3 = CONCAT44(uVar2 | (uint)((ulonglong)uVar4 >> 0x20),
                       (uint)uVar3 | (uint)uVar4 | (uint)(lVar5 != 0));
    }
    uVar2 = (uint)(uVar3 >> 0xb);
    iVar1 = (param_7 - iVar1) + 10;
    if (-1 < iVar1) {
      uVar3 = FUN_0002697e(uVar2 + param_5,
                           iVar1 * 0x100000 + (int)((uVar3 >> 0xb) >> 0x20) + param_6 +
                           (uint)CARRY4(uVar2,param_5),0,(int)uVar3 << 0x15);
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* ---- FUN_00026a38 @ 00026a38 ---- */

undefined8 FUN_00026a38(uint param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((param_2 & 0x7fffffff | param_1) != 0) && (uVar1 = (param_2 << 1) >> 0x15, uVar1 < 0x434)) {
    if (0x3fe < uVar1) {
      uVar2 = FUN_00026466(param_1,param_2,uVar1 - 0x3f3);
      uVar3 = FUN_0002693a(param_1,param_2,-(uVar1 - 0x433));
      uVar2 = FUN_0002697e((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar2,
                           (int)((ulonglong)uVar2 >> 0x20));
      uVar2 = FUN_00026466((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),-(uVar1 - 0x433));
      return uVar2;
    }
    if ((uVar1 < 0x3fe) || ((param_2 << 0xc | param_1 >> 0x14 | param_1 << 0xc) == 0)) {
      param_1 = 0;
      param_2 = 0;
    }
    else {
      param_2 = param_2 & 0x80000000 | DAT_00026abc;
      param_1 = 0;
    }
  }
  return CONCAT44(param_2,param_1);
}


/* ---- FUN_00026ac0 @ 00026ac0 ---- */

void FUN_00026ac0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_2 << 1) >> 0x15;
  uVar1 = param_2 & 0xfffff | 0x100000;
  if (uVar2 < 0x3ff) {
    return;
  }
  if (uVar2 < 0x434) {
    FUN_0002693a(param_1,uVar1,-(uVar2 - 0x433));
    return;
  }
  FUN_00026466(param_1,uVar1);
  return;
}


/* ---- FUN_00026af0 @ 00026af0 ---- */

int FUN_00026af0(int param_1,int param_2)

{
  if (-1 < param_2) {
    param_1 = -param_1;
  }
  return param_1;
}


/* ---- FUN_00026b20 @ 00026b20 ---- */

int FUN_00026b20(int param_1,int param_2)

{
  if (-1 < param_2) {
    param_1 = -param_1;
  }
  return param_1;
}


/* ---- FUN_00026b50 @ 00026b50 ---- */

void FUN_00026b50(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *extraout_r1;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  for (puVar7 = &DAT_000401b8; puVar7 < &DAT_000401d8; puVar7 = puVar7 + 4) {
    param_4 = (uint)(code *)puVar7[3] | 1;
    param_3 = puVar7[2];
    (*(code *)puVar7[3])(*puVar7,puVar7[1]);
  }
  UNRECOVERED_JUMPTABLE = (code *)0x26b6d;
  main_loop();
  pbVar1 = (byte *)(param_4 << 7);
  pbVar3 = extraout_r1;
  do {
    uVar8 = (uint)*pbVar1;
    uVar6 = uVar8 & 7;
    pbVar2 = pbVar1 + 1;
    if ((*pbVar1 & 7) == 0) {
      pbVar2 = pbVar1 + 2;
      uVar6 = (uint)pbVar1[1];
    }
    uVar4 = (int)uVar8 >> 4;
    if (uVar4 == 0) {
      uVar4 = (uint)*pbVar2;
      pbVar2 = pbVar2 + 1;
    }
    while (uVar6 = uVar6 - 1, uVar6 != 0) {
      *pbVar3 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
    }
    if ((int)(uVar8 << 0x1c) < 0) {
      pbVar1 = pbVar2 + 1;
      iVar5 = uVar4 + 2;
      pbVar2 = pbVar3 + -(uint)*pbVar2;
      while (iVar5 = iVar5 + -1, -1 < iVar5) {
        *pbVar3 = *pbVar2;
        pbVar3 = pbVar3 + 1;
        pbVar2 = pbVar2 + 1;
      }
    }
    else {
      while (uVar4 = uVar4 - 1, pbVar1 = pbVar2, -1 < (int)uVar4) {
        *pbVar3 = 0;
        pbVar3 = pbVar3 + 1;
      }
    }
  } while (pbVar3 < extraout_r1 + param_3);
                    /* WARNING: Could not recover jumptable at 0x00026bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}


/* ---- FUN_00026b74 @ 00026b74 ---- */

void FUN_00026b74(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  pbVar5 = param_2 + param_3;
  do {
    uVar6 = (uint)*param_1;
    uVar4 = uVar6 & 7;
    pbVar1 = param_1 + 1;
    if ((*param_1 & 7) == 0) {
      pbVar1 = param_1 + 2;
      uVar4 = (uint)param_1[1];
    }
    uVar2 = (int)uVar6 >> 4;
    if (uVar2 == 0) {
      uVar2 = (uint)*pbVar1;
      pbVar1 = pbVar1 + 1;
    }
    while (uVar4 = uVar4 - 1, uVar4 != 0) {
      *param_2 = *pbVar1;
      pbVar1 = pbVar1 + 1;
      param_2 = param_2 + 1;
    }
    if ((int)(uVar6 << 0x1c) < 0) {
      param_1 = pbVar1 + 1;
      iVar3 = uVar2 + 2;
      pbVar1 = param_2 + -(uint)*pbVar1;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        *param_2 = *pbVar1;
        param_2 = param_2 + 1;
        pbVar1 = pbVar1 + 1;
      }
    }
    else {
      while (uVar2 = uVar2 - 1, param_1 = pbVar1, -1 < (int)uVar2) {
        *param_2 = 0;
        param_2 = param_2 + 1;
      }
    }
  } while (param_2 < pbVar5);
                    /* WARNING: Could not recover jumptable at 0x00026bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}


/* ---- FUN_00026bcc @ 00026bcc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00026bcc(void)

{
  undefined *puVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  debug_printf(s_STDA217Test_00026d18);
  iVar3 = FUN_00032aec(DAT_00026d28 + -0x10,DAT_00026d28,0);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x104,s__________DA217_c_00026d2c);
    debug_printf(s_error_00026d40);
  }
  FUN_0003a718();
  uVar4 = FUN_00038cf0(1);
  uVar5 = FUN_00038cf0(0);
  debug_printf(s_reg_data__x__x_00026d48,uVar5,uVar4);
  uVar2 = FUN_00038cf0(0);
  puVar1 = _DAT_00026d58;
  *_DAT_00026d58 = uVar2;
  uVar4 = FUN_00038cf0(1);
  uVar5 = FUN_00038cf0(0);
  debug_printf(s_reg_data__x__x_BMA253_USE__x_00026d5b + 1,uVar5,uVar4,*puVar1);
  FUN_0003d514(0,0x24);
  FUN_00039e9c(0x14);
  FUN_0003d514(0x11,4);
  FUN_0003d514(0xf,0xc0);
  FUN_0003d514(0x10,7);
  FUN_00039e9c(100);
  FUN_00031b9e();
  FUN_0003d514(0x7f,0x83);
  FUN_0003d514(0x7f,0x69);
  FUN_0003d514(0x7f,0xbd);
  FUN_00031bcc(0x8c,0x40,0);
  FUN_00039e9c(100);
  uVar4 = FUN_00038cf0(1);
  uVar5 = FUN_00038cf0(0);
  debug_printf(s_reg_data__x__x_00026d48,uVar5,uVar4);
  uVar4 = FUN_00038cf0(0x21);
  debug_printf(s_NSA_REG_INT_LATCH__x_00026d80,uVar4);
  uVar4 = FUN_00038cf0(0x2a);
  debug_printf(s_NSA_REG_TAP_DURATION__x_00026d98,uVar4);
  uVar4 = FUN_00038cf0(0x2b);
  debug_printf(s_NSA_REG_TAP_THRESHOLD__x_00026db4,uVar4);
  uVar4 = FUN_00038cf0(0x19);
  debug_printf(s_NSA_REG_INTERRUPT_MAPPING1__x_00026dd0,uVar4);
  uVar4 = FUN_00038cf0(0x16);
  debug_printf(s_NSA_REG_INTERRUPT_SETTINGS1__x_00026df0,uVar4);
  uVar4 = FUN_00038cf0(0x10);
  debug_printf(s_10__x_00026e10,uVar4);
  uVar4 = FUN_00038cf0(0x11);
  debug_printf(s_11__x_00026e18,uVar4);
  FUN_00039e9c(100);
  debug_printf(s_da217_config_ok_00026e20);
  return;
}


/* ---- FUN_00026e34 @ 00026e34 ---- */

void FUN_00026e34(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_48 [4];
  undefined4 local_38 [2];
  int local_30;
  undefined4 local_2c [3];
  
  iVar4 = DAT_00026f90;
  uVar10 = 0;
  sVar9 = 0x100;
  uVar8 = 1;
  uVar11 = 0;
  local_30 = 0;
  do {
    iVar3 = FUN_00033380(sVar9);
    if ((iVar3 != 0) && ((*(uint *)(iVar4 + 0x304) & uVar8) != 0)) {
      FUN_0003336c(sVar9);
      uVar10 = uVar10 | uVar8;
    }
    sVar9 = sVar9 + 4;
    uVar8 = uVar8 << 1;
    uVar11 = uVar11 + 1;
  } while (uVar11 < 8);
  iVar3 = FUN_00033380(0x17c);
  if (iVar3 != 0) {
    FUN_0003336c(0x17c);
    uVar10 = uVar10 | 0x80000000;
    FUN_00033344(0,1,&local_30);
  }
  iVar3 = DAT_00026f94;
  if ((uVar10 & 0xff) != 0) {
    uVar11 = 1;
    uVar8 = 0;
    do {
      if ((uVar11 & uVar10) != 0) {
        iVar5 = iVar4 + uVar8 * 4;
        pcVar7 = *(code **)(iVar3 + uVar8 * 4);
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)((uint)(*(int *)(iVar5 + 0x510) << 0x13) >> 0x1b,
                    (uint)(*(int *)(iVar5 + 0x510) << 0xe) >> 0x1e);
        }
      }
      uVar11 = uVar11 << 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 8);
  }
  if (-1 < (int)uVar10) {
    return;
  }
  local_38[0] = 0;
  local_2c[0] = 0xffffffff;
  do {
    uVar10 = 0;
    uVar8 = uVar10;
    do {
      pbVar1 = (byte *)(iVar3 + uVar10 + 0x50);
      bVar2 = *pbVar1;
      uVar11 = bVar2 & 0xffffff3f;
      if ((*pbVar1 != 0xff) && (iVar4 = FUN_000324c2(uVar11,local_2c), iVar4 != 0)) {
        bVar2 = bVar2 >> 6;
        iVar4 = FUN_0002c540(uVar11);
        pcVar7 = *(code **)(iVar3 + iVar4 * 4);
        if (pcVar7 == (code *)0x0) {
          if (bVar2 == 3) goto LAB_00026f0c;
        }
        else {
          if (bVar2 == 3) {
LAB_00026f0c:
            FUN_000324d2(uVar11,local_38);
          }
          uVar12 = (uint)(*(int *)(uVar11 * 4 + 0x50000700) << 0xe) >> 0x1e;
          iVar4 = FUN_000324c2(uVar11,&local_30);
          if (iVar4 == 0) {
            if (uVar12 == 3) goto LAB_00026f3c;
          }
          else if (uVar12 == 2) {
LAB_00026f3c:
            if (bVar2 == 3) {
              if (uVar12 == 2) {
                uVar6 = 3;
              }
              else {
                uVar6 = 2;
              }
              FUN_000332d4(uVar11,uVar6);
              uVar8 = uVar8 + 1 & 0xff;
            }
            if (pcVar7 != (code *)0x0) {
              (*pcVar7)(uVar11,bVar2);
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 4);
    if (uVar8 == 0) {
      return;
    }
    FUN_00033344(0,1,local_48);
    if (local_48[0] == local_30) {
      return;
    }
    local_30 = local_48[0];
    local_2c[0] = local_38[0];
  } while( true );
}


/* ---- FUN_00026f98 @ 00026f98 ---- */

void FUN_00026f98(uint param_1)

{
  *(int *)(&DAT_e000e280 + (param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}


/* ---- FUN_00026fae @ 00026fae ---- */

void FUN_00026fae(uint param_1)

{
  *(int *)(&DAT_e000e100 + (param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}


/* ---- FUN_00026fc4 @ 00026fc4 ---- */

void FUN_00026fc4(uint param_1)

{
  *(int *)((param_1 >> 5) * 4 + -0x1fff1e00) = 1 << (param_1 & 0x1f);
  return;
}


/* ---- FUN_00026fda @ 00026fda ---- */

void FUN_00026fda(uint param_1,int param_2)

{
  undefined uVar1;
  
  uVar1 = (undefined)((uint)(param_2 << 0x1d) >> 0x18);
  if ((int)param_1 < 0) {
    *(undefined *)((param_1 & 0xf) + 0xe000ed14) = uVar1;
    return;
  }
  (&DAT_e000e400)[param_1] = uVar1;
  return;
}


/* ---- FUN_00026ffc @ 00026ffc ---- */

void FUN_00026ffc(void)

{
  DataSynchronizationBarrier(0xf);
  *DAT_00027018 = *DAT_00027018 & 0x700 | DAT_0002701c;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_00027020 @ 00027020 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00027020(void)

{
  code **ppcVar1;
  int iVar2;
  
  iVar2 = FUN_000329ac(0x100);
  ppcVar1 = DAT_00027074;
  if (iVar2 != 0) {
    FUN_000329ba(0x100);
    _DAT_40000308 = 1;
    if (*(char *)((int)ppcVar1 + 5) == '\0') {
      *(undefined *)((int)ppcVar1 + 5) = 1;
      (**ppcVar1)(0);
    }
  }
  iVar2 = FUN_000329ac(0x104);
  if (iVar2 != 0) {
    FUN_000329ba(0x104);
    _DAT_40000308 = 2;
                    /* WARNING: Could not recover jumptable at 0x0002706e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**ppcVar1)(1);
    return;
  }
  return;
}


/* ---- FUN_00027078 @ 00027078 ---- */

void FUN_00027078(void)

{
  int iVar1;
  
  iVar1 = DAT_00027098;
  *(undefined4 *)(DAT_00027098 + 0x140) = 0;
  *(undefined4 *)(iVar1 + 0x144) = 0;
  *(undefined4 *)(iVar1 + 0x148) = 0;
  *(undefined4 *)(iVar1 + 0x14c) = 0;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  *(undefined4 *)(iVar1 + 0x104) = 0;
  FUN_0003ab04();
  return;
}


/* ---- FUN_0002709c @ 0002709c ---- */

void FUN_0002709c(undefined4 param_1,uint param_2,code *param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  code **ppcVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  iVar4 = FUN_00033d14(0x104);
  ppcVar3 = DAT_000271e0;
  puVar2 = DAT_000271dc;
  if (iVar4 == 0) {
LAB_000270f6:
    if (*(char *)((int)ppcVar3 + 0x2e) == '\0') goto LAB_00027156;
  }
  else {
    FUN_00033d24(0x104);
    if ((*(char *)((int)ppcVar3 + 0x2e) == '\0') || (*(char *)((int)ppcVar3 + 0x2f) != '\0')) {
      local_28 = local_28 & 0xffffff00;
      local_24 = ppcVar3[1];
      local_20 = CONCAT22(local_20._2_2_,*(undefined2 *)(ppcVar3 + 2));
      if (ppcVar3[3] == (code *)0x0) {
        *(undefined *)(ppcVar3 + 4) = 0;
      }
      else {
        *(undefined2 *)((int)ppcVar3 + 0x1a) = *(undefined2 *)(ppcVar3 + 6);
        ppcVar3[1] = ppcVar3[3];
        *(undefined2 *)(ppcVar3 + 2) = *(undefined2 *)(ppcVar3 + 6);
        ppcVar3[3] = (code *)0x0;
        if (*(char *)((int)ppcVar3 + 0x2e) == '\0') {
          *puVar2 = 1;
        }
      }
      (**ppcVar3)(&local_28);
      *(undefined *)((int)ppcVar3 + 0x2f) = 0;
      goto LAB_000270f6;
    }
  }
  iVar4 = FUN_00033d14(0x100);
  if (iVar4 == 0) goto LAB_00027156;
  FUN_00033d24(0x100);
  uVar1 = *(ushort *)((int)ppcVar3 + 0x1a);
  uVar7 = (ushort)*(byte *)((int)ppcVar3 + 0x2d);
  if (uVar7 < uVar1) {
    *(ushort *)((int)ppcVar3 + 0x1a) = uVar1 - uVar7;
    pcVar5 = ppcVar3[1] + ((uint)*(ushort *)(ppcVar3 + 2) - (uint)(ushort)(uVar1 - uVar7)) * 2;
LAB_0002713a:
    FUN_00033cf0(pcVar5);
  }
  else {
    if ((uVar1 == uVar7) && (pcVar5 = ppcVar3[3], pcVar5 != (code *)0x0)) {
      *(undefined *)((int)ppcVar3 + 0x2f) = 1;
      *(undefined2 *)((int)ppcVar3 + 0x1a) = 0;
      goto LAB_0002713a;
    }
    if (uVar1 == uVar7) {
      *(undefined *)((int)ppcVar3 + 0x2f) = 1;
      *(undefined2 *)((int)ppcVar3 + 0x1a) = 0;
    }
  }
  FUN_00033d24(0x104);
  DAT_000271dc[1] = 1;
LAB_00027156:
  iVar4 = FUN_00033d14(0x110);
  if (iVar4 != 0) {
    FUN_00033d24(0x110);
    *(undefined *)(ppcVar3 + 4) = 0;
    local_28 = CONCAT31(local_28._1_3_,2);
    (**ppcVar3)(&local_28);
  }
  iVar4 = FUN_00033d14(0x114);
  if (iVar4 == 0) {
    pcVar5 = ppcVar3[5];
    while (pcVar5 != (code *)0x0) {
      iVar4 = LZCOUNT(pcVar5);
      iVar8 = iVar4 * 4 + 0x118;
      pcVar5 = (code *)((uint)pcVar5 & ~(0x80000000U >> iVar4));
      iVar6 = FUN_00033d14(iVar8);
      if (iVar6 != 0) {
        FUN_00033d24(iVar8);
        local_28 = CONCAT31(local_28._1_3_,1);
        (**ppcVar3)(&local_28);
      }
    }
  }
  else {
    FUN_00033d24(0x114);
    *(undefined *)(ppcVar3 + 4) = 0;
  }
  return;
}


/* ---- thunk_FUN_0002786c @ 000271e4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0002786c(void)

{
  int iVar1;
  
  iVar1 = _DAT_000278b8;
  *(undefined4 *)(_DAT_000278b8 + 0x10) = 2;
  *(undefined4 *)(iVar1 + 0x14) = 2;
  *(char **)(iVar1 + 0x18) = s_Terminal_000278bb + 1;
  *(int *)(iVar1 + 0x1c) = iVar1 + 0x78;
  *(undefined4 *)(iVar1 + 0x20) = 0x200;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(char **)(iVar1 + 0x48) = s_Terminal_000278bb + 1;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(int *)(iVar1 + 0x4c) = iVar1 + 0x278;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0x10;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  FUN_000264fc(iVar1 + 7,&DAT_000278c8);
  FUN_000264fc(iVar1,s_SEGGER_000278cc);
  *(undefined *)(iVar1 + 6) = 0x20;
  return;
}


/* ---- FUN_000271e8 @ 000271e8 ---- */

uint FUN_000271e8(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = DAT_00027240 + param_1 * 0x18;
  iVar1 = *(int *)(iVar3 + 0x2c);
  iVar3 = iVar3 + 0x18;
  if (iVar1 == 0) {
    uVar2 = FUN_000278d4(iVar3);
    if (param_3 <= uVar2) goto LAB_00027216;
  }
  else {
    if (iVar1 == 1) {
      uVar2 = FUN_000278d4(iVar3);
      if (uVar2 < param_3) {
        param_3 = uVar2;
      }
LAB_00027216:
      FUN_00027944(iVar3,param_2,param_3);
      return param_3;
    }
    if (iVar1 == 2) {
      uVar2 = FUN_000278ea(iVar3,param_2);
      return uVar2;
    }
  }
  return 0;
}


/* ---- FUN_00027244 @ 00027244 ---- */

void FUN_00027244(void)

{
  FUN_0003b2cc(DAT_00027250,DAT_0002724c);
  return;
}


/* ---- FUN_00027254 @ 00027254 ---- */

void FUN_00027254(void)

{
  FUN_0003b2cc(0x40004000,DAT_00027260);
  return;
}


/* ---- FUN_00027264 @ 00027264 ---- */

void FUN_00027264(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  software_interrupt(0x28);
  debug_printf(s_SPI_Flash_Erase_Sector__x_addr___000272b8,param_1,param_1);
  if (param_1 == 0) {
LAB_000272ae:
    debug_printf(s_SPI_Flash_Erase_Sector_OK__x_0002732c,param_1);
  }
  else {
    do {
      FUN_000329ec(0x32);
      software_interrupt(0x28);
      debug_printf(s_SPI_Flash_Erase_Sector_againg__d_000272dc,iVar1,param_1,param_1);
      if (param_1 == 0) goto LAB_000272ae;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
  }
  debug_printf(s_SPI_Flash_Erase_Sector_END__d__x_00027308,iVar1,param_1);
  FUN_000329ec(0x32);
  return;
}


/* ---- FUN_0002734c @ 0002734c ---- */

void FUN_0002734c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  char local_120 [260];
  
  software_interrupt(0x29);
  debug_printf(s_write_flash__x_addr__x__d_00027424,param_2,param_2,param_3);
  if (param_2 == 0) {
LAB_000273be:
    debug_printf(s_SPI_Flash_Write_Page_OK__x_00027464,param_2);
  }
  else {
    bVar2 = 0;
    do {
      FUN_000329ec(0x32);
      software_interrupt(0x29);
      debug_printf(s_write_flash_againg__d__x__x_00027444,bVar2,param_2,param_2);
      if (param_2 == 0) goto LAB_000273be;
      bVar2 = bVar2 + 1;
    } while (bVar2 < 10);
  }
  FUN_000329ec(0x14);
  FUN_000264be(local_120,0x100);
  bVar2 = 0;
  while( true ) {
    FUN_0002648c(local_120,param_2,param_3);
    for (uVar1 = 0; (uVar1 < param_3 && (local_120[uVar1] == *(char *)(param_1 + uVar1)));
        uVar1 = uVar1 + 1 & 0xffff) {
    }
    if (uVar1 == param_3) break;
    FUN_000329ec(0x14);
    bVar2 = bVar2 + 1;
    if (0x13 < bVar2) {
LAB_000273f4:
      if (bVar2 == 0x14) {
        debug_printf(s_write_00027498);
        FUN_00037aac(param_1,param_3);
        debug_printf(s_read_000274a0);
        FUN_00037aac(local_120,param_3);
        debug_printf(s_write_flash_fail__d_000274a8,0x14);
      }
      return;
    }
  }
  debug_printf(s_write_flash_OK__d_00027484,bVar2);
  goto LAB_000273f4;
}


/* ---- thunk_FUN_0003a9a0 @ 000274c0 ---- */

void thunk_FUN_0003a9a0(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint in_r3;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uStack_28;
  
  iVar1 = DAT_0003aa1c;
  uVar8 = *(undefined4 *)(DAT_0003aa1c + 4);
  iVar7 = *(int *)(DAT_0003aa1c + 8);
  uStack_28 = in_r3;
  iVar2 = FUN_0002dc98(&uStack_28);
  if (iVar2 == 0) {
    iVar2 = FUN_00031018(0);
    if (iVar2 == 0) goto LAB_0003aa14;
  }
  else {
    iVar2 = 0;
    puVar3 = *(uint **)(iVar1 + 4);
    uVar5 = uStack_28;
    puVar6 = (uint *)0x0;
    while (puVar4 = puVar3, puVar4 != (uint *)0x0) {
      uVar9 = *puVar4;
      if (uVar5 < uVar9) {
        *puVar4 = uVar9 - uVar5;
        break;
      }
      uVar5 = uVar5 - uVar9;
      iVar2 = iVar2 + uVar9;
      *puVar4 = 0;
      puVar3 = (uint *)puVar4[7];
      if (puVar4[3] != 0) {
        puVar4[1] = iVar7 + iVar2 & 0xffffff;
        puVar4[2] = puVar4[3];
        puVar4[7] = (uint)puVar6;
        puVar6 = puVar4;
      }
    }
    *(uint **)(iVar1 + 4) = puVar4;
    FUN_00031018(puVar6);
  }
  FUN_0002c7b4(uVar8);
LAB_0003aa14:
  *(undefined *)(iVar1 + 3) = 0;
  return;
}


/* ---- thunk_FUN_00034108 @ 000274c4 ---- */

void thunk_FUN_00034108(undefined4 param_1,undefined4 param_2,undefined4 param_3,code **param_4)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  code **ppcStack_8;
  
  uStack_10 = param_2;
  uStack_c = param_3;
  ppcStack_8 = param_4;
  FUN_000341d4(&uStack_10,DAT_00034128);
  while (ppcStack_8 != (code **)0x0) {
    (**ppcStack_8)(ppcStack_8[1]);
    FUN_00034202(&uStack_10);
  }
  return;
}


/* ---- FUN_000274c8 @ 000274c8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000274c8(void)

{
  char cVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar4 = (byte *)(DAT_00027794 + 4);
  cVar1 = *DAT_00027794;
  pbVar3 = (byte *)(DAT_00027794 + 8);
  if (((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) &&
     ((uVar5 = ((uint)*pbVar3 << 0x18) >> 0x1c, uVar5 == 3 || ((uVar5 == 4 || (uVar5 == 5)))))) {
    *DAT_00027798 = ((uint)_DAT_10000324 << 0x13) >> 0x1b;
LAB_00027510:
    if (((uint)*pbVar3 << 0x18) >> 0x1c != 3) goto LAB_0002751a;
    *(undefined4 *)(DAT_000277a0 + 0x74) = DAT_0002779c;
LAB_00027546:
    *DAT_000277a4 = (uint)(_DAT_10000244 << 0x10) >> 0x1d;
LAB_0002755a:
    if (((uint)*pbVar3 << 0x18) >> 0x1c != 3) goto LAB_00027564;
    *DAT_000277a8 = *DAT_000277a8 & 0xfeffffff;
LAB_00027594:
    _DAT_4000010c = 0;
    _DAT_40000110 = 0;
    DAT_000277a4[-1] = 0;
LAB_000275ae:
    if (((uint)*pbVar3 << 0x18) >> 0x1c != 3) goto LAB_000275b8;
    DAT_000277a4[0x19] = 3;
LAB_000275de:
    puVar2 = DAT_000277ac;
    *DAT_000277ac = 5;
    DAT_000277ac[0x1e] = 1;
    DAT_000277ac[2] = 0;
    puVar2[1] = 0x3f;
LAB_000275fe:
    puVar2 = DAT_000277b4;
    if (((uint)*pbVar3 << 0x18) >> 0x1c != 5) goto LAB_00027608;
    *DAT_000277b4 = *DAT_000277b0;
    puVar2[1] = DAT_000277b0[1];
    puVar2[2] = DAT_000277b0[2];
    puVar2[3] = DAT_000277b0[3];
    puVar2[4] = DAT_000277b0[4];
    puVar2[5] = DAT_000277b0[5];
    puVar2 = DAT_000277b4;
    DAT_000277b4[8] = DAT_000277b0[6];
    puVar2[9] = DAT_000277b0[7];
    puVar2[10] = DAT_000277b0[8];
    puVar2[0xb] = DAT_000277b0[9];
    puVar2[0xc] = DAT_000277b0[10];
    puVar2[0xd] = DAT_000277b0[0xb];
    puVar2 = DAT_000277b4;
    DAT_000277b4[0x10] = DAT_000277b0[0xc];
    puVar2[0x11] = DAT_000277b0[0xd];
    puVar2[0x12] = DAT_000277b0[0xe];
    puVar2[0x13] = DAT_000277b0[0xf];
    puVar2[0x14] = DAT_000277b0[0x10];
LAB_000276c2:
    uVar5 = ((uint)*pbVar3 << 0x18) >> 0x1c;
    if (((uVar5 != 3) && (uVar5 != 4)) && (uVar5 != 5)) goto LAB_000276d4;
    *DAT_000277b8 = _DAT_10000258 & 0x4f;
  }
  else {
    if ((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) goto LAB_00027510;
LAB_0002751a:
    if (((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) &&
       ((uVar5 = ((uint)*pbVar3 << 0x18) >> 0x1c, uVar5 == 3 || ((uVar5 == 4 || (uVar5 == 5))))))
    goto LAB_00027546;
    if ((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) goto LAB_0002755a;
LAB_00027564:
    if (((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) &&
       ((uVar5 = ((uint)*pbVar3 << 0x18) >> 0x1c, uVar5 == 3 || ((uVar5 == 4 || (uVar5 == 5))))))
    goto LAB_00027594;
    if ((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) goto LAB_000275ae;
LAB_000275b8:
    if (((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) && (((uint)*pbVar3 << 0x18) >> 0x1c == 3))
    goto LAB_000275de;
    if ((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) goto LAB_000275fe;
LAB_00027608:
    if ((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) goto LAB_000276c2;
LAB_000276d4:
    if ((cVar1 != '\x06') || ((*pbVar4 & 0xf) != 0)) goto LAB_0002770e;
  }
  uVar5 = ((uint)*pbVar3 << 0x18) >> 0x1c;
  if ((((uVar5 == 3) || (uVar5 == 4)) || (uVar5 == 5)) && ((*DAT_000277bc & 1) != 0)) {
    *DAT_000277bc = 0xfffffffe;
  }
LAB_0002770e:
  if ((_DAT_10000130 == 6) && (_DAT_10000134 == 6)) {
    *DAT_000277c0 = *DAT_000277c0 | 0x400;
  }
  DAT_000277a8[-0x1d] = DAT_000277a8[-0x1d] | 0xf00000;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  if ((_DAT_1000120c & 1) == 0) {
    *DAT_000277d4 = DAT_000277d0;
    return;
  }
  *DAT_000277c4 = 1;
  do {
  } while (*DAT_000277c8 == 0);
  do {
  } while (*DAT_000277c8 == 0);
  *DAT_000277c4 = 0;
  do {
  } while (*DAT_000277c8 == 0);
  DataSynchronizationBarrier(0xf);
  DAT_000277a8[-0x3c] = DAT_000277a8[-0x3c] & 0x700 | DAT_000277cc;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000277d8 @ 000277d8 ---- */

void FUN_000277d8(void)

{
  FUN_0002fdd4(DAT_000277e8,DAT_000277e4,4);
  return;
}


/* ---- FUN_000277ec @ 000277ec ---- */

void FUN_000277ec(void)

{
  FUN_0002fdd4(DAT_000277fc,DAT_000277f8,4);
  return;
}


/* ---- FUN_00027800 @ 00027800 ---- */

void FUN_00027800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00027804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**DAT_00027808)();
  return;
}


/* ---- FUN_00027848 @ 00027848 ---- */

void FUN_00027848(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_00027860;
  *DAT_00027860 = 0;
  puVar2 = DAT_00027868;
  *DAT_00027868 = DAT_00027864;
  puVar2[1] = 1;
  *puVar1 = 1;
  return;
}


/* ---- FUN_0002786c @ 0002786c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002786c(void)

{
  int iVar1;
  
  iVar1 = _DAT_000278b8;
  *(undefined4 *)(_DAT_000278b8 + 0x10) = 2;
  *(undefined4 *)(iVar1 + 0x14) = 2;
  *(char **)(iVar1 + 0x18) = s_Terminal_000278bb + 1;
  *(int *)(iVar1 + 0x1c) = iVar1 + 0x78;
  *(undefined4 *)(iVar1 + 0x20) = 0x200;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(char **)(iVar1 + 0x48) = s_Terminal_000278bb + 1;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(int *)(iVar1 + 0x4c) = iVar1 + 0x278;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0x10;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  FUN_000264fc(iVar1 + 7,&DAT_000278c8);
  FUN_000264fc(iVar1,s_SEGGER_000278cc);
  *(undefined *)(iVar1 + 6) = 0x20;
  return;
}


/* ---- FUN_000278d4 @ 000278d4 ---- */

int FUN_000278d4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if (uVar2 < *(uint *)(param_1 + 0x10)) {
    iVar1 = -uVar2;
  }
  else {
    iVar1 = *(int *)(param_1 + 8) - uVar2;
  }
  return iVar1 + *(uint *)(param_1 + 0x10) + -1;
}


/* ---- FUN_000278ea @ 000278ea ---- */

int FUN_000278ea(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  iVar5 = 0;
  do {
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar3 < uVar1) {
      iVar4 = uVar1 - uVar3;
    }
    else {
      iVar4 = *(int *)(param_1 + 8) - (uVar3 - uVar1);
    }
    uVar2 = *(int *)(param_1 + 8) - uVar3;
    uVar1 = iVar4 - 1U;
    if (uVar2 <= iVar4 - 1U) {
      uVar1 = uVar2;
    }
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    FUN_0002648c(*(int *)(param_1 + 4) + uVar3,param_2,uVar1);
    param_3 = param_3 - uVar1;
    uVar3 = uVar3 + uVar1;
    iVar5 = iVar5 + uVar1;
    param_2 = param_2 + uVar1;
    if (*(uint *)(param_1 + 8) == uVar3) {
      uVar3 = 0;
    }
    *(uint *)(param_1 + 0xc) = uVar3;
  } while (param_3 != 0);
  return iVar5;
}


/* ---- FUN_00027944 @ 00027944 ---- */

void FUN_00027944(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar2 = *(int *)(param_1 + 8) - iVar3;
  iVar1 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc);
  if (param_3 < uVar2) {
    FUN_0002648c(iVar1,param_2);
    *(uint *)(param_1 + 0xc) = iVar3 + param_3;
  }
  else {
    FUN_0002648c(iVar1,param_2,uVar2);
    FUN_0002648c(*(undefined4 *)(param_1 + 4),param_2 + uVar2,param_3 - uVar2);
    *(uint *)(param_1 + 0xc) = param_3 - uVar2;
  }
  return;
}


/* ---- FUN_00027988 @ 00027988 ---- */

undefined4 FUN_00027988(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  uVar1 = FUN_00027dc8(param_2,&uStack_8,&uStack_10,DAT_000279ac);
  FUN_000284ce(0,&uStack_10);
  return uVar1;
}


/* ---- FUN_000279b0 @ 000279b0 ---- */

undefined8 FUN_000279b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uVar1 = FUN_00027dc8(param_2,param_3,&uStack_18,DAT_000279d0);
  FUN_000284ce(0,&uStack_18);
  return CONCAT44(uStack_18,uVar1);
}


/* ---- FUN_000279d8 @ 000279d8 ---- */

undefined8 FUN_000279d8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined uVar9;
  char cVar10;
  ulonglong in_d0;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_38;
  undefined4 uVar8;
  
  uVar3 = (uint)(in_d0 >> 0x20);
  uVar13 = FUN_00026a38((int)in_d0,uVar3);
  uVar4 = (undefined4)((ulonglong)uVar13 >> 0x20);
  uVar1 = (undefined4)uVar13;
  uVar14 = FUN_0002666e((int)in_d0,uVar3,uVar1,uVar4);
  uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar2 = (undefined4)uVar14;
  cVar10 = true;
  uVar9 = (in_d0 & 0x8000000000000000) == 0;
  uVar6 = (undefined4)((ulonglong)DAT_00027ab0 >> 0x20);
  uVar12 = (undefined4)DAT_00027aa8;
  uVar7 = (undefined4)((ulonglong)DAT_00027aa8 >> 0x20);
  uVar11 = (undefined4)DAT_00027aa0;
  uVar8 = (undefined4)((ulonglong)DAT_00027aa0 >> 0x20);
  if ((bool)uVar9) {
    FUN_00026af0(uVar2,uVar5,(int)DAT_00027ab0,uVar6);
    if (cVar10 != '\0') {
      FUN_00026b20(uVar2,uVar5,uVar12,uVar7);
      if ((bool)cVar10 && !(bool)uVar9) goto LAB_00027a72;
      goto LAB_00027a64;
    }
  }
  else {
    FUN_00026af0(uVar2,uVar5,(int)DAT_00027ab0,uVar6);
    if ((bool)cVar10 && !(bool)uVar9) {
      FUN_00026b20(uVar2,uVar5,uVar12,uVar7);
      if (cVar10 != '\0') goto LAB_00027a72;
LAB_00027a64:
      uVar13 = FUN_0002652c(uVar1,uVar4,uVar11,uVar8);
      goto LAB_00027a72;
    }
  }
  uVar13 = FUN_0002666e(uVar1,uVar4,uVar11,uVar8);
LAB_00027a72:
  local_38 = CONCAT44(uVar3 & 0x80000000 | (uint)((ulonglong)uVar13 >> 0x20) & 0x7fffffff,
                      (int)uVar13);
  return local_38;
}


/* ---- FUN_00027ad8 @ 00027ad8 ---- */

undefined4 FUN_00027ad8(uint param_1)

{
  uint uVar1;
  
  if ((int)param_1 < 0x20) {
    uVar1 = 1 << (param_1 & 0xff) & DAT_00027af8;
  }
  else {
    if (0x3f < (int)param_1) {
      return 1;
    }
    uVar1 = 1 << (param_1 - 0x20 & 0xff);
  }
  if (uVar1 != 0) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00027afc @ 00027afc ---- */

void FUN_00027afc(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int local_20;
  
  local_20 = param_4;
  if (param_2 == 0) {
    iVar1 = FUN_000368a0(param_1,&local_20);
    if ((iVar1 != 0x3002) && (iVar1 != 0)) {
      app_error_handler(iVar1,0x8d,DAT_00027bb8);
    }
    if (local_20 << 0x1e < 0) {
      return;
    }
  }
  iVar1 = FUN_00036918(param_1,0);
  if ((iVar1 != 0) && (iVar1 != 0x11)) {
    uVar4 = (uint)(DAT_00027bbc - DAT_00027bc0) >> 3;
    iVar3 = uVar4 * 0x10000 + 2;
    if (iVar1 != 0xd) {
      uVar2 = DAT_00027c04;
      if ((iVar1 != 0xb) && (uVar2 = DAT_00027bc4, iVar1 != 0x3002)) {
        uVar2 = FUN_0003425c(iVar1);
        FUN_00033762(uVar4 * 0x10000 + 1,s_Asserting__pm_conn_secure___retu_00027c08,uVar2,param_1);
        app_error_handler(iVar1,0xbc,DAT_00027bb8,local_20);
        return;
      }
      FUN_00033754(iVar3,uVar2,param_1,local_20);
      return;
    }
    FUN_00033754(iVar3,DAT_00027bc8,param_1);
    software_interrupt(0x76);
    if (param_1 != 0) {
      uVar2 = FUN_0003425c(param_1,0x13);
      FUN_00033762(iVar3,s_sd_ble_gap_disconnect___returned_00027bcc,uVar2,param_1);
      return;
    }
  }
  return;
}


/* ---- FUN_00027c44 @ 00027c44 ---- */

void FUN_00027c44(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  
  uVar2 = 0;
  if ((param_3 | param_4) == 0) {
    if (param_6 == 1) {
      uVar2 = ~param_5;
    }
    *param_1 = (int)&DAT_00027dbc;
    param_1[1] = uVar2;
    param_1[2] = 1;
    param_1[3] = param_6;
  }
  else {
    iVar6 = (int)(((param_4 >> 0x14) - 0x3ff) * 0x4d10) >> 0x10;
    do {
      while( true ) {
        if (param_6 == 1) {
          uVar2 = -param_5;
        }
        else {
          uVar2 = (iVar6 - param_5) + 1;
        }
        lVar12 = (ulonglong)DAT_00027db4 << 0x20;
        lVar14 = (ulonglong)DAT_00027db8 << 0x20;
        uVar5 = uVar2;
        if ((int)uVar2 < 0) {
          uVar5 = -uVar2;
        }
        iVar1 = DAT_00027db8 + uVar5 * 0x100000;
        while( true ) {
          uVar7 = (undefined4)((ulonglong)lVar12 >> 0x20);
          uVar9 = (undefined4)((ulonglong)lVar14 >> 0x20);
          uVar8 = (undefined4)lVar14;
          if (uVar5 == 0) break;
          if ((uVar5 & 1) != 0) {
            lVar14 = FUN_0002667a(uVar8,uVar9,(int)lVar12,uVar7);
          }
          lVar12 = FUN_0002667a((int)lVar12,uVar7);
          uVar5 = (int)uVar5 >> 1;
        }
        uVar11 = 1;
        if ((int)uVar2 < 0) {
          uVar13 = FUN_0002667a();
          uVar13 = FUN_0002667a((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar8,uVar9);
        }
        else {
          uVar13 = FUN_0002675e(param_3,param_4,0,iVar1);
          uVar13 = FUN_0002675e((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar8,uVar9);
        }
        bVar10 = true;
        FUN_00026b20();
        if ((bool)uVar11 && !bVar10) {
          FUN_0002652c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,DAT_00027dc4);
          lVar14 = FUN_00026ac0();
        }
        else {
          lVar14 = -1;
        }
        for (iVar1 = 0x10; (lVar14 != 0 && (-1 < iVar1)); iVar1 = iVar1 + -1) {
          cVar3 = '\n';
          lVar14 = FUN_00026404();
          *(char *)(param_2 + iVar1) = cVar3 + '0';
        }
        iVar4 = 0x11 - (iVar1 + 1);
        if (param_6 != 1) break;
        if (lVar14 == 0) {
          iVar6 = (iVar4 - param_5) + -1;
          goto LAB_00027da4;
        }
        param_5 = 0x11;
        param_6 = 0;
      }
      bVar10 = true;
      if ((lVar14 == 0) && (iVar4 <= (int)param_5)) {
        if (iVar4 < (int)param_5) {
          bVar10 = false;
          iVar6 = iVar6 + -1;
        }
      }
      else {
        bVar10 = false;
        iVar6 = iVar6 + 1;
      }
    } while (!bVar10);
LAB_00027da4:
    param_1[2] = iVar4;
    param_1[3] = param_6;
    *param_1 = iVar1 + 1 + param_2;
    param_1[1] = iVar6;
  }
  return;
}


/* ---- FUN_00027dc8 @ 00027dc8 ---- */

/* WARNING: Type propagation algorithm not settling */

char * FUN_00027dc8(byte *param_1,char **param_2,undefined4 param_3,code *param_4)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  char extraout_r1;
  char *pcVar7;
  undefined uVar8;
  char **ppcVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  byte *pbVar13;
  char *pcVar14;
  char **ppcVar15;
  char *unaff_r9;
  char **unaff_r11;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  longlong lVar19;
  undefined4 local_88;
  undefined4 local_84;
  char **local_80;
  char *local_7c;
  undefined auStack_78 [32];
  char *local_58;
  char **local_54;
  char *pcStack_50;
  int local_4c;
  char *local_48;
  byte local_3f [2];
  undefined local_3d [9];
  byte *pbStack_34;
  char **ppcStack_30;
  undefined4 local_2c;
  code *pcStack_28;
  
  pcStack_28 = param_4;
  local_2c = param_3;
  ppcStack_30 = param_2;
  pbStack_34 = param_1;
  pcVar12 = (char *)0x0;
LAB_000281b6:
  uVar4 = (uint)*param_1;
  if (uVar4 == 0) {
    return pcVar12;
  }
  if (uVar4 == 0x25) {
    uVar11 = 0;
    pcVar14 = (char *)0x0;
    local_7c = (char *)0x0;
    while( true ) {
      pbVar13 = param_1 + 1;
      uVar4 = 1 << (*pbVar13 - 0x20 & 0xff);
      if ((uVar4 & DAT_000281c8) == 0) break;
      uVar11 = uVar11 | uVar4;
      param_1 = pbVar13;
    }
    if (*pbVar13 == 0x2a) {
      ppcVar9 = param_2 + 1;
      local_7c = *param_2;
      if ((int)local_7c < 0) {
        uVar11 = uVar11 | 0x2000;
        local_7c = (char *)-(int)local_7c;
      }
      uVar11 = uVar11 | 2;
      pbVar13 = param_1 + 2;
    }
    else {
      for (; ppcVar9 = param_2, *pbVar13 - 0x30 < 10; pbVar13 = pbVar13 + 1) {
        uVar11 = uVar11 | 2;
        local_7c = (char *)((uint)*pbVar13 + (int)local_7c * 10 + -0x30);
      }
    }
    param_1 = pbVar13;
    ppcVar15 = ppcVar9;
    if (*pbVar13 == 0x2e) {
      param_1 = pbVar13 + 1;
      uVar11 = uVar11 | 4;
      if (*param_1 == 0x2a) {
        ppcVar15 = ppcVar9 + 1;
        pcVar14 = *ppcVar9;
        param_1 = pbVar13 + 2;
      }
      else {
        for (; *param_1 - 0x30 < 10; param_1 = param_1 + 1) {
          pcVar14 = (char *)((uint)*param_1 + (int)pcVar14 * 10 + -0x30);
        }
      }
    }
    bVar1 = *param_1;
    if (bVar1 == 0x6c) {
      uVar11 = uVar11 | 0x100000;
LAB_00027e9e:
      if (param_1[1] == bVar1) {
        uVar11 = uVar11 + 0x100000;
        param_1 = param_1 + 1;
      }
    }
    else if (bVar1 < 0x6d) {
      if (bVar1 != 0x4c) {
        if (bVar1 == 0x68) {
          uVar11 = uVar11 | 0x300000;
          goto LAB_00027e9e;
        }
        if (bVar1 != 0x6a) goto LAB_00027eac;
        uVar11 = uVar11 | 0x200000;
      }
    }
    else if ((bVar1 != 0x74) && (bVar1 != 0x7a)) goto LAB_00027eac;
    param_1 = param_1 + 1;
LAB_00027eac:
    uVar4 = (uint)*param_1;
    bVar18 = SBORROW4(uVar4,0x66);
    bVar16 = (int)(uVar4 - 0x66) < 0;
    bVar17 = uVar4 == 0x66;
LAB_00027eb0:
    while (!bVar17) {
      param_2 = ppcVar15;
      if (!bVar17 && bVar16 == bVar18) {
        if (uVar4 == 0x70) {
          uVar11 = uVar11 | 4;
          pcVar14 = &NMI;
          local_88 = (char *)0x10;
        }
        else if (uVar4 < 0x71) {
          if (uVar4 == 0x67) break;
          if (uVar4 == 0x69) goto LAB_00027fca;
          if (uVar4 == 0x6e) {
            uVar4 = (uVar11 << 9) >> 0x1d;
            if (uVar4 == 2) {
              ppcVar9 = (char **)*ppcVar15;
              *ppcVar9 = pcVar12;
              ppcVar9[1] = (char *)((int)pcVar12 >> 0x1f);
            }
            else if (uVar4 == 3) {
              *(short *)*ppcVar15 = (short)pcVar12;
            }
            else if (uVar4 == 4) {
              **ppcVar15 = (char)pcVar12;
            }
            else {
              *(char **)*ppcVar15 = pcVar12;
            }
            param_2 = ppcVar15 + 1;
            goto LAB_000281b4;
          }
          if (uVar4 != 0x6f) goto LAB_00027f00;
          local_88 = (char *)0x8;
        }
        else {
          if (uVar4 == 0x73) {
            unaff_r11 = (char **)*ppcVar15;
            iVar6 = -1;
            goto LAB_00027f5a;
          }
          if (uVar4 != 0x75) {
            if (uVar4 == 0x78) goto LAB_00028034;
            goto LAB_00027f00;
          }
          local_88 = (char *)0xa;
        }
LAB_00028056:
        uVar4 = (uVar11 << 9) >> 0x1d;
        if (uVar4 == 2) {
          ppcVar9 = (char **)((int)ppcVar15 + 7U & 0xfffffff8);
          param_2 = ppcVar9 + 2;
          pcVar3 = *ppcVar9;
          pcVar7 = ppcVar9[1];
        }
        else {
          param_2 = ppcVar15 + 1;
          pcVar3 = *ppcVar15;
          pcVar7 = (char *)0x0;
          if (uVar4 == 3) {
            pcVar3 = (char *)((uint)pcVar3 & 0xffff);
          }
          if (uVar4 == 4) {
            pcVar3 = (char *)((uint)pcVar3 & 0xff);
          }
        }
        unaff_r9 = (char *)0x0;
        if ((int)(uVar11 << 0x1c) < 0) {
          if (*param_1 == 0x70) {
            local_84 = (char *)CONCAT31(local_84._1_3_,0x40);
            unaff_r9 = (char *)0x1;
          }
          else if ((local_88 == (char *)0x10) && (((uint)pcVar3 | (uint)pcVar7) != 0)) {
            unaff_r9 = (char *)0x2;
          }
          if ((local_88 == (char *)0x8) &&
             ((((uint)pcVar3 | (uint)pcVar7) != 0 || ((int)(uVar11 << 0x1d) < 0)))) {
            local_84 = (char *)CONCAT31(local_84._1_3_,0x30);
            unaff_r9 = (char *)0x1;
            pcVar14 = pcVar14 + -1;
          }
        }
LAB_000280e0:
        lVar19 = CONCAT44(pcVar7,pcVar3);
        if (*param_1 == 0x58) {
          local_58 = s_0123456789ABCDEF_000281e0;
        }
        else {
          local_58 = s_0123456789abcdef_000281cc;
        }
        local_80 = &local_58;
        while (lVar19 != 0) {
          pcVar3 = local_88;
          lVar19 = FUN_00026404();
          local_80 = (char **)((int)local_80 + -1);
          *(char *)local_80 = local_58[(int)pcVar3];
        }
        ppcVar9 = (char **)((int)&local_58 - (int)local_80);
        if ((int)(uVar11 << 0x1d) < 0) {
          uVar11 = uVar11 & 0xfffeffff;
        }
        else {
          pcVar14 = (char *)0x1;
        }
        if ((int)ppcVar9 < (int)pcVar14) {
          local_88 = pcVar14 + -(int)ppcVar9;
        }
        else {
          local_88 = (char *)0x0;
        }
        local_7c = local_7c + -(int)(local_88 + (int)ppcVar9 + (int)unaff_r9);
        if (-1 < (int)(uVar11 << 0xf)) {
          iVar6 = FUN_000284a0(local_7c,uVar11,local_2c,param_4);
          pcVar12 = pcVar12 + iVar6;
        }
        for (iVar6 = 0; iVar6 < (int)unaff_r9; iVar6 = iVar6 + 1) {
          (*param_4)(*(undefined *)((int)&local_84 + iVar6),local_2c);
          pcVar12 = pcVar12 + 1;
        }
        if ((int)(uVar11 << 0xf) < 0) {
          iVar6 = FUN_000284a0(local_7c,uVar11,local_2c,param_4);
          pcVar12 = pcVar12 + iVar6;
        }
        while (pcVar14 = local_88 + -1, bVar17 = 0 < (int)local_88, local_88 = pcVar14, bVar17) {
          (*param_4)(0x30,local_2c);
          pcVar12 = pcVar12 + 1;
        }
        while (unaff_r11 = (char **)((int)ppcVar9 + -1), pcVar14 = local_7c, 0 < (int)ppcVar9) {
          cVar2 = *(char *)local_80;
          local_80 = (char **)((int)local_80 + 1);
          (*param_4)(cVar2,local_2c);
          pcVar12 = pcVar12 + 1;
          ppcVar9 = unaff_r11;
        }
        goto LAB_000281ae;
      }
      if (uVar4 == 0x58) {
LAB_00028034:
        local_88 = (char *)0x10;
        goto LAB_00028056;
      }
      if (0x58 < uVar4) {
        if (uVar4 == 99) {
          iVar6 = 1;
          unaff_r11 = (char **)&local_88;
LAB_00027f5a:
          param_2 = ppcVar15 + 1;
          unaff_r9 = (char *)0x0;
          if ((int)(uVar11 << 0x1d) < 0) {
            for (; ((int)unaff_r9 < (int)pcVar14 &&
                   (((int)unaff_r9 < iVar6 || (*(char *)((int)unaff_r11 + (int)unaff_r9) != '\0'))))
                ; unaff_r9 = unaff_r9 + 1) {
            }
          }
          else {
            for (; ((int)unaff_r9 < iVar6 || (*(char *)((int)unaff_r11 + (int)unaff_r9) != '\0'));
                unaff_r9 = unaff_r9 + 1) {
            }
          }
          pcVar14 = local_7c + -(int)unaff_r9;
          iVar6 = FUN_000284a0(pcVar14,uVar11,local_2c,param_4);
          pcVar12 = pcVar12 + iVar6 + (int)unaff_r9;
          while (bVar17 = unaff_r9 != (char *)0x0, unaff_r9 = unaff_r9 + -1, bVar17) {
            (*param_4)(*(char *)unaff_r11,local_2c);
            unaff_r11 = (char **)((int)unaff_r11 + 1);
          }
          goto LAB_000281ae;
        }
        if (uVar4 == 100) {
LAB_00027fca:
          uVar4 = (uVar11 << 9) >> 0x1d;
          local_88 = (char *)0xa;
          if (uVar4 == 2) {
            ppcVar9 = (char **)((int)ppcVar15 + 7U & 0xfffffff8);
            param_2 = ppcVar9 + 2;
            pcVar3 = *ppcVar9;
            pcVar7 = ppcVar9[1];
          }
          else {
            param_2 = ppcVar15 + 1;
            pcVar3 = *ppcVar15;
            if (uVar4 == 3) {
              pcVar3 = (char *)(int)(short)pcVar3;
            }
            pcVar7 = (char *)((int)pcVar3 >> 0x1f);
            if (uVar4 == 4) {
              pcVar3 = (char *)(int)(char)pcVar3;
              pcVar7 = (char *)((int)pcVar3 >> 0x1f);
            }
          }
          if ((int)pcVar7 < 0) {
            bVar17 = pcVar3 != (char *)0x0;
            pcVar3 = (char *)-(int)pcVar3;
            pcVar7 = (char *)(-(uint)bVar17 - (int)pcVar7);
            uVar8 = 0x2d;
LAB_0002801c:
            local_84 = (char *)CONCAT31(local_84._1_3_,uVar8);
            unaff_r9 = (char *)0x1;
          }
          else {
            if ((int)(uVar11 << 0x14) < 0) {
              uVar8 = 0x2b;
              goto LAB_0002801c;
            }
            unaff_r9 = (char *)(uVar11 << 0x1f);
            if (unaff_r9 != (char *)0x0) {
              uVar8 = 0x20;
              goto LAB_0002801c;
            }
          }
          goto LAB_000280e0;
        }
        if (uVar4 != 0x65) goto LAB_00027f00;
        break;
      }
      if (uVar4 == 0) {
        return pcVar12;
      }
      bVar18 = SBORROW4(uVar4,0x45);
      bVar16 = (int)(uVar4 - 0x45) < 0;
      bVar17 = uVar4 == 0x45;
      if (!bVar17) goto code_r0x00027ec2;
    }
    goto LAB_000281f4;
  }
  goto LAB_00027f00;
code_r0x00027ec2:
  bVar18 = SBORROW4(uVar4,0x46);
  bVar16 = (int)(uVar4 - 0x46) < 0;
  bVar17 = uVar4 == 0x46;
  if (!bVar17) goto code_r0x00027ec6;
  goto LAB_00027eb0;
code_r0x00027ec6:
  if (uVar4 != 0x47) {
LAB_00027f00:
    (*param_4)(uVar4,local_2c);
    pcVar12 = pcVar12 + 1;
    goto LAB_000281b4;
  }
LAB_000281f4:
  if (-1 < (int)(uVar11 << 0x1d)) {
    pcVar14 = (char *)0x6;
  }
  puVar5 = (undefined4 *)((int)ppcVar15 + 7U & 0xfffffff8);
  param_2 = (char **)(puVar5 + 2);
  uVar10 = *puVar5;
  if ((puVar5[1] & 0x80000000) == 0) {
    if ((int)(uVar11 << 0x14) < 0) {
      local_3d._1_4_ = &DAT_00028474;
    }
    else if ((uVar11 & 1) == 0) {
      local_3d._1_4_ = s_0123456789abcdef_000281cc + 0x10;
    }
    else {
      local_3d._1_4_ = &DAT_00028478;
    }
  }
  else {
    local_3d._1_4_ = &DAT_00028470;
  }
  bVar1 = *param_1;
  uVar4 = puVar5[1] & 0x7fffffff;
  if (bVar1 == 0x65) {
LAB_00028250:
    if ((int)pcVar14 < 0x11) {
      local_88 = pcVar14 + 1;
    }
    else {
      local_88 = (char *)0x11;
    }
    local_84 = (char *)0x0;
    FUN_00027c44(&local_58,auStack_78,uVar10,uVar4);
    unaff_r9 = pcVar14 + 1;
    local_48 = local_58;
    local_88 = pcStack_50;
LAB_0002831a:
    unaff_r11 = (char **)0x0;
    local_84 = (char *)0x1;
    local_88 = pcStack_50;
    local_80 = local_54;
    local_58 = local_48;
  }
  else if (bVar1 < 0x66) {
    if (bVar1 == 0x45) goto LAB_00028250;
    if (bVar1 == 0x46) goto LAB_0002827c;
    if (bVar1 == 0x47) goto LAB_000282be;
  }
  else if (bVar1 == 0x66) {
LAB_0002827c:
    local_84 = (char *)0x1;
    local_80 = (char **)0x80000000;
    local_88 = pcVar14;
    FUN_00027c44(&local_58,auStack_78,uVar10,uVar4);
    unaff_r11 = (char **)0x0;
    local_48 = local_58;
    local_88 = pcStack_50;
    unaff_r9 = pcStack_50;
    if (local_4c == 0) {
      unaff_r9 = (char *)((int)local_54 + (int)(pcVar14 + 1));
    }
    if (-1 < (int)pcVar14 - (int)unaff_r9) {
      unaff_r11 = (char **)(-1 - ((int)pcVar14 - (int)unaff_r9));
      unaff_r9 = pcVar14 + 1;
    }
    local_84 = unaff_r9 + -(int)pcVar14;
  }
  else {
    if (bVar1 != 0x67) goto LAB_00028344;
LAB_000282be:
    if ((int)pcVar14 < 1) {
      pcVar14 = (char *)0x1;
    }
    local_88 = pcVar14;
    if (0x11 < (int)pcVar14) {
      local_88 = (char *)0x11;
    }
    local_84 = (char *)0x0;
    FUN_00027c44(&local_58,auStack_78,uVar10,uVar4);
    local_88 = pcStack_50;
    unaff_r11 = (char **)0x0;
    local_48 = local_58;
    unaff_r9 = pcVar14;
    if (-1 < (int)(uVar11 << 0x1c)) {
      if ((int)pcStack_50 < (int)pcVar14) {
        unaff_r9 = pcStack_50;
      }
      for (; (1 < (int)unaff_r9 && (unaff_r9[(int)(local_58 + -1)] == '0'));
          unaff_r9 = unaff_r9 + -1) {
      }
    }
    if (((int)pcVar14 <= (int)local_54) || ((int)(local_54 + 1) < 0 != SCARRY4((int)local_54,4)))
    goto LAB_0002831a;
    if ((int)local_54 < 1) {
      pcVar14 = unaff_r9 + -(int)local_54;
      unaff_r11 = local_54;
LAB_00028334:
      unaff_r9 = pcVar14;
    }
    else {
      pcVar14 = (char *)((int)local_54 + 1);
      if ((int)unaff_r9 < (int)pcVar14) goto LAB_00028334;
    }
    local_84 = (char *)((int)local_54 + (1 - (int)unaff_r11));
    local_80 = (char **)0x80000000;
  }
LAB_00028344:
  if ((-1 < (int)(uVar11 << 0x1c)) && ((int)unaff_r9 <= (int)local_84)) {
    local_84 = (char *)0xffffffff;
  }
  local_3d[0] = 0;
  pbVar13 = local_3f + 2;
  if (local_80 != (char **)0x80000000) {
    local_58 = (char *)0x2;
    local_54 = (char **)0x2b;
    if ((int)local_80 < 0) {
      local_80 = (char **)-(int)local_80;
      local_54 = (char **)0x2d;
    }
    while ((pcVar14 = local_58, local_58 = local_58 + -1, 0 < (int)pcVar14 ||
           (local_80 != (char **)0x0))) {
      local_80 = (char **)FUN_0002690e(local_80,10);
      pbVar13 = pbVar13 + -1;
      *pbVar13 = extraout_r1 + 0x30;
    }
    pbVar13[-1] = (byte)local_54;
    pbVar13 = pbVar13 + -2;
    *pbVar13 = *param_1 & 0x20 | 0x45;
  }
  local_80 = (char **)(local_3f + (2 - (int)pbVar13));
  uVar4 = (uint)*(byte *)local_3d._1_4_;
  if (uVar4 != 0) {
    uVar4 = 1;
  }
  local_7c = local_7c +
             (-1 - (int)(unaff_r9 + ((int)local_84 >> 0x1f) + uVar4 +
                        (int)(local_3f + (2 - (int)pbVar13))));
  if (-1 < (int)(uVar11 << 0xf)) {
    iVar6 = FUN_000284a0(local_7c,uVar11,local_2c,param_4);
    pcVar12 = pcVar12 + iVar6;
  }
  if (*(byte *)local_3d._1_4_ != 0) {
    (*param_4)(*(byte *)local_3d._1_4_,local_2c);
    pcVar12 = pcVar12 + 1;
  }
  pcVar14 = pcVar12;
  pcVar3 = unaff_r9;
  if ((int)(uVar11 << 0xf) < 0) {
    iVar6 = FUN_000284a0(local_7c,uVar11,local_2c,param_4);
    pcVar14 = pcVar12 + iVar6;
  }
  while (pcVar12 = pcVar14, unaff_r9 = pcVar3 + -1, 0 < (int)pcVar3) {
    if (((int)unaff_r11 < 0) || ((int)local_88 <= (int)unaff_r11)) {
      cVar2 = '0';
    }
    else {
      cVar2 = local_48[(int)unaff_r11];
    }
    (*param_4)(cVar2,local_2c);
    unaff_r11 = (char **)((int)unaff_r11 + 1);
    local_84 = local_84 + -1;
    pcVar14 = pcVar12 + 1;
    pcVar3 = unaff_r9;
    if (local_84 == (char *)0x0) {
      (*param_4)(0x2e,local_2c);
      pcVar14 = pcVar12 + 2;
    }
  }
  while (ppcVar9 = local_80, local_80 = (char **)((int)local_80 + -1), pcVar14 = local_7c,
        0 < (int)ppcVar9) {
    (*param_4)(*pbVar13,local_2c);
    pcVar12 = pcVar12 + 1;
    pbVar13 = pbVar13 + 1;
  }
LAB_000281ae:
  iVar6 = FUN_0002847c(pcVar14,uVar11,local_2c,param_4);
  pcVar12 = pcVar12 + iVar6;
LAB_000281b4:
  param_1 = param_1 + 1;
  goto LAB_000281b6;
}


/* ---- FUN_0002847c @ 0002847c ---- */

int FUN_0002847c(int param_1,int param_2,undefined4 param_3,code *param_4)

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


/* ---- FUN_000284a0 @ 000284a0 ---- */

int FUN_000284a0(int param_1,int param_2,undefined4 param_3,code *param_4)

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


/* ---- FUN_000284ce @ 000284ce ---- */

void FUN_000284ce(undefined param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_2;
  *param_2 = puVar1 + 1;
  *puVar1 = param_1;
  return;
}


/* ---- FUN_000284d8 @ 000284d8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000284d8(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = _DAT_000285d4;
  if (*(char *)(_DAT_000285d4 + 0xc) == '\x01') {
    debug_printf(s____________touch_busy____________000285d7 + 1);
  }
  iVar4 = _DAT_000285d4 + 0xd;
  if (param_1 << 0x1b < 0) {
    debug_printf(s_Double_TAP_detected__int_state__0_00028600,param_1,*(undefined *)(iVar2 + 8),
                 *(undefined *)(iVar2 + 0xd));
    if (*(int *)(_DAT_00028630 + 8) == -1) {
      FUN_00038784();
    }
    cVar1 = *(char *)(iVar2 + 8);
    if ((cVar1 == -0x7f) || (cVar1 == '\x01')) {
      debug_printf(s_Double_TAP_detected__001_00028633 + 1);
      FUN_0003c834(0);
      if (*(char *)(iVar2 + 8) == -0x7f) {
        debug_printf(s_Double_TAP_detected__002_00028650);
      }
      iVar2 = FUN_00028a64();
      if (iVar2 != 0) {
        debug_printf(s_Start_adv_ERROR_in_func___s__lin_00028670,DAT_0002866c,0x54);
      }
      pcVar3 = s_Double_TAP_detected__003_0002869c;
    }
    else {
      if (cVar1 == -0x7c) {
        if (*(char *)(iVar2 + 0xd) == '\x12') {
          debug_printf(s_Double_TAP_detected__004_000286d8);
          FUN_000387d4();
          return;
        }
      }
      else if (cVar1 == -0x7b) {
        if (*(char *)(iVar2 + 0x1c) != '\x01') {
          debug_printf(s_Double_tap_detected_in_double_ta_000286f4);
          FUN_0003d454(0);
          *_DAT_00028728 = 0;
          FUN_0003c4d4(200,0);
          return;
        }
        debug_printf(s_Double_tap_detected_in_double_ta_0002872b + 1);
        *(undefined *)(iVar2 + 0xd) = 0x17;
        *(undefined *)(iVar2 + 0xe) = 0;
        *(undefined4 *)(iVar2 + 0xf) = 0;
        *(undefined4 *)(iVar2 + 0x13) = 0;
        goto LAB_000285be;
      }
      FUN_0003c834(*_DAT_000286b8);
      pcVar3 = s_Double_TAP_detected__007_000286bb + 1;
    }
  }
  else {
    if (param_1 << 0x1a < 0) {
      debug_printf(s_Single_TAP_detected__int_state__0_00028760,param_1);
      FUN_000264be(iVar4,0xf);
      *(undefined *)(iVar2 + 0xd) = 0x16;
LAB_000285be:
      FUN_0003206c(iVar4);
      return;
    }
    pcVar3 = s_Double_TAP_detected__006_00028788;
  }
  debug_printf(pcVar3);
  return;
}


/* ---- FUN_000287a4 @ 000287a4 ---- */

undefined4 FUN_000287a4(void)

{
  FUN_00026bcc();
  return 1;
}


/* ---- FUN_000287ae @ 000287ae ---- */

undefined4 FUN_000287ae(void)

{
  return 1;
}


/* ---- FUN_000287b2 @ 000287b2 ---- */

undefined4 FUN_000287b2(void)

{
  return 1;
}


/* ---- FUN_000287b6 @ 000287b6 ---- */

undefined4 FUN_000287b6(byte *param_1,byte *param_2)

{
  int iVar1;
  
  if ((((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) && (*param_1 >> 1 == *param_2 >> 1))
     && (iVar1 = FUN_000264e2(param_1 + 1,param_2 + 1,6), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_000287dc @ 000287dc ---- */

undefined4 FUN_000287dc(uint param_1)

{
  if ((param_1 & 3) != 0) {
    return 0;
  }
  return 1;
}


/* ---- FUN_000287e8 @ 000287e8 ---- */

undefined4 FUN_000287e8(int param_1,uint param_2,int param_3)

{
  if ((*(uint *)(param_1 + 0xc) <= param_2) &&
     ((param_2 + param_3) - 1 <= *(uint *)(param_1 + 0x10))) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00028800 @ 00028800 ---- */

uint FUN_00028800(int param_1)

{
  return (param_1 + 1U) % 5;
}


/* ---- FUN_0002880e @ 0002880e ---- */

int FUN_0002880e(void)

{
  int iVar1;
  
  iVar1 = FUN_0002c344(0,2,1);
  if ((((iVar1 == 0) || (iVar1 == 7)) && ((iVar1 = FUN_0002c344(1,2,7), iVar1 == 0 || (iVar1 == 7)))
      ) && ((iVar1 = FUN_0002c344(0,0,10), iVar1 == 0 || (iVar1 == 7)))) {
    iVar1 = 0;
  }
  return iVar1;
}


/* ---- FUN_00028844 @ 00028844 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00028844(void)

{
  int iVar1;
  undefined local_d0 [2];
  undefined local_ce;
  undefined local_cd;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined2 *local_ac;
  undefined local_57;
  undefined local_54;
  undefined local_53;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined local_24;
  undefined local_23;
  undefined local_22;
  undefined local_21;
  undefined local_20;
  undefined local_1f;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined local_18;
  undefined local_17;
  undefined local_16;
  undefined2 local_14 [2];
  undefined2 local_10;
  undefined *local_c;
  
  FUN_000264be(local_d0,0xac);
  software_interrupt(0x6d);
  local_24 = local_16;
  local_23 = local_17;
  local_22 = local_18;
  local_21 = local_19;
  local_20 = local_1a;
  local_1f = local_1b;
  local_14[0] = 0xffff;
  local_c = &local_24;
  local_d0[0] = 2;
  local_ce = 1;
  local_b8 = 1;
  local_54 = 1;
  local_10 = 6;
  local_cd = 6;
  local_b4 = DAT_00028910;
  local_53 = 1;
  local_40 = 0x664;
  local_c0 = 0;
  local_bc = 0;
  local_3c = 18000;
  local_ac = local_14;
  local_57 = 0;
  local_2c = DAT_00028914;
  local_48 = 0x180;
  local_44 = 3000;
  debug_printf(s_advertising_init_int__d_second___0002891b + 1,*(undefined2 *)(_DAT_00028918 + 0x34)
               ,*(undefined2 *)(_DAT_00028918 + 0x36));
  iVar1 = FUN_0002aae8(_DAT_00028940,local_d0);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x64c,s__________main_c_00028943 + 1);
  }
  FUN_0002aae2(_DAT_00028940,1);
  return;
}


/* ---- FUN_00028954 @ 00028954 ---- */

void FUN_00028954(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  
  debug_printf(s_____________advertising_start____00028a0c,param_1);
  if (param_1 == 0) {
    FUN_000264b0(DAT_00028a58,0x10,0xffff);
    iVar1 = DAT_00028a5c;
    iVar6 = 8;
    *(undefined4 *)(DAT_00028a5c + 0x14) = 8;
    iVar2 = DAT_00028a58;
    piVar7 = (int *)(iVar1 + 0x14);
    iVar3 = FUN_0003742c(0xffff);
    *piVar7 = 0;
    while ((iVar3 != 0xffff && (bVar8 = iVar6 != 0, iVar6 = iVar6 + -1, bVar8))) {
      iVar5 = *piVar7;
      *piVar7 = iVar5 + 1;
      *(short *)(iVar2 + iVar5 * 2) = (short)iVar3;
      iVar3 = FUN_0003742c();
    }
    iVar2 = FUN_00037764(DAT_00028a58,*(undefined4 *)(iVar1 + 0x14));
    if (iVar2 != 0) {
      app_error_handler(iVar2,0x13a,s__________main_c_00028a48);
    }
    iVar2 = FUN_00036934(DAT_00028a58,*(undefined4 *)(iVar1 + 0x14));
    if ((iVar2 != 6) && (iVar2 != 0)) {
      app_error_handler(iVar2,0x141,s__________main_c_00028a48);
    }
    iVar2 = FUN_0002ac70(DAT_00028a60,3);
    if (iVar2 == 0) {
      return;
    }
    uVar4 = 0x145;
  }
  else {
    debug_printf(s_Erase_bonds__00028a38);
    iVar2 = FUN_000375ec();
    if (iVar2 == 0) {
      return;
    }
    uVar4 = 0x442;
  }
  app_error_handler(iVar2,uVar4,s__________main_c_00028a48);
  return;
}


/* ---- FUN_00028a64 @ 00028a64 ---- */

undefined4 FUN_00028a64(void)

{
  return 0;
}


/* ---- FUN_00028a68 @ 00028a68 ---- */

void FUN_00028a68(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined local_40 [16];
  undefined auStack_30 [13];
  undefined auStack_23 [16];
  undefined auStack_13 [3];
  
  uVar2 = 0;
  do {
    local_40[uVar2] = *(undefined *)(param_1 + (0xf - uVar2));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  FUN_000264be(auStack_30,0xd);
  uVar2 = 0;
  do {
    uVar1 = uVar2 + 1;
    auStack_23[2 - uVar2] = *(undefined *)(param_2 + uVar2);
    uVar2 = uVar1;
  } while (uVar1 < 3);
  software_interrupt(0x46);
  uVar2 = 0;
  do {
    *(undefined *)(param_3 + uVar2) = auStack_13[2 - uVar2];
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}


/* ---- FUN_00028aba @ 00028aba ---- */

undefined4 FUN_00028aba(int param_1)

{
  if (*(int *)(param_1 + 0xd8) != 0) {
    return 0;
  }
  return 1;
}


/* ---- FUN_00028ac8 @ 00028ac8 ---- */

void FUN_00028ac8(undefined4 param_1)

{
  FUN_0002b4d4(param_1,*(undefined *)(DAT_00028ad0 + 3));
  return;
}


/* ---- FUN_00028d0c @ 00028d0c ---- */

void FUN_00028d0c(code **param_1,int param_2,uint param_3)

{
  char cVar1;
  code cVar2;
  uint uVar3;
  undefined uVar4;
  code *pcVar5;
  int iVar6;
  uint local_20;
  
  local_20 = 0;
LAB_00028e80:
  if (param_3 <= local_20) {
    return;
  }
  switch(*(undefined *)(param_1 + 0x37)) {
  case 0:
    cVar1 = *(char *)(param_2 + local_20);
    *(char *)((int)param_1 + 0xdd) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0x3b) = 4;
      param_1[0x34] = (code *)(param_1 + 0xf);
      param_1[0x35] = (code *)&NMI;
      uVar4 = 1;
      local_20 = local_20 + 1;
    }
    else {
      uVar3 = local_20 + 1;
      if (cVar1 != '\x01') goto LAB_00028d6c;
      *(undefined *)(param_1 + 0x3b) = 5;
      param_1[0x34] = (code *)(param_1 + 0x2f);
      param_1[0x35] = (code *)0x1;
LAB_00028daa:
      local_20 = local_20 + 1;
      uVar4 = 2;
    }
    break;
  case 1:
    param_1[0x42] = *(code **)(local_20 + param_2);
    uVar3 = local_20 + 4;
    goto LAB_00028dae;
  case 2:
    cVar2 = *(code *)(param_2 + local_20);
    param_1[0x3a][(int)(param_1 + 0x43)] = cVar2;
    uVar3 = local_20 + 1;
    if (cVar2 != (code)0x0) {
      param_1[0x3a] = param_1[0x3a] + 1;
      goto LAB_00028daa;
    }
LAB_00028dae:
    local_20 = uVar3;
    uVar4 = 3;
    break;
  case 3:
    pcVar5 = (code *)(uint)*(byte *)(param_2 + local_20);
    param_1[0x40] = pcVar5;
    uVar3 = local_20 + 1;
    if (pcVar5 < param_1[0x35]) {
      param_1[0x41] = *(code **)(param_1[0x34] + (int)pcVar5 * 0x10 + 0xc);
      local_20 = local_20 + 1;
      iVar6 = FUN_00028aba(param_1);
      uVar3 = local_20;
      if (iVar6 == 0) {
        iVar6 = FUN_00029c90(param_1,param_1[0x3f],param_1[0x40],param_1[0x41]);
        if (iVar6 != 0) {
          param_1[0x36] = param_1[0x36] + -1;
        }
        uVar4 = 4;
        break;
      }
    }
LAB_00028d6c:
    local_20 = uVar3;
    uVar4 = 8;
    break;
  case 4:
    *(ushort *)(param_1 + 0x3f) = (ushort)*(byte *)(param_2 + local_20);
    *(undefined *)(param_1 + 0x37) = 5;
    local_20 = local_20 + 1;
    goto LAB_00028e80;
  case 5:
    uVar4 = FUN_00029ca2(param_1,param_2,&local_20);
    break;
  case 6:
    uVar4 = FUN_00029bdc(param_1,param_2,&local_20);
    break;
  case 7:
    if (*(ushort *)(param_1 + 0x39) < *(ushort *)(param_1 + 0x3f)) {
      *(ushort *)(param_1 + 0x39) = *(ushort *)(param_1 + 0x39) + 1;
      local_20 = local_20 + 1;
    }
    if (*(short *)(param_1 + 0x39) == *(short *)(param_1 + 0x3f)) {
      iVar6 = FUN_00029c90(param_1,param_1[0x3f],param_1[0x40],param_1[0x41]);
      if (iVar6 != 0) {
        (**param_1)(param_1 + 0x3b);
      }
      iVar6 = FUN_00028aba(param_1);
      uVar3 = local_20;
      if (iVar6 != 0) goto LAB_00028d6c;
      goto LAB_00028dae;
    }
    uVar4 = 7;
    break;
  case 8:
    local_20 = param_3;
    goto LAB_00028e80;
  default:
    goto LAB_00028e7c;
  }
  *(undefined *)(param_1 + 0x37) = uVar4;
  goto LAB_00028e80;
LAB_00028e7c:
  *(undefined *)(param_1 + 0x37) = 8;
  goto LAB_00028e80;
}


/* ---- FUN_00028e8c @ 00028e8c ---- */

void FUN_00028e8c(void)

{
  debug_printf(s_appButtonInit_00028ea8);
  FUN_00028ee0(DAT_00028eb8,2,100);
  FUN_00028ebc();
  return;
}


/* ---- FUN_00028ebc @ 00028ebc ---- */

undefined4 FUN_00028ebc(void)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = DAT_00028edc;
  for (uVar2 = 0; uVar2 < *pbVar1; uVar2 = uVar2 + 1) {
    FUN_00034348(*(undefined *)(*(int *)(pbVar1 + 4) + uVar2 * 8),1);
  }
  return 0;
}


/* ---- FUN_00028ee0 @ 00028ee0 ---- */

int FUN_00028ee0(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 local_18;
  
  if (param_3 < 5) {
    iVar2 = 7;
  }
  else {
    local_18 = param_4;
    iVar2 = FUN_00034540();
    if ((iVar2 != 0) || (iVar2 = FUN_000344d0(), iVar2 == 0)) {
      puVar3 = DAT_00028f48;
      *(int *)(DAT_00028f48 + 4) = param_1;
      *puVar3 = (char)param_2;
      *(uint *)(puVar3 + 8) = param_3;
      *(undefined4 *)(puVar3 + 0x10) = 0;
      *(undefined4 *)(puVar3 + 0x14) = 0;
      *(undefined4 *)(puVar3 + 0x18) = 0;
      *(undefined4 *)(puVar3 + 0x1c) = 0;
      puVar1 = DAT_00028f4c;
      do {
        bVar4 = param_2 == 0;
        param_2 = param_2 - 1 & 0xff;
        if (bVar4) {
          iVar2 = FUN_00029994(DAT_00028f4c + 1,0,DAT_00028f54,local_18);
          return iVar2;
        }
        puVar3 = (undefined *)(param_1 + param_2 * 8);
        iVar2 = FUN_000343ec(*puVar3,&local_18,DAT_00028f50);
      } while (iVar2 == 0);
    }
  }
  return iVar2;
}


/* ---- app_error_fault_handler @ 00028f58 ---- */
/* -> System reset */

/* -> System reset */

void app_error_fault_handler(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  disableIRQinterrupts();
  FUN_000338b0();
  do {
    iVar1 = FUN_0003351c();
  } while (iVar1 != 0);
  uVar2 = FUN_0003425c(param_3[2]);
  uVar3 = param_2;
  debug_printf(s_SYSTEM_ERROR__u___s__at__s__u_PC_00029014,param_3[2],uVar2,param_3[1],*param_3,
               param_2);
  if (param_1 == 1) {
    pcVar4 = s_SOFTDEVICE__ASSERTION_FAILED_000290b8;
  }
  else if (param_1 == 0x1001) {
    pcVar4 = s_SOFTDEVICE__INVALID_MEMORY_ACCES_000290d8;
  }
  else {
    if (param_1 != 0x4001) {
      if (param_1 == 0x4002) {
        debug_printf(s_ASSERTION_FAILED_at__s__u_00029044,param_3[1],*(undefined2 *)param_3);
      }
      else {
        debug_printf(s_UNKNOWN_FAULT_at_0x_08X_00029060,param_2);
      }
      goto LAB_00028fb6;
    }
    uVar3 = FUN_0003425c(param_3[2]);
    debug_printf(s_ERROR__u___s__at__s__u_PC_at__0x_000290fc,param_3[2],uVar3,param_3[1],*param_3,
                 param_2);
    pcVar4 = s_End_of_error_report_00029124;
    uVar3 = param_2;
  }
  debug_printf(pcVar4);
LAB_00028fb6:
  uVar2 = FUN_0003425c(param_3[2]);
  debug_printf(s_ERROR__u___s__at__s__u_0002907c,param_3[2],uVar2,param_3[1],*param_3,uVar3);
  debug_printf(s______System_reset______00029094);
  DataSynchronizationBarrier(0xf);
  *DAT_000290b0 = *DAT_000290b0 & 0x700 | DAT_000290b4;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- motor_off @ 0002913c ---- */

void motor_off(void)

{
  int iVar1;
  int iVar2;
  
  FUN_00031cb0();
  FUN_0003c988();
  iVar2 = DAT_00029178;
  iVar1 = DAT_00029170;
  *(undefined *)(DAT_00029170 + 0xb) = 0;
  FUN_0003374c(((uint)(DAT_00029174 - iVar2) >> 3) * 0x10000 + 3,s_Motor_disabled__0002917c);
  if (*(char *)(iVar1 + 10) != '\x01') {
    FUN_00037894();
    return;
  }
  return;
}


/* ---- motor_on @ 00029190 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void motor_on(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _DAT_000291c4;
  if (*(char *)(_DAT_000291c4 + 0x2f) != '\x01') {
    FUN_000378bc();
  }
  FUN_00031c70(param_1);
  FUN_0003c920(param_2);
  *(undefined *)(iVar1 + 0xb) = 1;
  debug_printf(s_Motor_enabled__strength____d__ti_000291c7 + 1,param_1,param_2);
  return;
}


/* ---- FUN_000291fc @ 000291fc ---- */

undefined4 FUN_000291fc(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(*(int **)(param_1 + 4) + 1);
  uVar1 = (uint)*(byte *)(DAT_00029230 + uVar2);
  if (uVar1 != 0xff) {
    if (uVar1 == 0xfe) {
      return 1;
    }
    if (*(int *)(**(int **)(param_1 + 4) + uVar1 * 4 + 0x540) != *(int *)(DAT_00029234 + uVar2 * 4))
    {
      return 1;
    }
    *(undefined *)(DAT_00029230 + uVar2) = 0xff;
  }
  return 0;
}


/* ---- FUN_00029238 @ 00029238 ---- */

undefined4 FUN_00029238(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_3 * (uint)*(ushort *)(*param_1 + 0x18)) / 100 & 0xffff;
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x21) != '\x02') {
    return 8;
  }
  if (*(uint *)(iVar1 + param_2 * 0xc + 4) == uVar2) {
    if (*(code **)(iVar1 + 0x1c) != (code *)0x0) {
      (**(code **)(iVar1 + 0x1c))(*(undefined *)(param_1[1] + 4));
    }
  }
  else {
    iVar1 = FUN_000291fc(param_1);
    if (iVar1 != 0) {
      return 0x11;
    }
    *(undefined *)(DAT_000292bc + (uint)*(byte *)(param_1[1] + 4)) = 0xfe;
    FUN_00038a14(param_1,param_2,uVar2);
    if (*(int *)(*param_1 + 0x1c) != 0) {
      *(undefined *)(DAT_000292c0 + (uint)*(byte *)(param_1[1] + 4) * 2 + param_2) = 2;
      FUN_00034c34(param_1[1],2);
    }
  }
  return 0;
}


/* ---- FUN_0002924c @ 0002924c ---- */

undefined4 FUN_0002924c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x21) != '\x02') {
    return 8;
  }
  if (*(int *)(iVar1 + param_2 * 0xc + 4) == param_3) {
    if (*(code **)(iVar1 + 0x1c) != (code *)0x0) {
      (**(code **)(iVar1 + 0x1c))(*(undefined *)(param_1[1] + 4));
    }
  }
  else {
    iVar1 = FUN_000291fc(param_1);
    if (iVar1 != 0) {
      return 0x11;
    }
    *(undefined *)(DAT_000292bc + (uint)*(byte *)(param_1[1] + 4)) = 0xfe;
    FUN_00038a14(param_1,param_2,param_3);
    if (*(int *)(*param_1 + 0x1c) != 0) {
      *(undefined *)(DAT_000292c0 + (uint)*(byte *)(param_1[1] + 4) * 2 + param_2) = 2;
      FUN_00034c34(param_1[1],2);
    }
  }
  return 0;
}


/* ---- FUN_000292c4 @ 000292c4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000292c4(int *param_1,int param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_28;
  
  puVar1 = DAT_000293b4;
  iVar7 = *param_1;
  puVar6 = (undefined4 *)(iVar7 + param_2 * 0xc);
  if (*(char *)(iVar7 + 0x21) == '\0') {
    puVar6[1] = 0;
    *(char *)((int)puVar6 + 10) = (char)param_4;
    iVar3 = FUN_00034554(param_3,&local_28);
    if (iVar3 == 0) {
      *(uint *)(iVar7 + param_2 * 0xc) = param_3;
      iVar3 = 1 << (param_3 & 0xff);
      iVar7 = iVar3;
      if (param_4 != 0) {
        iVar7 = _DAT_50000508;
        _DAT_5000050c = iVar3;
      }
      _DAT_50000508 = iVar7;
      uVar8 = 0;
      do {
        iVar7 = FUN_000346f4((int)puVar6 + uVar8 + 8);
        if (iVar7 != 0) goto LAB_00029340;
        uVar8 = uVar8 + 1 & 0xff;
      } while (uVar8 < 2);
      FUN_000347a4(*(undefined *)(puVar6 + 2));
      FUN_000347a4(*(undefined *)((int)puVar6 + 9));
      if (param_4 == 0) {
        uVar2 = FUN_000346dc(*puVar6);
        uVar4 = FUN_00034330(*puVar6);
      }
      else {
        uVar2 = FUN_00034330();
        uVar4 = FUN_000346dc(*puVar6);
      }
      uVar5 = FUN_00034c16(param_1[1],param_2);
      FUN_00034760(*(undefined *)(puVar6 + 2),uVar5,uVar2);
      uVar2 = FUN_00034c16(param_1[1],2);
      FUN_00034760(*(undefined *)((int)puVar6 + 9),uVar2,uVar4);
      *(undefined *)((int)puVar6 + 0xb) = 1;
      *(undefined *)(DAT_000293b8 + (uint)*(byte *)(param_1[1] + 4) * 2 + param_2) = 0;
      uVar2 = 0;
    }
    else {
LAB_00029340:
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}


/* ---- FUN_000293bc @ 000293bc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000293bc(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  FUN_00034c58(param_1[1]);
  FUN_00034c26(param_1[1],2);
  FUN_000347a4(*(undefined *)(iVar3 + 0x20));
  uVar2 = 0;
  do {
    puVar1 = (undefined4 *)(iVar3 + uVar2 * 0xc);
    if (*(byte *)((int)puVar1 + 0xb) != 0) {
      if (*(char *)(*param_1 + uVar2 * 0xc + 10) == '\0') {
        _DAT_50000508 = 1 << (uint)*(byte *)puVar1;
      }
      else {
        _DAT_5000050c = 1 << *(byte *)puVar1;
      }
      FUN_00034614(*puVar1);
      FUN_000347a4(*(byte *)(puVar1 + 2));
      FUN_000347a4(*(byte *)((int)puVar1 + 9));
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 2);
  *(undefined *)(iVar3 + 0x21) = 1;
  return;
}


/* ---- FUN_00029434 @ 00029434 ---- */

void FUN_00029434(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = DAT_000294a4;
  uVar2 = 0;
  iVar4 = *param_1;
  do {
    puVar3 = (undefined4 *)(iVar4 + uVar2 * 0xc);
    *(undefined *)(iVar1 + (uint)*(byte *)(param_1[1] + 4) * 2 + uVar2) = 0;
    if (*(char *)((int)puVar3 + 0xb) != '\0') {
      FUN_0003465c(*puVar3,*(char *)(*param_1 + uVar2 * 0xc + 10) == '\0');
      FUN_00034638(*puVar3);
      puVar3[1] = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  *(undefined *)(DAT_000294a8 + (uint)*(byte *)(param_1[1] + 4)) = 0xff;
  FUN_00034bd4(param_1[1]);
  FUN_00034c74(param_1[1]);
  *(undefined *)(iVar4 + 0x21) = 2;
  return;
}


/* ---- FUN_000294ac @ 000294ac ---- */

int FUN_000294ac(int *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_3c;
  uint local_38;
  int *piStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  if (param_2 == 0) {
    iVar4 = 0xb;
  }
  else {
    iVar4 = *param_1;
    if (*(char *)(iVar4 + 0x21) == '\0') {
      piStack_30 = param_1;
      iStack_2c = param_2;
      local_28 = param_3;
      iVar2 = FUN_00032ad4();
      if ((iVar2 == 0) || (iVar2 == 0x85)) {
        iVar2 = FUN_00034540();
        if ((iVar2 == 0) && (iVar2 = FUN_000344d0(), iVar2 != 0)) {
          return 3;
        }
        pcVar1 = DAT_00029628;
        if (((uint)*DAT_00029624 << 0x18) >> 0x1c == 3) {
          *DAT_00029628 = '\0';
        }
        else {
          *DAT_00029628 = '\x01';
        }
        *(undefined *)(iVar4 + 0x20) = 0xff;
        uVar5 = 0;
        do {
          iVar2 = iVar4 + uVar5 * 0xc;
          *(undefined *)(iVar2 + 0xb) = 0;
          *(undefined *)(iVar2 + 8) = 0xff;
          *(undefined *)(iVar2 + 9) = 0xff;
          uVar3 = uVar5 + 1 & 0xff;
          *(undefined4 *)(iVar4 + uVar5 * 0xc) = 0xffffffff;
          uVar5 = uVar3;
        } while (uVar3 < 2);
        iVar2 = FUN_000346f4(iVar4 + 0x20);
        if (iVar2 == 0) {
          uVar5 = 0;
          do {
            iVar2 = *(int *)(param_2 + uVar5 * 4);
            if (iVar2 != -1) {
              iVar2 = FUN_000292c4(param_1,uVar5,iVar2,*(undefined *)(param_2 + uVar5 + 8));
              if (iVar2 != 0) {
                FUN_00038954(param_1);
                return iVar2;
              }
              FUN_0002924c(param_1,uVar5,0);
            }
            uVar5 = uVar5 + 1 & 0xff;
          } while (uVar5 < 2);
          uVar3 = *(uint *)(param_2 + 0x10);
          for (uVar5 = 0; (0xfff < uVar3 && (uVar5 < 9)); uVar5 = uVar5 + 1) {
            uVar3 = uVar3 >> 1;
          }
          if ((*pcVar1 != '\0') && (uVar5 == 0)) {
            uVar5 = 1;
          }
          local_3c = CONCAT31((int3)((uint)*(undefined4 *)(DAT_0002962c + 4) >> 8),(char)uVar5);
          local_38 = (uint)*(byte *)(param_1[1] + 4);
          iVar2 = FUN_00034cbc(param_1[1],&local_3c,DAT_00029630);
          if (iVar2 != 0) {
            FUN_00038954(param_1);
            return iVar2;
          }
          uVar5 = (uint)(*(int *)(param_2 + 0x10) << 4) >>
                  (*(uint *)(*(int *)param_1[1] + 0x510) & 0xff);
          *(uint *)(iVar4 + 0x18) = uVar5;
          FUN_00034bd4(param_1[1]);
          FUN_00034c90(param_1[1],2,uVar5,4,1);
          FUN_00034c26(param_1[1],2);
          *(undefined4 *)(iVar4 + 0x1c) = local_28;
          pcVar1 = DAT_00029628;
          *(int **)(DAT_00029634 + (uint)*(byte *)(param_1[1] + 4) * 4) = param_1;
          pcVar1[*(byte *)(param_1[1] + 4) + 1] = -1;
          *(undefined *)(iVar4 + 0x21) = 1;
          return 0;
        }
        FUN_00038954(param_1);
      }
      iVar4 = 4;
    }
    else {
      iVar4 = 8;
    }
  }
  return iVar4;
}


/* ---- FUN_00029638 @ 00029638 ---- */

undefined4 FUN_00029638(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_28;
  
  pcVar1 = DAT_000296d4;
  if (*(ushort *)(DAT_000296d4 + 2) < param_2) {
    uVar4 = 9;
  }
  else {
    local_28 = param_4 & 0xffffff00;
    FUN_00029b34(&local_28);
    if ((ushort)(byte)pcVar1[1] < *(ushort *)(pcVar1 + 4)) {
      cVar2 = pcVar1[1] + 1;
    }
    else {
      cVar2 = '\0';
    }
    if (cVar2 == *pcVar1) {
      FUN_00029b7c(local_28 & 0xff);
    }
    else {
      uVar5 = (uint)(byte)pcVar1[1];
      if ((ushort)(byte)pcVar1[1] < *(ushort *)(pcVar1 + 4)) {
        cVar2 = pcVar1[1] + 1;
      }
      else {
        cVar2 = '\0';
      }
      pcVar1[1] = cVar2;
      FUN_00029b7c(local_28 & 0xff);
      if (uVar5 != 0xffff) {
        iVar3 = *(int *)(pcVar1 + 8);
        *(undefined4 *)(iVar3 + uVar5 * 8) = param_3;
        if ((param_1 == 0) || (param_2 == 0)) {
          *(undefined2 *)(iVar3 + uVar5 * 8 + 4) = 0;
        }
        else {
          FUN_0002648c(uVar5 * *(ushort *)(pcVar1 + 2) + *(int *)(pcVar1 + 0xc),param_1,param_2);
          *(short *)(*(int *)(pcVar1 + 8) + uVar5 * 8 + 4) = (short)param_2;
        }
        return 0;
      }
    }
    uVar4 = 4;
  }
  return uVar4;
}


/* ---- FUN_000296d8 @ 000296d8 ---- */

void FUN_000296d8(void)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  
  pbVar1 = DAT_00029714;
  while (pbVar1[1] != *pbVar1) {
    uVar3 = (uint)*pbVar1;
    (**(code **)(*(int *)(pbVar1 + 8) + uVar3 * 8))
              (uVar3 * *(ushort *)(pbVar1 + 2) + *(int *)(pbVar1 + 0xc),
               *(undefined2 *)(*(int *)(pbVar1 + 8) + uVar3 * 8 + 4));
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


/* ---- FUN_00029718 @ 00029718 ---- */

undefined4 FUN_00029718(undefined2 param_1,short param_2,uint param_3)

{
  undefined *puVar1;
  
  puVar1 = DAT_00029740;
  if ((param_3 & 3) != 0) {
    return 7;
  }
  *(uint *)(DAT_00029740 + 8) = param_3;
  *(uint *)(puVar1 + 0xc) = param_3 + (ushort)(param_2 * 8 + 8);
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 2) = param_1;
  *(short *)(puVar1 + 4) = param_2;
  return 0;
}


/* ---- FUN_00029744 @ 00029744 ---- */

void FUN_00029744(void)

{
  FUN_0002d870(DAT_00029750,0x8c,0);
  return;
}


/* ---- FUN_00029754 @ 00029754 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00029754(void)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  
  FUN_0002648c(DAT_000297cc,0x70000,0x90);
  FUN_0002648c(DAT_000297d0,0x70000,0x90);
  FUN_0002648c(DAT_000297cc,0x70000,0x90);
  uVar2 = 0;
  pcVar4 = *(char **)(_DAT_000297d4 + 4);
  do {
    if (*pcVar4 != -1) {
      FUN_0002648c(DAT_000297d0,*(char **)(_DAT_000297d4 + 4),0x90);
      debug_printf(s_app_setting____________app_setti_000297d7 + 1,0x90);
      piVar1 = DAT_000297d0;
      if (*(char *)(DAT_000297d0 + 1) == '\x03') {
        iVar3 = FUN_00029744();
        if (iVar3 == *piVar1) {
          return 0;
        }
      }
      pcVar4 = s_app_setting____________APP_setti_00029844;
      goto LAB_000297ba;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (uVar2 < 0x90);
  pcVar4 = s_app_setting____________APP_data_s_00029808;
LAB_000297ba:
  FUN_000379cc(pcVar4);
  FUN_00029884();
  return 1;
}


/* ---- FUN_00029884 @ 00029884 ---- */

void FUN_00029884(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_000264be(DAT_00029950,0x90);
  puVar1 = DAT_00029950;
  *(undefined *)(DAT_00029950 + 1) = 3;
  puVar1[2] = 0xffffffff;
  FUN_00027988(DAT_00029950 + 3,s_12345678_00029954);
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
  *(undefined2 *)(puVar1 + 0xb) = 0x5dc;
  puVar1[0xc] = 0xffffff;
  *(undefined2 *)(puVar1 + 0xd) = 0x20;
  *(undefined2 *)((int)puVar1 + 0x36) = 0x1e;
  *(undefined2 *)(puVar1 + 0xe) = 0x18;
  *(undefined2 *)((int)puVar1 + 0x3a) = 0xf0;
  *(undefined2 *)(puVar1 + 0xf) = 0;
  *(undefined2 *)((int)puVar1 + 0x3e) = 400;
  *(undefined *)(puVar1 + 0x1e) = 1;
  *(undefined2 *)((int)puVar1 + 0x7a) = 1000;
  *(undefined2 *)(puVar1 + 0x1f) = 700;
  puVar1[0x20] = DAT_00029960;
  puVar1[0x10] = 0xffffff;
  puVar1[0x11] = 0xffffff;
  puVar1[0x1d] = 0xff0000;
  puVar1[0x12] = 0xffffff;
  *(undefined *)(puVar1 + 0x13) = 0;
  *(undefined *)((int)puVar1 + 0x4d) = 0;
  *(undefined *)((int)puVar1 + 0x4e) = 0;
  puVar1[0x14] = 0xffffff;
  puVar1[0x15] = 0xffffff;
  puVar1[0x16] = 0xffffff;
  *(undefined *)(puVar1 + 0x17) = 0;
  *(undefined *)((int)puVar1 + 0x5d) = 0;
  *(undefined *)((int)puVar1 + 0x5e) = 0;
  puVar1[0x18] = 0xffffff;
  puVar1[0x19] = 0xffffff;
  puVar1[0x1a] = 0xff0000;
  puVar1[0x1b] = 0xffffff;
  puVar1[0x1c] = 0xffffff;
  *(undefined *)((int)puVar1 + 0x8e) = 0;
  uVar2 = FUN_00029744();
  *puVar1 = uVar2;
  *DAT_00029964 = 0;
  return;
}


/* ---- FUN_00029968 @ 00029968 ---- */

undefined4 FUN_00029968(void)

{
  if (*DAT_00029984 != '\x02') {
    *DAT_00029984 = '\x01';
    FUN_000393dc();
    return 1;
  }
  return 0;
}


/* ---- FUN_00029988 @ 00029988 ---- */

undefined4 FUN_00029988(void)

{
  return *DAT_00029990;
}


/* ---- FUN_00029994 @ 00029994 ---- */

undefined4 FUN_00029994(int *param_1,undefined param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(DAT_000299b8 + 2) != '\0') {
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


/* ---- FUN_000299bc @ 000299bc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000299bc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  iVar1 = DAT_00029a2c;
  _DAT_e000e180 = 0x20000;
  *(undefined4 *)(DAT_00029a2c + 0x348) = 0x10000;
  *(undefined4 *)(iVar1 + 0x308) = 0x10000;
  *(undefined4 *)(iVar1 + 4) = 1;
  FUN_00034320(0x2f);
  *(undefined4 *)(iVar1 + 8) = 1;
  puVar2 = DAT_00029a30;
  *(undefined4 *)(DAT_00029a30 + 8) = 0;
  FUN_00034320(0x2f);
  puVar3 = DAT_00029a34;
  puVar2[2] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0x19;
  *(undefined4 *)(puVar2 + 4) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_00026f98(0x14);
  FUN_00026fda(0x14,0);
  FUN_00026fae(0x14);
  *DAT_00029a38 = 0;
  FUN_00026fda(0x11,0);
  *(undefined4 *)(puVar2 + 8) = DAT_00029a38[-1];
  return 0;
}


/* ---- app_timer_start @ 00029a3c ---- */
/* ticks < 5 -> 7 */

/* ticks < 5 -> 7 */

undefined4 app_timer_start(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint local_28;
  undefined4 local_24;
  
  local_28 = param_3;
  local_24 = param_4;
  debug_printf(s_app_timer_start____d__d_00029ac8,param_1,param_2);
  iVar1 = DAT_00029ae4;
  if ((*(char *)(DAT_00029ae4 + 2) != '\0') && (param_1 != 0)) {
    if (param_2 < 5) {
      return 7;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar4 = param_2;
      if (*(char *)(param_1 + 0x11) != '\x01') {
        uVar4 = 0;
      }
      local_28 = local_28 & 0xffffff00;
      FUN_00029b34(&local_28);
      puVar3 = (undefined *)FUN_0003c9d0(&local_24);
      if (puVar3 != (undefined *)0x0) {
        *puVar3 = 1;
        puVar2 = DAT_00029ae8;
        *(int *)(puVar3 + 4) = param_1;
        *(undefined4 *)(puVar3 + 8) = *puVar2;
        *(uint *)(puVar3 + 0xc) = param_2;
        *(uint *)(puVar3 + 0x10) = uVar4;
        *(uint *)(puVar3 + 0x14) = param_3;
        *(undefined *)(iVar1 + 1) = (undefined)local_24;
        FUN_00029b7c(local_28 & 0xff);
        FUN_00026fc4(0x14);
        return 0;
      }
      FUN_00029b7c(local_28 & 0xff);
      return 4;
    }
  }
  return 8;
}


/* ---- FUN_00029aec @ 00029aec ---- */

undefined4 FUN_00029aec(int param_1)

{
  undefined4 uVar1;
  
  debug_printf(s_app_timer_stop____d_00029b18,param_1);
  if (((*(char *)(DAT_00029b30 + 2) != '\0') && (param_1 != 0)) && (*(int *)(param_1 + 0x14) != 0))
  {
    *(undefined *)(param_1 + 0x10) = 0;
    uVar1 = FUN_0003aabc(param_1,2);
    return uVar1;
  }
  return 8;
}


/* ---- FUN_00029b34 @ 00029b34 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00029b34(undefined *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar2 = DAT_00029b74;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  if (DAT_00029b74[2] == 0) {
    DAT_00029b74[2] = 1;
    uVar3 = DAT_00029b78;
    *puVar2 = _DAT_e000e180 & DAT_00029b78;
    _DAT_e000e180 = uVar3;
    puVar2[1] = _DAT_e000e184;
    _DAT_e000e184 = 0xffffffff;
    *param_1 = 0;
  }
  else {
    *param_1 = 1;
  }
  if (iVar4 == 0) {
    enableIRQinterrupts();
  }
  return;
}


/* ---- FUN_00029b7c @ 00029b7c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00029b7c(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_00029bac[2] != 0) && (param_1 == 0)) {
    iVar2 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar2 = isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    _DAT_e000e100 = *DAT_00029bac;
    _DAT_e000e104 = DAT_00029bac[1];
    DAT_00029bac[2] = 0;
    if (iVar2 == 0) {
      enableIRQinterrupts();
    }
  }
  return;
}


/* ---- FUN_00029bdc @ 00029bdc ---- */

undefined4 FUN_00029bdc(code **param_1,int param_2,int *param_3)

{
  code cVar1;
  ushort uVar2;
  int iVar3;
  code **ppcVar4;
  
  if ((*(ushort *)(param_1 + 0x39) < *(ushort *)(param_1[0x34] + (int)param_1[0x40] * 0x10 + 8)) &&
     (*(ushort *)(param_1 + 0x39) < *(ushort *)(param_1 + 0x3f))) {
    iVar3 = *param_3;
    *param_3 = iVar3 + 1;
    cVar1 = *(code *)(param_2 + iVar3);
    uVar2 = *(ushort *)(param_1 + 0x39);
    *(ushort *)(param_1 + 0x39) = uVar2 + 1;
    param_1[0x41][uVar2] = cVar1;
  }
  if (((uint)*(ushort *)(param_1 + 0x39) != (uint)*(ushort *)(param_1 + 0x3f)) &&
     (*(ushort *)(param_1[0x34] + (int)param_1[0x40] * 0x10 + 8) - 1 !=
      (uint)*(ushort *)(param_1 + 0x39))) {
    return 6;
  }
  ppcVar4 = param_1 + 0x3f;
  iVar3 = FUN_00029c90(param_1,*ppcVar4,param_1[0x40],param_1[0x41]);
  if (iVar3 != 0) {
    param_1[0x41][*(ushort *)(param_1 + 0x39)] = (code)0x0;
  }
  if (*(ushort *)(param_1 + 0x39) < *(ushort *)ppcVar4) {
    return 7;
  }
  iVar3 = FUN_00029c90(param_1,*ppcVar4,param_1[0x40],param_1[0x41]);
  if (iVar3 != 0) {
    (**param_1)(param_1 + 0x3b);
  }
  iVar3 = FUN_00028aba(param_1);
  if (iVar3 != 0) {
    return 8;
  }
  return 3;
}


/* ---- FUN_00029c90 @ 00029c90 ---- */

char FUN_00029c90(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xd0) + param_3 * 0x10);
  if (cVar1 != '\x01') {
    cVar1 = '\0';
  }
  return cVar1;
}


/* ---- FUN_00029ca2 @ 00029ca2 ---- */

undefined4 FUN_00029ca2(code **param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_3;
  *param_3 = iVar1 + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x3f) | (uint)*(byte *)(param_2 + iVar1) << 8;
  *(short *)(param_1 + 0x3f) = (short)uVar2;
  *(undefined2 *)(param_1 + 0x39) = 0;
  if (uVar2 != 0) {
    if ((*(short *)(param_1[0x34] + (int)param_1[0x40] * 0x10 + 8) != 0) &&
       (*(int *)(param_1[0x34] + (int)param_1[0x40] * 0x10 + 0xc) != 0)) {
      return 6;
    }
    return 7;
  }
  iVar1 = FUN_00029c90(param_1,param_1[0x3f],param_1[0x40],param_1[0x41]);
  if (iVar1 != 0) {
    (**param_1)(param_1 + 0x3b);
  }
  iVar1 = FUN_00028aba(param_1);
  if (iVar1 != 0) {
    return 8;
  }
  return 3;
}


/* ---- FUN_00029d10 @ 00029d10 ---- */

void FUN_00029d10(short *param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined auStack_44 [4];
  undefined4 local_40;
  undefined auStack_3c [2];
  short local_3a;
  
  sVar1 = *param_1;
  bVar2 = false;
  FUN_0002b504(sVar1,*DAT_00029e44,0);
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1d) < 0) {
    iVar3 = FUN_00036074(sVar1 + 0x100,7,1,auStack_44);
    iVar6 = ((uint)(DAT_00029e48 - DAT_00029e4c) >> 3) * 0x10000 + 1;
    if (iVar3 == 0) {
      iVar3 = FUN_0002fa94(sVar1);
      if (iVar3 == 0xffff) {
        iVar3 = FUN_0002f968(local_40);
        if (iVar3 == 0xffff) {
          iVar3 = FUN_0003640c();
          if (iVar3 == 0xffff) {
            FUN_0003374c(iVar6,s_Could_not_allocate_new_peer_id_f_00029e54);
            iVar3 = 4;
            goto LAB_00029dc8;
          }
          FUN_0002fa54(sVar1,iVar3);
          bVar2 = true;
        }
        else {
          FUN_0002fa54(sVar1,iVar3);
          iVar4 = FUN_00028ac8(sVar1);
          if (iVar4 == 0) {
            FUN_00039928(sVar1);
            iVar4 = FUN_00028ac8(sVar1);
            if (iVar4 == 0) goto LAB_00029d32;
          }
        }
      }
      iVar4 = FUN_00036164(sVar1 + 0x100,7,iVar3);
      if (iVar4 != 0) {
        if (iVar4 != 0x86) {
          uVar5 = FUN_0003425c();
          FUN_00033772(iVar6,DAT_00029e88,uVar5,sVar1,iVar3);
          FUN_000399c8(sVar1,iVar4);
          FUN_00035dc4(param_1,0);
          if (!bVar2) {
            return;
          }
          FUN_0002fa68(iVar3);
          return;
        }
        FUN_0002648c(auStack_3c,DAT_00029e8c,0x18);
        local_3a = sVar1;
        FUN_0002df0c(auStack_3c);
      }
      uVar5 = 1;
      goto LAB_00029e24;
    }
    uVar5 = FUN_0003425c(iVar3);
    FUN_00033762(iVar6,DAT_00029e50,uVar5,sVar1);
LAB_00029dc8:
    FUN_000399c8(sVar1,iVar3);
  }
LAB_00029d32:
  uVar5 = 0;
LAB_00029e24:
  FUN_00035dc4(param_1,uVar5);
  return;
}


/* ---- aw9109_encode_wait @ 00029e90 ---- */

uint aw9109_encode_wait(uint param_1)

{
  uint uVar1;
  
  if (0x1fd < param_1) {
    uVar1 = param_1 >> 4;
  }
  else {
    uVar1 = (param_1 & 0x7fff) << 1;
  }
  return uVar1 | (uint)(0x1fd < param_1) << 10 | 0x3800;
}


/* ---- FUN_00029eb0 @ 00029eb0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00029eb0(void)

{
  FUN_00037ad8(s_____________aw9109_clear_pdn____00029ec4);
  _DAT_5000050c = 0x80;
  return;
}


/* ---- aw9109_prog_set_channel_blink @ 00029ee8 ---- */

undefined4
aw9109_prog_set_channel_blink
          (uint param_1,ushort param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  byte *pbVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((param_5 == 0) || (9 < param_1)) || (param_1 == 0)) {
    uVar5 = 0;
  }
  else {
    iVar6 = 0;
    uVar4 = 0;
    do {
      pbVar1 = (byte *)(param_5 + uVar4);
      uVar4 = uVar4 + 1 & 0xff;
      iVar6 = iVar6 + (uint)*pbVar1;
    } while (uVar4 < 0x2a);
    if (iVar6 == 0) {
      uVar4 = 1;
      do {
        iVar6 = param_5 + uVar4 * 2;
        uVar2 = (short)uVar4 * 0x100 + 0x100U | 0xa000;
        *(ushort *)(iVar6 + -2) = uVar2;
        uVar4 = uVar4 + 1 & 0xff;
        *(ushort *)(iVar6 + 0x12) = uVar2;
      } while (uVar4 < 10);
    }
    uVar2 = (short)param_1 * 0x100 + 0x100;
    iVar6 = param_5 + param_1 * 2;
    *(ushort *)(iVar6 + -2) = param_2 | uVar2 | 0xa000;
    *(ushort *)(iVar6 + 0x12) = uVar2 | 0xa000;
    uVar3 = aw9109_encode_wait(param_3);
    *(undefined2 *)(param_5 + 0x12) = uVar3;
    uVar3 = aw9109_encode_wait(param_4);
    *(undefined2 *)(param_5 + 0x26) = uVar3;
    *(undefined2 *)(param_5 + 0x28) = 0;
    uVar5 = 1;
  }
  return uVar5;
}


/* ---- FUN_00029f64 @ 00029f64 ---- */

undefined4
FUN_00029f64(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            undefined2 *param_7)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  
  if (param_7 == (undefined2 *)0x0) {
    uVar6 = 0;
  }
  else {
    *param_7 = 0xbf00;
    fVar9 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = (short)param_1 * 0x100 + 0x100;
    fVar10 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    uVar3 = uVar1 | (ushort)param_2;
    puVar8 = param_7 + param_1;
    fVar9 = fVar9 / fVar10;
    puVar8[9] = uVar3 | 0xe000;
    puVar8[0x1c] = uVar3 | 0xc000;
    fVar10 = DAT_0002a0d0;
    uVar12 = (undefined4)DAT_0002a0c0;
    uVar6 = (undefined4)((ulonglong)DAT_0002a0c0 >> 0x20);
    uVar13 = (undefined4)DAT_0002a0c8;
    uVar7 = (undefined4)((ulonglong)DAT_0002a0c8 >> 0x20);
    if ((int)fVar9 < 0x42000001) {
      uVar14 = FUN_000268e8(fVar9);
      uVar14 = FUN_0002667a((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12,uVar6);
      uVar5 = FUN_0002666e((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar13,uVar7);
      uVar14 = FUN_000279d8(uVar5);
      bVar2 = FUN_000268b6((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      uVar3 = bVar2 | uVar1 | 0x8000;
    }
    else {
      uVar5 = VectorFloatToUnsigned(fVar9 * DAT_0002a0d0 - 1.0,3);
      uVar3 = (ushort)uVar5 & 0xff | uVar1 | 0x8080;
    }
    *puVar8 = uVar3;
    fVar9 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar9 / fVar11;
    if ((int)fVar9 < 0x42000001) {
      uVar14 = FUN_000268e8(fVar9);
      uVar14 = FUN_0002667a((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12,uVar6);
      uVar6 = FUN_0002666e((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar13,uVar7);
      uVar14 = FUN_000279d8(uVar6);
      bVar2 = FUN_000268b6((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      puVar8[0x13] = uVar1 | bVar2 | 0x8000;
    }
    else {
      uVar6 = FUN_000268e8(fVar9 * fVar10 - 1.0);
      uVar14 = FUN_000279d8(uVar6);
      bVar2 = FUN_000268b6((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      puVar8[0x13] = uVar1 | bVar2 | 0x8080;
    }
    uVar4 = aw9109_encode_wait(param_3 + param_5 & 0xffff);
    param_7[0x13] = uVar4;
    uVar4 = aw9109_encode_wait(param_4 + param_6 & 0xffff);
    param_7[0x26] = uVar4;
    param_7[0x27] = 0;
    uVar6 = 1;
  }
  return uVar6;
}


/* ---- FUN_0002a0d4 @ 0002a0d4 ---- */

undefined4 FUN_0002a0d4(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  
  if (param_5 == 0) {
    uVar7 = 0;
  }
  else {
    iVar9 = 0;
    uVar8 = 0;
    do {
      pbVar1 = (byte *)(param_5 + uVar8);
      uVar8 = uVar8 + 1 & 0xff;
      iVar9 = iVar9 + (uint)*pbVar1;
    } while (uVar8 < 0x2a);
    if (iVar9 == 0) {
      uVar8 = 1;
      do {
        sVar2 = (short)uVar8;
        iVar9 = uVar8 * 2;
        uVar8 = uVar8 + 1 & 0xff;
        *(ushort *)(param_5 + iVar9 + 0x10) = sVar2 * 0x100 + 0x100U | 0xa000;
      } while (uVar8 < 10);
    }
    iVar9 = param_5 + param_1 * 2;
    fVar10 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    uVar4 = (short)param_1 * 0x100 + 0x100;
    uVar3 = uVar4 | (ushort)param_2;
    fVar11 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    *(ushort *)(iVar9 + 0x10) = uVar3 | 0xa000;
    fVar10 = fVar10 / fVar11;
    if ((int)fVar10 < 0x42000001) {
      uVar12 = FUN_000268e8(fVar10);
      uVar12 = FUN_0002667a((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)DAT_0002a1d0,
                            (int)((ulonglong)DAT_0002a1d0 >> 0x20));
      uVar7 = FUN_0002666e((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)DAT_0002a1d8,
                           (int)((ulonglong)DAT_0002a1d8 >> 0x20));
      uVar12 = FUN_000279d8(uVar7);
      bVar5 = FUN_000268b6((int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      *(ushort *)(iVar9 + -2) = uVar4 | bVar5 | 0x8000;
    }
    else {
      uVar7 = FUN_000268e8(fVar10 * DAT_0002a1e0 - 1.0);
      uVar12 = FUN_000279d8(uVar7);
      bVar5 = FUN_000268b6((int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      *(ushort *)(iVar9 + -2) = uVar4 | bVar5 | 0x8080;
    }
    *(ushort *)(iVar9 + 0x22) = uVar3 | 0xc000;
    uVar6 = aw9109_encode_wait(param_3 + param_4 & 0xffff);
    *(undefined2 *)(param_5 + 0x36) = uVar6;
    *(undefined2 *)(param_5 + 0x38) = 0;
    uVar7 = 1;
  }
  return uVar7;
}


/* ---- FUN_0002a1e4 @ 0002a1e4 ---- */

undefined4 FUN_0002a1e4(uint param_1,ushort param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  
  if (((param_4 != 0) && (param_1 < 10)) && (param_1 != 0)) {
    iVar5 = 0;
    uVar4 = 0;
    do {
      pbVar1 = (byte *)(param_4 + uVar4);
      uVar4 = uVar4 + 1 & 0xff;
      iVar5 = iVar5 + (uint)*pbVar1;
    } while (uVar4 < 0x2a);
    if (iVar5 == 0) {
      uVar4 = 1;
      do {
        sVar2 = (short)uVar4;
        iVar5 = uVar4 * 2;
        uVar4 = uVar4 + 1 & 0xff;
        *(ushort *)(param_4 + iVar5 + -2) = sVar2 * 0x100 + 0x100U | 0xa000;
      } while (uVar4 < 10);
    }
    *(ushort *)(param_4 + param_1 * 2 + -2) = (short)param_1 * 0x100 + 0x100U | param_2 | 0xa000;
    uVar3 = aw9109_encode_wait(param_3);
    *(undefined2 *)(param_4 + 0x12) = uVar3;
    *(undefined2 *)(param_4 + 0x14) = 0;
    return 1;
  }
  return 0;
}


/* ---- FUN_0002a24a @ 0002a24a ---- */

undefined4 FUN_0002a24a(ushort param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4 & 0xffff0000;
  iVar1 = FUN_0002a33c(0x55,&local_10);
  if (iVar1 != 0) {
    return 0;
  }
  if (param_2 == 1) {
    param_1 = (ushort)local_10 | param_1;
  }
  else {
    if (param_2 != 0) goto LAB_0002a27a;
    param_1 = (ushort)local_10 & ~param_1;
  }
  local_10 = CONCAT22(local_10._2_2_,param_1);
LAB_0002a27a:
  iVar1 = aw9109_write_reg16(0x55,local_10 & 0xffff);
  if (iVar1 != 0) {
    return 0;
  }
  return 1;
}


/* ---- thunk_FUN_00032a0c @ 0002a28e ---- */

void thunk_FUN_00032a0c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00032a28;
  if (param_1 != 0) {
    do {
      (*(code *)(iVar1 + 1))(64000);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* ---- FUN_0002a294 @ 0002a294 ---- */

void FUN_0002a294(void)

{
  FUN_00037ad8(s_aw9109_hardware_reset_0002a2c8);
  FUN_00029eb0();
  thunk_FUN_00032a0c(2);
  FUN_0002a6f0();
  *(undefined4 *)(DAT_0002a2e0 + 0x700) = 3;
  FUN_0002a6f0();
  thunk_FUN_00032a0c(2);
  thunk_FUN_00032a0c(2);
  return;
}


/* ---- FUN_0002a2e4 @ 0002a2e4 ---- */

undefined4 FUN_0002a2e4(void)

{
  int iVar1;
  
  FUN_00037ad8(s_aw9109_hw_init_0002a308);
  FUN_00032a2c(10);
  iVar1 = FUN_0002a7e4();
  if (iVar1 != 0) {
    return 1;
  }
  FUN_00037ad8(s_aw9109_hardware_init_failed__0002a318);
  return 0;
}


/* ---- FUN_0002a33c @ 0002a33c ---- */

undefined4 FUN_0002a33c(undefined4 param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  
  pcVar1 = DAT_0002a3ac;
  if (*DAT_0002a3ac == '\0') {
    *DAT_0002a3ac = '\x01';
    local_1c = param_4;
    FUN_0003b388();
    local_1c = CONCAT31(local_1c._1_3_,(char)param_1);
    FUN_00032b3a(DAT_0002a3b0,0x2c,&local_1c,1,0);
    uVar2 = FUN_00034f04(DAT_0002a3b0 + 4,0x2c,&local_1c,2);
    *param_2 = (ushort)((local_1c & 0xff) << 8) | (ushort)local_1c >> 8;
    FUN_00034dcc(DAT_0002a3b0 + 4);
    FUN_00034f6c(DAT_0002a3b0 + 4);
    *pcVar1 = '\0';
    FUN_00037ad8(s_aw9109_i2c_read__x_Add__x_data___0002a3b4,uVar2,param_1,*param_2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* ---- aw9109_write_reg16 @ 0002a3d8 ---- */

undefined4 aw9109_write_reg16(undefined param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  uint local_14;
  
  pcVar1 = DAT_0002a424;
  if (*DAT_0002a424 != '\0') {
    return 0;
  }
  *DAT_0002a424 = '\x01';
  local_14 = (uint)CONCAT12((char)param_2,CONCAT11((char)((uint)param_2 >> 8),param_1));
  FUN_0003b388();
  uVar2 = FUN_00032b3a(DAT_0002a428,0x2c,&local_14,3,0);
  FUN_00034dcc(DAT_0002a428 + 4);
  FUN_00034f6c(DAT_0002a428 + 4);
  *pcVar1 = '\0';
  return uVar2;
}


/* ---- FUN_0002a42c @ 0002a42c ---- */

longlong FUN_0002a42c(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_0002a724();
  iVar1 = FUN_0002a5cc();
  if (iVar1 == 0xb223) {
    iVar1 = FUN_0002a67c(2);
    if (iVar1 == 0) {
      pcVar2 = s_aw9109_init_set_mode_error_0002a4d4;
    }
    else {
      iVar1 = aw9109_write_reg16(0x52,0x8a);
      if (iVar1 == 0) {
        iVar1 = FUN_0002a550(0x7fc,1);
        if (iVar1 == 0) {
          pcVar2 = s_aw9109_init_led_enable_error_0002a4f0;
        }
        else {
          FUN_000264b0(&uStack_18,9,1);
          iVar1 = FUN_0002a5f0(&uStack_18);
          if (iVar1 == 0) {
            pcVar2 = s_aw9109_init_leds_output_error_0002a510;
          }
          else {
            iVar1 = FUN_0002a24a(0x7fc,0);
            if (iVar1 != 0) {
              return CONCAT44(uStack_18,1);
            }
            pcVar2 = s_aw9109_init_ctrl_source_error_0002a530;
          }
        }
      }
      else {
        pcVar2 = s_aw9109_init_write_8a_error_0002a4b8;
      }
    }
  }
  else {
    pcVar2 = s_aw9109_init_read_id_error_0002a49c;
  }
  FUN_00037ad8(pcVar2);
  return (ulonglong)uStack_18 << 0x20;
}


/* ---- FUN_0002a550 @ 0002a550 ---- */

undefined4 FUN_0002a550(ushort param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4 & 0xffff0000;
  iVar1 = FUN_0002a33c(0x50,&local_10);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      param_1 = (ushort)local_10 & ~param_1;
    }
    else {
      param_1 = (ushort)local_10 | param_1;
    }
    local_10 = CONCAT22(local_10._2_2_,param_1);
    iVar1 = aw9109_write_reg16(0x50,param_1);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


/* ---- FUN_0002a588 @ 0002a588 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0002a588(void)

{
  int iVar1;
  
  iVar1 = -((_DAT_50000504 << 0x18) >> 0x1f);
  FUN_00037ad8(s_________aw9109_pdn_is_high___d_0002a5a8,iVar1);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0002a5cc @ 0002a5cc ---- */

uint FUN_0002a5cc(void)

{
  int iVar1;
  uint in_r3;
  byte bVar2;
  uint local_10;
  
  bVar2 = 0;
  local_10 = in_r3 & 0xffff0000;
  do {
    iVar1 = FUN_0002a33c(0,&local_10);
    if (iVar1 == 0) {
      return local_10 & 0xffff;
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 5);
  return 0;
}


/* ---- FUN_0002a5f0 @ 0002a5f0 ---- */

undefined4 FUN_0002a5f0(byte *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  iVar1 = FUN_0002a33c(0x57,&local_18);
  if (((iVar1 == 0) && (iVar1 = FUN_0002a33c(0x58,(int)&local_18 + 2), iVar1 == 0)) &&
     (iVar1 = FUN_0002a33c(0x59,&local_14), iVar1 == 0)) {
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


/* ---- FUN_0002a67c @ 0002a67c ---- */

undefined4 FUN_0002a67c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    debug_printf(s____AW9109_MODE_SHUTDOWN____0002a6d4);
    FUN_00029eb0();
  }
  else {
    if (param_1 == 1) {
      iVar1 = FUN_0002a588();
      if (iVar1 == 0) {
        FUN_0002a6f0();
        thunk_FUN_00032a0c(5);
        return 1;
      }
      uVar2 = 0;
    }
    else {
      if (param_1 != 2) {
        return 0;
      }
      iVar1 = FUN_0002a588();
      if (iVar1 == 0) {
        FUN_0002a6f0();
        thunk_FUN_00032a0c(5);
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


/* ---- FUN_0002a6f0 @ 0002a6f0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002a6f0(void)

{
  FUN_00037ad8(s_____________aw9109_set_pdn___0002a704);
  _DAT_50000508 = 0x80;
  return;
}


/* ---- FUN_0002a724 @ 0002a724 ---- */

bool FUN_0002a724(void)

{
  int iVar1;
  
  FUN_0002a294();
  FUN_00037ad8(s_aw9109_software_reset_0002a75c);
  aw9109_write_reg16(0,0x55aa);
  FUN_00032a2c(5);
  iVar1 = aw9109_write_reg16(0,0x55aa);
  FUN_00032a2c(5);
  return iVar1 != 0;
}


/* ---- aw9109_load_program @ 0002a774 ---- */

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


/* ---- aw9109_run_program @ 0002a7bc ---- */

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


/* ---- FUN_0002a7e4 @ 0002a7e4 ---- */

undefined4 FUN_0002a7e4(void)

{
  FUN_00037ad8(s_aw9109_support_init_0002a800);
  FUN_000332c0(7);
  FUN_0002a6f0();
  FUN_00032a0c(2);
  return 1;
}


/* ---- FUN_0002a818 @ 0002a818 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002a818(void)

{
  undefined uVar1;
  int iVar2;
  
  *(undefined4 *)(DAT_0002a84c + 0x700) = 0xc;
  uVar1 = FUN_0002f344();
  *(undefined *)(_DAT_0002a850 + 9) = uVar1;
  iVar2 = FUN_00034540();
  if ((iVar2 == 0) && (iVar2 = FUN_000344d0(), iVar2 != 0)) {
    app_error_handler(iVar2,0x1fc,s__________battery_measure_c_0002a853 + 1);
  }
  FUN_0003bbb8();
  FUN_0003ca00();
  return;
}


/* ---- FUN_0002a908 @ 0002a908 ---- */

ushort ** FUN_0002a908(char *param_1,int param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  char cVar2;
  undefined uVar3;
  short sVar4;
  ushort **ppuVar5;
  uint uVar6;
  bool bVar7;
  ushort *local_28;
  uint uStack_24;
  
  ppuVar5 = (ushort **)0x0;
  uVar6 = (uint)*param_3;
  *param_3 = 0;
  local_28 = param_3;
  uStack_24 = param_4;
  if ((param_1[0x2d] != '\0') &&
     (ppuVar5 = (ushort **)FUN_0002b66c(param_2,param_3,uVar6), ppuVar5 != (ushort **)0x0)) {
    return ppuVar5;
  }
  if (param_1[2] == '\0') {
LAB_0002a97c:
    if (param_1[3] != '\0') {
      cVar2 = param_1[3];
      if (uVar6 < *param_3 + 3) goto LAB_0002a93e;
      *(undefined *)(param_2 + (uint)*param_3) = 2;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 1;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(char *)(param_2 + (uint)(ushort)(uVar1 + 1)) = cVar2;
      *param_3 = *param_3 + 1;
    }
    if (*(undefined **)(param_1 + 4) != (undefined *)0x0) {
      uVar3 = **(undefined **)(param_1 + 4);
      if (uVar6 < *param_3 + 3) goto LAB_0002a93e;
      *(undefined *)(param_2 + (uint)*param_3) = 2;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 10;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = uVar3;
      *param_3 = *param_3 + 1;
    }
    if (*(short *)(param_1 + 8) == 0) goto LAB_0002aa04;
    local_28 = param_3;
    uStack_24 = uVar6;
    ppuVar5 = (ushort **)FUN_0003d384(param_1 + 8,2,6,param_2);
    bVar7 = ppuVar5 == (ushort **)0x0;
LAB_0002aa02:
    do {
      if (!bVar7) {
        return ppuVar5;
      }
LAB_0002aa04:
      if ((*(short *)(param_1 + 0x10) != 0) &&
         (local_28 = param_3, uStack_24 = uVar6,
         ppuVar5 = (ushort **)FUN_0003d384(param_1 + 0x10,3,7,param_2), ppuVar5 != (ushort **)0x0))
      {
        return ppuVar5;
      }
      if ((*(short *)(param_1 + 0x18) != 0) &&
         (local_28 = param_3, uStack_24 = uVar6,
         ppuVar5 = (ushort **)FUN_0003d384(param_1 + 0x18,0x14,0x15,param_2),
         ppuVar5 != (ushort **)0x0)) {
        return ppuVar5;
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        ppuVar5 = (ushort **)FUN_0002d6a6(*(int *)(param_1 + 0x20),param_2,param_3,uVar6);
        bVar7 = ppuVar5 == (ushort **)0x0;
        if (!bVar7) goto LAB_0002aa02;
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        ppuVar5 = (ushort **)FUN_00031abc(*(int *)(param_1 + 0x24),param_2,param_3,uVar6);
        bVar7 = ppuVar5 == (ushort **)0x0;
        if (!bVar7) goto LAB_0002aa02;
      }
      if (param_1[0x2c] != '\0') {
        ppuVar5 = (ushort **)FUN_00039a1c(param_1,param_2,param_3,uVar6);
        bVar7 = ppuVar5 == (ushort **)0x0;
        if (!bVar7) goto LAB_0002aa02;
      }
      if (*param_1 == '\0') {
        return ppuVar5;
      }
      ppuVar5 = (ushort **)FUN_00031d30(param_1,param_2,param_3,uVar6);
      bVar7 = ppuVar5 == (ushort **)0x0;
    } while (!bVar7);
  }
  else {
    if (*param_3 + 4 <= uVar6) {
      software_interrupt(0x79);
      if (&local_28 != (ushort **)0x0) {
        return &local_28;
      }
      *(undefined *)(param_2 + (uint)*param_3) = 3;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0x19;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      sVar4 = FUN_0003bab4((uint)local_28 & 0xffff,(uint)(ushort)(uVar1 + 1) + param_2);
      *param_3 = sVar4 + *param_3;
      goto LAB_0002a97c;
    }
LAB_0002a93e:
    ppuVar5 = (ushort **)&HardFault;
  }
  return ppuVar5;
}


/* ---- FUN_0002aa8a @ 0002aa8a ---- */

int FUN_0002aa8a(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_c;
  
  local_c = param_4 & 0xffff0000;
  iVar1 = FUN_0002aaaa(param_1,param_2,&local_c,param_3);
  if (iVar1 != 0) {
    iVar1 = (local_c & 0xffff) + param_1;
  }
  return iVar1;
}


/* ---- FUN_0002aaaa @ 0002aaaa ---- */

short FUN_0002aaaa(int param_1,uint param_2,ushort *param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_1 != 0) && (param_3 != (ushort *)0x0)) {
    for (uVar1 = 0;
        ((uVar1 < *param_3 || (*(byte *)(param_1 + uVar1 + 1) != param_4)) && (uVar1 < param_2));
        uVar1 = uVar1 + 1 + (uint)*(byte *)(param_1 + uVar1) & 0xffff) {
    }
    if (uVar1 < param_2) {
      *param_3 = (short)uVar1 + 2;
      return *(byte *)(param_1 + uVar1) - 1;
    }
  }
  return 0;
}


/* ---- FUN_0002aae2 @ 0002aae2 ---- */

void FUN_0002aae2(int param_1,undefined param_2)

{
  *(undefined *)(param_1 + 0x30) = param_2;
  return;
}


/* ---- FUN_0002aae8 @ 0002aae8 ---- */

char * FUN_0002aae8(char *param_1,int param_2)

{
  char *pcVar1;
  
  if ((param_2 == 0) || (param_1 == (char *)0x0)) {
    pcVar1 = (char *)0xe;
  }
  else if ((((*(char *)(param_2 + 0x7a) == '\x01') && (*(char *)(param_2 + 0x98) == '\x01')) ||
           (*(int *)(param_2 + 0xa0) == 4)) || (*(int *)(param_2 + 0x9c) == 4)) {
    pcVar1 = (char *)0x7;
  }
  else {
    param_1[2] = '\0';
    FUN_0002648c(param_1 + 4,param_2 + 0x78,0x2c);
    param_1[0x30] = '\0';
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined2 *)(param_1 + 0x248) = 0xffff;
    *(char **)(param_1 + 0x244) = param_1 + 0x234;
    *(undefined4 *)(param_1 + 0x24a) = 0;
    *(undefined2 *)(param_1 + 0x24e) = 0;
    param_1[0x250] = '\0';
    if (*param_1 == '\0') {
      param_1[0x54] = -1;
    }
    *(char **)(param_1 + 0x234) = param_1 + 0x55;
    if (param_1[0x24] == '\x01') {
      *(undefined2 *)(param_1 + 0x238) = 0xee;
    }
    else {
      *(undefined2 *)(param_1 + 0x238) = 0x1f;
    }
    pcVar1 = (char *)FUN_0002a908(param_2,param_1 + 0x55,param_1 + 0x238);
    if (pcVar1 == (char *)0x0) {
      if (param_2 == -0x3c) {
        *(undefined4 *)(param_1 + 0x23c) = 0;
        *(undefined2 *)(param_1 + 0x240) = 0;
      }
      else {
        *(char **)(param_1 + 0x23c) = param_1 + 0x143;
        if (param_1[0x24] == '\x01') {
          *(undefined2 *)(param_1 + 0x240) = 0xee;
        }
        else {
          *(undefined2 *)(param_1 + 0x240) = 0x1f;
        }
        pcVar1 = (char *)FUN_0002a908(param_2 + 0x3c,param_1 + 0x143,param_1 + 0x240);
        if (pcVar1 != (char *)0x0) {
          return pcVar1;
        }
      }
      param_1[0x51] = '\x01';
      *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x18);
      param_1[0x3c] = '\x01';
      *(undefined4 *)(param_1 + 0x40) = 0;
      param_1[0x50] = '\0';
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x14);
      pcVar1 = param_1 + 0x54;
      software_interrupt(0x72);
      if (pcVar1 == (char *)0x0) {
        *param_1 = '\x01';
      }
    }
  }
  return pcVar1;
}


/* ---- FUN_0002ac70 @ 0002ac70 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_0002ac70(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  debug_printf(s_ble_advertising_start__d_0002aed4);
  bVar6 = *DAT_0002aef0 == '\0';
  do {
    if (!bVar6) goto LAB_0002aece;
    bVar6 = *DAT_0002aef4 == '\0';
  } while ((!bVar6) || (bVar6 = *_DAT_0002aef8 == '\0', !bVar6));
  if (*param_1 == '\0') {
    return &NMI;
  }
  param_1[2] = (char)param_2;
  *(undefined4 *)(param_1 + 0x24a) = 0;
  *(undefined2 *)(param_1 + 0x24e) = 0;
  param_1[0x250] = '\0';
  if (((param_1[6] != '\0') && (param_2 == 1)) ||
     ((param_1[7] != '\0' && ((param_2 == 1 || (param_2 == 2)))))) {
    if (*(code **)(param_1 + 0x34) == (code *)0x0) {
      param_1[0x251] = '\0';
    }
    else {
      param_1[0x251] = '\x01';
      (**(code **)(param_1 + 0x34))(8);
    }
  }
  uVar2 = 0;
  do {
    if (param_1[uVar2 + 0x24b] != '\0') {
      bVar6 = true;
      goto LAB_0002acf0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  bVar6 = false;
LAB_0002acf0:
  if (param_2 == 1) {
    if (((param_1[6] == '\0') || (param_1[0x24] != '\0')) || (!bVar6)) goto LAB_0002ad1a;
    cVar1 = '\x01';
  }
  else if (param_2 == 2) {
LAB_0002ad1a:
    if ((param_1[7] == '\0') || (!bVar6)) goto LAB_0002ad24;
    cVar1 = '\x02';
  }
  else if (param_2 == 3) {
LAB_0002ad24:
    if (param_1[8] == '\0') goto LAB_0002ad2c;
    cVar1 = '\x03';
  }
  else {
    if (param_2 == 4) {
LAB_0002ad2c:
      if (param_1[9] != '\0') {
        cVar1 = '\x04';
        goto LAB_0002ad36;
      }
    }
    cVar1 = '\0';
  }
LAB_0002ad36:
  param_1[2] = cVar1;
  if ((((*(code **)(param_1 + 0x34) == (code *)0x0) || ((cVar1 != '\x03' && (cVar1 != '\x04')))) ||
      (param_1[5] == '\0')) || (param_1[0x252] != '\0')) {
    param_1[0x253] = '\0';
  }
  else {
    param_1[0x254] = '\0';
    param_1[0x253] = '\x01';
    (**(code **)(param_1 + 0x34))(7);
  }
  pcVar3 = param_1 + 0x3c;
  FUN_000264be(pcVar3,0x18);
  param_1[0x3c] = '\x01';
  iVar4 = FUN_00036742(param_1 + 0x2c);
  if (iVar4 == 0) {
    param_1[0x51] = '\x01';
  }
  else {
    param_1[0x51] = param_1[0x2c];
  }
  if (param_1[0x24] != '\0') {
    iVar4 = FUN_00036742(param_1 + 0x2c);
    if (iVar4 == 0) {
      param_1[0x52] = '\x01';
    }
    else {
      param_1[0x52] = param_1[0x28];
    }
  }
  param_1[0x50] = '\0';
  switch(param_1[2]) {
  case '\0':
    param_1[0x31] = '\0';
    goto LAB_0002aeb8;
  case '\x01':
    param_1[0x31] = '\x01';
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(char **)(param_1 + 0x40) = param_1 + 0x24a;
    *(undefined4 *)(param_1 + 0x44) = 0;
    param_1[0x3c] = '\x02';
    *(undefined2 *)(param_1 + 0x48) = 0x80;
    break;
  case '\x02':
    param_1[0x31] = '\x02';
    if (param_1[0x24] == '\0') {
      *pcVar3 = '\x03';
    }
    else {
      *pcVar3 = '\a';
    }
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(char **)(param_1 + 0x40) = param_1 + 0x24a;
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0xc);
    break;
  case '\x03':
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x14);
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x18);
    if (param_1[0x24] == '\0') {
      param_1[0x3c] = '\x01';
    }
    else {
      param_1[0x3c] = '\x06';
    }
    iVar4 = FUN_0003c450(param_1);
    if (iVar4 == 0) {
      param_1[0x31] = '\x03';
    }
    else {
      param_1[0x50] = '\x02';
      iVar4 = FUN_0002e564(param_1,4);
      if (iVar4 != 0) goto switchD_0002adbe_caseD_5;
      param_1[0x31] = '\x05';
    }
    goto LAB_0002ae80;
  case '\x04':
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x20);
    if (param_1[0x24] == '\0') {
      param_1[0x3c] = '\x01';
    }
    else {
      param_1[0x3c] = '\x06';
    }
    iVar4 = FUN_0003c450(param_1);
    if (iVar4 == 0) {
      param_1[0x31] = '\x04';
    }
    else {
      param_1[0x50] = '\x02';
      iVar4 = FUN_0002e564(param_1,4);
      if (iVar4 != 0) goto switchD_0002adbe_caseD_5;
      param_1[0x31] = '\x06';
    }
LAB_0002ae80:
    *(char **)(param_1 + 0x244) = param_1 + 0x234;
switchD_0002adbe_caseD_5:
    if (param_1[2] != '\0') break;
    goto LAB_0002aeb8;
  default:
    goto switchD_0002adbe_caseD_5;
  }
  pcVar5 = param_1 + 0x54;
  software_interrupt(0x72);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)(uint)(byte)param_1[0x54];
    software_interrupt(0x73);
    debug_printf(s_sd_ble_gap_adv_start__d_0002aefb + 1,pcVar5,pcVar3);
    if (pcVar5 == (char *)0x0) {
LAB_0002aeb8:
      if (*(int *)(param_1 + 0x34) != 0) {
        debug_printf(s_evt_handler__d_0002af18,param_1[0x31]);
        (**(code **)(param_1 + 0x34))(param_1[0x31]);
      }
LAB_0002aece:
      pcVar5 = (char *)0x0;
    }
  }
  return pcVar5;
}


/* ---- FUN_0002af2c @ 0002af2c ---- */

undefined4 FUN_0002af2c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  if (*(char *)(param_1 + 0x253) != '\0') {
    *(undefined *)(param_1 + 0x253) = 0;
    *(bool *)(param_1 + 0x254) = (param_3 | param_5) != 0;
    return 0;
  }
  return 8;
}


/* ---- FUN_0002af50 @ 0002af50 ---- */

void FUN_0002af50(int param_1)

{
  FUN_00033754(((uint)(DAT_0002af78 - DAT_0002af7c) >> 3) * 0x10000 + 3,
               s_Enable_Data_Source_notifications_0002af80,*(undefined2 *)(param_1 + 0x36));
  FUN_0002c48c(*(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x36),1);
  return;
}


/* ---- FUN_0002afbc @ 0002afbc ---- */

/* WARNING: Removing unreachable block (ram,0x0002b028) */
/* WARNING: Removing unreachable block (ram,0x0002b01a) */
/* WARNING: Removing unreachable block (ram,0x0002b036) */

int FUN_0002afbc(int *param_1,int *param_2)

{
  int iVar1;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (*param_2 == 0)) {
    iVar1 = 0xe;
  }
  else {
    *(undefined *)(param_1 + 0x37) = 0;
    param_1[0x38] = 0;
    *(undefined2 *)(param_1 + 0x39) = 0;
    param_1[0x3a] = 0;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined2 *)(param_1 + 2) = 0xffff;
    *(undefined2 *)(param_1 + 0xe) = 0x2902;
    *(undefined2 *)(param_1 + 10) = 0x2902;
    FUN_000264be((int)param_1 + 10,0x32);
    FUN_0003b758();
    software_interrupt(0x62);
    iVar1 = DAT_0002b054;
    if (DAT_0002b054 == 0) {
      iVar1 = 0x10;
      software_interrupt(0x62);
    }
  }
  return iVar1;
}


/* ---- FUN_0002b058 @ 0002b058 ---- */

void FUN_0002b058(int param_1)

{
  FUN_00033754(((uint)(DAT_0002b080 - DAT_0002b084) >> 3) * 0x10000 + 3,DAT_0002b088,
               *(undefined2 *)(param_1 + 0x26));
  FUN_0002c48c(*(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x26),1);
  return;
}


/* ---- FUN_0002b08c @ 0002b08c ---- */

void FUN_0002b08c(short *param_1,code **param_2)

{
  short sVar1;
  undefined local_78 [12];
  short local_6c;
  
  sVar1 = *param_1;
  if (sVar1 == 0x11) {
    if (*(short *)(param_2 + 2) == param_1[2]) {
      *(undefined2 *)(param_2 + 2) = 0xffff;
    }
  }
  else if (sVar1 == 0x38) {
    if (*(short *)(param_2 + 2) == param_1[2]) {
      if ((param_1[4] != 0) && (param_1[4] == *(short *)((int)param_2 + 0x1a))) {
        local_78[0] = 6;
        local_6c = param_1[3];
        (**param_2)(local_78);
      }
      FUN_0003b7c8();
      return;
    }
  }
  else if ((sVar1 == 0x39) && (param_1[2] == *(short *)(param_2 + 2))) {
    if (param_1[5] == *(short *)(param_2 + 9)) {
      FUN_00035e20(param_2,param_1 + 8,param_1[7]);
      return;
    }
    if (param_1[5] == *(short *)(param_2 + 0xd)) {
      FUN_00028d0c(param_2,param_1 + 8,param_1[7]);
      return;
    }
  }
  return;
}


/* ---- FUN_0002b11c @ 0002b11c ---- */

void FUN_0002b11c(code **param_1,char *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined local_90 [2];
  undefined2 local_8e;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined2 local_36;
  undefined2 local_34;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined2 local_26;
  undefined2 local_24;
  
  if (((*param_2 == '\0') && (*(short *)(param_2 + 4) == -0xbcf)) &&
     (param_2[6] == *(char *)(param_1 + 3))) {
    iVar4 = ((uint)(DAT_0002b208 - DAT_0002b20c) >> 3) * 0x10000 + 3;
    for (uVar3 = 0; uVar3 < (byte)param_2[8]; uVar3 = uVar3 + 1) {
      sVar1 = *(short *)(param_2 + uVar3 * 0x12 + 0xe);
      if (sVar1 == 0x120d) {
        FUN_0003374c(iVar4,s_Notification_point_Characteristi_0002b258);
        puVar2 = (undefined4 *)(param_2 + uVar3 * 0x12 + 0xe);
        local_3e = *puVar2;
        local_3a = puVar2[1];
        local_36 = *(undefined2 *)(puVar2 + 2);
        local_34 = *(undefined2 *)((int)puVar2 + 10);
      }
      else if (sVar1 == -0x3917) {
        FUN_0003374c(iVar4,s_Data_Source_Characteristic_found_0002b234);
        puVar2 = (undefined4 *)(param_2 + uVar3 * 0x12 + 0xe);
        local_2e = *puVar2;
        local_2a = puVar2[1];
        local_26 = *(undefined2 *)(puVar2 + 2);
        local_24 = *(undefined2 *)((int)puVar2 + 10);
      }
      else if (sVar1 == -0x270d) {
        FUN_0003374c(iVar4,s_Control_Point_Characteristic_fou_0002b210);
        puVar2 = (undefined4 *)(param_2 + uVar3 * 0x12 + 0xe);
        local_48 = *puVar2;
        local_44 = puVar2[1];
        local_40 = *(undefined2 *)(puVar2 + 2);
      }
    }
    local_90[0] = 0;
    local_8e = *(undefined2 *)(param_2 + 2);
  }
  else {
    local_90[0] = 1;
  }
  (**param_1)(local_90);
  return;
}


/* ---- FUN_0002b284 @ 0002b284 ---- */

undefined4 FUN_0002b284(int param_1,undefined4 param_2)

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
  
  FUN_000264be(&local_38,0x24);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  local_1e = *(undefined2 *)(param_1 + 0x1a);
  local_18 = local_34;
  local_20 = 1;
  local_1c = 0;
  local_34[0] = 0;
  iVar2 = FUN_0003babe(param_2,local_34 + 1);
  uVar4 = 0;
  iVar2 = iVar2 + 1;
  do {
    iVar5 = param_1 + uVar4 * 0x10;
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
  FUN_0003b768(&local_38);
  FUN_0003b7c8();
  return 0;
}


/* ---- FUN_0002b326 @ 0002b326 ---- */

undefined4 FUN_0002b326(int param_1)

{
  if ((*(byte *)(param_1 + 4) < 3) && (*(byte *)(param_1 + 6) < 0xc)) {
    return 0;
  }
  return 7;
}


/* ---- FUN_0002b33a @ 0002b33a ---- */

void FUN_0002b33a(undefined4 param_1,undefined4 param_2)

{
  FUN_00039830(param_2,0x14);
  return;
}


/* ---- FUN_0002b342 @ 0002b342 ---- */

void FUN_0002b342(undefined4 param_1,undefined4 param_2)

{
  FUN_000398ec(param_2,0xf);
  return;
}


/* ---- FUN_0002b34a @ 0002b34a ---- */

void FUN_0002b34a(undefined4 param_1,undefined4 param_2)

{
  FUN_000398c8(param_2,5);
  return;
}


/* ---- FUN_0002b352 @ 0002b352 ---- */

void FUN_0002b352(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000398c8(param_2,param_3);
  return;
}


/* ---- FUN_0002b35c @ 0002b35c ---- */

int FUN_0002b35c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0002fc9c();
  if (param_2 == (undefined4 *)0x0) {
    param_2 = DAT_0002b398;
  }
  iVar2 = 0x3002;
  if ((iVar1 != 0) && (software_interrupt(0x75), iVar2 = param_1, param_1 == 0)) {
    *(undefined *)(iVar1 + 9) = 0;
    *(undefined *)(iVar1 + 8) = 1;
    *(undefined4 *)(iVar1 + 10) = *param_2;
    *(undefined4 *)(iVar1 + 0xe) = param_2[1];
  }
  return iVar2;
}


/* ---- FUN_0002b39c @ 0002b39c ---- */

undefined4 * FUN_0002b39c(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  
  if (param_1 == (int *)0x0) {
    puVar4 = (undefined4 *)0xe;
  }
  else {
    FUN_0002648c(DAT_0002b3fc,param_1,0x1c);
    *DAT_0002b3fc = (int)DAT_0002b400;
    puVar4 = DAT_0002b400;
    puVar2 = (undefined4 *)*param_1;
    if (puVar2 == (undefined4 *)0x0) {
      software_interrupt(0x7b);
      if (DAT_0002b400 != (undefined4 *)0x0) {
        return DAT_0002b400;
      }
    }
    else {
      software_interrupt(0x7a);
      if (puVar2 != (undefined4 *)0x0) {
        return puVar2;
      }
      puVar2 = (undefined4 *)*param_1;
      *DAT_0002b400 = *puVar2;
      puVar4[1] = puVar2[1];
    }
    uVar1 = DAT_0002b404;
    ppiVar3 = (int **)(DAT_0002b3fc + -4);
    *(undefined2 *)(DAT_0002b3fc + -5) = 0xffff;
    *ppiVar3 = DAT_0002b3fc + -0xd;
    puVar4 = (undefined4 *)FUN_00029994(ppiVar3,0,uVar1);
    if (puVar4 != (undefined4 *)0x0) {
      return (undefined4 *)0x3;
    }
  }
  return puVar4;
}


/* ---- FUN_0002b408 @ 0002b408 ---- */

void FUN_0002b408(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0002b544();
  if (iVar1 != 0) {
    FUN_0003238a(DAT_0002b424,param_1);
    return;
  }
  return;
}


/* ---- FUN_0002b428 @ 0002b428 ---- */

void FUN_0002b428(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0003c584();
  if (iVar1 != 0) {
    FUN_0002e5bc(*(undefined4 *)(DAT_0002b450 + param_1 * 4 + 0x18),param_2,param_3);
    return;
  }
  return;
}


/* ---- FUN_0002b454 @ 0002b454 ---- */

void FUN_0002b454(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0002b544();
  if (iVar1 != 0) {
    FUN_0003238a(DAT_0002b470,param_1);
    return;
  }
  return;
}


/* ---- FUN_0002b474 @ 0002b474 ---- */

undefined4 FUN_0002b474(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0002b544();
  if (iVar1 != 0) {
    iVar1 = FUN_0003238a(DAT_0002b494,param_1);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}


/* ---- FUN_0002b498 @ 0002b498 ---- */

undefined4 FUN_0002b498(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0002b544();
  if (iVar1 != 0) {
    iVar1 = FUN_0003238a(DAT_0002b4b8,param_1);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}


/* ---- FUN_0002b4bc @ 0002b4bc ---- */

uint FUN_0002b4bc(void)

{
  uint uVar1;
  
  uVar1 = FUN_00032340(DAT_0002b4d0,0x18);
  if (uVar1 != 0x18) {
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}


/* ---- FUN_0002b4d4 @ 0002b4d4 ---- */

undefined4 FUN_0002b4d4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0003c584(param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_0002b544(param_1), iVar1 != 0)) {
    uVar2 = FUN_0003238a(DAT_0002b500 + param_2 * 4 + 0x18,param_1);
    return uVar2;
  }
  return 0;
}


/* ---- FUN_0002b504 @ 0002b504 ---- */

void FUN_0002b504(uint param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0003c584(param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_0002b544(param_1), iVar1 != 0)) {
    iVar1 = DAT_0002b540 + param_2 * 4 + 0x18;
    if (param_3 != 0) {
      FUN_00032406(iVar1 + (param_1 >> 5) * 4,1 << (param_1 & 0x1f));
      return;
    }
    FUN_000323d2(iVar1 + (param_1 >> 5) * 4,~(1 << (param_1 & 0x1f)));
    return;
  }
  return;
}


/* ---- FUN_0002b544 @ 0002b544 ---- */

undefined4 FUN_0002b544(uint param_1)

{
  undefined4 uVar1;
  
  if (0x13 < param_1) {
    return 0;
  }
  uVar1 = FUN_0003238a(DAT_0002b554,param_1);
  return uVar1;
}


/* ---- FUN_0002b558 @ 0002b558 ---- */

undefined4 FUN_0002b558(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = DAT_0002b590;
  if (param_1 == (undefined4 *)0x0) {
    return 0xe;
  }
  if (*DAT_0002b590 != '\0') {
    iVar2 = FUN_00038f78();
    if (iVar2 == 0) {
      uVar3 = *(uint *)(pcVar1 + 0xc);
      if (5 < uVar3) {
        return 4;
      }
      *(undefined4 *)(DAT_0002b594 + uVar3 * 4) = *param_1;
      *(uint *)(pcVar1 + 0xc) = uVar3 + 1;
    }
    return 0;
  }
  return 8;
}


/* ---- FUN_0002b598 @ 0002b598 ---- */

undefined4 FUN_0002b598(int param_1)

{
  undefined *puVar1;
  
  puVar1 = DAT_0002b5b0;
  if (param_1 != 0) {
    *(undefined4 *)(DAT_0002b5b0 + 0xc) = 0;
    *puVar1 = 1;
    *(int *)(puVar1 + 4) = param_1;
    *(undefined4 *)(puVar1 + 8) = 0;
    return 0;
  }
  return 0xe;
}


/* ---- FUN_0002b644 @ 0002b644 ---- */

undefined4 FUN_0002b644(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xe;
  }
  if ((*DAT_0002b668 != '\0') && (*(int *)(DAT_0002b668 + 0xc) != 0)) {
    if (*(char *)(param_1 + 0x2c7) != '\0') {
      return 0x11;
    }
    uVar1 = FUN_0002dc28();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_0002b66c @ 0002b66c ---- */

byte * FUN_0002b66c(int param_1,ushort *param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte local_18;
  undefined3 local_17;
  undefined uStack_14;
  undefined2 local_13;
  
  uStack_14 = (undefined)param_4;
  local_13 = (undefined2)((uint)param_4 >> 8);
  pbVar2 = &local_18;
  if (param_3 < *param_2 + 9) {
    pbVar2 = &HardFault;
  }
  else {
    software_interrupt(0x6d);
    if (pbVar2 == (byte *)0x0) {
      *(undefined *)(param_1 + (uint)*param_2) = 8;
      uVar1 = *param_2;
      *param_2 = uVar1 + 1;
      *(undefined *)(param_1 + (uint)(ushort)(uVar1 + 1)) = 0x1b;
      uVar1 = *param_2;
      *param_2 = uVar1 + 1;
      puVar3 = (undefined4 *)((uint)(ushort)(uVar1 + 1) + param_1);
      local_17 = (undefined3)(param_3 >> 8);
      *puVar3 = CONCAT13(uStack_14,local_17);
      *(undefined2 *)(puVar3 + 1) = local_13;
      uVar1 = *param_2;
      *param_2 = uVar1 + 6;
      local_18 = (byte)param_3;
      local_18 = local_18 >> 1;
      if (local_18 != 0) {
        local_18 = 1;
      }
      *(byte *)(param_1 + (uint)(ushort)(uVar1 + 6)) = local_18;
      *param_2 = *param_2 + 1;
      return (byte *)0x0;
    }
  }
  return pbVar2;
}


/* ---- FUN_0002b6cc @ 0002b6cc ---- */

void FUN_0002b6cc(undefined4 param_1,undefined4 param_2)

{
  FUN_0003986c(param_2);
  return;
}


/* ---- FUN_0002b6d2 @ 0002b6d2 ---- */

undefined4 FUN_0002b6d2(void)

{
  software_interrupt(0x3d);
  software_interrupt(0x3c);
  FUN_00033adc(2,0xb1);
  return 0;
}


/* ---- FUN_0002b6f4 @ 0002b6f4 ---- */

/* WARNING: Removing unreachable block (ram,0x0002b712) */
/* WARNING: Removing unreachable block (ram,0x0002b71a) */
/* WARNING: Removing unreachable block (ram,0x0002b730) */
/* WARNING: Removing unreachable block (ram,0x0002b734) */
/* WARNING: Removing unreachable block (ram,0x0002b74a) */
/* WARNING: Removing unreachable block (ram,0x0002b74e) */
/* WARNING: Removing unreachable block (ram,0x0002b764) */
/* WARNING: Removing unreachable block (ram,0x0002b768) */
/* WARNING: Removing unreachable block (ram,0x0002b77e) */
/* WARNING: Removing unreachable block (ram,0x0002b782) */
/* WARNING: Removing unreachable block (ram,0x0002b798) */
/* WARNING: Removing unreachable block (ram,0x0002b79c) */
/* WARNING: Removing unreachable block (ram,0x0002b7b2) */
/* WARNING: Removing unreachable block (ram,0x0002b7b6) */
/* WARNING: Removing unreachable block (ram,0x0002b7d4) */
/* WARNING: Removing unreachable block (ram,0x0002b7d8) */
/* WARNING: Removing unreachable block (ram,0x0002b7f0) */
/* WARNING: Removing unreachable block (ram,0x0002b7f4) */
/* WARNING: Removing unreachable block (ram,0x0002b818) */

undefined4 FUN_0002b6f4(void)

{
  software_interrupt(0xa8);
  return 1;
}


/* ---- FUN_0002b824 @ 0002b824 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002b824(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(DAT_0002b868 + 8) < 0x82) || (*(byte *)(DAT_0002b868 + 8) == 0xff)) {
    if (param_1 == 0) {
      return;
    }
    FUN_000378e8();
  }
  uVar1 = (uint)*(ushort *)(_DAT_0002b86c + 6);
  if (uVar1 != 0xffff) {
    uVar2 = CONCAT44(0x13,uVar1);
    software_interrupt(0x76);
    if (uVar1 != 0) {
      uVar2 = app_error_handler(uVar1,0x1c1,s__________user_ble_c_0002b86f + 1);
    }
    if (param_1 != 0) {
      FUN_000378e8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
      return;
    }
  }
  return;
}


/* ---- FUN_0002ba80 @ 0002ba80 ---- */

void FUN_0002ba80(short *param_1)

{
  code **ppcVar1;
  code *pcVar2;
  int iVar3;
  
  ppcVar1 = DAT_0002baec;
  if (*param_1 == 0x10) {
    if (((DAT_0002baec[1] == (code *)0x0) &&
        ((((iVar3 = FUN_0002c344(0,0,1), iVar3 != 0 && (iVar3 != 7)) ||
          ((iVar3 = FUN_0002c344(1,2,7), iVar3 != 0 && (iVar3 != 7)))) ||
         ((iVar3 = FUN_0002c344(0,2,4), iVar3 != 0 && (iVar3 != 7)))))) && (*ppcVar1 != (code *)0x0)
       ) {
      (**ppcVar1)();
    }
    ppcVar1[1] = ppcVar1[1] + 1;
  }
  else if (*param_1 == 0x11) {
    pcVar2 = DAT_0002baec[1] + -1;
    DAT_0002baec[1] = pcVar2;
    if (((pcVar2 == (code *)0x0) && (iVar3 = FUN_0002880e(), iVar3 != 0)) &&
       (*ppcVar1 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0002baa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar1)();
      return;
    }
  }
  return;
}


/* ---- FUN_0002bc80 @ 0002bc80 ---- */

void FUN_0002bc80(undefined4 param_1)

{
  if (*DAT_0002bca4 != '\0') {
    FUN_0002f768(param_1);
    FUN_00039ebc(param_1);
    FUN_0002f064(param_1);
    return;
  }
  return;
}


/* ---- FUN_0002bca8 @ 0002bca8 ---- */

ulonglong FUN_0002bca8(int param_1,undefined4 param_2,ushort *param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return CONCAT44(param_2,0xe);
  }
  debug_printf(s_sedFFA6__d_0002bd00,*param_3,param_3,param_4,param_3,param_4);
  if (*param_3 < 0x28) {
    FUN_00037aac(param_2);
  }
  iVar1 = *(ushort *)(param_1 + 0x34) - 0xffff;
  if (iVar1 != 0) {
    if (0xf4 < *param_3) {
      return CONCAT44(iVar1,7);
    }
    software_interrupt(0xac);
    return (ulonglong)CONCAT24(*(undefined2 *)(param_1 + 0x24),(uint)*(ushort *)(param_1 + 0x34));
  }
  return 8;
}


/* ---- FUN_0002bd10 @ 0002bd10 ---- */

/* WARNING: Removing unreachable block (ram,0x0002bd70) */
/* WARNING: Removing unreachable block (ram,0x0002bd86) */
/* WARNING: Removing unreachable block (ram,0x0002bd9c) */
/* WARNING: Removing unreachable block (ram,0x0002bdb2) */
/* WARNING: Removing unreachable block (ram,0x0002bdd0) */
/* WARNING: Removing unreachable block (ram,0x0002bde6) */
/* WARNING: Removing unreachable block (ram,0x0002bdc6) */

undefined4 * FUN_0002bd10(undefined *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 local_18;
  undefined local_16;
  
  puVar1 = &local_28;
  local_28 = *DAT_0002bdfc;
  uStack_24 = DAT_0002bdfc[1];
  uStack_20 = DAT_0002bdfc[2];
  uStack_1c = DAT_0002bdfc[3];
  if ((param_1 == (undefined *)0x0) || (param_2 == (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)0xe;
  }
  else {
    *(undefined2 *)(param_1 + 0x34) = 0xffff;
    *(undefined4 *)(param_1 + 0x38) = *param_2;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    software_interrupt(0x62);
    debug_printf(s_ble_nus_init_A__x_0002be00,&local_28);
    if (&stack0x00000000 == &Reserved4) {
      local_16 = *param_1;
      local_18 = 2;
      software_interrupt(0xa8);
      debug_printf(s_ble_nus_init_B__x_0002be14,1,param_1 + 2);
      puVar1 = (undefined4 *)0x1;
    }
  }
  return puVar1;
}


/* ---- FUN_0002bea0 @ 0002bea0 ---- */

undefined8 FUN_0002bea0(int param_1,int *param_2,ushort *param_3,undefined4 param_4)

{
  uint uVar1;
  int local_20;
  int *local_1c;
  ushort *local_18;
  undefined4 local_14;
  
  if (param_1 == 0) {
    uVar1 = 0xe;
  }
  else {
    local_20 = param_1;
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    debug_printf(s_sendToAPP_sed_ffa6__d_0002bf08,*param_3);
    if (*param_3 < 0x28) {
      FUN_00037aac(param_2);
    }
    param_2 = (int *)(*(ushort *)(param_1 + 0x44) - 0xffff);
    if ((param_2 == (int *)0x0) || (*(char *)(param_1 + 0x46) == '\0')) {
      uVar1 = 8;
    }
    else if (*param_3 < 0xf5) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x44);
      software_interrupt(0xae);
      param_2 = &local_20;
    }
    else {
      uVar1 = 7;
    }
  }
  return CONCAT44(param_2,uVar1);
}


/* ---- FUN_0002bf20 @ 0002bf20 ---- */

/* WARNING: Removing unreachable block (ram,0x0002bf6e) */
/* WARNING: Removing unreachable block (ram,0x0002bf7a) */
/* WARNING: Removing unreachable block (ram,0x0002bf86) */
/* WARNING: Removing unreachable block (ram,0x0002bf9c) */

undefined * FUN_0002bf20(int param_1,int param_2)

{
  undefined *puVar1;
  undefined local_28 [24];
  
  puVar1 = local_28;
  if ((param_1 == 0) || (param_2 == 0)) {
    puVar1 = (undefined *)0xe;
  }
  else {
    *(undefined2 *)(param_1 + 0x44) = 0xffff;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x20);
    *(undefined *)(param_1 + 0x46) = 0;
    software_interrupt(0x62);
    if (&stack0x00000000 == &Reserved4) {
      puVar1 = (undefined *)0x1;
      software_interrupt(0xa8);
    }
  }
  return puVar1;
}


/* ---- FUN_0002c09c @ 0002c09c ---- */

undefined4 FUN_0002c09c(void)

{
  return 0;
}


/* ---- FUN_0002c0a0 @ 0002c0a0 ---- */

undefined8 FUN_0002c0a0(short *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined8 uVar2;
  short *local_18;
  int local_14;
  short *psStack_10;
  short *psStack_c;
  
  local_18 = param_1;
  local_14 = param_2;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    sVar1 = *param_1;
    if (sVar1 == 0x10) {
      sVar1 = param_1[2];
    }
    else {
      if (sVar1 != 0x11) {
        if (sVar1 == 0x50) {
          psStack_10 = (short *)param_3;
          psStack_c = (short *)param_4;
          uVar2 = ble_bond_service_on_write();
          return uVar2;
        }
        if (sVar1 == 0x57) {
          local_18 = *DAT_0002c0f0;
          psStack_10 = DAT_0002c0f0[2];
          psStack_c = DAT_0002c0f0[3];
          (**(code **)(param_2 + 0x38))(&local_18);
        }
        goto LAB_0002c0d6;
      }
      sVar1 = -1;
    }
    *(short *)(param_2 + 0x34) = sVar1;
    return CONCAT44(param_2,param_1);
  }
LAB_0002c0d6:
  return CONCAT44(local_14,local_18);
}


/* ---- FUN_0002c0f4 @ 0002c0f4 ---- */

undefined8 FUN_0002c0f4(int param_1,int *param_2,ushort *param_3,undefined4 param_4)

{
  uint uVar1;
  int local_20;
  int *local_1c;
  ushort *local_18;
  undefined4 local_14;
  
  if (param_1 == 0) {
    uVar1 = 0xe;
  }
  else {
    local_20 = param_1;
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    debug_printf(s_sendToAPP_sedFFA5__d_0002c158,*param_3);
    if (*param_3 < 0x28) {
      FUN_00037aac(param_2);
    }
    param_2 = (int *)(*(ushort *)(param_1 + 0x34) - 0xffff);
    if ((param_2 == (int *)0x0) || (*(char *)(param_1 + 0x37) == '\0')) {
      uVar1 = 8;
    }
    else if (*param_3 < 0xf5) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x34);
      software_interrupt(0xae);
      param_2 = &local_20;
    }
    else {
      uVar1 = 7;
    }
  }
  return CONCAT44(param_2,uVar1);
}


/* ---- FUN_0002c170 @ 0002c170 ---- */

undefined8 FUN_0002c170(int param_1,int *param_2,ushort *param_3,undefined4 param_4)

{
  uint uVar1;
  int local_20;
  int *local_1c;
  ushort *local_18;
  undefined4 local_14;
  
  if (param_1 == 0) {
    uVar1 = 0xe;
  }
  else {
    local_20 = param_1;
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    debug_printf(s_sendToAPP_sedFFA4__d_0002c1d4,*param_3);
    if (*param_3 < 0x28) {
      FUN_00037aac(param_2);
    }
    param_2 = (int *)(*(ushort *)(param_1 + 0x34) - 0xffff);
    if ((param_2 == (int *)0x0) || (*(char *)(param_1 + 0x36) == '\0')) {
      uVar1 = 8;
    }
    else if (*param_3 < 0xf5) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x34);
      software_interrupt(0xae);
      param_2 = &local_20;
    }
    else {
      uVar1 = 7;
    }
  }
  return CONCAT44(param_2,uVar1);
}


/* ---- FUN_0002c1ec @ 0002c1ec ---- */

void FUN_0002c1ec(undefined2 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_000264d4(param_2);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = param_2;
  return;
}


/* ---- FUN_0002c1fe @ 0002c1fe ---- */

byte FUN_0002c1fe(byte *param_1)

{
  return *param_1 & 1;
}


/* ---- FUN_0002c208 @ 0002c208 ---- */

void FUN_0002c208(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 local_8 [2];
  
  local_8[0] = in_r3;
  iVar1 = FUN_00034094();
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x53f,DAT_0002c248);
  }
  local_8[0] = 0;
  iVar1 = FUN_00033d5c(1,local_8);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x547,DAT_0002c248);
  }
  iVar1 = FUN_00033e7c(local_8);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x54b,DAT_0002c248);
  }
  return;
}


/* ---- ffa6_on_write @ 0002c274 ---- */
/* [0x10] (len 1) -> sends "ABCD"; [0x88,len,frame,len,frame..] -> batch; else process_app_cmd */

/* [0x10] (len 1) -> sends "ABCD"; [0x88,len,frame,len,frame..] -> batch; else process_app_cmd */

void ffa6_on_write(char *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  FUN_000379cc(s_appcmd_rev__d_0002c2cc);
  FUN_000379f0(param_1,param_2);
  if ((param_2 == 1) && (*param_1 == '\x10')) {
    FUN_00029638(0,0,DAT_0002c2dc);
  }
  if (*param_1 != -0x78) {
    process_app_cmd(param_1,param_2);
    return;
  }
  iVar2 = 1;
  do {
    bVar1 = param_1[iVar2];
    process_app_cmd(param_1 + iVar2 + 1,(uint)bVar1);
    iVar2 = iVar2 + (uint)bVar1 + 1;
  } while (iVar2 < param_2);
  return;
}


/* ---- ffa2_auid_write @ 0002c2e0 ---- */

void ffa2_auid_write(undefined4 param_1,undefined4 param_2)

{
  FUN_000379cc(s_auid_rev__d_0002c300);
  FUN_000379f0(param_1,param_2);
  FUN_00038044(param_1,param_2);
  return;
}


/* ---- ffa1_token_write @ 0002c310 ---- */

void ffa1_token_write(undefined4 param_1,undefined4 param_2)

{
  FUN_000379cc(s_token_rev__d__>_0002c330);
  FUN_000379f0(param_1,param_2);
  FUN_0003885c(param_1,param_2);
  return;
}


/* ---- FUN_0002c344 @ 0002c344 ---- */

undefined4 FUN_0002c344(void)

{
  return 7;
}


/* ---- FUN_0002c348 @ 0002c348 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002c348(void)

{
  debug_printf(s_LED_POWER_INIT_0002c364);
  FUN_000332a0(6);
  _DAT_50000508 = 0x40;
  return;
}


/* ---- FUN_0002c378 @ 0002c378 ---- */

undefined4 FUN_0002c378(uint param_1,uint *param_2,int param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_20;
  
  local_20 = param_4 & 0xffffff00;
  FUN_00029b34(&local_20);
  puVar1 = DAT_0002c404;
  *param_2 = *DAT_0002c404;
  iVar2 = puVar1[2] - (*puVar1 - puVar1[1]);
  while (iVar2 + 1U < param_1 + 2) {
    FUN_000323c6(puVar1 + 0x107,1);
    uVar3 = FUN_000312d4();
    FUN_000323c6(puVar1 + 0x107,uVar3);
    iVar2 = puVar1[2] - (*puVar1 - puVar1[1]);
  }
  if (param_3 == 0) {
    uVar4 = param_1 << 0x16 | 6;
  }
  else {
    uVar4 = (param_1 & 0xf) << 6 | 5;
  }
  puVar1[(*puVar1 & puVar1[2]) + 3] = uVar4;
  *puVar1 = *puVar1 + param_1 + 2;
  FUN_00029b7c(local_20 & 0xff);
  return 1;
}


/* ---- FUN_0002c408 @ 0002c408 ---- */

void FUN_0002c408(int *param_1,undefined param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  *(undefined *)(*param_1 + iVar1) = param_2;
  if ((uint)param_1[1] <= (uint)param_1[2]) {
    FUN_00032b62();
    return;
  }
  return;
}


/* ---- FUN_0002c428 @ 0002c428 ---- */

undefined4 FUN_0002c428(void)

{
  if (DAT_0002c438[1] == *DAT_0002c438) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0002c43c @ 0002c43c ---- */

void FUN_0002c43c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  uVar1 = FUN_0002fa94();
  iVar2 = FUN_000362f8(uVar1,9,&uStack_10,0);
  if (iVar2 == 5) {
    FUN_0002b504(param_1,*(undefined *)(DAT_0002c460 + 5),1);
  }
  return;
}


/* ---- FUN_0002c48c @ 0002c48c ---- */

undefined4 FUN_0002c48c(undefined2 param_1,undefined2 param_2,undefined4 param_3)

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
  
  FUN_000264be(&local_38,0x24);
  local_18 = &local_34;
  local_1a = 2;
  local_1c = 0;
  local_20 = 1;
  local_34 = (undefined)param_3;
  local_36 = 2;
  local_33 = (undefined)((uint)param_3 >> 8);
  local_38 = param_1;
  local_1e = param_2;
  FUN_0003b768(&local_38);
  FUN_0003b7c8();
  return 0;
}


/* ---- FUN_0002c4dc @ 0002c4dc ---- */

void FUN_0002c4dc(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_0002c4f4;
  *(undefined4 *)(DAT_0002c4f4 + param_1 * 4) = 0xffffffff;
  if (7 < param_1) {
    *(undefined *)(param_1 + iVar1 + 0x48) = 0xff;
  }
  return;
}


/* ---- FUN_0002c4f8 @ 0002c4f8 ---- */

int FUN_0002c4f8(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = DAT_0002c53c;
  if (param_3 == 0) {
    uVar3 = 8;
    uVar4 = 0xc;
  }
  else {
    uVar3 = 0;
    uVar4 = 8;
  }
  while( true ) {
    if (uVar4 <= uVar3) {
      return -1;
    }
    if (*(int *)(DAT_0002c53c + uVar3 * 4) == -1) break;
    uVar3 = uVar3 + 1;
  }
  cVar1 = (char)uVar3;
  *(char *)(DAT_0002c53c + param_1 + 0x30) = cVar1;
  *(undefined4 *)(iVar2 + uVar3 * 4) = param_2;
  if (param_3 != 0) {
    return (int)cVar1;
  }
  *(char *)(iVar2 + uVar3 + 0x48) = (char)param_1;
  return (int)cVar1;
}


/* ---- FUN_0002c540 @ 0002c540 ---- */

int FUN_0002c540(int param_1)

{
  return (int)*(char *)(param_1 + DAT_0002c54c + 0x30);
}


/* ---- FUN_0002c550 @ 0002c550 ---- */

undefined8 FUN_0002c550(undefined2 param_1,int param_2,int param_3,undefined2 *param_4)

{
  byte local_58 [4];
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined local_3c [20];
  uint local_28;
  undefined2 local_24;
  undefined local_22;
  
  if (param_2 == 0) {
    app_error_handler(0,0x88,s___________________components_ble_0002c5f4);
  }
  if (param_3 == 0) {
    app_error_handler(0,0x89,s___________________components_ble_0002c5f4);
  }
  FUN_000264be(local_58,0x1c);
  local_4c = 0;
  local_58[0] = local_58[0] | 2;
  local_54 = 0;
  local_22 = 1;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_28 = (uint)CONCAT12(2,*param_4);
  local_24 = param_1;
  FUN_000264be(local_3c,0x14);
  software_interrupt(0xaa);
  return CONCAT44(local_58,(uint)*DAT_0002c634);
}


/* ---- FUN_0002c638 @ 0002c638 ---- */

undefined8 FUN_0002c638(undefined4 param_1,undefined4 param_2)

{
  undefined local_8 [8];
  
  software_interrupt(0x9d);
  return CONCAT44(local_8,param_2);
}


/* ---- FUN_0002c67a @ 0002c67a ---- */

void FUN_0002c67a(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_00039348();
    FUN_0002f2cc();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x14);
  return;
}


/* ---- FUN_0002c68e @ 0002c68e ---- */

uint FUN_0002c68e(uint param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0xffff;
  if (param_1 == 0xffff) {
    uVar1 = FUN_00032340(param_2,0x100);
    uVar2 = (uint)uVar1;
    if (uVar2 == 0x100) {
      return 0xffff;
    }
  }
  else if (param_1 < 0x100) {
    iVar3 = FUN_00032320(param_2,param_1);
    if (iVar3 == 1) {
      return 0xffff;
    }
    return param_1;
  }
  return uVar2;
}


/* ---- FUN_0002c6cc @ 0002c6cc ---- */

void FUN_0002c6cc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    puVar2 = (undefined4 *)(DAT_0002c6f0 + 8);
  }
  else {
    puVar2 = (undefined4 *)(DAT_0002c6f0 + 0x10);
  }
  while (puVar1 = (undefined4 *)*puVar2, puVar1 != (undefined4 *)0x0) {
    *puVar2 = *puVar1;
    (*(code *)puVar1[1])(param_1);
  }
  return;
}


/* ---- FUN_0002c710 @ 0002c710 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002c710(void)

{
  int iVar1;
  
  iVar1 = _DAT_0002c748;
  if (*DAT_0002c744 != '\0') {
    debug_printf(s_closeBLE_BLEconnect_0002c74b + 1);
    software_interrupt(0x76);
  }
  debug_printf(s_closeBLE__d_0002c764,*(undefined *)(iVar1 + 2));
  if (*(char *)(iVar1 + 2) != '\0') {
    software_interrupt(0x74);
    *(undefined *)(iVar1 + 2) = 0;
  }
  return;
}


/* ---- FUN_0002c778 @ 0002c778 ---- */

void FUN_0002c778(void)

{
  FUN_0003a6f8();
  FUN_000332b0(0xb);
  FUN_000332f6(0xb);
  FUN_000332b0(0x1c);
  FUN_000332f6(0x1c);
  FUN_000332b0(0x1b);
  FUN_000332f6(0x1b);
  FUN_000332b0(0x1a);
  FUN_000332f6(0x1a);
  return;
}


/* ---- FUN_0002c7b4 @ 0002c7b4 ---- */

void FUN_0002c7b4(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  puVar3 = DAT_0002c854;
  puVar2 = DAT_0002c850;
  iVar1 = DAT_0002c84c;
  if (*(uint **)(DAT_0002c84c + 4) != (uint *)0x0) {
    uVar7 = **(uint **)(DAT_0002c84c + 4);
    uVar5 = *DAT_0002c850;
    iVar8 = *(int *)(DAT_0002c84c + 8);
    uVar6 = (uVar5 - iVar8 & 0xffffff) + 3;
    if (*(char *)(DAT_0002c84c + 2) == '\0') {
      DAT_0002c854[0xd1] = 0x10000;
      puVar3[0xc1] = 0x10000;
      FUN_00026f98(0x11);
      FUN_00026fae(0x11);
      *puVar3 = 1;
      FUN_00034320(0x2f);
      *(undefined *)(iVar1 + 2) = 1;
    }
    if (uVar6 < uVar7) {
      uVar6 = uVar7;
    }
    puVar4 = DAT_0002c850 + 0xf;
    uVar6 = uVar6 + iVar8 & 0xffffff;
    *puVar4 = uVar6;
    if ((uVar6 - uVar5 & 0xffffff) < (*puVar2 - uVar5 & 0xffffff) + 3) {
      *puVar4 = *puVar2;
      FUN_00034320(0x2f);
      FUN_00026fc4(0x11);
      return;
    }
  }
  return;
}


/* ---- config_cmd_process @ 0002c858 ---- */
/* 0x27 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0x27 */

void config_cmd_process(byte *param_1)

{
  byte *pbVar1;
  ushort uVar2;
  undefined2 uVar3;
  byte bVar4;
  undefined uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  bVar6 = param_1[1];
  bVar4 = *param_1;
  if (bVar6 == 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 2;
  }
  *_DAT_0002cc50 = uVar5;
  debug_printf(s_config_cmd_process__x_0002cc53 + 1,bVar4);
  iVar8 = DAT_0002cc74;
  uVar7 = (uint)(DAT_0002cc6c - DAT_0002cc70) >> 3;
  iVar12 = uVar7 * 0x10000 + 3;
  if (bVar4 == 0x24) {
    if (bVar6 == 1) {
      debug_printf(DAT_0002d310,param_1[9]);
      debug_printf(s_______________data_>param_data_7_0002d314,param_1[9] == 0x80);
      bVar6 = param_1[9];
      if (bVar6 == 0x81) {
        FUN_0002fdac(param_1 + 2,DAT_0002d26c + -0x2a,4);
        *(undefined *)(iVar8 + 0x4c) = 1;
        FUN_00033754(iVar12,s_SYS_CONFIG_MSG_DOUBLETAP_COLOR___0002d354,
                     *(undefined4 *)(iVar8 + 0x50));
        uVar9 = *(undefined4 *)(iVar8 + 0x50);
        pcVar10 = DAT_0002d380;
      }
      else if (bVar6 == 0x82) {
        FUN_0002fdac(param_1 + 2,DAT_0002d26c + -0x26,4);
        *(undefined *)(iVar8 + 0x4d) = 1;
        FUN_00033754(iVar12,s_SYS_CONFIG_MSG_DOUBLETAP_COLOR___0002d354,
                     *(undefined4 *)(iVar8 + 0x54));
        uVar9 = *(undefined4 *)(iVar8 + 0x54);
        pcVar10 = DAT_0002d384;
      }
      else if (bVar6 == 0x83) {
        FUN_0002fdac(param_1 + 2,DAT_0002d26c + -0x22,4);
        *(undefined *)(iVar8 + 0x4e) = 1;
        FUN_00033754(iVar12,s_SYS_CONFIG_MSG_DOUBLETAP_COLOR___0002d354,
                     *(undefined4 *)(iVar8 + 0x58));
        uVar9 = *(undefined4 *)(iVar8 + 0x58);
        pcVar10 = DAT_0002d388;
      }
      else {
        if (bVar6 != 0x80) {
          if (bVar6 == 1) {
            *(undefined *)(iVar8 + 0x4c) = 0;
            return;
          }
          if (bVar6 != 2) {
            if (bVar6 != 3) {
              return;
            }
            *(undefined *)(iVar8 + 0x4e) = 0;
            return;
          }
          *(undefined *)(iVar8 + 0x4d) = 0;
          return;
        }
        FUN_0002fdac(param_1 + 2,DAT_0002d26c + -0x32,4);
        FUN_00033754(iVar12,s_SYS_CONFIG_MSG_DOUBLETAP_COLOR___0002d354,
                     *(undefined4 *)(iVar8 + 0x48));
        uVar9 = *(undefined4 *)(iVar8 + 0x48);
        pcVar10 = DAT_0002d38c;
      }
LAB_0002d3a0:
      debug_printf(pcVar10,uVar9);
      return;
    }
    if (bVar6 != 0x10) {
      return;
    }
    debug_printf(s_data_>param_data_7_____d_0002d2bc,param_1[9]);
    debug_printf(s_____________data_>param_data_7___0002d2d8,param_1[9] | 0x80);
    if ((param_1[9] & 0x7f) == 0) {
      iVar8 = FUN_0003c10c(0x24,*(undefined4 *)(iVar8 + 0x48));
      if (iVar8 == 0) {
        return;
      }
      local_38 = 0x543;
    }
    else {
      bVar6 = param_1[9] | 0x80;
      if (bVar6 == 0x81) {
        iVar8 = FUN_0003c10c(0x24,*(undefined4 *)(iVar8 + 0x50));
        if (iVar8 == 0) {
          return;
        }
        local_38 = 0x54a;
      }
      else if (bVar6 == 0x82) {
        iVar8 = FUN_0003c10c(0x24,*(undefined4 *)(iVar8 + 0x54));
        if (iVar8 == 0) {
          return;
        }
        local_38 = 0x551;
      }
      else if (bVar6 == 0x83) {
        iVar8 = FUN_0003c10c(0x24,*(undefined4 *)(iVar8 + 0x58));
        if (iVar8 == 0) {
          return;
        }
        local_38 = 0x558;
      }
      else {
        iVar8 = FUN_0003c10c(0x24,*(undefined4 *)(iVar8 + 0x48));
        if (iVar8 == 0) {
          return;
        }
        local_38 = 0x55f;
      }
    }
    goto LAB_0002ce76;
  }
  if (0x24 < bVar4) {
    if (bVar4 == 0x31) {
      if (bVar6 == 1) {
        bVar6 = param_1[2];
        if (bVar6 != 0) {
          bVar6 = 1;
        }
        *(byte *)(DAT_0002cc74 + 0x27) = bVar6;
        if (bVar6 != 0) {
          FUN_0002fdac(param_1 + 3,_DAT_0002d554 + -0x38,2);
          FUN_0002fdac(param_1 + 5,_DAT_0002d554 + -0x36,2);
          FUN_0002fdac(param_1 + 7,_DAT_0002d554 + -0x34,2);
          FUN_0002fdac(param_1 + 9,_DAT_0002d554 + -0x30,4);
        }
        local_34 = (uint)*(ushort *)(iVar8 + 0x2c);
        uVar2 = *(ushort *)(iVar8 + 0x2a);
        uVar3 = *(undefined2 *)(iVar8 + 0x28);
        uVar11 = *(undefined4 *)(iVar8 + 0x30);
        uVar9 = DAT_0002d644;
        goto LAB_0002d534;
      }
      if (bVar6 == 0x10) {
        iVar8 = FUN_0003bf24();
        bVar13 = iVar8 == 0;
        if (!bVar13) {
          local_38 = 0x600;
          goto LAB_0002ce76;
        }
      }
      else {
LAB_0002d3e6:
        if (bVar6 != 0x10) goto LAB_0002d3b0;
        iVar8 = FUN_0003c10c(0x27,*(undefined4 *)(DAT_0002cc74 + 0x68));
        bVar13 = iVar8 == 0;
      }
      if (!bVar13) {
        local_38 = 0x5a3;
        goto LAB_0002ce76;
      }
LAB_0002d3c0:
      if (bVar13) {
        return;
      }
      local_38 = 0x58f;
      goto LAB_0002ce76;
    }
    if (bVar4 < 0x32) {
      if (bVar4 == 0x28) {
        if (bVar6 == 1) {
          FUN_0002fdac(param_1 + 2,_DAT_0002d554 + 0xc,4);
          pcVar10 = s_SYS_CONFIG_CHARGING_COLOR___0x_x_0002d5cc;
          uVar7 = *(uint *)(iVar8 + 0x6c);
          goto LAB_0002d4c4;
        }
        if (bVar6 == 0x10) {
          iVar8 = FUN_0003c10c(0x28,*(undefined4 *)(DAT_0002cc74 + 0x6c));
          bVar13 = iVar8 == 0;
          if (!bVar13) {
            local_38 = 0x5b7;
            goto LAB_0002ce76;
          }
        }
        else {
LAB_0002d3b0:
          if (bVar6 != 0x10) {
            return;
          }
          iVar8 = FUN_0003c10c(0x26,*(undefined4 *)(DAT_0002cc74 + 100));
          bVar13 = iVar8 == 0;
        }
      }
      else {
        if (bVar4 < 0x29) {
          if (bVar4 == 0x25) {
            if (bVar6 == 1) {
              FUN_0002fdac(param_1 + 2,_DAT_0002d554,4);
              uVar9 = *(undefined4 *)(iVar8 + 0x60);
              pcVar10 = s_SYS_CONFIG_TOUCH_COLOR___0x_x__0002d557 + 1;
              goto LAB_0002d3a0;
            }
            if (bVar6 != 0x10) {
              return;
            }
            iVar8 = FUN_0003c10c(0x25,*(undefined4 *)(DAT_0002cc74 + 0x60));
            if (iVar8 == 0) {
              return;
            }
            local_38 = 0x57b;
            goto LAB_0002ce76;
          }
          if (bVar4 == 0x26) {
            if (bVar6 == 1) {
              FUN_0002fdac(param_1 + 2,_DAT_0002d554 + 4,4);
              pcVar10 = s_SYS_CONFIG_TOUCH_WARNING_COLOR___0002d57c;
              uVar7 = *(uint *)(iVar8 + 100);
              goto LAB_0002d4c4;
            }
            goto LAB_0002d3b0;
          }
          if (bVar4 == 0x27) {
            if (bVar6 == 1) {
              FUN_0002fdac(param_1 + 2,_DAT_0002d554 + 8,4);
              pcVar10 = s_SYS_CONFIG_ERROR_COLOR___0x_x__0002d5a8;
              uVar7 = *(uint *)(iVar8 + 0x68);
              goto LAB_0002d4c4;
            }
            goto LAB_0002d3e6;
          }
          goto switchD_0002c8aa_caseD_1a;
        }
        if (bVar4 == 0x29) {
          if (bVar6 == 1) {
            FUN_0002fdac(param_1 + 2,_DAT_0002d554 + 0x10,4);
            pcVar10 = s_SYS_CONFIG_CHARGE_DONE_COLOR___0_0002d5f0;
            uVar7 = *(uint *)(iVar8 + 0x70);
            goto LAB_0002d4c4;
          }
          if (bVar6 != 0x10) goto LAB_0002d3b0;
          iVar8 = FUN_0003c10c(0x29,*(undefined4 *)(DAT_0002cc74 + 0x70));
          bVar13 = iVar8 == 0;
          if (!bVar13) {
            local_38 = 0x5cb;
            goto LAB_0002ce76;
          }
        }
        else {
          if (bVar4 != 0x30) goto switchD_0002c8aa_caseD_1a;
          if (bVar6 == 1) {
            uVar7 = (uint)param_1[2];
            *(byte *)(DAT_0002cc74 + 0x26) = param_1[2];
            pcVar10 = s_SYS_CONFIG_ACCEL_SENSITIVITY_____0002d61b + 1;
            goto LAB_0002d4c4;
          }
          if (bVar6 != 0x10) goto LAB_0002d3b0;
          uVar5 = *(undefined *)(DAT_0002cc74 + 0x26);
          FUN_000264be(&local_38,0x14);
          local_38 = CONCAT31(local_38._1_3_,0x27);
          local_38._0_3_ = CONCAT12(0x30,(undefined2)local_38);
          local_38 = CONCAT13(0x10,(undefined3)local_38);
          local_34 = CONCAT31(local_34._1_3_,uVar5);
          iVar8 = FUN_0002b33a(_DAT_0002d618,&local_38);
          bVar13 = iVar8 == 0;
          if (!bVar13) {
            app_error_handler(iVar8,0x346,s__________app_misc_c_0002cc7b + 1);
            local_38 = 0x5dc;
            goto LAB_0002ce76;
          }
        }
      }
      goto LAB_0002d3c0;
    }
    if (bVar4 == 0x36) {
      FUN_000375ec();
      return;
    }
    if (0x36 < bVar4) {
      if (bVar4 == 0x37) {
        if (bVar6 == 1) {
          bVar6 = param_1[2];
          if (bVar6 == 1) {
            uVar9 = *(undefined4 *)(DAT_0002cc74 + 0x50);
          }
          else if (bVar6 == 2) {
            uVar9 = *(undefined4 *)(DAT_0002cc74 + 0x54);
          }
          else {
            if (bVar6 != 3) {
              return;
            }
            uVar9 = *(undefined4 *)(DAT_0002cc74 + 0x58);
          }
          *(undefined4 *)(DAT_0002cc74 + 0x48) = uVar9;
          return;
        }
        if (bVar6 != 0x10) {
          return;
        }
        iVar8 = *(int *)(DAT_0002cc74 + 0x48);
        if (iVar8 == *(int *)(DAT_0002cc74 + 0x50)) {
          iVar8 = FUN_0003c0b0(0x37,iVar8,1);
          if (iVar8 == 0) {
            return;
          }
          local_38 = 0x4dc;
        }
        else if (iVar8 == *(int *)(DAT_0002cc74 + 0x54)) {
          iVar8 = FUN_0003c0b0(0x37,iVar8,2);
          if (iVar8 == 0) {
            return;
          }
          local_38 = 0x4e3;
        }
        else if (iVar8 == *(int *)(DAT_0002cc74 + 0x58)) {
          iVar8 = FUN_0003c0b0(0x37,iVar8,3);
          if (iVar8 == 0) {
            return;
          }
          local_38 = 0x4ea;
        }
        else {
          iVar8 = FUN_0003c0b0(0x37,iVar8,0xff);
          if (iVar8 == 0) {
            return;
          }
          local_38 = 0x4f1;
        }
        goto LAB_0002ce76;
      }
      if (bVar4 == 0xef) {
        FUN_00029884();
        *_DAT_0002d648 = 1;
        FUN_0003374c(iVar12,s_SYS_CONFIG_RESET_CONFIG__0002d64b + 1);
        return;
      }
switchD_0002c8aa_caseD_1a:
      *_DAT_0002cc50 = 2;
      uVar5 = 0;
      goto LAB_0002c972;
    }
    if (bVar4 != 0x33) {
      if (bVar4 == 0x35) {
        debug_printf(s_SYS_CONFIG_FACTORY_MODE_0002ccaf + 1);
        if (*_DAT_0002e084 != '\0') {
          return;
        }
        *_DAT_0002e084 = '\x01';
        debug_printf(s____IN_TO_SLEEP_MODE_sleep_mode_e_0002e087 + 1);
        debug_printf(s____IN_TO_SLEEP_MODE_sleep_mode_e_0002e0c0);
        FUN_00037894();
        FUN_0003d2b8();
        FUN_0002c778();
        FUN_0002c710();
        return;
      }
      goto switchD_0002c8aa_caseD_1a;
    }
    if (bVar6 == 1) {
      pbVar1 = (byte *)(DAT_0002cc74 + 0x8e);
      *pbVar1 = param_1[2];
      debug_printf(s_app_settings_ancsEnable__d_0002cce8);
      bVar13 = *pbVar1 == 1;
      goto LAB_0002ca0e;
    }
    goto LAB_0002c9a2;
  }
  switch(bVar4) {
  case 0x11:
    if (bVar6 != 1) {
      if (bVar6 != 0x10) {
        return;
      }
      uVar9 = *(undefined4 *)(DAT_0002cc74 + 8);
      FUN_000264be(&local_38,0x14);
      local_38 = CONCAT31(local_38._1_3_,0x27);
      local_38._0_3_ = CONCAT12(0x11,(undefined2)local_38);
      local_38 = CONCAT13(0x10,(undefined3)local_38);
      local_34 = uVar9;
      iVar8 = FUN_0002b33a(_DAT_0002cc78,&local_38);
      if (iVar8 == 0) {
        return;
      }
      app_error_handler(iVar8,0x236,s__________app_misc_c_0002cc7b + 1);
      local_38 = 0x3b1;
      break;
    }
    uVar7 = *(uint *)(param_1 + 2);
    pcVar10 = s_Set_SYS_CONFIG_OUID____x__0002cc90;
    *(uint *)(DAT_0002cc74 + 8) = uVar7;
    goto LAB_0002ce5a;
  case 0x12:
    if (bVar6 != 1) {
      if (bVar6 != 0x10) {
        return;
      }
      FUN_000264be(&local_38,0x14);
      local_38 = CONCAT31(local_38._1_3_,0x27);
      local_38._0_3_ = CONCAT12(0x12,(undefined2)local_38);
      local_38 = CONCAT13(0x10,(undefined3)local_38);
      local_34 = *(undefined4 *)(iVar8 + 0xc);
      local_30 = *(undefined4 *)(iVar8 + 0x10);
      iVar8 = FUN_0002b33a(_DAT_0002cc78,&local_38);
      bVar13 = iVar8 == 0;
      goto LAB_0002ca54;
    }
    *(undefined4 *)(DAT_0002cc74 + 0xc) = *(undefined4 *)(param_1 + 2);
    *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(param_1 + 6);
    goto LAB_0002ce5e;
  case 0x13:
    if (bVar6 == 1) {
      uVar7 = (uint)param_1[2];
      *(byte *)(DAT_0002cc74 + 0x14) = param_1[2];
      pcVar10 = s_SYS_CONFIG_MAX_TOUCH_CNT____d__0002cd07 + 1;
LAB_0002d4c4:
      FUN_00033754(iVar12,pcVar10,uVar7);
      return;
    }
    goto LAB_0002ca7c;
  case 0x14:
    if (bVar6 == 1) {
      uVar7 = *(uint *)(param_1 + 2);
      pcVar10 = s_SYS_CONFIG_MIN_TOUCH_DURATION_____0002cd2c;
      *(uint *)(DAT_0002cc74 + 0x18) = uVar7;
      goto LAB_0002d4c4;
    }
LAB_0002cade:
    bVar13 = bVar6 == 0x10;
    if (!bVar13) {
LAB_0002ca0e:
      if (!bVar13) {
        return;
      }
      if (*(char *)(_DAT_0002cd04 + 4) != '\0') {
        return;
      }
      FUN_00038fc0();
      return;
    }
    uVar9 = *(undefined4 *)(DAT_0002cc74 + 0x18);
    FUN_000264be(&local_38,0x14);
    local_38 = CONCAT31(local_38._1_3_,0x27);
    local_38._0_3_ = CONCAT12(0x14,(undefined2)local_38);
    local_38 = CONCAT13(0x10,(undefined3)local_38);
    local_34 = uVar9;
    iVar8 = FUN_0002b33a(_DAT_0002cc78,&local_38);
    bVar13 = iVar8 == 0;
    goto LAB_0002cb06;
  case 0x15:
    if (bVar6 == 1) {
      uVar7 = *(uint *)(param_1 + 2);
      pcVar10 = s_SYS_CONFIG_MAX_TOUCH_DURATION_____0002cd54;
      *(uint *)(DAT_0002cc74 + 0x1c) = uVar7;
      goto LAB_0002d4c4;
    }
LAB_0002cb2c:
    if (bVar6 == 0x10) {
      uVar9 = *(undefined4 *)(DAT_0002cc74 + 0x1c);
      FUN_000264be(&local_38,0x14);
      local_38 = CONCAT31(local_38._1_3_,0x27);
      local_38._0_3_ = CONCAT12(0x15,(undefined2)local_38);
      local_38 = CONCAT13(0x10,(undefined3)local_38);
      local_34 = uVar9;
      iVar8 = FUN_0002b33a(_DAT_0002cc78,&local_38);
      bVar13 = iVar8 == 0;
      goto LAB_0002cb54;
    }
LAB_0002ca7c:
    if (bVar6 != 0x10) {
LAB_0002c9a2:
      if (bVar6 != 0x10) {
        return;
      }
      uVar5 = *(undefined *)(DAT_0002cc74 + 0x8e);
      FUN_000264be(&local_38,0x14);
      local_38 = CONCAT31(local_38._1_3_,0x27);
      local_38._0_3_ = CONCAT12(0x33,(undefined2)local_38);
      local_38 = CONCAT13(0x10,(undefined3)local_38);
      local_34 = CONCAT31(local_34._1_3_,uVar5);
      iVar8 = FUN_0002b33a(_DAT_0002cc78,&local_38);
      bVar13 = iVar8 == 0;
      goto LAB_0002c9cc;
    }
    uVar5 = *(undefined *)(DAT_0002cc74 + 0x14);
    FUN_000264be(&local_38,0x14);
    local_38 = CONCAT31(local_38._1_3_,0x27);
    local_38._0_3_ = CONCAT12(0x13,(undefined2)local_38);
    local_38 = CONCAT13(0x10,(undefined3)local_38);
    local_34 = CONCAT31(local_34._1_3_,uVar5);
    iVar8 = FUN_0002b33a(_DAT_0002cc78,&local_38);
    bVar13 = iVar8 == 0;
    goto LAB_0002caba;
  case 0x16:
    if (bVar6 == 1) {
      uVar7 = *(uint *)(param_1 + 2);
      pcVar10 = s_SYS_CONFIG_MESSAGE_TIMEOUT____d__0002cd7c;
      *(uint *)(DAT_0002cc74 + 0x20) = uVar7;
      goto LAB_0002d4c4;
    }
    if (bVar6 != 0x10) goto LAB_0002cade;
    uVar9 = *(undefined4 *)(DAT_0002cc74 + 0x20);
    FUN_000264be(&local_38,0x14);
    local_38 = CONCAT31(local_38._1_3_,0x27);
    local_38._0_3_ = CONCAT12(0x16,(undefined2)local_38);
    local_38 = CONCAT13(0x10,(undefined3)local_38);
    local_34 = uVar9;
    iVar8 = FUN_0002b33a(_DAT_0002cc78,&local_38);
    bVar13 = iVar8 == 0;
    if (!bVar13) {
      app_error_handler(iVar8,0x2c8,s__________app_misc_c_0002cc7b + 1);
      local_38 = 0x434;
      break;
    }
    goto LAB_0002caba;
  case 0x17:
    if (bVar6 == 1) {
      uVar7 = (uint)param_1[2];
      *(byte *)(DAT_0002cc74 + 0x24) = param_1[2];
      pcVar10 = s_SYS_CONFIG_LOW_BAT_THRESHOLD_____0002cda0;
      goto LAB_0002d4c4;
    }
    if (bVar6 != 0x10) goto LAB_0002cade;
    uVar5 = *(undefined *)(DAT_0002cc74 + 0x24);
    FUN_000264be(&local_38,0x14);
    local_38 = CONCAT31(local_38._1_3_,0x27);
    local_38._0_3_ = CONCAT12(0x17,(undefined2)local_38);
    local_38 = CONCAT13(0x10,(undefined3)local_38);
    local_34 = CONCAT31(local_34._1_3_,uVar5);
    iVar8 = FUN_0002b33a(_DAT_0002cc78,&local_38);
    bVar13 = iVar8 == 0;
    if (!bVar13) {
      app_error_handler(iVar8,0x2db,s__________app_misc_c_0002cc7b + 1);
      local_38 = 0x445;
      break;
    }
LAB_0002cb06:
    if (bVar13) {
LAB_0002ca54:
      if (bVar13) {
        return;
      }
      app_error_handler(iVar8,0x249,s__________app_misc_c_0002cc7b + 1);
      local_38 = 0x3f0;
    }
    else {
      app_error_handler(iVar8,0x29e,s__________app_misc_c_0002cc7b + 1);
      local_38 = 0x412;
    }
    break;
  case 0x18:
    if (bVar6 == 1) {
      uVar7 = (uint)param_1[2];
      *(byte *)(DAT_0002cc74 + 0x25) = param_1[2];
      pcVar10 = s_SYS_CONFIG_MOTOR_STRENGTH____d__0002d184;
      goto LAB_0002d4c4;
    }
    if (bVar6 != 0x10) goto LAB_0002cb2c;
    uVar5 = *(undefined *)(DAT_0002cc74 + 0x25);
    FUN_000264be(&local_38,0x14);
    local_38 = CONCAT31(local_38._1_3_,0x27);
    local_38._0_3_ = CONCAT12(0x18,(undefined2)local_38);
    local_38 = CONCAT13(0x10,(undefined3)local_38);
    local_34 = CONCAT31(local_34._1_3_,uVar5);
    iVar8 = FUN_0002b33a(_DAT_0002cc78,&local_38);
    bVar13 = iVar8 == 0;
    if (!bVar13) {
      app_error_handler(iVar8,0x2ee,s__________app_misc_c_0002cc7b + 1);
      local_38 = 0x456;
      break;
    }
LAB_0002cb54:
    if (!bVar13) {
      app_error_handler(iVar8,0x2b3,s__________app_misc_c_0002cc7b + 1);
      local_38 = 0x423;
      break;
    }
LAB_0002caba:
    if (bVar13) {
LAB_0002c9cc:
      if (bVar13) {
        return;
      }
      app_error_handler(iVar8,0x25b,s__________app_misc_c_0002cc7b + 1);
      debug_printf(s___S__failed___s___d__0002ccd0,DAT_0002cccc,s__________app_misc_c_0002cc7b + 1,
                   0x3de);
      return;
    }
    app_error_handler(iVar8,0x289,s__________app_misc_c_0002cc7b + 1);
    local_38 = 0x401;
    break;
  case 0x19:
    if (bVar6 != 1) {
LAB_0002cde0:
      if (bVar6 != 0x10) {
        return;
      }
      iVar8 = FUN_0003c03c();
      bVar13 = iVar8 == 0;
      goto LAB_0002cdea;
    }
    *(undefined2 *)(DAT_0002cc74 + 0x34) = *(undefined2 *)(param_1 + 2);
    *(undefined2 *)(iVar8 + 0x36) = *(undefined2 *)(param_1 + 4);
    *(undefined2 *)(iVar8 + 0x38) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)(iVar8 + 0x3a) = *(undefined2 *)(param_1 + 8);
    *(undefined2 *)(iVar8 + 0x3c) = *(undefined2 *)(param_1 + 10);
    *(undefined2 *)(iVar8 + 0x3e) = *(undefined2 *)(param_1 + 0xc);
    FUN_0003374c(iVar12,s_SYS_CONFIG_BLE_PARAM__0002d1a8);
    FUN_00033754(iVar12,s_fast_adv_interval____dms_0002d1c0,*(undefined2 *)(iVar8 + 0x34));
    FUN_00033754(iVar12,s_fast_adv_timout_sec____ds_0002d1dc,*(undefined2 *)(iVar8 + 0x36));
    FUN_00033754(iVar12,s_min_conn_interval____dms_0002d1f8,*(undefined2 *)(iVar8 + 0x38));
    FUN_00033754(iVar12,s_max_conn_interval____dms_0002d214,*(undefined2 *)(iVar8 + 0x3a));
    FUN_00033754(iVar12,s_ble_slave_latency____d_0002d230,*(undefined2 *)(iVar8 + 0x3c));
    uVar7 = (uint)*(ushort *)(iVar8 + 0x3e);
    pcVar10 = s_conn_sup_timeout____dms_0002d24c;
LAB_0002ce5a:
    FUN_00033754(iVar12,pcVar10,uVar7);
LAB_0002ce5e:
    uVar5 = 1;
LAB_0002c972:
    *_DAT_0002ccac = uVar5;
    return;
  default:
    goto switchD_0002c8aa_caseD_1a;
  case 0x21:
    if (bVar6 == 1) {
      bVar6 = param_1[2];
      if (bVar6 != 0) {
        bVar6 = 1;
      }
      *(byte *)(DAT_0002cc74 + 0x78) = bVar6;
      if (bVar6 != 0) {
        FUN_0002fdac(param_1 + 3,DAT_0002d26c,2);
        FUN_0002fdac(param_1 + 5,DAT_0002d26c + 2,2);
        FUN_0002fdac(param_1 + 7,DAT_0002d26c + 6,4);
        FUN_0002fdac(param_1 + 0xb,DAT_0002d26c + -6,4);
      }
      local_34 = *(uint *)(iVar8 + 0x80);
      uVar2 = *(ushort *)(iVar8 + 0x7c);
      uVar3 = *(undefined2 *)(iVar8 + 0x7a);
      uVar11 = *(undefined4 *)(iVar8 + 0x74);
      uVar9 = DAT_0002d270;
LAB_0002d534:
      local_38 = (uint)uVar2;
      FUN_00033784(iVar12,uVar9,uVar11,uVar3);
      return;
    }
    if (bVar6 != 0x10) goto LAB_0002cde0;
    iVar8 = FUN_0003bf8c();
    bVar13 = iVar8 == 0;
    if (!bVar13) {
      local_38 = 0x497;
      break;
    }
LAB_0002cdea:
    if (bVar13) {
      return;
    }
    local_38 = 0x473;
    break;
  case 0x22:
    if (bVar6 == 1) {
      FUN_0002fdac(param_1 + 2,DAT_0002d26c + -0x3a,4);
      pcVar10 = s_SYS_CONFIG_OOBE_COLOR___0x_x__0002d274;
      uVar7 = *(uint *)(iVar8 + 0x40);
      goto LAB_0002d4c4;
    }
    if (bVar6 != 0x10) {
      return;
    }
    iVar8 = FUN_0003c10c(0x22,*(undefined4 *)(DAT_0002cc74 + 0x40));
    if (iVar8 == 0) {
      return;
    }
    local_38 = 0x4ab;
    break;
  case 0x23:
    if (bVar6 == 1) {
      FUN_0002fdac(param_1 + 2,DAT_0002d26c + -0x36,4);
      pcVar10 = s_SYS_CONFIG_OOBE_PAIRED_COLOR___0_0002d294;
      uVar7 = *(uint *)(iVar8 + 0x44);
      goto LAB_0002d4c4;
    }
    if (bVar6 != 0x10) {
      return;
    }
    iVar8 = FUN_0003c10c(0x23,*(undefined4 *)(DAT_0002cc74 + 0x44));
    if (iVar8 == 0) {
      return;
    }
    local_38 = 0x4bf;
  }
LAB_0002ce76:
  FUN_00033772(uVar7 * 0x10000 + 1,s___S__failed___s___d__0002ccd0,DAT_0002d268,
               s__________app_misc_c_0002cc7b + 1);
  return;
}


/* ---- FUN_0002d668 @ 0002d668 ---- */

void FUN_0002d668(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_48;
  undefined2 auStack_44 [22];
  undefined4 uStack_18;
  int local_14;
  
  local_48 = 0;
  uStack_18 = param_1;
  local_14 = param_2;
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      iVar1 = FUN_0003238a(&local_14,uVar2);
      if (iVar1 != 0) {
        auStack_44[local_48] = (short)uVar2;
        local_48 = local_48 + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x14);
  }
  FUN_0002648c(param_1,&local_48,0x2c);
  return;
}


/* ---- FUN_0002d6a6 @ 0002d6a6 ---- */

undefined4 FUN_0002d6a6(ushort *param_1,int param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  
  if (param_4 < *param_3 + 6) {
    uVar4 = 0xc;
  }
  else {
    uVar1 = *param_1;
    uVar4 = 7;
    if (((5 < uVar1) &&
        ((((uVar1 < 0xc81 || (uVar1 == 0xffff)) && (uVar2 = param_1[1], 5 < uVar2)) &&
         ((uVar2 < 0xc81 || (uVar2 == 0xffff)))))) &&
       ((uVar1 == 0xffff || ((uVar2 == 0xffff || (uVar1 <= uVar2)))))) {
      *(undefined *)(param_2 + (uint)*param_3) = 5;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0x12;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      sVar3 = FUN_0003bab4(*param_1,(uint)(ushort)(uVar1 + 1) + param_2);
      uVar1 = *param_3;
      *param_3 = sVar3 + uVar1;
      sVar3 = FUN_0003bab4(param_1[1],(uint)(ushort)(sVar3 + uVar1) + param_2);
      *param_3 = sVar3 + *param_3;
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* ---- FUN_0002d74c @ 0002d74c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002d74c(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  
  iVar1 = _DAT_0002d7ac;
  local_18 = *(undefined4 *)(_DAT_0002d7ac + 8);
  FUN_00037a1c(s_conn_params_negotiation__d__d__d_0002d7af + 1,*(undefined *)(param_2 + 9),
               *(undefined *)(param_2 + 8),*(undefined4 *)(_DAT_0002d7ac + 4));
  if (*(char *)(param_2 + 9) == '\0') {
    if (*(char *)(param_2 + 8) == '\0') {
      uVar2 = *(uint *)(iVar1 + 4);
    }
    else {
      uVar2 = *(uint *)(iVar1 + 8);
    }
    FUN_00037a1c(s_update_params__d__d_0002d7d8,uVar2,uVar2 >> 0xf);
    iVar1 = app_timer_start(*(undefined4 *)(param_2 + 4),uVar2,param_1);
    if (iVar1 != 0) {
      FUN_0003994c();
      return;
    }
  }
  else {
    *(undefined *)(param_2 + 8) = 0;
    if (*(code **)(iVar1 + 0x14) != (code *)0x0) {
      local_18 = CONCAT31(local_18._1_3_,1);
      local_18 = CONCAT22((short)param_1,(undefined2)local_18);
      (**(code **)(iVar1 + 0x14))(&local_18);
    }
  }
  return;
}


/* ---- FUN_0002d7f0 @ 0002d7f0 ---- */

void FUN_0002d7f0(undefined4 param_1,undefined param_2,undefined2 param_3,undefined param_4)

{
  undefined auStack_30 [2];
  undefined2 local_2e;
  undefined local_28;
  undefined2 local_26;
  undefined local_24;
  
  FUN_0002648c(auStack_30,DAT_0002d82c,0x18);
  local_2e = (undefined2)param_1;
  local_28 = param_2;
  local_26 = param_3;
  local_24 = param_4;
  FUN_0002b504(param_1,*DAT_0002d830,0);
  FUN_0002df0c(auStack_30);
  return;
}


/* ---- FUN_0002d834 @ 0002d834 ---- */

void FUN_0002d834(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = DAT_0002d864;
  *(short *)(DAT_0002d864 + 4) = (short)param_1;
  *puVar1 = 5;
  FUN_00031cdc();
  *DAT_0002d868 = 0;
  if (*(char *)(DAT_0002d86c + 0x8e) == '\x01') {
    FUN_00027afc(param_1,param_2);
    return;
  }
  return;
}


/* ---- FUN_0002d870 @ 0002d870 ---- */

uint FUN_0002d870(int param_1,uint param_2,ushort *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 == (ushort *)0x0) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = (uint)*param_3;
  }
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    uVar1 = (uint)*(byte *)(param_1 + uVar2) ^ (uVar1 >> 8 | uVar1 << 8);
    uVar1 = uVar1 ^ (uVar1 << 0x18) >> 0x1c;
    uVar1 = uVar1 ^ uVar1 << 0xc;
    uVar1 = uVar1 & 0xffff ^ (uVar1 & 0xff) << 5;
  }
  return uVar1;
}


/* ---- FUN_0002d8a8 @ 0002d8a8 ---- */

int FUN_0002d8a8(int param_1,undefined2 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = 0;
  local_1c = CONCAT22(param_2,param_2);
  local_2c = 0;
  local_28 = 0;
  software_interrupt(0x90);
  if (param_1 != 0) {
    uVar1 = FUN_0003425c(param_1,&local_1c,&local_2c);
    iVar2 = ((uint)(DAT_0002d918 - DAT_0002d91c) >> 3) * 0x10000 + 1;
    FUN_00033762(iVar2,DAT_0002d920,param_1,uVar1);
    if (((local_2c & 0xffff) != 0) || (local_2c._2_2_ != 0)) {
      FUN_00033762(iVar2,s_The_requested_TX_RX_packet_lengt_0002d924,local_2c & 0xffff,
                   local_2c._2_2_);
    }
    if ((local_28 & 0xffff) != 0) {
      FUN_00033754(iVar2,DAT_0002d964);
    }
  }
  return param_1;
}


/* ---- FUN_0002d968 @ 0002d968 ---- */

void FUN_0002d968(undefined4 param_1)

{
  FUN_0002b11c(DAT_0002d984,param_1);
  FUN_0003283c(DAT_0002d984 + -0x20,param_1);
  return;
}


/* ---- FUN_0002d988 @ 0002d988 ---- */

void FUN_0002d988(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_000323fc(DAT_0002d9b4,1);
  DataMemoryBarrier(0x1f);
  if ((iVar1 == 0) && (iVar1 = FUN_000311c8(param_1), iVar1 == 0)) {
    DataMemoryBarrier(0x1f);
    *DAT_0002d9b4 = 0;
  }
  return;
}


/* ---- FUN_0002d9b8 @ 0002d9b8 ---- */

int FUN_0002d9b8(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint local_20;
  int local_1c;
  undefined2 *local_18;
  undefined4 local_14;
  
  if (param_1 == 0) {
    cVar1 = *(char *)(param_2 + 4);
    local_20 = param_1;
    if (cVar1 == '\0') {
      *(undefined *)(param_2 + 4) = 2;
      local_18 = (undefined2 *)0x0;
      local_14 = 0;
      local_1c = *(int *)(param_2 + 0xc);
      iVar3 = FUN_00038e44(&local_1c,&local_20);
      if (iVar3 == 0) {
        iVar3 = 10;
      }
      else {
        *(undefined2 *)(param_2 + 6) = local_18[2];
        *(undefined2 *)(param_2 + 8) = *local_18;
        iVar3 = FUN_00038f40(local_18,local_20 & 0xffff);
      }
    }
    else {
      iVar3 = 0x1d1d;
      if (cVar1 == '\x01') {
        local_1c = param_2;
        local_18 = (undefined2 *)param_3;
        local_14 = param_4;
        iVar4 = FUN_00038dbc(param_2 + 6,0,&local_20,DAT_0002da34);
        puVar2 = DAT_0002da34;
        if (iVar4 == 0) {
          iVar4 = FUN_00038f40(local_1c,*(undefined2 *)(DAT_0002da34 + 1));
        }
        else {
          *DAT_0002da34 = 0;
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
  }
  else {
    iVar3 = 1;
  }
  return iVar3;
}


/* ---- FUN_0002da38 @ 0002da38 ---- */

undefined4 FUN_0002da38(int param_1,undefined *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uStack_20;
  
  iVar4 = param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76;
  uVar3 = (uint)*(byte *)(param_1 + 0x2c5);
  iVar2 = iVar4 + uVar3 * 0x12 + 10;
  uStack_20 = param_4;
  if (uVar3 + 1 == (uint)*(byte *)(iVar4 + 4)) {
    iVar2 = FUN_0002fe98(param_1,iVar2,0,&uStack_20);
    if (iVar2 != 0) {
LAB_0002da98:
      *param_2 = 0;
      software_interrupt(0x9e);
      return param_3;
    }
  }
  else {
    for (; uVar3 < *(byte *)(iVar4 + 4); uVar3 = uVar3 + 1 & 0xff) {
      if (*(byte *)(iVar4 + 4) - 1 == uVar3) {
        iVar1 = 0;
      }
      else {
        iVar1 = iVar4 + uVar3 * 0x12 + 0x1c;
      }
      iVar2 = FUN_0002fe98(param_1,iVar2,iVar1,&uStack_20);
      if (iVar2 != 0) goto LAB_0002da98;
      *(char *)(param_1 + 0x2c5) = *(char *)(param_1 + 0x2c5) + '\x01';
      iVar2 = iVar1;
    }
  }
  *param_2 = 1;
  return 0;
}


/* ---- FUN_0002dac4 @ 0002dac4 ---- */

void FUN_0002dac4(void)

{
  undefined uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  pbVar2 = DAT_0002db58;
  for (uVar6 = 0; uVar6 < *pbVar2; uVar6 = uVar6 + 1 & 0xff) {
    puVar7 = (undefined *)(*(int *)(pbVar2 + 4) + uVar6 * 8);
    uVar1 = *puVar7;
    uVar8 = FUN_00026466(1,0);
    uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
    if (((uint)uVar8 & *(uint *)(pbVar2 + 0x18) | uVar3 & *(uint *)(pbVar2 + 0x1c)) != 0) {
      *(uint *)(pbVar2 + 0x18) = *(uint *)(pbVar2 + 0x18) & ~(uint)uVar8;
      *(uint *)(pbVar2 + 0x1c) = *(uint *)(pbVar2 + 0x1c) & ~uVar3;
      uVar3 = FUN_000344bc(uVar1);
      uVar1 = *puVar7;
      uVar8 = FUN_00026466(1,0);
      uVar4 = *(uint *)(pbVar2 + 0x10);
      uVar5 = *(uint *)(pbVar2 + 0x14);
      lVar9 = FUN_00026466(uVar3,0,uVar1);
      if (lVar9 == CONCAT44((uint)((ulonglong)uVar8 >> 0x20) & uVar5,(uint)uVar8 & uVar4)) {
        if (*(code **)(puVar7 + 4) != (code *)0x0) {
          (**(code **)(puVar7 + 4))(uVar1,puVar7[1] != '\x01' ^ uVar3);
        }
      }
    }
  }
  return;
}


/* ---- FUN_0002db5c @ 0002db5c ---- */

void FUN_0002db5c(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  param_1 = param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76;
  iVar3 = FUN_00038f78(param_1);
  iVar2 = DAT_0002dbe8;
  iVar1 = DAT_0002dbe4;
  if (iVar3 != 0) {
    if (*(uint *)(DAT_0002dbe4 + 8) < 6) {
      iVar4 = DAT_0002dbe8 + *(uint *)(DAT_0002dbe4 + 8) * 0x80;
      *(undefined2 *)(iVar4 + 2) = param_3;
      FUN_0002648c(iVar4 + 4,param_1,0x76);
      if (param_2 == 0) {
        *(undefined *)(iVar2 + *(int *)(iVar1 + 8) * 0x80) = 2;
      }
      else {
        *(undefined *)(iVar2 + *(int *)(iVar1 + 8) * 0x80) = 0;
      }
      iVar4 = *(int *)(iVar1 + 8) + 1;
      *(int *)(iVar2 + *(int *)(iVar1 + 8) * 0x80 + 0x7c) = iVar3;
      *(int *)(iVar1 + 8) = iVar4;
      if (iVar4 == *(int *)(iVar1 + 0xc)) {
        for (uVar5 = 0; uVar5 < *(uint *)(iVar1 + 0xc); uVar5 = uVar5 + 1) {
          (**(code **)(iVar2 + uVar5 * 0x80 + 0x7c))();
        }
        *(undefined4 *)(iVar1 + 8) = 0;
      }
    }
  }
  return;
}


/* ---- FUN_0002dbec @ 0002dbec ---- */

void FUN_0002dbec(int param_1,undefined4 param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined auStack_90 [2];
  undefined2 local_8e;
  undefined4 local_8c;
  
  pcVar1 = (code *)FUN_00038f78(param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76);
  if (pcVar1 != (code *)0x0) {
    FUN_0002648c(auStack_90,DAT_0002dc24,0x7c);
    local_8e = param_3;
    local_8c = param_2;
    (*pcVar1)(auStack_90);
  }
  return;
}


/* ---- FUN_0002dc28 @ 0002dc28 ---- */

int FUN_0002dc28(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_000264be(param_1,0x2cc);
  iVar1 = DAT_0002dc7c;
  *(short *)((int)param_1 + 0x2ca) = (short)param_2;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined *)((int)param_1 + 0x2c9) = 0;
  puVar2 = DAT_0002dc80;
  *(undefined *)((int)param_1 + 0x2c6) = 0;
  *(undefined *)((int)param_1 + 0x2c5) = 0;
  *param_1 = *puVar2;
  software_interrupt(0x9b);
  if (param_2 == 0x11) {
    *(undefined *)((int)param_1 + 0x2c7) = 1;
    *(undefined *)(param_1 + 0xb2) = 1;
  }
  else {
    if (param_2 != 0) {
      return param_2;
    }
    *(undefined *)((int)param_1 + 0x2c7) = 1;
    *(undefined *)(param_1 + 0xb2) = 0;
  }
  return 0;
}


/* ---- FUN_0002dc84 @ 0002dc84 ---- */

undefined4 FUN_0002dc84(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_000323fc(DAT_0002dc94,0);
  uVar1 = UnsignedSaturate(uVar2,0x10);
  UnsignedDoesSaturate(uVar2,0x10);
  return uVar1;
}


/* ---- FUN_0002dc98 @ 0002dc98 ---- */

undefined4 FUN_0002dc98(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = DAT_0002dcd4;
  bVar1 = *DAT_0002dcd4;
  if (bVar1 != DAT_0002dcd4[1]) {
    *DAT_0002dcd4 = bVar1 + 1;
    if (bVar1 == 1) {
      *pbVar2 = 0;
    }
    iVar3 = *(int *)(DAT_0002dcd4 + (uint)*pbVar2 * 4 + 0xc);
    *param_1 = iVar3;
    *(uint *)(pbVar2 + 8) = *(int *)(pbVar2 + 8) + iVar3 & 0xffffff;
    return 1;
  }
  *param_1 = 0;
  return 0;
}


/* ---- FUN_0002dcd8 @ 0002dcd8 ---- */

void FUN_0002dcd8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0002d7f0(param_1,0,param_2,param_3);
  return;
}


/* ---- FUN_0002dd30 @ 0002dd30 ---- */

void FUN_0002dd30(undefined *param_1,undefined *param_2)

{
  switch(*param_1) {
  case 1:
    *param_2 = 0;
    break;
  case 2:
    *param_2 = 1;
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_1 + 8);
    *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc);
    param_2[0x10] = 0;
    return;
  case 3:
    *param_2 = 2;
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_1 + 8);
    *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc);
    param_2[0x10] = param_1[0x16] == '\x06';
    return;
  case 4:
    *param_2 = 3;
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc);
    return;
  case 5:
    *param_2 = 4;
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)(param_2 + 0xe) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    return;
  case 6:
    *param_2 = 5;
    return;
  }
  return;
}


/* ---- FUN_0002dda4 @ 0002dda4 ---- */

void FUN_0002dda4(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  
  iVar1 = DAT_0002ddc0;
  uVar3 = 0;
  do {
    pcVar2 = *(code **)(iVar1 + uVar3 * 4);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  return;
}


/* ---- FUN_0002ddc4 @ 0002ddc4 ---- */

void FUN_0002ddc4(int *param_1,undefined4 param_2)

{
  undefined local_28 [4];
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*(int *)(*param_1 + 8) == 0) {
    return;
  }
  FUN_000264be(local_28,0x18);
  local_14 = param_1[2];
  if (*(char *)(param_1 + 1) == '\0') {
    local_28[0] = 1;
    local_20 = param_1[4];
    local_1c = param_1[3];
  }
  else {
    if (*(char *)(param_1 + 1) != '\x01') goto LAB_0002de0c;
    local_28[0] = 2;
    local_20 = param_1[3] << 0xc;
  }
  local_18 = param_1[5];
LAB_0002de0c:
  local_24 = param_2;
  (**(code **)(*param_1 + 8))(local_28);
  return;
}


/* ---- FUN_0002de18 @ 0002de18 ---- */

void FUN_0002de18(undefined4 param_1,int param_2,byte *param_3)

{
  undefined uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined local_30 [2];
  undefined2 local_2e;
  undefined2 local_2c;
  undefined4 local_28;
  undefined local_24;
  
  if (((param_2 != 0) && (param_2 != 0x11)) && (param_2 != 8)) {
    FUN_000264be(local_30,0x18);
    local_2e = (undefined2)param_1;
    local_2c = FUN_0002fa94(param_1);
    uVar3 = (uint)(DAT_0002deb4 - DAT_0002deb8) >> 3;
    if (param_2 == 0xd) {
      FUN_00033754(uVar3 * 0x10000 + 2,DAT_0002dec0,param_1);
      local_30[0] = 3;
      if ((param_3 == (byte *)0x0) || ((*param_3 & 1) == 0)) {
        uVar1 = 2;
      }
      else {
        uVar1 = 1;
      }
      local_28 = CONCAT31(local_28._1_3_,uVar1);
      local_28 = CONCAT22(0x1101,(undefined2)local_28);
    }
    else {
      uVar2 = FUN_0003425c(param_2);
      FUN_00033762(uVar3 * 0x10000 + 1,DAT_0002debc,uVar2,param_1);
      local_30[0] = 7;
      local_28 = param_2;
    }
    local_24 = 0;
    thunk_FUN_0003772c(local_30);
  }
  return;
}


/* ---- FUN_0002dec4 @ 0002dec4 ---- */

void FUN_0002dec4(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0002fa94(*(undefined2 *)(param_1 + 2));
  *(undefined2 *)(param_1 + 4) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0002deda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**DAT_0002dedc)(param_1);
  return;
}


/* ---- FUN_0002dee0 @ 0002dee0 ---- */

void FUN_0002dee0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0002df08;
  iVar1 = DAT_0002df04;
  for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(iVar2 + 3); iVar3 = iVar3 + 1) {
    (**(code **)(iVar1 + iVar3 * 4))(param_1);
  }
  return;
}


/* ---- FUN_0002df0c @ 0002df0c ---- */

void FUN_0002df0c(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0002fa94(*(undefined2 *)(param_1 + 2));
  *(undefined2 *)(param_1 + 4) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0002df22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**DAT_0002df24)(param_1);
  return;
}


/* ---- thunk_FUN_0003772c @ 0002df28 ---- */

void thunk_FUN_0003772c(void)

{
  (**DAT_0002df30)();
  return;
}


/* ---- cmd26_led_motor_ctrl_execute @ 0002df34 ---- */
/* same layout as v2 */

/* same layout as v2 */

void cmd26_led_motor_ctrl_execute(int param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint local_18;
  uint local_14;
  uint uStack_10;
  
  if (((*(byte *)(param_1 + 1) == 0) || (100 < *(byte *)(param_1 + 1))) ||
     (*(short *)(param_1 + 2) == 0)) {
    motor_off();
  }
  else {
    motor_on();
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0xf);
  local_18 = param_2;
  local_14 = param_3;
  uStack_10 = param_4;
  if (((uVar4 == 0) || (cVar1 = *(char *)(param_1 + 4), cVar1 == '\x04')) ||
     ((bVar2 = *(byte *)(param_1 + 8), 100 < bVar2 || (bVar2 == 0)))) {
    leds_off();
  }
  else {
    uVar7 = (uint)*(byte *)(param_1 + 5) << 0x10 | (uint)*(byte *)(param_1 + 6) << 8 |
            (uint)*(byte *)(param_1 + 7);
    if (cVar1 == '\x01') {
      uVar6 = 0;
      uVar5 = 0xffff;
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 == '\x02') {
          local_14 = (uint)*(ushort *)(param_1 + 0xd);
          uVar3 = *(ushort *)(param_1 + 0xb);
          leds_req_breath(uVar7,bVar2,*(undefined2 *)(param_1 + 9),*(undefined2 *)(param_1 + 9));
          local_18 = (uint)uVar3;
          uStack_10 = uVar4;
        }
        goto LAB_0002dfba;
      }
      uVar6 = *(undefined2 *)(param_1 + 0xd);
      uVar5 = *(undefined2 *)(param_1 + 0xb);
    }
    leds_req_blink(uVar7,bVar2,uVar5,uVar6);
    local_18 = uVar4;
  }
LAB_0002dfba:
  post_state_event(DAT_0002dfc4,local_18,local_14,uStack_10);
  return;
}


/* ---- cmd33_test_step_execute @ 0002dfc8 ---- */

void cmd33_test_step_execute(byte *param_1,uint param_2,uint param_3,uint param_4)

{
  uint local_20;
  uint uStack_1c;
  uint local_18;
  
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
    if ((((param_1[1] != 0) && (param_1[1] < 0x65)) || ((param_1[2] != 0 && (param_1[2] < 0x65))))
       || ((param_1[3] != 0 && (param_1[3] < 0x65)))) {
      uStack_1c = (uint)param_1[3];
      local_18 = (uint)*(ushort *)(param_1 + 0xd);
      local_20 = (uint)param_1[2];
      leds_req_test_3color
                ((uint)param_1[4] << 0x10 | (uint)param_1[5] << 8 | (uint)param_1[6],
                 (uint)param_1[7] << 0x10 | (uint)param_1[8] << 8 | (uint)param_1[9],
                 (uint)param_1[10] << 0x10 | (uint)param_1[0xb] << 8 | (uint)param_1[0xc]);
      goto LAB_0002e044;
    }
  }
  leds_off();
  local_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
LAB_0002e044:
  post_state_event(DAT_0002e050,local_20,uStack_1c,local_18);
  return;
}


/* ---- FUN_0002e2d0 @ 0002e2d0 ---- */

undefined4 FUN_0002e2d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uStack_10;
  
  if (*DAT_0002e310 == '\0') {
    return 2;
  }
  if (param_1 != 0xffff) {
    uStack_10 = param_4;
    puVar1 = (undefined *)FUN_00038aec(&uStack_10);
    if (puVar1 != (undefined *)0x0) {
      *puVar1 = 5;
      puVar1[4] = 1;
      *(short *)(puVar1 + 6) = (short)param_1;
      FUN_00038b08(&uStack_10);
      FUN_00038c6c();
      return 0;
    }
    return 8;
  }
  return 4;
}


/* ---- FUN_0002e314 @ 0002e314 ---- */

undefined4 FUN_0002e314(void)

{
  undefined *puVar1;
  undefined4 in_r3;
  undefined4 auStack_8 [2];
  
  if (*DAT_0002e348 == '\0') {
    return 2;
  }
  auStack_8[0] = in_r3;
  puVar1 = (undefined *)FUN_00038aec(auStack_8);
  if (puVar1 != (undefined *)0x0) {
    *puVar1 = 6;
    FUN_00038b08(auStack_8);
    if (*DAT_0002e34c != '\0') {
      DAT_0002e34c[0xc] = '\x01';
    }
    FUN_00038c6c();
    return 0;
  }
  return 8;
}


/* ---- FUN_0002e350 @ 0002e350 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0002e350(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined uVar5;
  undefined auStack_30 [20];
  undefined auStack_1c [8];
  
  FUN_000264be(auStack_30,0x14);
  pcVar1 = DAT_0002e40c;
  if (*DAT_0002e40c != '\0') {
LAB_0002e362:
    FUN_0002dda4(auStack_30);
    return 0;
  }
  iVar2 = FUN_000323c0(DAT_0002e40c + 4);
  iVar3 = DAT_0002e410;
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = _DAT_10001014;
  if (_DAT_10001014 == -1) {
    iVar2 = _DAT_10000014 * _DAT_10000010;
  }
  *(int *)(DAT_0002e410 + 0x10) = iVar2;
  *(int *)(iVar3 + 0xc) = iVar2 + -0x3000;
  iVar3 = FUN_00032e8c(iVar3,DAT_0002e414,0);
  if (iVar3 != 0) {
    return iVar3;
  }
  FUN_0003228c(*DAT_0002e41c,DAT_0002e418,0x8c,0x1c);
  iVar3 = FUN_00035c28();
  if ((iVar3 == 0) || (iVar3 == 2)) {
    return 0xb;
  }
  if (iVar3 == 6) {
    *pcVar1 = '\x01';
    *(undefined4 *)(pcVar1 + 4) = 0;
    goto LAB_0002e362;
  }
  puVar4 = (undefined *)FUN_00038aec(auStack_1c);
  if (puVar4 == (undefined *)0x0) {
    return 8;
  }
  *puVar4 = 1;
  switch(iVar3) {
  case 1:
  case 3:
    puVar4[4] = 0;
    break;
  case 5:
  case 7:
    puVar4[4] = 1;
    break;
  case 9:
  case 0xb:
    uVar5 = 3;
    goto LAB_0002e3f8;
  case 10:
    uVar5 = 2;
LAB_0002e3f8:
    puVar4[4] = uVar5;
  }
  FUN_00038b08(auStack_1c);
  FUN_00038c6c();
  return 0;
}


/* ---- FUN_0002e420 @ 0002e420 ---- */

undefined4 FUN_0002e420(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_10;
  
  if (param_1 == 0) {
    return 5;
  }
  local_10 = param_4;
  iVar1 = FUN_00038e44(param_1,&local_10);
  if (iVar1 != 0) {
    iVar1 = DAT_0002e45c + (local_10 & 0xffff) * 0x14;
    if ((*(int *)(iVar1 + 0xc) != 0) && (*(char *)(param_1 + 10) != '\0')) {
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
      *(undefined *)(param_1 + 10) = 0;
      return 0;
    }
    return 6;
  }
  return 10;
}


/* ---- FUN_0002e460 @ 0002e460 ---- */

void FUN_0002e460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_00038dbc(&uStack_18,&uStack_14);
  return;
}


/* ---- FUN_0002e46e @ 0002e46e ---- */

void FUN_0002e46e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  FUN_00038dbc(0,&uStack_10,param_2,param_3);
  return;
}


/* ---- FUN_0002e47e @ 0002e47e ---- */

void FUN_0002e47e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  FUN_00038dbc(&uStack_10,0,param_2,param_3);
  return;
}


/* ---- FUN_0002e48e @ 0002e48e ---- */

undefined4 FUN_0002e48e(undefined4 *param_1,undefined4 *param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *param_1;
    return 0;
  }
  return 5;
}


/* ---- FUN_0002e4a0 @ 0002e4a0 ---- */

undefined4 FUN_0002e4a0(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    local_18 = param_4;
    iVar1 = FUN_00038e44(param_1,&local_18);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 4);
      FUN_000323c6(DAT_0002e4e4 + (local_18 & 0xffff) * 0x14 + 0xc,1);
      *param_2 = uVar2;
      param_2[1] = *(int *)(param_1 + 4) + 0xc;
      *(undefined *)(param_1 + 10) = 1;
      return 0;
    }
    return 10;
  }
  return 5;
}


/* ---- FUN_0002e4e8 @ 0002e4e8 ---- */

undefined4 FUN_0002e4e8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_0003d728(param_1,param_2,0,3);
    return uVar1;
  }
  return 5;
}


/* ---- FUN_0002e4f6 @ 0002e4f6 ---- */

void FUN_0002e4f6(undefined4 param_1,undefined4 param_2)

{
  FUN_0003d728(param_1,param_2,0,2);
  return;
}


/* ---- FUN_0002e500 @ 0002e500 ---- */

undefined4 FUN_0002e500(undefined4 param_1)

{
  if (*(int *)(DAT_0002e524 + 0x10) != 4) {
    *(undefined4 *)(DAT_0002e528 + *(int *)(DAT_0002e524 + 0x10) * 4) = param_1;
    FUN_000323c6(DAT_0002e524 + 0x10,1);
    return 0;
  }
  return 0xc;
}


/* ---- FUN_0002e52c @ 0002e52c ---- */

undefined4 FUN_0002e52c(int param_1)

{
  if (param_1 - 0xc000U < 0x3fff) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0002e540 @ 0002e540 ---- */

void FUN_0002e540(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\x18') {
    cVar1 = FUN_0002b4bc();
    *param_1 = cVar1;
  }
  return;
}


/* ---- FUN_0002e552 @ 0002e552 ---- */

void FUN_0002e552(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\x18') {
    cVar1 = FUN_0002b4bc();
    *param_1 = cVar1;
  }
  return;
}


/* ---- FUN_0002e564 @ 0002e564 ---- */

undefined8 FUN_0002e564(int param_1,undefined param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)
           FUN_0002aa8a(*(undefined4 *)(param_1 + 0x234),*(undefined2 *)(param_1 + 0x238),1);
  if (puVar1 != (undefined *)0x0) {
    *puVar1 = param_2;
  }
  software_interrupt(0x72);
  return CONCAT44(param_1 + 0x234,param_1 + 0x54);
}


/* ---- FUN_0002e58c @ 0002e58c ---- */

void FUN_0002e58c(undefined4 param_1,int param_2,int param_3)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = DAT_0002e5b8;
  if (param_3 == 0) {
    uVar1 = *(undefined *)(DAT_0002e5b8 + 1);
  }
  else {
    FUN_0002b504(param_1,*(undefined *)(DAT_0002e5b8 + 4),param_2 == 0x11);
    uVar1 = *(undefined *)(iVar2 + 1);
  }
  FUN_0002b504(param_1,uVar1,param_3 == 0 && param_2 == 0x11);
  return;
}


/* ---- FUN_0002e5bc @ 0002e5bc ---- */

longlong FUN_0002e5bc(uint param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_20;
  code *pcStack_1c;
  undefined4 uStack_18;
  
  if (param_2 != (code *)0x0) {
    iVar3 = 0;
    local_20 = param_1;
    if (param_1 != 0) {
      uVar2 = 0;
      pcStack_1c = param_2;
      uStack_18 = param_3;
      do {
        iVar1 = FUN_0003238a(&local_20,uVar2);
        if (iVar1 != 0) {
          (*param_2)(uVar2 & 0xffff,param_3);
          iVar3 = iVar3 + 1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x14);
    }
    return CONCAT44(local_20,iVar3);
  }
  return (ulonglong)param_1 << 0x20;
}


/* ---- FUN_0002e5f4 @ 0002e5f4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002e5f4(void)

{
  int iVar1;
  
  *(undefined4 *)(_DAT_0002e648 + 4) = 0x70000;
  debug_printf(s_fstorage_example_started_____d___0002e64b + 1,0x90);
  debug_printf(s_SoftDevice_is_present__0002e670);
  iVar1 = FUN_00032e8c(_DAT_0002e690,DAT_0002e68c,0);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x98,s__________app_settings_c_0002e693 + 1);
  }
  debug_printf(s_Initializing_nrf_fstorage_sd_imp_0002e6ac,iVar1);
  FUN_00037adc(_DAT_0002e690);
  FUN_000329ec(100,_DAT_10000010);
  return;
}


/* ---- FUN_0002e780 @ 0002e780 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002e780(void)

{
  byte local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined local_18;
  undefined local_17;
  byte local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined local_c [12];
  
  local_c[0] = 0x11;
  software_interrupt(0x6d);
  if (&local_1c != (byte *)0x0) {
    app_error_handler(&local_1c,0x39d,s__________main_c_0002e868);
  }
  local_1b = (undefined)_DAT_100000a4;
  local_1a = (undefined)((uint)_DAT_100000a4 >> 8);
  local_19 = (undefined)((uint)_DAT_100000a4 >> 0x10);
  local_18 = (undefined)((uint)_DAT_100000a4 >> 0x18);
  local_17 = (undefined)_DAT_100000a8;
  local_16 = (byte)((uint)_DAT_100000a8 >> 8) | 0xc0;
  local_1c = local_1c & 1;
  software_interrupt(0x6c);
  software_interrupt(0x78);
  app_error_handler(0xc1,0x3ac,s__________main_c_0002e868);
  software_interrupt(0x7c);
  if (local_c != (undefined *)0x0) {
    app_error_handler(local_c,0x3af,s__________main_c_0002e868);
  }
  local_10 = 0x1900000;
  local_14 = 0xf00018;
  software_interrupt(0x7a);
  if (&local_14 != (undefined4 *)0x0) {
    app_error_handler(&local_14,0x3b8,s__________main_c_0002e868);
  }
  debug_printf(s_gap_params_init_MAC__x__x__x__x__0002e880,local_1b,local_1a,local_19,local_18,
               local_17,local_16);
  return;
}


/* ---- FUN_0002e904 @ 0002e904 ---- */

undefined8 FUN_0002e904(int param_1,int param_2)

{
  byte local_50 [4];
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *puStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined local_30 [20];
  undefined4 local_1c;
  undefined2 local_18;
  undefined local_16;
  
  local_34 = 0x21111;
  FUN_000264be(local_50,0x1c);
  local_4c = 0;
  local_50[0] = local_50[0] | 2;
  puStack_3c = &local_34;
  local_40 = 0;
  local_44 = 0;
  local_38 = 0;
  local_16 = *(undefined *)(param_1 + 0x20);
  local_18 = 0xff01;
  local_1c = 0x31111;
  FUN_000264be(local_30,0x14);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  software_interrupt(0xaa);
  return CONCAT44(local_50,(uint)*(ushort *)(param_1 + 0x22));
}


/* ---- FUN_0002e9f0 @ 0002e9f0 ---- */

undefined8 FUN_0002e9f0(int param_1,int param_2)

{
  byte local_50 [4];
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *puStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined local_30 [20];
  undefined4 local_1c;
  undefined2 local_18;
  undefined local_16;
  
  local_34 = 0x21111;
  FUN_000264be(local_50,0x1c);
  local_4c = 0;
  local_50[0] = local_50[0] | 2;
  puStack_3c = &local_34;
  local_40 = 0;
  local_44 = 0;
  local_38 = 0;
  local_16 = *(undefined *)(param_1 + 0x20);
  local_18 = 0xff05;
  local_1c = 0x31111;
  FUN_000264be(local_30,0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  software_interrupt(0xaa);
  return CONCAT44(local_50,(uint)*(ushort *)(param_1 + 0x22));
}


/* ---- FUN_0002eadc @ 0002eadc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0002eadc(int param_1)

{
  int iVar1;
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_28 [20];
  undefined4 local_14;
  undefined2 local_10;
  undefined local_e;
  
  local_2c = 0x21111;
  FUN_000264be(local_48,0x1c);
  local_44 = 0;
  local_48[0] = local_48[0] | 0x12;
  puStack_34 = &local_2c;
  local_38 = 0;
  local_3c = 0;
  local_30 = 0;
  local_e = *(undefined *)(param_1 + 0x20);
  local_10 = 0xff06;
  local_14 = 0x31111;
  FUN_000264be(local_28,0x14);
  iVar1 = _DAT_0002ebcc;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(_DAT_0002ebcc + 0x2c);
  FUN_00037a40(s_gatt_ff06_char_add__d_0002ebcf + 1,*(undefined2 *)(iVar1 + 0x2c));
  software_interrupt(0xaa);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 0x22));
}


/* ---- FUN_0002ebe8 @ 0002ebe8 ---- */

undefined8 FUN_0002ebe8(int param_1,int param_2)

{
  byte local_50 [4];
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *puStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined local_30 [20];
  undefined4 local_1c;
  undefined2 local_18;
  undefined local_16;
  
  local_34 = 0x21111;
  FUN_000264be(local_50,0x1c);
  local_4c = 0;
  local_50[0] = local_50[0] | 2;
  puStack_3c = &local_34;
  local_40 = 0;
  local_44 = 0;
  local_38 = 0;
  local_16 = *(undefined *)(param_1 + 0x20);
  local_18 = 0xff10;
  local_1c = 0x31111;
  FUN_000264be(local_30,0x14);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  software_interrupt(0xaa);
  return CONCAT44(local_50,(uint)*(ushort *)(param_1 + 0x22));
}


/* ---- FUN_0002ecd4 @ 0002ecd4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002ecd4(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  uint local_10;
  
  pbVar2 = _DAT_0002edbc;
  cVar1 = *param_1;
  local_10 = param_4;
  if (cVar1 == '\0') {
    debug_printf(DAT_0002ee14);
    iVar3 = FUN_00032748(_DAT_0002ee18,*(undefined2 *)(param_1 + 2),param_1 + 4);
    if (iVar3 != 0) {
      app_error_handler(iVar3,0x2f6,s__________main_c_0002ee1b + 1);
    }
    iVar3 = FUN_000375c0(*(undefined2 *)(param_1 + 2),&local_10);
    if (iVar3 != 0) {
      app_error_handler(iVar3,0x2fa,s__________main_c_0002ee1b + 1);
    }
    FUN_000264be(DAT_0002ee2c,0x76);
    FUN_0002648c(DAT_0002ee2c + 10,param_1 + 4,0x12);
    pbVar2[1] = 1;
    if ((*pbVar2 & 1) != 0) {
      iVar3 = FUN_00037522(local_10 & 0xffff,DAT_0002ee2c,0xec,0);
      if (iVar3 == 0x86) {
        iVar3 = FUN_0002e314();
      }
      if (iVar3 != 0) {
        app_error_handler(iVar3,0x30a,s__________main_c_0002ee1b + 1);
      }
    }
    iVar3 = FUN_000326fc(_DAT_0002ee18,1);
    if (iVar3 != 0) {
      app_error_handler(iVar3,0x30d,s__________main_c_0002ee1b + 1);
    }
  }
  else {
    if (cVar1 == '\x01') {
      debug_printf(DAT_0002ee30,param_2,param_3,param_4);
      return;
    }
    if (cVar1 == '\x02') {
      debug_printf(s_GATTS_Service_client_disconnecte_0002ee34,*(undefined2 *)(param_1 + 2),param_3,
                   param_4);
      return;
    }
    if (cVar1 == '\x03') {
      debug_printf(s_Service_Changed_indication_recei_0002edbf + 1);
      *pbVar2 = 0;
      pbVar2[1] = 0;
      iVar3 = FUN_0002b644(pbVar2 + 0x24,*(undefined2 *)(param_1 + 2));
      if (iVar3 == 0x11) {
        debug_printf(s_NRF_BLE_GATTS_C_EVT_SRV_CHANGED_E_0002ede8,0x11);
        *(uint *)(pbVar2 + 0x18) = (uint)*(ushort *)(param_1 + 2);
        app_timer_start(*(undefined4 *)(DAT_0002c25c + 0x24),0x10000,0,local_10);
        return;
      }
    }
  }
  return;
}


/* ---- FUN_0002ee70 @ 0002ee70 ---- */

short FUN_0002ee70(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 10);
  if (sVar1 != 0) {
    sVar1 = 1;
  }
  return sVar1;
}


/* ---- FUN_0002ee7c @ 0002ee7c ---- */

undefined4 FUN_0002ee7c(int param_1)

{
  ushort *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  
  puVar2 = DAT_0002eef4;
  if (param_1 != 0) {
    return 1;
  }
  if (DAT_0002eef4[0xc] == '\0') {
    FUN_0002efdc();
  }
  else {
    DAT_0002eef4[0xc] = 0;
  }
  puVar3 = DAT_0002ef40;
  switch(*puVar2) {
  default:
    return 0xf;
  case 1:
    puVar8 = (undefined2 *)(DAT_0002ef40 + 2);
    uVar6 = 0;
    do {
      if (puVar3[uVar6 + 10] != '\0') {
        puVar3[uVar6 + 10] = 0;
        if ((*(int *)(puVar3 + uVar6 * 0x14 + -0x1c) == 0) &&
           (puVar3[uVar6 * 0x14 + -0x18] == '\x01')) {
          *puVar8 = (short)uVar6;
          goto LAB_0002efb8;
        }
      }
      uVar6 = uVar6 + 1 & 0xffff;
      if (1 < uVar6) {
        *puVar3 = 0;
        *(undefined2 *)(puVar3 + 2) = 0;
        *(undefined4 *)(puVar3 + 4) = 0;
        return 0x1d1d;
      }
    } while( true );
  case 2:
LAB_0002efb8:
    iVar7 = FUN_00038ee4(*(undefined2 *)(DAT_0002efd8 + 2),DAT_0002efd8 + 4);
    if (iVar7 != 0) {
      uVar5 = FUN_0002ef84();
      return uVar5;
    }
    break;
  case 3:
    uVar5 = FUN_0002ef84();
    return uVar5;
  case 4:
    break;
  case 6:
    *puVar2 = 6;
    uVar5 = FUN_00035be8(*(undefined4 *)
                          (DAT_0002eef4 + (uint)*(ushort *)(puVar2 + 2) * 0x14 + -0x24));
    return uVar5;
  case 7:
    *puVar2 = 7;
    *(undefined4 *)(puVar2 + 4) = 0;
    uVar5 = FUN_00035c04();
    return uVar5;
  }
  puVar2 = DAT_0002ef78;
  puVar1 = (ushort *)(DAT_0002ef78 + 2);
  if (*(int *)(DAT_0002ef78 + (uint)*puVar1 * 0x14 + -0x1c) == 0) {
    *DAT_0002ef78 = 4;
    uVar5 = *(undefined4 *)(puVar2 + (uint)*puVar1 * 0x14 + -0x24);
  }
  else {
    *DAT_0002ef78 = 5;
    puVar4 = DAT_0002ef7c;
    *(undefined2 *)(DAT_0002ef7c + 1) = 2;
    uVar5 = *puVar4;
  }
  uVar5 = FUN_00032d54(DAT_0002ef80,uVar5,1,0);
  return uVar5;
}


/* ---- FUN_0002ef84 @ 0002ef84 ---- */

void FUN_0002ef84(void)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  iVar4 = *DAT_0002efb0;
  piVar1 = (int *)(DAT_0002efac + 4);
  uVar2 = *(ushort *)(DAT_0002efb0 + 1);
  uVar3 = *(ushort *)(*piVar1 + 2);
  *DAT_0002efac = 3;
  FUN_00032ffc(DAT_0002efb4,iVar4 + (uint)uVar2 * 4,*piVar1,(uVar3 + 3) * 0x10000 >> 0xe,0);
  return;
}


/* ---- FUN_0002efdc @ 0002efdc ---- */

void FUN_0002efdc(void)

{
  int iVar1;
  short sVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  puVar4 = DAT_0002f060;
  puVar3 = DAT_0002f05c;
  sVar2 = *(short *)(DAT_0002f060 + 1);
  switch(*DAT_0002f05c) {
  case 0:
    *(short *)(DAT_0002f05c + 8) = *(short *)(DAT_0002f05c + 8) + 1;
    *(undefined2 *)(puVar3 + 2) = 0;
    puVar3[0xc] = 0;
    uVar6 = 0;
    do {
      uVar7 = uVar6 + 1 & 0xffff;
      puVar3[uVar6 + 10] = puVar3[uVar6 * 0x14 + -0x28] == '\0';
      uVar6 = uVar7;
    } while (uVar7 < 2);
  case 7:
    *puVar3 = 1;
    return;
  default:
    return;
  case 3:
    *(short *)(DAT_0002f060 + 1) = *(short *)(*(int *)(DAT_0002f05c + 4) + 2) + 3 + sVar2;
    *puVar3 = 2;
    return;
  case 4:
    uVar8 = *DAT_0002f060;
    iVar1 = (uint)*(ushort *)(DAT_0002f05c + 2) * 0x14;
    *DAT_0002f060 = *(undefined4 *)(DAT_0002f05c + iVar1 + -0x24);
    *(undefined4 *)(puVar3 + iVar1 + -0x24) = uVar8;
    *(short *)(puVar3 + iVar1 + -0x20) = sVar2;
    *(undefined2 *)(puVar4 + 1) = 2;
    uVar5 = 6;
    break;
  case 5:
  case 6:
    uVar5 = 7;
  }
  *puVar3 = uVar5;
  return;
}


/* ---- FUN_0002f064 @ 0002f064 ---- */

void FUN_0002f064(short *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = DAT_0002f114;
  sVar1 = param_1[2];
  sVar2 = *param_1;
  if (sVar2 != 0x35) {
    if (sVar2 == 0x50) {
      if (((*(char *)(param_1 + 6) == '\x01') && (*(char *)(param_1 + 5) == '\x01')) &&
         (param_1[4] == 0x2902)) {
        FUN_000311b8(sVar1,1);
        FUN_0003c168();
      }
    }
    else if (sVar2 == 0x52) {
      FUN_00031110();
    }
    goto LAB_0002f104;
  }
  uVar6 = 0;
  FUN_0002b504(sVar1,*(undefined *)(DAT_0002f114 + 5),0);
  if (param_1[3] != 0x10a) {
    iVar5 = ((uint)(DAT_0002f118 - DAT_0002f11c) >> 3) * 0x10000 + 2;
    if (param_1[3] == 0) {
      if (param_1[5] != 1) {
        FUN_00033754(iVar5,s_Multiple___d__CAR_characteristic_0002f15c);
      }
      if (param_1[6] == 1) {
        if (*(char *)(param_1 + 7) == '\0') {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        goto LAB_0002f0fc;
      }
      pcVar4 = s_Unexpected_CAR_characteristic_va_0002f198;
    }
    else {
      pcVar4 = s_Unexpected_GATT_status_while_get_0002f120;
    }
    FUN_00033754(iVar5,pcVar4);
  }
LAB_0002f0fc:
  FUN_0003a738(sVar1,uVar6);
LAB_0002f104:
  FUN_0002b428(*(undefined *)(iVar3 + 2),DAT_0002f1d4,0);
  return;
}


/* ---- FUN_0002f1d8 @ 0002f1d8 ---- */

void FUN_0002f1d8(char *param_1)

{
  if (*param_1 == '\0') {
    FUN_00031110(*(undefined2 *)(param_1 + 2));
    FUN_0002c43c(*(undefined2 *)(param_1 + 2));
    FUN_0003c168();
    return;
  }
  return;
}


/* ---- FUN_0002f1f8 @ 0002f1f8 ---- */

undefined4 FUN_0002f1f8(void)

{
  undefined *puVar1;
  undefined uVar2;
  int iVar3;
  
  puVar1 = DAT_0002f264;
  *DAT_0002f264 = 0;
  uVar2 = FUN_0002b4bc();
  puVar1[1] = uVar2;
  uVar2 = FUN_0002b4bc();
  puVar1[2] = uVar2;
  uVar2 = FUN_0002b4bc();
  puVar1[3] = uVar2;
  uVar2 = FUN_0002b4bc();
  puVar1[4] = uVar2;
  iVar3 = FUN_0002b4bc();
  puVar1[5] = (char)iVar3;
  if ((((puVar1[1] != '\x18') && (puVar1[2] != '\x18')) && (puVar1[3] != '\x18')) &&
     ((puVar1[4] != '\x18' && (iVar3 != 0x18)))) {
    *(undefined4 *)(puVar1 + 0xc) = 0;
    DataMemoryBarrier(0x1f);
    *puVar1 = 1;
    return 0;
  }
  FUN_0003374c(((uint)(DAT_0002f268 - DAT_0002f26c) >> 3) * 0x10000 + 1,DAT_0002f270);
  return 3;
}


/* ---- FUN_0002f2cc @ 0002f2cc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002f2cc(void)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  ushort uVar4;
  
  pcVar2 = _DAT_0002f310;
  *_DAT_0002f310 = '\x01';
  iVar3 = FUN_00034b3c();
  uVar4 = 60000;
  if (iVar3 != 0) {
    app_error_handler(iVar3,0xb7,s__________battery_measure_c_0002f313 + 1);
  }
  do {
    if (*pcVar2 == '\0') break;
    bVar1 = 10 < uVar4;
    uVar4 = uVar4 - 1;
  } while (bVar1);
  if (*pcVar2 != '\0') {
    debug_printf(s_ADC_Check_timeout_0002f330);
  }
  FUN_00034b68();
  _DAT_e000e280 = 0x80;
  return;
}


/* ---- FUN_0002f344 @ 0002f344 ---- */

undefined4 FUN_0002f344(void)

{
  int iVar1;
  undefined4 unaff_r4;
  
  iVar1 = FUN_00033304(4);
  if (iVar1 == 1) {
    unaff_r4 = 0;
  }
  else {
    iVar1 = FUN_00033304(4);
    if (iVar1 == 0) {
      iVar1 = FUN_00033304(5);
      if ((iVar1 == 0) && (*(uint *)(DAT_0002f37c + 8) < 0xfb4)) {
        unaff_r4 = 1;
      }
      else {
        unaff_r4 = 2;
      }
    }
  }
  return unaff_r4;
}


/* ---- FUN_0002f380 @ 0002f380 ---- */

void FUN_0002f380(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_00026466(1,0,param_1);
  iVar2 = DAT_0002f3fc;
  uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
  uVar4 = (uint)uVar7;
  iVar5 = FUN_00029aec(*(undefined4 *)(DAT_0002f3fc + 4));
  iVar3 = DAT_0002f400;
  if (iVar5 == 0) {
    puVar1 = (uint *)(DAT_0002f400 + 0x1c);
    if ((*(uint *)(DAT_0002f400 + 0x18) & uVar4 | *puVar1 & uVar6) == 0) {
      iVar5 = FUN_000344bc(param_1);
      if (iVar5 == 0) {
        *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & ~uVar4;
        *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) & ~uVar6;
      }
      else {
        *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | uVar4;
        *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) | uVar6;
      }
      *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | uVar4;
      *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | uVar6;
      app_timer_start(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar3 + 8),0);
      return;
    }
    *(uint *)(DAT_0002f400 + 0x18) = *(uint *)(DAT_0002f400 + 0x18) & ~uVar4;
    *(uint *)(iVar3 + 0x1c) = *puVar1 & ~uVar6;
  }
  return;
}


/* ---- FUN_0002f404 @ 0002f404 ---- */

undefined4 FUN_0002f404(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_0002f414;
  *(undefined2 *)(DAT_0002f414 + 2) = 0xffff;
  *puVar1 = 1;
  return 0;
}


/* ---- FUN_0002f418 @ 0002f418 ---- */

int FUN_0002f418(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_20;
  int *local_1c;
  
  uStack_20 = param_3;
  local_1c = param_4;
  iVar2 = FUN_0002fa94();
  uVar3 = 0;
  iVar4 = 3;
  bVar1 = true;
  uVar5 = 0;
  if ((iVar2 != 0xffff) && (iVar2 = FUN_00035fe0(iVar2,8,&uStack_20), iVar2 == 0)) {
    uVar3 = (int)local_1c + 6;
    iVar4 = *local_1c;
    uVar5 = (uint)*(ushort *)(local_1c + 1);
  }
  do {
    software_interrupt(0xb1);
    if (param_1 == 4) {
      param_1 = 0x11;
LAB_0002f462:
      if (!bVar1) {
LAB_0002f466:
        param_1 = 0xb;
      }
      return param_1;
    }
    if (param_1 == 8) {
      param_1 = 0;
      goto LAB_0002f462;
    }
    if (param_1 != 0xb) goto LAB_0002f462;
    bVar1 = false;
    if (iVar4 << 0x1e < 0) {
      iVar4 = 1;
    }
    else {
      if ((uVar3 | uVar5) == 0) {
        FUN_00033754(((uint)(DAT_0002f49c - DAT_0002f4a0) >> 3) * 0x10000 + 1,DAT_0002f4a4,0xb,iVar4
                    );
        goto LAB_0002f466;
      }
      uVar3 = 0;
      iVar4 = 3;
      uVar5 = uVar3;
    }
  } while( true );
}


/* ---- FUN_0002f4a8 @ 0002f4a8 ---- */

int FUN_0002f4a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  undefined4 uStack_20;
  undefined4 *local_1c;
  
  uStack_20 = param_3;
  local_1c = param_4;
  iVar2 = FUN_0002fa94();
  if (iVar2 == 0xffff) {
    iVar3 = 0x3002;
  }
  else {
    sVar6 = 1;
    do {
      bVar1 = false;
      iVar3 = FUN_00036074(iVar2,8,sVar6,&uStack_20);
      if (iVar3 != 0) {
        if (iVar3 != 7) {
          return iVar3;
        }
        return 0xc;
      }
      *local_1c = 3;
      software_interrupt(0xb2);
      if (param_1 == 0) {
        iVar2 = FUN_00036164(iVar2,8);
        return iVar2;
      }
      iVar3 = param_1;
      if (param_1 == 0xc) {
        bVar1 = true;
      }
      else if (param_1 == 5) {
        iVar3 = 0;
      }
      iVar4 = FUN_00036150(iVar2,8,local_1c + 1);
      if (iVar4 != 0) {
        uVar5 = FUN_0003425c();
        FUN_00033762(((uint)(DAT_0002f548 - DAT_0002f54c) >> 3) * 0x10000 + 1,DAT_0002f550,iVar2,
                     uVar5);
        iVar3 = 3;
      }
      sVar6 = sVar6 + 1;
    } while (bVar1);
  }
  return iVar3;
}


/* ---- FUN_0002f554 @ 0002f554 ---- */

undefined4 FUN_0002f554(short *param_1,short *param_2)

{
  if (param_2 < param_1 + (uint)(ushort)param_1[1] * 2 + 6) {
    return 2;
  }
  if ((param_1[2] != -1) && (*param_1 != 0)) {
    return 0;
  }
  return 1;
}


/* ---- FUN_0002f57a @ 0002f57a ---- */

undefined4 FUN_0002f57a(int *param_1,int *param_2)

{
  if ((param_1 < param_2) && (*param_1 != -1)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0002f58c @ 0002f58c ---- */

void FUN_0002f58c(int param_1)

{
  FUN_00034dcc(param_1 + 4);
  return;
}


/* ---- FUN_0002f592 @ 0002f592 ---- */

void FUN_0002f592(int param_1)

{
  FUN_00034e04(param_1 + 4);
  return;
}


/* ---- FUN_0002f598 @ 0002f598 ---- */

void FUN_0002f598(void)

{
  int iVar1;
  
  FUN_000296d8();
  iVar1 = FUN_0003351c();
  if (iVar1 == 0) {
    FUN_00033a98();
    return;
  }
  return;
}


/* ---- FUN_0002f5b0 @ 0002f5b0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0002f5b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  char *pcVar1;
  int iVar2;
  uint local_40;
  undefined local_3c [8];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_3c[0] = 0;
  iStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  FUN_00029b34(local_3c);
  local_40 = 1;
  iVar2 = FUN_00032b2c(param_1,param_2,&uStack_2c,1);
  FUN_00029b7c(local_3c[0]);
  pcVar1 = _DAT_0002f648;
  if (*_DAT_0002f648 == '\0') {
    if (iVar2 != 0) {
      return 0xffffffff;
    }
  }
  else if (iVar2 != 0) {
    app_error_handler(iVar2,0x8f,s__________interface_i2c_c_0002f64b + 1);
    return 0xffffffff;
  }
  local_40 = local_40 & 0xffffff00;
  FUN_00029b34(&local_40);
  iVar2 = FUN_00034f04(param_1 + 4,param_2,param_4,param_5);
  if (*pcVar1 != '\0') {
    if (iVar2 == 0) {
      FUN_00029b7c(local_40 & 0xff);
      return 0;
    }
    app_error_handler(iVar2,0x9d,s__________interface_i2c_c_0002f64b + 1);
  }
  FUN_00029b7c(local_40 & 0xff);
  if (iVar2 == 0) {
    return 0;
  }
  return 0xffffffff;
}


/* ---- FUN_0002f668 @ 0002f668 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0002f668(undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined local_2c;
  undefined auStack_2b [15];
  undefined local_1c [8];
  
  local_2c = param_3;
  FUN_0002648c(auStack_2b,param_4,param_5);
  *_DAT_0002f6c8 = 0;
  local_1c[0] = 0;
  FUN_00029b34(local_1c);
  iVar1 = FUN_00032b2c(param_1,param_2,&local_2c,param_5 + 1U & 0xff,0);
  if (iVar1 == 0) {
    FUN_00029b7c(local_1c[0]);
    uVar2 = 0;
  }
  else {
    app_error_handler(iVar1,0x6b,s__________interface_i2c_c_0002f6cb + 1);
    FUN_00029b7c(local_1c[0]);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* ---- FUN_0002f6e8 @ 0002f6e8 ---- */

longlong FUN_0002f6e8(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_18 = param_2;
  if (*param_1 >> 1 == 2) {
    local_18 = CONCAT13((char)(param_2 >> 0x18),*(undefined3 *)(param_1 + 1));
    local_14 = CONCAT13((char)((uint)param_3 >> 0x18),*(undefined3 *)(param_1 + 4));
    uStack_10 = param_4;
    FUN_00028a68(param_2,&local_14,&uStack_10);
    iVar1 = FUN_000264e2(&local_18,&uStack_10,3);
    if (iVar1 == 0) {
      return CONCAT44(local_18,1);
    }
  }
  return (ulonglong)local_18 << 0x20;
}


/* ---- FUN_0002f730 @ 0002f730 ---- */

undefined4 FUN_0002f730(uint param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((param_1 < 0x14) && (iVar1 = FUN_0002b544(), iVar1 != 0)) {
    iVar1 = DAT_0002f764 + param_1 * 10;
    *param_2 = *(undefined4 *)(iVar1 + 2);
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar1 + 6);
    *(undefined *)((int)param_2 + 6) = *(undefined *)(iVar1 + 8);
    return 0;
  }
  return 0x3002;
}


/* ---- FUN_0002f768 @ 0002f768 ---- */

void FUN_0002f768(short *param_1)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ushort local_58 [2];
  undefined4 local_54;
  undefined2 local_50;
  undefined local_4e;
  ushort local_2c;
  ushort local_2a;
  ushort local_28 [2];
  int local_24;
  
  if (*param_1 == 0x10) {
    FUN_0002648c(local_58,param_1 + 2,0x2c);
    uVar3 = 0xffff;
    local_28[0] = uVar3;
    if ((byte)local_54 >> 1 != 3) {
      FUN_000362e8();
      bVar1 = (byte)local_54 >> 1;
      if ((bVar1 == 0) || (bVar1 == 1)) {
        do {
          iVar2 = FUN_00036290(7,&local_2c,local_28);
          local_28[0] = uVar3;
          if (iVar2 == 0) break;
          iVar2 = FUN_000287b6(&local_54,local_24 + 0x11);
          local_28[0] = local_2c;
        } while (iVar2 == 0);
      }
      else if (bVar1 == 2) {
        do {
          iVar2 = FUN_00036290(7,&local_2c,local_28);
          local_28[0] = uVar3;
          if (iVar2 == 0) break;
          iVar2 = FUN_0002f6e8(&local_54,local_24 + 1);
          local_28[0] = local_2c;
        } while (iVar2 == 0);
      }
    }
    iVar2 = DAT_0002f83c;
    *(ushort *)(DAT_0002f83c + (uint)local_58[0] * 10) = local_28[0];
    iVar2 = iVar2 + (uint)local_58[0] * 10;
    *(undefined4 *)(iVar2 + 2) = local_54;
    *(undefined2 *)(iVar2 + 6) = local_50;
    *(undefined *)(iVar2 + 8) = local_4e;
    iVar2 = DAT_0002f840;
    if (local_28[0] != 0xffff) {
      local_2a = local_58[0];
      local_2c = local_2c & 0xff00;
      uVar4 = 0;
      do {
        (**(code **)(iVar2 + uVar4 * 4))(&local_2c);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 2);
    }
  }
  return;
}


/* ---- FUN_0002f844 @ 0002f844 ---- */

uint FUN_0002f844(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_0002f880;
  if (param_1 != 0xffff) {
    uVar3 = 0;
    do {
      if ((*(ushort *)(iVar1 + uVar3 * 10) == param_1) && (iVar2 = FUN_0002b544(uVar3), iVar2 != 0))
      {
        return uVar3;
      }
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar3 < 0x14);
  }
  return 0xffff;
}


/* ---- FUN_0002f884 @ 0002f884 ---- */

int * FUN_0002f884(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined uStack_158;
  undefined auStack_157 [16];
  byte local_147;
  undefined auStack_108 [188];
  int local_4c [8];
  undefined auStack_2c [4];
  undefined *local_28;
  undefined2 local_24 [4];
  
  local_28 = &uStack_158;
  if ((param_1 == 0) || (param_2 == 0)) {
    piVar2 = (int *)0x0;
    software_interrupt(0x6f);
  }
  else {
    local_24[0] = 0x50;
    FUN_000264be(auStack_108,0xb8);
    uVar1 = 0;
    do {
      local_4c[uVar1] = (int)(auStack_108 + uVar1 * 0x17);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 8);
    iVar4 = ((uint)(DAT_0002f958 - DAT_0002f95c) >> 3) * 0x10000 + 2;
    for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
      FUN_000264be(&uStack_158,0x50);
      iVar3 = FUN_000362f8(*(undefined2 *)(param_1 + uVar1 * 2),7,auStack_2c,local_24);
      if ((iVar3 == 5) || (iVar3 == 7)) {
        FUN_00033754(iVar4,DAT_0002f964,*(undefined2 *)(param_1 + uVar1 * 2));
        return (int *)0x5;
      }
      if ((local_147 >> 1 != 0) && (local_147 >> 1 != 1)) {
        FUN_00033754(iVar4,DAT_0002f960,*(undefined2 *)(param_1 + uVar1 * 2));
        return (int *)0x3202;
      }
      FUN_0002648c(auStack_108 + uVar1 * 0x17,auStack_157,0x17);
    }
    piVar2 = local_4c;
    software_interrupt(0x6f);
  }
  return piVar2;
}


/* ---- FUN_0002f968 @ 0002f968 ---- */

ulonglong FUN_0002f968(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  local_18 = param_2;
  uStack_14 = param_3;
  local_10 = param_4;
  FUN_000362e8();
  do {
    iVar1 = FUN_00036290(7,&local_18,&uStack_14);
    if (iVar1 == 0) {
      return CONCAT44(local_18,0xffff);
    }
  } while (((local_18 & 0xffff) == param_2) || (iVar1 = FUN_0002f9a0(param_1,local_10), iVar1 == 0))
  ;
  return CONCAT44(local_18,local_18) & 0xffffffff0000ffff;
}


/* ---- FUN_0002f9a0 @ 0002f9a0 ---- */

undefined4 FUN_0002f9a0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_000264e2(param_1 + 1,param_2 + 1,0x10);
  if (((iVar2 == 0) && (iVar2 = FUN_0002fef0(param_1 + 1), iVar2 != 0)) &&
     (iVar2 = FUN_0002fef0(param_2 + 1), iVar2 != 0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  uVar3 = FUN_000287b6((byte *)(param_1 + 0x11),(byte *)(param_2 + 0x11));
  bVar1 = *(byte *)(param_1 + 0x11);
  if (((bVar1 >> 1 == 2) || (bVar1 >> 1 == 3)) ||
     ((bVar1 = *(byte *)(param_2 + 0x11), bVar1 >> 1 == 2 || (bVar1 >> 1 == 3)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  if (((uVar3 & uVar5) == 0) && ((uVar6 & ~uVar5) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


/* ---- FUN_0002fa12 @ 0002fa12 ---- */

undefined4 FUN_0002fa12(ushort *param_1)

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


/* ---- FUN_0002fa2a @ 0002fa2a ---- */

int FUN_0002fa2a(short *param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002fa12();
  if (iVar1 != 0) {
    if ((*param_1 == *param_2) && (iVar1 = FUN_000264e2(param_1 + 1,param_2 + 1,8), iVar1 == 0)) {
      return 1;
    }
    iVar1 = 0;
  }
  return iVar1;
}


/* ---- FUN_0002fa54 @ 0002fa54 ---- */

void FUN_0002fa54(uint param_1,undefined2 param_2)

{
  if (param_1 < 0x14) {
    *(undefined2 *)(DAT_0002fa64 + param_1 * 10) = param_2;
  }
  return;
}


/* ---- FUN_0002fa68 @ 0002fa68 ---- */

void FUN_0002fa68(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0002f844();
  iVar2 = FUN_00035fe8(param_1);
  if ((iVar2 == 0) && (uVar1 < 0x14)) {
    *(undefined2 *)(DAT_0002fa90 + uVar1 * 10) = 0xffff;
  }
  return;
}


/* ---- FUN_0002fa94 @ 0002fa94 ---- */

undefined2 FUN_0002fa94(uint param_1)

{
  int iVar1;
  
  if ((param_1 < 0x14) && (iVar1 = FUN_0002b544(), iVar1 != 0)) {
    return *(undefined2 *)(DAT_0002fab4 + param_1 * 10);
  }
  return 0xffff;
}


/* ---- FUN_0002fab8 @ 0002fab8 ---- */

ulonglong FUN_0002fab8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_18;
  int local_14;
  undefined4 local_10;
  
  uStack_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  FUN_000362e8();
  do {
    iVar1 = FUN_00036290(7,&local_10,&uStack_18);
    if (iVar1 == 0) {
      return CONCAT44(uStack_18,0xffff);
    }
    iVar1 = FUN_0002fa2a(param_1,local_14 + 0x46);
  } while ((iVar1 == 0) && (iVar1 = FUN_0002fa2a(param_1,local_14 + 0x2a), iVar1 == 0));
  return CONCAT44(uStack_18,local_10) & 0xffffffff0000ffff;
}


/* ---- FUN_0002faf4 @ 0002faf4 ---- */

undefined4 FUN_0002faf4(undefined4 param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*DAT_0002fb24;
  if (((param_2 == (uint *)0x0) || (uVar2 <= *param_2)) &&
     ((param_4 == (uint *)0x0 || (uVar2 <= *param_4)))) {
    uVar1 = FUN_00036680(DAT_0002fb28,uVar2,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 4;
}


/* ---- FUN_0002fb2c @ 0002fb2c ---- */

int * FUN_0002fb2c(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined auStack_70 [56];
  int aiStack_38 [8];
  undefined4 local_18 [2];
  
  FUN_000264be(DAT_0002fb98,0x10);
  if ((param_1 == 0) || (param_2 == 0)) {
    *DAT_0002fb9c = 0;
    piVar1 = (int *)0x0;
    software_interrupt(0x6e);
  }
  else {
    *DAT_0002fb9c = (char)param_2;
    FUN_0002648c(DAT_0002fb98,param_1,param_2 << 1);
    local_18[0] = 0;
    FUN_000264be(auStack_70,0x38);
    piVar1 = (int *)FUN_00036680(param_1,param_2,auStack_70,local_18,0,0);
    if (piVar1 == (int *)0x0) {
      piVar1 = aiStack_38;
      uVar2 = 0;
      do {
        piVar1[uVar2] = (int)(auStack_70 + uVar2 * 7);
        uVar2 = uVar2 + 1;
      } while (uVar2 < 8);
      software_interrupt(0x6e);
    }
  }
  return piVar1;
}


/* ---- FUN_0002fba0 @ 0002fba0 ---- */

undefined4 FUN_0002fba0(int param_1)

{
  undefined uVar1;
  int iVar2;
  
  *(int *)(param_1 + 4) = DAT_0002fbcc;
  iVar2 = FUN_000323c0(DAT_0002fbd0);
  if (iVar2 == 0) {
    uVar1 = FUN_0003412c();
    iVar2 = DAT_0002fbd0;
    *(undefined *)(DAT_0002fbd0 + 0x10) = uVar1;
    FUN_0003228c(*(undefined4 *)(DAT_0002fbcc + -4),iVar2 + -0x8c,0x8c,0x1c);
  }
  return 0;
}


/* ---- FUN_0002fbd4 @ 0002fbd4 ---- */

undefined4 FUN_0002fbd4(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  iVar4 = DAT_0002fc94;
  puVar3 = DAT_0002fc90;
  if (param_1 != 0) {
    *(undefined4 *)(DAT_0002fc90 + 4) = 0;
    return 1;
  }
  cVar1 = *(char *)(param_2 + 4);
  if (cVar1 == '\0') {
    *(undefined *)(param_2 + 4) = 1;
    iVar6 = FUN_00035c04();
  }
  else if (cVar1 == '\x01') {
    uVar5 = 0;
    while (*(char *)(DAT_0002fc94 + uVar5 * 0x14) != '\x02') {
      uVar5 = uVar5 + 1 & 0xffff;
      if (1 < uVar5) {
        *DAT_0002fc90 = 1;
        *(undefined4 *)(puVar3 + 4) = 0;
        return 0x1d1d;
      }
    }
    *(undefined *)(DAT_0002fc94 + uVar5 * 0x14) = 0;
    iVar6 = FUN_00035be8(*(undefined4 *)(iVar4 + uVar5 * 0x14 + 4));
  }
  else {
    puVar9 = (undefined4 *)(DAT_0002fc90 + 8);
    if (cVar1 == '\x02') {
      *(undefined *)(param_2 + 4) = 0;
      *(undefined2 *)(puVar3 + 0xc) = 2;
      iVar6 = FUN_00032d54(DAT_0002fc98,*puVar9,1,0);
    }
    else {
      if (cVar1 != '\x03') goto LAB_0002fc88;
      *(undefined *)(param_2 + 4) = 0;
      iVar6 = FUN_00035be8(*puVar9);
      uVar8 = *puVar9;
      uVar2 = *(ushort *)(DAT_0002fc94 + 0x2a);
      iVar7 = iVar4 + (uint)uVar2 * 0x14;
      *puVar9 = *(undefined4 *)(iVar7 + 4);
      *(undefined4 *)(iVar7 + 4) = uVar8;
      *(undefined2 *)(iVar7 + 8) = *(undefined2 *)(puVar3 + 0xc);
      *(undefined2 *)(puVar3 + 0xc) = 2;
      *(undefined *)(iVar4 + (uint)uVar2 * 0x14) = 0;
    }
  }
  if (iVar6 == 0) {
    return 0;
  }
LAB_0002fc88:
  *(undefined4 *)(puVar3 + 4) = 0;
  return 0xe;
}


/* ---- FUN_0002fc9c @ 0002fc9c ---- */

ushort * FUN_0002fc9c(uint param_1)

{
  ushort *puVar1;
  
  puVar1 = DAT_0002fcac;
  if (*DAT_0002fcac != param_1) {
    puVar1 = (ushort *)0x0;
  }
  return puVar1;
}


/* ---- FUN_0002fcb0 @ 0002fcb0 ---- */

void FUN_0002fcb0(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = -param_2;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  uVar3 = 1;
  for (; param_3 <= iVar1; iVar1 = iVar1 / param_3) {
    uVar3 = uVar3 + 1;
  }
  if (uVar3 < param_4) {
    uVar3 = param_4;
  }
  if ((param_5 != 0) && ((param_2 < 0 || ((int)(param_6 << 0x1d) < 0)))) {
    param_5 = param_5 - 1;
  }
  if (((-1 < (int)(param_6 << 0x1e)) || (param_4 != 0)) && ((param_6 & 1) == 0)) {
    for (; (param_5 != 0 && (uVar3 < param_5)); param_5 = param_5 - 1) {
      FUN_0002c408(param_1,0x20);
    }
  }
  if (param_2 < 0) {
    uVar2 = 0x2d;
    param_2 = -param_2;
  }
  else {
    if (-1 < (int)(param_6 << 0x1d)) goto LAB_0002fd22;
    uVar2 = 0x2b;
  }
  FUN_0002c408(param_1,uVar2);
LAB_0002fd22:
  if (((param_6 & 3) == 2) && (param_4 == 0)) {
    for (; (param_5 != 0 && (uVar3 < param_5)); param_5 = param_5 - 1) {
      FUN_0002c408(param_1,0x30);
    }
  }
  FUN_0003baf0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* ---- FUN_0002fd78 @ 0002fd78 ---- */

undefined4 FUN_0002fd78(uint *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if (-1 < (int)(uVar2 << 0x1d)) {
    return 0;
  }
  if ((uVar2 & 3) == 1) {
    iVar1 = ((uVar2 << 0x16) >> 0x1c) + 2 + *param_2;
  }
  else {
    if ((uVar2 & 3) != 2) {
      return 1;
    }
    iVar1 = *param_2 + (uVar2 >> 0x16) + 2;
  }
  *param_2 = iVar1;
  return 1;
}


/* ---- FUN_0002fdac @ 0002fdac ---- */

undefined4 FUN_0002fdac(int param_1,int param_2,uint param_3)

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


/* ---- FUN_0002fdd4 @ 0002fdd4 ---- */

void FUN_0002fdd4(int param_1,code **param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1 & 0xff) {
    iVar2 = uVar1 * 4 + 0x140;
    if ((*(int *)(param_1 + iVar2) != 0) && ((*(uint *)(param_1 + 0x304) & 0x10000 << uVar1) != 0))
    {
      FUN_00034270(param_1,iVar2);
      (**param_2)(iVar2,param_2[1]);
    }
  }
  return;
}


/* ---- FUN_0002fe1a @ 0002fe1a ---- */

undefined4 FUN_0002fe1a(void)

{
  return 1;
}


/* ---- FUN_0002fe20 @ 0002fe20 ---- */

undefined4 FUN_0002fe20(uint param_1)

{
  if ((1 << (param_1 & 0xff) & *(uint *)(DAT_0002fe34 + 4)) != 0) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0002fe38 @ 0002fe38 ---- */

undefined4 FUN_0002fe38(uint param_1)

{
  if ((uint)(1 << (param_1 & 0xff)) >> 0x11 != 0) {
    return 0;
  }
  return 1;
}


/* ---- FUN_0002fe54 @ 0002fe54 ---- */

undefined4 FUN_0002fe54(ushort *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1[2];
  uVar1 = param_3;
  if (uVar4 <= param_3) {
    uVar1 = uVar4;
  }
  uVar2 = (uint)param_1[3];
  uVar3 = param_4;
  if (uVar2 <= param_4) {
    uVar3 = uVar2;
  }
  if ((((*param_1 <= *(ushort *)(param_2 + 2)) && (*(ushort *)(param_2 + 2) <= param_1[1])) &&
      (uVar4 - uVar1 <= (uint)*(ushort *)(param_2 + 4))) &&
     ((((uint)*(ushort *)(param_2 + 4) <= uVar4 + param_3 &&
       (uVar2 - uVar3 <= (uint)*(ushort *)(param_2 + 6))) &&
      ((uint)*(ushort *)(param_2 + 6) <= uVar2 + param_4)))) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0002fe98 @ 0002fe98 ---- */

undefined4 FUN_0002fe98(int param_1,int param_2,int param_3,short *param_4)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if (param_3 == 0) {
    if ((uint)uVar1 != (uint)*(ushort *)(param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76 + 8)) {
      *param_4 = uVar1 + 1;
      sVar2 = *(short *)(param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76 + 8);
      goto LAB_0002fede;
    }
  }
  else {
    uVar3 = uVar1 + 1;
    if (uVar3 != *(ushort *)(param_3 + 6)) {
      *param_4 = (short)uVar3;
      sVar2 = *(short *)(param_3 + 6) + -1;
LAB_0002fede:
      param_4[1] = sVar2;
      return 1;
    }
  }
  return 0;
}


/* ---- FUN_0002fee4 @ 0002fee4 ---- */

int FUN_0002fee4(uint param_1)

{
  int iVar1;
  
  iVar1 = (1 << (param_1 & 0xff)) << 0xf;
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_0002fef0 @ 0002fef0 ---- */

undefined4 FUN_0002fef0(int param_1)

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


/* ---- FUN_0002ff04 @ 0002ff04 ---- */

undefined4 FUN_0002ff04(uint param_1)

{
  if ((param_1 & 3) != 0) {
    return 0;
  }
  return 1;
}


/* ---- leds_mode_test_js_run @ 0002ff10 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void leds_mode_test_js_run(void)

{
  int iVar1;
  undefined4 uVar2;
  
  leds_power_on();
  uVar2 = aw9109_build_breath_program(0xff,0x3c,0x1c2,0x1c2,0x32,0x32);
  iVar1 = _DAT_0002ff40;
  *(undefined *)(_DAT_0002ff40 + 10) = 1;
  debug_printf(s_____ledTestJs____d_0002ff43 + 1,uVar2);
  *(undefined *)(iVar1 + 0x31) = 0;
  return;
}


/* ---- led_motor_ctrl_queue_add @ 0002ff58 ---- */
/* 20 x 17 B */

/* 20 x 17 B */

undefined4 led_motor_ctrl_queue_add(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00033bb8(DAT_0002ff80);
  if (iVar1 == 0) {
    iVar1 = FUN_00033be4(DAT_0002ff80,param_1);
    if (iVar1 == 0) {
      return 1;
    }
    app_error_handler(iVar1,0x43,s__________user_queue_c_0002ff84);
  }
  return 0;
}


/* ---- led_motor_ctrl_queue_get @ 0002ff9c ---- */

undefined4 led_motor_ctrl_queue_get(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00033ba6(DAT_0002ffc8);
  if (iVar1 == 0) {
    iVar1 = FUN_00033b18(DAT_0002ffc8,param_1,0);
    if (iVar1 == 0) {
      return 1;
    }
    app_error_handler(iVar1,0x51,s__________user_queue_c_0002ffcc);
  }
  return 0;
}


/* ---- FUN_0002ffe4 @ 0002ffe4 ---- */

void FUN_0002ffe4(void)

{
  FUN_00033c96(DAT_0002ffec);
  return;
}


/* ---- led_motor_test_queue_add @ 0002fff0 ---- */
/* 256 x 15 B */

/* 256 x 15 B */

undefined4 led_motor_test_queue_add(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00033bb8(DAT_00030020);
  if (iVar1 == 0) {
    iVar1 = FUN_00033be4(DAT_00030020,param_1);
    if (iVar1 == 0) {
      return 1;
    }
    app_error_handler(iVar1,0x75,s__________user_queue_c_0003004c);
  }
  else {
    FUN_000379cc(s_led_motor_test_queue_is_full____t_00030024);
  }
  return 0;
}


/* ---- led_motor_test_queue_get @ 00030064 ---- */

undefined4 led_motor_test_queue_get(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00033ba6(DAT_00030090);
  if (iVar1 == 0) {
    iVar1 = FUN_00033b18(DAT_00030090,param_1,0);
    if (iVar1 == 0) {
      return 1;
    }
    app_error_handler(iVar1,0x83,s__________user_queue_c_00030094);
  }
  return 0;
}


/* ---- FUN_000300ac @ 000300ac ---- */

void FUN_000300ac(void)

{
  FUN_00033c96(DAT_000300b4);
  return;
}


/* ---- FUN_000300b8 @ 000300b8 ---- */

void FUN_000300b8(void)

{
  char cVar1;
  
  cVar1 = *DAT_000300d0;
  if (cVar1 != '\0') {
    *DAT_000300d0 = cVar1 + -1;
    if (cVar1 == '\x01') {
      start_execute_queue_led_motor_test();
      return;
    }
  }
  return;
}


/* ---- leds_mode_blink_run @ 000300d4 ---- */

undefined4 leds_mode_blink_run(void)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_00030124;
  if (*(char *)(DAT_00030124 + 0x31) == '\x16') {
    leds_power_on();
    leds_execute_timer_stop();
    uVar1 = *(undefined *)(iVar2 + 0x38);
    uVar3 = *(undefined4 *)(iVar2 + 0x34);
    aw9109_build_blink_program_3rgb
              (uVar3,uVar3,uVar3,uVar1,uVar1,uVar1,*(undefined2 *)(iVar2 + 0x3c),
               *(undefined2 *)(iVar2 + 0x40));
    if (*(int *)(iVar2 + 0x44) != 0) {
      leds_execute_timer_start(*(int *)(iVar2 + 0x44),0);
    }
    *(undefined *)(iVar2 + 0x31) = 0;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* ---- leds_mode_breath_disconnect_run @ 00030128 ---- */

undefined4 leds_mode_breath_disconnect_run(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00030174;
  if (*(char *)(DAT_00030174 + 0x31) != '\x12') {
    return 0;
  }
  leds_power_on();
  iVar3 = DAT_00030178;
  uVar1 = *(ushort *)(DAT_00030178 + 0x28) >> 1;
  aw9109_build_breath_program
            (*(undefined4 *)(DAT_00030178 + 0x30),*(undefined *)(iVar2 + 0x34),uVar1,uVar1,0,
             *(short *)(DAT_00030178 + 0x2a) + 100);
  *(undefined *)(iVar2 + 10) = 1;
  leds_execute_timer_start
            ((uint)*(ushort *)(iVar3 + 0x2a) + (uint)*(ushort *)(iVar3 + 0x28) * 2,DAT_0003017c);
  *(undefined *)(iVar2 + 0x31) = 0;
  return 1;
}


/* ---- leds_mode_breath_lowbattery_run @ 00030180 ---- */

undefined4 leds_mode_breath_lowbattery_run(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_000301d0;
  if (*(char *)(DAT_000301d0 + 0x31) != '\x13') {
    return 0;
  }
  leds_power_on();
  iVar3 = DAT_000301d4;
  uVar1 = *(ushort *)(DAT_000301d4 + 0x28) >> 1;
  aw9109_build_breath_program
            (*(undefined4 *)(DAT_000301d4 + 0x74),*(undefined *)(iVar2 + 0x34),uVar1,uVar1,0,
             *(short *)(DAT_000301d4 + 0x7c) + 100);
  iVar3 = (uint)*(ushort *)(iVar3 + 0x7c) + (uint)*(ushort *)(iVar3 + 0x28) * 2;
  if (iVar3 != 0) {
    leds_execute_timer_start(iVar3,0);
  }
  *(undefined *)(iVar2 + 0x31) = 0;
  return 1;
}


/* ---- leds_mode_breath_run @ 000301d8 ---- */

undefined4 leds_mode_breath_run(void)

{
  int iVar1;
  
  iVar1 = DAT_0003022c;
  if (*(char *)(DAT_0003022c + 0x31) != '\x11') {
    return 0;
  }
  leds_power_on();
  leds_execute_timer_stop();
  aw9109_build_breath_program
            (*(undefined4 *)(iVar1 + 0x34),*(undefined *)(iVar1 + 0x38),
             *(undefined2 *)(iVar1 + 0x3c),*(undefined2 *)(iVar1 + 0x40),
             *(undefined2 *)(iVar1 + 0x44),*(undefined2 *)(iVar1 + 0x48));
  if (*(int *)(iVar1 + 0x4c) != 0) {
    leds_execute_timer_start(*(int *)(iVar1 + 0x4c),0);
  }
  *(undefined *)(iVar1 + 0x31) = 0;
  return 1;
}


/* ---- leds_mode_constant_on_run @ 00030230 ---- */

undefined4 leds_mode_constant_on_run(void)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_00030270;
  if (*(char *)(DAT_00030270 + 0x31) != '\x15') {
    return 0;
  }
  leds_power_on();
  leds_execute_timer_stop();
  uVar1 = *(undefined *)(iVar2 + 0x38);
  uVar3 = *(undefined4 *)(iVar2 + 0x34);
  aw9109_build_constant_program(uVar3,uVar3,uVar3,uVar1,uVar1,uVar1);
  if (*(int *)(iVar2 + 0x3c) != 0) {
    leds_execute_timer_start(*(int *)(iVar2 + 0x3c),0);
  }
  *(undefined *)(iVar2 + 0x31) = 0;
  return 1;
}


/* ---- leds_mode_fade_out_run @ 00030274 ---- */

undefined4 leds_mode_fade_out_run(void)

{
  int iVar1;
  
  iVar1 = DAT_000302b4;
  if (*(char *)(DAT_000302b4 + 0x31) != '\x14') {
    return 0;
  }
  leds_power_on();
  leds_execute_timer_stop();
  aw9109_build_fade_program
            (*(undefined4 *)(iVar1 + 0x34),*(undefined *)(iVar1 + 0x38),
             *(undefined2 *)(iVar1 + 0x3c),*(undefined2 *)(iVar1 + 0x40));
  if (*(int *)(iVar1 + 0x44) != 0) {
    leds_execute_timer_start(*(int *)(iVar1 + 0x44),0);
  }
  *(undefined *)(iVar1 + 0x31) = 0;
  return 1;
}


/* ---- leds_mode_test_run @ 000302b8 ---- */

bool leds_mode_test_run(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_00030300;
  bVar2 = *(char *)(DAT_00030300 + 0x31) == '\x17';
  if (bVar2) {
    leds_power_on();
    aw9109_build_blink_program_3rgb
              (*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x38),
               *(undefined4 *)(iVar1 + 0x3c),*(undefined *)(iVar1 + 0x40),
               *(undefined *)(iVar1 + 0x44),*(undefined *)(iVar1 + 0x48),
               *(short *)(iVar1 + 0x4c) + 100,0);
    *(undefined *)(iVar1 + 0x31) = 0;
  }
  return bVar2;
}


/* ---- leds_power_on @ 00030304 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void leds_power_on(void)

{
  int iVar1;
  int iVar2;
  
  debug_printf(s_leds_runing_init_00030350);
  iVar1 = _DAT_00030364;
  if ((*(char *)(_DAT_00030364 + 0x2f) != '\x01') || (*(char *)(_DAT_00030364 + 0x30) != '\x01')) {
    debug_printf(s_power_on_motor_led_00030367 + 1);
    FUN_000378bc();
    (*DAT_0003037c)(0x1f400);
    iVar2 = FUN_0002a42c();
    if (iVar2 == 0) {
      debug_printf(s_func___s__failed___s___d_0003039c,DAT_00030398,s__________user_leds_c_00030380,
                   0x18b);
      return;
    }
    *(undefined *)(iVar1 + 0x30) = 1;
  }
  return;
}


/* ---- aw9109_build_breath_program @ 000303b8 ---- */

int aw9109_build_breath_program
              (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auStack_ac [80];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54 [2];
  
  iVar4 = FUN_0002a67c(2);
  if (iVar4 == 0) {
    FUN_0003374c(((uint)(DAT_0003059c - DAT_000305a0) >> 3) * 0x10000 + 1,
                 s_bond_leds_set_active_mode_failed_000305a4);
  }
  debug_printf(s_leds_start_color_breath__d__d__d_000305c8,param_1,param_2,param_3,param_4,param_5,
               param_6);
  FUN_000264be(auStack_ac,0x50);
  led_color_calibration(param_1,&local_5c,&local_58,local_54);
  uVar9 = FUN_000268e8(local_5c);
  uVar10 = FUN_0002685e(param_2);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar5 = (undefined4)uVar10;
  uVar7 = (undefined4)((ulonglong)DAT_000305fc >> 0x20);
  uVar8 = (undefined4)DAT_000305fc;
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_1 << 8) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_58);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_1 << 0x10) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_54[0]);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e(param_1 & 0xff);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268b6();
  FUN_00029f64(6,uVar1,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029f64(3,uVar1,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029f64(8,uVar1,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029f64(5,uVar2,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029f64(2,uVar2,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029f64(9,uVar2,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029f64(4,uVar3,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029f64(1,uVar3,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029f64(7,uVar3,param_3,param_4,param_5,param_6,auStack_ac);
  iVar4 = aw9109_load_program(auStack_ac,0x50);
  if ((iVar4 != 0) && (iVar4 = aw9109_run_program(), iVar4 != 0)) {
    iVar4 = 1;
  }
  return iVar4;
}


/* ---- aw9109_build_blink_program_3rgb @ 00030604 ---- */

int aw9109_build_blink_program_3rgb
              (uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
              undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auStack_74 [44];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  iVar4 = FUN_0002a67c(2);
  if (iVar4 == 0) {
    FUN_0003374c(((uint)(DAT_0003094c - DAT_00030950) >> 3) * 0x10000 + 1,
                 s_bond_leds_set_active_mode_failed_00030954);
  }
  FUN_000264be(auStack_74,0x2c);
  FUN_000264be(auStack_74,0x2c);
  led_color_calibration(param_1,&local_48,&local_44,&local_40);
  uVar9 = FUN_000268e8(local_48);
  uVar10 = FUN_0002685e(param_4);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar5 = (undefined4)uVar10;
  uVar7 = (undefined4)((ulonglong)DAT_00030978 >> 0x20);
  uVar8 = (undefined4)DAT_00030978;
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_1 << 8) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_44);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_1 << 0x10) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_40);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e(param_1 & 0xff);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268b6();
  aw9109_prog_set_channel_blink(6,uVar1,0,0,auStack_74);
  aw9109_prog_set_channel_blink(5,uVar2,0,0,auStack_74);
  aw9109_prog_set_channel_blink(4,uVar3,0,0,auStack_74);
  led_color_calibration(param_2,&local_48,&local_44,&local_40);
  uVar9 = FUN_000268e8(local_48);
  uVar10 = FUN_0002685e(param_5);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar5 = (undefined4)uVar10;
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_2 << 8) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_44);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_2 << 0x10) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_40);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e(param_2 & 0xff);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268b6();
  aw9109_prog_set_channel_blink(3,uVar1,0,0,auStack_74);
  aw9109_prog_set_channel_blink(2,uVar2,0,0,auStack_74);
  aw9109_prog_set_channel_blink(1,uVar3,0,0,auStack_74);
  led_color_calibration(param_3,&local_48,&local_44,&local_40);
  uVar9 = FUN_000268e8(local_48);
  uVar10 = FUN_0002685e(param_6);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar5 = (undefined4)uVar10;
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_3 << 8) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_44);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_3 << 0x10) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_40);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e(param_3 & 0xff);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268b6();
  aw9109_prog_set_channel_blink(8,uVar1,0,0,auStack_74);
  aw9109_prog_set_channel_blink(9,uVar2,0,0,auStack_74);
  aw9109_prog_set_channel_blink(7,uVar3,param_7,param_8,auStack_74);
  iVar4 = aw9109_load_program(auStack_74,0x2a);
  if ((iVar4 != 0) && (iVar4 = aw9109_run_program(), iVar4 != 0)) {
    iVar4 = 1;
  }
  return iVar4;
}


/* ---- aw9109_build_constant_program @ 00030980 ---- */

int aw9109_build_constant_program
              (uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
              undefined4 param_6)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auStack_60 [24];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  iVar4 = FUN_0002a67c(2);
  if (iVar4 == 0) {
    FUN_0003374c(((uint)(DAT_00030cb4 - DAT_00030cb8) >> 3) * 0x10000 + 1,
                 s_bond_leds_set_active_mode_failed_00030cbc);
  }
  FUN_000264be(auStack_60,0x18);
  FUN_000264be(auStack_60,0x18);
  led_color_calibration(param_1,&local_48,&local_44,&local_40);
  uVar9 = FUN_000268e8(local_48);
  uVar10 = FUN_0002685e(param_4);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar5 = (undefined4)uVar10;
  uVar7 = (undefined4)((ulonglong)DAT_00030ce0 >> 0x20);
  uVar8 = (undefined4)DAT_00030ce0;
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_1 << 8) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_44);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_1 << 0x10) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_40);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e(param_1 & 0xff);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268b6();
  FUN_0002a1e4(6,uVar1,0,auStack_60);
  FUN_0002a1e4(5,uVar2,0,auStack_60);
  FUN_0002a1e4(4,uVar3,0,auStack_60);
  led_color_calibration(param_2,&local_48,&local_44,&local_40);
  uVar9 = FUN_000268e8(local_48);
  uVar10 = FUN_0002685e(param_5);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar5 = (undefined4)uVar10;
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_2 << 8) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_44);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_2 << 0x10) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_40);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e(param_2 & 0xff);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268b6();
  FUN_0002a1e4(3,uVar1,0,auStack_60);
  FUN_0002a1e4(2,uVar2,0,auStack_60);
  FUN_0002a1e4(1,uVar3,0,auStack_60);
  led_color_calibration(param_3,&local_48,&local_44,&local_40);
  uVar9 = FUN_000268e8(local_48);
  uVar10 = FUN_0002685e(param_6);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar5 = (undefined4)uVar10;
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_3 << 8) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_44);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_3 << 0x10) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_40);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e(param_3 & 0xff);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268b6();
  FUN_0002a1e4(8,uVar1,0,auStack_60);
  FUN_0002a1e4(9,uVar2,0,auStack_60);
  FUN_0002a1e4(7,uVar3,15000,auStack_60);
  iVar4 = aw9109_load_program(auStack_60,0x16);
  if ((iVar4 != 0) && (iVar4 = aw9109_run_program(), iVar4 != 0)) {
    iVar4 = 1;
  }
  return iVar4;
}


/* ---- aw9109_build_fade_program @ 00030ce8 ---- */

int aw9109_build_fade_program(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auStack_84 [60];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [2];
  
  iVar4 = FUN_0002a67c(2);
  if (iVar4 == 0) {
    FUN_0003374c(((uint)(DAT_00030e94 - DAT_00030e98) >> 3) * 0x10000 + 1,
                 s_bond_leds_set_active_mode_failed_00030e9c);
  }
  FUN_000264be(auStack_84,0x3c);
  FUN_000264be(auStack_84,0x3c);
  led_color_calibration(param_1,&local_48,&local_44,local_40);
  uVar9 = FUN_000268e8(local_48);
  uVar10 = FUN_0002685e(param_2);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar5 = (undefined4)uVar10;
  uVar7 = (undefined4)((ulonglong)DAT_00030ec0 >> 0x20);
  uVar8 = (undefined4)DAT_00030ec0;
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_1 << 8) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_44);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e((param_1 << 0x10) >> 0x18);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268b6();
  uVar9 = FUN_000268e8(local_40[0]);
  uVar10 = FUN_0002675e(uVar5,uVar6,uVar8,uVar7);
  uVar11 = FUN_0002685e(param_1 & 0xff);
  uVar10 = FUN_0002667a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0002667a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268b6();
  FUN_0002a0d4(6,uVar1,param_3,param_4,auStack_84);
  FUN_0002a0d4(3,uVar1,param_3,param_4,auStack_84);
  FUN_0002a0d4(8,uVar1,param_3,param_4,auStack_84);
  FUN_0002a0d4(5,uVar2,param_3,param_4,auStack_84);
  FUN_0002a0d4(2,uVar2,param_3,param_4,auStack_84);
  FUN_0002a0d4(9,uVar2,param_3,param_4,auStack_84);
  FUN_0002a0d4(4,uVar3,param_3,param_4,auStack_84);
  FUN_0002a0d4(1,uVar3,param_3,param_4,auStack_84);
  FUN_0002a0d4(7,uVar3,param_3,param_4,auStack_84);
  iVar4 = aw9109_load_program(auStack_84,0x3a);
  if ((iVar4 != 0) && (iVar4 = aw9109_run_program(), iVar4 != 0)) {
    iVar4 = 1;
  }
  return iVar4;
}


/* ---- FUN_00030ec8 @ 00030ec8 ---- */

void FUN_00030ec8(undefined2 *param_1)

{
  *param_1 = 0xf7;
  param_1[1] = 0x17;
  *(undefined *)(param_1 + 2) = 0;
  *(undefined *)((int)param_1 + 5) = 0;
  *(undefined *)(param_1 + 3) = 0x1b;
  *(undefined *)((int)param_1 + 7) = 0x1b;
  return;
}


/* ---- FUN_00030ee0 @ 00030ee0 ---- */

undefined8 FUN_00030ee0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar1 = DAT_00030fa0;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  if (param_2 == 0) {
    FUN_00031dd8(&local_30);
    FUN_00035df8(param_1,0,&local_30);
    iVar5 = local_30;
    if ((*pcVar1 == '\0') && (uStack_28._1_1_ == '\0')) {
      iVar3 = 5;
      goto LAB_00030f3a;
    }
  }
  else {
    iVar5 = 0;
  }
  iVar2 = FUN_0003a194(param_1,iVar5,param_3);
  FUN_0002e58c(param_1,iVar2,0);
  iVar3 = iVar2;
  if (iVar2 != 0xd) {
    if (iVar2 < 0xe) {
      if (((iVar2 != 0) && (iVar2 != 8)) && (iVar2 != 0xb)) {
LAB_00030f4a:
        uVar4 = FUN_0003425c(iVar2);
        FUN_00033762(((uint)(DAT_00030fa4 - DAT_00030fa8) >> 3) * 0x10000 + 1,DAT_00030fac,uVar4,
                     param_1);
        iVar3 = 3;
      }
    }
    else if (iVar2 == 0x11) {
      FUN_0002b504(param_1,pcVar1[3],param_2);
      FUN_0002b504(param_1,pcVar1[2],param_3);
      iVar3 = 0;
    }
    else if (iVar2 != 0x3002) goto LAB_00030f4a;
  }
  if (param_4 != 0) {
    FUN_0002de18(param_1,iVar2,iVar5);
  }
LAB_00030f3a:
  return CONCAT44(local_30,iVar3);
}


/* ---- FUN_00030fb0 @ 00030fb0 ---- */

void FUN_00030fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0002b4d4(param_1,*DAT_00030fe8);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_00035d44(param_1);
  if (iVar1 != 0) {
    FUN_00035d50();
    return;
  }
  FUN_0002dcd8(param_1,param_2,param_3);
  return;
}


/* ---- FUN_00030fec @ 00030fec ---- */

void FUN_00030fec(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_00031014;
  uVar2 = FUN_0002b4d4(param_1,*(undefined *)(DAT_00031014 + 2));
  uVar3 = FUN_0002b4d4(param_1,*(undefined *)(iVar1 + 3));
  FUN_00030ee0(param_1,uVar3,uVar2,1);
  return;
}


/* ---- FUN_00031018 @ 00031018 ---- */

undefined4 FUN_00031018(int *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  
  pbVar4 = DAT_00031108;
  iVar3 = DAT_00031104;
  bVar2 = false;
  iVar10 = *(int *)(DAT_00031104 + 4);
  do {
    if (param_1 == (int *)0x0) {
      do {
        while( true ) {
          if (*pbVar4 == pbVar4[1]) {
            if ((bVar2) || (*(int *)(iVar3 + 4) != iVar10)) {
              uVar7 = 1;
            }
            else {
              uVar7 = 0;
            }
            return uVar7;
          }
LAB_00031038:
          uVar8 = (uint)*pbVar4;
          *pbVar4 = (byte)(uVar8 + 1);
          if ((uVar8 + 1 & 0xff) == (uint)pbVar4[2]) {
            *pbVar4 = 0;
          }
          piVar5 = *(int **)(pbVar4 + uVar8 * 0x18 + 8);
          bVar1 = pbVar4[uVar8 * 0x18 + 4];
          if (bVar1 == 1) break;
          if (bVar1 == 2) {
            iVar6 = FUN_0003aa5c();
            if (iVar6 != 0) {
              bVar2 = true;
            }
            *(undefined *)(piVar5 + 4) = 0;
          }
          else if (bVar1 == 3) {
            for (iVar6 = *(int *)(iVar3 + 4); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x1c)) {
              *(undefined *)(iVar6 + 0x10) = 0;
            }
            *(undefined4 *)(iVar3 + 4) = 0;
          }
        }
      } while (*(char *)(piVar5 + 4) != '\0');
      piVar5[1] = *(int *)(pbVar4 + uVar8 * 0x18 + 0xc);
      piVar5[2] = *(int *)(pbVar4 + uVar8 * 0x18 + 0x10);
      piVar5[3] = *(int *)(pbVar4 + uVar8 * 0x18 + 0x14);
      piVar5[6] = *(int *)(pbVar4 + uVar8 * 0x18 + 0x18);
      piVar9 = param_1;
      if (*(char *)(iVar3 + 3) != '\0') {
        piVar5[1] = 0;
      }
    }
    else {
      if (param_1 == (int *)0x0) goto LAB_00031038;
      piVar9 = (int *)param_1[7];
      piVar5 = param_1;
    }
    uVar8 = piVar5[1] - *(int *)(iVar3 + 8) & 0xffffff;
    if (uVar8 < DAT_0003110c) {
      iVar6 = uVar8 + piVar5[2];
LAB_000310c8:
      *piVar5 = iVar6;
    }
    else {
      uVar8 = *(int *)(iVar3 + 8) - piVar5[1] & 0xffffff;
      if (uVar8 < (uint)piVar5[2]) {
        iVar6 = piVar5[2] - uVar8;
        goto LAB_000310c8;
      }
      *piVar5 = 0;
    }
    piVar5[1] = 0;
    piVar5[2] = 0;
    *(undefined *)(piVar5 + 4) = 1;
    piVar5[7] = 0;
    FUN_0003aa20(piVar5);
    param_1 = piVar9;
  } while( true );
}


/* ---- FUN_00031110 @ 00031110 ---- */

void FUN_00031110(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined local_30 [2];
  undefined2 local_2e;
  
  uVar4 = 0;
  FUN_000264be(local_30,0x18);
  local_2e = (undefined2)param_1;
  if (param_1 == 0xffff) {
    return;
  }
  iVar1 = FUN_0002f418(param_1);
  if (iVar1 == 0) {
    local_30[0] = 0xe;
  }
  else {
    uVar3 = (uint)(DAT_000311a4 - DAT_000311a8) >> 3;
    if (iVar1 != 0xb) {
      if (iVar1 == 0x11) {
        uVar4 = 1;
      }
      else if (iVar1 != 0x3002) {
        uVar2 = FUN_0003425c(iVar1);
        FUN_00033762(uVar3 * 0x10000 + 1,DAT_000311ac,uVar2,param_1);
        FUN_000399a0(param_1,iVar1);
      }
      goto LAB_0003116c;
    }
    local_30[0] = 0xf;
    FUN_00033754(uVar3 * 0x10000 + 2,DAT_000311b4,param_1);
  }
  FUN_0002dec4(local_30);
LAB_0003116c:
  FUN_0002b504(param_1,*(undefined *)(DAT_000311b0 + 2),uVar4);
  return;
}


/* ---- FUN_000311b8 @ 000311b8 ---- */

void FUN_000311b8(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b504(param_1,*(undefined *)(DAT_000311c4 + 1),param_2);
  return;
}


/* ---- FUN_000311c8 @ 000311c8 ---- */

undefined4 FUN_000311c8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined auStack_30 [2];
  undefined2 local_2e;
  
  uVar5 = 0;
  uVar4 = 0;
  iVar1 = FUN_0002f4a8();
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  else if (iVar1 == 0x11) {
    uVar5 = 1;
  }
  else {
    uVar3 = (uint)(DAT_00031250 - DAT_00031254) >> 3;
    if (iVar1 == 0x86) {
      FUN_0002648c(auStack_30,DAT_00031298,0x18);
      local_2e = (undefined2)param_1;
      FUN_00033754(uVar3 * 0x10000 + 2,s_Flash_full__Could_not_store_data_0003129c,param_1);
      FUN_0002dec4(auStack_30);
    }
    else if (iVar1 != 0x3002) {
      uVar2 = FUN_0003425c(iVar1);
      FUN_00033762(uVar3 * 0x10000 + 1,s_gscm_local_db_cache_update___ret_00031258,uVar2,param_1);
      FUN_000399a0(param_1,iVar1);
    }
  }
  FUN_000311b8(param_1,uVar5);
  return uVar4;
}


/* ---- FUN_000312d4 @ 000312d4 ---- */

undefined2 FUN_000312d4(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  uint local_28;
  uint local_24;
  undefined4 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  
  local_28 = param_1;
  local_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  FUN_000323ba(DAT_00031368);
  iVar2 = DAT_00031368 + -4;
  FUN_000323ba();
  iVar1 = DAT_0003136c;
  local_28 = *(uint *)(DAT_0003136c + 4);
  uVar6 = *(uint *)(DAT_0003136c + 8);
  do {
    iVar3 = FUN_0002fd78(iVar1 + (local_28 & uVar6) * 4 + 0xc,&local_28);
  } while (iVar3 != 0);
  uVar4 = 0;
  do {
    uVar5 = local_28 & uVar6;
    local_28 = local_28 + 1;
    (&local_24)[uVar4] = *(uint *)(iVar1 + uVar5 * 4 + 0xc);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  if ((local_24 & 3) == 1) {
    uVar6 = (local_24 << 0x16) >> 0x1c;
  }
  else {
    uVar7 = 0;
    if ((local_24 & 3) != 2) goto LAB_00031354;
    uVar6 = (local_24 >> 0x16) + 3 >> 2;
  }
  local_28 = local_28 + uVar6;
  uVar7 = uStack_1e;
LAB_00031354:
  iVar2 = FUN_000323b4(iVar2);
  if (iVar2 != 0) {
    *(uint *)(iVar1 + 4) = local_28;
  }
  return uVar7;
}


/* ---- FUN_00031370 @ 00031370 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031370(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = DAT_0003143c;
  *(int *)(DAT_0003143c + 0x14) = *(int *)(DAT_0003143c + 0x14) + 1;
  debug_printf(s___d__00031440);
  if (*(int *)(iVar3 + 0x14) != 0x14) {
    return;
  }
  *(undefined *)(iVar3 + 0xd) = 1;
  debug_printf(s______userSelectID____d_00031448,*(undefined *)(iVar3 + 0xb));
  debug_printf(s_into_use_select_page______00031460);
  FUN_000315c4();
  iVar2 = _DAT_0003147c;
  cVar1 = *(char *)(_DAT_0003147c + 8);
  if ((cVar1 == -0x7f) || (cVar1 == '\x01')) {
    debug_printf(s_Double_TAP_detected__001_0003147f + 1);
    FUN_0003c834(0);
    if (*(char *)(iVar2 + 8) == -0x7f) {
      debug_printf(s_Double_TAP_detected__002_0003149c);
    }
    iVar3 = FUN_00028a64();
    if (iVar3 != 0) {
      debug_printf(s_Start_adv_ERROR_in_func___s__lin_000314bc,DAT_000314b8,0x30a);
    }
    pcVar4 = s_Double_TAP_detected__003_000314e8;
  }
  else {
    if (cVar1 == -0x7c) {
      if (*(char *)(_DAT_0003147c + 0xd) == '\x12') {
        debug_printf(s_Double_TAP_detected__004_00031520);
        FUN_000387d4();
        return;
      }
    }
    else if (cVar1 == -0x7b) {
      debug_printf(s_Double_tap_detected_in_double_ta_0003153c);
      FUN_0003d454(0);
      if ((*(char *)(DAT_00031570 + 0x4d) != '\x01') && (*(char *)(DAT_00031570 + 0x4e) != '\x01'))
      {
        *(undefined *)(iVar3 + 0xc) = 0;
        FUN_0003c4d4(200,0);
        return;
      }
      *(undefined *)(DAT_0002fd70 + 0xb) = 0;
      FUN_0003cc48();
      *(undefined *)(DAT_0002fd74 + 0x31) = 0x19;
      return;
    }
    FUN_0003c834(1);
    pcVar4 = s_Double_TAP_detected__007_00031504;
  }
  debug_printf(pcVar4);
  return;
}


/* ---- FUN_00031574 @ 00031574 ---- */

void FUN_00031574(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_000315a4;
  if (*(char *)(DAT_000315a4 + 8) == '\0') {
    *(undefined *)(DAT_000315a4 + 8) = 1;
    iVar2 = app_timer_start(*(undefined4 *)(DAT_000315a8 + 0xc),0xccd,0);
    if (iVar2 != 0) {
      app_error_handler(iVar2,0x29a,s__________user_timer_c_000315ac);
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  return;
}


/* ---- FUN_000315c4 @ 000315c4 ---- */

void FUN_000315c4(void)

{
  int iVar1;
  
  if (*(char *)(DAT_000315f0 + 8) != '\0') {
    *(undefined *)(DAT_000315f0 + 8) = 0;
    iVar1 = FUN_00029aec(*(undefined4 *)(DAT_000315f4 + 0xc));
    if (iVar1 != 0) {
      app_error_handler(iVar1,0x2a7,s__________user_timer_c_000315f8);
      return;
    }
  }
  return;
}


/* ---- main_loop @ 00031610 ---- */
/* LEDS_MODE switch 0x11..0x1a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LEDS_MODE switch 0x11..0x1a */

void main_loop(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char local_40 [32];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined uStack_14;
  undefined2 uStack_12;
  undefined uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_000329cc(200);
  iVar3 = FUN_00033844(0,0x8000);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x67f,DAT_000318c0);
  }
  FUN_00033500();
  debug_printf(s_SEGGER_RTT_Init_000318c4);
  FUN_0002e5f4();
  FUN_00027848();
  FUN_0003328c(0xb);
  _DAT_50000508 = 0x800;
  FUN_000329cc(0x14);
  FUN_0003328c(0x13);
  FUN_0003328c(6);
  FUN_000331d8(8,0,0,3,0,0);
  iVar3 = FUN_000299bc();
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x2dd,DAT_000318c0);
  }
  FUN_0003cd74();
  FUN_0003abd0();
  iVar3 = FUN_00029718(8,10,DAT_000318d8);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x66d,DAT_000318c0);
  }
  iVar3 = FUN_00033a70();
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x68b,DAT_000318c0);
  }
  FUN_0002c208();
  FUN_00029754();
  FUN_000264be(_DAT_000318dc,0x54);
  iVar3 = _DAT_000318dc;
  *(undefined *)(_DAT_000318dc + 8) = 1;
  *(undefined *)(iVar3 + 9) = 0xff;
  *(undefined *)(iVar3 + 0x1c) = 0;
  *(undefined *)(iVar3 + 0x2e) = 0;
  *(undefined *)(iVar3 + 0x2f) = 0;
  *(undefined *)(iVar3 + 0x30) = 0;
  *(undefined *)(iVar3 + 0x31) = 0;
  *(undefined *)(iVar3 + 0x50) = 0;
  *(undefined *)(iVar3 + 0x51) = 0;
  debug_printf(s_Apple_Notification_Center_Servic_000318df + 1);
  FUN_000287a4();
  FUN_0002a818();
  debug_printf(s_motor_init___0003191c);
  FUN_00031c18();
  FUN_0002c348();
  FUN_0003b17c();
  FUN_00037a88(s_Apple_Notification_Center_Servic_000318df + 1);
  FUN_0002a2e4();
  FUN_0003c834(0);
  FUN_0002e780();
  iVar4 = FUN_0003258a(DAT_00031930,DAT_0003192c);
  if (iVar4 != 0) {
    app_error_handler(iVar4,0x3d2,DAT_000318c0);
  }
  iVar4 = FUN_00032572(DAT_00031930,0xf7);
  if (iVar4 != 0) {
    app_error_handler(iVar4,0x3d5,DAT_000318c0);
  }
  iVar4 = FUN_0002b598(DAT_00031934);
  if (iVar4 != 0) {
    app_error_handler(iVar4,0x676,DAT_000318c0);
  }
  FUN_00039aa4();
  FUN_00028844();
  FUN_000264be(&uStack_20,0x1c);
  uStack_20 = 0;
  uStack_1c = 0x28000;
  uStack_18 = 0xf0000;
  uStack_14 = 3;
  uStack_12 = 0;
  uStack_10 = 1;
  uStack_c = 0;
  uStack_8 = DAT_00031938;
  iVar4 = FUN_0002b39c(&uStack_20);
  if (iVar4 != 0) {
    app_error_handler(iVar4,0x403,DAT_000318c0);
  }
  FUN_000365fc();
  FUN_00028e8c();
  FUN_000329cc(100);
  FUN_0002f598();
  FUN_000329cc(100);
  FUN_0002f598();
  FUN_000329cc(100);
  FUN_0002f598();
  if (*(char *)(iVar3 + 0x50) != '\x01') {
    cVar2 = FUN_0002f344();
    debug_printf(s_____get_charge_state___x_0003193c,cVar2);
    puVar1 = DAT_00031958;
    *(char *)(iVar3 + 9) = cVar2;
    if (cVar2 == '\x01') {
      *puVar1 = 1;
      FUN_00038370();
    }
    else if (cVar2 == '\x02') {
      *puVar1 = 1;
      FUN_000381d8();
    }
    else if (cVar2 == '\0') {
      FUN_00028954(0);
    }
  }
  *DAT_0003195c = *DAT_0003195c | 4;
  software_interrupt(0x34);
  debug_printf(s_powerSource___x_00031960,uStack_4);
  software_interrupt(0x35);
  iVar4 = 0;
  do {
    local_40[iVar4] = (char)iVar4 + '\x01';
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x16);
  FUN_00031cdc();
  do {
    if ((*(char *)(iVar3 + 0x50) == '\x01') &&
       ((*(char *)(iVar3 + 8) == -0x79 || (*(char *)(iVar3 + 8) == -0x80)))) {
      FUN_00038234();
    }
    switch(*(undefined *)(iVar3 + 0x31)) {
    case 0x11:
      debug_printf(s_LED_MODE_______LEDS_MODE_BREATH__00031974);
      leds_mode_breath_run();
      break;
    case 0x12:
      debug_printf(s_LED_MODE_______LEDS_MODE_BREATH__00031998);
      leds_mode_breath_disconnect_run();
      break;
    case 0x13:
      debug_printf(s_LED_MODE_______LEDS_MODE_BREATH__000319c8);
      leds_mode_breath_lowbattery_run();
      break;
    case 0x14:
      debug_printf(s_LED_MODE_______LEDS_MODE_FADE_OU_000319f8);
      leds_mode_fade_out_run();
      break;
    case 0x15:
      debug_printf(s_LED_MODE_______LEDS_MODE_CONSTAN_00031a20);
      leds_mode_constant_on_run();
      break;
    case 0x16:
      debug_printf(s_LED_MODE_______LEDS_MODE_BLINK___00031a4c);
      leds_mode_blink_run();
      break;
    case 0x17:
      debug_printf(s_LED_MODE_______LEDS_MODE_TEST____00031a70);
      leds_mode_test_run();
      break;
    case 0x19:
      leds_mode_user_select_breath();
      break;
    case 0x1a:
      debug_printf(s_LED_MODE_______LEDS_MODE_TEST_JS_00031a94);
      leds_mode_test_js_run();
    }
    FUN_0002f598();
  } while( true );
}


/* ---- FUN_00031abc @ 00031abc ---- */

undefined4 FUN_00031abc(undefined2 *param_1,int param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  
  uVar1 = param_1[2];
  if ((uVar1 + 4 + (uint)*param_3 <= param_4) && (uVar1 + 2 < 0xff)) {
    *(char *)(param_2 + (uint)*param_3) = (char)uVar1 + '\x03';
    uVar1 = *param_3;
    *param_3 = uVar1 + 1;
    *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0xff;
    uVar1 = *param_3;
    *param_3 = uVar1 + 1;
    sVar2 = FUN_0003bab4(*param_1,(uint)(ushort)(uVar1 + 1) + param_2);
    uVar1 = *param_3;
    *param_3 = sVar2 + uVar1;
    if (param_1[2] != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        return 7;
      }
      FUN_0002648c((uint)(ushort)(sVar2 + uVar1) + param_2);
      *param_3 = *param_3 + param_1[2];
    }
    return 0;
  }
  return 0xc;
}


/* ---- FUN_00031b20 @ 00031b20 ---- */

void FUN_00031b20(int **param_1,int param_2,uint *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = (uint)*(ushort *)((int)param_1 + 6);
  uVar5 = param_4 + 4;
  uVar2 = uVar5 / uVar4;
  iVar8 = uVar5 - uVar4 * (uVar5 / uVar4);
  uVar6 = *param_3;
  uVar5 = uVar4 * *(byte *)((int)param_1 + 5) - 4;
  if (uVar5 < uVar6 + param_4) {
    uVar6 = uVar5 - param_4;
  }
  *param_3 = uVar6;
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    param_1 = (int **)*param_1;
  }
  iVar7 = 0;
  uVar5 = uVar4 - iVar8;
  if (uVar6 < uVar4 - iVar8) goto LAB_00031b90;
  while (uVar6 != 0) {
    iVar1 = (int)param_1 + iVar8 + 4;
    iVar3 = param_2 + iVar7;
    iVar8 = iVar1;
    if (param_5 != 0) {
      iVar8 = iVar3;
      iVar3 = iVar1;
    }
    FUN_0002648c(iVar8,iVar3,uVar5);
    param_1 = (int **)*param_1;
    uVar6 = uVar6 - uVar5;
    iVar8 = 0;
    iVar7 = iVar7 + uVar5;
    uVar5 = uVar4;
    if (uVar6 < uVar4) {
LAB_00031b90:
      uVar5 = uVar6;
    }
  }
  return;
}


/* ---- FUN_00031b9e @ 00031b9e ---- */

void FUN_00031b9e(void)

{
  FUN_0003d514(0x21,0xd);
  FUN_0003d514(0x2a,6);
  FUN_0003d514(0x2b,0xc);
  FUN_0003d514(0x19,0x10);
  FUN_0003d514(0x16,0x90);
  return;
}


/* ---- FUN_00031bcc @ 00031bcc ---- */

void FUN_00031bcc(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00038cf0();
  FUN_0003d514(param_1,param_3 & param_2 | uVar1 & ~param_2);
  return;
}


/* ---- FUN_00031be8 @ 00031be8 ---- */

undefined4 FUN_00031be8(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_00033880();
    uVar2 = 0;
    while( true ) {
      if (uVar1 <= uVar2) {
        return 5;
      }
      if ((uint)*(ushort *)(DAT_00031c14 + uVar2 * 4) == *param_1) break;
      uVar2 = uVar2 + 1;
    }
    *param_1 = uVar2;
  }
  return 0;
}


/* ---- FUN_00031c18 @ 00031c18 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031c18(void)

{
  int iVar1;
  undefined auStack_20 [8];
  undefined local_18;
  
  FUN_000332a0(0x13);
  _DAT_5000050c = 0x80000;
  FUN_0002648c(auStack_20,DAT_00031c58,0x14);
  local_18 = 1;
  iVar1 = FUN_000294ac(DAT_00031c58 + -8,auStack_20,0);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x92,s__________bsp_bond_c_00031c5c);
  }
  return;
}


/* ---- FUN_00031c70 @ 00031c70 ---- */

undefined4 FUN_00031c70(uint param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_00031ca8;
  if ((param_1 < 0x65) && (param_1 != 0)) {
    DAT_00031ca8[1] = '\x02';
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
      pcVar1[2] = '\x01';
      FUN_00029434(DAT_00031cac);
    }
    do {
      iVar2 = FUN_00029238(DAT_00031cac,0,param_1);
    } while (iVar2 == 0x11);
    return 1;
  }
  return 0;
}


/* ---- FUN_00031cb0 @ 00031cb0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031cb0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00031cd4;
  _DAT_5000050c = 0x80000;
  if (*DAT_00031cd4 != '\0') {
    DAT_00031cd4[1] = '\x02';
    *pcVar1 = '\0';
    FUN_000293bc(DAT_00031cd8);
    return;
  }
  return;
}


/* ---- FUN_00031cdc @ 00031cdc ---- */

void FUN_00031cdc(void)

{
  int iVar1;
  
  if (*(char *)(DAT_00031d0c + 1) == '\0') {
    *(undefined *)(DAT_00031d0c + 1) = 1;
    iVar1 = app_timer_start(*(undefined4 *)(DAT_00031d10 + 4),0x8000,0);
    if (iVar1 != 0) {
      app_error_handler(iVar1,0x2b8,s__________user_ble_c_00031d14);
      return;
    }
  }
  return;
}


/* ---- thunk_FUN_0003238a @ 00031d28 ---- */

void thunk_FUN_0003238a(void)

{
  DataMemoryBarrier(0x1f);
  FUN_0003238a();
  return;
}


/* ---- FUN_00031d30 @ 00031d30 ---- */

longlong FUN_00031d30(byte *param_1,int param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint local_18;
  
  puVar5 = &local_18;
  local_18 = (uint)*param_1;
  if ((local_18 == 1) && (param_1[1] == 0)) {
    iVar4 = 7;
    puVar5 = (uint *)0x1;
LAB_00031d52:
    return CONCAT44(puVar5,iVar4);
  }
  uVar3 = (uint)*param_3;
  if ((uVar3 + 2 <= param_4) &&
     ((local_18 != 1 || (local_18 = param_1[1] + uVar3 + 2, local_18 <= param_4)))) {
    uVar3 = (param_4 - uVar3) - 2;
    local_18 = uVar3 & 0xffff;
    iVar4 = param_2 + 2 + (uint)*param_3;
    software_interrupt(0x7d);
    if (iVar4 != 0) goto LAB_00031d52;
    if ((*param_1 == 2) || (local_18 <= param_1[1])) {
      uVar2 = 9;
    }
    else {
      uVar2 = 8;
      if ((*param_1 == 1) && ((uint)param_1[1] <= (uVar3 & 0xffff))) {
        local_18 = (uint)param_1[1];
      }
      else {
        local_18 = uVar3 & 0xffff;
      }
    }
    if (local_18 < 0xff) {
      *(char *)(param_2 + (uint)*param_3) = (char)local_18 + '\x01';
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = uVar2;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *param_3 = uVar1 + 1 + (ushort)local_18;
      return (ulonglong)(ushort)local_18 << 0x20;
    }
  }
  return CONCAT44(local_18,0xc);
}


/* ---- FUN_00031dd8 @ 00031dd8 ---- */

void FUN_00031dd8(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(DAT_00031de8 + 8);
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* ---- FUN_00031dec @ 00031dec ---- */

ushort FUN_00031dec(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  
  if (param_1 == 0xffff) {
    uVar1 = 0;
  }
  else {
    uVar1 = (short)param_1 + 1;
  }
  while( true ) {
    if (0xff < uVar1) {
      return 0xffff;
    }
    iVar2 = FUN_0003238a(param_2,uVar1);
    if (iVar2 != 0) break;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}


/* ---- FUN_00031e1c @ 00031e1c ---- */

void FUN_00031e1c(ushort *param_1)

{
  ushort uVar1;
  undefined auStack_28 [32];
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    debug_printf(s__s___N_A__00031eb4,*(undefined4 *)(DAT_00031eb0 + *(int *)(param_1 + 2) * 4));
  }
  else if (*(int *)(param_1 + 2) == 0) {
    if (0x1d < uVar1) {
      *param_1 = 0x1e;
    }
    FUN_0002648c(auStack_28,*(undefined4 *)(param_1 + 4),*param_1);
    FUN_000379cc(s_APP_NAME__d__s_00031ea0,*param_1,auStack_28);
    FUN_0003a81c(auStack_28,*param_1);
  }
  else if (*(int *)(param_1 + 2) == 1) {
    if (0x1d < uVar1) {
      *param_1 = 0x1e;
    }
    FUN_0002648c(auStack_28,*(undefined4 *)(param_1 + 4),*param_1);
    debug_printf(s_APP_TITLE__d__s_00031e8c,*param_1,auStack_28);
    FUN_0003a790(auStack_28,*param_1);
  }
  return;
}


/* ---- FUN_00031ec4 @ 00031ec4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031ec4(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  debug_printf(s_Notification_00031f78);
  debug_printf(s_Event___s_00031f8b + 1,
               *(undefined4 *)(_DAT_00031f88 + (uint)*(byte *)(param_1 + 1) * 4));
  debug_printf(s_Category_ID___s_00031fa0,
               *(undefined4 *)(_DAT_00031f88 + -0x30 + (uint)*(byte *)((int)param_1 + 6) * 4));
  debug_printf(s_Category_Cnt__u_00031fb4,*(undefined *)((int)param_1 + 7));
  debug_printf(s_UID___u_00031fc8,*param_1);
  pcVar2 = _DAT_00031fe0;
  pcVar1 = DAT_00031fdc;
  debug_printf(s_Flags___d__d_00031fe3 + 1,*_DAT_00031fe0,*DAT_00031fdc);
  if (*pcVar2 == '\0') {
    *pcVar1 = '\x04';
    FUN_00031cdc();
  }
  if (*pcVar1 == '\0') {
    FUN_000379cc(s_mes_get_____00031ff4);
    iVar3 = FUN_00032552(_DAT_00032008,DAT_00032004);
    if (iVar3 != 0) {
      app_error_handler(iVar3,0x205,s__________main_c_0003200b + 1);
    }
  }
  if ((*(byte *)((int)param_1 + 5) & 1) != 0) {
    debug_printf(s_Silent_0003201c);
  }
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1e) < 0) {
    debug_printf(s_Important_00032028);
  }
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1d) < 0) {
    debug_printf(s_Pre_existing_00032034);
  }
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1c) < 0) {
    debug_printf(s_Positive_Action_00032044);
  }
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1b) < 0) {
    debug_printf(s_Negative_Action_00032058);
    return;
  }
  return;
}


/* ---- FUN_0003206c @ 0003206c ---- */

uint FUN_0003206c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  debug_printf(s_notify_event_to_app_000320e8);
  iVar1 = DAT_00032100;
  uVar2 = 0;
  if ((*(short *)(DAT_00032100 + 0xaa) != -1) &&
     (uVar2 = FUN_0002b342(DAT_00032100,param_1), uVar2 != 0)) {
    uVar3 = (uint)(DAT_00032104 - DAT_00032108) >> 3;
    FUN_00033772(uVar3 * 0x10000 + 1,s_func___s__line__d_ERROR__code__0_00032110,DAT_0003210c,0x153,
                 uVar2);
    if (uVar2 == 8) {
      FUN_0003374c(uVar3 * 0x10000 + 2,s_AAthe_central_doesn_t_allow_noti_0003214c);
    }
    else if (uVar2 == 0x3401) {
      uVar2 = (uint)*(ushort *)(iVar1 + 0xaa);
      software_interrupt(0xb1);
      if (uVar2 != 0) {
        app_error_handler(uVar2,0x160,s__________app_misc_c_00032138,1);
      }
    }
  }
  return uVar2;
}


/* ---- post_state_event @ 00032184 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int post_state_event(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = _DAT_00032210;
  iVar5 = 0;
  if (*(short *)(_DAT_00032210 + 0xaa) != -1) {
    bVar2 = param_1[2];
    bVar3 = param_1[3];
    param_1[2] = 0;
    param_1[3] = 0;
    debug_printf(s__________________notify_sys_stat_00032213 + 1,*(undefined2 *)(iVar4 + 0xaa),
                 0xffff,*param_1);
    iVar4 = DAT_0003224c;
    if (((*param_1 != *(byte *)(DAT_0003224c + 2)) || (param_1[4] != *(byte *)(DAT_0003224c + 3)))
       || (*param_1 < 0x85)) {
      bVar1 = param_1[1];
      param_1[1] = 0;
      iVar5 = FUN_0002b34a(_DAT_00032210,param_1);
      param_1[1] = bVar1 != 0;
    }
    *(byte *)(iVar4 + 3) = param_1[4];
    *(byte *)(iVar4 + 2) = *param_1;
    param_1[3] = bVar3;
    param_1[2] = bVar2;
    if (iVar5 != 0) {
      debug_printf(s_func___s__line__d_ERROR__code__0_00032254,DAT_00032250,0x1d2,iVar5);
    }
  }
  return iVar5;
}


/* ---- FUN_0003227c @ 0003227c ---- */

undefined4 FUN_0003227c(void)

{
  int iVar1;
  
  iVar1 = FUN_000262ca();
  if (iVar1 != 0) {
    return 0;
  }
  return 0x11;
}


/* ---- FUN_0003228c @ 0003228c ---- */

undefined4 FUN_0003228c(int *param_1,int param_2,uint param_3,uint param_4)

{
  if (param_2 == 0) {
    return 0xe;
  }
  if (param_3 != param_4 * (param_3 / param_4)) {
    return 9;
  }
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(short *)(param_1 + 3) = (short)param_3;
  *(short *)((int)param_1 + 0xe) = (short)param_4;
  return 0;
}


/* ---- FUN_000322b2 @ 000322b2 ---- */

int FUN_000322b2(int *param_1,ushort *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00026234();
  if (iVar1 != 0) {
    iVar1 = *param_1 + (uint)*param_2;
  }
  return iVar1;
}


/* ---- FUN_000322c8 @ 000322c8 ---- */

undefined4 FUN_000322c8(undefined4 param_1,short *param_2)

{
  if (*param_2 == param_2[1]) {
    FUN_000262b8();
    return 1;
  }
  return 0;
}


/* ---- FUN_000322de @ 000322de ---- */

int FUN_000322de(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002627e();
  if (iVar1 != 0) {
    iVar1 = *param_1 + (uint)*(ushort *)(param_2 + 2);
  }
  return iVar1;
}


/* ---- FUN_000322f4 @ 000322f4 ---- */

undefined4 FUN_000322f4(undefined4 param_1,short *param_2)

{
  if (*param_2 == param_2[1]) {
    FUN_0002626c();
    return 1;
  }
  return 0;
}


/* ---- FUN_00032320 @ 00032320 ---- */

uint FUN_00032320(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_000323f2(param_1 + (param_2 >> 5) * 4);
  uVar1 = uVar1 & 1 << (param_2 & 0x1f);
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}


/* ---- FUN_00032340 @ 00032340 ---- */

uint FUN_00032340(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  do {
    if ((param_2 - 1 >> 5) + 1 <= uVar7) {
      return param_2;
    }
    while( true ) {
      uVar5 = ~*(uint *)(param_1 + uVar7 * 4);
      bVar2 = (byte)uVar5;
      bVar3 = (byte)(uVar5 >> 8);
      bVar4 = (byte)(uVar5 >> 0x10);
      bVar1 = (byte)(uVar5 >> 0x18);
      uVar5 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                       << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                    bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                      0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                      (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                       << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                    bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1)
                                       << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                    bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
      if ((0x1f < uVar5) || (uVar5 = uVar5 + uVar7 * 0x20, param_2 <= uVar5)) break;
      iVar6 = FUN_00032320(param_1,uVar5);
      if (iVar6 == 0) {
        return uVar5;
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}


/* ---- FUN_0003238a @ 0003238a ---- */

uint FUN_0003238a(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + (param_2 >> 5) * 4) & 1 << (param_2 & 0x1f);
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}


/* ---- FUN_000323b4 @ 000323b4 ---- */

void FUN_000323b4(undefined4 param_1)

{
  FUN_000323e8(param_1,0);
  return;
}


/* ---- FUN_000323ba @ 000323ba ---- */

void FUN_000323ba(undefined4 param_1)

{
  FUN_00032406(param_1,1);
  return;
}


/* ---- FUN_000323c0 @ 000323c0 ---- */

void FUN_000323c0(undefined4 param_1)

{
  FUN_000323f2(param_1,1);
  return;
}


/* ---- FUN_000323c6 @ 000323c6 ---- */

undefined4 FUN_000323c6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  FUN_00026362(param_1,param_2,local_8);
  return local_8[0];
}


/* ---- FUN_000323d2 @ 000323d2 ---- */

undefined4 FUN_000323d2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  FUN_0002632e(param_1,param_2,local_8);
  return local_8[0];
}


/* ---- FUN_000323de @ 000323de ---- */

void FUN_000323de(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_4;
  FUN_00026362(param_1,param_2,auStack_8);
  return;
}


/* ---- FUN_000323e8 @ 000323e8 ---- */

void FUN_000323e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_4;
  FUN_0002632e(param_1,param_2,auStack_8);
  return;
}


/* ---- FUN_000323f2 @ 000323f2 ---- */

void FUN_000323f2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_4;
  FUN_00026314(param_1,param_2,auStack_8);
  return;
}


/* ---- FUN_000323fc @ 000323fc ---- */

void FUN_000323fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_4;
  FUN_000262fc(param_1,param_2,auStack_8);
  return;
}


/* ---- FUN_00032406 @ 00032406 ---- */

undefined4 FUN_00032406(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  FUN_00026314(param_1,param_2,local_8);
  return local_8[0];
}


/* ---- FUN_00032412 @ 00032412 ---- */

undefined4 FUN_00032412(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  FUN_0002637c(param_1,param_2,local_8);
  return local_8[0];
}


/* ---- FUN_0003241e @ 0003241e ---- */

int FUN_0003241e(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  uint local_10;
  
  iVar2 = 0;
  local_10 = param_4 & 0xffffff00;
  FUN_00029b34(&local_10);
  pbVar1 = *(byte **)*param_1;
  if ((byte *)param_1[1] < pbVar1) {
    pbVar1 = pbVar1 + -1;
    *(byte **)*param_1 = pbVar1;
    iVar2 = (uint)*pbVar1 * (uint)*(ushort *)(param_1 + 4) + param_1[3];
    if ((uint)*(byte *)(*param_1 + 4) < ((uint)*(byte *)(param_1 + 2) - (int)pbVar1 & 0xff)) {
      *(char *)(*param_1 + 4) = (char)((uint)*(byte *)(param_1 + 2) - (int)pbVar1);
    }
  }
  FUN_00029b7c(local_10 & 0xff);
  return iVar2;
}


/* ---- FUN_00032462 @ 00032462 ---- */

void FUN_00032462(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  uint local_10;
  
  local_10 = param_4 & 0xffffff00;
  FUN_00029b34(&local_10);
  iVar2 = param_1[3];
  uVar1 = *(ushort *)(param_1 + 4);
  puVar3 = *(undefined **)(undefined4 *)*param_1;
  *(undefined4 *)*param_1 = puVar3 + 1;
  *puVar3 = (char)((uint)(param_2 - iVar2) / (uint)uVar1);
  FUN_00029b7c(local_10 & 0xff);
  return;
}


/* ---- FUN_00032492 @ 00032492 ---- */

undefined4 FUN_00032492(int **param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  
  if (param_1 != (int **)0x0) {
    uVar2 = (uint)*(byte *)(param_1 + 2) - (int)param_1[1] & 0xff;
    **param_1 = (int)param_1[1];
    while( true ) {
      bVar4 = uVar2 == 0;
      bVar1 = (char)uVar2 - 1;
      uVar2 = (uint)bVar1;
      if (bVar4) break;
      pbVar3 = (byte *)**param_1;
      **param_1 = (int)(pbVar3 + 1);
      *pbVar3 = bVar1;
    }
    *(undefined *)(*param_1 + 1) = 0;
    return 0;
  }
  return 0xe;
}


/* ---- FUN_000324c2 @ 000324c2 ---- */

uint FUN_000324c2(uint param_1,int param_2)

{
  return 1 << (param_1 & 7) & (uint)*(byte *)(param_2 + (param_1 >> 3));
}


/* ---- FUN_000324d2 @ 000324d2 ---- */

void FUN_000324d2(uint param_1,int param_2)

{
  *(byte *)(param_2 + (param_1 >> 3)) =
       *(byte *)(param_2 + (param_1 >> 3)) | (byte)(1 << (param_1 & 7));
  return;
}


/* ---- FUN_000324e6 @ 000324e6 ---- */

undefined4 FUN_000324e6(int param_1,int param_2,int param_3,uint param_4)

{
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0xe;
  }
  if ((param_4 != 0) && (param_4 < 0x21)) {
    param_1 = param_1 + param_2 * 0x10;
    *(undefined *)(param_1 + 0xbc) = 1;
    *(short *)(param_1 + 0xc4) = (short)param_4;
    *(int *)(param_1 + 200) = param_3;
    return 0;
  }
  return 9;
}


/* ---- FUN_0003250c @ 0003250c ---- */

undefined4 FUN_0003250c(int param_1,int param_2,int param_3,uint param_4)

{
  if (param_3 == 0) {
    return 0xe;
  }
  if ((param_4 != 0) && (param_4 < 0x21)) {
    param_1 = param_1 + param_2 * 0x10;
    *(undefined *)(param_1 + 0x3c) = 1;
    *(short *)(param_1 + 0x44) = (short)param_4;
    *(int *)(param_1 + 0x48) = param_3;
    return 0;
  }
  return 9;
}


/* ---- FUN_00032530 @ 00032530 ---- */

undefined4 FUN_00032530(int param_1,undefined2 param_2,int param_3)

{
  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 8) = param_2;
    if (param_3 != 0) {
      *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_3 + 0x10);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_3 + 0x2c);
      *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_3 + 0x2a);
      *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(param_3 + 0x1c);
      *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_3 + 0x1a);
    }
    return 0;
  }
  return 0xe;
}


/* ---- FUN_00032552 @ 00032552 ---- */

void FUN_00032552(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002b326(param_2);
  if (iVar1 == 0) {
    FUN_0002b284(param_1,*param_2);
    *(undefined *)(param_1 + 0xdc) = 0;
  }
  return;
}


/* ---- FUN_00032572 @ 00032572 ---- */

undefined4 FUN_00032572(undefined2 *param_1,int param_2)

{
  if (param_1 == (undefined2 *)0x0) {
    return 0xe;
  }
  if (0xe0 < param_2 - 0x17U) {
    return 7;
  }
  *param_1 = (short)param_2;
  return 0;
}


/* ---- FUN_0003258a @ 0003258a ---- */

undefined4 FUN_0003258a(undefined2 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined2 *)0x0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    *param_1 = 0xf7;
    param_1[1] = 0xf7;
    *(undefined *)(param_1 + 2) = 0x1b;
    FUN_00030ec8(param_1 + 3);
    return 0;
  }
  return 0xe;
}


/* ---- FUN_000325ac @ 000325ac ---- */

/* WARNING: Removing unreachable block (ram,0x00032692) */
/* WARNING: Removing unreachable block (ram,0x00032696) */

void FUN_000325ac(ushort *param_1,int param_2)

{
  uint *puVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ushort local_48 [2];
  undefined local_44;
  
  puVar1 = DAT_000326bc;
  if (param_1[2] == 0) {
    uVar2 = *param_1;
    if (uVar2 == 0x24) {
      FUN_0002648c(local_48,param_1 + 2,0x2c);
      iVar4 = param_2 + (uint)local_48[0] * 8;
      *(undefined *)(iVar4 + 0xd) = local_44;
      if (*(int *)(param_2 + 0x10) != 0) {
        local_50 = CONCAT22(local_48[0],(short)puVar1[4]);
        local_4c = CONCAT31((int3)(puVar1[5] >> 8),*(undefined *)(iVar4 + 0xd));
        (**(code **)(param_2 + 0x10))(param_2,&local_50);
      }
    }
    else if (uVar2 < 0x25) {
      if (uVar2 == 0x10) {
        FUN_00035458(param_2,param_1);
      }
      else if (uVar2 == 0x11) {
        FUN_00030ec8(param_2 + 6);
      }
      else if (uVar2 == 0x23) {
        bVar3 = *(byte *)(param_1 + 4);
        if (*(byte *)(param_2 + 0xc) < *(byte *)(param_1 + 4)) {
          bVar3 = *(byte *)(param_2 + 0xc);
        }
        FUN_0002d8a8(0,bVar3);
      }
    }
    else {
      if (uVar2 == 0x3a) {
        uVar2 = param_1[5];
        if (*(ushort *)(param_2 + 6) <= param_1[5]) {
          uVar2 = *(ushort *)(param_2 + 6);
        }
        *(ushort *)(param_2 + 8) = uVar2;
        if (uVar2 < 0x17) {
          uVar2 = 0x17;
        }
        *(ushort *)(param_2 + 8) = uVar2;
        if ((*(int *)(param_2 + 0x10) != 0) && (*(char *)(param_2 + 0xb) != '\0')) {
          local_54 = *puVar1 & 0xffff;
          local_50 = CONCAT22((short)(puVar1[1] >> 0x10),*(undefined2 *)(param_2 + 8));
          (**(code **)(param_2 + 0x10))(param_2,&local_54);
        }
        *(undefined *)(param_2 + 0xb) = 0;
        *(undefined *)(param_2 + 10) = 0;
        return;
      }
      if (uVar2 == 0x55) {
        FUN_000355f0(param_2,param_1);
      }
    }
    if (*(char *)(param_2 + 10) != '\0') {
      software_interrupt(0xa5);
      *(undefined *)(param_2 + 10) = 0;
      *(undefined *)(param_2 + 0xb) = 1;
    }
  }
  return;
}


/* ---- FUN_000326fc @ 000326fc ---- */

undefined2 FUN_000326fc(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (((*param_1 == '\0') || (*(short *)(param_1 + 0x14) == -1)) ||
     (iVar2 = FUN_0002ee70(param_1), iVar2 == 0)) {
    uVar1 = 8;
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0x14);
    software_interrupt(0xa3);
  }
  return uVar1;
}


/* ---- FUN_00032748 @ 00032748 ---- */

undefined4 FUN_00032748(char *param_1,undefined2 param_2,int param_3)

{
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  if (*param_1 != '\0') {
    *(undefined2 *)(param_1 + 0x14) = param_2;
    if (param_3 != 0) {
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_3 + 10);
      *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_3 + 0xc);
      *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_3 + 0x10);
      *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_3 + 0xe);
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_3 + 8);
    }
    return 0;
  }
  return 8;
}


/* ---- FUN_00032774 @ 00032774 ---- */

int FUN_00032774(undefined *param_1,int *param_2)

{
  int iVar1;
  
  if (((param_1 != (undefined *)0x0) && (param_2 != (int *)0x0)) && (*param_2 != 0)) {
    FUN_000264be(param_1,0x20);
    *(undefined2 *)(param_1 + 0x14) = 0xffff;
    *(int *)(param_1 + 0x18) = *param_2;
    iVar1 = FUN_0002b558(DAT_000327a8);
    if (iVar1 == 0) {
      *param_1 = 1;
    }
    return iVar1;
  }
  return 0xe;
}


/* ---- FUN_000327ac @ 000327ac ---- */

void FUN_000327ac(short *param_1,char *param_2)

{
  int iVar1;
  undefined local_28 [2];
  short local_26;
  short local_24;
  short local_22;
  
  if (((*param_2 != '\0') && (param_2 != (char *)0x0)) && (param_1 != (short *)0x0)) {
    if (*param_1 == 0x11) {
      if (*(short *)(param_2 + 0x14) == param_1[2]) {
        *(undefined2 *)(param_2 + 0x14) = 0xffff;
        iVar1 = FUN_0002ee70(param_2);
        if (iVar1 != 0) {
          local_28[0] = 2;
          (**(code **)(param_2 + 0x18))(local_28);
          *(undefined2 *)(param_2 + 10) = 0;
          *(undefined2 *)(param_2 + 0xc) = 0;
          *(undefined2 *)(param_2 + 0xe) = 0;
          *(undefined2 *)(param_2 + 0x12) = 0;
          *(undefined2 *)(param_2 + 0x10) = 0;
        }
      }
    }
    else if (((*param_1 == 0x39) && (param_1[5] == *(short *)(param_2 + 10))) &&
            (*(int *)(param_2 + 0x18) != 0)) {
      software_interrupt(0xa4);
      if ((param_1[2] != 0) && (*(code **)(param_2 + 0x1c) != (code *)0x0)) {
        (**(code **)(param_2 + 0x1c))();
      }
      local_24 = param_1[8];
      local_22 = param_1[9];
      local_28[0] = 3;
      local_26 = param_1[2];
      (**(code **)(param_2 + 0x18))(local_28);
    }
  }
  return;
}


/* ---- FUN_0003283c @ 0003283c ---- */

void FUN_0003283c(char *param_1,char *param_2)

{
  uint uVar1;
  undefined local_30 [2];
  undefined2 local_2e;
  undefined auStack_2c [24];
  
  if (*param_1 != '\0') {
    local_30[0] = 1;
    if (((*param_2 == '\0') && (*(short *)(param_2 + 4) == 0x1801)) && (param_2[6] == '\x01')) {
      for (uVar1 = 0; uVar1 < (byte)param_2[8]; uVar1 = uVar1 + 1) {
        if ((*(short *)(param_2 + uVar1 * 0x12 + 0xe) == 0x2a05) &&
           ((int)((uint)(byte)param_2[uVar1 * 0x12 + 0x12] << 0x1a) < 0)) {
          FUN_0002648c(auStack_2c,param_2 + uVar1 * 0x12 + 0xe,0x12);
          local_30[0] = 0;
          break;
        }
      }
    }
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      local_2e = *(undefined2 *)(param_2 + 2);
      (**(code **)(param_1 + 0x18))(local_30);
    }
  }
  return;
}


/* ---- FUN_000328d2 @ 000328d2 ---- */

undefined4 FUN_000328d2(char *param_1,undefined4 *param_2)

{
  if ((param_1 != (char *)0x0) && (param_2 != (undefined4 *)0x0)) {
    if (*param_1 != -0x22) {
      *(undefined4 *)(param_1 + 4) = *param_2;
      *param_1 = -0x22;
      *(undefined2 *)(param_1 + 2) = 0xffff;
      return 0;
    }
    return 8;
  }
  return 0xe;
}


/* ---- FUN_000328f6 @ 000328f6 ---- */

ulonglong FUN_000328f6(short *param_1,char *param_2)

{
  char cVar1;
  short sVar2;
  ulonglong uVar3;
  short *local_20;
  undefined2 local_1c;
  
  local_1c = SUB42(param_2,0);
  local_20 = param_1;
  if (((param_2 != (char *)0x0) && (param_1 != (short *)0x0)) && (*param_2 == -0x22)) {
    if (param_1[2] == *(short *)(param_2 + 2)) {
      FUN_0003c8fc(param_2);
    }
    sVar2 = *param_1;
    if (sVar2 == 1) {
      if ((*(char *)(param_1 + 4) == '\x01') && (param_1[2] == *(short *)(param_2 + 2))) {
        param_2[8] = '\x01';
        uVar3 = FUN_0003c8fc();
        return uVar3;
      }
    }
    else if (sVar2 != 2) {
      if (sVar2 == 0x11) {
        if (param_1[2] == *(short *)(param_2 + 2)) {
          *(undefined2 *)(param_2 + 2) = 0xffff;
          return (ulonglong)CONCAT24(local_1c,param_1);
        }
      }
      else if (((sVar2 == 0x51) && (param_1[2] == *(short *)(param_2 + 2))) &&
              ((*(char *)(param_1 + 3) == '\x02' &&
               (((cVar1 = *(char *)(param_1 + 7), cVar1 == '\x04' || (cVar1 == '\x06')) ||
                (cVar1 == '\x05')))))) {
        local_20 = (short *)0x2;
        local_1c = 0x180;
        if (*(char *)(param_1 + 7) == '\x05') {
          local_1c = 0;
        }
        software_interrupt(0xb0);
        if (param_1[2] != 0) {
          (**(code **)(param_2 + 4))();
        }
      }
    }
  }
  return (ulonglong)CONCAT24(local_1c,local_20);
}


/* ---- FUN_000329ac @ 000329ac ---- */

int FUN_000329ac(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40000000);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_000329ba @ 000329ba ---- */

void FUN_000329ba(int param_1)

{
  *(undefined4 *)(param_1 + 0x40000000) = 0;
  return;
}


/* ---- FUN_000329cc @ 000329cc ---- */

void FUN_000329cc(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_000329e8;
  if (param_1 != 0) {
    do {
      (*(code *)(iVar1 + 1))(64000);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* ---- FUN_000329ec @ 000329ec ---- */

void FUN_000329ec(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00032a08;
  if (param_1 != 0) {
    do {
      (*(code *)(iVar1 + 1))(64000);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* ---- FUN_00032a0c @ 00032a0c ---- */

void FUN_00032a0c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00032a28;
  if (param_1 != 0) {
    do {
      (*(code *)(iVar1 + 1))(64000);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* ---- FUN_00032a2c @ 00032a2c ---- */

void FUN_00032a2c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00032a48;
  if (param_1 != 0) {
    do {
      (*(code *)(iVar1 + 1))(64000);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* ---- FUN_00032a4c @ 00032a4c ---- */

void FUN_00032a4c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00032a68;
  if (param_1 != 0) {
    do {
      (*(code *)(iVar1 + 1))(64000);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* ---- FUN_00032a6c @ 00032a6c ---- */

undefined4 FUN_00032a6c(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = DAT_00032a9c;
  if (*DAT_00032a9c == '\0') {
    *(undefined4 *)(DAT_00032a9c + 8) = 0;
    *(undefined4 *)(pcVar1 + 4) = 0;
    *(undefined4 *)(pcVar1 + 0x10) = 0;
    *(undefined4 *)(pcVar1 + 0xc) = 0;
    uVar3 = FUN_000342c4(DAT_00032aa0);
    iVar2 = FUN_0003412c();
    if (iVar2 == 0) {
      FUN_00034294();
    }
    *pcVar1 = '\x01';
  }
  else {
    uVar3 = 0x85;
  }
  return uVar3;
}


/* ---- FUN_00032aa4 @ 00032aa4 ---- */

void FUN_00032aa4(void)

{
  int iVar1;
  uint in_r3;
  uint local_10;
  
  local_10 = in_r3 & 0xffffff00;
  FUN_00029b34(&local_10);
  iVar1 = DAT_00032ad0;
  *(int *)(DAT_00032ad0 + 0xc) = *(int *)(DAT_00032ad0 + 0xc) + -1;
  if (*(int *)(iVar1 + 0xc) == 0) {
    FUN_000342e4();
    *(undefined *)(iVar1 + 2) = 0;
  }
  FUN_00029b7c(local_10 & 0xff);
  return;
}


/* ---- FUN_00032ad4 @ 00032ad4 ---- */

undefined4 FUN_00032ad4(void)

{
  if (*DAT_00032ae8 != '\0') {
    return 0x85;
  }
  *DAT_00032ae8 = '\x01';
  return 0;
}


/* ---- FUN_00032aec @ 00032aec ---- */

void FUN_00032aec(byte *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = DAT_00032b24;
  uVar3 = (uint)*param_1;
  *(int *)(DAT_00032b24 + uVar3 * 4) = param_3;
  *(undefined4 *)(iVar1 + 8 + uVar3 * 4) = param_4;
  if (*(char *)(param_2 + 0xd) != '\0') {
    FUN_0003b1e0(param_2);
  }
  uVar2 = DAT_00032b28;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  FUN_00034e24(param_1 + 4,param_2,uVar2,uVar3);
  return;
}


/* ---- FUN_00032b2c @ 00032b2c ---- */

void FUN_00032b2c(int param_1)

{
  FUN_00034f34(param_1 + 4);
  return;
}


/* ---- FUN_00032b3a @ 00032b3a ---- */

void FUN_00032b3a(int param_1)

{
  FUN_00034f34(param_1 + 4);
  return;
}


/* ---- FUN_00032b48 @ 00032b48 ---- */

void FUN_00032b48(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *local_18 [2];
  undefined4 uStack_10;
  int local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_2 != 0) {
    local_18[0] = &uStack_8;
    uStack_10 = param_1;
    local_c = param_2;
    uStack_8 = param_3;
    uStack_4 = param_4;
    FUN_00032b7a(param_1,param_2,local_18);
  }
  return;
}


/* ---- FUN_00032b62 @ 00032b62 ---- */

void FUN_00032b62(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    (*(code *)param_1[5])(param_1[4],*param_1);
    param_1[2] = 0;
  }
  return;
}


/* ---- FUN_00032b7a @ 00032b7a ---- */

void FUN_00032b7a(int param_1,byte *param_2,int **param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  int *piVar3;
  uint extraout_r1_01;
  int iVar4;
  uint extraout_r1_02;
  char **ppcVar5;
  uint extraout_r1_03;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  int **ppiVar10;
  char *pcVar11;
  int **ppiVar12;
  int **local_28;
  uint uStack_24;
  
  local_28 = param_3;
  uStack_24 = param_4;
  if (param_2 == (byte *)0x0) {
    return;
  }
LAB_00032b86:
  pbVar9 = param_2 + 1;
  uVar2 = (uint)*param_2;
  if (uVar2 != 0) {
    if (uVar2 == 0x25) {
      uVar1 = 0;
      uVar6 = 1;
      do {
        uVar2 = (uint)*pbVar9;
        if (uVar2 == 0x2b) {
          uVar1 = uVar1 | 4;
        }
        else if (uVar2 == 0x2d) {
          uVar1 = uVar1 | 1;
        }
        else {
          if (uVar2 != 0x30) goto LAB_00032bd2;
          uVar1 = uVar1 | 2;
        }
        pbVar9 = pbVar9 + 1;
      } while( true );
    }
    FUN_0002c408(param_1);
    uVar2 = extraout_r1;
    goto LAB_00032b96;
  }
  goto LAB_00032b9c;
LAB_00032bd2:
  ppiVar10 = (int **)0x0;
  while (uVar2 != 0x2a) {
    uVar2 = (uint)*pbVar9;
    uVar6 = uVar2 - 0x30;
    if (9 < uVar6) goto LAB_00032c06;
    uVar6 = (int)ppiVar10 * 5;
    pbVar9 = pbVar9 + 1;
    ppiVar10 = (int **)(uVar2 + (int)ppiVar10 * 10 + -0x30);
  }
  piVar3 = *param_3;
  *param_3 = piVar3 + 1;
  pbVar9 = pbVar9 + 1;
  ppiVar10 = (int **)((int)ppiVar10 + *piVar3);
LAB_00032c06:
  uVar2 = (uint)*pbVar9;
  iVar8 = 0;
  if (uVar2 == 0x2e) {
    while( true ) {
      pbVar9 = pbVar9 + 1;
      uVar2 = (uint)*pbVar9;
      uVar6 = uVar2 - 0x30;
      if (9 < uVar6) break;
      iVar8 = uVar2 + iVar8 * 10 + -0x30;
    }
  }
  while ((uVar2 == 0x6c || (uVar2 == 0x68))) {
    pbVar9 = pbVar9 + 1;
    uVar2 = (uint)*pbVar9;
  }
  if (uVar2 == 0x69) {
LAB_00032c76:
    piVar3 = *param_3;
    *param_3 = piVar3 + 1;
    FUN_0002fcb0(param_1,*piVar3,10);
    uVar2 = extraout_r1_01;
    local_28 = ppiVar10;
    uStack_24 = uVar1;
    goto LAB_00032c70;
  }
  if (uVar2 < 0x6a) {
    if (uVar2 != 0x25) {
      if (uVar2 == 0x58) {
LAB_00032ca0:
        piVar3 = *param_3;
        *param_3 = piVar3 + 1;
        iVar4 = *piVar3;
        uVar7 = 0x10;
        local_28 = ppiVar10;
        uStack_24 = uVar1;
        goto LAB_00032cb2;
      }
      if (uVar2 != 99) {
        if (uVar2 != 100) goto LAB_00032c70;
        goto LAB_00032c76;
      }
      piVar3 = *param_3;
      *param_3 = piVar3 + 1;
      uVar2 = (uint)*(byte *)piVar3;
    }
    FUN_0002c408(param_1,uVar2);
    uVar2 = extraout_r1_00;
  }
  else {
    if (uVar2 == 0x70) {
      piVar3 = *param_3;
      *param_3 = piVar3 + 1;
      iVar4 = *piVar3;
      FUN_0002c408(param_1,0x30,uVar6,iVar8);
      FUN_0002c408(param_1,0x78);
      iVar8 = 8;
      local_28 = (int **)&NMI;
      uStack_24 = 0;
      uVar7 = 0x10;
    }
    else {
      if (uVar2 == 0x73) {
        ppcVar5 = (char **)*param_3;
        ppiVar12 = (int **)0x0;
        *param_3 = (int *)(ppcVar5 + 1);
        pcVar11 = *ppcVar5;
        if ((uVar1 & 1) == 0) {
          if (pcVar11 != (char *)0x0) {
            ppiVar12 = (int **)FUN_000264d4(pcVar11);
          }
          for (; (ppiVar12 < ppiVar10 && (ppiVar10 != (int **)0x0));
              ppiVar10 = (int **)((int)ppiVar10 + -1)) {
            FUN_0002c408(param_1,0x20);
          }
          for (; *pcVar11 != '\0'; pcVar11 = pcVar11 + 1) {
            FUN_0002c408(param_1);
          }
          uVar2 = 0;
        }
        else {
          for (; *pcVar11 != '\0'; pcVar11 = pcVar11 + 1) {
            ppiVar12 = (int **)((int)ppiVar12 + 1);
            FUN_0002c408(param_1);
          }
          uVar2 = 0;
          for (; (ppiVar12 < ppiVar10 && (ppiVar10 != (int **)0x0));
              ppiVar10 = (int **)((int)ppiVar10 + -1)) {
            FUN_0002c408(param_1,0x20);
            uVar2 = extraout_r1_03;
          }
        }
        goto LAB_00032c70;
      }
      if (uVar2 != 0x75) {
        if (uVar2 != 0x78) goto LAB_00032c70;
        goto LAB_00032ca0;
      }
      piVar3 = *param_3;
      *param_3 = piVar3 + 1;
      iVar4 = *piVar3;
      uVar7 = 10;
      local_28 = ppiVar10;
      uStack_24 = uVar1;
    }
LAB_00032cb2:
    FUN_0003baf0(param_1,iVar4,uVar7,iVar8);
    uVar2 = extraout_r1_02;
  }
LAB_00032c70:
  pbVar9 = pbVar9 + 1;
LAB_00032b96:
  param_2 = pbVar9;
  if (*pbVar9 == 0) {
LAB_00032b9c:
    if (*(char *)(param_1 + 0xc) == '\0') {
      return;
    }
    FUN_00032b62(param_1,uVar2,local_28,uStack_24);
    return;
  }
  goto LAB_00032b86;
}


/* ---- FUN_00032d54 @ 00032d54 ---- */

undefined4 FUN_00032d54(int *param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = ((uint)(DAT_00032e10 - DAT_00032e14) >> 3) * 0x10000 + 1;
  if (param_1 == (int *)0x0) {
    FUN_00033772(iVar4,s__s_check_failed_in__s___with_val_00032e4c,&DAT_00032e44,DAT_00032e18,0xe);
    uVar2 = 0xe;
  }
  else if (*param_1 == 0) {
    FUN_00033772(iVar4,s__s_check_failed_in__s___with_val_00032e4c,s_p_fs_>p_api_00032e78,
                 DAT_00032e18,8);
    uVar2 = 8;
  }
  else if (param_3 == 0) {
    FUN_00033772(iVar4,s__s_check_failed_in__s___with_val_00032e4c,&DAT_00032e84,DAT_00032e18,9);
    uVar2 = 9;
  }
  else {
    if ((*(int *)param_1[1] - 1U & param_2) == 0) {
      iVar1 = FUN_000287e8(param_1,param_2,param_3 * *(int *)param_1[1],param_4,param_4);
      pcVar3 = DAT_00032e88;
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00032db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4);
        return uVar2;
      }
    }
    else {
      pcVar3 = s_addr_is_page_aligned_p_fs__page__00032e1c;
    }
    FUN_00033772(iVar4,s__s_check_failed_in__s___with_val_00032e4c,pcVar3,DAT_00032e18,0x10);
    uVar2 = 0x10;
  }
  return uVar2;
}


/* ---- FUN_00032e8c @ 00032e8c ---- */

undefined4 FUN_00032e8c(int *param_1,code **param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_1 == (int *)0x0) {
    pcVar2 = &DAT_00032ee4;
  }
  else {
    if (param_2 != (code **)0x0) {
      *param_1 = (int)param_2;
                    /* WARNING: Could not recover jumptable at 0x00032ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**param_2)(param_1,param_3);
      return uVar1;
    }
    pcVar2 = s_p_api_00032eec;
  }
  FUN_00033772(((uint)(DAT_00032ed8 - DAT_00032edc) >> 3) * 0x10000 + 1,
               s__s_check_failed_in__s___with_val_00032ef4,pcVar2,DAT_00032ee0,0xe);
  return 0xe;
}


/* ---- FUN_00032f58 @ 00032f58 ---- */

uint FUN_00032f58(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_00032ff4;
  if (((param_1 != 2) && (uVar2 = param_1, param_1 != 3)) ||
     (uVar2 = (uint)*(byte *)(DAT_00032ff4 + 8), uVar2 == 0)) {
    return uVar2;
  }
  if ((uVar2 == 1) || (uVar2 != 2)) goto LAB_00032fd8;
  iVar3 = *DAT_00032ff8;
  if (param_1 == 2) {
    *(undefined4 *)(DAT_00032ff4 + 0xc) = 0;
    if (*(char *)(iVar3 + 4) == '\0') {
      uVar2 = *(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x18);
      if (0xfff < uVar2) {
        uVar2 = 0x1000;
      }
      iVar4 = uVar2 + *(int *)(iVar3 + 0x18);
      *(int *)(iVar3 + 0x18) = iVar4;
      if (iVar4 != *(int *)(iVar3 + 0x14)) goto LAB_00032fd8;
      goto LAB_00032fc8;
    }
    if ((*(char *)(iVar3 + 4) != '\x01') ||
       (iVar4 = *(int *)(iVar3 + 0x10) + 1, *(int *)(iVar3 + 0x10) = iVar4,
       iVar4 != *(int *)(iVar3 + 0x14))) goto LAB_00032fd8;
    *(undefined *)(iVar1 + 8) = 0;
LAB_00032fe4:
    uVar5 = 0;
  }
  else {
    if ((param_1 != 3) ||
       (uVar2 = *(int *)(DAT_00032ff4 + 0xc) + 1, *(uint *)(DAT_00032ff4 + 0xc) = uVar2, uVar2 < 9))
    goto LAB_00032fd8;
    *(undefined4 *)(iVar1 + 0xc) = 0;
LAB_00032fc8:
    *(undefined *)(iVar1 + 8) = 0;
    if (param_1 == 2) goto LAB_00032fe4;
    uVar5 = 0xd;
  }
  FUN_0002ddc4(iVar3,uVar5);
  FUN_00038b18();
LAB_00032fd8:
  if (*(char *)(iVar1 + 0x11) == '\0') {
    uVar2 = FUN_00038bcc();
    return uVar2;
  }
  if (DAT_00034150[2] == '\0') {
    return 8;
  }
  if (*DAT_00034150 == '\0') {
    uVar2 = FUN_00034094();
    return uVar2;
  }
  uVar2 = FUN_00034040();
  return uVar2;
}


/* ---- FUN_00032ffc @ 00032ffc ---- */

undefined4 FUN_00032ffc(int *param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = ((uint)(DAT_000330f0 - DAT_000330f4) >> 3) * 0x10000 + 1;
  if (param_1 == (int *)0x0) {
    pcVar3 = &DAT_00033154;
  }
  else {
    if (param_3 != 0) {
      if (*param_1 == 0) {
        FUN_00033772(iVar4,s__s_check_failed_in__s___with_val_00033128,s_p_fs_>p_api_00033164,
                     DAT_000330f8,8);
        return 8;
      }
      if (param_4 == 0) {
        pcVar3 = &DAT_00033170;
      }
      else {
        if (param_4 == *(uint *)(param_1[1] + 4) * (param_4 / *(uint *)(param_1[1] + 4))) {
          iVar1 = FUN_000287dc(param_2);
          if (iVar1 == 0) {
            pcVar3 = s_addr_is_aligned32_dest__00033174;
          }
          else {
            iVar1 = FUN_000287dc(param_3);
            if (iVar1 == 0) {
              pcVar3 = s_addr_is_aligned32__uint32_t_p_sr_0003318c;
            }
            else {
              iVar1 = FUN_000287e8(param_1,param_2,param_4);
              if (iVar1 != 0) {
                uVar2 = (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3,param_4,param_5);
                return uVar2;
              }
              pcVar3 = s_addr_is_within_bounds_p_fs__dest_000331b0;
            }
          }
          FUN_00033772(iVar4,s__s_check_failed_in__s___with_val_00033128,pcVar3,DAT_000330f8,0x10);
          return 0x10;
        }
        pcVar3 = s___len___p_fs_>p_flash_info_>prog_000330fc;
      }
      FUN_00033772(iVar4,s__s_check_failed_in__s___with_val_00033128,pcVar3,DAT_000330f8,9);
      return 9;
    }
    pcVar3 = s_p_src_0003315c;
  }
  FUN_00033772(iVar4,s__s_check_failed_in__s___with_val_00033128,pcVar3,DAT_000330f8,0xe);
  return 0xe;
}


/* ---- FUN_000331d8 @ 000331d8 ---- */

void FUN_000331d8(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  *(uint *)(param_1 * 4 + 0x50000700) =
       param_2 | param_3 << 1 | param_4 << 2 | param_5 << 8 | param_6 << 0x10;
  return;
}


/* ---- FUN_000331fc @ 000331fc ---- */

void FUN_000331fc(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  *(uint *)(param_1 * 4 + 0x50000700) =
       param_2 | param_3 << 1 | param_4 << 2 | param_5 << 8 | param_6 << 0x10;
  return;
}


/* ---- FUN_00033220 @ 00033220 ---- */

void FUN_00033220(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  *(uint *)(param_1 * 4 + 0x50000700) =
       param_2 | param_3 << 1 | param_4 << 2 | param_5 << 8 | param_6 << 0x10;
  return;
}


/* ---- FUN_00033244 @ 00033244 ---- */

void FUN_00033244(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  *(uint *)(param_1 * 4 + 0x50000700) =
       param_2 | param_3 << 1 | param_4 << 2 | param_5 << 8 | param_6 << 0x10;
  return;
}


/* ---- FUN_00033268 @ 00033268 ---- */

void FUN_00033268(undefined4 param_1)

{
  FUN_00033220(param_1,0,1,0,0,0);
  return;
}


/* ---- FUN_0003327a @ 0003327a ---- */

void FUN_0003327a(undefined4 param_1)

{
  FUN_00033244(param_1,0,1,0,0,0);
  return;
}


/* ---- FUN_0003328c @ 0003328c ---- */

void FUN_0003328c(undefined4 param_1)

{
  FUN_000331d8(param_1,1,1,0,0,0);
  return;
}


/* ---- FUN_000332a0 @ 000332a0 ---- */

void FUN_000332a0(int param_1)

{
  *(undefined4 *)(param_1 * 4 + 0x50000700) = 3;
  return;
}


/* ---- FUN_000332b0 @ 000332b0 ---- */

void FUN_000332b0(int param_1)

{
  *(undefined4 *)(param_1 * 4 + 0x50000700) = 3;
  return;
}


/* ---- FUN_000332c0 @ 000332c0 ---- */

void FUN_000332c0(undefined4 param_1)

{
  FUN_000331fc(param_1,1,1,0,0,0);
  return;
}


/* ---- FUN_000332d4 @ 000332d4 ---- */

void FUN_000332d4(int param_1,int param_2)

{
  param_1 = param_1 * 4;
  *(uint *)(param_1 + 0x50000700) = *(uint *)(param_1 + 0x50000700) & 0xfffcffff;
  *(uint *)(param_1 + 0x50000700) = *(uint *)(param_1 + 0x50000700) | param_2 << 0x10;
  return;
}


/* ---- FUN_000332f6 @ 000332f6 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000332f6(uint param_1)

{
  _DAT_5000050c = 1 << (param_1 & 0xff);
  return;
}


/* ---- FUN_00033304 @ 00033304 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00033304(uint param_1)

{
  return _DAT_50000510 >> (param_1 & 0xff) & 1;
}


/* ---- FUN_00033314 @ 00033314 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00033314(uint param_1)

{
  return _DAT_50000510 >> (param_1 & 0xff) & 1;
}


/* ---- FUN_00033324 @ 00033324 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00033324(uint param_1)

{
  return _DAT_50000510 >> (param_1 & 0xff) & 1;
}


/* ---- FUN_00033334 @ 00033334 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00033334(uint param_1)

{
  _DAT_50000508 = 1 << (param_1 & 0xff);
  return;
}


/* ---- FUN_00033344 @ 00033344 ---- */

void FUN_00033344(uint param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int local_c;
  
  uVar1 = param_2 + param_1;
  local_c = *DAT_00033368;
  for (; param_1 < uVar1; param_1 = param_1 + 1) {
    *param_3 = *(undefined4 *)((&local_c)[param_1] + 0x510);
    param_3 = param_3 + 1;
  }
  return;
}


/* ---- FUN_0003336c @ 0003336c ---- */

void FUN_0003336c(int param_1)

{
  *(undefined4 *)(param_1 + DAT_0003337c) = 0;
  return;
}


/* ---- FUN_00033380 @ 00033380 ---- */

int FUN_00033380(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + DAT_0003338c);
  if (iVar1 != 1) {
    iVar1 = 0;
  }
  return iVar1;
}


/* ---- FUN_00033390 @ 00033390 ---- */

uint FUN_00033390(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_000333e8;
  uVar2 = 0;
  iVar3 = *(int *)(DAT_000333e8 + 0x410);
  while (iVar3 != 0) {
    if (*(byte *)(*(int **)(iVar3 + 0xc) + 1) == uVar2) {
      uVar2 = uVar2 + 1;
      iVar3 = *(int *)(DAT_000333e8 + 0x410);
      if (9 < (int)uVar2) {
        return 0xffffffff;
      }
    }
    else {
      iVar3 = **(int **)(iVar3 + 0xc);
    }
  }
  if (uVar2 == 0xffffffff) {
    return 0xffffffff;
  }
  *(char *)(*(int *)(param_1 + 0xc) + 4) = (char)uVar2;
  if (*(int *)(iVar1 + 0x410) != 0) {
    **(undefined4 **)(param_1 + 0xc) = **(undefined4 **)(*(int *)(iVar1 + 0x410) + 0xc);
    **(int **)(*(int *)(iVar1 + 0x410) + 0xc) = param_1;
    return uVar2;
  }
  *(int *)(iVar1 + 0x410) = param_1;
  **(undefined4 **)(param_1 + 0xc) = 0;
  return uVar2;
}


/* ---- thunk_FUN_0002786c @ 000333ee ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0002786c(void)

{
  int iVar1;
  
  iVar1 = _DAT_000278b8;
  *(undefined4 *)(_DAT_000278b8 + 0x10) = 2;
  *(undefined4 *)(iVar1 + 0x14) = 2;
  *(char **)(iVar1 + 0x18) = s_Terminal_000278bb + 1;
  *(int *)(iVar1 + 0x1c) = iVar1 + 0x78;
  *(undefined4 *)(iVar1 + 0x20) = 0x200;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(char **)(iVar1 + 0x48) = s_Terminal_000278bb + 1;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(int *)(iVar1 + 0x4c) = iVar1 + 0x278;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0x10;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  FUN_000264fc(iVar1 + 7,&DAT_000278c8);
  FUN_000264fc(iVar1,s_SEGGER_000278cc);
  *(undefined *)(iVar1 + 6) = 0x20;
  return;
}


/* ---- FUN_0003340c @ 0003340c ---- */

void FUN_0003340c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  byte local_48;
  undefined local_47;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_30;
  undefined auStack_2c [24];
  
  FUN_00033a24(param_2);
  FUN_000264be(&local_44,0x18);
  local_30 = param_5;
  local_44 = param_3;
  uStack_40 = param_4;
  FUN_00033a4e(param_2,&local_5c,8,0);
  local_50 = local_54;
  local_4c = local_58;
  local_4a = local_56;
  local_47 = 0;
  iVar2 = 8;
  if ((local_5c & 3) == 1) {
    uVar1 = (local_5c << 0x16) >> 0x1c;
    local_48 = (byte)((local_5c << 0x1a) >> 0x1d);
    FUN_00033a4e(param_2,auStack_2c,uVar1 << 2,8);
    FUN_000338dc(local_5c >> 10,auStack_2c,uVar1,&local_50,&local_44);
  }
  else if ((local_5c & 3) == 2) {
    uVar1 = local_5c >> 0x16;
    local_48 = (byte)((local_5c << 0x1a) >> 0x1d);
    do {
      uVar3 = uVar1;
      if (7 < uVar1) {
        uVar3 = 8;
      }
      FUN_00033a4e(param_2,auStack_2c,uVar3,iVar2);
      iVar2 = iVar2 + uVar3;
      uVar1 = uVar1 - uVar3;
      FUN_00033798(auStack_2c,uVar3,&local_50,&local_44);
    } while (uVar1 != 0);
  }
  FUN_00033a30(param_2);
  return;
}


/* ---- FUN_000334d0 @ 000334d0 ---- */

undefined FUN_000334d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_000334fc + param_1 * 8;
  if (param_2 == 1) {
    return 2;
  }
  if (param_2 == 2) {
    return 4;
  }
  if (param_2 == 3) {
    return *(undefined *)(iVar1 + 4);
  }
  if (param_2 != 4) {
    return 0;
  }
  return *(undefined *)(iVar1 + 5);
}


/* ---- FUN_00033500 @ 00033500 ---- */

void FUN_00033500(void)

{
  thunk_FUN_0002786c();
  FUN_00033390(DAT_00033518,4);
  *(undefined *)(*(int *)(DAT_00033518 + 0xc) + 5) = 1;
  return;
}


/* ---- FUN_0003351c @ 0003351c ---- */

uint FUN_0003351c(void)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined local_58 [8];
  uint local_50 [7];
  uint local_34 [4];
  
  iVar3 = FUN_0002c428();
  puVar1 = DAT_00033728;
  if (iVar3 == 0) {
    DAT_00033728[0x106] = 0;
    DataSynchronizationBarrier(0xf);
    local_50[0] = puVar1[1];
    uVar9 = puVar1[2];
    do {
      iVar3 = FUN_0002fd78(puVar1 + (local_50[0] & uVar9) + 3,local_50);
      if ((iVar3 == 0) || (puVar1[0x106] != 0)) {
        uVar4 = 0;
        do {
          uVar7 = local_50[0] & uVar9;
          local_50[0] = local_50[0] + 1;
          local_34[uVar4] = puVar1[uVar7 + 3];
          uVar4 = uVar4 + 1;
        } while (uVar4 < 2);
        if ((local_34[0] & 3) == 2) {
          uVar7 = local_34[0] >> 0x16;
          uVar4 = uVar7;
          if (0x4f < local_34[0] >> 0x16) {
            uVar4 = 0x50;
          }
          local_34[0] = local_34[0] & 0x3fffff | uVar4 << 0x16;
          iVar3 = FUN_00033992(DAT_0003372c,uVar4 + 8);
          if (iVar3 == 0) goto LAB_000336f4;
          FUN_00033a24();
          FUN_00033a5e(iVar3,local_34,8,0);
          iVar12 = 8;
          uVar5 = local_50[0] & uVar9;
          uVar9 = (uVar9 - uVar5) * 4 + 4;
          if (uVar9 < uVar4) {
            if (uVar9 == 0) {
              puVar10 = (uint *)0x0;
              bVar2 = 0;
              puVar6 = DAT_00033728 + 3;
            }
            else {
              bVar2 = (char)uVar4 - (char)uVar9;
              puVar6 = puVar1 + uVar5 + 3;
              puVar10 = DAT_00033728 + 3;
              uVar4 = uVar9;
            }
            uVar9 = uVar4 & 0xff;
            uVar4 = (uint)bVar2;
            FUN_00033a5e(iVar3,puVar6,uVar9,8);
            iVar12 = uVar9 + 8;
            if (puVar10 != (uint *)0x0) goto LAB_0003361c;
          }
          else {
            puVar10 = puVar1 + uVar5 + 3;
LAB_0003361c:
            FUN_00033a5e(iVar3,puVar10,uVar4,iVar12);
          }
          local_50[0] = local_50[0] + (uVar7 + 3 >> 2);
LAB_000336a2:
          puVar11 = (undefined4 *)puVar1[0x104];
          if (puVar1[0x106] == 0) {
            for (; puVar11 != (undefined4 *)0x0; puVar11 = *(undefined4 **)puVar11[3]) {
              if (*(char *)(puVar11[3] + 5) == '\x01') {
                (**(code **)*puVar11)(puVar11,iVar3);
              }
            }
            FUN_00033a30(iVar3);
            local_58[0] = 0;
            FUN_00029b34(local_58);
            if (puVar1[0x106] == 0) {
              puVar1[1] = local_50[0];
            }
            FUN_00029b7c(local_58[0]);
          }
          else {
            FUN_00033a30(iVar3);
          }
        }
        else {
          if ((local_34[0] & 3) == 1) {
            uVar4 = (local_34[0] << 0x16) >> 0x1c;
            if (5 < uVar4) {
              uVar4 = 6;
            }
            local_34[0] = local_34[0] & 0xfffffc3f | uVar4 << 6;
            iVar3 = FUN_00033992(DAT_0003372c,(((local_34[0] << 0x16) >> 0x1c) + 2) * 4);
            if (iVar3 != 0) {
              FUN_00033a24();
              FUN_00033a5e(iVar3,local_34,8,0);
              iVar12 = 8;
              for (uVar4 = 0; uVar4 < (local_34[0] << 0x16) >> 0x1c; uVar4 = uVar4 + 1) {
                uVar7 = local_50[0] & uVar9;
                local_50[0] = local_50[0] + 1;
                FUN_00033a5e(iVar3,puVar1 + uVar7 + 3,4,iVar12);
                iVar12 = iVar12 + 4;
              }
              if (iVar3 != 0) goto LAB_000336a2;
            }
          }
LAB_000336f4:
          for (piVar8 = (int *)puVar1[0x104]; piVar8 != (int *)0x0; piVar8 = *(int **)piVar8[3]) {
            (**(code **)(*piVar8 + 8))(piVar8);
          }
          FUN_0003374c(((uint)(DAT_00033730 - DAT_00033734) >> 3) * 0x10000 + 2,
                       s_Backends_flushed_00033738);
        }
        uVar9 = FUN_0002c428();
        return uVar9 ^ 1;
      }
    } while (local_50[0] < *puVar1);
    puVar1[1] = *puVar1;
  }
  return 0;
}


/* ---- FUN_0003374c @ 0003374c ---- */

void FUN_0003374c(undefined4 param_1,undefined4 param_2)

{
  FUN_0003a66c(param_1,param_2,0);
  return;
}


/* ---- FUN_00033754 @ 00033754 ---- */

void FUN_00033754(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_3;
  FUN_0003a66c(param_1,param_2,local_8,1);
  return;
}


/* ---- FUN_00033762 @ 00033762 ---- */

void FUN_00033762(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_3;
  uStack_c = param_4;
  FUN_0003a66c(param_1,param_2,&local_10,2);
  return;
}


/* ---- FUN_00033772 @ 00033772 ---- */

void FUN_00033772(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = param_5;
  local_18 = param_3;
  uStack_14 = param_4;
  FUN_0003a66c(param_1,param_2,&local_18,3);
  return;
}


/* ---- FUN_00033784 @ 00033784 ---- */

undefined8
FUN_00033784(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_5;
  uStack_14 = param_6;
  local_20 = param_3;
  uStack_1c = param_4;
  FUN_0003a66c(param_1,param_2,&local_20,4);
  return CONCAT44(uStack_1c,local_20);
}


/* ---- FUN_00033798 @ 00033798 ---- */

void FUN_00033798(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 9) {
    uVar1 = *(undefined *)(param_4 + 0xc);
    *(undefined *)(param_4 + 0xc) = 0;
    FUN_00037934(param_3,param_4);
    uVar3 = 0;
    do {
      if (uVar3 < param_2) {
        FUN_00032b48(param_4,s__02x_0003382c,*(undefined *)(param_1 + uVar3));
      }
      else {
        FUN_00032b48(param_4,&DAT_00033834);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 8);
    FUN_00032b48(param_4,&DAT_00033838);
    uVar3 = 0;
    do {
      if (uVar3 < param_2) {
        uVar4 = (uint)*(byte *)(param_1 + uVar3);
        piVar2 = (int *)FUN_00026484();
        if ((*(byte *)(*piVar2 + uVar4) & 0x3e) == 0) {
          uVar4 = 0x2e;
        }
        FUN_00032b48(param_4,&DAT_0003383c,uVar4);
      }
      else {
        FUN_00032b48(param_4,&LAB_00033840);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 8);
    FUN_000377f4(param_3,param_4,1);
    *(undefined *)(param_4 + 0xc) = uVar1;
  }
  return;
}


/* ---- FUN_00033844 @ 00033844 ---- */

int FUN_00033844(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_00033874;
  DAT_00033874[2] = 0xff;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[0x106] = 0;
  puVar1[0x105] = 0;
  *(undefined *)(puVar1 + 0x108) = 0;
  iVar2 = thunk_FUN_00032492(DAT_00033878);
  if (iVar2 == 0) {
    FUN_00033cd4(DAT_0003387c);
    iVar2 = 0;
  }
  return iVar2;
}


/* ---- FUN_00033880 @ 00033880 ---- */

uint FUN_00033880(void)

{
  return (uint)(DAT_0003388c - DAT_00033890) >> 3;
}


/* ---- FUN_00033894 @ 00033894 ---- */

undefined4 FUN_00033894(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_10;
  undefined4 uStack_c;
  
  local_10 = param_1;
  uStack_c = param_2;
  iVar1 = FUN_00031be8(&local_10);
  if (iVar1 != 0) {
    return 0;
  }
  return *(undefined4 *)(DAT_000338ac + local_10 * 8);
}


/* ---- FUN_000338b0 @ 000338b0 ---- */

void FUN_000338b0(void)

{
  int *piVar1;
  
  piVar1 = *(int **)(DAT_000338d8 + 0x410);
  *(undefined *)(DAT_000338d8 + 0x420) = 1;
  for (; piVar1 != (int *)0x0; piVar1 = *(int **)piVar1[3]) {
    *(undefined *)(piVar1[3] + 5) = 1;
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return;
}


/* ---- FUN_000338dc @ 000338dc ---- */

undefined8
FUN_000338dc(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined *)(param_5 + 0xc);
  *(undefined *)(param_5 + 0xc) = 0;
  uVar2 = param_1;
  puVar3 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  FUN_00037934(param_4,param_5);
  switch(param_3) {
  case 0:
    FUN_00032b48(param_5,param_1);
    break;
  case 1:
    FUN_00032b48(param_5,param_1,*param_2);
    break;
  case 2:
    FUN_00032b48(param_5,param_1,*param_2,param_2[1],uVar2,puVar3,uVar4,uVar5);
    break;
  case 3:
    uVar2 = param_2[2];
    FUN_00032b48(param_5,param_1,*param_2,param_2[1],uVar2,puVar3,uVar4,uVar5);
    break;
  case 4:
    uVar2 = param_2[2];
    puVar3 = (undefined4 *)param_2[3];
    FUN_00032b48(param_5,param_1,*param_2,param_2[1],uVar2,puVar3,uVar4,uVar5);
    break;
  case 5:
    uVar2 = param_2[2];
    puVar3 = (undefined4 *)param_2[3];
    FUN_00032b48(param_5,param_1,*param_2,param_2[1],uVar2,puVar3,param_2[4],uVar5);
    break;
  case 6:
    uVar2 = param_2[2];
    puVar3 = (undefined4 *)param_2[3];
    FUN_00032b48(param_5,param_1,*param_2,param_2[1],uVar2,puVar3,param_2[4],param_2[5]);
  }
  FUN_000377f4(param_4,param_5,0);
  *(undefined *)(param_5 + 0xc) = uVar1;
  return CONCAT44(puVar3,uVar2);
}


/* ---- FUN_00033992 @ 00033992 ---- */

int ** FUN_00033992(int *param_1,int param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  uint uVar3;
  int **ppiVar4;
  uint uVar5;
  
  uVar3 = *(ushort *)(param_1 + 4) - 4;
  ppiVar1 = (int **)FUN_0003241e(param_1);
  if (ppiVar1 != (int **)0x0) {
    *(undefined *)(ppiVar1 + 1) = 0;
    *(undefined *)((int)ppiVar1 + 5) = 1;
    *(short *)((int)ppiVar1 + 6) = (short)uVar3;
    *ppiVar1 = param_1;
    ppiVar4 = ppiVar1;
    for (uVar5 = 0; uVar5 < ((param_2 + uVar3 + 3) / uVar3 & 0xff) - 1; uVar5 = uVar5 + 1) {
      ppiVar2 = (int **)FUN_0003241e(param_1);
      if (ppiVar2 == (int **)0x0) {
        FUN_000339f2(ppiVar1);
        return (int **)0x0;
      }
      *(char *)((int)ppiVar1 + 5) = *(char *)((int)ppiVar1 + 5) + '\x01';
      *ppiVar4 = (int *)ppiVar2;
      *ppiVar2 = param_1;
      ppiVar4 = ppiVar2;
    }
  }
  return ppiVar1;
}


/* ---- FUN_000339f2 @ 000339f2 ---- */

void FUN_000339f2(int **param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  bVar1 = *(byte *)((int)param_1 + 5);
  for (uVar2 = 0; uVar2 < bVar1 - 1; uVar2 = uVar2 + 1) {
    param_1 = (int **)*param_1;
  }
  iVar3 = (int)*param_1;
  for (uVar2 = 0; uVar2 < bVar1; uVar2 = uVar2 + 1) {
    FUN_00032462(iVar3);
  }
  return;
}


/* ---- FUN_00033a24 @ 00033a24 ---- */

void FUN_00033a24(int param_1)

{
  FUN_000323c6(param_1 + 4,1);
  return;
}


/* ---- thunk_FUN_00032492 @ 00033a2c ---- */

undefined4 thunk_FUN_00032492(int **param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  
  if (param_1 != (int **)0x0) {
    uVar2 = (uint)*(byte *)(param_1 + 2) - (int)param_1[1] & 0xff;
    **param_1 = (int)param_1[1];
    while( true ) {
      bVar4 = uVar2 == 0;
      bVar1 = (char)uVar2 - 1;
      uVar2 = (uint)bVar1;
      if (bVar4) break;
      pbVar3 = (byte *)**param_1;
      **param_1 = (int)(pbVar3 + 1);
      *pbVar3 = bVar1;
    }
    *(undefined *)(*param_1 + 1) = 0;
    return 0;
  }
  return 0xe;
}


/* ---- FUN_00033a30 @ 00033a30 ---- */

void FUN_00033a30(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_00032412(param_1 + 4,1);
  if (cVar1 == '\0') {
    FUN_000339f2(param_1);
    return;
  }
  return;
}


/* ---- FUN_00033a4e @ 00033a4e ---- */

void FUN_00033a4e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  
  local_c = param_3;
  FUN_00031b20(param_1,param_2,&local_c,param_4,1);
  return;
}


/* ---- FUN_00033a5e @ 00033a5e ---- */

void FUN_00033a5e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  
  local_c = param_3;
  FUN_00031b20(param_1,param_2,&local_c,param_4,0);
  return;
}


/* ---- FUN_00033a70 @ 00033a70 ---- */

undefined4 FUN_00033a70(void)

{
  int iVar1;
  
  iVar1 = DAT_00033a8c;
  *(undefined *)(DAT_00033a8c + 1) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  DataMemoryBarrier(0x1f);
  FUN_000341d4(DAT_00033a94,DAT_00033a90);
  return 0;
}


/* ---- FUN_00033a98 @ 00033a98 ---- */

void FUN_00033a98(void)

{
  int iVar1;
  uint in_r3;
  uint local_8 [2];
  
  local_8[0] = in_r3 & 0xffffff00;
  FUN_00029b34(local_8);
  DataMemoryBarrier(0x1f);
  *(undefined4 *)(DAT_00033ad8 + 0x280) = 0x40;
  FUN_00029b7c(local_8[0] & 0xff);
  iVar1 = FUN_0003412c();
  if (iVar1 != 0) {
    software_interrupt(0x41);
    return;
  }
  WaitForEvent();
  WaitForEvent();
  return;
}


/* ---- FUN_00033adc @ 00033adc ---- */

void FUN_00033adc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_000323fc(DAT_00033b14,1);
  puVar1 = DAT_00033b14;
  DataMemoryBarrier(0x1f);
  if (iVar2 != 0) {
    return;
  }
  if (param_1 != 4) {
    if (*(char *)((int)DAT_00033b14 + -3) != '\0') goto LAB_00033b00;
    *(char *)(DAT_00033b14 + -1) = (char)param_1;
    *(undefined *)((int)puVar1 + -3) = 1;
  }
  FUN_00039cc0();
LAB_00033b00:
  DataMemoryBarrier(0x1f);
  *puVar1 = 0;
  return;
}


/* ---- FUN_00033b18 @ 00033b18 ---- */

undefined4 FUN_00033b18(int **param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint local_20;
  
  uVar4 = 0;
  local_20 = param_4 & 0xffffff00;
  FUN_00029b34(&local_20);
  iVar1 = FUN_00033ba6(param_1);
  if (iVar1 == 0) {
    iVar1 = **param_1;
    if (param_3 == 0) {
      iVar2 = FUN_00033bd6(param_1,**param_1);
      **param_1 = iVar2;
    }
    piVar3 = param_1[3];
    if (piVar3 == (int *)0x1) {
      *(undefined *)param_2 = *(undefined *)((int)param_1[1] + iVar1);
    }
    else if (piVar3 == (int *)0x2) {
      *(undefined2 *)param_2 = *(undefined2 *)((int)param_1[1] + iVar1 * 2);
    }
    else if (piVar3 == (int *)&Reset) {
      *param_2 = param_1[1][iVar1];
    }
    else if (piVar3 == (int *)&NMI) {
      piVar3 = param_1[1] + iVar1 * 2;
      iVar1 = piVar3[1];
      *param_2 = *piVar3;
      param_2[1] = iVar1;
    }
    else {
      FUN_0002648c(param_2,(int *)(iVar1 * (int)piVar3 + (int)param_1[1]));
    }
  }
  else {
    uVar4 = 5;
  }
  FUN_00029b7c(local_20 & 0xff);
  return uVar4;
}


/* ---- FUN_00033ba6 @ 00033ba6 ---- */

undefined4 FUN_00033ba6(int **param_1)

{
  if (**param_1 == (*param_1)[1]) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00033bb8 @ 00033bb8 ---- */

undefined4 FUN_00033bb8(int **param_1)

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


/* ---- FUN_00033bd6 @ 00033bd6 ---- */

int FUN_00033bd6(int param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 8)) {
    return param_2 + 1;
  }
  return 0;
}


/* ---- FUN_00033be4 @ 00033be4 ---- */

undefined4 FUN_00033be4(int *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint local_20;
  
  uVar6 = 0;
  local_20 = param_4 & 0xffffff00;
  FUN_00029b34(&local_20);
  iVar1 = FUN_00033bb8(param_1);
  if ((iVar1 == 0) || (*(char *)(param_1 + 4) == '\0')) {
    iVar5 = *(int *)(*param_1 + 4);
    uVar2 = FUN_00033bd6(param_1,*(undefined4 *)(*param_1 + 4));
    *(undefined4 *)(*param_1 + 4) = uVar2;
    if (iVar1 != 0) {
      uVar2 = FUN_00033bd6(param_1,*(undefined4 *)*param_1);
      *(undefined4 *)*param_1 = uVar2;
    }
    iVar1 = param_1[3];
    if (iVar1 == 1) {
      *(undefined *)(param_1[1] + iVar5) = *(undefined *)param_2;
    }
    else if (iVar1 == 2) {
      *(undefined2 *)(param_1[1] + iVar5 * 2) = *(undefined2 *)param_2;
    }
    else if (iVar1 == 4) {
      *(undefined4 *)(param_1[1] + iVar5 * 4) = *param_2;
    }
    else if (iVar1 == 8) {
      uVar2 = param_2[1];
      puVar4 = (undefined4 *)(param_1[1] + iVar5 * 8);
      *puVar4 = *param_2;
      puVar4[1] = uVar2;
    }
    else {
      FUN_0002648c(iVar5 * iVar1 + param_1[1],param_2);
    }
    uVar3 = FUN_00038cac(param_1);
    if (*(uint *)(*param_1 + 8) < uVar3) {
      *(uint *)(*param_1 + 8) = uVar3;
    }
  }
  else {
    uVar6 = 4;
  }
  FUN_00029b7c(local_20 & 0xff);
  return uVar6;
}


/* ---- FUN_00033c96 @ 00033c96 ---- */

void FUN_00033c96(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint local_10;
  
  local_10 = param_4 & 0xffffff00;
  FUN_00029b34(&local_10);
  param_1 = (undefined4 *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00029b7c(local_10 & 0xff);
  return;
}


/* ---- FUN_00033cd4 @ 00033cd4 ---- */

void FUN_00033cd4(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0xc) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
  **(undefined4 **)(param_1 + 8) = 0;
  return;
}


/* ---- FUN_00033cf0 @ 00033cf0 ---- */

void FUN_00033cf0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00033cfc;
  *DAT_00033cfc = param_1;
  puVar1[1] = param_2;
  return;
}


/* ---- FUN_00033d00 @ 00033d00 ---- */

void FUN_00033d00(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_00033d10 + param_1 * 0x10;
  *(undefined4 *)(iVar1 + 0x514) = param_3;
  *(undefined4 *)(iVar1 + 0x510) = param_2;
  return;
}


/* ---- FUN_00033d14 @ 00033d14 ---- */

int FUN_00033d14(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + DAT_00033d20);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_00033d24 @ 00033d24 ---- */

void FUN_00033d24(int param_1)

{
  *(undefined4 *)(param_1 + DAT_00033d34) = 0;
  return;
}


/* ---- FUN_00033d38 @ 00033d38 ---- */

int FUN_00033d38(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0x80;
  }
  else {
    iVar1 = 0x40;
  }
  return iVar1 << ((param_1 & 0x7f) << 1);
}


/* ---- FUN_00033d48 @ 00033d48 ---- */

undefined4 FUN_00033d48(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *DAT_00033d58;
    return 0;
  }
  return 0xe;
}


/* ---- FUN_00033d5c @ 00033d5c ---- */

undefined8 FUN_00033d5c(byte param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  iVar1 = FUN_00033d48(param_2);
  if (iVar1 == 0) {
    local_1c = 6;
    local_18 = 0;
    local_20._0_2_ = (ushort)param_1;
    local_20 = (undefined4 *)(uint)CONCAT12(1,(ushort)local_20);
    software_interrupt(0x69);
    uVar2 = FUN_0003425c(0x20,&local_20,*param_2);
    debug_printf(DAT_00033e5c,uVar2);
    local_1c = 0;
    local_18 = 0;
    local_20 = (undefined4 *)0x100;
    software_interrupt(0x69);
    uVar2 = FUN_0003425c(0x40,&local_20,*param_2);
    FUN_00033754(((uint)(DAT_00033e60 - DAT_00033e64) >> 3) * 0x10000 + 1,DAT_00033e68,uVar2);
    local_20._0_2_ = (ushort)param_1;
    local_20 = (undefined4 *)CONCAT22(0xf7,(ushort)local_20);
    local_1c = 0;
    local_18 = 0;
    software_interrupt(0x69);
    uVar2 = FUN_0003425c(0x23,&local_20,*param_2);
    debug_printf(DAT_00033e6c,uVar2);
    local_20 = (undefined4 *)0xa;
    local_1c = 0;
    local_18 = 0;
    software_interrupt(0x69);
    uVar2 = FUN_0003425c(1,&local_20,*param_2);
    debug_printf(DAT_00033e70,uVar2);
    local_20 = (undefined4 *)0x1000;
    local_1c = 0;
    local_18 = 0;
    software_interrupt(0x69);
    uVar2 = FUN_0003425c(0xa1,&local_20,*param_2);
    debug_printf(DAT_00033e74,uVar2);
    local_1c = 0;
    local_18 = 0;
    local_20 = (undefined4 *)0x0;
    software_interrupt(0x69);
    uVar2 = FUN_0003425c(0xa0,&local_20,*param_2);
    debug_printf(DAT_00033e78,uVar2);
    iVar1 = 0;
  }
  return CONCAT44(local_20,iVar1);
}


/* ---- FUN_00033e7c @ 00033e7c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00033e7c(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  software_interrupt(0x60);
  if (uVar2 < *param_1) {
    debug_printf(s_Insufficient_RAM_allocated_for_t_00033edc);
    debug_printf(s_Change_the_RAM_start_location_fr_00033f0c,uVar2,*param_1);
    debug_printf(s_Maximum_RAM_size_for_application_00033f40,
                 (_DAT_1000010c * 0x400 + 0x20000000) - *param_1);
  }
  if (param_1 == (uint *)0x0) {
    *DAT_00033f94 = 1;
  }
  else {
    uVar1 = FUN_0003425c(param_1);
    FUN_00033754(((uint)(DAT_00033f6c - DAT_00033f70) >> 3) * 0x10000 + 1,
                 s_sd_ble_enable___returned__s__00033f74,uVar1);
  }
  return param_1;
}


/* ---- FUN_00033f98 @ 00033f98 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00033f98(void)

{
  undefined auStack_210 [508];
  code **local_14;
  undefined2 local_10;
  
  if (*_DAT_00033ff8 != '\0') {
    while( true ) {
      local_10 = 500;
      software_interrupt(0x61);
      if (&stack0x00000000 != (undefined *)0x210) break;
      FUN_000341d4(500,DAT_0003403c);
      while (local_14 != (code **)0x0) {
        (**local_14)(0,local_14[1]);
        FUN_00034202(500);
      }
    }
    if (&stack0x00000000 != (undefined *)0x215) {
      app_error_handler(auStack_210,0x139,s___________________components_sof_00033ffb + 1);
      return;
    }
  }
  return;
}


/* ---- FUN_00034040 @ 00034040 ---- */

int FUN_00034040(void)

{
  char *pcVar1;
  int iVar2;
  uint in_r3;
  uint local_18;
  
  pcVar1 = DAT_00034090;
  if (*DAT_00034090 == '\0') {
    return 8;
  }
  DAT_00034090[2] = '\x01';
  local_18 = in_r3;
  iVar2 = FUN_00039530();
  if (iVar2 != 0x11) {
    FUN_00039560(2);
    local_18 = local_18 & 0xffffff00;
    iVar2 = FUN_00029b34(&local_18);
    software_interrupt(0x11);
    *pcVar1 = '\0';
    FUN_00029b7c(local_18 & 0xff);
    if (iVar2 != 0) {
      return iVar2;
    }
    pcVar1[2] = '\0';
    FUN_0003a2c4();
    FUN_00039560(3);
  }
  return 0;
}


/* ---- FUN_00034094 @ 00034094 ---- */

undefined4 * FUN_00034094(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_18;
  undefined4 local_14;
  
  pcVar1 = DAT_000340fc;
  if (*DAT_000340fc != '\0') {
    return (undefined4 *)&NMI;
  }
  DAT_000340fc[2] = '\x01';
  local_18 = param_3;
  local_14 = param_4;
  iVar3 = FUN_00039530(0);
  if (iVar3 != 0x11) {
    FUN_00039560(0);
    local_14 = *DAT_00034100;
    local_18 = local_18 & 0xffffff00;
    FUN_00029b34(&local_18);
    uVar2 = DAT_00034104;
    software_interrupt(0x10);
    *pcVar1 = &local_14 == (undefined4 *)0x0;
    FUN_00029b7c(local_18 & 0xff,uVar2);
    if (&local_14 != (undefined4 *)0x0) {
      return &local_14;
    }
    pcVar1[2] = '\0';
    pcVar1[1] = '\0';
    FUN_0003a33c();
    FUN_00039560(1);
  }
  return (undefined4 *)0x0;
}


/* ---- FUN_00034108 @ 00034108 ---- */

void FUN_00034108(undefined4 param_1,undefined4 param_2,undefined4 param_3,code **param_4)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  code **local_8;
  
  uStack_10 = param_2;
  uStack_c = param_3;
  local_8 = param_4;
  FUN_000341d4(&uStack_10,DAT_00034128);
  while (local_8 != (code **)0x0) {
    (**local_8)(local_8[1]);
    FUN_00034202(&uStack_10);
  }
  return;
}


/* ---- FUN_0003412c @ 0003412c ---- */

undefined FUN_0003412c(void)

{
  return *DAT_00034134;
}


/* ---- FUN_000341d4 @ 000341d4 ---- */

void FUN_000341d4(int **param_1,int *param_2)

{
  int **ppiVar1;
  int *piVar2;
  
  *param_1 = param_2;
  param_1[1] = (int *)*param_2;
  ppiVar1 = (int **)param_1[1];
  while (ppiVar1 != *(int ***)((int)*param_1 + 4)) {
    piVar2 = *ppiVar1;
    if (piVar2 != ppiVar1[1]) goto LAB_000341f8;
    ppiVar1 = ppiVar1 + 2;
    param_1[1] = (int *)ppiVar1;
  }
  piVar2 = (int *)0x0;
LAB_000341f8:
  param_1[2] = piVar2;
  return;
}


/* ---- FUN_000341de @ 000341de ---- */

void FUN_000341de(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  while (piVar1 != *(int **)(*param_1 + 4)) {
    iVar2 = *piVar1;
    if (iVar2 != piVar1[1]) goto LAB_000341f8;
    piVar1 = piVar1 + 2;
    param_1[1] = (int)piVar1;
  }
  iVar2 = 0;
LAB_000341f8:
  param_1[2] = iVar2;
  return;
}


/* ---- FUN_00034202 @ 00034202 ---- */

void FUN_00034202(int *param_1)

{
  int iVar1;
  
  if (param_1[2] != 0) {
    iVar1 = *(int *)(*param_1 + 8) + param_1[2];
    param_1[2] = iVar1;
    if (iVar1 == *(int *)(param_1[1] + 4)) {
      param_1[1] = param_1[1] + 8;
      FUN_000341de();
      return;
    }
  }
  return;
}


/* ---- FUN_00034224 @ 00034224 ---- */

uint FUN_00034224(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = DAT_00034258;
  puVar1 = DAT_00034258 + 0x4a;
  while( true ) {
    do {
      puVar3 = puVar1;
      if (puVar3 <= puVar2) {
        return 0;
      }
      puVar1 = puVar2 + (((int)puVar3 - (int)puVar2 >> 3) - ((int)puVar3 - (int)puVar2 >> 0x1f) >> 1
                        ) * 2;
    } while (param_1 < *puVar1);
    if (param_1 <= *puVar1) break;
    puVar2 = puVar1 + 2;
    puVar1 = puVar3;
  }
  return puVar1[1];
}


/* ---- FUN_0003425c @ 0003425c ---- */

int FUN_0003425c(void)

{
  int iVar1;
  
  iVar1 = FUN_00034224();
  if (iVar1 == 0) {
    iVar1 = DAT_0003426c;
  }
  return iVar1;
}


/* ---- FUN_00034270 @ 00034270 ---- */

void FUN_00034270(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + param_2) = 0;
  return;
}


/* ---- FUN_0003427c @ 0003427c ---- */

int FUN_0003427c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + param_2);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_00034286 @ 00034286 ---- */

void FUN_00034286(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + param_2) = 0;
  return;
}


/* ---- FUN_00034294 @ 00034294 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034294(void)

{
  if ((*DAT_000342bc & 1) == 0) {
    DAT_e000e400 = 0xc0;
    _DAT_e000e280 = 1;
    _DAT_e000e100 = 1;
  }
  *DAT_000342c0 = 1;
  return;
}


/* ---- FUN_000342c4 @ 000342c4 ---- */

undefined4 FUN_000342c4(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_000342e0;
  if (*(char *)(DAT_000342e0 + 1) != '\0') {
    return 0x85;
  }
  *DAT_000342e0 = param_1;
  *(undefined *)(puVar1 + 1) = 1;
  *(undefined *)((int)puVar1 + 5) = 0;
  return 0;
}


/* ---- FUN_000342e4 @ 000342e4 ---- */

void FUN_000342e4(void)

{
  *DAT_000342f8 = 1;
  do {
  } while (*DAT_000342fc << 0xf < 0);
  return;
}


/* ---- FUN_00034300 @ 00034300 ---- */

void FUN_00034300(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00034308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0003430c)(param_1 << 6);
    return;
  }
  return;
}


/* ---- FUN_00034310 @ 00034310 ---- */

void FUN_00034310(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00034318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0003431c)(param_1 << 6);
    return;
  }
  return;
}


/* ---- FUN_00034320 @ 00034320 ---- */

void FUN_00034320(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00034328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0003432c)(param_1 << 6);
    return;
  }
  return;
}


/* ---- FUN_00034330 @ 00034330 ---- */

int FUN_00034330(void)

{
  int iVar1;
  
  iVar1 = FUN_0002c540();
  return (iVar1 * 4 + 0x60U & 0xff) + DAT_00034344;
}


/* ---- FUN_00034348 @ 00034348 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034348(uint param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = FUN_00036784();
  iVar2 = DAT_000343e4;
  if (iVar3 == 0) {
    iVar3 = FUN_0003679c(param_1);
    if (iVar3 != 0) {
      uVar4 = FUN_0002c540(param_1);
      iVar3 = DAT_000343e8;
      iVar5 = DAT_000343e8 + uVar4 * 4;
      *(uint *)(iVar5 + 0x510) = *(uint *)(iVar5 + 0x510) | 1;
      FUN_0003336c(uVar4 * 4 + 0x100 & 0xffff);
      if ((param_2 != 0) && (iVar5 = FUN_0002c540(param_1), *(int *)(iVar2 + iVar5 * 4) != 0)) {
        *(int *)(iVar3 + 0x304) = 1 << (uVar4 & 0xff);
      }
    }
    return;
  }
  iVar3 = FUN_0002c540();
  bVar1 = *(byte *)(iVar3 + iVar2 + 0x48) >> 6;
  if (bVar1 == 3) {
    if ((_DAT_50000510 >> (param_1 & 0xff) & 1) == 0) goto LAB_0003438e;
  }
  else if (bVar1 == 1) {
LAB_0003438e:
    uVar6 = 2;
    goto LAB_00034384;
  }
  uVar6 = 3;
LAB_00034384:
  FUN_000332d4(param_1,uVar6);
  return;
}


/* ---- FUN_000343ec @ 000343ec ---- */

undefined4 FUN_000343ec(uint param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = DAT_000344b0;
  uVar5 = 0;
  if (*(char *)(DAT_000344b0 + param_1 + 0x30) < '\0') {
    iVar3 = FUN_0002c4f8(param_1,param_3,((uint)param_2[2] << 0x1e) >> 0x1f,param_3,param_3,param_4)
    ;
    if (iVar3 == -1) {
      uVar5 = 4;
    }
    else {
      if (-1 < (int)((uint)param_2[2] << 0x1d)) {
        if ((param_2[2] & 1) == 0) {
          FUN_00033244(param_1,0,0,param_2[1],0,0);
        }
        else {
          *(uint *)(param_1 * 4 + 0x50000700) = *(uint *)(param_1 * 4 + 0x50000700) & 0xfffffffd;
        }
        FUN_000324d2(param_1,DAT_000344b0 + 0x54);
      }
      if ((int)((uint)param_2[2] << 0x1e) < 0) {
        bVar2 = *param_2;
        iVar4 = DAT_000344b4 + iVar3 * 4;
        *(uint *)(iVar4 + 0x510) = *(uint *)(iVar4 + 0x510) & DAT_000344b8;
        *(uint *)(iVar4 + 0x510) =
             (param_1 & 0x1f) << 8 | (bVar2 & 3) << 0x10 | *(uint *)(iVar4 + 0x510);
      }
      else {
        pbVar1 = (byte *)(iVar4 + iVar3 + 0x48);
        *pbVar1 = *pbVar1 | *param_2 << 6;
      }
    }
  }
  else {
    uVar5 = 8;
  }
  return uVar5;
}


/* ---- FUN_000344bc @ 000344bc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000344bc(uint param_1)

{
  uint uVar1;
  
  uVar1 = _DAT_50000510 >> (param_1 & 0xff) & 1;
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}


/* ---- FUN_000344d0 @ 000344d0 ---- */

undefined4 FUN_000344d0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  
  iVar1 = DAT_00034534;
  if (*(char *)(DAT_00034534 + 0x58) != '\0') {
    return 8;
  }
  uVar2 = 0;
  do {
    iVar3 = iVar1 + uVar2;
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined *)(iVar3 + 0x30) = 0xff;
  } while (uVar2 < 0x20);
  bVar4 = 0;
  do {
    FUN_0002c4dc(bVar4);
    iVar3 = DAT_00034538;
    bVar4 = bVar4 + 1;
  } while (bVar4 < 0xc);
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined *)(iVar3 + 0x400) = 0xc0;
  *(undefined4 *)(iVar3 + 0x27a) = 0x40;
  *(undefined4 *)(iVar3 + 0xfa) = 0x40;
  FUN_0003336c(0x17c);
  *(undefined4 *)(DAT_0003453c + 0x304) = 0x80000000;
  *(undefined *)(iVar1 + 0x58) = 1;
  return 0;
}


/* ---- FUN_00034540 @ 00034540 ---- */

char FUN_00034540(void)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_00034550 + 0x58);
  if (cVar1 != '\0') {
    cVar1 = '\x01';
  }
  return cVar1;
}


/* ---- FUN_00034554 @ 00034554 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00034554(uint param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if (*(char *)(DAT_00034608 + param_1 + 0x30) == -1) {
    if (param_2[2] == 0) {
      *(undefined *)(DAT_00034608 + param_1 + 0x30) = 0xfe;
    }
    else {
      iVar3 = FUN_0002c4f8(param_1,0,1,param_4,param_3,param_4);
      if (iVar3 == -1) {
        return 4;
      }
      bVar1 = *param_2;
      iVar3 = DAT_0003460c + iVar3 * 4;
      bVar2 = param_2[1];
      *(uint *)(iVar3 + 0x510) = *(uint *)(iVar3 + 0x510) & DAT_00034610;
      *(uint *)(iVar3 + 0x510) =
           *(uint *)(iVar3 + 0x510) | (param_1 & 0x1f) << 8 |
           (bVar1 & 3) << 0x10 | (bVar2 & 1) << 0x14;
    }
    iVar4 = 1 << (param_1 & 0xff);
    iVar3 = iVar4;
    if (param_2[1] != 1) {
      iVar3 = _DAT_50000508;
      _DAT_5000050c = iVar4;
    }
    _DAT_50000508 = iVar3;
    FUN_00033244(param_1,1,1,0,0,0);
    FUN_000324d2(param_1,DAT_00034608 + 0x54);
  }
  else {
    uVar5 = 8;
  }
  return uVar5;
}


/* ---- FUN_00034614 @ 00034614 ---- */

void FUN_00034614(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00034634 + *(char *)(param_1 + DAT_00034630 + 0x30) * 4;
  *(uint *)(iVar1 + 0x510) = *(uint *)(iVar1 + 0x510) & 0xfffffffc;
  return;
}


/* ---- FUN_00034638 @ 00034638 ---- */

void FUN_00034638(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00034658 + *(char *)(param_1 + DAT_00034654 + 0x30) * 4;
  *(uint *)(iVar1 + 0x510) = *(uint *)(iVar1 + 0x510) | 3;
  return;
}


/* ---- FUN_0003465c @ 0003465c ---- */

void FUN_0003465c(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    param_2 = 1;
  }
  iVar1 = DAT_00034680 + *(char *)(param_1 + DAT_0003467c + 0x30) * 4;
  *(uint *)(iVar1 + 0x510) = *(uint *)(iVar1 + 0x510) & 0xffefffff | (param_2 & 1) << 0x14;
  return;
}


/* ---- FUN_00034684 @ 00034684 ---- */

void FUN_00034684(int param_1)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = FUN_0003679c();
  if (iVar2 != 0) {
    uVar1 = FUN_0002c540(param_1);
    FUN_0002c4dc(uVar1);
    iVar2 = FUN_0002c540(param_1);
    *(undefined4 *)(DAT_000346d4 + iVar2 * 4 + 0x510) = 0;
  }
  *(undefined *)(DAT_000346d8 + param_1 + 0x30) = 0xff;
  iVar2 = FUN_00036754(param_1);
  if (iVar2 != 0) {
    FUN_0003327a(param_1);
    FUN_00036768(param_1);
    return;
  }
  return;
}


/* ---- FUN_000346dc @ 000346dc ---- */

int FUN_000346dc(void)

{
  int iVar1;
  
  iVar1 = FUN_0002c540();
  return (iVar1 * 4 + 0x30U & 0xff) + DAT_000346f0;
}


/* ---- FUN_000346f4 @ 000346f4 ---- */

undefined4 FUN_000346f4(undefined *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_28;
  
  uVar2 = 0;
  uVar3 = DAT_00034758;
  local_28 = param_4;
  while( true ) {
    local_28 = local_28 & 0xffffff00;
    FUN_00029b34(&local_28);
    if (((1 << uVar2 & uVar3) != 0) && (iVar1 = FUN_0002fe20(uVar2), iVar1 == 0)) break;
    FUN_00029b7c(local_28 & 0xff);
    uVar3 = uVar3 & ~(1 << uVar2);
    uVar2 = uVar2 + 1 & 0xff;
    if (uVar3 == 0) {
      return 4;
    }
  }
  *(uint *)(DAT_0003475c + 4) = 1 << uVar2 | *(uint *)(DAT_0003475c + 4);
  *param_1 = (char)uVar2;
  FUN_00029b7c(local_28 & 0xff);
  return 0;
}


/* ---- FUN_00034760 @ 00034760 ---- */

undefined4 FUN_00034760(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar2 = 0xe;
  }
  else {
    uVar2 = 0;
    iVar1 = FUN_0002fee4();
    if (iVar1 == 0) {
      uVar2 = 7;
    }
    else {
      iVar1 = FUN_0002fe20(param_1);
      if (iVar1 == 0) {
        uVar2 = 8;
      }
      else {
        iVar1 = DAT_000347a0 + param_1 * 8;
        *(int *)(iVar1 + 0x510) = param_2;
        *(int *)(iVar1 + 0x514) = param_3;
      }
    }
  }
  return uVar2;
}


/* ---- FUN_000347a4 @ 000347a4 ---- */

undefined4 FUN_000347a4(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0002fe38();
  if (iVar1 == 0) {
    uVar2 = 7;
  }
  else {
    iVar1 = FUN_0002fee4(param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_0002fe20(param_1), iVar1 != 0)) {
      *DAT_000347d4 = 1 << (param_1 & 0xff);
    }
    else {
      uVar2 = 8;
    }
  }
  return uVar2;
}


/* ---- FUN_000347d8 @ 000347d8 ---- */

undefined4 FUN_000347d8(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0002fe38();
  if (iVar1 == 0) {
    uVar2 = 7;
  }
  else {
    iVar1 = FUN_0002fee4(param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_0002fe20(param_1), iVar1 != 0)) {
      *DAT_00034808 = 1 << (param_1 & 0xff);
    }
    else {
      uVar2 = 8;
    }
  }
  return uVar2;
}


/* ---- FUN_0003480c @ 0003480c ---- */

undefined4 FUN_0003480c(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_18;
  
  uVar3 = 0;
  local_18 = param_4;
  iVar1 = FUN_0002fee4();
  if (iVar1 == 0) {
    uVar3 = 7;
  }
  else {
    uVar2 = 1 << (param_1 & 0xff);
    *DAT_00034844 = uVar2;
    local_18 = local_18 & 0xffffff00;
    FUN_00029b34(&local_18);
    *(uint *)(DAT_00034848 + 4) = *(uint *)(DAT_00034848 + 4) & ~uVar2;
    FUN_00029b7c(local_18 & 0xff);
  }
  return uVar3;
}


/* ---- FUN_0003484c @ 0003484c ---- */

undefined4 FUN_0003484c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  uint local_10;
  
  local_10 = param_4;
  puVar1 = (undefined4 *)FUN_0003893c();
  if (puVar1 != (undefined4 *)0x0) {
    local_10 = local_10 & 0xffffff00;
    FUN_00029b34(&local_10);
    if (*(char *)(puVar1 + 1) != '\0') {
      FUN_00029b7c(local_10 & 0xff);
      return 0x11;
    }
    *puVar1 = param_2;
    *(undefined *)(puVar1 + 1) = 1;
    FUN_00029b7c(local_10 & 0xff);
  }
  return 0;
}


/* ---- FUN_00034886 @ 00034886 ---- */

void FUN_00034886(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0003893c();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined *)(puVar1 + 1) = 0;
  }
  return;
}


/* ---- FUN_00034898 @ 00034898 ---- */

undefined4 FUN_00034898(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar3 = DAT_00034934;
  DAT_00034934[0xc2] = 0x12;
  iVar4 = DAT_00034938;
  if (*(char *)(DAT_00034938 + 0x10) == '\x02') {
    uVar5 = 0x12;
LAB_000348ec:
    puVar3[0xc1] = uVar5;
    uVar5 = 0x11;
  }
  else {
    cVar1 = *(char *)(DAT_00034938 + 0x2e);
    uVar2 = (undefined2)param_2;
    if (*(char *)(DAT_00034938 + 0x10) == '\x01') {
      if (*(int *)(DAT_00034938 + 0xc) != 0) {
        uVar5 = 2;
        goto LAB_000348ec;
      }
      *(undefined4 *)(DAT_00034938 + 0xc) = param_1;
      *(undefined2 *)(iVar4 + 0x18) = uVar2;
      if (cVar1 == '\0') {
        do {
          iVar4 = FUN_00033d14(0x100);
        } while (iVar4 == 0);
        FUN_00033d24(0x100);
        FUN_00033cf0(param_1,param_2);
      }
      puVar3[0xc1] = 2;
    }
    else {
      puVar3[0xc1] = 2;
      *(undefined *)(iVar4 + 0x10) = 1;
      *(undefined4 *)(iVar4 + 4) = param_1;
      *(undefined2 *)(iVar4 + 8) = uVar2;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      if (cVar1 == '\0') {
        FUN_00033cf0(param_1,param_2);
        FUN_00033d24(0x100);
        *puVar3 = 1;
      }
      else {
        *(undefined2 *)(iVar4 + 0x1a) = uVar2;
        FUN_00033cf0(param_1,*(undefined *)(iVar4 + 0x2d));
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


/* ---- FUN_0003493c @ 0003493c ---- */

undefined4 FUN_0003493c(int param_1,byte *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = DAT_000349e0;
  iVar2 = DAT_000349dc;
  if (*(char *)(DAT_000349dc + 0x10) != '\0') {
    return 0x11;
  }
  if ((param_2[4] == 0) || (param_2[4] == 1)) {
    *DAT_000349e0 = 0;
  }
  iVar4 = iVar2 + param_1 * 2;
  if (*(char *)(iVar4 + 0x1c) == '\0') {
    pcVar1 = (char *)(iVar2 + 0x2d);
    *pcVar1 = *pcVar1 + '\x01';
  }
  *(byte *)(iVar4 + 0x1c) = param_2[7];
  *(byte *)(iVar4 + 0x1d) = param_2[8];
  *(uint *)(DAT_000349e4 + param_1 * 0x10 + 0x518) =
       *param_2 & 3 | (param_2[1] & 3) << 4 | (param_2[2] & 7) << 8 | (param_2[3] & 1) << 0xc |
       (param_2[4] & 7) << 0x10 | (param_2[5] & 1) << 0x14 | (param_2[6] & 1) << 0x18;
  FUN_00033d00(param_1,param_2[7],param_2[8]);
  if ((param_2[4] == 0) || (param_2[4] == 1)) {
    *puVar3 = 1;
  }
  return 0;
}


/* ---- FUN_000349e8 @ 000349e8 ---- */

undefined4 FUN_000349e8(int param_1)

{
  int iVar1;
  
  if (*(char *)(DAT_00034a28 + 0x10) != '\0') {
    return 0x11;
  }
  iVar1 = DAT_00034a28 + param_1 * 2;
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    *(char *)(DAT_00034a28 + 0x2d) = *(char *)(DAT_00034a28 + 0x2d) + -1;
  }
  *(undefined *)(iVar1 + 0x1c) = 0;
  *(undefined *)(iVar1 + 0x1d) = 0;
  FUN_00033d00(param_1,0,0);
  FUN_00034abc(param_1,0xfffff800);
  return 0;
}


/* ---- FUN_00034a2c @ 00034a2c ---- */

undefined4 FUN_00034a2c(byte *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar1 = DAT_00034aac;
  if (*(char *)(DAT_00034aac + 0xb) == '\0') {
    puVar6 = DAT_00034aac + 4;
    *DAT_00034aac = param_2;
    puVar2 = DAT_00034ab0;
    *DAT_00034ab0 = (uint)*param_1;
    puVar2[1] = (uint)param_1[1];
    *(byte *)((int)puVar1 + 0x2e) = param_1[3];
    *(undefined *)(puVar1 + 0xb) = 1;
    *(undefined *)puVar6 = 0;
    *(undefined *)((int)puVar1 + 0x2d) = 0;
    puVar1[5] = 0;
    iVar3 = DAT_00034ab4;
    *(undefined *)((int)puVar1 + 0x2f) = 0;
    *(undefined4 *)(iVar3 + 0x308) = 0x7fffffff;
    FUN_00033d24(0x104);
    FUN_00033d24(iVar3 >> 0x16);
    iVar4 = DAT_00034ab8;
    *(byte *)(DAT_00034ab8 + 0x400) = param_1[2] << 5;
    *(undefined4 *)(iVar4 + 0x279) = 0x80;
    *(undefined4 *)(iVar4 + 0xf9) = 0x80;
    *(undefined4 *)(iVar3 + 0x304) = 2;
    if (*(char *)((int)puVar1 + 0x2e) != '\0') {
      *(undefined4 *)(iVar3 + 0x304) = 1;
    }
    DAT_00034ab0[-0x3c] = 1;
    uVar5 = 0;
  }
  else {
    uVar5 = 8;
  }
  return uVar5;
}


/* ---- FUN_00034abc @ 00034abc ---- */

void FUN_00034abc(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = DAT_00034b34;
  *(uint *)(DAT_00034b34 + param_1 * 0x10 + 0x51c) = param_2 & 0xffff | param_3 << 0x10;
  uVar3 = FUN_00033d38(param_1,0);
  iVar2 = DAT_00034b38;
  uVar4 = 0x80000000 >> (param_1 * 2 + 1 & 0xff);
  if (param_2 == 0xfffff800) {
    *(uint *)(DAT_00034b38 + 0x14) = *(uint *)(DAT_00034b38 + 0x14) & ~uVar4;
    *(undefined4 *)(iVar1 + 0x308) = uVar3;
  }
  else {
    *(uint *)(DAT_00034b38 + 0x14) = *(uint *)(DAT_00034b38 + 0x14) | uVar4;
    *(undefined4 *)(iVar1 + 0x304) = uVar3;
  }
  uVar3 = FUN_00033d38(param_1,1);
  uVar4 = 0x80000000 >> ((param_1 & 0x7f) << 1);
  if (param_3 == 0x7ff) {
    *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & ~uVar4;
    *(undefined4 *)(iVar1 + 0x308) = uVar3;
  }
  else {
    *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | uVar4;
    *(undefined4 *)(iVar1 + 0x304) = uVar3;
  }
  return;
}


/* ---- FUN_00034b3c @ 00034b3c ---- */

undefined4 FUN_00034b3c(void)

{
  undefined4 *puVar1;
  
  if (*(char *)(DAT_00034b60 + 0x10) != '\x01') {
    return 8;
  }
  puVar1 = DAT_00034b64;
  if (*(char *)(DAT_00034b60 + 0x2e) == '\0') {
    puVar1 = DAT_00034b64 + 1;
  }
  *puVar1 = 1;
  return 0;
}


/* ---- FUN_00034b68 @ 00034b68 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034b68(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(DAT_00034bc8 + 0x308) = 0x7fffffff;
  _DAT_e000e180 = 0x80;
  *(undefined4 *)(DAT_00034bc8 + 8) = 1;
  iVar2 = 10000;
  do {
    iVar1 = FUN_00033d14(0x114);
    if (iVar1 != 0) break;
    FUN_00034310(0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *DAT_00034bcc = 0;
  iVar2 = DAT_00034bd0;
  *(undefined *)(DAT_00034bd0 + 0x10) = 0;
  uVar3 = 0;
  do {
    if (*(char *)(iVar2 + uVar3 * 2 + 0x1c) != '\0') {
      FUN_000349e8(uVar3 & 0xff);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  *(undefined *)(iVar2 + 0x2c) = 0;
  return;
}


/* ---- FUN_00034bd4 @ 00034bd4 ---- */

void FUN_00034bd4(int *param_1)

{
  *(undefined4 *)(*param_1 + 0xc) = 1;
  return;
}


/* ---- FUN_00034bdc @ 00034bdc ---- */

void FUN_00034bdc(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0x10000 << (param_2 & 0xff);
  if (param_4 == 0) {
    *(int *)(*param_1 + 0x308) = iVar1;
  }
  else {
    FUN_00034270(*param_1,param_2 * 4 + 0x140);
    *(int *)(*param_1 + 0x304) = iVar1;
  }
  *(undefined4 *)(*param_1 + param_2 * 4 + 0x540) = param_3;
  return;
}


/* ---- FUN_00034c16 @ 00034c16 ---- */

int FUN_00034c16(int *param_1,int param_2)

{
  return (param_2 * 4 + 0x140U & 0xffff) + *param_1;
}


/* ---- FUN_00034c26 @ 00034c26 ---- */

void FUN_00034c26(int *param_1,uint param_2)

{
  *(int *)(*param_1 + 0x308) = 0x10000 << (param_2 & 0xff);
  return;
}


/* ---- FUN_00034c34 @ 00034c34 ---- */

void FUN_00034c34(int *param_1,uint param_2)

{
  FUN_00034270(*param_1,param_2 * 4 + 0x140 & 0xffff);
  *(int *)(*param_1 + 0x304) = 0x10000 << (param_2 & 0xff);
  return;
}


/* ---- FUN_00034c58 @ 00034c58 ---- */

void FUN_00034c58(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x10) = 1;
  *(undefined *)(DAT_00034c70 + (uint)*(byte *)(param_1 + 1) * 0xc + 8) = 1;
  return;
}


/* ---- FUN_00034c74 @ 00034c74 ---- */

void FUN_00034c74(undefined4 *param_1)

{
  *(undefined4 *)*param_1 = 1;
  *(undefined *)(DAT_00034c8c + (uint)*(byte *)(param_1 + 1) * 0xc + 8) = 2;
  return;
}


/* ---- FUN_00034c90 @ 00034c90 ---- */

void FUN_00034c90(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  *(uint *)(*param_1 + 0x200) = *(uint *)(*param_1 + 0x200) & ~(0x101 << (param_2 & 0xff));
  *(uint *)(*param_1 + 0x200) = *(uint *)(*param_1 + 0x200) | param_4;
  FUN_00034bdc();
  return;
}


/* ---- FUN_00034cbc @ 00034cbc ---- */

undefined4 FUN_00034cbc(int *param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(DAT_00034d78 + (uint)*(byte *)(param_1 + 1) * 0xc);
  if (*(char *)(puVar5 + 2) == '\0') {
    *puVar5 = param_3;
    puVar5[1] = *(undefined4 *)(param_2 + 4);
    for (uVar4 = 0; uVar4 < *(byte *)((int)param_1 + 5); uVar4 = uVar4 + 1 & 0xff) {
      FUN_00034270(*param_1,uVar4 * 4 + 0x140);
    }
    uVar4 = (*param_1 << 0xc) >> 0x18;
    if ((int)uVar4 < 0) {
      *(byte *)((uVar4 & 0xf) + 0xe000ed14) = param_2[3] << 5;
    }
    else {
      (&DAT_e000e400)[uVar4] = param_2[3] << 5;
    }
    uVar4 = (*param_1 << 0xc) >> 0x18;
    iVar3 = 1 << (uVar4 & 0x1f);
    iVar2 = (uVar4 >> 5) * 4;
    *(int *)(&DAT_e000e280 + iVar2) = iVar3;
    *(int *)(&DAT_e000e100 + iVar2) = iVar3;
    *(uint *)(*param_1 + 0x504) = *(uint *)(*param_1 + 0x504) & 0xfffffffc | param_2[1] & 3;
    *(uint *)(*param_1 + 0x508) = *(uint *)(*param_1 + 0x508) & 0xfffffffc | param_2[2] & 3;
    *(uint *)(*param_1 + 0x510) = *(uint *)(*param_1 + 0x510) & 0xfffffff0 | *param_2 & 0xf;
    *(undefined *)(puVar5 + 2) = 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}


/* ---- FUN_00034d7c @ 00034d7c ---- */

void FUN_00034d7c(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (*param_1 << 0xc) >> 0x18;
  *(int *)(&DAT_e000e180 + (uVar1 >> 5) * 4) = 1 << (uVar1 & 0x1f);
  uVar3 = *(undefined4 *)(*param_1 + 0x200);
  *(undefined4 *)(*param_1 + 0x200) = 0;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x308) = 0xffffffff;
  FUN_00034c58(param_1,iVar2,uVar3);
  *(undefined *)(DAT_00034dc8 + (uint)*(byte *)(param_1 + 1) * 0xc + 8) = 0;
  return;
}


/* ---- FUN_00034dcc @ 00034dcc ---- */

void FUN_00034dcc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = DAT_00034dfc + (uint)*(byte *)(param_1 + 1) * 0x3c;
  *(undefined4 *)(iVar1 + 0x308) = DAT_00034e00;
  *(uint *)(iVar1 + 0x200) = *(uint *)(iVar1 + 0x200) & 0xfffffffc;
  *(undefined4 *)(iVar1 + 0x500) = 0;
  *(undefined *)(iVar2 + 0x2d) = 1;
  return;
}


/* ---- FUN_00034e04 @ 00034e04 ---- */

void FUN_00034e04(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00034e20 + (uint)*(byte *)(param_1 + 1) * 0x3c;
  *(undefined4 *)(*param_1 + 0x500) = 5;
  *(undefined *)(iVar1 + 0x2d) = 2;
  return;
}


/* ---- FUN_00034e24 @ 00034e24 ---- */

undefined4 FUN_00034e24(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(DAT_00034efc + (uint)*(byte *)(param_1 + 1) * 0x3c);
  if (*(char *)((int)piVar5 + 0x2d) == '\0') {
    iVar2 = FUN_0003484c(*param_1,*(undefined4 *)(DAT_00034f00 + (uint)*(byte *)(param_1 + 1) * 4),
                         DAT_00034efc,param_4,param_3,param_4);
    if (iVar2 == 0) {
      *piVar5 = param_3;
      piVar5[1] = param_4;
      piVar5[2] = 0;
      *(undefined *)(piVar5 + 0xc) = 0;
      *(undefined *)((int)piVar5 + 0x2f) = 0;
      *(undefined *)(piVar5 + 0xe) = *(undefined *)((int)param_2 + 0xd);
      FUN_00033220(*param_2,0,0,3,6,0);
      FUN_00033220(param_2[1],0,0,3,6,0);
      uVar1 = param_2[1];
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 0x508) = *param_2;
      *(undefined4 *)(iVar2 + 0x50c) = uVar1;
      *(undefined4 *)(iVar2 + 0x524) = param_2[2];
      if (*piVar5 != 0) {
        uVar3 = (*param_1 << 0xc) >> 0x18;
        if ((int)uVar3 < 0) {
          *(char *)((uVar3 & 0xf) + 0xe000ed14) = *(char *)(param_2 + 3) << 5;
        }
        else {
          (&DAT_e000e400)[uVar3] = *(char *)(param_2 + 3) << 5;
        }
        uVar3 = (*param_1 << 0xc) >> 0x18;
        iVar4 = 1 << (uVar3 & 0x1f);
        iVar2 = (uVar3 >> 5) * 4;
        *(int *)(&DAT_e000e280 + iVar2) = iVar4;
        *(int *)(&DAT_e000e100 + iVar2) = iVar4;
      }
      *(undefined *)((int)piVar5 + 0x2d) = 1;
      uVar1 = 0;
    }
    else {
      uVar1 = 0x11;
    }
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}


/* ---- FUN_00034f04 @ 00034f04 ---- */

void FUN_00034f04(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uStack_28;
  undefined local_27;
  undefined4 local_24;
  undefined4 local_1c;
  
  FUN_0002648c(&uStack_28,DAT_00034f30,0x14);
  local_27 = param_2;
  local_24 = param_4;
  local_1c = param_3;
  FUN_00034fcc(param_1,&uStack_28,0);
  return;
}


/* ---- FUN_00034f34 @ 00034f34 ---- */

void FUN_00034f34(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 uVar1;
  undefined uStack_30;
  undefined local_2f;
  undefined4 local_2c;
  undefined4 local_24;
  
  FUN_000264be(&uStack_30,0x14);
  if (param_5 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x20;
  }
  local_2f = param_2;
  local_2c = param_4;
  local_24 = param_3;
  FUN_00034fcc(param_1,&uStack_30,uVar1);
  return;
}


/* ---- FUN_00034f6c @ 00034f6c ---- */

void FUN_00034f6c(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_00034fc8 + (uint)*(byte *)(param_1 + 1) * 0x3c);
  if (*piVar2 != 0) {
    uVar1 = (*param_1 << 0xc) >> 0x18;
    *(int *)(&DAT_e000e180 + (uVar1 >> 5) * 4) = 1 << (uVar1 & 0x1f);
  }
  FUN_00034dcc(param_1);
  FUN_00034886(*param_1);
  if (*(char *)(piVar2 + 0xe) == '\0') {
    FUN_00033268(*(undefined4 *)(*param_1 + 0x508));
    FUN_00033268(*(undefined4 *)(*param_1 + 0x50c));
  }
  *(undefined *)((int)piVar2 + 0x2d) = 0;
  return;
}


/* ---- FUN_00034fcc @ 00034fcc ---- */

void FUN_00034fcc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0003b6c4(DAT_00034fec + (uint)*(byte *)(param_1 + 1) * 0x3c,*param_1,param_2,param_3);
  return;
}


/* ---- FUN_00034ff0 @ 00034ff0 ---- */

void FUN_00034ff0(char *param_1)

{
  undefined auStack_28 [32];
  
  if (*param_1 == '\0') {
    debug_printf(s_rev_data__00035018);
    FUN_00037aac(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 0xc));
    FUN_0002648c(auStack_28,*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 0xc));
  }
  return;
}


/* ---- FUN_000351a4 @ 000351a4 ---- */

void FUN_000351a4(int param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 local_28;
  
  puVar1 = DAT_000352e0;
  if (*param_2 != *(short *)(param_1 + 0x2ca)) {
    return;
  }
  puVar4 = (undefined2 *)(param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76);
  local_28 = param_4;
  if (param_2[1] == 0) {
    uVar2 = (uint)*(byte *)(puVar4 + 2);
    if (uVar2 + ((ushort)param_2[3] & 0xff) < 7) {
      *(byte *)(puVar4 + 2) = *(byte *)(puVar4 + 2) + (char)param_2[3];
    }
    else {
      *(undefined *)(puVar4 + 2) = 6;
      iVar3 = ((uint)(DAT_000352e4 - DAT_000352e8) >> 3) * 0x10000 + 2;
      FUN_00033754(iVar3,DAT_000352ec,*puVar4);
      FUN_0003374c(iVar3,DAT_000352f0);
    }
    iVar3 = 0;
    for (; uVar2 < *(byte *)(puVar4 + 2); uVar2 = uVar2 + 1) {
      *(undefined4 *)(puVar4 + uVar2 * 9 + 5) = *(undefined4 *)(param_2 + iVar3 * 5 + 4);
      *(undefined4 *)(puVar4 + uVar2 * 9 + 7) = *(undefined4 *)(param_2 + iVar3 * 5 + 6);
      puVar4[uVar2 * 9 + 9] = param_2[iVar3 * 5 + 8];
      puVar4[uVar2 * 9 + 10] = 0;
      puVar4[uVar2 * 9 + 0xb] = 0;
      puVar4[uVar2 * 9 + 0xc] = 0;
      puVar4[uVar2 * 9 + 0xd] = 0;
      iVar3 = iVar3 + 1;
    }
    if (((ushort)puVar4[uVar2 * 9] <
         *(ushort *)(param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76 + 8)) &&
       (*(char *)(puVar4 + 2) != '\x06')) {
      *(char *)(param_1 + 0x2c5) = *(char *)(puVar4 + 2);
      iVar3 = FUN_0002c638(param_1,*param_2);
      if (iVar3 == 0) {
        return;
      }
      *(undefined *)(param_1 + 0x2c7) = 0;
      goto LAB_000352a8;
    }
  }
  *(undefined *)(param_1 + 0x2c5) = 0;
  iVar3 = FUN_0002da38(param_1,&local_28,*param_2);
  if (iVar3 == 0) {
    if ((char)local_28 == '\0') {
      return;
    }
    FUN_0002db5c(param_1,1,*param_2);
    FUN_00035708(param_1,*param_2);
    return;
  }
  *(undefined *)(param_1 + 0x2c7) = 0;
LAB_000352a8:
  FUN_0002dbec(param_1,iVar3,*param_2);
  *puVar1 = 3;
  *(short *)(puVar1 + 2) = *param_2;
  return;
}


/* ---- FUN_000352f4 @ 000352f4 ---- */

void FUN_000352f4(int param_1)

{
  undefined2 uVar1;
  undefined uVar2;
  int iVar3;
  
  uVar1 = *(undefined2 *)(param_1 + 4);
  iVar3 = FUN_0002fc9c(uVar1);
  FUN_00037a1c(s___conn_params_on_conn_params_upd_00035338);
  if (iVar3 != 0) {
    uVar2 = FUN_0002fe54(iVar3 + 10,param_1 + 8,499,0xffff);
    *(undefined *)(iVar3 + 9) = uVar2;
    FUN_00037a1c(s___conn_params_on_conn_params_upd_00035364);
    FUN_0002d74c(uVar1,iVar3);
    *DAT_00035390 = 0;
  }
  return;
}


/* ---- FUN_00035394 @ 00035394 ---- */

void FUN_00035394(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0x1900000;
  local_10 = CONCAT22(param_3,param_2);
  FUN_0002b35c(param_1,&local_10);
  return;
}


/* ---- FUN_000353b8 @ 000353b8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000353b8(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined uVar3;
  undefined2 *puVar4;
  
  uVar1 = *(undefined2 *)(param_1 + 4);
  if (*(char *)(param_1 + 0xf) == '\x01') {
    puVar4 = (undefined2 *)FUN_0002fc9c(0xffff);
    if (puVar4 == (undefined2 *)0x0) {
      FUN_0003994c(4);
      return;
    }
    *puVar4 = uVar1;
    *(undefined *)(puVar4 + 4) = 0;
    iVar2 = DAT_00035428;
    *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(DAT_00035428 + 4);
    *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(iVar2 + 8);
    uVar3 = FUN_0002fe54(puVar4 + 5,param_1 + 0x10,499,0xffff);
    iVar2 = _DAT_0003542c;
    *(undefined *)((int)puVar4 + 9) = uVar3;
    FUN_00037a1c(s____conn_params_on_connect______x_0003542f + 1,*(undefined2 *)(iVar2 + 0xe),0);
    if (*(short *)(iVar2 + 0xe) == 0) {
      FUN_0002d74c(uVar1,puVar4);
      return;
    }
  }
  return;
}


/* ---- FUN_00035458 @ 00035458 ---- */

void FUN_00035458(ushort *param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_2 + 4);
  *(undefined *)(param_1 + uVar3 * 4 + 6) = *(undefined *)(param_1 + 2);
  if (*(char *)(param_2 + 0xf) == '\x01') {
    uVar1 = *param_1;
  }
  else {
    if (*(char *)(param_2 + 0xf) != '\x02') goto LAB_0003547a;
    uVar1 = param_1[1];
  }
  param_1[uVar3 * 4 + 3] = uVar1;
LAB_0003547a:
  if (param_1[uVar3 * 4 + 4] < param_1[uVar3 * 4 + 3]) {
    software_interrupt(0xa5);
    if (uVar3 == 0) {
      *(undefined *)((int)param_1 + 0xb) = 1;
    }
    else if (uVar3 == 0x11) {
      *(undefined *)(param_1 + 0x49) = 1;
    }
    else {
      uVar2 = FUN_0003425c();
      FUN_00033754(((uint)(DAT_000354c4 - DAT_000354c8) >> 3) * 0x10000 + 1,
                   s_sd_ble_gattc_exchange_mtu_reques_000354cc,uVar2);
    }
  }
  if (*(byte *)((int)param_1 + uVar3 * 8 + 0xd) < *(byte *)(param_1 + uVar3 * 4 + 6)) {
    FUN_0002d8a8(uVar3);
    return;
  }
  return;
}


/* ---- FUN_00035500 @ 00035500 ---- */

void FUN_00035500(int param_1,short *param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 local_18;
  
  if (*param_2 == *(short *)(param_1 + 0x2ca)) {
    puVar6 = (ushort *)(param_2 + 3);
    iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76;
    uVar4 = (uint)(ushort)param_2[1];
    iVar3 = iVar5 + (uint)*(byte *)(param_1 + 0x2c5) * 0x12;
    if (uVar4 == 0) {
      for (; uVar4 < *puVar6; uVar4 = uVar4 + 1) {
        uVar1 = puVar6[uVar4 * 3 + 2];
        if (uVar1 == 0x2900) {
          *(ushort *)(iVar3 + 0x16) = puVar6[uVar4 * 3 + 1];
        }
        else if (uVar1 == 0x2901) {
          *(ushort *)(iVar3 + 0x18) = puVar6[uVar4 * 3 + 1];
        }
        else if (uVar1 == 0x2902) {
          *(ushort *)(iVar3 + 0x14) = puVar6[uVar4 * 3 + 1];
        }
        else if (uVar1 == 0x2908) {
          *(ushort *)(iVar3 + 0x1a) = puVar6[uVar4 * 3 + 1];
        }
        if ((((*(short *)(iVar3 + 0x14) != 0) && (*(short *)(iVar3 + 0x16) != 0)) &&
            (*(short *)(iVar3 + 0x18) != 0)) && (*(short *)(iVar3 + 0x1a) != 0)) break;
      }
    }
    local_18 = param_4 & 0xffffff00;
    uVar4 = *(byte *)(param_1 + 0x2c5) + 1;
    if (uVar4 == *(byte *)(iVar5 + 4)) {
      local_18 = CONCAT31((int3)(param_4 >> 8),1);
LAB_000355d6:
      FUN_0002db5c(param_1,1,*param_2);
      FUN_00035708(param_1,*param_2);
      return;
    }
    *(char *)(param_1 + 0x2c5) = (char)uVar4;
    iVar3 = FUN_0002da38(param_1,&local_18,*param_2);
    if (iVar3 == 0) {
      if ((char)local_18 != '\0') goto LAB_000355d6;
    }
    else {
      *(undefined *)(param_1 + 0x2c7) = 0;
      FUN_0002dbec(param_1,iVar3,*param_2);
      puVar2 = DAT_000355ec;
      *DAT_000355ec = 3;
      *(short *)(puVar2 + 2) = *param_2;
    }
  }
  return;
}


/* ---- FUN_000355f0 @ 000355f0 ---- */

void FUN_000355f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = *(ushort *)(param_2 + 4);
  uVar6 = (uint)uVar1;
  uVar3 = *(ushort *)(param_2 + 6);
  iVar5 = param_1 + uVar6 * 8;
  if (uVar3 < 0x17) {
    uVar3 = 0x17;
  }
  uVar2 = *(ushort *)(iVar5 + 6);
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  *(ushort *)(iVar5 + 8) = uVar3;
  *(undefined *)(iVar5 + 10) = 0;
  software_interrupt(0xb5);
  if (uVar6 != 0) {
    local_18 = param_3;
    local_14 = param_4;
    uVar4 = FUN_0003425c(uVar6,*(ushort *)(iVar5 + 6));
    FUN_00033754(((uint)(DAT_00035660 - DAT_00035664) >> 3) * 0x10000 + 1,
                 s_sd_ble_gatts_exchange_mtu_reply__00035668,uVar4);
  }
  if ((*(char *)(iVar5 + 0xb) == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
    local_18 = CONCAT22(uVar1,(short)*(undefined4 *)(DAT_00035698 + 8));
    local_14 = CONCAT22((short)((uint)*(undefined4 *)(DAT_00035698 + 0xc) >> 0x10),
                        *(undefined2 *)(iVar5 + 8));
    (**(code **)(param_1 + 0x10))(param_1,&local_18);
  }
  return;
}


/* ---- FUN_0003569c @ 0003569c ---- */

void FUN_0003569c(int param_1,short *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76);
  if (*param_2 == *(short *)(param_1 + 0x2ca)) {
    if (param_2[1] != 0) {
      FUN_0002db5c(param_1,0);
      FUN_00035708(param_1,*param_2);
      return;
    }
    *puVar3 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((int)puVar3 + 6) = *(undefined4 *)(param_2 + 6);
    iVar2 = FUN_0002c638(param_1,*param_2);
    if (iVar2 != 0) {
      *(undefined *)(param_1 + 0x2c7) = 0;
      FUN_0002dbec(param_1,iVar2,*param_2);
      puVar1 = DAT_00035704;
      *DAT_00035704 = 3;
      *(short *)(puVar1 + 2) = *param_2;
    }
  }
  return;
}


/* ---- FUN_00035708 @ 00035708 ---- */

void FUN_00035708(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_0003577c;
  bVar3 = *(char *)(param_1 + 0x2c9) + 1;
  *(byte *)(param_1 + 0x2c9) = bVar3;
  puVar2 = DAT_00035780;
  if ((uint)bVar3 < *(uint *)(iVar1 + 0xc)) {
    *(undefined *)(param_1 + 0x2c5) = 0;
    bVar3 = *(char *)(param_1 + 0x2c6) + 1;
    puVar4 = (undefined4 *)(param_1 + (uint)bVar3 * 0x76);
    *(byte *)(param_1 + 0x2c6) = bVar3;
    *puVar4 = *(undefined4 *)(puVar2 + (uint)bVar3 * 4 + -0x18);
    *(undefined *)(puVar4 + 1) = 0;
    software_interrupt(0x9b);
    if (param_2 == 0) {
      return;
    }
    *(undefined *)(param_1 + 0x2c7) = 0;
    FUN_0002dbec(param_1,param_2,param_2);
  }
  else {
    *(undefined *)(param_1 + 0x2c7) = 0;
  }
  *puVar2 = 3;
  *(short *)(puVar2 + 2) = (short)param_2;
  return;
}


/* ---- FUN_00035784 @ 00035784 ---- */

void FUN_00035784(int param_1,short *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*param_2 == 0x26) &&
     ((*(char *)(param_2 + 4) == '\x01' || (*(char *)(param_2 + 4) == '\x02')))) {
    uVar1 = FUN_00028800(*(undefined *)(param_1 + 2));
    debug_printf(s____on_terminated_begin__d__d_000357d4,*(undefined *)(param_1 + 2),uVar1);
    uVar1 = FUN_00028800(*(undefined *)(param_1 + 2));
    iVar2 = FUN_0002ac70(param_1,uVar1);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x38) != 0)) {
      debug_printf(s_on_terminated___err_000357f8);
                    /* WARNING: Could not recover jumptable at 0x000357ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x38))(iVar2);
      return;
    }
  }
  return;
}


/* ---- FUN_00035810 @ 00035810 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00035810(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_00035874;
  FUN_00037a1c(s____conn_params_on_write______x___00035877 + 1,*(undefined2 *)(param_1 + 6),
               *(undefined2 *)(_DAT_00035874 + 0xe),*(undefined2 *)(param_1 + 0x10));
  if ((*(short *)(param_1 + 6) == *(short *)(iVar2 + 0xe)) && (*(short *)(param_1 + 0x10) == 2)) {
    uVar1 = *(undefined2 *)(param_1 + 4);
    iVar2 = FUN_0002fc9c(uVar1);
    if (iVar2 != 0) {
      iVar3 = FUN_0002c1fe(param_1 + 0x12);
      if (iVar3 != 0) {
        FUN_00037a1c(s___conn_params_on_write___A____000358a0);
        FUN_0002d74c(uVar1,iVar2);
        return;
      }
      FUN_00037a1c(s___conn_params_on_write___B____000358c0);
      iVar2 = FUN_00029aec(*(undefined4 *)(iVar2 + 4));
      if (iVar2 != 0) {
        FUN_0003994c();
        return;
      }
    }
  }
  return;
}


/* ---- ble_bond_service_on_write @ 000358e0 ---- */
/* routes writes: FFA1 token, FFA2 AUID, FFA6 appcmd, CCCDs FFA4/FFA5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* routes writes: FFA1 token, FFA2 AUID, FFA6 appcmd, CCCDs FFA4/FFA5 */

void ble_bond_service_on_write(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  
  psVar6 = (short *)(param_2 + 6);
  debug_printf(s____ble_server_nus_on_write__x_le_000359a8,*psVar6,*(undefined2 *)(param_2 + 0x10),
               *(undefined *)(param_2 + 0x12),*(undefined *)(param_2 + 0x13),param_4);
  uVar5 = (uint)*(ushort *)(param_1 + 0x24);
  uVar2 = (uint)*(ushort *)(param_1 + 0x1c);
  debug_printf(s____ble_server_nus__x__x__x__x__x_000359dc,*(undefined2 *)(param_1 + 4),
               *(undefined2 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x14));
  if (*(short *)(param_2 + 0x10) == 0) {
    return;
  }
  iVar7 = param_2 + 0x12;
  if (*(short *)(param_2 + 0x10) == 2) {
    if (*psVar6 == *(short *)(param_1 + 0x18)) {
      iVar3 = FUN_0002c1fe(iVar7);
      if (iVar3 == 0) {
        *(undefined *)(param_1 + 0x36) = 0;
        pcVar4 = s_on_write_FFA4_Enable_false_00035a1c;
      }
      else {
        *_DAT_00035a00 = 4;
        *(undefined *)(param_1 + 0x36) = 1;
        pcVar4 = s_on_write_FFA4_Enable_00035a03 + 1;
      }
    }
    else {
      if (*psVar6 != *(short *)(param_1 + 0x20)) goto LAB_0003596a;
      iVar3 = FUN_0002c1fe(iVar7);
      if (iVar3 == 0) {
        *(undefined *)(param_1 + 0x37) = 0;
        pcVar4 = s_on_write_FFA5_Enable_false_00035a50;
      }
      else {
        *(undefined *)(param_1 + 0x37) = 1;
        pcVar4 = s_on_write_FFA5_Enable_00035a38;
      }
    }
    debug_printf(pcVar4);
  }
LAB_0003596a:
  sVar1 = *psVar6;
  if (sVar1 == *(short *)(param_1 + 4)) {
    ffa1_token_write(iVar7,*(undefined2 *)(param_2 + 0x10),uVar2,uVar5);
    return;
  }
  if (sVar1 != *(short *)(param_1 + 0xc)) {
    if (sVar1 != *(short *)(param_1 + 0x24)) {
      return;
    }
    ffa6_on_write(iVar7,*(undefined2 *)(param_2 + 0x10),uVar2,uVar5);
    return;
  }
  ffa2_auid_write(iVar7,*(undefined2 *)(param_2 + 0x10),uVar2,uVar5);
  return;
}


/* ---- FUN_00035a6c @ 00035a6c ---- */

void FUN_00035a6c(void)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = DAT_00035ae8;
  cVar1 = *DAT_00035ae4;
  if (cVar1 != '\0') {
    *DAT_00035ae4 = cVar1 + -1;
    if (cVar1 == '\x01') {
      *puVar2 = 1;
      puVar2[1] = 0;
    }
  }
  FUN_00039844();
  if (*DAT_00035aec != '\0') {
    *DAT_00035aec = *DAT_00035aec + -1;
  }
  FUN_00037830();
  FUN_000300b8();
  if (((0 < *DAT_00035af0) && (iVar3 = *DAT_00035af0 + -1, *DAT_00035af0 = iVar3, iVar3 == 0)) &&
     (*DAT_00035af4 != '\0')) {
    FUN_00035394(*DAT_00035afc,*(undefined2 *)(DAT_00035af8 + 0x38),
                 *(undefined2 *)(DAT_00035af8 + 0x3a));
  }
  iVar3 = *(int *)(puVar2 + 8);
  *(uint *)(puVar2 + 8) = iVar3 + 1U;
  if ((iVar3 + 1U) % 10 == 0) {
    FUN_00029638(0,0,DAT_00035b00);
    return;
  }
  return;
}


/* ---- FUN_00035b04 @ 00035b04 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00035b04(void)

{
  int iVar1;
  
  iVar1 = _DAT_00035b28;
  debug_printf(s_openBLE__d_00035b2b + 1,*(undefined *)(_DAT_00035b28 + 2));
  if (*(char *)(iVar1 + 2) == '\0') {
    *(undefined *)(iVar1 + 2) = 1;
    FUN_0002ac70(DAT_00035b38,3);
    return;
  }
  return;
}


/* ---- FUN_00035b3c @ 00035b3c ---- */

int FUN_00035b3c(int *param_1)

{
  int iVar1;
  
  if (((param_1 == (int *)0x0) || (*param_1 != DAT_00035b58)) ||
     ((iVar1 = param_1[1] + DAT_00035b5c, iVar1 != 0 && (iVar1 != 1)))) {
    iVar1 = 3;
  }
  return iVar1;
}


/* ---- FUN_00035b60 @ 00035b60 ---- */

void FUN_00035b60(int param_1,int param_2)

{
  if (2 < *(byte *)(param_2 + 0x16)) {
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + *(short *)(param_2 + 6) + 3;
  }
  *(short *)(param_1 + 10) = (*(short *)(param_1 + 10) - *(short *)(param_2 + 6)) + -3;
  return;
}


/* ---- FUN_00035b7c @ 00035b7c ---- */

void FUN_00035b7c(int param_1,short *param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_2 = 2;
  iVar1 = DAT_00035be4;
  iVar3 = param_1 + 8;
  do {
    iVar2 = FUN_0002f57a(iVar3,param_1 + 0x1000);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_0002f554(iVar3,param_1 + 0x1000);
    if (iVar2 == 0) {
      if (*(uint *)(iVar1 + 0x14) < *(uint *)(iVar3 + 8)) {
        *(uint *)(iVar1 + 0x14) = *(uint *)(iVar3 + 8);
      }
    }
    else {
      if (param_3 != (undefined *)0x0) {
        *param_3 = 1;
      }
      if (iVar2 == 2) {
        *param_2 = 0x400;
        return;
      }
    }
    *param_2 = *param_2 + *(short *)(iVar3 + 2) + 3;
    iVar3 = iVar3 + (uint)*(ushort *)(iVar3 + 2) * 4 + 0xc;
  } while( true );
}


/* ---- FUN_00035be8 @ 00035be8 ---- */

void FUN_00035be8(undefined4 param_1)

{
  FUN_00032ffc(DAT_00035c00,param_1,DAT_00035bfc,8,0);
  return;
}


/* ---- FUN_00035c04 @ 00035c04 ---- */

void FUN_00035c04(void)

{
  FUN_00032ffc(DAT_00035c24,*DAT_00035c1c,DAT_00035c20,8,0);
  return;
}


/* ---- FUN_00035c28 @ 00035c28 ---- */

byte FUN_00035c28(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  
  iVar3 = DAT_00035d3c;
  iVar2 = DAT_00035d38;
  bVar10 = 0;
  uVar9 = 0;
  uVar5 = 3;
  bVar1 = false;
  uVar12 = 0;
  do {
    iVar11 = *(int *)(iVar2 + 0xc) + uVar12 * 0x1000;
    iVar6 = FUN_00035b3c(iVar11);
    piVar8 = DAT_00035d40;
    if (iVar6 == 0) {
      *(undefined *)(iVar3 + uVar9 * 0x14) = 0;
      iVar6 = iVar3 + uVar9 * 0x14;
      *(int *)(iVar6 + 4) = iVar11;
      FUN_00035b7c(iVar11,iVar6 + 8,iVar6 + 0x10);
      bVar10 = bVar10 | 2;
LAB_00035c80:
      uVar9 = uVar9 + 1 & 0xffff;
    }
    else if (iVar6 == 1) {
      if (bVar1) {
        *(undefined *)(iVar3 + uVar9 * 0x14) = 2;
        iVar6 = iVar3 + uVar9 * 0x14;
        *(int *)(iVar6 + 4) = *piVar8;
        *(undefined2 *)(iVar6 + 8) = 2;
        uVar9 = uVar9 + 1 & 0xffff;
      }
      piVar8 = DAT_00035d40 + 1;
      *DAT_00035d40 = iVar11;
      FUN_00035b7c(iVar11,piVar8,0);
      if (*(short *)(DAT_00035d40 + 1) == 2) {
        bVar4 = 4;
      }
      else {
        bVar4 = 8;
      }
      bVar10 = bVar10 | bVar4;
    }
    else if (iVar6 == 3) {
      uVar7 = 0;
      do {
        if (*(int *)(iVar11 + uVar7 * 4) != -1) {
          uVar5 = uVar5 - 1;
          *(int *)(iVar3 + uVar9 * 0x14 + 4) = iVar11;
          *(undefined *)(iVar3 + uVar9 * 0x14) = 3;
          goto LAB_00035c80;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x400);
      if (*DAT_00035d40 == 0) {
        *DAT_00035d40 = iVar11;
        *(undefined2 *)(piVar8 + 1) = 2;
        bVar1 = true;
      }
      else {
        *(undefined *)(iVar3 + uVar9 * 0x14) = 2;
        iVar6 = iVar3 + uVar9 * 0x14;
        *(int *)(iVar6 + 4) = iVar11;
        *(undefined2 *)(iVar6 + 8) = 2;
        *(short *)(DAT_00035d3c + 0x2a) = (short)uVar9;
        uVar9 = uVar9 + 1 & 0xffff;
      }
      bVar10 = bVar10 | 1;
    }
    uVar12 = uVar12 + 1 & 0xffff;
    if (2 < uVar12) {
      if (uVar5 < 2) {
        bVar10 = 0;
      }
      return bVar10;
    }
  } while( true );
}


/* ---- FUN_00035d44 @ 00035d44 ---- */

void FUN_00035d44(undefined4 param_1)

{
  FUN_0002b4d4(param_1,*(undefined *)(DAT_00035d4c + 1));
  return;
}


/* ---- FUN_00035d50 @ 00035d50 ---- */

void FUN_00035d50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0002b4d4(param_1,*(undefined *)(DAT_00035db4 + 2));
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  else {
    uVar3 = 1;
  }
  iVar1 = FUN_00036150(param_1 + 0x100U & 0xffff,7);
  if ((iVar1 != 0) && (iVar1 != 5)) {
    uVar2 = FUN_0003425c();
    FUN_00033762(((uint)(DAT_00035db8 - DAT_00035dbc) >> 3) * 0x10000 + 1,DAT_00035dc0,uVar2,param_1
                );
    FUN_000399c8(param_1,iVar1);
  }
  FUN_0002d7f0(param_1,uVar3,param_2,param_3);
  return;
}


/* ---- FUN_00035dc4 @ 00035dc4 ---- */

void FUN_00035dc4(undefined2 *param_1,undefined param_2)

{
  undefined local_20 [2];
  undefined2 local_1e;
  undefined local_18;
  undefined local_17;
  
  local_20[0] = 2;
  local_1e = *param_1;
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1d) < 0) {
    local_18 = 1;
  }
  else {
    local_18 = 2;
  }
  local_17 = param_2;
  FUN_0002df0c(local_20);
  return;
}


/* ---- FUN_00035df8 @ 00035df8 ---- */

void FUN_00035df8(undefined2 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined local_28 [2];
  undefined2 local_26;
  undefined2 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_28[0] = 5;
  local_26 = param_1;
  local_24 = FUN_0002fa94();
  local_20 = param_2;
  uStack_1c = param_3;
  thunk_FUN_0003772c(local_28);
  return;
}


/* ---- FUN_00035e20 @ 00035e20 ---- */

void FUN_00035e20(code **param_1,undefined *param_2,int param_3)

{
  int iVar1;
  undefined local_88 [4];
  undefined4 local_84;
  undefined local_80;
  byte local_7f;
  undefined local_7e;
  undefined local_7d;
  
  if (param_3 != 8) {
    local_88[0] = 3;
    (**param_1)(local_88);
  }
  local_80 = *param_2;
  local_7f = local_7f & 0xe0 | param_2[1] & 1 | (byte)(((byte)param_2[1] >> 1 & 1) << 1) |
             (byte)(((byte)param_2[1] >> 2 & 1) << 2) | (byte)(((byte)param_2[1] >> 3 & 1) << 3) |
             (byte)(((byte)param_2[1] >> 4 & 1) << 4);
  local_7e = param_2[2];
  local_7d = param_2[3];
  local_84 = *(undefined4 *)(param_2 + 4);
  iVar1 = FUN_0002b326(&local_84);
  if (iVar1 == 0) {
    local_88[0] = 2;
  }
  else {
    local_88[0] = 3;
  }
  (**param_1)(local_88);
  return;
}


/* ---- FUN_00035eb8 @ 00035eb8 ---- */

void FUN_00035eb8(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_00035ed0;
  uVar2 = 0;
  do {
    (**(code **)(iVar1 + uVar2 * 4))(param_1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}


/* ---- FUN_00035ed4 @ 00035ed4 ---- */

undefined4 FUN_00035ed4(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = DAT_00035f30;
  uVar3 = 0;
  do {
    FUN_0003d6e0(iVar1 + uVar3 * 0xc);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  iVar1 = FUN_00036818(DAT_00035f38 + 0x140,DAT_00035f38,0x140,DAT_00035f34,4,0x50);
  if (iVar1 != 0) {
    uVar2 = FUN_0003425c();
    FUN_00033754(((uint)(DAT_00035f3c - DAT_00035f40) >> 3) * 0x10000 + 1,
                 s_PM_BUFFER_INIT___returned__s__00035f44,uVar2);
    return 3;
  }
  *(undefined *)(DAT_00035f34 + -3) = 1;
  return 0;
}


/* ---- FUN_00035fe0 @ 00035fe0 ---- */

void FUN_00035fe0(void)

{
  FUN_000362f8();
  return;
}


/* ---- FUN_00035fe8 @ 00035fe8 ---- */

int FUN_00035fe8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_14;
  
  local_14 = 0;
  iVar1 = FUN_0003d6b0(param_1,&local_14,param_3,param_4,param_3);
  iVar4 = ((uint)(DAT_00036064 - DAT_00036068) >> 3) * 0x10000 + 1;
  do {
    if (iVar1 == 0) {
      iVar1 = FUN_00036414(param_1);
      if ((iVar1 != 0) && (iVar1 != 7)) {
        uVar3 = FUN_0003425c();
        FUN_00033762(iVar4,DAT_00036070,param_1,uVar3);
LAB_00036060:
        iVar1 = 3;
      }
      return iVar1;
    }
    iVar2 = FUN_00036150(param_1,*(undefined *)(iVar1 + 2));
    if ((iVar2 != 0) && (iVar2 != 5)) {
      uVar3 = FUN_0003425c();
      FUN_00033772(iVar4,DAT_0003606c,uVar3,param_1,*(undefined *)(iVar1 + 2));
      goto LAB_00036060;
    }
    local_14 = local_14 + 1;
    iVar1 = FUN_0003d6b0(param_1,&local_14);
  } while( true );
}


/* ---- FUN_00036074 @ 00036074 ---- */

undefined4 FUN_00036074(undefined4 param_1,int param_2,uint param_3,short *param_4)

{
  bool bVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_4 == (short *)0x0) {
    return 0xe;
  }
  if ((((param_2 != 7) && (param_2 != 8)) || (param_3 == 0)) || (4 < param_3)) {
    return 7;
  }
  bVar1 = false;
  puVar2 = (undefined2 *)FUN_0003d67c(param_1);
  if (puVar2 == (undefined2 *)0x0) {
    puVar2 = (undefined2 *)FUN_0003d67c(0xffff,0xff);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = (short)param_1;
      *(char *)(puVar2 + 1) = (char)param_2;
      goto LAB_000360c8;
    }
LAB_000360d0:
    uVar4 = 0x11;
  }
  else {
    if (*(byte *)(puVar2 + 4) != param_3) {
      return 0xf;
    }
LAB_000360c8:
    if (*(char *)((int)puVar2 + 9) == -1) {
      iVar3 = FUN_000367b4(DAT_00036140,param_3);
      *(char *)((int)puVar2 + 9) = (char)iVar3;
      if (iVar3 == 0xff) {
        FUN_0003d6e0(puVar2);
        goto LAB_000360d0;
      }
      bVar1 = true;
    }
    *(char *)(puVar2 + 4) = (char)param_3;
    iVar3 = FUN_0003683c(DAT_00036140,*(undefined *)((int)puVar2 + 9));
    if (iVar3 == 0) {
      FUN_00033754(((uint)(DAT_00036144 - DAT_00036148) >> 3) * 0x10000 + 1,DAT_0003614c,
                   *(undefined *)((int)puVar2 + 9));
      uVar4 = 3;
    }
    else {
      FUN_00036524(param_4,param_2,iVar3,param_3 & 0xffff);
      if ((bVar1) && (param_2 == 8)) {
        *(short *)(*(int *)(param_4 + 2) + 4) = *param_4 * 4 + -6;
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* ---- FUN_00036150 @ 00036150 ---- */

undefined4 FUN_00036150(void)

{
  int iVar1;
  
  iVar1 = FUN_0003d67c();
  if (iVar1 != 0) {
    FUN_0003d6fc();
    return 0;
  }
  return 5;
}


/* ---- FUN_00036164 @ 00036164 ---- */

undefined4 FUN_00036164(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  
  if (((param_2 == 7) || (param_2 == 8)) && (iVar1 = thunk_FUN_000365d4(param_3), iVar1 != 0)) {
    puVar2 = (undefined2 *)FUN_0003d67c(param_1,param_2);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = (short)param_3;
      *(char *)(puVar2 + 1) = (char)param_2;
      uVar3 = FUN_0003d530();
      return uVar3;
    }
    return 5;
  }
  return 7;
}


/* ---- FUN_0003619c @ 0003619c ---- */

void FUN_0003619c(int param_1)

{
  *(undefined2 *)(param_1 + 2) = 0xffff;
                    /* WARNING: Could not recover jumptable at 0x000361a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**DAT_000361a8)();
  return;
}


/* ---- FUN_000361ac @ 000361ac ---- */

undefined4 FUN_000361ac(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined auStack_20 [16];
  
  iVar2 = FUN_0002e500(DAT_00036234);
  iVar4 = ((uint)(DAT_00036238 - DAT_0003623c) >> 3) * 0x10000 + 1;
  if (iVar2 == 0) {
    iVar2 = FUN_0002e350();
    if (iVar2 == 0) {
      FUN_000365c8();
      local_28 = 0;
      local_24 = 0;
      while (iVar2 = FUN_0002e46e(0xc007,auStack_20,&local_28), iVar2 == 0) {
        FUN_0002e4a0(auStack_20,local_30);
        sVar1 = *(short *)(local_30[0] + 4);
        FUN_0002e420(auStack_20);
        FUN_00036540(sVar1 + 0x4000);
      }
      *DAT_00036284 = 1;
      uVar3 = 0;
    }
    else {
      FUN_00033754(iVar4,s_Could_not_initialize_flash_stora_00036244);
      uVar3 = 0x86;
    }
  }
  else {
    FUN_00033754(iVar4,DAT_00036240);
    uVar3 = 3;
  }
  return uVar3;
}


/* ---- thunk_FUN_0003658c @ 00036288 ---- */

void thunk_FUN_0003658c(undefined4 param_1)

{
  FUN_00031dec(param_1,DAT_00036594);
  return;
}


/* ---- thunk_FUN_00036598 @ 0003628c ---- */

int thunk_FUN_00036598(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00031dec(param_1,DAT_000365c4);
  while( true ) {
    if (iVar1 == 0xffff) {
      return 0xffff;
    }
    iVar2 = FUN_000365e8();
    if (iVar2 == 0) break;
    iVar1 = FUN_00031dec(iVar1,DAT_000365c4);
  }
  return iVar1;
}


/* ---- FUN_00036290 @ 00036290 ---- */

undefined4 FUN_00036290(short param_1,short *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined auStack_28 [12];
  int local_1c;
  undefined4 local_18;
  
  iVar1 = FUN_00036500();
  if (iVar1 != 0) {
    iVar1 = FUN_0002e46e(param_1 + -0x4000,auStack_28,DAT_000362e4);
    if ((iVar1 != 0) || (iVar1 = FUN_0002e4a0(auStack_28,&local_1c), iVar1 != 0)) {
      return 0;
    }
    *(char *)(param_3 + 1) = (char)param_1;
    *param_3 = *(undefined2 *)(local_1c + 2);
    *(undefined4 *)(param_3 + 2) = local_18;
    *param_2 = *(short *)(local_1c + 4) + 0x4000;
    FUN_0002e420(auStack_28);
  }
  return 1;
}


/* ---- FUN_000362e8 @ 000362e8 ---- */

void FUN_000362e8(void)

{
  int iVar1;
  
  iVar1 = DAT_000362f4;
  *(undefined4 *)(DAT_000362f4 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}


/* ---- FUN_000362f8 @ 000362f8 ---- */

undefined4 FUN_000362f8(uint param_1,undefined4 param_2,ushort *param_3,ushort *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int local_28;
  undefined4 local_24;
  undefined auStack_20 [12];
  
  if ((param_1 < 0x100) && (iVar2 = FUN_00036500(param_2), iVar2 != 0)) {
    iVar2 = FUN_000364d0(param_1,param_2,auStack_20);
    if ((iVar2 == 0) && (iVar2 = FUN_0002e4a0(auStack_20,&local_28), iVar2 == 0)) {
      *(char *)(param_3 + 1) = (char)param_2;
      uVar1 = *(ushort *)(local_28 + 2);
      *param_3 = uVar1;
      if (param_4 == (ushort *)0x0) {
        *(undefined4 *)(param_3 + 2) = local_24;
      }
      else {
        uVar4 = (uint)uVar1 << 2;
        uVar5 = uVar4;
        if ((uint)*param_4 < (uint)uVar1 << 2) {
          uVar5 = (uint)*param_4;
        }
        FUN_0002648c(*(undefined4 *)(param_3 + 2),local_24,uVar5);
        if (uVar5 < uVar4) {
          return 0xc;
        }
      }
      FUN_0002e420(auStack_20);
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


/* ---- FUN_0003636c @ 0003636c ---- */

undefined4 FUN_0003636c(uint param_1,ushort *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  short local_28;
  short local_26;
  undefined4 local_24;
  uint local_20;
  undefined auStack_1c [12];
  
  if ((param_1 < 0x100) && (iVar1 = FUN_00036500(*(undefined *)(param_2 + 1)), iVar1 != 0)) {
    local_28 = (short)param_1 + -0x4000;
    local_26 = *(byte *)(param_2 + 1) + 0xc000;
    local_24 = *(undefined4 *)(param_2 + 2);
    local_20 = (uint)*param_2;
    iVar1 = FUN_000364d0(param_1,*(undefined *)(param_2 + 1),auStack_1c);
    if (iVar1 == 5) {
      iVar1 = FUN_0002e4f6(auStack_1c,&local_28);
    }
    else {
      iVar1 = FUN_0002e4e8();
    }
    if (iVar1 == 0) {
      if (param_3 != 0) {
        FUN_0002e48e(auStack_1c,param_3);
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
      FUN_00033762(((uint)(DAT_00036400 - DAT_00036404) >> 3) * 0x10000 + 1,DAT_00036408,iVar1,
                   param_1);
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 7;
  }
  return uVar2;
}


/* ---- FUN_0003640c @ 0003640c ---- */

void FUN_0003640c(void)

{
  FUN_00036540(0xffff);
  return;
}


/* ---- FUN_00036414 @ 00036414 ---- */

undefined4 FUN_00036414(uint param_1)

{
  if (0xff < param_1) {
    return 7;
  }
  FUN_0003654c();
  FUN_00036434();
  return 0;
}


/* ---- thunk_FUN_000365d4 @ 0003642a ---- */

undefined4 thunk_FUN_000365d4(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x100) {
    uVar1 = FUN_0003238a(DAT_000365e4,param_1);
    return uVar1;
  }
  return 0;
}


/* ---- thunk_FUN_000365e8 @ 0003642e ---- */

undefined4 thunk_FUN_000365e8(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x100) {
    uVar1 = FUN_0003238a(DAT_000365f8,param_1);
    return uVar1;
  }
  return 0;
}


/* ---- FUN_00036434 @ 00036434 ---- */

void FUN_00036434(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined auStack_38 [4];
  undefined2 local_34;
  int local_30;
  undefined local_2c;
  undefined auStack_20 [12];
  
  iVar1 = DAT_000364bc;
  *(undefined *)(DAT_000364bc + 1) = 0;
  local_40 = 0;
  local_3c = 0;
  iVar2 = 0xffff;
  while( true ) {
    iVar2 = FUN_0003658c(iVar2);
    if (iVar2 == 0xffff) {
      return;
    }
    iVar3 = FUN_0002e47e(iVar2 + 0xc000U & 0xffff,auStack_20,&local_40);
    if (iVar3 != 10) break;
    FUN_00036570(iVar2);
  }
  local_30 = FUN_0002e2d0(iVar2 + 0xc000U & 0xffff);
  if (local_30 != 8) {
    if (local_30 == 0) {
      return;
    }
    FUN_00033762(((uint)(DAT_000364c0 - DAT_000364c4) >> 3) * 0x10000 + 1,DAT_000364c8,local_30,
                 iVar2);
    FUN_0002648c(auStack_38,DAT_000364cc,0x18);
    local_34 = (undefined2)iVar2;
    local_2c = 1;
    FUN_0003619c(auStack_38);
    return;
  }
  *(undefined *)(iVar1 + 1) = 1;
  return;
}


/* ---- FUN_000364d0 @ 000364d0 ---- */

int FUN_000364d0(short param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  FUN_00036500(param_2);
  local_18 = 0;
  local_14 = 0;
  iVar1 = FUN_0002e460(param_1 + -0x4000,param_2 + 0xc000U & 0xffff,param_3,&local_18);
  if (iVar1 != 0) {
    iVar1 = 5;
  }
  return iVar1;
}


/* ---- FUN_00036500 @ 00036500 ---- */

undefined4 FUN_00036500(int param_1)

{
  if ((((param_1 != 7) && (param_1 != 1)) && (param_1 != 8)) &&
     (((param_1 != 5 && (param_1 != 6)) && ((param_1 != 9 && (param_1 != 4)))))) {
    return 0;
  }
  return 1;
}


/* ---- FUN_00036524 @ 00036524 ---- */

void FUN_00036524(undefined2 *param_1,undefined param_2,undefined4 param_3,int param_4)

{
  *(undefined *)(param_1 + 1) = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  *param_1 = (short)((param_4 * 0x50 & 0xffffU) + 3 >> 2);
  return;
}


/* ---- FUN_00036540 @ 00036540 ---- */

void FUN_00036540(undefined4 param_1)

{
  FUN_0002c68e(param_1,DAT_00036548);
  return;
}


/* ---- FUN_0003654c @ 0003654c ---- */

undefined4 FUN_0003654c(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0xffff) && (iVar1 = FUN_0002c68e(param_1,DAT_0003656c), iVar1 == param_1)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00036570 @ 00036570 ---- */

void FUN_00036570(undefined4 param_1)

{
  FUN_00038fb0(param_1,DAT_00036588);
  FUN_00038fb0(param_1,DAT_00036588 + 0x20);
  return;
}


/* ---- FUN_0003658c @ 0003658c ---- */

void FUN_0003658c(undefined4 param_1)

{
  FUN_00031dec(param_1,DAT_00036594);
  return;
}


/* ---- FUN_00036598 @ 00036598 ---- */

int FUN_00036598(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00031dec(param_1,DAT_000365c4);
  while( true ) {
    if (iVar1 == 0xffff) {
      return 0xffff;
    }
    iVar2 = FUN_000365e8();
    if (iVar2 == 0) break;
    iVar1 = FUN_00031dec(iVar1,DAT_000365c4);
  }
  return iVar1;
}


/* ---- FUN_000365c8 @ 000365c8 ---- */

void FUN_000365c8(void)

{
  FUN_000264be(DAT_000365d0,0x40);
  return;
}


/* ---- FUN_000365d4 @ 000365d4 ---- */

undefined4 FUN_000365d4(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x100) {
    uVar1 = FUN_0003238a(DAT_000365e4,param_1);
    return uVar1;
  }
  return 0;
}


/* ---- FUN_000365e8 @ 000365e8 ---- */

undefined4 FUN_000365e8(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x100) {
    uVar1 = FUN_0003238a(DAT_000365f8,param_1);
    return uVar1;
  }
  return 0;
}


/* ---- FUN_000365fc @ 000365fc ---- */

void FUN_000365fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_3;
  local_c = param_4;
  iVar1 = FUN_00037270();
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x41e,DAT_00036678);
  }
  local_10 = 0x3100731;
  local_c = 3;
  iVar1 = FUN_00037718(&local_10);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x431,DAT_00036678);
  }
  iVar1 = FUN_000376ec(DAT_0003667c);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x434,DAT_00036678);
  }
  return;
}


/* ---- FUN_00036680 @ 00036680 ---- */

undefined4 FUN_00036680(int param_1,uint param_2,int param_3,int *param_4,int param_5,int *param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined uStack_90;
  undefined auStack_8f [16];
  undefined4 local_7f;
  undefined2 local_7b;
  undefined local_79;
  undefined4 local_40;
  undefined *local_3c;
  undefined2 local_38 [2];
  int local_34;
  uint uStack_30;
  int iStack_2c;
  int *piStack_28;
  
  local_3c = &uStack_90;
  bVar1 = false;
  local_38[0] = 0x50;
  bVar2 = false;
  if ((param_3 != 0) && (param_4 != (int *)0x0)) {
    bVar1 = true;
    *param_4 = 0;
  }
  if ((param_5 != 0) && (param_6 != (int *)0x0)) {
    bVar2 = true;
    *param_6 = 0;
  }
  local_40 = 0;
  uVar5 = 0;
  local_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  piStack_28 = param_4;
  while( true ) {
    if (param_2 <= uVar5) {
      return 0;
    }
    FUN_000264be(&uStack_90,0x50);
    iVar3 = FUN_000362f8(*(undefined2 *)(local_34 + uVar5 * 2),7,&local_40,local_38);
    if ((iVar3 == 5) || (iVar3 == 7)) break;
    if (((byte)local_7f >> 1 != 0) && ((byte)local_7f >> 1 != 1)) {
      return 0x3202;
    }
    if (bVar1) {
      puVar4 = (undefined4 *)(uVar5 * 7 + param_3);
      *puVar4 = local_7f;
      *(undefined2 *)(puVar4 + 1) = local_7b;
      *(undefined *)((int)puVar4 + 6) = local_79;
      *param_4 = *param_4 + 1;
    }
    if (bVar2) {
      FUN_0002648c(param_5 + uVar5 * 0x10,auStack_8f,0x10);
      *param_6 = *param_6 + 1;
    }
    uVar5 = uVar5 + 1;
  }
  return 5;
}


/* ---- FUN_00036742 @ 00036742 ---- */

undefined4 FUN_00036742(int *param_1)

{
  if ((*param_1 != 1) && (*param_1 != 2)) {
    return 0;
  }
  return 1;
}


/* ---- FUN_00036754 @ 00036754 ---- */

int FUN_00036754(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_000324c2(param_1,DAT_00036764);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_00036768 @ 00036768 ---- */

void FUN_00036768(uint param_1)

{
  *(byte *)(DAT_00036780 + (param_1 >> 3)) =
       *(byte *)(DAT_00036780 + (param_1 >> 3)) & ~(byte)(1 << (param_1 & 7));
  return;
}


/* ---- FUN_00036784 @ 00036784 ---- */

undefined4 FUN_00036784(int param_1)

{
  if ('\a' < *(char *)(param_1 + DAT_00036798 + 0x30)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0003679c @ 0003679c ---- */

undefined4 FUN_0003679c(int param_1)

{
  if (*(byte *)(param_1 + DAT_000367b0 + 0x30) < 8) {
    return 1;
  }
  return 0;
}


/* ---- FUN_000367b4 @ 000367b4 ---- */

uint FUN_000367b4(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) {
    uVar2 = 0xff;
    for (uVar3 = 0; uVar3 < (uint)param_1[2]; uVar3 = uVar3 + 1 & 0xff) {
      iVar1 = FUN_00032320(param_1[1],uVar3);
      DataMemoryBarrier(0x1f);
      if (iVar1 == 1) {
        if (uVar2 != 0xff) {
          for (; uVar2 < uVar3; uVar2 = uVar2 + 1 & 0xff) {
            FUN_00036864(param_1,uVar2);
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


/* ---- FUN_00036818 @ 00036818 ---- */

undefined4 FUN_00036818(int *param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  if ((((param_1 != (int *)0x0) && (param_2 != 0)) && (param_4 != 0)) &&
     ((((uint)(param_5 * param_6) < param_3 || param_5 * param_6 - param_3 == 0 && (param_5 != 0))
      && (param_6 != 0)))) {
    *param_1 = param_2;
    param_1[1] = param_4;
    param_1[2] = param_5;
    param_1[3] = param_6;
    return 0;
  }
  return 7;
}


/* ---- FUN_0003683c @ 0003683c ---- */

int FUN_0003683c(int *param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) &&
     ((param_2 != 0xff && (iVar1 = thunk_FUN_0003238a(), iVar1 != 0)))) {
    return param_2 * param_1[3] + *param_1;
  }
  return 0;
}


/* ---- FUN_00036864 @ 00036864 ---- */

void FUN_00036864(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) &&
     ((param_2 != 0xff && (iVar1 = thunk_FUN_0003238a(), iVar1 != 0)))) {
    DataMemoryBarrier(0x1f);
    FUN_000323d2(param_1[1] + (param_2 >> 5) * 4,~(1 << (param_2 & 0x1f)));
    return;
  }
  return;
}


/* ---- FUN_00036896 @ 00036896 ---- */

void FUN_00036896(undefined4 param_1,undefined *param_2)

{
  if (param_2 != (undefined *)0x0) {
    FUN_0002b504(param_1,*(undefined *)(DAT_0003a128 + 3),*param_2);
    return;
  }
  return;
}


/* ---- FUN_000368a0 @ 000368a0 ---- */

undefined4 FUN_000368a0(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (*DAT_00036914 == '\0') {
    return 8;
  }
  if (param_2 != (byte *)0x0) {
    iVar2 = FUN_0002b498(param_1);
    if (iVar2 != 0) {
      if (iVar2 == 2) {
        bVar1 = *param_2 | 1;
      }
      else {
        bVar1 = *param_2 & 0xfe;
      }
      *param_2 = bVar1;
      iVar2 = FUN_0002fa94(param_1);
      if (iVar2 == 0xffff) {
        bVar1 = *param_2 & 0xf7;
      }
      else {
        bVar1 = *param_2 | 8;
      }
      *param_2 = bVar1;
      uVar3 = FUN_0002b408(param_1);
      *param_2 = *param_2 & 0xfd | (byte)((uVar3 & 1) << 1);
      uVar3 = FUN_0002b454(param_1);
      *param_2 = *param_2 & 0xfb | (byte)((uVar3 & 1) << 2);
      return 0;
    }
    return 0x3002;
  }
  return 0xe;
}


/* ---- FUN_00036918 @ 00036918 ---- */

int FUN_00036918(void)

{
  int iVar1;
  
  if (*DAT_00036930 != '\0') {
    iVar1 = FUN_00039f44();
    if (iVar1 == 8) {
      iVar1 = 0x11;
    }
    return iVar1;
  }
  return 8;
}


/* ---- FUN_00036934 @ 00036934 ---- */

undefined4 FUN_00036934(void)

{
  undefined4 uVar1;
  
  if (*DAT_00036944 != '\0') {
    uVar1 = FUN_0002f884();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_00036948 @ 00036948 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036948(byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined2 local_46;
  undefined2 local_44;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined2 local_36;
  undefined2 local_34;
  undefined auStack_2c [20];
  undefined2 local_18 [2];
  
  FUN_00036ed0();
  FUN_00036c88(param_1);
  puVar2 = DAT_00036b5c;
  bVar1 = *param_1;
  if (bVar1 == 4) {
    local_60[0] = *DAT_00036c80;
    FUN_00036896(*(undefined2 *)(DAT_00036b5c + 4),local_60);
  }
  else if (bVar1 < 5) {
    if (bVar1 == 0) {
      if (*(short *)(param_1 + 4) != -1) {
        local_18[0] = 0xec;
        iVar4 = FUN_00037518(*(short *)(param_1 + 4),_DAT_00036bbc,local_18);
        if (iVar4 == 5) {
          debug_printf(s_Could_not_find_the_remote_databa_00036be4);
          iVar4 = FUN_00032748(DAT_00036b60,*(undefined2 *)(param_1 + 2),0);
          if (iVar4 != 0) {
            app_error_handler(iVar4,0x160,s__________main_c_00036bac);
          }
          puVar3 = DAT_00036b5c;
          *puVar2 = 0;
          puVar2[1] = 0;
          FUN_000264be(puVar3 + 0x24,0x2cc);
          iVar4 = FUN_0002b644(DAT_00036b5c + 0x24,*(undefined2 *)(param_1 + 2));
          if (iVar4 == 0) {
            return;
          }
          uVar5 = 0x167;
        }
        else {
          if (iVar4 != 0) {
            app_error_handler(iVar4,0x16d,s__________main_c_00036bac);
          }
          debug_printf(s_Remote_Database_loaded_from_flas_00036bbf + 1);
          FUN_0002648c(auStack_2c,_DAT_00036bbc + 10,0x12);
          iVar4 = FUN_00032748(DAT_00036b60,*(undefined2 *)(param_1 + 2),auStack_2c);
          if (iVar4 != 0) {
            app_error_handler(iVar4,0x175,s__________main_c_00036bac);
          }
          FUN_000326fc(DAT_00036b60,1);
          local_58 = *(undefined4 *)(_DAT_00036bbc + 0x80);
          local_54 = *(undefined4 *)(_DAT_00036bbc + 0x84);
          local_50 = *(undefined2 *)(_DAT_00036bbc + 0x88);
          local_4e = *(undefined4 *)(_DAT_00036bbc + 0x92);
          local_4a = *(undefined4 *)(_DAT_00036bbc + 0x96);
          local_46 = *(undefined2 *)(_DAT_00036bbc + 0x9a);
          local_44 = *(undefined2 *)(_DAT_00036bbc + 0x9c);
          local_3e = *(undefined4 *)(_DAT_00036bbc + 0xa4);
          local_3a = *(undefined4 *)(_DAT_00036bbc + 0xa8);
          local_36 = *(undefined2 *)(_DAT_00036bbc + 0xac);
          local_34 = *(undefined2 *)(_DAT_00036bbc + 0xae);
          iVar4 = FUN_00032530(DAT_00036b60 + 0x20,*(undefined2 *)(param_1 + 2),local_60);
          if (iVar4 == 0) {
            return;
          }
          uVar5 = 0x187;
        }
        app_error_handler(iVar4,uVar5,s__________main_c_00036bac);
      }
    }
    else if (bVar1 == 2) {
      FUN_00033754(((uint)(DAT_00036b64 - DAT_00036b68) >> 3) * 0x10000 + 3,
                   s_m_gatts_c_srv_changed_char_chara_00036b6c,*(undefined2 *)(DAT_00036b60 + 10));
      iVar4 = FUN_00032748(DAT_00036b60,*(undefined2 *)(param_1 + 2),0);
      if (iVar4 != 0) {
        app_error_handler(iVar4,0x195,s__________main_c_00036bac);
      }
      puVar3 = DAT_00036b5c;
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_000264be(puVar3 + 0x24,0x2cc);
      iVar4 = FUN_0002b644(DAT_00036b5c + 0x24,*(undefined2 *)(param_1 + 2));
      if (iVar4 != 0) {
        uVar5 = 0x19c;
LAB_00036b40:
        app_error_handler(iVar4,uVar5,s__________main_c_00036bac);
        return;
      }
    }
  }
  else if (bVar1 == 8) {
    if (((param_1[0x10] & 1) != 0) && (param_1[8] == 7)) {
      debug_printf(s_New_Bond__add_the_peer_to_the_wh_00036c14);
      debug_printf(s_m_whitelist_peer_cnt__d__MAX_PEE_00036c4c,*(int *)(puVar2 + 0x14) + 1,8);
      iVar4 = DAT_00036c7c;
      uVar6 = *(uint *)(puVar2 + 0x14);
      if (uVar6 < 8) {
        *(undefined2 *)(DAT_00036c7c + uVar6 * 2) = *(undefined2 *)(param_1 + 4);
        *(uint *)(puVar2 + 0x14) = uVar6 + 1;
        iVar4 = FUN_00036934(iVar4);
        if (iVar4 != 6) {
          if (iVar4 == 0x3205) {
            return;
          }
          if (iVar4 != 0) {
            app_error_handler(iVar4,0x1bc,s__________main_c_00036bac);
          }
        }
        iVar4 = FUN_00037764(DAT_00036c7c,*(undefined4 *)(puVar2 + 0x14));
        if (iVar4 != 0) {
          uVar5 = 0x1c1;
          goto LAB_00036b40;
        }
      }
    }
  }
  else if (bVar1 == 0xc) {
    FUN_00028954(0);
    return;
  }
  return;
}


/* ---- FUN_00036c88 @ 00036c88 ---- */

void FUN_00036c88(undefined *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_20;
  
  iVar4 = DAT_00036dfc;
  iVar6 = DAT_00036dfc + 0x54;
  local_20 = param_4;
  switch(*param_1) {
  case 0:
    iVar5 = FUN_000375e4(*(undefined2 *)(param_1 + 4));
    if ((iVar5 == 0x86) || (iVar5 == 0x11)) {
      iVar5 = *(int *)(iVar4 + 8);
      *(undefined2 *)(iVar6 + iVar5 * 2) = *(undefined2 *)(param_1 + 4);
      *(int *)(iVar4 + 8) = (iVar5 + 1) % 8;
LAB_00036df4:
      FUN_00036eb4();
      return;
    }
    if (iVar5 == 6) {
      return;
    }
    if (iVar5 == 7) {
      return;
    }
    if (iVar5 == 0x13) {
      return;
    }
    if (iVar5 == 0) {
      return;
    }
    uVar1 = 0x14e;
    goto LAB_00036d8a;
  case 2:
    if ((param_1[8] == '\x01') || (param_1[8] == '\0')) {
      FUN_00038cc4(*(undefined2 *)(param_1 + 4),*param_1,param_3,param_4);
      return;
    }
    break;
  case 6:
    if (*(char *)(DAT_00036dfc + 1) != '\0') {
      return;
    }
    uVar7 = (uint)(DAT_00036e04 - DAT_00036e08) >> 3;
    iVar6 = uVar7 * 0x10000 + 3;
    FUN_0003374c(iVar6,s_Attempting_to_clean_flash__00036e0c);
    if (*(char *)(iVar4 + 2) == '\0') {
      iVar5 = FUN_000375e8(0,0,&local_20);
      if (iVar5 == 0) {
        FUN_00033754(iVar6,s_Deleting_lowest_ranked_peer__pee_00036e28,local_20 & 0xffff);
        iVar5 = FUN_000375ac(local_20 & 0xffff);
        if (iVar5 == 0) {
          *(undefined *)(iVar4 + 2) = 1;
          goto LAB_00036d7a;
        }
        app_error_handler(iVar5,0x176,DAT_00036e00);
        *(undefined *)(iVar4 + 2) = 1;
      }
      if (iVar5 == 5) {
        iVar4 = uVar7 * 0x10000 + 1;
        pcVar2 = s_There_are_no_peers_to_delete__00036e54;
      }
      else {
        if (iVar5 != 6) {
          app_error_handler(iVar5,0x183,DAT_00036e00);
          return;
        }
        iVar4 = uVar7 * 0x10000 + 2;
        pcVar2 = s_Peer_ranks_functionality_is_disa_00036e74;
      }
      FUN_0003374c(iVar4,pcVar2);
    }
    else {
LAB_00036d7a:
      iVar5 = FUN_0002e314();
      if (iVar5 == 0) {
        *(undefined *)(iVar4 + 1) = 1;
      }
      else if (iVar5 != 8) {
        uVar1 = 400;
LAB_00036d8a:
        app_error_handler(iVar5,uVar1,DAT_00036e00,local_20);
        return;
      }
    }
    break;
  case 8:
  case 10:
    *(undefined *)(DAT_00036dfc + 2) = 1;
    break;
  case 0x13:
    *(undefined *)(DAT_00036dfc + 1) = 0;
    *(undefined *)(iVar4 + 2) = 0;
    iVar5 = *(int *)(iVar4 + 8);
    iVar4 = 0;
    do {
      psVar3 = (short *)(iVar6 + ((iVar4 + iVar5) % 8) * 2);
      if (*psVar3 != -1) {
        *psVar3 = -1;
        FUN_00038cc4();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    break;
  case 0x14:
    *(undefined *)(DAT_00036dfc + 1) = 0;
    if ((param_1[0xc] != '\0') && ((*(int *)(param_1 + 8) == 0xe || (*(int *)(param_1 + 8) == 1))))
    goto LAB_00036df4;
  }
  return;
}


/* ---- FUN_00036eb4 @ 00036eb4 ---- */

void FUN_00036eb4(void)

{
  undefined auStack_20 [32];
  
  FUN_0002648c(auStack_20,DAT_00036ecc,0x18);
  FUN_00036c88(auStack_20);
  return;
}


/* ---- FUN_00036ed0 @ 00036ed0 ---- */

void FUN_00036ed0(char *param_1)

{
  FUN_00036f30();
  if (*param_1 == '\0') {
    FUN_0002d834(*(undefined2 *)(param_1 + 2),0);
    return;
  }
  if (*param_1 == '\a') {
    FUN_0003374c(((uint)(DAT_00036f18 - DAT_00036f1c) >> 3) * 0x10000 + 1,s_Asserting__00036f20);
    if (*(int *)(param_1 + 8) != 0) {
      app_error_handler(*(int *)(param_1 + 8),0x119,DAT_00036f2c);
      return;
    }
  }
  return;
}


/* ---- FUN_00036f30 @ 00036f30 ---- */

void FUN_00036f30(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar2 = DAT_00037058;
  uVar7 = (uint)*param_1;
  uVar3 = (uint)(DAT_0003705c - DAT_00037060) >> 3;
  iVar9 = uVar3 * 0x10000 + 2;
  iVar12 = DAT_00037058 + 0xc;
  iVar11 = uVar3 * 0x10000 + 3;
  iVar10 = uVar3 * 0x10000 + 1;
  switch(uVar7) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 8:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    goto switchD_00036f5e_caseD_0;
  case 2:
    iVar10 = FUN_0002b474(*(undefined2 *)(param_1 + 2));
    FUN_00033772(iVar11,s_Connection_secured__role___s__co_00037064,
                 *(undefined4 *)(iVar2 + iVar10 * 4),*(undefined2 *)(param_1 + 2),
                 *(undefined4 *)(iVar12 + (uint)param_1[8] * 4));
    return;
  case 3:
    iVar10 = FUN_0002b474(*(undefined2 *)(param_1 + 2));
    uVar7 = *(uint *)(iVar2 + iVar10 * 4);
    uVar3 = (uint)*(ushort *)(param_1 + 10);
    uVar4 = *(undefined4 *)(iVar12 + (uint)param_1[8] * 4);
    uVar8 = (uint)*(ushort *)(param_1 + 2);
    uVar5 = DAT_000370a4;
    goto LAB_00036fee;
  case 6:
    pcVar6 = s_Flash_storage_is_full_000370a8;
    goto LAB_00037010;
  case 7:
    uVar7 = FUN_0003425c(*(undefined4 *)(param_1 + 8));
    pcVar6 = s_Unexpected_fatal_error_occurred__000370c0;
    break;
  case 9:
    uVar3 = FUN_0003425c(*(undefined4 *)(param_1 + 0x10));
    uVar4 = *(undefined4 *)(DAT_00037058 + -8 + (uint)param_1[9] * 4);
    uVar7 = (uint)*(ushort *)(param_1 + 4);
    uVar8 = *(uint *)(DAT_00037058 + 0x18 + (uint)param_1[8] * 4);
    iVar11 = iVar9;
    uVar5 = DAT_000370ec;
LAB_00036fee:
    FUN_00033784(iVar11,uVar5,uVar7,uVar8,uVar4,uVar3);
switchD_00036f5e_caseD_0:
    return;
  case 10:
    uVar7 = (uint)*(ushort *)(param_1 + 4);
    pcVar6 = s_Peer_deleted_successfully__peer__000370f0;
    break;
  case 0xb:
    uVar3 = FUN_0003425c(*(undefined4 *)(param_1 + 8));
    uVar1 = *(undefined2 *)(param_1 + 4);
    pcVar6 = s_Peer_deletion_failed__peer_id____00037118;
    goto LAB_0003702e;
  case 0xc:
    pcVar6 = s_All_peers_deleted__00037148;
    iVar9 = iVar11;
LAB_00037010:
    FUN_0003374c(iVar9,pcVar6,param_3,param_4);
    return;
  case 0xd:
    uVar7 = FUN_0003425c(*(undefined4 *)(param_1 + 8));
    pcVar6 = s_All_peer_deletion_failed__error__0003715c;
    break;
  case 0xf:
    uVar3 = (uint)*(ushort *)(param_1 + 4);
    uVar1 = *(undefined2 *)(param_1 + 2);
    pcVar6 = s_Local_DB_could_not_be_applied__c_00037180;
    iVar10 = iVar9;
LAB_0003702e:
    FUN_00033762(iVar10,pcVar6,uVar1,uVar3);
    return;
  case 0x14:
    uVar7 = FUN_0003425c(*(undefined4 *)(param_1 + 8));
    pcVar6 = s_Flash_garbage_collection_failed_w_000371bc;
    iVar10 = iVar9;
    break;
  default:
    pcVar6 = s_Unexpected_PM_event_ID__0x_x__000371ec;
    iVar10 = iVar9;
  }
  FUN_00033754(iVar10,pcVar6,uVar7);
  return;
}


/* ---- FUN_0003720c @ 0003720c ---- */

void FUN_0003720c(short *param_1)

{
  if (*param_1 == 0x10) {
    debug_printf(s_Connected__securing_connection__c_0003722c,param_1[2]);
    FUN_0002d834(param_1[2],0);
    return;
  }
  return;
}


/* ---- thunk_FUN_0002dee0 @ 0003726c ---- */

void thunk_FUN_0002dee0(void)

{
  FUN_0002dee0();
  return;
}


/* ---- FUN_00037270 @ 00037270 ---- */

undefined4 FUN_00037270(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  
  iVar2 = FUN_000361ac();
  uVar4 = DAT_00037314 - DAT_00037318;
  if (iVar2 == 0) {
    iVar2 = FUN_00035ed4();
    if (iVar2 == 0) {
      iVar2 = FUN_00039eec();
      if (iVar2 == 0) {
        iVar2 = FUN_0003a12c();
        if (iVar2 == 0) {
          iVar2 = FUN_0002f1f8();
          if (iVar2 == 0) {
            iVar2 = FUN_0002f404();
            puVar1 = DAT_00037428;
            if (iVar2 == 0) {
              *(undefined2 *)(DAT_00037428 + 4) = 0xffff;
              *(undefined4 *)(puVar1 + 8) = 0;
              puVar1[1] = 0;
              *puVar1 = 1;
              return 0;
            }
            uVar3 = FUN_0003425c();
            pcVar5 = s__s_failed_because_gscm_init___re_000373fc;
          }
          else {
            uVar3 = FUN_0003425c();
            pcVar5 = s__s_failed_because_gcm_init___ret_000373d0;
          }
        }
        else {
          uVar3 = FUN_0003425c();
          pcVar5 = s__s_failed_because_smd_init___ret_000373a4;
        }
      }
      else {
        uVar3 = FUN_0003425c();
        pcVar5 = s__s_failed_because_sm_init___retu_00037378;
      }
    }
    else {
      uVar3 = FUN_0003425c();
      pcVar5 = s__s_failed_because_pdb_init___ret_0003734c;
    }
  }
  else {
    uVar3 = FUN_0003425c();
    pcVar5 = s__s_failed_because_pds_init___ret_00037320;
  }
  FUN_00033762((uVar4 >> 3) * 0x10000 + 1,pcVar5,DAT_0003731c,uVar3);
  return 3;
}


/* ---- FUN_0003742c @ 0003742c ---- */

undefined4 FUN_0003742c(undefined4 param_1)

{
  int iVar1;
  
  if (*DAT_00037450 != '\0') {
    do {
      param_1 = thunk_FUN_00036598(param_1);
      iVar1 = thunk_FUN_000365e8();
    } while (iVar1 != 0);
    return param_1;
  }
  return 0xffff;
}


/* ---- FUN_00037454 @ 00037454 ---- */

void FUN_00037454(char *param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined local_30 [2];
  undefined2 local_2e;
  undefined2 local_2c;
  undefined4 local_28;
  char local_24;
  
  uVar2 = FUN_0002f844(*(undefined2 *)(param_1 + 4));
  *(undefined2 *)(param_1 + 2) = uVar2;
  iVar1 = DAT_000374ec;
  if (*param_1 == '\n') {
    if (((*(char *)(DAT_000374ec + 2) != '\0') &&
        (iVar3 = thunk_FUN_00036598(0xffff), iVar3 == 0xffff)) &&
       (iVar3 = thunk_FUN_0003658c(0xffff), iVar3 == 0xffff)) {
      *(undefined *)(iVar1 + 2) = 0;
      FUN_000264be(local_30,0x18);
      local_30[0] = 0xc;
      goto LAB_000374ce;
    }
  }
  else if ((*param_1 == '\v') && (*(char *)(DAT_000374ec + 2) != '\0')) {
    *(undefined *)(DAT_000374ec + 2) = 0;
    FUN_000264be(local_30,0x18);
    local_30[0] = 0xd;
    local_28 = *(undefined4 *)(param_1 + 8);
    local_24 = param_1[0xc];
LAB_000374ce:
    local_2c = 0xffff;
    local_2e = 0xffff;
    FUN_0002dee0(param_1);
    FUN_0002dee0(local_30);
    return;
  }
  FUN_0002dee0(param_1);
  return;
}


/* ---- FUN_000374f0 @ 000374f0 ---- */

undefined4 FUN_000374f0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  int iStack_c;
  
  if (*DAT_00037514 == '\0') {
    return 8;
  }
  if ((param_3 != 0) && (param_4 != 0)) {
    local_10 = 0;
    iStack_c = param_3;
    uVar1 = FUN_000362f8(param_1,param_2,&local_10);
    return uVar1;
  }
  return 0xe;
}


/* ---- FUN_00037518 @ 00037518 ---- */

void FUN_00037518(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000374f0(param_1,5,param_2,param_3);
  return;
}


/* ---- FUN_00037522 @ 00037522 ---- */

void FUN_00037522(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00037534(param_1,5,param_2,param_3,param_4);
  return;
}


/* ---- FUN_00037534 @ 00037534 ---- */

undefined4 FUN_00037534(undefined4 param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint local_20;
  uint local_1c;
  
  if (*DAT_000375a8 == '\0') {
    uVar1 = 8;
  }
  else if (param_3 == 0) {
    uVar1 = 0xe;
  }
  else if ((param_4 - (param_4 + -1) % 4) + 3 == param_4) {
    if ((param_2 == 7) &&
       (local_20 = param_3, local_1c = param_4, iVar2 = FUN_0002f968(param_3,param_1),
       iVar2 != 0xffff)) {
      uVar1 = 0xf;
    }
    else {
      local_20 = (uint)CONCAT12((char)param_2,(short)(param_4 + 3U >> 2));
      local_1c = param_3;
      uVar1 = FUN_0003636c(param_1,&local_20,param_5);
    }
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}


/* ---- FUN_000375ac @ 000375ac ---- */

undefined4 FUN_000375ac(void)

{
  undefined4 uVar1;
  
  if (*DAT_000375bc != '\0') {
    uVar1 = FUN_0002fa68();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_000375c0 @ 000375c0 ---- */

undefined4 FUN_000375c0(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  if (*DAT_000375e0 == '\0') {
    return 8;
  }
  if (param_2 != (undefined2 *)0x0) {
    uVar1 = FUN_0002fa94();
    *param_2 = uVar1;
    return 0;
  }
  return 0xe;
}


/* ---- FUN_000375e4 @ 000375e4 ---- */

undefined4 FUN_000375e4(void)

{
  return 6;
}


/* ---- FUN_000375e8 @ 000375e8 ---- */

undefined4 FUN_000375e8(void)

{
  return 6;
}


/* ---- FUN_000375ec @ 000375ec ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000375ec(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*_DAT_00037664 == '\0') {
    return 8;
  }
  _DAT_00037664[2] = '\x01';
  debug_printf(s___pm_peers_delete__A_00037667 + 1);
  iVar1 = thunk_FUN_00036598(0xffff);
  if (iVar1 == 0xffff) {
    debug_printf(s___pm_peers_delete__B_00037680);
    debug_printf(s___pm_peers_delete__C_00037698);
  }
  else {
    debug_printf(s___pm_peers_delete__C_00037698);
    while (iVar1 != 0xffff) {
      iVar2 = FUN_000375ac(iVar1);
      if (iVar2 != 0) {
        uVar3 = FUN_0003425c();
        debug_printf(DAT_000376b4,DAT_000376b0,uVar3,iVar1);
        return 3;
      }
      iVar1 = thunk_FUN_00036598(iVar1);
      debug_printf(s___pm_peers_delete__D__d_000376b8,iVar1);
    }
  }
  debug_printf(s___pm_peers_delete__E_000376d4);
  return 0;
}


/* ---- FUN_000376ec @ 000376ec ---- */

undefined4 FUN_000376ec(undefined4 param_1)

{
  byte bVar1;
  char *pcVar2;
  
  pcVar2 = DAT_00037710;
  if (*DAT_00037710 == '\0') {
    return 8;
  }
  bVar1 = DAT_00037710[3];
  if (2 < bVar1) {
    return 4;
  }
  *(undefined4 *)(DAT_00037714 + (uint)bVar1 * 4) = param_1;
  pcVar2[3] = bVar1 + 1;
  return 0;
}


/* ---- FUN_00037718 @ 00037718 ---- */

undefined4 FUN_00037718(void)

{
  undefined4 uVar1;
  
  if (*DAT_00037728 != '\0') {
    uVar1 = FUN_00039f94();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_0003772c @ 0003772c ---- */

void FUN_0003772c(int param_1)

{
  if (param_1 != 0) {
    FUN_0002dee0();
    return;
  }
  return;
}


/* ---- FUN_00037738 @ 00037738 ---- */

undefined4 FUN_00037738(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*DAT_00037760 == '\0') {
    uVar1 = 8;
  }
  else {
    if ((((param_1 | param_3) != 0) && ((param_1 == 0 || (param_2 != 0)))) &&
       ((param_3 == 0 || (param_4 != 0)))) {
      uVar1 = FUN_0002faf4();
      return uVar1;
    }
    uVar1 = 0xe;
  }
  return uVar1;
}


/* ---- FUN_00037764 @ 00037764 ---- */

undefined4 FUN_00037764(void)

{
  undefined4 uVar1;
  
  if (*DAT_00037774 != '\0') {
    uVar1 = FUN_0002fb2c();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_00037778 @ 00037778 ---- */

void FUN_00037778(undefined *param_1,undefined *param_2)

{
  undefined2 uVar1;
  
  if (param_2 == (undefined *)0x0) {
    app_error_handler(0,0x66,s___________________components_ble_000377b4);
  }
  if (param_1 == (undefined *)0x0) {
    app_error_handler(0,0x67,s___________________components_ble_000377b4);
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


/* ---- FUN_000377f4 @ 000377f4 ---- */

void FUN_000377f4(int param_1,undefined4 param_2,int param_3)

{
  if (*(char *)(param_1 + 8) == '\x05') {
    if (param_3 == 0) goto LAB_0003781a;
  }
  else if (*(char *)(param_1 + 9) != '\0') {
    FUN_00032b48(param_2,&DAT_00037828,*DAT_00037824);
  }
  FUN_00032b48(param_2,&LAB_0003782c);
LAB_0003781a:
  FUN_00032b62(param_2);
  return;
}


/* ---- FUN_00037830 @ 00037830 ---- */

void FUN_00037830(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*DAT_0003788c != '\0') {
    iVar3 = FUN_00033304(5);
    iVar2 = DAT_00037890;
    if (iVar3 == 0) {
      if (*(char *)(DAT_00037890 + 2) == '\0') {
        if (0x1022 < *(uint *)(DAT_00037890 + 8)) {
          *(undefined *)(DAT_00037890 + 2) = 1;
          FUN_000381d8();
        }
      }
      else if (*(uint *)(DAT_00037890 + 8) < 0x1022) {
        *(undefined *)(DAT_00037890 + 2) = 0;
        FUN_00038370();
      }
      *(undefined *)(iVar2 + 4) = 5;
    }
    else {
      cVar1 = *(char *)(DAT_00037890 + 4);
      if (cVar1 != '\0') {
        *(char *)(DAT_00037890 + 4) = cVar1 + -1;
        if (cVar1 == '\x01') {
          *(undefined *)(iVar2 + 2) = 1;
          FUN_000381d8();
          return;
        }
      }
    }
  }
  return;
}


/* ---- FUN_00037894 @ 00037894 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00037894(void)

{
  int iVar1;
  
  _DAT_5000050c = 0x40;
  debug_printf(DAT_000378b4);
  iVar1 = DAT_000378b8;
  *(undefined *)(DAT_000378b8 + 0x2f) = 0;
  *(undefined *)(iVar1 + 0x30) = 0;
  return;
}


/* ---- FUN_000378bc @ 000378bc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000378bc(void)

{
  debug_printf(DAT_000378e0);
  FUN_000332a0(6);
  _DAT_50000508 = 0x40;
  *(undefined *)(DAT_000378e4 + 0x2f) = 1;
  return;
}


/* ---- FUN_000378e8 @ 000378e8 ---- */

void FUN_000378e8(void)

{
  debug_printf(s______The_device_will_reboot_now__00037908);
  DataSynchronizationBarrier(0xf);
  *DAT_0003792c = *DAT_0003792c & 0x700 | DAT_00037930;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_00037934 @ 00037934 ---- */

void FUN_00037934(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 6) != 0) {
    FUN_00032b48(param_2,s__sLogs_dropped___d__s_000379a0,&DAT_00037998,*(short *)(param_1 + 6),
                 &DAT_00037990);
  }
  if (*(char *)(param_1 + 8) != '\x05') {
    if (*(char *)(param_1 + 9) != '\0') {
      iVar1 = FUN_000334d0(*(undefined2 *)(param_1 + 4));
      FUN_00032b48(param_2,&DAT_000379bc,*(undefined4 *)(DAT_000379b8 + iVar1 * 4));
    }
    uVar2 = FUN_00033894(*(undefined2 *)(param_1 + 4),0);
    FUN_00032b48(param_2,s_<_s>__s__000379c0,
                 *(undefined4 *)(DAT_000379b8 + -0x14 + (uint)*(byte *)(param_1 + 8) * 4),uVar2);
    return;
  }
  return;
}


/* ---- FUN_000379cc @ 000379cc ---- */

void FUN_000379cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined auStack_140 [304];
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_000279b0(auStack_140,param_1,&uStack_c);
  uVar1 = FUN_000264d4(auStack_140);
  FUN_00039010(auStack_140,uVar1);
  return;
}


/* ---- FUN_000379f0 @ 000379f0 ---- */

void FUN_000379f0(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    debug_printf(&DAT_00037a14,*(undefined *)(param_1 + iVar1));
  }
  debug_printf(&LAB_00037a18);
  return;
}


/* ---- FUN_00037a1c @ 00037a1c ---- */

void FUN_00037a1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined auStack_140 [304];
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_000279b0(auStack_140,param_1,&uStack_c);
  uVar1 = FUN_000264d4(auStack_140);
  FUN_00039010(auStack_140,uVar1);
  return;
}


/* ---- FUN_00037a40 @ 00037a40 ---- */

void FUN_00037a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined auStack_140 [304];
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_000279b0(auStack_140,param_1,&uStack_c);
  uVar1 = FUN_000264d4(auStack_140);
  FUN_00039010(auStack_140,uVar1);
  return;
}


/* ---- debug_printf @ 00037a64 ---- */

void debug_printf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined auStack_140 [304];
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_000279b0(auStack_140,param_1,&uStack_c);
  uVar1 = FUN_000264d4(auStack_140);
  FUN_00039010(auStack_140,uVar1);
  return;
}


/* ---- FUN_00037a88 @ 00037a88 ---- */

void FUN_00037a88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined auStack_140 [304];
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_000279b0(auStack_140,param_1,&uStack_c);
  uVar1 = FUN_000264d4(auStack_140);
  FUN_00039010(auStack_140,uVar1);
  return;
}


/* ---- FUN_00037aac @ 00037aac ---- */

void FUN_00037aac(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    debug_printf(&DAT_00037ad0,*(undefined *)(param_1 + iVar1));
  }
  debug_printf(&LAB_00037ad4);
  return;
}


/* ---- FUN_00037ad8 @ 00037ad8 ---- */

void FUN_00037ad8(void)

{
  return;
}


/* ---- FUN_00037adc @ 00037adc ---- */

void FUN_00037adc(int param_1)

{
  debug_printf(s___________flash_info___________00037b04);
  debug_printf(s_erase_unit___d_bytes_00037b28,**(undefined4 **)(param_1 + 4));
  debug_printf(s_program_unit___d_bytes_00037b40,*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  debug_printf(s________________________________00037b5c);
  return;
}


/* ---- process_app_cmd @ 00037b80 ---- */
/* opcode 0x25..0x34 (tbb) */
/* decompilation failed: Exception while decompiling 00037b80: Decompiler process died
 */

/* ---- FUN_00038044 @ 00038044 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00038044(ushort *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  int local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  iVar1 = DAT_000380fc;
  if ((param_1 != (ushort *)0x0) || (param_2 == 4)) {
    uVar5 = ((*param_1 & 0xff) << 8 | (uint)(*param_1 >> 8)) << 0x10 |
            (uint)*(byte *)(param_1 + 1) << 8 | (uint)*(byte *)((int)param_1 + 3);
    *(uint *)(DAT_000380fc + 0x20) = uVar5;
    if (*(char *)(iVar1 + 8) == -0x7d) {
      iVar4 = ((uint)(DAT_00038100 - DAT_00038104) >> 3) * 0x10000 + 3;
      FUN_00033754(iVar4,s_Received_AUID_0x_x__00038108,uVar5);
      FUN_0003d33c();
      iVar2 = _DAT_00038120;
      if (*(uint *)(_DAT_00038120 + 8) == uVar5) {
        FUN_0003374c(iVar4,s_AUID___OUID__STATE_CONNECTED__00038123 + 1);
        FUN_0003d46c(0);
        FUN_0003d454(1);
        *(undefined *)(iVar1 + 8) = 0x85;
        uVar3 = 0x11;
        local_20 = param_2;
        uStack_1c = param_3;
        local_18 = param_4;
      }
      else {
        FUN_0003374c(iVar4,s_AUID____OUID__STATE_OOBE__00038144);
        local_20 = 1000;
        uStack_1c = 500;
        local_18 = 30000;
        leds_req_breath(*(undefined4 *)(iVar2 + 0x40),0x1e,0xfa);
        FUN_0003d2d4(30000,DAT_00038160);
        *(undefined *)(iVar1 + 8) = 0x84;
        uVar3 = 0x12;
      }
      *(undefined *)(iVar1 + 0xd) = uVar3;
      *(undefined *)(iVar1 + 0xe) = 0;
      iVar2 = DAT_000380fc;
      *(undefined4 *)(iVar1 + 0xf) = 0;
      *(undefined4 *)(iVar1 + 0x13) = 0;
      FUN_0003206c(iVar2 + 0xd);
      post_state_event(DAT_000380fc + 8,local_20,uStack_1c,local_18);
      return;
    }
  }
  return;
}


/* ---- FUN_00038164 @ 00038164 ---- */

void FUN_00038164(void)

{
  int iVar1;
  
  iVar1 = DAT_000381c4;
  *(undefined *)(DAT_000381c4 + 8) = 1;
  FUN_0003d46c(0);
  FUN_0003d454(1);
  motor_off();
  leds_off();
  FUN_0003c988();
  leds_execute_timer_stop();
  FUN_0003cb64();
  FUN_0003d33c();
  FUN_0002ffe4();
  FUN_000300ac();
  *(undefined *)(iVar1 + 0x1c) = 0;
  FUN_000287ae();
  if (((*(char *)(DAT_000381c8 + 0x27) == '\x01') && (*(char *)(iVar1 + 9) == '\0')) &&
     (*DAT_000381cc == '\0')) {
    FUN_0003c5f0(100);
    return;
  }
  return;
}


/* ---- FUN_000381d8 @ 000381d8 ---- */

void FUN_000381d8(void)

{
  FUN_00033754(((uint)(DAT_00038218 - DAT_0003821c) >> 3) * 0x10000 + 3,s_func___s__00038224,
               DAT_00038220);
  leds_off();
  FUN_0003c790(0xffffff,0x1e,0);
  FUN_0003d454(0);
  FUN_0003d454(1);
  post_state_event(DAT_00038230);
  return;
}


/* ---- FUN_00038234 @ 00038234 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00038234(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_000382f0;
  cVar1 = *(char *)(DAT_000382f0 + 0x51);
  if (cVar1 == '\x01') {
LAB_000382d0:
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
          FUN_00031c70(0x50);
          *(undefined *)(iVar2 + 0xb) = 1;
LAB_000382b4:
          leds_off();
          goto LAB_00038278;
        }
        if (cVar1 == '\x05') {
          FUN_00031cb0();
          iVar2 = FUN_0002fe1a();
          if (iVar2 == 0) goto LAB_000382d0;
        }
        else {
          if (cVar1 == '\x06') goto LAB_000382b4;
          if (cVar1 != '\a') goto LAB_00038278;
          uVar3 = 0xffffff;
        }
      }
    }
  }
  aw9109_build_constant_program(uVar3,uVar3,uVar3,100,100,100);
LAB_00038278:
  post_state_event(DAT_000382f0 + 8);
  if ((_DAT_50000510 << 0x12) >> 0x1f == -0x19) {
    return;
  }
  DataSynchronizationBarrier(0xf);
  *DAT_000382f4 = *DAT_000382f4 & 0x700 | DAT_000382f8;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000382fc @ 000382fc ---- */

void FUN_000382fc(void)

{
  int iVar1;
  
  iVar1 = DAT_00038330;
  *(char *)(DAT_00038330 + 0x1d) = *(char *)(DAT_00038330 + 0x1d) + '\x01';
  FUN_0003d33c();
  FUN_0003d2d4(30000,DAT_00038334);
  FUN_00033754(((uint)(DAT_00038338 - DAT_0003833c) >> 3) * 0x10000 + 3,
               s_process_factory_touch_event__tou_00038340,*(undefined *)(iVar1 + 0x1d));
  return;
}


/* ---- FUN_00038370 @ 00038370 ---- */

void FUN_00038370(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00033754(((uint)(DAT_000383b8 - DAT_000383bc) >> 3) * 0x10000 + 3,s_func___s___000383c4,
               DAT_000383c0,param_4,param_2,param_3,param_4);
  *DAT_000383d4 = 0;
  uVar2 = 0;
  uVar3 = 200;
  uVar4 = 0;
  leds_req_breath(0xffffff,0x1e,400,400);
  FUN_0003d454(0);
  uVar1 = FUN_0003d454(1);
  FUN_0002c710(uVar1,uVar2,uVar3,uVar4);
  return;
}


/* ---- FUN_000383d8 @ 000383d8 ---- */

void FUN_000383d8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined uVar4;
  
  debug_printf(s_process_msg_double_tap_detected__00038444);
  iVar1 = DAT_00038474;
  *(undefined *)(DAT_00038474 + 0x1d) = 0;
  *(undefined *)(iVar1 + 8) = 0x86;
  FUN_0003d46c(1);
  iVar2 = DAT_00038478;
  FUN_0003d2d4(*(undefined4 *)(DAT_00038478 + 0x20),DAT_0003847c);
  post_state_event(iVar1 + 8);
  iVar3 = *(int *)(iVar2 + 0x48);
  if (*(int *)(iVar2 + 0x50) == iVar3) {
    uVar4 = 1;
  }
  else if (*(int *)(iVar2 + 0x54) == iVar3) {
    uVar4 = 2;
  }
  else if (*(int *)(iVar2 + 0x58) == iVar3) {
    uVar4 = 3;
  }
  else {
    uVar4 = 0xff;
  }
  *(undefined *)(iVar1 + 0x1b) = uVar4;
  leds_req_breath(iVar3,0x3c,500,*(int *)(iVar2 + 0x20) - 500U & 0xffff,0x32,0x32,
                  *(int *)(iVar2 + 0x20));
  return;
}


/* ---- FUN_00038480 @ 00038480 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00038480(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined uVar4;
  int iVar5;
  
  iVar2 = DAT_00038548;
  iVar1 = DAT_00038544;
  if (*(char *)(DAT_00038544 + 0x1d) == *(char *)(DAT_00038548 + 0x14)) goto LAB_000384f8;
  debug_printf(s_process_msg_timeout_event__d__d_u_0003854f + 1,*(char *)(DAT_00038544 + 0x1d),
               *(char *)(DAT_00038548 + 0x14),*_DAT_0003854c);
  *(undefined *)(iVar1 + 0xd) = 0x15;
  if (*(char *)(iVar1 + 0x1d) == '\0') {
    *(undefined *)(iVar1 + 0xe) = 0;
  }
  else {
    *(char *)(iVar1 + 0xe) = *(char *)(iVar1 + 0x1d) + '\x01';
  }
  *(undefined4 *)(iVar1 + 0xf) = 0;
  *(undefined4 *)(iVar1 + 0x13) = 0;
  *(undefined4 *)(iVar1 + 0x17) = 0xffffffff;
  iVar5 = *(int *)(iVar2 + 0x48);
  if (iVar5 == *(int *)(iVar2 + 0x50)) {
    uVar4 = 1;
LAB_000384d2:
    *(undefined *)(iVar1 + 0x1b) = uVar4;
  }
  else {
    if (iVar5 == *(int *)(iVar2 + 0x54)) {
      uVar4 = 2;
      goto LAB_000384d2;
    }
    if (iVar5 == *(int *)(iVar2 + 0x58)) {
      *(undefined *)(iVar1 + 0x1b) = 3;
    }
    else {
      *(undefined *)(iVar1 + 0x1b) = 0;
    }
  }
  debug_printf(s_global_param_bond_event_ID____d_0003857c,*(undefined *)(iVar1 + 0x1b));
  debug_printf(s_global_param_touch_cnt____app_se_000385a0);
  FUN_0003206c(DAT_00038544 + 0xd);
LAB_000384f8:
  FUN_0003cab4();
  FUN_0003d46c(0);
  FUN_0003d454(1);
  motor_off();
  leds_off();
  pcVar3 = DAT_000385d8;
  *(undefined *)(iVar1 + 0x1d) = 0;
  if (*pcVar3 != '\0') {
    *(undefined *)(iVar1 + 8) = 0x85;
    post_state_event(DAT_00038544 + 8);
    FUN_00033754(((uint)(DAT_000385dc - DAT_000385e0) >> 3) * 0x10000 + 3,
                 s_Func___s__STATE_CONNECTED__000385e8,DAT_000385e4);
    return;
  }
  return;
}


/* ---- FUN_00038608 @ 00038608 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00038608(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar3 = DAT_00038744;
  iVar2 = DAT_00038740;
  uVar5 = *(undefined4 *)(DAT_00038740 + 0x20);
  debug_printf(s_process_msg_touch_release_event___0003874b + 1,*(undefined *)(DAT_00038744 + 0x1d),
               *(undefined *)(DAT_00038740 + 0x14),*_DAT_00038748);
  bVar1 = *(byte *)(iVar3 + 0x1d);
  local_2c = param_3;
  uStack_28 = param_4;
  if (bVar1 < *(byte *)(iVar2 + 0x14)) {
    *(undefined *)(iVar3 + 0xd) = 0x14;
    *(byte *)(iVar3 + 0xe) = bVar1;
    *(undefined4 *)(iVar3 + 0xf) = param_1;
    if (bVar1 == 1) {
      *(undefined4 *)(iVar3 + 0x13) = 0;
    }
    else {
      *(uint *)(iVar3 + 0x13) = param_2;
    }
    *(undefined4 *)(iVar3 + 0x17) = 0;
    iVar4 = *(int *)(iVar2 + 0x48);
    if ((iVar4 == *(int *)(iVar2 + 0x50)) && (*(char *)(iVar2 + 0x4c) == '\x01')) {
      *(undefined *)(iVar3 + 0x1b) = 1;
    }
    else if ((iVar4 == *(int *)(iVar2 + 0x54)) && (*(char *)(iVar2 + 0x4d) == '\x01')) {
      *(undefined *)(iVar3 + 0x1b) = 2;
    }
    else if ((iVar4 == *(int *)(iVar2 + 0x58)) && (*(char *)(iVar2 + 0x4e) == '\x01')) {
      *(undefined *)(iVar3 + 0x1b) = 3;
    }
    else {
      *(undefined *)(iVar3 + 0x1b) = 0xff;
    }
    local_30 = *(uint *)(iVar2 + 0x20);
    FUN_0003c7bc(*(undefined4 *)(iVar2 + 0x60),0xf,local_30 & 0xffff,100);
  }
  else {
    local_30 = param_2;
    if (bVar1 == *(byte *)(iVar2 + 0x14)) {
      *(undefined *)(iVar3 + 0xd) = 0x14;
      *(byte *)(iVar3 + 0xe) = bVar1;
      *(undefined4 *)(iVar3 + 0xf) = param_1;
      *(uint *)(iVar3 + 0x13) = param_2;
      *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
      iVar4 = *(int *)(iVar2 + 0x48);
      if ((iVar4 == *(int *)(iVar2 + 0x50)) && (*(char *)(iVar2 + 0x4c) == '\x01')) {
        *(undefined *)(iVar3 + 0x1b) = 1;
      }
      else if ((iVar4 == *(int *)(iVar2 + 0x54)) && (*(char *)(iVar2 + 0x4d) == '\x01')) {
        *(undefined *)(iVar3 + 0x1b) = 2;
      }
      else if ((iVar4 == *(int *)(iVar2 + 0x58)) && (*(char *)(iVar2 + 0x4e) == '\x01')) {
        *(undefined *)(iVar3 + 0x1b) = 3;
      }
      else {
        *(undefined *)(iVar3 + 0x1b) = 0xff;
      }
      FUN_0003d454(0);
      FUN_0003d454(1);
      uVar5 = 3000;
      local_30 = 0;
      local_2c = 0x96;
      uStack_28 = 3000;
      leds_req_breath(*(undefined4 *)(iVar2 + 100),0x3c,0x1c2,0x1c2);
    }
  }
  FUN_0003d2d4(uVar5,DAT_00038780);
  FUN_0003206c(DAT_00038744 + 0xd);
  post_state_event(DAT_00038744 + 8,local_30,local_2c,uStack_28);
  return;
}


/* ---- FUN_00038784 @ 00038784 ---- */

void FUN_00038784(void)

{
  debug_printf(s_process_no_ouid_double_tap_detec_000387ac);
  FUN_00028a64();
  leds_req_breath(0xffffff,0x1e,200,200,0x32,0x96,0x44c);
  return;
}


/* ---- FUN_000387d4 @ 000387d4 ---- */

void FUN_000387d4(void)

{
  int iVar1;
  
  debug_printf(s_Doube_tap_detected_in_OOBE_mode__0003882c);
  iVar1 = DAT_00038850;
  *(undefined *)(DAT_00038850 + 0xd) = 0x13;
  *(undefined *)(iVar1 + 0xe) = 0;
  *(undefined4 *)(iVar1 + 0xf) = 0;
  *(undefined4 *)(iVar1 + 0x13) = 0;
  FUN_0003206c(iVar1 + 0xd);
  leds_req_breath(*(undefined4 *)(DAT_00038854 + 0x44),0x1e,200,200,0x32,0x32,1000);
  motor_on(0x50,2000);
  FUN_0003d33c();
  FUN_0003d2d4(10000,DAT_00038858);
  return;
}


/* ---- FUN_0003885c @ 0003885c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003885c(undefined *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = _DAT_000388c8;
  if ((param_1 != (undefined *)0x0) || (param_2 == 8)) {
    debug_printf(s_process_token__x_000388cb + 1,*(undefined *)(_DAT_000388c8 + 8));
    uVar2 = _DAT_000388e0;
    if (*(char *)(iVar1 + 8) == -0x7e) {
      debug_printf(s_Recv_TOKEN__0x_x___s_000388e3 + 1,*param_1);
      iVar3 = FUN_0002650e(param_1,uVar2,8);
      if (iVar3 != 0) {
        debug_printf(s_TOKEN_ERROR__Sleep_now__000388fc);
        FUN_0002b824(0);
        FUN_00039d3c();
        return;
      }
      debug_printf(s_TOKEN_OK__STATE_WATING_AUID__00038918);
      *(undefined *)(iVar1 + 8) = 0x83;
      post_state_event(_DAT_000388c8 + 8);
      FUN_0003d33c();
      FUN_0003d2d4(30000,DAT_00038938);
      return;
    }
  }
  return;
}


/* ---- FUN_0003893c @ 0003893c ---- */

undefined4 FUN_0003893c(int param_1)

{
  if (param_1 == DAT_0003894c) {
    return DAT_00038950;
  }
  return 0;
}


/* ---- FUN_00038954 @ 00038954 ---- */

void FUN_00038954(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *param_1;
  FUN_0003480c(*(undefined *)(iVar3 + 0x20));
  uVar2 = 0;
  do {
    uVar1 = 0;
    iVar4 = iVar3 + uVar2 * 0xc;
    do {
      iVar5 = iVar4 + uVar1;
      if (*(char *)(iVar5 + 8) != -1) {
        FUN_0003480c();
        *(undefined *)(iVar5 + 8) = 0xff;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 2);
    if (*(int *)(iVar3 + uVar2 * 0xc) != -1) {
      FUN_00034684();
      *(undefined4 *)(iVar3 + uVar2 * 0xc) = 0xffffffff;
    }
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined *)(iVar4 + 0xb) = 0;
  } while (uVar2 < 2);
  FUN_00034d7c(param_1[1]);
  return;
}


/* ---- FUN_000389bc @ 000389bc ---- */

void FUN_000389bc(undefined4 param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = true;
  uVar2 = 0;
  iVar4 = DAT_00038a10 + 0xc;
  iVar3 = DAT_00038a10 + param_2 * 2;
  do {
    if (*(char *)(iVar3 + uVar2) != '\0') {
      *(char *)(iVar3 + uVar2) = *(char *)(iVar3 + uVar2) + -1;
      if (*(char *)(iVar3 + uVar2) == '\0') {
        (**(code **)(**(int **)(iVar4 + param_2 * 4) + 0x1c))(param_2);
      }
      else {
        bVar1 = false;
      }
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 2);
  if (bVar1) {
    FUN_00034c26(*(undefined4 *)(*(int *)(iVar4 + param_2 * 4) + 4),2);
    return;
  }
  return;
}


/* ---- FUN_00038a14 @ 00038a14 ---- */

void FUN_00038a14(int *param_1,int param_2,uint param_3)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = *param_1;
  puVar7 = (undefined4 *)(iVar8 + param_2 * 0xc);
  FUN_000347a4(*(undefined *)(iVar8 + 0x20));
  iVar2 = DAT_00038ae4;
  if (param_3 == 0) {
    FUN_000347a4(*(undefined *)((int)puVar7 + 9));
    uVar1 = *(undefined *)(puVar7 + 2);
  }
  else {
    uVar3 = *(uint *)(iVar8 + 0x18);
    if (param_3 < uVar3) {
      uVar6 = puVar7[1];
      if (((uVar6 == uVar3) || (uVar6 == 0)) || (uVar6 <= param_3)) {
        *(undefined *)(DAT_00038ae4 + (uint)*(byte *)(param_1[1] + 4)) = 0xff;
      }
      else {
        FUN_00034bdc(param_1[1],3,uVar6,0);
        if (*(char *)((int)puVar7 + 10) == '\0') {
          uVar4 = FUN_000346dc(*puVar7);
        }
        else {
          uVar4 = FUN_00034330();
        }
        uVar5 = FUN_00034c16(param_1[1],3);
        FUN_00034760(*(undefined *)(iVar8 + 0x20),uVar5,uVar4);
        FUN_000347d8(*(undefined *)(iVar8 + 0x20));
        *(char *)(iVar2 + (uint)*(byte *)(param_1[1] + 4)) = (char)param_2;
        *(uint *)(DAT_00038ae8 + (uint)*(byte *)(param_1[1] + 4) * 4) = param_3;
      }
      FUN_00034bdc(param_1[1],param_2,param_3,0);
      FUN_000347d8(*(undefined *)(puVar7 + 2));
      FUN_000347d8(*(undefined *)((int)puVar7 + 9));
      goto LAB_00038adc;
    }
    param_3 = uVar3 & 0xffff;
    FUN_000347a4(*(undefined *)(puVar7 + 2));
    uVar1 = *(undefined *)((int)puVar7 + 9);
  }
  FUN_000347d8(uVar1);
  *(undefined *)(iVar2 + (uint)*(byte *)(param_1[1] + 4)) = 0xff;
LAB_00038adc:
  puVar7[1] = param_3;
  return;
}


/* ---- FUN_00038aec @ 00038aec ---- */

undefined4 FUN_00038aec(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000322b2(*DAT_00038b04,param_1);
  FUN_000264be(uVar1,0x1c);
  return uVar1;
}


/* ---- FUN_00038b08 @ 00038b08 ---- */

void FUN_00038b08(undefined4 param_1)

{
  FUN_000322f4(*DAT_00038b14,param_1);
  return;
}


/* ---- FUN_00038b18 @ 00038b18 ---- */

void FUN_00038b18(void)

{
  FUN_000322c8(*DAT_00038b28,DAT_00038b24);
  return;
}


/* ---- FUN_00038b2c @ 00038b2c ---- */

void FUN_00038b2c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined auStack_28 [4];
  int local_24;
  
  puVar2 = DAT_00038bc8;
  iVar1 = DAT_00038bc4;
  do {
    puVar3 = *(undefined **)(iVar1 + 4);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)FUN_000322de(*puVar2,DAT_00038bc4 + 8);
      *(undefined **)(iVar1 + 4) = puVar3;
    }
    switch(*puVar3) {
    default:
      iVar4 = 0xf;
      goto LAB_00038b82;
    case 1:
      iVar4 = FUN_0002fbd4(param_1);
      break;
    case 2:
    case 3:
      iVar4 = FUN_0003d810(param_1);
      break;
    case 4:
    case 5:
      iVar4 = FUN_0002d9b8(param_1);
      break;
    case 6:
      iVar4 = FUN_0002ee7c(param_1,puVar3);
    }
    if (iVar4 == 0) {
      return;
    }
LAB_00038b82:
    FUN_000264be(auStack_28,0x14);
    if (iVar4 == 0x1d1d) {
      iVar4 = 0;
    }
    local_24 = iVar4;
    FUN_0002dd30(*(undefined4 *)(iVar1 + 4),auStack_28);
    FUN_0002dda4(auStack_28);
    iVar4 = DAT_00038bc4;
    *(undefined4 *)(iVar1 + 4) = 0;
    param_1 = 0;
    FUN_000322c8(*puVar2,iVar4 + 8);
    iVar4 = FUN_00032412(DAT_00038bc4 + 0xc,1);
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}


/* ---- FUN_00038bcc @ 00038bcc ---- */

void FUN_00038bcc(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_00038c64;
  iVar1 = DAT_00038c60;
  if (*(char *)(DAT_00038c60 + 8) == '\0') {
    iVar3 = FUN_000322de(*DAT_00038c68,DAT_00038c64 + 1);
    *piVar2 = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 4) = 0;
      return;
    }
  }
  *(undefined *)(iVar1 + 8) = 2;
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 4) == '\0') {
    iVar3 = *(int *)(iVar3 + 0x10) + *(int *)(iVar3 + 0x18);
    software_interrupt(0x29);
  }
  else {
    if (*(char *)(iVar3 + 4) != '\x01') goto LAB_00038c36;
    iVar3 = *(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x10);
    software_interrupt(0x28);
  }
  if (iVar3 == 0) {
    if (*(char *)(iVar1 + 0x10) == '\0') {
      FUN_00032f58(2,0);
      return;
    }
  }
  else {
    if (iVar3 != 0x11) {
LAB_00038c36:
      FUN_0002ddc4(*piVar2,3);
      *(undefined *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 4) = 0;
      FUN_00038b18();
      return;
    }
    *(undefined *)(iVar1 + 8) = 1;
  }
  return;
}


/* ---- FUN_00038c6c @ 00038c6c ---- */

void FUN_00038c6c(void)

{
  int iVar1;
  
  iVar1 = FUN_000323de(DAT_00038c84,1);
  if (iVar1 == 0) {
    FUN_00038b2c();
    return;
  }
  return;
}


/* ---- FUN_00038c88 @ 00038c88 ---- */

void FUN_00038c88(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00038ca8;
  iVar2 = FUN_000323c0(DAT_00038ca8 + 4);
  if ((iVar2 == 0) && (*(char *)(iVar1 + 0x11) == '\0')) {
    FUN_00038bcc();
    return;
  }
  return;
}


/* ---- FUN_00038cac @ 00038cac ---- */

int FUN_00038cac(uint **param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = **param_1;
  uVar1 = (*param_1)[1];
  if (uVar2 <= uVar1) {
    return uVar1 - uVar2;
  }
  return (int)param_1[2] + (uVar1 - uVar2) + 1;
}


/* ---- FUN_00038cc4 @ 00038cc4 ---- */

void FUN_00038cc4(undefined2 param_1)

{
  undefined auStack_20 [4];
  undefined2 local_1c;
  
  FUN_000264be(auStack_20,0x18);
  local_1c = param_1;
  FUN_00036c88(auStack_20);
  return;
}


/* ---- FUN_00038ce0 @ 00038ce0 ---- */

undefined4 FUN_00038ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0002648c(param_3,param_2,param_4);
  return 0;
}


/* ---- FUN_00038cf0 @ 00038cf0 ---- */

uint FUN_00038cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint local_c;
  
  local_c = param_4;
  FUN_0002f5b0(DAT_00038d08,0x26,param_1,&local_c,1);
  return local_c & 0xff;
}


/* ---- FUN_00038d0c @ 00038d0c ---- */

void FUN_00038d0c(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined local_38 [2];
  undefined2 local_36;
  undefined2 local_34;
  int local_30;
  undefined local_2c;
  
  iVar3 = DAT_00038dac;
  pcVar2 = DAT_00038da8;
  if (*DAT_00038da8 != '\0') {
    *DAT_00038da8 = '\0';
    uVar7 = 0;
    do {
      puVar6 = (undefined2 *)(iVar3 + uVar7 * 0xc);
      bVar1 = *(byte *)(puVar6 + 5);
      if (((((int)((uint)bVar1 << 0x1e) < 0) || ((bVar1 & 1) != 0)) &&
          ((*pcVar2 = '\x01', (int)((uint)bVar1 << 0x1e) < 0 || (param_1 != 0)))) &&
         (iVar4 = FUN_0003d530(puVar6), iVar4 != 0)) {
        local_36 = 0xffff;
        local_34 = *puVar6;
        if (iVar4 == 0x86) {
          local_38[0] = 6;
        }
        else {
          local_38[0] = 7;
          local_2c = 0;
          local_30 = iVar4;
          uVar5 = FUN_0003425c();
          FUN_00033762(((uint)(DAT_00038db0 - DAT_00038db4) >> 3) * 0x10000 + 1,DAT_00038db8,uVar5,
                       *puVar6);
        }
        FUN_00035eb8(local_38);
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
  }
  return;
}


/* ---- FUN_00038dbc @ 00038dbc ---- */

undefined4 FUN_00038dbc(short *param_1,short *param_2,undefined4 *param_3,short **param_4)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_00038e40;
  if (*DAT_00038e3c == '\0') {
    uVar4 = 2;
  }
  else if ((param_3 == (undefined4 *)0x0) || (param_4 == (short **)0x0)) {
    uVar4 = 5;
  }
  else {
    while (*(ushort *)(param_4 + 1) < 2) {
      if (*(char *)(iVar1 + (uint)*(ushort *)(param_4 + 1) * 0x14) == '\0') {
        while (iVar3 = FUN_00038ee4(*(undefined2 *)(param_4 + 1),param_4), iVar3 != 0) {
          psVar2 = *param_4;
          if (((param_1 == (short *)0x0) || (psVar2[2] == *param_1)) &&
             ((param_2 == (short *)0x0 || (*psVar2 == *param_2)))) {
            *param_3 = *(undefined4 *)(psVar2 + 4);
            param_3[1] = *param_4;
            *(undefined2 *)(param_3 + 2) = *(undefined2 *)(DAT_00038e40 + 0x30);
            return 0;
          }
        }
        *param_4 = (short *)0x0;
      }
      *(short *)(param_4 + 1) = *(short *)(param_4 + 1) + 1;
    }
    uVar4 = 10;
  }
  return uVar4;
}


/* ---- FUN_00038e44 @ 00038e44 ---- */

undefined4 FUN_00038e44(int *param_1,ushort *param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_18;
  
  iVar2 = DAT_00038edc;
  uVar3 = param_1[1];
  if (((((uVar3 == 0) || (uVar3 < *(uint *)(DAT_00038ee0 + 0xc))) ||
       (*(uint *)(DAT_00038ee0 + 0x10) < uVar3)) ||
      ((local_18 = param_4, iVar4 = FUN_0002ff04(), iVar4 == 0 ||
       (*(short *)(param_1 + 2) != *(short *)(iVar2 + 8))))) ||
     (uVar3 = param_1[1], *param_1 != *(int *)(uVar3 + 8))) {
    *param_2 = 0;
    do {
      local_18 = 0;
      while (iVar4 = FUN_00038ee4(*param_2,&local_18), iVar4 != 0) {
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
      uVar6 = *(uint *)(iVar2 + uVar5 * 0x14 + -0x24);
      if ((uVar6 < uVar3) && (uVar3 < uVar6 + 0x1000)) {
        *param_2 = (ushort)uVar5;
        return 1;
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 2);
  }
  return 0;
}


/* ---- FUN_00038ee4 @ 00038ee4 ---- */

undefined4 FUN_00038ee4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_00038f3c + param_1 * 0x14 + 4);
  iVar1 = *param_2;
  iVar3 = iVar2 + 0x1000;
  if (iVar1 == 0) {
    iVar1 = iVar2 + 8;
    goto LAB_00038f2a;
  }
  iVar1 = iVar1 + (uint)*(ushort *)(iVar1 + 2) * 4;
  do {
    iVar1 = iVar1 + 0xc;
LAB_00038f2a:
    while( true ) {
      iVar2 = FUN_0002f57a(iVar1,iVar3);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_0002f554(iVar1,iVar3);
      if (iVar2 == 0) {
        *param_2 = iVar1;
        return 1;
      }
      if (iVar2 == 1) break;
      if (iVar2 == 2) {
        return 0;
      }
    }
    iVar1 = iVar1 + (uint)*(ushort *)(iVar1 + 2) * 4;
  } while( true );
}


/* ---- FUN_00038f40 @ 00038f40 ---- */

undefined4 FUN_00038f40(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00032ffc(DAT_00038f70,param_1,DAT_00038f6c,4,0);
  if (iVar1 != 0) {
    return 0xe;
  }
  *(undefined *)(DAT_00038f74 + param_2 * 0x14 + 0x10) = 1;
  return 0;
}


/* ---- FUN_00038f78 @ 00038f78 ---- */

undefined4 FUN_00038f78(short *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(DAT_00038fac + 0xc) <= uVar1) {
      return 0;
    }
    if ((*(char *)(DAT_00038fa8 + uVar1 * 4 + 2) == *(char *)(param_1 + 1)) &&
       (*(short *)(DAT_00038fa8 + uVar1 * 4) == *param_1)) break;
    uVar1 = uVar1 + 1;
  }
  return *(undefined4 *)(DAT_00038fac + 4);
}


/* ---- FUN_00038fb0 @ 00038fb0 ---- */

void FUN_00038fb0(uint param_1,int param_2)

{
  if (param_1 < 0x100) {
    FUN_000323d2(param_2 + (param_1 >> 5) * 4,~(1 << (param_1 & 0x1f)));
    return;
  }
  return;
}


/* ---- FUN_00038fc0 @ 00038fc0 ---- */

void FUN_00038fc0(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_00038ff0;
  *DAT_00038ff0 = 6;
  FUN_00031cdc();
  *DAT_00038ff4 = 0;
  if (*(char *)(DAT_00038ff8 + 0x8e) == '\x01') {
    *DAT_00038ffc = 1;
    FUN_00027afc(*(undefined2 *)(puVar1 + 4),0);
    return;
  }
  return;
}


/* ---- FUN_00039004 @ 00039004 ---- */

undefined4 FUN_00039004(void)

{
  return *DAT_0003900c;
}


/* ---- FUN_00039010 @ 00039010 ---- */

void FUN_00039010(undefined4 param_1,int param_2)

{
  FUN_000271e8(0,param_1,param_2);
  FUN_000271e8(1,&DAT_0003903c);
  if ((param_2 * 5 & 0x3fffffffU) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00039038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00039040)(param_2 * 0x500);
    return;
  }
  return;
}


/* ---- FUN_00039044 @ 00039044 ---- */

undefined8 FUN_00039044(undefined *param_1)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined local_2c [20];
  undefined4 local_18;
  undefined2 local_14;
  undefined local_12;
  
  FUN_000264be(local_48,0x1c);
  local_48[0] = local_48[0] & 0xf7 | 6;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_12 = *param_1;
  local_14 = 0xffa6;
  local_18 = 0x31111;
  FUN_000264be(local_2c,0x14);
  software_interrupt(0xaa);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 2));
}


/* ---- FUN_000390ec @ 000390ec ---- */

undefined8 FUN_000390ec(undefined *param_1)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined local_2c [20];
  undefined4 local_18;
  undefined2 local_14;
  undefined local_12;
  
  FUN_000264be(local_48,0x1c);
  local_48[0] = local_48[0] & 0xfd | 0xc;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_12 = *param_1;
  local_14 = 0xffa1;
  local_18 = 0x31111;
  FUN_000264be(local_2c,0x14);
  software_interrupt(0xaa);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 2));
}


/* ---- FUN_00039192 @ 00039192 ---- */

undefined8 FUN_00039192(undefined *param_1)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined local_2c [20];
  undefined4 local_18;
  undefined2 local_14;
  undefined local_12;
  
  FUN_000264be(local_48,0x1c);
  local_48[0] = local_48[0] & 0xfd | 0xc;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_12 = *param_1;
  local_14 = 0xffa2;
  local_18 = 0x31111;
  FUN_000264be(local_2c,0x14);
  software_interrupt(0xaa);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 2));
}


/* ---- FUN_0003923c @ 0003923c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003923c(char *param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  
  if (*param_1 == '\0') {
    sVar3 = **(short **)(param_1 + 4);
    iVar6 = FUN_00034898(*(short **)(param_1 + 4),1);
    if (iVar6 != 0) {
      app_error_handler(iVar6,0x4f,s__________battery_measure_c_00039300);
    }
    uVar10 = FUN_0002683c(sVar3 * 0x2d0);
    FUN_0002675e((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)DAT_0003931c,
                 (int)((ulonglong)DAT_0003931c >> 0x20));
    iVar6 = FUN_00026878();
    puVar4 = DAT_00039324;
    *DAT_00039324 = 0;
    if ((puVar4[3] != '\0') && (0xc80 < iVar6)) {
      *(undefined4 *)(puVar4 + 8) = 0x1068;
      puVar4[3] = 0;
    }
    puVar4[3] = 0;
    iVar5 = _DAT_00039328;
    uVar8 = *(uint *)(puVar4 + 0xc) + 1;
    *(short *)(_DAT_00039328 + (*(uint *)(puVar4 + 0xc) % 0x14) * 2) = (short)iVar6;
    *(uint *)(puVar4 + 0xc) = uVar8;
    if ((uVar8 % 0x14 == 0) && (uVar8 != 0)) {
      iVar6 = 0;
      do {
        iVar7 = 0;
        do {
          iVar9 = iVar5 + iVar7 * 2;
          uVar2 = *(ushort *)(iVar5 + iVar7 * 2);
          uVar1 = *(ushort *)(iVar9 + 2);
          if (uVar2 < uVar1) {
            *(ushort *)(iVar5 + iVar7 * 2) = uVar1;
            *(ushort *)(iVar9 + 2) = uVar2;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0x13);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x14);
      iVar7 = 0;
      iVar6 = 5;
      do {
        iVar9 = iVar6 * 2;
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + (uint)*(ushort *)(iVar5 + iVar9);
      } while (iVar6 < 0xf);
      *(int *)(puVar4 + 8) = iVar7 / 10;
      FUN_00037a40(s_POWER_GET_OK____________d_0003932b + 1);
      puVar4[1] = 0;
    }
  }
  return;
}


/* ---- FUN_00039348 @ 00039348 ---- */

undefined8 FUN_00039348(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_18 = *DAT_000393b4;
  uStack_14 = DAT_000393b4[1];
  uStack_10 = DAT_000393b4[2];
  local_c = CONCAT13((char)((uint)in_r3 >> 0x18),0x30002);
  iVar1 = FUN_00034a2c(&local_c,DAT_000393b8);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0xa2,s__________battery_measure_c_000393bc);
  }
  iVar1 = FUN_0003493c(0,&local_18);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0xa5,s__________battery_measure_c_000393bc);
  }
  iVar1 = FUN_00034898(DAT_000393d8,1);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0xa8,s__________battery_measure_c_000393bc);
  }
  iVar1 = FUN_00034898(DAT_000393d8 + 2,1);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0xab,s__________battery_measure_c_000393bc);
  }
  return CONCAT44(uStack_14,local_18);
}


/* ---- FUN_000393dc @ 000393dc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000393dc(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00029744();
  puVar1 = _DAT_00039430;
  *_DAT_00039430 = uVar2;
  iVar3 = 0;
  do {
    if (*(char *)((int)puVar1 + iVar3 + 0x90) != *(char *)((int)puVar1 + iVar3)) break;
    if (iVar3 == 0x8f) {
      debug_printf(s_______________no_need_save_00039433 + 1);
      return;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x90);
  FUN_0002648c(_DAT_00039430 + 0x24,_DAT_00039430,0x90);
  FUN_00027264(0x70);
  FUN_0002734c(_DAT_00039430,0x70000,0x90);
  return;
}


/* ---- FUN_00039530 @ 00039530 ---- */

longlong FUN_00039530(undefined4 param_1,uint param_2,undefined4 param_3,code **param_4)

{
  int iVar1;
  uint uStack_18;
  undefined4 uStack_14;
  code **local_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  local_10 = param_4;
  FUN_000341d4(&uStack_18,DAT_0003955c);
  while( true ) {
    if (local_10 == (code **)0x0) {
      return (ulonglong)uStack_18 << 0x20;
    }
    iVar1 = (**local_10)(param_1,local_10[1]);
    if (iVar1 == 0) break;
    FUN_00034202(&uStack_18);
  }
  return CONCAT44(uStack_18,0x11);
}


/* ---- FUN_00039560 @ 00039560 ---- */

void FUN_00039560(undefined4 param_1,undefined4 param_2,undefined4 param_3,code **param_4)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  code **local_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  local_10 = param_4;
  FUN_000341d4(&uStack_18,DAT_00039588);
  while (local_10 != (code **)0x0) {
    (**local_10)(param_1,local_10[1]);
    FUN_00034202(&uStack_18);
  }
  return;
}


/* ---- FUN_0003958c @ 0003958c ---- */

void FUN_0003958c(short *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_24;
  int local_20;
  
  iVar6 = 0;
  uStack_24 = param_3;
  local_20 = param_4;
  iVar2 = FUN_0002fab8();
  if (iVar2 == 0xffff) {
    iVar2 = FUN_0002fa94();
  }
  else {
    FUN_0002fa54(*param_1,iVar2);
  }
  FUN_000397ac(*param_1,1,0);
  if ((iVar2 != 0xffff) && (iVar3 = FUN_00035fe0(iVar2,7,&uStack_24), iVar3 == 0)) {
    iVar3 = local_20 + 0x34;
    if (((*(byte *)(local_20 + 0x44) & 1) != 0) ||
       (iVar4 = FUN_0002fa2a(local_20 + 0x46,param_1 + 6), iVar4 != 0)) {
      iVar6 = iVar3;
    }
  }
  sVar1 = *param_1;
  software_interrupt(0x86);
  if (sVar1 == 0) {
    if (iVar6 == 0) {
      FUN_0002dcd8(*param_1,0x1006,0);
    }
  }
  else {
    uVar5 = FUN_0003425c(sVar1,iVar6,0);
    FUN_00033772(((uint)(DAT_00039634 - DAT_00039638) >> 3) * 0x10000 + 1,DAT_0003963c,uVar5,
                 *param_1,iVar2);
    FUN_000399c8(*param_1,sVar1);
  }
  return;
}


/* ---- FUN_00039640 @ 00039640 ---- */

undefined4 FUN_00039640(int param_1,undefined param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iStack_28;
  int *local_24;
  
  uVar4 = (uint)(DAT_000396e8 - DAT_000396ec) >> 3;
  iVar3 = uVar4 * 0x10000 + 1;
  iStack_28 = param_3;
  local_24 = param_4;
  if (param_4 == (int *)0x0) {
    FUN_00033754(iVar3,s_Internal_error___s_received_NULL_000396f8,DAT_000396f4);
  }
  else {
    iVar1 = FUN_00036074(param_1 + 0x100U & 0xffff,7,1,&iStack_28);
    if (iVar1 == 0x11) {
      return 0x11;
    }
    if (iVar1 == 0) {
      FUN_000264be(local_24,0x50);
      *(undefined *)local_24 = param_2;
      param_4[3] = param_3;
      *param_4 = (int)(local_24 + 0xd);
      param_4[4] = (int)(local_24 + 6);
      param_4[5] = (int)local_24 + 1;
      param_4[7] = DAT_0003972c;
      iVar3 = FUN_0002f730(param_1,(int)local_24 + 0x11);
      if (iVar3 == 0) {
        return 0;
      }
      uVar2 = FUN_0003425c();
      FUN_00033762(uVar4 * 0x10000 + 2,DAT_00039730,uVar2,param_1);
      return 8;
    }
    uVar2 = FUN_0003425c();
    FUN_00033762(iVar3,DAT_000396f0,uVar2,param_1);
  }
  return 3;
}


/* ---- FUN_00039734 @ 00039734 ---- */

byte * FUN_00039734(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != (byte *)0x0) {
    uVar3 = (uint)*param_1;
    if (((((int)(uVar3 << 0x1e) < 0) || (-1 < (int)(uVar3 << 0x18))) &&
        (uVar2 = (uVar3 << 0x19) >> 0x1d, uVar2 < 5)) &&
       (((-1 < (int)(uVar3 << 0x1e) || (uVar2 != 3)) || ((int)(uVar3 << 0x18) < 0)))) {
      if (((param_1[1] <= param_1[2]) && (6 < param_1[1])) &&
         ((param_1[2] < 0x11 && (uVar3 = (uint)param_1[3], -1 < (int)(uVar3 << 0x1d))))) {
        bVar1 = param_1[4];
        uVar2 = (uint)bVar1;
        if (((-1 < (int)(uVar2 << 0x1d)) && (-1 < (int)(uVar3 << 0x1c))) &&
           (-1 < (int)(uVar2 << 0x1c))) {
          if ((*param_1 & 1) == 0) {
            if (((uVar3 << 0x1f == 0) && (-1 < (int)(uVar3 << 0x1e))) &&
               (((bVar1 & 1) == 0 && (-1 < (int)(uVar2 << 0x1e))))) {
              return (byte *)0x1;
            }
          }
          else if (((uVar3 << 0x1f != 0) || ((int)(uVar3 << 0x1e) < 0)) ||
                  (((bVar1 & 1) != 0 || ((int)(uVar2 << 0x1e) < 0)))) {
            return (byte *)0x1;
          }
        }
      }
    }
    param_1 = (byte *)0x0;
  }
  return param_1;
}


/* ---- FUN_000397ac @ 000397ac ---- */

void FUN_000397ac(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined auStack_30 [2];
  undefined2 local_2e;
  undefined local_28;
  
  puVar1 = DAT_00039804;
  FUN_0002b504(param_1,*DAT_00039804,param_2);
  if (param_2 != 0) {
    FUN_0002b504(param_1,puVar1[1],param_3 != 0);
    FUN_0002b504(param_1,puVar1[2],param_3 == 1);
    FUN_0002648c(auStack_30,DAT_00039808,0x18);
    local_2e = (undefined2)param_1;
    local_28 = (undefined)param_3;
    FUN_0002df0c(auStack_30);
  }
  return;
}


/* ---- FUN_00039810 @ 00039810 ---- */

void FUN_00039810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  
  if (*DAT_00039828 != '\0') {
    uStack_c = param_2;
    FUN_0002c09c(DAT_0003982c,param_1,&uStack_c,param_4,param_1);
  }
  return;
}


/* ---- FUN_00039830 @ 00039830 ---- */

void FUN_00039830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  
  uStack_c = param_2;
  FUN_0002bca8(DAT_00039840,param_1,&uStack_c,param_4,param_1);
  return;
}


/* ---- FUN_00039844 @ 00039844 ---- */

void FUN_00039844(void)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_00039864 + 3);
  if (cVar1 != '\0') {
    *(char *)(DAT_00039864 + 3) = cVar1 + -1;
    if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
      post_state_event(DAT_00039868);
      return;
    }
  }
  return;
}


/* ---- FUN_0003986c @ 0003986c ---- */

void FUN_0003986c(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = CONCAT22((short)((uint)param_3 >> 0x10),2);
  local_c = param_4;
  debug_printf(s_sendDevinfoFF06___x_00039898,*param_1);
  if (*DAT_000398b0 != '\0') {
    local_c = CONCAT22(local_c._2_2_,*param_1);
    FUN_0002bea0(DAT_000398b4,&local_c,&local_10);
  }
  return;
}


/* ---- FUN_000398c8 @ 000398c8 ---- */

void FUN_000398c8(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  
  if (*param_1 == -0x7d) {
    param_1[1] = *(char *)(DAT_000398e4 + 0xc);
  }
  uStack_c = param_2;
  FUN_0002c170(DAT_000398e8,param_1,&uStack_c,param_4,param_1);
  return;
}


/* ---- FUN_000398ec @ 000398ec ---- */

void FUN_000398ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  
  uStack_c = param_2;
  FUN_0002c0f4(DAT_000398fc,param_1,&uStack_c,param_4,param_1);
  return;
}


/* ---- FUN_00039900 @ 00039900 ---- */

void FUN_00039900(void)

{
  int iVar1;
  
  iVar1 = DAT_00039920;
  *(undefined *)(DAT_00039920 + 6) = 0;
  if (*(char *)(iVar1 + 7) == '\0') {
    *(undefined *)(iVar1 + 7) = 1;
    app_timer_start(*(undefined4 *)(DAT_00039924 + 0x20),0x28000,0);
    return;
  }
  return;
}


/* ---- FUN_00039928 @ 00039928 ---- */

void FUN_00039928(undefined2 param_1)

{
  undefined local_20 [2];
  undefined2 local_1e;
  
  FUN_000264be(local_20,0x18);
  local_20[0] = 4;
  local_1e = param_1;
  FUN_0002df0c(local_20);
  return;
}


/* ---- FUN_0003994c @ 0003994c ---- */

void FUN_0003994c(void)

{
  if (*(code **)(DAT_00039958 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00039954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_00039958 + 0x18))();
    return;
  }
  return;
}


/* ---- FUN_0003995c @ 0003995c ---- */

void FUN_0003995c(void)

{
  int iVar1;
  
  iVar1 = DAT_00039994;
  if (*(byte *)(DAT_00039994 + 6) < 0x32) {
    *(byte *)(DAT_00039994 + 6) = *(byte *)(DAT_00039994 + 6) + 1;
    FUN_00029638(0,0,DAT_00039998);
    if ((9 < *(byte *)(iVar1 + 6)) && (*(char *)(iVar1 + 7) != '\0')) {
      *(undefined *)(iVar1 + 7) = 0;
      FUN_00029aec(*(undefined4 *)(DAT_0003999c + 0x20));
      return;
    }
  }
  return;
}


/* ---- FUN_000399a0 @ 000399a0 ---- */

void FUN_000399a0(undefined2 param_1,undefined4 param_2)

{
  undefined auStack_28 [2];
  undefined2 local_26;
  undefined4 local_20;
  
  FUN_0002648c(auStack_28,DAT_000399c4,0x18);
  local_26 = param_1;
  local_20 = param_2;
  FUN_0002dec4(auStack_28);
  return;
}


/* ---- FUN_000399c8 @ 000399c8 ---- */

void FUN_000399c8(undefined2 param_1,undefined4 param_2)

{
  undefined auStack_28 [2];
  undefined2 local_26;
  undefined4 local_20;
  
  FUN_0002648c(auStack_28,DAT_000399ec,0x18);
  local_26 = param_1;
  local_20 = param_2;
  FUN_0002df0c(auStack_28);
  return;
}


/* ---- FUN_000399f0 @ 000399f0 ---- */

void FUN_000399f0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != 0) {
    iVar2 = 0;
    iVar3 = 10;
    do {
      iVar1 = FUN_000271e8(0,param_2 + iVar2,param_3);
      iVar2 = iVar2 + iVar1;
      param_3 = param_3 - iVar1;
      if ((iVar1 == 0) && (iVar3 = iVar3 + -1, iVar3 == 0)) {
        return;
      }
    } while (param_3 != 0);
  }
  return;
}


/* ---- FUN_00039a1c @ 00039a1c ---- */

undefined4 FUN_00039a1c(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  
  if (*(int *)(param_1 + 0x28) == 0) {
LAB_00039aa0:
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
      sVar2 = FUN_0003bab4(*puVar5,(uint)(ushort)(uVar1 + 1) + param_2);
      uVar1 = *param_3;
      *param_3 = sVar2 + uVar1;
      if (puVar5[2] != 0) {
        if (*(int *)(puVar5 + 4) == 0) goto LAB_00039aa0;
        FUN_0002648c((uint)(ushort)(sVar2 + uVar1) + param_2);
        *param_3 = *param_3 + puVar5[2];
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* ---- FUN_00039aa4 @ 00039aa4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00039aa4(void)

{
  int iVar1;
  undefined2 local_84 [2];
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined auStack_60 [8];
  undefined auStack_58 [8];
  undefined auStack_50 [8];
  undefined auStack_48 [8];
  undefined auStack_40 [28];
  undefined local_24;
  undefined local_23;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_18 = 0;
  FUN_000264be(auStack_60,0x40);
  FUN_0002c1ec(auStack_60,s_Bond_Touch__Inc__00039c3c);
  FUN_0002c1ec(auStack_58,s_Bond004_00039c50);
  FUN_0002c1ec(auStack_50,s_1234567890_00039c58);
  FUN_0002c1ec(auStack_48,s_Bond4_Rev_B3_00039c64);
  FUN_00027988(_DAT_00039c80,s__d__d__d_00039c74,2,0,3);
  FUN_0002c1ec(auStack_40,_DAT_00039c80);
  local_24 = 0x11;
  local_23 = 0;
  iVar1 = FUN_0002b6f4(auStack_60);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x5a6,s__________main_c_00039c83 + 1);
  }
  local_18 = DAT_00039c94;
  iVar1 = FUN_000328d2(DAT_00039c98,&local_18);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x5ac,s__________main_c_00039c83 + 1);
  }
  local_14 = DAT_00039c9c;
  uStack_10 = 0;
  iVar1 = FUN_00032774(DAT_00039ca0,&local_14);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x5b4,s__________main_c_00039c83 + 1);
  }
  local_20 = 0;
  local_1c = 0;
  iVar1 = FUN_0003250c(_DAT_00039c80 + -0x460,0,_DAT_00039c80 + -0x60,0x20);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x5bd,s__________main_c_00039c83 + 1);
  }
  iVar1 = FUN_000324e6(_DAT_00039c80 + -0x460,0,_DAT_00039c80 + -0x20,0x20);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x5c3,s__________main_c_00039c83 + 1);
  }
  iVar1 = FUN_0003250c(_DAT_00039c80 + -0x460,1,_DAT_00039c80 + -0x40,0x20);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x5c9,s__________main_c_00039c83 + 1);
  }
  local_20 = DAT_00039ca4;
  local_1c = DAT_00039ca8;
  iVar1 = FUN_0002afbc(DAT_00039ca0 + 0x20,&local_20);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x5f3,s__________main_c_00039c83 + 1);
  }
  FUN_000264be(local_84,0x24);
  local_84[0] = *(undefined2 *)(DAT_00039cac + 0x2c);
  *(undefined2 *)(DAT_00039ca0 + -0x4a) = local_84[0];
  local_80 = *DAT_00039cb0;
  local_7c = *(undefined2 *)(DAT_00039cb0 + 1);
  local_76 = DAT_00039cb0[1];
  local_6c = *(undefined4 *)(DAT_00039cb4 + 8);
  local_68 = 0x44;
  local_64 = DAT_00039cb8;
  local_7a = local_80;
  iVar1 = FUN_0002bf20(DAT_00039ca0 + -0x4c,local_84);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x60b,s__________main_c_00039c83 + 1);
  }
  local_c = DAT_00039cbc;
  iVar1 = FUN_0002bd10(DAT_00039ca0 + -0x88,&local_c);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x612,s__________main_c_00039c83 + 1);
  }
  return;
}


/* ---- FUN_00039cc0 @ 00039cc0 ---- */

void FUN_00039cc0(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = DAT_00039d2c;
  iVar4 = DAT_00039d28;
  while (*(code ***)(iVar4 + 8) != (code **)0x0) {
    iVar3 = (***(code ***)(iVar4 + 8))(*pcVar2);
    if (iVar3 == 0) {
      return;
    }
    FUN_00034202(DAT_00039d28);
  }
  FUN_000338b0();
  do {
    iVar4 = FUN_0003351c();
  } while (iVar4 != 0);
  cVar1 = *pcVar2;
  if ((cVar1 != '\x03') && (cVar1 != '\x02')) {
    iVar4 = FUN_0003412c();
    if (iVar4 != 0) {
      software_interrupt(0x33);
    }
    *DAT_00039d30 = 1;
    DataSynchronizationBarrier(0xf);
    do {
      WaitForEvent();
    } while( true );
  }
  DataSynchronizationBarrier(0xf);
  *DAT_00039d34 = *DAT_00039d34 & 0x700 | DAT_00039d38;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_00039d3c @ 00039d3c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00039d3c(void)

{
  int iVar1;
  
  do {
  } while (*_DAT_00039d88 != '\x02');
  FUN_0003d46c(0);
  FUN_0003d46c(1);
  FUN_0003d46c(2);
  FUN_00037894();
  iVar1 = FUN_0003d2b8();
  software_interrupt(0x33);
  if ((iVar1 != 0x2006) &&
     (debug_printf(s_sd_power_system_off_return_ERROR_00039d8b + 1,iVar1), iVar1 == 0)) {
    return;
  }
  app_error_handler(iVar1,0xed,s__________app_misc_c_00039db4);
  return;
}


/* ---- FUN_00039dc8 @ 00039dc8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00039dc8(void)

{
  int iVar1;
  
  iVar1 = _DAT_00039e00;
  debug_printf(s____sleep_mode_enter_for_power____00039e03 + 1,*(undefined *)(_DAT_00039e00 + 1));
  if (*(char *)(iVar1 + 1) == '\0') {
    *(undefined *)(iVar1 + 1) = 1;
    debug_printf(s____IN_TO_SLEEP_MODE_sleep_mode_e_00039e2c);
    debug_printf(s____IN_TO_SLEEP_MODE_sleep_mode_e_00039e64);
    FUN_00037894();
    FUN_0003d2b8();
    FUN_0002c778();
    FUN_0002c710();
    return;
  }
  return;
}


/* ---- FUN_00039e9c @ 00039e9c ---- */

void FUN_00039e9c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00039eb8;
  if (param_1 != 0) {
    do {
      (*(code *)(iVar1 + 1))(64000);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* ---- FUN_00039ebc @ 00039ebc ---- */

void FUN_00039ebc(void)

{
  int iVar1;
  
  FUN_0003a028();
  iVar1 = DAT_00039ee0;
  FUN_0002b428(*(undefined *)(DAT_00039ee0 + 4),DAT_00039edc,0);
  FUN_0002b428(*(undefined *)(iVar1 + 1),DAT_00039ee4,0);
  return;
}


/* ---- FUN_00039eec @ 00039eec ---- */

undefined4 FUN_00039eec(void)

{
  FUN_0002e552(DAT_00039f34);
  FUN_0002e552(DAT_00039f34 + 1);
  FUN_0002e552(DAT_00039f34 + 2);
  FUN_0002e552(DAT_00039f34 + 3);
  if (*(char *)(DAT_00039f34 + 3) != '\x18') {
    *(undefined *)(DAT_00039f34 + 4) = 1;
    return 0;
  }
  FUN_0003374c(((uint)(DAT_00039f38 - DAT_00039f3c) >> 3) * 0x10000 + 1,DAT_00039f40);
  return 3;
}


/* ---- FUN_00039f44 @ 00039f44 ---- */

void FUN_00039f44(undefined4 param_1,undefined4 param_2)

{
  FUN_00030ee0(param_1,0,param_2);
  return;
}


/* ---- FUN_00039f50 @ 00039f50 ---- */

void FUN_00039f50(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = DAT_00039f8c;
  bVar1 = *param_1;
  if (bVar1 != 10) {
    if (bVar1 < 0xb) {
      if ((bVar1 != 8) && (bVar1 != 9)) {
        return;
      }
    }
    else if ((bVar1 != 0xb) && (bVar1 != 0x13)) {
      return;
    }
  }
  FUN_0002b428(*(undefined *)(DAT_00039f8c + 4),DAT_00039f88,0);
  FUN_0002b428(*(undefined *)(iVar2 + 1),DAT_00039f90,0);
  return;
}


/* ---- FUN_00039f94 @ 00039f94 ---- */

undefined4 FUN_00039f94(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar1 = DAT_00039fc4;
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    iVar2 = FUN_00039734();
    if (iVar2 == 0) {
      return 7;
    }
    *(undefined4 *)(puVar1 + 0x10) = *param_1;
    puVar1[0x14] = *(undefined *)(param_1 + 1);
    puVar3 = puVar1 + 0x10;
  }
  *(undefined **)(puVar1 + 8) = puVar3;
  *puVar1 = 1;
  return 0;
}


/* ---- FUN_0003a028 @ 0003a028 ---- */

void FUN_0003a028(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined local_28 [2];
  ushort local_26;
  ushort *local_20;
  
  uVar2 = *param_1;
  if (uVar2 == 0x14) {
    FUN_0003958c(param_1 + 2);
    return;
  }
  if (uVar2 < 0x15) {
    if (uVar2 == 0x11) {
      if (*(char *)(param_1 + 4) == '=') {
        uVar4 = 0x103d;
      }
      else {
        uVar4 = 0x1100;
      }
      uVar2 = param_1[2];
      bVar5 = 0;
LAB_0003a0ee:
      FUN_00030fb0(uVar2,uVar4,bVar5);
      return;
    }
    if (uVar2 != 0x13) {
      return;
    }
    puVar1 = param_1 + 2;
    iVar3 = FUN_0002b474(*puVar1);
    if (iVar3 == 1) {
      if ((*(byte *)(param_1 + 4) & 1) == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = 1;
      }
      FUN_000397ac(*puVar1,1,uVar6);
    }
    uVar2 = *puVar1;
    FUN_0002648c(local_28,DAT_0003a118,0x18);
    local_26 = uVar2;
    local_20 = param_1 + 4;
  }
  else {
    if (uVar2 == 0x19) {
      uVar4 = (uint)*(byte *)(param_1 + 4);
      if (uVar4 == 0) {
        FUN_00029d10();
        return;
      }
      uVar2 = param_1[2];
      bVar5 = *(byte *)((int)param_1 + 9) & 3;
      goto LAB_0003a0ee;
    }
    if (uVar2 != 0x1a) {
      return;
    }
    iVar3 = FUN_00035d44(param_1[2]);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = FUN_0002b408(param_1[2]);
    if (iVar3 == 0) {
      FUN_0002dcd8(param_1[2],0x1006,1);
      return;
    }
    FUN_0002b504(param_1[2],*DAT_0003a114,0);
    local_28[0] = 2;
    local_26 = param_1[2];
    local_20 = (ushort *)((uint)local_20 & 0xffff0000);
  }
  FUN_0002df0c(local_28);
  return;
}


/* ---- FUN_0003a12c @ 0003a12c ---- */

undefined4 FUN_0003a12c(void)

{
  FUN_0002e540(DAT_0003a184);
  FUN_0002e540(DAT_0003a184 + 1);
  FUN_0002e540(DAT_0003a184 + 2);
  FUN_0002e540(DAT_0003a184 + 3);
  if ((((*DAT_0003a184 != '\x18') && (DAT_0003a184[1] != '\x18')) && (DAT_0003a184[2] != '\x18')) &&
     (DAT_0003a184[3] != '\x18')) {
    DAT_0003a184[4] = '\x01';
    return 0;
  }
  FUN_0003374c(((uint)(DAT_0003a188 - DAT_0003a18c) >> 3) * 0x10000 + 1,DAT_0003a190);
  return 3;
}


/* ---- FUN_0003a194 @ 0003a194 ---- */

int FUN_0003a194(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002b474();
  if (iVar1 == 1) {
    iVar1 = 0;
    if ((param_2 != 0) && (software_interrupt(0x7e), iVar1 = param_1, param_1 == 4)) {
      return 0x11;
    }
  }
  else {
    iVar1 = 0x3002;
  }
  return iVar1;
}


/* ---- FUN_0003a1bc @ 0003a1bc ---- */

int FUN_0003a1bc(int param_1,byte *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_38 [32];
  
  iVar1 = FUN_0002b474();
  iVar3 = 0;
  FUN_000264be(auStack_38,0x20);
  if (iVar1 == 1) {
    FUN_0002b504(param_1,*(undefined *)(DAT_0003a264 + 3),0);
  }
  else if (iVar1 == 0) {
    return 0x3002;
  }
  if (param_2 != (byte *)0x0) {
    iVar2 = FUN_0002fa94(param_1);
    if (((iVar2 != 0xffff) && (iVar1 == 1)) && (iVar2 = FUN_00028ac8(param_1), iVar2 == 0)) {
      FUN_00039928(param_1);
      iVar2 = FUN_00028ac8(param_1);
      if (iVar2 == 0) {
        iVar3 = 0x85;
      }
    }
    if ((((*param_2 & 1) != 0) && (iVar3 != 0x85)) &&
       (iVar3 = FUN_00039640(param_1,iVar1,param_3,auStack_38), iVar3 != 0)) {
      return iVar3;
    }
  }
  if (iVar1 == 1) {
    software_interrupt(0x7f);
  }
  else {
    software_interrupt(0x7f);
  }
  return param_1;
}


/* ---- FUN_0003a26c @ 0003a26c ---- */

void FUN_0003a26c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_00031dd8(&local_18);
  FUN_00035df8(param_1,param_2,&local_18);
  uVar1 = FUN_0003a1bc(param_1,local_18,*(undefined4 *)(DAT_0003a2a8 + 0xc));
  FUN_0002e58c(param_1,uVar1,1);
  FUN_0002de18(param_1,uVar1,local_18);
  return;
}


/* ---- FUN_0003a2c4 @ 0003a2c4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003a2c4(void)

{
  int iVar1;
  
  iVar1 = FUN_00027ad8(0x16);
  if (iVar1 == 0) {
    app_error_handler(0x2001,0xad,s___________________components_sof_0003a2ff + 1);
    return;
  }
  if (_DAT_0003a2fc[2] != 0) {
    *_DAT_0003a2fc = *_DAT_0003a2fc & 0xffbfffff;
    return;
  }
  _DAT_e000e180 = 0x400000;
  return;
}


/* ---- FUN_0003a33c @ 0003a33c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003a33c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00027ad8(0x16);
  if (iVar1 == 0) {
    uVar3 = 0x2001;
  }
  else {
    uVar2 = (uint)(*(byte *)(DAT_0003a390 + 0x400) >> 5);
    if ((uVar2 < 8) && ((1 << uVar2 & 0xecU) != 0)) {
      if (_DAT_0003a394[2] != 0) {
        *_DAT_0003a394 = *_DAT_0003a394 | 0x400000;
        return;
      }
      _DAT_e000e100 = 0x400000;
      return;
    }
    uVar3 = 0x2002;
  }
  app_error_handler(uVar3,0xa1,s___________________components_sof_0003a397 + 1);
  return;
}


/* ---- start_execute_queue_led_motor_ctrl @ 0003a3d4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void start_execute_queue_led_motor_ctrl(void)

{
  int iVar1;
  int iVar2;
  undefined auStack_20 [2];
  ushort local_1e;
  ushort local_11;
  
  iVar2 = led_motor_ctrl_queue_get(auStack_20);
  iVar1 = DAT_0003a444;
  if (iVar2 == 0) {
    FUN_000379cc(s_led_motor_ctrl_queue_get_NONE__S_0003a49c);
    FUN_0003cb64();
    iVar2 = FUN_000287ae();
    if (iVar2 == 0) {
      FUN_000379cc(s_accel_switch_double_tap_error____0003a4d0,DAT_0003a448);
    }
    *(undefined *)(iVar1 + 8) = 0x85;
    thunk_FUN_00039900();
  }
  else {
    iVar2 = FUN_000287b2();
    if (iVar2 == 0) {
      FUN_000379cc(s_accel_switch_single_tap_error____0003a44c,DAT_0003a448);
    }
    cmd26_led_motor_ctrl_execute(auStack_20);
    if (local_11 <= local_1e) {
      local_11 = local_1e;
    }
    queue_step_timer_start(local_11,_DAT_0003a474);
    *(undefined *)(iVar1 + 8) = 0x88;
    FUN_000379cc(s_Func___s__STATE_QUEUE_EXECUTING__0003a477 + 1,DAT_0003a448);
  }
  post_state_event(DAT_0003a444 + 8);
  return;
}


/* ---- start_execute_queue_led_motor_test @ 0003a4f8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
start_execute_queue_led_motor_test
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  iVar2 = led_motor_test_queue_get(&uStack_20);
  iVar1 = DAT_0003a5a0;
  uVar4 = (uint)(DAT_0003a5a8 - DAT_0003a5a4) >> 3;
  iVar6 = uVar4 * 0x10000 + 1;
  if (iVar2 == 0) {
    FUN_0003374c(iVar6,s_led_motor_test_queue_get_NONE__0003a600);
    FUN_0003cb64();
    iVar2 = FUN_000287ae();
    if (iVar2 == 0) {
      FUN_00033754(iVar6,s_accel_switch_double_tap_error____0003a624,DAT_0003a5ac);
    }
    motor_off();
    leds_off();
    *(undefined *)(iVar1 + 8) = 0x85;
    thunk_FUN_00039900();
    pcVar5 = s_Func___s__STATE_CONNECTED__0003a64c;
  }
  else {
    if (uStack_14._1_2_ == 0) {
      FUN_0003cb64();
      return CONCAT44(uStack_1c,uStack_20);
    }
    iVar2 = FUN_000287b2();
    if (iVar2 == 0) {
      FUN_00033754(iVar6,s_accel_switch_single_tap_error____0003a5b0,DAT_0003a5ac);
    }
    cmd33_test_step_execute(&uStack_20);
    uVar3 = uStack_14 >> 8 & 0xffff;
    if (uVar3 == 0xffff) {
      uVar3 = 0xffffffff;
    }
    queue_step_timer_start(uVar3,_DAT_0003a5d8);
    *(undefined *)(iVar1 + 8) = 0x88;
    pcVar5 = s_Func___s__STATE_QUEUE_EXECUTING__0003a5db + 1;
  }
  FUN_00033754(uVar4 * 0x10000 + 3,pcVar5,DAT_0003a5ac);
  post_state_event(DAT_0003a5a0 + 8);
  return CONCAT44(uStack_1c,uStack_20);
}


/* ---- FUN_0003a66c @ 0003a66c ---- */

void FUN_0003a66c(uint param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_28;
  
  iVar1 = DAT_0003a6f4;
  uVar8 = *(uint *)(DAT_0003a6f4 + 8);
  local_28 = param_4;
  iVar2 = FUN_0002c378(param_4,&local_28,1);
  uVar4 = local_28;
  if (iVar2 != 0) {
    uVar3 = local_28 + 2;
    for (uVar5 = 0; uVar5 < param_4; uVar5 = uVar5 + 1) {
      uVar7 = uVar3 & uVar8;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(iVar1 + uVar7 * 4 + 0xc) = *(undefined4 *)(param_3 + uVar5 * 4);
    }
    iVar2 = FUN_0002dc84();
    iVar6 = iVar1 + (uVar4 & uVar8) * 4;
    *(uint *)(iVar1 + (uVar4 + 1 & uVar8) * 4 + 0xc) = param_1 >> 0x10 | iVar2 << 0x10;
    *(uint *)(iVar6 + 0xc) =
         (*(uint *)(iVar6 + 0xc) & 4 | (param_1 & 7) << 3 | (param_4 & 0xf) << 6 | param_2 << 10) +
         1 & 0xfffffffb;
  }
  uVar4 = (uint)*(byte *)(iVar1 + 0x420);
  while (uVar4 != 0) {
    uVar4 = FUN_0003351c();
  }
  return;
}


/* ---- FUN_0003a6f8 @ 0003a6f8 ---- */

void FUN_0003a6f8(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0003a710;
  if (*DAT_0003a710 != '\0') {
    FUN_0002f58c(DAT_0003a714);
    *pcVar1 = '\0';
  }
  return;
}


/* ---- FUN_0003a718 @ 0003a718 ---- */

void FUN_0003a718(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0003a730;
  if (*DAT_0003a730 == '\0') {
    FUN_0002f592(DAT_0003a734);
    *pcVar1 = '\x01';
  }
  return;
}


/* ---- FUN_0003a738 @ 0003a738 ---- */

void FUN_0003a738(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  int local_c;
  
  local_10 = *(undefined4 *)(DAT_0003a780 + 0xc);
  if (param_2 == 0) {
    local_c = DAT_0003a780 + 8;
  }
  else {
    local_c = DAT_0003a780 + 4;
  }
  uVar1 = FUN_0002fa94();
  iVar2 = FUN_0003636c(uVar1,&local_10,0);
  if (iVar2 != 0) {
    uVar1 = FUN_0003425c();
    FUN_00033754(((uint)(DAT_0003a784 - DAT_0003a788) >> 3) * 0x10000 + 2,DAT_0003a78c,uVar1);
  }
  return;
}


/* ---- FUN_0003a790 @ 0003a790 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003a790(int param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined auStack_25 [17];
  
  FUN_000264be(&local_28,0x14);
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
    FUN_0002648c(auStack_25,param_1,0x11);
    FUN_0002b352(_DAT_0003a810,&local_28,0x14);
    FUN_000264be(&local_28,0x14);
    local_27 = 3;
    param_2 = param_2 - 0x11;
    param_1 = param_1 + 0x11;
    puVar1 = &local_26;
  }
  local_28 = 0x50;
  FUN_0002648c(puVar1,param_1,param_2);
  uVar2 = FUN_0002b352(_DAT_0003a810,&local_28,0x14);
  debug_printf(s_SR___d_0003a813 + 1,uVar2);
  return;
}


/* ---- FUN_0003a81c @ 0003a81c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003a81c(int param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined auStack_25 [17];
  
  FUN_000264be(&local_28,0x14);
  if (0x20 < param_2) {
    param_2 = 0x20;
  }
  local_28 = 0x50;
  local_27 = 0;
  local_26 = (undefined)param_2;
  bVar3 = 0x11 < param_2;
  if (bVar3) {
    FUN_0002648c(auStack_25,param_1,0x11);
    FUN_0002b352(_DAT_0003a89c,&local_28,0x14);
    FUN_000264be(&local_28,0x14);
    param_2 = param_2 - 0x11;
    param_1 = param_1 + 0x11;
    puVar1 = &local_26;
  }
  else {
    puVar1 = auStack_25;
  }
  local_28 = 0x50;
  local_27 = bVar3;
  FUN_0002648c(puVar1,param_1,param_2);
  uVar2 = FUN_0002b352(_DAT_0003a89c,&local_28,0x14);
  debug_printf(s_SR___d_0003a89f + 1,uVar2);
  return;
}


/* ---- FUN_0003a8a8 @ 0003a8a8 ---- */

void FUN_0003a8a8(undefined *param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    app_error_handler(0,0x4e,s___________________components_ble_0003a8f4);
  }
  if (param_1 == (undefined *)0x0) {
    app_error_handler(0,0x4f,s___________________components_ble_0003a8f4);
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


/* ---- FUN_0003a9a0 @ 0003a9a0 ---- */

void FUN_0003a9a0(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint in_r3;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint local_28;
  
  iVar1 = DAT_0003aa1c;
  uVar8 = *(undefined4 *)(DAT_0003aa1c + 4);
  iVar7 = *(int *)(DAT_0003aa1c + 8);
  local_28 = in_r3;
  iVar2 = FUN_0002dc98(&local_28);
  if (iVar2 == 0) {
    iVar2 = FUN_00031018(0);
    if (iVar2 == 0) goto LAB_0003aa14;
  }
  else {
    iVar2 = 0;
    puVar3 = *(uint **)(iVar1 + 4);
    uVar5 = local_28;
    puVar6 = (uint *)0x0;
    while (puVar4 = puVar3, puVar4 != (uint *)0x0) {
      uVar9 = *puVar4;
      if (uVar5 < uVar9) {
        *puVar4 = uVar9 - uVar5;
        break;
      }
      uVar5 = uVar5 - uVar9;
      iVar2 = iVar2 + uVar9;
      *puVar4 = 0;
      puVar3 = (uint *)puVar4[7];
      if (puVar4[3] != 0) {
        puVar4[1] = iVar7 + iVar2 & 0xffffff;
        puVar4[2] = puVar4[3];
        puVar4[7] = (uint)puVar6;
        puVar6 = puVar4;
      }
    }
    *(uint **)(iVar1 + 4) = puVar4;
    FUN_00031018(puVar6);
  }
  FUN_0002c7b4(uVar8);
LAB_0003aa14:
  *(undefined *)(iVar1 + 3) = 0;
  return;
}


/* ---- FUN_0003aa20 @ 0003aa20 ---- */

void FUN_0003aa20(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  iVar1 = DAT_0003aa58;
  puVar2 = *(uint **)(DAT_0003aa58 + 4);
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


/* ---- FUN_0003aa5c @ 0003aa5c ---- */

undefined4 FUN_0003aa5c(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = DAT_0003aab4;
  piVar6 = *(int **)(DAT_0003aab4 + 4);
  piVar3 = piVar6;
  piVar5 = piVar6;
  while( true ) {
    piVar4 = piVar3;
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    if (piVar4 == param_1) break;
    piVar3 = (int *)piVar4[7];
    piVar5 = piVar4;
  }
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if ((piVar5 == piVar4) && (iVar2 = piVar6[7], *(int *)(DAT_0003aab4 + 4) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(DAT_0003aab8 + 8) = 1;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined *)(iVar1 + 3) = 1;
    FUN_00034320(0x2f);
  }
  iVar2 = *piVar4;
  piVar3 = (int *)piVar4[7];
  piVar5[7] = (int)piVar3;
  if (piVar3 != (int *)0x0) {
    *piVar3 = iVar2 + *piVar3;
  }
  if (piVar6 == *(int **)(iVar1 + 4)) {
    return 0;
  }
  return 1;
}


/* ---- FUN_0003aabc @ 0003aabc ---- */

undefined4 FUN_0003aabc(undefined4 param_1,undefined param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint local_18;
  undefined4 local_14;
  
  uVar3 = 0;
  local_18 = param_3 & 0xffffff00;
  local_14 = param_4;
  FUN_00029b34(&local_18);
  puVar2 = (undefined *)FUN_0003c9d0(&local_14);
  if (puVar2 == (undefined *)0x0) {
    uVar3 = 4;
    FUN_00029b7c(local_18 & 0xff);
  }
  else {
    *puVar2 = param_2;
    iVar1 = DAT_0003ab00;
    *(undefined4 *)(puVar2 + 4) = param_1;
    *(undefined *)(iVar1 + 1) = (undefined)local_14;
    FUN_00029b7c(local_18 & 0xff);
    FUN_00026fc4(0x14);
  }
  return uVar3;
}


/* ---- FUN_0003ab04 @ 0003ab04 ---- */

void FUN_0003ab04(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint local_20;
  uint local_1c;
  
  pcVar3 = DAT_0003ab88;
  if (*(uint **)(DAT_0003ab88 + 4) == (uint *)0x0) {
    return;
  }
  iVar9 = 0;
  uVar8 = *DAT_0003ab8c - *(int *)(DAT_0003ab88 + 8) & 0xffffff;
  puVar6 = *(uint **)(DAT_0003ab88 + 4);
  local_20 = param_3;
  local_1c = param_4;
  do {
    uVar4 = *puVar6;
    if (uVar8 < uVar4) break;
    uVar8 = uVar8 - uVar4;
    iVar9 = iVar9 + uVar4;
    puVar7 = (uint *)puVar6[7];
    if (*(char *)(puVar6 + 4) != '\0') {
      *(undefined *)(puVar6 + 4) = 0;
      local_20 = puVar6[5];
      local_1c = puVar6[6];
      iVar5 = FUN_00029638(&local_20,8,DAT_0003ab90);
      if (iVar5 != 0) {
        app_error_handler(iVar5,0x187,s___________________components_lib_0003ab94);
      }
    }
    puVar6 = puVar7;
  } while (puVar7 != (uint *)0x0);
  cVar1 = pcVar3[1];
  if ((*pcVar3 == cVar1) && (pcVar3[1] = cVar1 + '\x01', cVar1 == '\x01')) {
    pcVar3[1] = '\0';
  }
  bVar2 = pcVar3[1];
  *(int *)(DAT_0003ab88 + (uint)bVar2 * 4 + 0xc) = iVar9;
  FUN_00026fc4(0x14,(uint)bVar2,local_20,local_1c);
  return;
}


/* ---- FUN_0003abd0 @ 0003abd0 ---- */

void FUN_0003abd0(void)

{
  int iVar1;
  
  iVar1 = FUN_00029994(DAT_0003ac24,0,DAT_0003ac20);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x311,s__________user_ble_c_0003ac28);
  }
  iVar1 = FUN_00029994(DAT_0003ac24 + 4,1,DAT_0003ac3c);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x316,s__________user_ble_c_0003ac28);
  }
  iVar1 = FUN_00029994(DAT_0003ac24 + 8,0,DAT_0003ac40);
  if (iVar1 != 0) {
    app_error_handler(iVar1,800,s__________user_ble_c_0003ac28);
  }
  FUN_00031cdc();
  return;
}


/* ---- FUN_0003ac44 @ 0003ac44 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003ac44(int param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *pcVar5;
  byte bVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  uVar8 = FUN_00033314(0xe);
  pcVar2 = _DAT_0003af30;
  pcVar13 = DAT_0003af2c;
  debug_printf(s_Touch_EVENT__d__d__d__d_0003af33 + 1,*_DAT_0003af30,*DAT_0003af2c,param_1 == 0xe);
  iVar9 = FUN_00033314(0xe);
  pbVar3 = DAT_0003af54;
  iVar12 = DAT_0003af50;
  if (iVar9 == 0) {
    *(undefined *)(DAT_0003af50 + 0xc) = 0;
    FUN_000315c4();
    uVar10 = FUN_00039004();
    *(undefined4 *)(pbVar3 + 8) = uVar10;
  }
  else {
    uVar10 = FUN_00039004();
    *(undefined4 *)(pbVar3 + 4) = uVar10;
  }
  iVar9 = _DAT_0003af78;
  pcVar5 = DAT_0003af74;
  if ((*DAT_0003af58 | *_DAT_0003af5c) != 0) {
    uVar8 = FUN_00033314(0xe);
    debug_printf(s_Touch_lost_B__d_0003af5f + 1,uVar8);
    return;
  }
  if ((*pcVar13 == '\0') || (param_1 != 0xe)) {
    if (*pcVar2 == '\0') {
      if (((param_1 == 0xe) && (*pcVar13 == '\0')) && (iVar12 = FUN_00033314(0xe), iVar12 == 1)) {
        debug_printf(s_IDLE_long_wait_begin_0003afc0);
        FUN_00031574();
      }
      uVar14 = FUN_00033314(0xe);
      uVar15 = (uint)*_DAT_0003afd8;
      pcVar13 = s_Touch_lost_A__d__d_0003afdb + 1;
LAB_0003ae32:
      debug_printf(pcVar13,uVar15,uVar14,uVar8);
      return;
    }
    if (param_1 == 0xe) {
      iVar11 = FUN_00033314(0xe);
      iVar16 = DAT_0003af50 + 8;
      if (iVar11 == 1) {
        uVar10 = FUN_0003c5e4();
        debug_printf(s_Touch_press___d_0003aff4,uVar10);
        *(undefined *)(iVar12 + 0xc) = 1;
        if (*(char *)(iVar12 + 8) == -0x7a) {
          debug_printf(s_MSG_Touch_press__cnt____d__d___0003b008,*(undefined *)(iVar12 + 0x1d),
                       *(undefined *)(iVar9 + 0x14));
          uVar14 = FUN_0003c5e4();
          *(uint *)(pbVar3 + 0xc) = uVar14;
          if (*(char *)(iVar12 + 0x1d) == '\0') {
            *(undefined4 *)(pbVar3 + 0x18) = 0;
          }
          else {
            uVar15 = *(uint *)(pbVar3 + 0x10);
            if (uVar14 < uVar15) {
              iVar11 = 0x20000 - uVar15;
            }
            else {
              iVar11 = -uVar15;
            }
            *(uint *)(pbVar3 + 0x18) = iVar11 + uVar14;
            debug_printf(s_press_time_ms__d_release_time_ms_0003b02c,uVar14,uVar15,iVar11 + uVar14);
            uVar14 = *(uint *)(iVar9 + 0x20);
            uVar15 = *(uint *)(pbVar3 + 0x18);
            if ((uVar14 < uVar15) && (*(char *)(iVar12 + 8) == -0x7a)) {
              pcVar13 = s_release_duration_ms_ERROR___d__d_0003b094;
              goto LAB_0003ae32;
            }
          }
          FUN_0003d33c();
          pbVar4 = DAT_0003af54;
          pbVar3[1] = 0x16;
          puVar1 = (undefined4 *)(iVar9 + 0x1c);
          FUN_0003ca4c(*puVar1,pbVar4 + 1);
          post_state_event(iVar16);
          debug_printf(s_app_motor_enable_userID__d____d___0003b06c,*pcVar5,
                       *(undefined *)(iVar9 + 0x25),*puVar1,*(undefined4 *)(iVar9 + 0x60));
          motor_on(*(undefined *)(iVar9 + 0x25),*puVar1);
          FUN_0003c790(*(undefined4 *)(iVar9 + 0x60),0x50,*puVar1);
          *pbVar3 = 1;
        }
      }
      else {
        iVar11 = FUN_000344bc(0xe);
        if (iVar11 == 0) {
          uVar8 = FUN_0003c5e4();
          debug_printf(s_Touch_release___d_0003af7b + 1,uVar8);
          *(undefined *)(iVar12 + 0xc) = 0;
          if ((*(char *)(iVar12 + 0x50) == '\x01') &&
             (bVar6 = *(char *)(iVar12 + 0x51) + 1, *(byte *)(iVar12 + 0x51) = bVar6, 6 < bVar6)) {
            *(undefined *)(iVar12 + 0x51) = 1;
          }
          cVar7 = *(char *)(iVar12 + 8);
          if ((cVar7 == -0x79) || (cVar7 == -0x80)) {
            FUN_000382fc();
            if (*(char *)(iVar12 + 8) == -0x79) {
              post_state_event(iVar16);
              return;
            }
          }
          else {
            if (cVar7 == -0x7a) {
              motor_off();
              if ((*(byte *)(iVar12 + 0x1d) | *pbVar3) == 0) {
                debug_printf(s_This_touch_release_have_NOT_a_to_0003b0b8);
                return;
              }
              uVar14 = FUN_0003c5e4();
              *(uint *)(pbVar3 + 0x10) = uVar14;
              uVar15 = *(uint *)(pbVar3 + 0xc);
              if (uVar14 < uVar15) {
                iVar11 = 0x20000 - uVar15;
              }
              else {
                iVar11 = -uVar15;
              }
              *(uint *)(pbVar3 + 0x14) = iVar11 + uVar14;
              debug_printf(s_release_time_ms__d_press_time_ms_0003b0f8,uVar14,uVar15,iVar11 + uVar14
                          );
              if (*(uint *)(iVar9 + 0x1c) < *(uint *)(pbVar3 + 0x14)) {
                debug_printf(DAT_0003b134);
                *(undefined4 *)(pbVar3 + 0x14) = *(undefined4 *)(iVar9 + 0x1c);
              }
              uVar14 = *(uint *)(pbVar3 + 0x14);
              if (uVar14 < *(uint *)(iVar9 + 0x18)) {
                debug_printf(s_Touch_duration_time____dms_is_to_0003b138,uVar14);
                leds_off();
                FUN_0003cab4();
                motor_off();
                FUN_0003d2d4(*(undefined4 *)(iVar9 + 0x20),DAT_0003af54 + 2);
              }
              else {
                cVar7 = *(char *)(iVar12 + 0x1d) + '\x01';
                *(char *)(iVar12 + 0x1d) = cVar7;
                debug_printf(DAT_0003b178,cVar7,uVar14,*(undefined4 *)(pbVar3 + 0x18));
                FUN_0003cab4();
                motor_off();
                FUN_00038608(*(undefined4 *)(pbVar3 + 0x14),*(undefined4 *)(pbVar3 + 0x18));
                if (*(char *)(iVar12 + 0x2e) == '\x01') {
                  *(undefined *)(iVar12 + 0x2e) = 0;
                }
              }
              *pbVar3 = 0;
            }
            debug_printf(s_Touch_lost_B__d_0003af5f + 0x11);
            if (*(char *)(iVar12 + 0x1d) == *(char *)(iVar9 + 0x14)) {
              *(undefined4 *)(pbVar3 + 0x18) = 0;
              FUN_0003d454(1);
              return;
            }
          }
        }
      }
    }
  }
  else if (((uint)(*(int *)(pbVar3 + 8) - *(int *)(pbVar3 + 4)) < 0x6400) &&
          (iVar12 = FUN_00033314(0xe), iVar12 == 0)) {
    leds_off();
    FUN_0003ccdc();
    *_DAT_0003af94 = *pcVar5 + '\x01';
    debug_printf(s_________user_select_ok_________d_0003af97 + 1,
                 (uint)(*(int *)(pbVar3 + 8) - *(int *)(pbVar3 + 4)) >> 5);
    FUN_0003c4d4(200,0);
    cVar7 = *pcVar5;
    if (cVar7 == '\0') {
      uVar8 = *(undefined4 *)(iVar9 + 0x50);
    }
    else if (cVar7 == '\x01') {
      uVar8 = *(undefined4 *)(iVar9 + 0x54);
    }
    else {
      if (cVar7 != '\x02') {
        return;
      }
      uVar8 = *(undefined4 *)(iVar9 + 0x58);
    }
    *(undefined4 *)(iVar9 + 0x48) = uVar8;
  }
  return;
}


/* ---- FUN_0003b17c @ 0003b17c ---- */

void FUN_0003b17c(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  iVar1 = FUN_00034540();
  if ((iVar1 == 0) && (iVar1 = FUN_000344d0(), iVar1 != 0)) {
    app_error_handler(iVar1,0x162,s__________user_touch_c_0003b1c0);
  }
  local_8._0_2_ = (ushort)(byte)*DAT_0003b1d8;
  iVar1 = FUN_000343ec(0xe,&local_8,DAT_0003b1dc);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x169,s__________user_touch_c_0003b1c0);
  }
  FUN_00034348(0xe,1);
  return;
}


/* ---- FUN_0003b1e0 @ 0003b1e0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003b1e0(int *param_1)

{
  int iVar1;
  
  *(undefined4 *)(*param_1 * 4 + 0x50000700) = 0x60c;
  *(undefined4 *)(param_1[1] * 4 + 0x50000700) = 0x60c;
  FUN_00033334(*param_1);
  FUN_00033334(param_1[1]);
  *(undefined4 *)(*param_1 * 4 + 0x50000700) = 0x60d;
  *(undefined4 *)(param_1[1] * 4 + 0x50000700) = 0x60d;
  FUN_00034300(4);
  iVar1 = 0;
  do {
    if ((_DAT_50000510 >> (uint)*(byte *)(param_1 + 1) & 1) != 0) {
      if (iVar1 == 0) {
        return;
      }
      break;
    }
    _DAT_5000050c = 1 << (uint)*(byte *)param_1;
    FUN_00034300(4);
    FUN_00033334(*param_1);
    FUN_00034300(4);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 9);
  _DAT_5000050c = 1 << *(byte *)(param_1 + 1);
  FUN_00034300(4);
  FUN_00033334(param_1[1]);
  return;
}


/* ---- FUN_0003b2cc @ 0003b2cc ---- */

void FUN_0003b2cc(int param_1,code **param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 local_28;
  uint auStack_24 [6];
  
  auStack_24[0] = (uint)*(byte *)(param_2 + 0xb);
  local_28 = param_2[10];
  iVar3 = FUN_0003b4f0(param_1,(int)param_2 + 0x2e,param_2 + 0xd,param_2[9]);
  if (iVar3 != 0) {
    return;
  }
  if ((*(char *)((int)param_2 + 0x2e) == '\0') &&
     (((cVar1 = *(char *)(param_2 + 3), cVar1 == '\x02' || (cVar1 == '\x03')) &&
      (param_2[9] == param_2[6])))) {
    param_2[9] = param_2[7];
    param_2[10] = param_2[5];
    *(byte *)(param_2 + 0xb) = (byte)(((uint)*(byte *)(param_2 + 8) << 0x1a) >> 0x1f);
    if (cVar1 == '\x03') {
      local_28 = (code *)(((uint)*(byte *)(param_2 + 8) << 0x1a) >> 0x1f);
      FUN_0003b5f4(param_2,param_1);
      return;
    }
    FUN_0003b400(param_2,param_1);
    return;
  }
  FUN_0002648c(auStack_24,param_2 + 3,0x14);
  if (*(char *)((int)param_2 + 0x2e) == '\0') {
    local_28 = (code *)((uint)local_28._1_3_ << 8);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4c4);
    *(int *)(param_1 + 0x4c4) = iVar3;
    if (iVar3 << 0x1e < 0) {
      uVar2 = 1;
    }
    else {
      if (-1 < iVar3 << 0x1d) goto LAB_0003b370;
      uVar2 = 2;
    }
    local_28 = (code *)CONCAT31(local_28._1_3_,uVar2);
  }
LAB_0003b370:
  *(undefined *)((int)param_2 + 0x2f) = 0;
  if (-1 < (int)((uint)*(byte *)(param_2 + 8) << 0x1d)) {
    (**param_2)(&local_28,param_2[1]);
  }
  return;
}


/* ---- FUN_0003b388 @ 0003b388 ---- */

undefined8 FUN_0003b388(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *DAT_0003b3b8;
  uStack_14 = DAT_0003b3b8[1];
  uStack_10 = DAT_0003b3b8[2];
  uStack_c = DAT_0003b3b8[3];
  iVar1 = FUN_00032aec(DAT_0003b3b8 + -4,&local_18,0);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x3f,s__________aw9109_aw9109_support_c_0003b3bc);
    return CONCAT44(uStack_14,local_18);
  }
  FUN_00034e04(DAT_0003b3b8 + -3);
  return CONCAT44(uStack_14,local_18);
}


/* ---- FUN_0003b3e0 @ 0003b3e0 ---- */

undefined4 FUN_0003b3e0(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 3;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x8200;
  }
  if ((int)(param_1 << 0x1e) < 0) {
    uVar1 = 0x8201;
  }
  if ((int)(param_1 << 0x1d) < 0) {
    uVar1 = 0x8202;
  }
  return uVar1;
}


/* ---- FUN_0003b400 @ 0003b400 ---- */

undefined8 FUN_0003b400(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int local_28;
  
  local_28 = DAT_0003b4c4;
  uVar3 = 0;
  puVar4 = param_2;
  FUN_00034286(param_2,0x104);
  FUN_00034286(param_2,0x124);
  FUN_00034286(param_2,0x11c);
  FUN_00034286(param_2,0x108);
  param_1[0xd] = 0;
  *(undefined *)((int)param_1 + 0x2e) = 0;
  if (param_4 == (undefined4 *)0x1) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  param_2[0x80] = uVar2;
  param_2[8] = 1;
  *param_2 = 1;
  if (*param_1 == 0) {
    for (; 0 < local_28; local_28 = local_28 + -1) {
      puVar4 = param_4;
      iVar1 = FUN_0003b4f0(param_2,(int)param_1 + 0x2e,param_1 + 0xd,param_3,param_4,0);
      if (iVar1 == 0) break;
    }
    if (*(char *)((int)param_1 + 0x2e) != '\0') {
      iVar1 = param_2[0x131];
      param_2[0x131] = iVar1;
      if (iVar1 != 0) {
        uVar3 = FUN_0003b3e0();
      }
    }
    if (local_28 < 1) {
      param_2[0x140] = 0;
      param_2[0x140] = 5;
      uVar3 = 3;
    }
  }
  else {
    param_1[2] = 0x286;
    param_2[0xc1] = param_1[2];
  }
  return CONCAT44(puVar4,uVar3);
}


/* ---- FUN_0003b4c8 @ 0003b4c8 ---- */

undefined4 FUN_0003b4c8(int param_1,int param_2,uint param_3,uint *param_4,int param_5)

{
  if (*param_4 < param_3) {
    *(uint *)(param_1 + 0x51c) = (uint)*(byte *)(param_2 + *param_4);
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


/* ---- FUN_0003b4f0 @ 0003b4f0 ---- */

undefined4
FUN_0003b4f0(int param_1,char *param_2,uint *param_3,int param_4,uint param_5,undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((*param_2 == '\0') && (*param_3 != param_5)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (*param_2 != '\0') {
    FUN_00034286(param_1);
    FUN_00034286(param_1,0x11c);
    FUN_00034286(param_1,0x108);
    goto LAB_0003b5cc;
  }
  iVar2 = FUN_0003427c(param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_0003427c(param_1,0x11c);
    if (iVar2 == 0) {
      iVar2 = FUN_0003427c(param_1,0x108);
      if (iVar2 == 0) goto LAB_0003b5cc;
      FUN_00034286(param_1,0x108);
      iVar2 = FUN_0003427c(param_1,0x124);
      if (iVar2 == 0) {
        if (*param_3 < param_5) {
          *(char *)(param_4 + *param_3) = (char)*(undefined4 *)(param_1 + 0x518);
          uVar4 = *param_3 + 1;
          *param_3 = uVar4;
          if (uVar4 == param_5 - 1) {
            *(undefined4 *)(param_1 + 0x200) = 2;
          }
          else if (uVar4 == param_5) goto LAB_0003b5cc;
          *(undefined4 *)(param_1 + 0x20) = 1;
        }
        goto LAB_0003b5cc;
      }
    }
    else {
      FUN_00034286(param_1,0x11c);
      iVar2 = FUN_0003427c(param_1,0x124);
      if (iVar2 == 0) {
        iVar2 = FUN_0003b4c8(param_1,param_4,param_5,param_3,param_6);
        if (iVar2 == 0) {
          return 0;
        }
        goto LAB_0003b5cc;
      }
    }
  }
  FUN_00034286(param_1,0x124);
  *(undefined4 *)(param_1 + 0x14) = 1;
  *param_2 = '\x01';
LAB_0003b5cc:
  if ((bVar1) && (iVar2 = FUN_0003427c(param_1,0x104), iVar2 != 0)) {
    FUN_00034286(param_1,0x104);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


/* ---- FUN_0003b5f4 @ 0003b5f4 ---- */

undefined4
FUN_0003b5f4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int local_30;
  
  local_30 = DAT_0003b6c0;
  uVar2 = 0;
  FUN_00034286(param_2,0x104);
  FUN_00034286(param_2,0x124);
  FUN_00034286(param_2,0x11c);
  FUN_00034286(param_2,0x108);
  *(undefined4 *)(param_2 + 0x200) = 0;
  param_1[0xd] = 0;
  *(undefined *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)(param_2 + 0x20) = 1;
  *(undefined4 *)(param_2 + 8) = 1;
  FUN_0003b4c8(param_2,param_3,param_4,param_1 + 0xd,param_5);
  if (*param_1 == 0) {
    for (; 0 < local_30; local_30 = local_30 + -1) {
      iVar1 = FUN_0003b4f0(param_2,(int)param_1 + 0x2e,param_1 + 0xd,param_3,param_4,param_5);
      if (iVar1 == 0) break;
    }
    if (*(char *)((int)param_1 + 0x2e) != '\0') {
      iVar1 = *(int *)(param_2 + 0x4c4);
      *(int *)(param_2 + 0x4c4) = iVar1;
      if (iVar1 != 0) {
        uVar2 = FUN_0003b3e0();
      }
    }
    if (local_30 < 1) {
      *(undefined4 *)(param_2 + 0x500) = 0;
      *(undefined4 *)(param_2 + 0x500) = 5;
      uVar2 = 3;
    }
  }
  else {
    param_1[2] = 0x286;
    *(int *)(param_2 + 0x304) = param_1[2];
  }
  return uVar2;
}


/* ---- FUN_0003b6c4 @ 0003b6c4 ---- */

undefined4 FUN_0003b6c4(int *param_1,int param_2,char *param_3,int param_4)

{
  undefined uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 0x308) = DAT_0003b754;
  if (*(char *)((int)param_1 + 0x2f) == '\0') {
    *(char *)((int)param_1 + 0x2f) = (char)((param_4 << 0x1d) >> 0x1f) + '\x01';
    param_1[8] = param_4;
    FUN_0002648c(param_1 + 3,param_3,0x14,param_4,param_4);
    param_1[10] = *(int *)(param_3 + 4);
    param_1[9] = *(int *)(param_3 + 0xc);
    *(uint *)(param_2 + 0x588) = (uint)(byte)param_3[1];
    if (*param_3 == '\x01') {
      *(undefined *)(param_1 + 0xb) = 0;
      uVar2 = FUN_0003b400(param_1,param_2,*(undefined4 *)(param_3 + 0xc),
                           *(undefined4 *)(param_3 + 4));
    }
    else {
      if ((*param_3 == '\0') && (-1 < param_4 << 0x1a)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      *(undefined *)(param_1 + 0xb) = uVar1;
      uVar2 = FUN_0003b5f4(param_1,param_2,*(undefined4 *)(param_3 + 0xc),
                           *(undefined4 *)(param_3 + 4),uVar1);
    }
    if (*param_1 == 0) {
      *(undefined *)((int)param_1 + 0x2f) = 0;
    }
  }
  else {
    *(int *)(param_2 + 0x304) = param_1[2];
    uVar2 = 0x11;
  }
  return uVar2;
}


/* ---- FUN_0003b758 @ 0003b758 ---- */

void FUN_0003b758(void)

{
  FUN_000264be(DAT_0003b764,0x120);
  return;
}


/* ---- FUN_0003b768 @ 0003b768 ---- */

void FUN_0003b768(undefined2 *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar2 = DAT_0003b7c4;
  puVar1 = DAT_0003b7c0;
  uVar3 = *DAT_0003b7c0;
  puVar4 = (undefined4 *)(DAT_0003b7c4 + uVar3 * 0x24);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined2 *)(iVar2 + uVar3 * 0x24) = *param_1;
  *(undefined *)((int)puVar4 + 2) = *(undefined *)(param_1 + 1);
  *(undefined2 *)((int)puVar4 + 0x1a) = param_1[0xd];
  *(undefined2 *)((int)puVar4 + 0x1e) = param_1[0xf];
  *(undefined *)(puVar4 + 6) = *(undefined *)(param_1 + 0xc);
  *(undefined *)((int)puVar4 + 0x19) = *(undefined *)((int)param_1 + 0x19);
  puVar4[8] = puVar4 + 1;
  *(undefined2 *)(puVar4 + 7) = param_1[0xe];
  if (*(char *)(param_1 + 1) == '\x02') {
    FUN_0002648c(puVar4 + 1,param_1 + 2,0x14);
  }
  *puVar1 = *(byte *)puVar1 + 1 & 7;
  return;
}


/* ---- FUN_0003b7c8 @ 0003b7c8 ---- */

void FUN_0003b7c8(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = DAT_0003b808[1];
  if (iVar2 != *DAT_0003b808) {
    if (*(char *)(DAT_0003b80c + iVar2 * 0x24 + 2) == '\x01') {
      sVar1 = *(short *)(DAT_0003b80c + iVar2 * 0x24);
      software_interrupt(0xa1);
    }
    else {
      sVar1 = *(short *)(DAT_0003b80c + iVar2 * 0x24);
      software_interrupt(0xa3);
    }
    if (sVar1 == 0) {
      DAT_0003b808[1] = *(byte *)(DAT_0003b808 + 1) + 1 & 7;
    }
  }
  return;
}


/* ---- FUN_0003b810 @ 0003b810 ---- */

undefined8 FUN_0003b810(undefined *param_1)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_28 [20];
  undefined4 local_14;
  undefined2 local_10;
  undefined local_e;
  
  local_2c = 0x21111;
  FUN_000264be(local_48,0x1c);
  local_44 = 0;
  local_48[0] = local_48[0] | 0x12;
  puStack_34 = &local_2c;
  local_38 = 0;
  local_3c = 0;
  local_30 = 0;
  local_e = *param_1;
  local_10 = 0xffa4;
  local_14 = 0x31111;
  FUN_000264be(local_28,0x14);
  software_interrupt(0xaa);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 2));
}


/* ---- FUN_0003b8f8 @ 0003b8f8 ---- */

undefined8 FUN_0003b8f8(undefined *param_1)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_28 [20];
  undefined4 local_14;
  undefined2 local_10;
  undefined local_e;
  
  local_2c = 0x21111;
  FUN_000264be(local_48,0x1c);
  local_44 = 0;
  local_48[0] = local_48[0] | 0x12;
  puStack_34 = &local_2c;
  local_38 = 0;
  local_3c = 0;
  local_30 = 0;
  local_e = *param_1;
  local_10 = 0xffa5;
  local_14 = 0x31111;
  FUN_000264be(local_28,0x14);
  software_interrupt(0xaa);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 2));
}


/* ---- FUN_0003b9d6 @ 0003b9d6 ---- */

undefined8 FUN_0003b9d6(undefined *param_1)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_28 [20];
  char *local_14;
  undefined2 local_10;
  undefined local_e;
  
  local_2c = 0x22111;
  FUN_000264be(local_48,0x1c);
  local_44 = 0;
  local_48[0] = local_48[0] | 0x12;
  puStack_34 = &local_2c;
  local_38 = 0;
  local_3c = 0;
  local_30 = 0;
  local_e = *param_1;
  local_10 = 0xffa8;
  local_14 = s_func___s__line__d_ERROR__code__0_00032110 + 1;
  FUN_000264be(local_28,0x14);
  software_interrupt(0xaa);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 2));
}


/* ---- FUN_0003bab4 @ 0003bab4 ---- */

undefined4 FUN_0003bab4(undefined4 param_1,undefined *param_2)

{
  *param_2 = (char)param_1;
  param_2[1] = (char)((uint)param_1 >> 8);
  return 2;
}


/* ---- FUN_0003babe @ 0003babe ---- */

undefined4 FUN_0003babe(undefined4 param_1,undefined *param_2)

{
  *param_2 = (char)param_1;
  param_2[1] = (char)((uint)param_1 >> 8);
  param_2[2] = (char)((uint)param_1 >> 0x10);
  param_2[3] = (char)((uint)param_1 >> 0x18);
  return 4;
}


/* ---- FUN_0003bad0 @ 0003bad0 ---- */

undefined4 FUN_0003bad0(void)

{
  FUN_000264be(DAT_0003bae8,0x14);
  FUN_0003227c(*DAT_0003baec);
  return 0;
}


/* ---- FUN_0003baf0 @ 0003baf0 ---- */

void FUN_0003baf0(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 1;
  for (uVar4 = param_2; param_3 <= uVar4; uVar4 = uVar4 / param_3) {
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < param_4) {
    uVar5 = param_4;
  }
  if (((param_6 & 1) == 0) && (param_5 != 0)) {
    if (((int)(param_6 << 0x1e) < 0) && (param_4 == 0)) {
      uVar3 = 0x30;
    }
    else {
      uVar3 = 0x20;
    }
    do {
      if (param_5 <= uVar5) break;
      param_5 = param_5 - 1;
      FUN_0002c408(param_1,uVar3);
    } while (param_5 != 0);
  }
  iVar1 = DAT_0003bba0;
  uVar4 = 1;
  do {
    if (param_4 < 2) {
      if (param_2 / uVar4 < param_3) {
        do {
          uVar2 = param_2 / uVar4;
          param_2 = param_2 - uVar2 * uVar4;
          FUN_0002c408(param_1,*(undefined *)(iVar1 + uVar2));
          uVar4 = uVar4 / param_3;
        } while (uVar4 != 0);
        if ((param_6 & 1) != 0) {
          for (; (param_5 != 0 && (uVar5 < param_5)); param_5 = param_5 - 1) {
            FUN_0002c408(param_1,0x20);
          }
        }
        return;
      }
    }
    else {
      param_4 = param_4 - 1;
    }
    uVar4 = uVar4 * param_3;
  } while( true );
}


/* ---- thunk_FUN_00039900 @ 0003bba4 ---- */

void thunk_FUN_00039900(void)

{
  int iVar1;
  
  iVar1 = DAT_00039920;
  *(undefined *)(DAT_00039920 + 6) = 0;
  if (*(char *)(iVar1 + 7) == '\0') {
    *(undefined *)(iVar1 + 7) = 1;
    app_timer_start(*(undefined4 *)(DAT_00039924 + 0x20),0x28000,0);
    return;
  }
  return;
}


/* ---- FUN_0003bbb8 @ 0003bbb8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003bbb8(void)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  
  iVar1 = DAT_0003bd74;
  uVar3 = 0;
  if (((*(char *)(DAT_0003bd74 + 10) == '\x01') && (*(char *)(DAT_0003bd74 + 0xb) == '\x01')) &&
     (*(short *)(DAT_0003bd74 + 0x2c) != 0)) goto LAB_0003bcfc;
  FUN_0002c67a();
  uVar2 = *(ushort *)(_DAT_0003bd78 + 8);
  if (uVar2 < 0x10cd) {
    if (uVar2 < 0xe10) {
      uVar2 = 0xe10;
      debug_printf(s_LOW_POWER_MODE_debug_0003bd7b + 1);
LAB_0003bc98:
      uVar3 = 5;
      goto LAB_0003bc9e;
    }
    debug_printf(s_LOW_POWER_MODE_debug_0003bd7b + 1);
    if (uVar2 < 0x11f9) goto LAB_0003bc30;
    FUN_00037a40(s_Battery_measure_result_ERROR___d_0003bd94,uVar2);
    uVar3 = (ushort)*(byte *)(iVar1 + 0x2c);
  }
  else {
    uVar2 = 0x10cc;
    debug_printf(s_LOW_POWER_MODE_debug_0003bd7b + 1);
LAB_0003bc30:
    if (uVar2 < 0xfaa) {
      if (uVar2 < 0xf82) {
        if (uVar2 < 0xf50) {
          if (uVar2 < 0xf1e) {
            if (uVar2 < 0xeec) {
              if (uVar2 < 0xec4) {
                if (uVar2 < 0xeb0) {
                  if (uVar2 < 0xe92) {
                    if (uVar2 < 0xe7e) {
                      if (uVar2 < 0xe42) {
                        if (0xe05 < uVar2) goto LAB_0003bc98;
                        uVar3 = 1;
                      }
                      else {
                        uVar3 = 10;
                      }
                    }
                    else {
                      uVar3 = 0x14;
                    }
                  }
                  else {
                    uVar3 = 0x1e;
                  }
                }
                else {
                  uVar3 = 0x28;
                }
              }
              else {
                uVar3 = 0x32;
              }
            }
            else {
              uVar3 = 0x3c;
            }
          }
          else {
            uVar3 = 0x46;
          }
        }
        else {
          uVar3 = 0x50;
        }
      }
      else {
        uVar3 = 0x5a;
      }
    }
    else {
      uVar3 = 100;
    }
LAB_0003bc9e:
    FUN_00037a40(s_Battery_voltage____dmV___d___0003bdbc,uVar2,uVar3);
    if ((uVar3 == 1) && (uVar2 != 0)) {
      FUN_00037a40(s_Battery_voltage_is_too_low__shut_0003bddc,1,uVar2);
      FUN_00039dc8();
    }
    else if ((*DAT_0003be10 != '\0') && ((*_DAT_0003be14 != '\0' && (0x13 < uVar3)))) {
      *DAT_0003be10 = '\0';
      debug_printf(s____EXIT_LOW_MODE____0003be17 + 1);
      debug_printf(s____EXIT_LOW_MODE____0003be30);
      DataSynchronizationBarrier(0xf);
      *DAT_0003be48 = *DAT_0003be48 & 0x700 | DAT_0003be4c;
      DataSynchronizationBarrier(0xf);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  *(ushort *)(iVar1 + 0x2c) = uVar3;
LAB_0003bcfc:
  debug_printf(s_______________________________d_0003be50,uVar3);
  if ((0x84 < *(byte *)(iVar1 + 8)) && (*(byte *)(iVar1 + 8) != 0xff)) {
    FUN_00037a40(s_Notify_to_APP__battery____d__0003be74,uVar3);
    iVar1 = FUN_0002b6cc(DAT_0003be94,DAT_0003bd74 + 0x2c);
    if (iVar1 != 0) {
      FUN_00037a40(s_func___s__line__d_ERROR__code__0_0003be9c,DAT_0003be98,0x1ab,iVar1);
      if (iVar1 == 8) {
        FUN_00037a40(DAT_0003bf20,8);
        return;
      }
      if (iVar1 == 0x3401) {
        FUN_00037a40(s_BLE_ERROR_GATTS_SYS_ATTR_MISSING_0003bec4);
        software_interrupt(0xb1);
        if (*(short *)(DAT_0003be94 + 0x5c) != 0) {
          app_error_handler(*(short *)(DAT_0003be94 + 0x5c),0x1b7,
                            s__________battery_measure_c_0003bf04,2);
          return;
        }
      }
    }
  }
  return;
}


/* ---- FUN_0003bf24 @ 0003bf24 ---- */

int FUN_0003bf24(void)

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
  
  FUN_000264be(local_20,0x14);
  local_20[0] = 0x27;
  local_1e = 0x31;
  local_1d = 0x10;
  local_1b = *(undefined2 *)(DAT_0003bf80 + 0x28);
  local_19 = *(undefined2 *)(DAT_0003bf80 + 0x2a);
  local_17 = *(undefined2 *)(DAT_0003bf80 + 0x2c);
  local_15 = *(undefined4 *)(DAT_0003bf80 + 0x30);
  local_1c = *(undefined *)(DAT_0003bf80 + 0x27);
  iVar1 = FUN_0002b33a(DAT_0003bf84,local_20);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x363,DAT_0003bf88);
  }
  return iVar1;
}


/* ---- FUN_0003bf8c @ 0003bf8c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0003bf8c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined local_20 [2];
  undefined local_1e;
  undefined local_1d;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined local_18;
  undefined local_17;
  undefined local_16;
  undefined local_15;
  undefined local_14;
  undefined local_13;
  undefined local_12;
  undefined local_11;
  undefined local_10;
  
  FUN_000264be(local_20,0x14);
  local_20[0] = 0x27;
  local_1e = 0x21;
  local_1d = 0x10;
  local_1a = (undefined)((ushort)*(undefined2 *)(DAT_0003c020 + 0x7a) >> 8);
  local_1b = (undefined)*(undefined2 *)(DAT_0003c020 + 0x7a);
  local_19 = (undefined)*(undefined2 *)(DAT_0003c020 + 0x7c);
  local_18 = (undefined)((ushort)*(undefined2 *)(DAT_0003c020 + 0x7c) >> 8);
  uVar2 = *(undefined4 *)(DAT_0003c020 + 0x80);
  local_14 = (undefined)((uint)uVar2 >> 0x18);
  local_15 = (undefined)((uint)uVar2 >> 0x10);
  local_16 = (undefined)((uint)uVar2 >> 8);
  local_17 = (undefined)uVar2;
  uVar2 = *(undefined4 *)(DAT_0003c020 + 0x74);
  local_10 = (undefined)((uint)uVar2 >> 0x18);
  local_11 = (undefined)((uint)uVar2 >> 0x10);
  local_12 = (undefined)((uint)uVar2 >> 8);
  local_13 = (undefined)uVar2;
  local_1c = *(undefined *)(DAT_0003c020 + 0x78);
  iVar1 = FUN_0002b33a(_DAT_0003c024,local_20);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x392,s__________app_misc_c_0003c027 + 1);
  }
  return iVar1;
}


/* ---- FUN_0003c03c @ 0003c03c ---- */

int FUN_0003c03c(void)

{
  int iVar1;
  undefined local_28 [2];
  undefined local_26;
  undefined local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  FUN_000264be(local_28,0x14);
  local_28[0] = 0x27;
  local_26 = 0x19;
  local_25 = 0x10;
  local_24 = *(undefined4 *)(DAT_0003c0a4 + 0x34);
  local_20 = *(undefined4 *)(DAT_0003c0a4 + 0x38);
  uStack_1c = *(undefined4 *)(DAT_0003c0a4 + 0x3c);
  iVar1 = FUN_0002b33a(DAT_0003c0a8,local_28);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x30a,DAT_0003c0ac);
  }
  return iVar1;
}


/* ---- FUN_0003c0b0 @ 0003c0b0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0003c0b0(undefined param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined local_28 [2];
  undefined local_26;
  undefined local_25;
  undefined4 local_24;
  undefined local_20;
  
  FUN_000264be(local_28,0x14);
  local_28[0] = 0x27;
  local_25 = 0x10;
  local_26 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  iVar1 = FUN_0002b33a(_DAT_0003c0f4,local_28);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x333,s__________app_misc_c_0003c0f7 + 1);
  }
  return iVar1;
}


/* ---- FUN_0003c10c @ 0003c10c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0003c10c(undefined param_1,undefined4 param_2)

{
  int iVar1;
  undefined local_20 [2];
  undefined local_1e;
  undefined local_1d;
  undefined4 local_1c;
  
  FUN_000264be(local_20,0x14);
  local_20[0] = 0x27;
  local_1d = 0x10;
  local_1e = param_1;
  local_1c = param_2;
  iVar1 = FUN_0002b33a(_DAT_0003c14c,local_20);
  if (iVar1 != 0) {
    app_error_handler(iVar1,799,s__________app_misc_c_0003c14f + 1);
  }
  return iVar1;
}


/* ---- FUN_0003c168 @ 0003c168 ---- */

void FUN_0003c168(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0003c190;
  iVar2 = FUN_0002b428(*(undefined *)(DAT_0003c190 + 1),DAT_0003c18c,0);
  if (iVar2 == 0) {
    FUN_0002b428(*(undefined *)(iVar1 + 5),DAT_0003c194,0);
    return;
  }
  return;
}


/* ---- FUN_0003c450 @ 0003c450 ---- */

undefined4 FUN_0003c450(int param_1)

{
  if (((*(char *)(param_1 + 5) != '\0') && (*(char *)(param_1 + 0x252) == '\0')) &&
     (*(char *)(param_1 + 0x254) != '\0')) {
    return 1;
  }
  return 0;
}


/* ---- leds_mode_user_select_breath @ 0003c468 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void leds_mode_user_select_breath(void)

{
  int iVar1;
  undefined4 uVar2;
  
  leds_off();
  leds_power_on();
  uVar2 = *(undefined4 *)(DAT_0003c4b4 + 0x50);
  if (*DAT_0003c4b8 == '\x01') {
    uVar2 = *(undefined4 *)(DAT_0003c4b4 + 0x54);
  }
  else if (*DAT_0003c4b8 == '\x02') {
    uVar2 = *(undefined4 *)(DAT_0003c4b4 + 0x58);
  }
  uVar2 = aw9109_build_breath_program(uVar2,0x50,700,600,0,200);
  iVar1 = _DAT_0003c4bc;
  *(undefined *)(_DAT_0003c4bc + 10) = 1;
  debug_printf(s_____ledTestJs____d_0003c4bf + 1,uVar2);
  *(undefined *)(iVar1 + 0x31) = 0;
  return;
}


/* ---- FUN_0003c4d4 @ 0003c4d4 ---- */

void FUN_0003c4d4(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0003c51c;
  if (*(char *)(DAT_0003c51c + 5) != '\0') {
    FUN_0003c53c();
  }
  uVar2 = FUN_00026404(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  iVar3 = app_timer_start(*(undefined4 *)(DAT_0003c520 + 0x18),uVar2,param_2);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x23c,s__________user_timer_c_0003c524);
    return;
  }
  *(undefined *)(iVar1 + 5) = 1;
  return;
}


/* ---- FUN_0003c53c @ 0003c53c ---- */

void FUN_0003c53c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0003c564;
  if (*(char *)(DAT_0003c564 + 5) != '\0') {
    iVar2 = FUN_00029aec(*(undefined4 *)(DAT_0003c568 + 0x18));
    if (iVar2 != 0) {
      app_error_handler(iVar2,0x24a,s__________user_timer_c_0003c56c);
      return;
    }
    *(undefined *)(iVar1 + 5) = 0;
  }
  return;
}


/* ---- FUN_0003c584 @ 0003c584 ---- */

void FUN_0003c584(undefined4 param_1)

{
  FUN_0003238a(DAT_0003c58c,param_1);
  return;
}


/* ---- led_color_calibration @ 0003c590 ---- */

undefined4
led_color_calibration(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (*(int *)(DAT_0003c5e0 + uVar2 * 0x10) == param_1) {
      iVar1 = DAT_0003c5e0 + uVar2 * 0x10;
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


/* ---- FUN_0003c5e4 @ 0003c5e4 ---- */

uint FUN_0003c5e4(void)

{
  uint uVar1;
  
  uVar1 = FUN_00029988();
  return uVar1 >> 5;
}


/* ---- FUN_0003c5f0 @ 0003c5f0 ---- */

void FUN_0003c5f0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  FUN_000264be(DAT_0003c60c,0x1c);
  puVar1 = DAT_0003c60c;
  *DAT_0003c60c = param_1;
  *(undefined *)((int)puVar1 + -3) = 0x12;
  return;
}


/* ---- FUN_0003c610 @ 0003c610 ---- */

void FUN_0003c610(undefined4 param_1)

{
  undefined4 *puVar1;
  
  FUN_000264be(DAT_0003c630,0x1c);
  puVar1 = DAT_0003c630;
  *DAT_0003c630 = param_1;
  *(undefined *)((int)puVar1 + -3) = 0x13;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  return;
}


/* ---- leds_off @ 0003c634 ---- */

void leds_off(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0003c678;
  if ((*(char *)(DAT_0003c678 + 0x2f) == '\x01') && (iVar2 = FUN_0002a67c(), iVar2 == 0)) {
    FUN_0003374c(((uint)(DAT_0003c67c - DAT_0003c680) >> 3) * 0x10000 + 1,
                 s_bond_leds_set_off_failed__0003c684);
  }
  leds_execute_timer_stop();
  *(undefined *)(iVar1 + 10) = 0;
  debug_printf(s_led_off__global_param_bond_sys_s_0003c6a0);
  if (*(char *)(iVar1 + 0xb) != '\x01') {
    FUN_00037894();
    return;
  }
  return;
}


/* ---- leds_req_blink @ 0003c6d8 ---- */

void leds_req_blink(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  undefined4 *puVar1;
  
  FUN_000264be(DAT_0003c70c,0x1c);
  puVar1 = DAT_0003c70c;
  *DAT_0003c70c = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  *(undefined *)((int)puVar1 + -3) = 0x16;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  return;
}


/* ---- leds_req_breath @ 0003c710 ---- */

undefined8
leds_req_breath(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_4;
  uVar3 = param_5;
  debug_printf(s_user_leds_on_breath__d__d__d__d___0003c75c,param_1,param_2,param_3,param_4,param_5,
               param_6,param_7);
  FUN_000264be(DAT_0003c78c,0x1c);
  puVar1 = DAT_0003c78c;
  DAT_0003c78c[3] = param_4;
  puVar1[4] = param_5;
  puVar1[5] = param_6;
  puVar1[6] = param_7;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined *)((int)puVar1 + -3) = 0x11;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  return CONCAT44(uVar3,uVar2);
}


/* ---- FUN_0003c790 @ 0003c790 ---- */

void FUN_0003c790(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  FUN_000264be(DAT_0003c7b8,0x1c);
  puVar1 = DAT_0003c7b8;
  *DAT_0003c7b8 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined *)((int)puVar1 + -3) = 0x15;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  return;
}


/* ---- FUN_0003c7bc @ 0003c7bc ---- */

void FUN_0003c7bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  FUN_000264be(DAT_0003c7f0,0x1c);
  puVar1 = DAT_0003c7f0;
  *DAT_0003c7f0 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  *(undefined *)((int)puVar1 + -3) = 0x14;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  return;
}


/* ---- leds_req_test_3color @ 0003c7f4 ---- */

void leds_req_test_3color
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  
  FUN_000264be(DAT_0003c830,0x1c);
  puVar1 = DAT_0003c830;
  DAT_0003c830[3] = param_4;
  puVar1[4] = param_5;
  puVar1[5] = param_6;
  puVar1[6] = param_7;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined *)((int)puVar1 + -3) = 0x17;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  return;
}


/* ---- FUN_0003c834 @ 0003c834 ---- */

void FUN_0003c834(void)

{
  leds_req_breath(0xffffff,0x1e,500,500,0,0x32,0x3fc);
  return;
}


/* ---- leds_execute_timer_start @ 0003c854 ---- */
/* ticks = (ms*32768+500)/1000 (prescaler 0) */

/* ticks = (ms*32768+500)/1000 (prescaler 0) */

void leds_execute_timer_start(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0003c89c;
  if (*(char *)(DAT_0003c89c + 2) != '\0') {
    leds_execute_timer_stop();
  }
  uVar2 = FUN_00026404(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  iVar3 = app_timer_start(*(undefined4 *)(DAT_0003c8a0 + 8),uVar2,param_2);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x2cb,s__________user_ble_c_0003c8a4);
    return;
  }
  *(undefined *)(iVar1 + 2) = 1;
  return;
}


/* ---- leds_execute_timer_stop @ 0003c8b8 ---- */

void leds_execute_timer_stop(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0003c8e0;
  if (*(char *)(DAT_0003c8e0 + 2) != '\0') {
    iVar2 = FUN_00029aec(*(undefined4 *)(DAT_0003c8e4 + 8));
    if (iVar2 != 0) {
      app_error_handler(iVar2,0x2d8,s__________user_ble_c_0003c8e8);
      return;
    }
    *(undefined *)(iVar1 + 2) = 0;
  }
  return;
}


/* ---- FUN_0003c8fc @ 0003c8fc ---- */

void FUN_0003c8fc(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 8) != '\0') {
    sVar1 = *(short *)(param_1 + 2);
    software_interrupt(0x66);
    if (sVar1 != 0) {
      if (sVar1 != 0x11) {
                    /* WARNING: Could not recover jumptable at 0x0003c916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 4))();
        return;
      }
      sVar1 = 1;
    }
    *(char *)(param_1 + 8) = (char)sVar1;
  }
  return;
}


/* ---- FUN_0003c920 @ 0003c920 ---- */

void FUN_0003c920(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0003c968;
  if (*(char *)(DAT_0003c968 + 2) != '\0') {
    FUN_0003c988();
  }
  uVar2 = FUN_00026404(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  iVar3 = app_timer_start(*(undefined4 *)(DAT_0003c96c + 8),uVar2,0);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x19b,s__________user_timer_c_0003c970);
    return;
  }
  *(undefined *)(iVar1 + 2) = 1;
  return;
}


/* ---- FUN_0003c988 @ 0003c988 ---- */

void FUN_0003c988(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0003c9b0;
  if (*(char *)(DAT_0003c9b0 + 2) != '\0') {
    iVar2 = FUN_00029aec(*(undefined4 *)(DAT_0003c9b4 + 8));
    if (iVar2 != 0) {
      app_error_handler(iVar2,0x1a8,s__________user_timer_c_0003c9b8);
      return;
    }
    *(undefined *)(iVar1 + 2) = 0;
  }
  return;
}


/* ---- FUN_0003c9d0 @ 0003c9d0 ---- */

char * FUN_0003c9d0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_0003c9fc;
  cVar2 = DAT_0003c9fc[1] + '\x01';
  if (DAT_0003c9fc[2] == cVar2) {
    cVar2 = '\0';
  }
  if (*DAT_0003c9fc == cVar2) {
    return (char *)0x0;
  }
  *param_1 = cVar2;
  return pcVar1 + (uint)(byte)pcVar1[1] * 0x18 + 4;
}


/* ---- FUN_0003ca00 @ 0003ca00 ---- */

void FUN_0003ca00(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = DAT_0003ca2c;
  if (DAT_0003ca2c[9] == '\0') {
    iVar2 = app_timer_start(*DAT_0003ca30,0x28000,0);
    if (iVar2 != 0) {
      app_error_handler(iVar2,0x9e,s__________user_timer_c_0003ca34);
      return;
    }
    *puVar1 = 1;
  }
  return;
}


/* ---- FUN_0003ca4c @ 0003ca4c ---- */

void FUN_0003ca4c(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0003ca94;
  if (*(char *)(DAT_0003ca94 + 4) != '\0') {
    FUN_0003cab4();
  }
  uVar2 = FUN_00026404(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  iVar3 = app_timer_start(*(undefined4 *)(DAT_0003ca98 + 0x14),uVar2,param_2);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x1f7,s__________user_timer_c_0003ca9c);
    return;
  }
  *(undefined *)(iVar1 + 4) = 1;
  return;
}


/* ---- FUN_0003cab4 @ 0003cab4 ---- */

void FUN_0003cab4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0003cadc;
  if (*(char *)(DAT_0003cadc + 4) != '\0') {
    iVar2 = FUN_00029aec(*(undefined4 *)(DAT_0003cae0 + 0x14));
    if (iVar2 != 0) {
      app_error_handler(iVar2,0x205,s__________user_timer_c_0003cae4);
      return;
    }
    *(undefined *)(iVar1 + 4) = 0;
  }
  return;
}


/* ---- queue_step_timer_start @ 0003cafc ---- */

void queue_step_timer_start(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0003cb44;
  if (*(char *)(DAT_0003cb44 + 3) != '\0') {
    FUN_0003cb64();
  }
  uVar2 = FUN_00026404(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  iVar3 = app_timer_start(*(undefined4 *)(DAT_0003cb48 + 0x10),uVar2,param_2);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x1c3,s__________user_timer_c_0003cb4c);
    return;
  }
  *(undefined *)(iVar1 + 3) = 1;
  return;
}


/* ---- FUN_0003cb64 @ 0003cb64 ---- */

void FUN_0003cb64(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0003cb8c;
  if (*(char *)(DAT_0003cb8c + 3) != '\0') {
    iVar2 = FUN_00029aec(*(undefined4 *)(DAT_0003cb90 + 0x10));
    if (iVar2 != 0) {
      app_error_handler(iVar2,0x1d0,s__________user_timer_c_0003cb94);
      return;
    }
    *(undefined *)(iVar1 + 3) = 0;
  }
  return;
}


/* ---- FUN_0003cc48 @ 0003cc48 ---- */

void FUN_0003cc48(void)

{
  int iVar1;
  
  if (*(char *)(DAT_0003cc7c + 9) == '\0') {
    *(undefined *)(DAT_0003cc7c + 9) = 1;
    iVar1 = app_timer_start(*(undefined4 *)(DAT_0003cc84 + 0x1c),DAT_0003cc80,0);
    if (iVar1 != 0) {
      app_error_handler(iVar1,0x2c6,s__________user_timer_c_0003cc88);
    }
    debug_printf(s_________user_select_timer_start__0003cca0);
    return;
  }
  return;
}


/* ---- FUN_0003ccdc @ 0003ccdc ---- */

void FUN_0003ccdc(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0003cd18;
  iVar1 = DAT_0003cd14;
  if (*(char *)(DAT_0003cd14 + 9) != '\0') {
    *(undefined *)(DAT_0003cd14 + 9) = 0;
    iVar2 = FUN_00029aec(*(undefined4 *)(iVar2 + 0x1c));
    if (iVar2 != 0) {
      app_error_handler(iVar2,0x2d4,s__________user_timer_c_0003cd1c);
    }
    *(undefined *)(iVar1 + 10) = 0;
    FUN_0003c53c();
    debug_printf(s_________user_select_timer_stop___0003cd34);
    FUN_0003ca00();
    return;
  }
  return;
}


/* ---- FUN_0003cd74 @ 0003cd74 ---- */

void FUN_0003cd74(void)

{
  int iVar1;
  
  iVar1 = FUN_00029994(DAT_0003ce70,1,DAT_0003ce6c);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x3c4,s__________user_timer_c_0003ce74);
  }
  iVar1 = FUN_00029994(DAT_0003ce70 + 4,0,DAT_0003ce8c);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x3ca,s__________user_timer_c_0003ce74);
  }
  iVar1 = FUN_00029994(DAT_0003ce70 + 8,0,DAT_0003ce90);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x3d6,s__________user_timer_c_0003ce74);
  }
  iVar1 = FUN_00029994(DAT_0003ce70 + 0x10,0,DAT_0003ce94);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x3dc,s__________user_timer_c_0003ce74);
  }
  iVar1 = FUN_00029994(DAT_0003ce70 + 0x14,0,DAT_0003ce98);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x3e2,s__________user_timer_c_0003ce74);
  }
  iVar1 = FUN_00029994(DAT_0003ce70 + 0x18,0,DAT_0003ce9c);
  if (iVar1 != 0) {
    app_error_handler(iVar1,1000,s__________user_timer_c_0003ce74);
  }
  iVar1 = FUN_00029994(DAT_0003ce70 + 0x20,1,DAT_0003cea0);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x3ed,s__________user_timer_c_0003ce74);
  }
  iVar1 = FUN_00029994(DAT_0003ce70 + 0xc,1,DAT_0003cea4);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x3f2,s__________user_timer_c_0003ce74);
  }
  iVar1 = FUN_00029994(DAT_0003ce70 + 0x1c,1,DAT_0003cea8);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x3f7,s__________user_timer_c_0003ce74);
  }
  iVar1 = FUN_00029994(DAT_0003ce70 + 0x24,0,DAT_0003ceac);
  if (iVar1 != 0) {
    app_error_handler(iVar1,0x3fd,s__________user_timer_c_0003ce74);
    return;
  }
  return;
}


/* ---- FUN_0003d2b8 @ 0003d2b8 ---- */

void FUN_0003d2b8(void)

{
  FUN_0003d33c();
  FUN_0003c988();
  leds_execute_timer_stop();
  FUN_0003cb64();
  FUN_0003cab4();
  return;
}


/* ---- FUN_0003d2d4 @ 0003d2d4 ---- */

void FUN_0003d2d4(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0003d31c;
  if (*(char *)(DAT_0003d31c + 1) != '\0') {
    FUN_0003d33c();
  }
  uVar2 = FUN_00026404(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  iVar3 = app_timer_start(*(undefined4 *)(DAT_0003d320 + 4),uVar2,param_2);
  if (iVar3 != 0) {
    app_error_handler(iVar3,0x12f,s__________user_timer_c_0003d324);
    return;
  }
  *(undefined *)(iVar1 + 1) = 1;
  return;
}


/* ---- FUN_0003d33c @ 0003d33c ---- */

void FUN_0003d33c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0003d364;
  if (*(char *)(DAT_0003d364 + 1) != '\0') {
    iVar2 = FUN_00029aec(*(undefined4 *)(DAT_0003d368 + 4));
    if (iVar2 != 0) {
      app_error_handler(iVar2,0x13b,s__________user_timer_c_0003d36c);
      return;
    }
    *(undefined *)(iVar1 + 1) = 0;
  }
  return;
}


/* ---- FUN_0003d384 @ 0003d384 ---- */

void FUN_0003d384(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_0003d3b4(param_1,param_2,2,param_4,param_5,param_6);
  if (iVar1 == 0) {
    FUN_0003d3b4(param_1,param_3,0x10,param_4,param_5,param_6);
  }
  return;
}


/* ---- FUN_0003d3b4 @ 0003d3b4 ---- */

undefined8
FUN_0003d3b4(ushort *param_1,byte *param_2,uint param_3,int param_4,ushort *param_5,byte *param_6)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte local_30 [4];
  undefined local_2c [4];
  
  pbVar7 = local_30;
  bVar2 = false;
  uVar1 = *param_5;
  pbVar6 = param_2;
  for (iVar8 = 0; iVar8 < (int)(uint)*param_1; iVar8 = iVar8 + 1) {
    puVar4 = local_2c;
    software_interrupt(100);
    if (puVar4 != (undefined *)0x0) goto LAB_0003d446;
    local_30[0] = (byte)param_3;
    pbVar6 = pbVar7;
    if ((param_3 & 0xff) == param_3) {
      if (bVar2) {
        iVar5 = 0;
      }
      else {
        iVar5 = 2;
      }
      pbVar6 = (byte *)((uint)*param_5 + (param_3 & 0xff) + iVar5);
      if (param_6 < pbVar6) goto LAB_0003d444;
      if (!bVar2) {
        uVar3 = *param_5 + 1;
        *param_5 = (ushort)uVar3;
        *(char *)(param_4 + (uVar3 & 0xffff)) = (char)param_2;
        *param_5 = *param_5 + 1;
        bVar2 = true;
      }
      puVar4 = local_2c;
      software_interrupt(100);
      if (puVar4 != (undefined *)0x0) goto LAB_0003d446;
      pbVar6 = (byte *)(param_3 & 0xff);
      *param_5 = *param_5 + (ushort)local_30[0];
    }
  }
  if (bVar2) {
    uVar3 = ((uint)*param_5 - (uint)uVar1) - 1 & 0xffff;
    if (0xff < uVar3) {
LAB_0003d444:
      puVar4 = &HardFault;
      pbVar7 = pbVar6;
      goto LAB_0003d446;
    }
    *(char *)(param_4 + (uint)uVar1) = (char)uVar3;
  }
  puVar4 = (undefined *)0x0;
  pbVar7 = pbVar6;
LAB_0003d446:
  return CONCAT44(pbVar7,puVar4);
}


/* ---- FUN_0003d454 @ 0003d454 ---- */

void FUN_0003d454(int param_1)

{
  if (param_1 != 0) {
    if (param_1 == 1) {
      *(undefined *)(DAT_0003d468 + 3) = 0;
    }
    return;
  }
  *(undefined *)(DAT_0003d468 + 4) = 0;
  return;
}


/* ---- FUN_0003d46c @ 0003d46c ---- */

void FUN_0003d46c(int param_1)

{
  if (param_1 != 0) {
    if (param_1 == 1) {
      *(undefined *)(DAT_0003d480 + 3) = 1;
    }
    return;
  }
  *(undefined *)(DAT_0003d480 + 4) = 1;
  return;
}


/* ---- FUN_0003d4c4 @ 0003d4c4 ---- */

undefined4
FUN_0003d4c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  
  puVar1 = DAT_0003d510;
  uStack_28 = param_4;
  puVar2 = (undefined4 *)FUN_000322b2(*DAT_0003d510,&uStack_28);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 4;
  }
  else {
    FUN_000264be(puVar2,0x1c);
    *(undefined *)(puVar2 + 1) = 0;
    *puVar2 = param_1;
    puVar2[4] = param_2;
    puVar2[5] = param_4;
    puVar2[2] = param_5;
    puVar2[3] = param_3;
    FUN_000322f4(*puVar1,&uStack_28);
    FUN_00038c88();
    uVar3 = 0;
  }
  return uVar3;
}


/* ---- FUN_0003d514 @ 0003d514 ---- */

void FUN_0003d514(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  
  local_c = CONCAT31((int3)((uint)param_4 >> 8),param_2);
  FUN_0002f668(DAT_0003d52c,0x26,param_1,&local_c,1);
  return;
}


/* ---- FUN_0003d530 @ 0003d530 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0003d530(undefined2 *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_20;
  int local_1c;
  
  local_1c = 0;
  local_20 = (uint)*(byte *)(param_1 + 1) << 0x10;
  iVar4 = FUN_0003683c(DAT_0003d5fc,*(undefined *)((int)param_1 + 9));
  iVar6 = ((uint)(DAT_0003d600 - DAT_0003d604) >> 3) * 0x10000 + 1;
  if (iVar4 == 0) {
    FUN_00033754(iVar6,s_pm_buffer_ptr_get___could_not_re_0003d608,*(undefined *)((int)param_1 + 9))
    ;
    return 3;
  }
  FUN_00036524(&local_20,*(undefined *)(param_1 + 1),iVar4,*(undefined *)(param_1 + 4));
  cVar2 = local_20._2_1_;
  bVar7 = local_20._2_1_ == '\x01';
  if ((bVar7) || (cVar2 == '\x06')) {
    local_20 = CONCAT22(local_20._2_2_,1);
  }
  else {
    if (cVar2 == '\a') {
      uVar3 = 0x14;
    }
    else {
      if (cVar2 != '\b') goto LAB_0003d59e;
      uVar3 = (undefined2)(*(ushort *)(local_1c + 4) + 9 >> 2);
    }
    local_20 = CONCAT22(local_20._2_2_,uVar3);
  }
LAB_0003d59e:
  iVar4 = FUN_0003636c(*param_1,&local_20,param_1 + 2);
  puVar1 = _DAT_0003d648;
  if (iVar4 == 0) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
    return 0;
  }
  if (iVar4 == 7) {
    return 7;
  }
  if (iVar4 == 0x11) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe | 2;
    *puVar1 = 1;
    return 0;
  }
  if (iVar4 != 0x86) {
    uVar5 = FUN_0003425c();
    FUN_00033762(iVar6,s_pds_peer_data_store___returned___0003d64b + 1,uVar5,*param_1);
    return 3;
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfd | 1;
  *puVar1 = 1;
  return 0x86;
}


/* ---- FUN_0003d67c @ 0003d67c ---- */

void FUN_0003d67c(undefined4 param_1,uint param_2)

{
  int iVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    iVar1 = FUN_0003d6b0(param_1,&local_10);
    if ((iVar1 == 0) ||
       ((((*(byte *)(iVar1 + 2) == param_2 && (-1 < (int)((uint)*(byte *)(iVar1 + 10) << 0x1e))) &&
         ((*(byte *)(iVar1 + 10) & 1) == 0)) && (*(int *)(iVar1 + 4) == 0)))) break;
    local_10 = local_10 + 1;
  }
  return;
}


/* ---- FUN_0003d6b0 @ 0003d6b0 ---- */

int FUN_0003d6b0(uint param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  while( true ) {
    if (3 < uVar2) {
      return 0;
    }
    if (*(ushort *)(DAT_0003d6dc + uVar2 * 0xc) == param_1) break;
    uVar2 = uVar2 + 1;
  }
  iVar1 = DAT_0003d6dc + uVar2 * 0xc;
  *param_2 = uVar2;
  return iVar1;
}


/* ---- FUN_0003d6e0 @ 0003d6e0 ---- */

void FUN_0003d6e0(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined *)(param_1 + 1) = 0xff;
  *(undefined *)((int)param_1 + 9) = 0xff;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
  *(undefined *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}


/* ---- FUN_0003d6fc @ 0003d6fc ---- */

void FUN_0003d6fc(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(byte *)(param_1 + 8); uVar1 = uVar1 + 1) {
    FUN_00036864(DAT_0003d724,*(byte *)(param_1 + 9) + uVar1 & 0xff);
  }
  FUN_0003d6e0(param_1);
  return;
}


/* ---- FUN_0003d728 @ 0003d728 ---- */

int FUN_0003d728(undefined4 *param_1,short *param_2,undefined2 *param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  short sVar4;
  undefined4 local_28;
  int iStack_24;
  
  if (*DAT_0003d808 == '\0') {
    iVar1 = 2;
  }
  else if (param_2 == (short *)0x0) {
    iVar1 = 5;
  }
  else if ((*param_2 == -1) || (param_2[1] == 0)) {
    iVar1 = 4;
  }
  else {
    local_28 = param_3;
    iStack_24 = param_4;
    iVar1 = FUN_0002ff04(*(undefined4 *)(param_2 + 2));
    if (iVar1 == 0) {
      iVar1 = 3;
    }
    else {
      if (param_3 == (undefined2 *)0x0) {
        sVar4 = param_2[4];
        iVar1 = FUN_0003d91c(sVar4,&local_28);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      else {
        local_28 = (undefined2 *)CONCAT22(local_28._2_2_,*param_3);
        sVar4 = param_3[1];
      }
      puVar2 = (undefined *)FUN_00038aec(&iStack_24);
      if (puVar2 == (undefined *)0x0) {
        FUN_0003d904(sVar4,(uint)local_28 & 0xffff);
        iVar1 = 8;
      }
      else {
        *puVar2 = (char)param_4;
        puVar2[0x16] = 0;
        *(undefined2 *)(puVar2 + 0x14) = (undefined2)local_28;
        *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(param_2 + 2);
        uVar3 = FUN_000323c6(DAT_0003d808 + -0xc,1);
        *(undefined4 *)(puVar2 + 0xc) = uVar3;
        *(short *)(puVar2 + 8) = *param_2;
        *(short *)(puVar2 + 4) = param_2[1];
        *(short *)(puVar2 + 6) = sVar4;
        if (param_4 == 3) {
          puVar2[0x16] = 4;
          *(undefined4 *)(puVar2 + 0x18) = *param_1;
        }
        *(undefined2 *)(puVar2 + 10) = 0;
        FUN_00038b08(&iStack_24);
        if (param_1 != (undefined4 *)0x0) {
          param_1[1] = 0;
          iVar1 = DAT_0003d80c;
          *param_1 = *(undefined4 *)(puVar2 + 0xc);
          *(undefined *)((int)param_1 + 10) = 0;
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar1 + 8);
        }
        FUN_00038c6c();
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


/* ---- FUN_0003d810 @ 0003d810 ---- */

int FUN_0003d810(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = DAT_0003d8f8;
  iVar6 = DAT_0003d8f8 + (uint)*(ushort *)(param_2 + 0x14) * 0x14;
  if (param_1 != 0) {
    FUN_00035b60(iVar6,param_2);
    return 1;
  }
  iVar5 = 0;
  iVar7 = *(int *)(iVar6 + 4) + (uint)*(ushort *)(iVar6 + 8) * 4;
  puVar2 = (undefined4 *)(DAT_0003d8f8 + -0xa8);
  switch(param_2[0x16]) {
  case '\x01':
    if (*param_2 == '\x03') {
      cVar1 = '\x05';
    }
    else {
      cVar1 = '\x06';
    }
    param_2[0x16] = cVar1;
    iVar3 = 4;
    pcVar4 = param_2 + 8;
    iVar7 = iVar7 + 4;
    break;
  case '\x02':
    if (*(int *)(param_2 + 0x10) == 0) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\x03';
    }
    param_2[0x16] = cVar1;
    iVar3 = 4;
    pcVar4 = param_2 + 0xc;
    iVar7 = iVar7 + 8;
    break;
  case '\x03':
    param_2[0x16] = '\x01';
    iVar7 = iVar7 + 0xc;
    iVar3 = (uint)*(ushort *)(param_2 + 6) << 2;
    pcVar4 = *(char **)(param_2 + 0x10);
    break;
  case '\x04':
    *(undefined4 *)(DAT_0003d8f8 + -0xa4) = 0;
    *puVar2 = *(undefined4 *)(param_2 + 0x18);
    iVar3 = FUN_00038e44(DAT_0003d8f8 + -0xa8,DAT_0003d8fc);
    if (iVar3 == 0) {
      return 10;
    }
  case '\0':
    param_2[0x16] = '\x02';
    iVar3 = 4;
    pcVar4 = param_2 + 4;
    break;
  case '\x05':
    param_2[0x16] = '\x06';
    iVar5 = FUN_00038f40(*(undefined4 *)(iVar3 + -0xa4),*DAT_0003d8fc,iVar3,param_4,param_4);
    if (iVar5 == 0) {
      return 0;
    }
    goto LAB_0003d8ea;
  case '\x06':
    iVar5 = 0x1d1d;
    goto LAB_0003d8ea;
  default:
    iVar5 = 0xf;
    goto LAB_0003d8ea;
  }
  iVar3 = FUN_00032ffc(DAT_0003d900,iVar7,pcVar4,iVar3,0);
  if (iVar3 != 0) {
    iVar5 = 0xe;
LAB_0003d8ea:
    FUN_00035b60(iVar6,param_2);
  }
  return iVar5;
}


/* ---- FUN_0003d904 @ 0003d904 ---- */

void FUN_0003d904(short param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0003d918 + param_2 * 0x14;
  *(short *)(iVar1 + 10) = (*(short *)(iVar1 + 10) - param_1) + -3;
  return;
}


/* ---- FUN_0003d91c @ 0003d91c ---- */

undefined4 FUN_0003d91c(short param_1,undefined2 *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0003d974;
  uVar1 = param_1 + 3;
  if (0x3fd < uVar1) {
    return 9;
  }
  uVar2 = 0;
  while ((*(char *)(DAT_0003d974 + uVar2 * 0x14) != '\0' ||
         (iVar4 = DAT_0003d974 + uVar2 * 0x14,
         0x3ff < (ushort)(*(short *)(iVar4 + 8) + uVar1 + *(short *)(iVar4 + 10))))) {
    uVar2 = uVar2 + 1 & 0xffff;
    if (1 < uVar2) {
      return 7;
    }
  }
  *param_2 = (short)uVar2;
  iVar3 = iVar3 + uVar2 * 0x14;
  *(ushort *)(iVar3 + 10) = *(short *)(iVar3 + 10) + uVar1;
  return 0;
}


/* ---- FUN_0003d990 @ 0003d990 ---- */

void FUN_0003d990(uint param_1)

{
  bool bVar1;
  
  do {
    bVar1 = 2 < param_1;
    param_1 = param_1 - 3;
  } while (bVar1 && param_1 != 0);
  return;
}


/* ---- FUN_0003da70 @ 0003da70 ---- */

void FUN_0003da70(uint param_1)

{
  bool bVar1;
  
  do {
    bVar1 = 2 < param_1;
    param_1 = param_1 - 3;
  } while (bVar1 && param_1 != 0);
  return;
}


/* ---- FUN_0003db70 @ 0003db70 ---- */

void FUN_0003db70(uint param_1)

{
  bool bVar1;
  
  do {
    bVar1 = 2 < param_1;
    param_1 = param_1 - 3;
  } while (bVar1 && param_1 != 0);
  return;
}


/* ---- FUN_0003dcd0 @ 0003dcd0 ---- */

void FUN_0003dcd0(uint param_1)

{
  bool bVar1;
  
  do {
    bVar1 = 2 < param_1;
    param_1 = param_1 - 3;
  } while (bVar1 && param_1 != 0);
  return;
}


/* ---- FUN_0003dd10 @ 0003dd10 ---- */

void FUN_0003dd10(uint param_1)

{
  bool bVar1;
  
  do {
    bVar1 = 2 < param_1;
    param_1 = param_1 - 3;
  } while (bVar1 && param_1 != 0);
  return;
}


/* ---- FUN_0003dd40 @ 0003dd40 ---- */

void FUN_0003dd40(uint param_1)

{
  bool bVar1;
  
  do {
    bVar1 = 2 < param_1;
    param_1 = param_1 - 3;
  } while (bVar1 && param_1 != 0);
  return;
}


/* ---- FUN_0003dd50 @ 0003dd50 ---- */

void FUN_0003dd50(uint param_1)

{
  bool bVar1;
  
  do {
    bVar1 = 2 < param_1;
    param_1 = param_1 - 3;
  } while (bVar1 && param_1 != 0);
  return;
}


