/* Ghidra 11.1.2 headless decompilation of nrf51822_xxac.bin, base 0x1b000. */
/* Derived from vendor firmware: for private interoperability study only. */

/* ---- FUN_0001b108 @ 0001b108 ---- */

void FUN_0001b108(void)

{
  return;
}


/* ---- FUN_0001b114 @ 0001b114 ---- */

/* WARNING: Removing unreachable block (ram,0x0001b150) */
/* WARNING: Removing unreachable block (ram,0x0001b138) */
/* WARNING: Removing unreachable block (ram,0x0001b11a) */
/* WARNING: Removing unreachable block (ram,0x0001b140) */
/* WARNING: Removing unreachable block (ram,0x0001b192) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001b114(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r6;
  int iVar3;
  undefined4 uVar4;
  
  FUN_0001b108();
  FUN_0001b1fc(&DAT_20002138,0,0x1b48);
  FUN_0001b1b4(0);
  FUN_0001f840(0,0);
  uVar4 = 0x1b167;
  FUN_0001b188();
  uRam20007f78 = 0xffffff80;
  uRam20007f7c = uVar4;
  if (*(code **)(_DAT_00032b78 + 0x28) != (code *)0x0) {
    (**(code **)(_DAT_00032b78 + 0x28))(_DAT_00032b78,0x38);
  }
  uVar4 = 0x1b1ab;
  FUN_0001b20c(0);
  iVar1 = DAT_0001b1ec;
  uRam20007f6c = 0;
  uRam20007f68 = 0;
  iVar2 = DAT_0001b1f0 - DAT_0001b1ec;
  uRam20007f70 = unaff_r6;
  uRam20007f74 = uVar4;
  for (iVar3 = 0; iVar3 != iVar2 >> 2; iVar3 = iVar3 + 1) {
    (**(code **)(iVar1 + iVar3 * 4))();
  }
  FUN_00032b60();
  iVar1 = DAT_0001b1f4;
  iVar2 = DAT_0001b1f8 - DAT_0001b1f4;
  for (iVar3 = 0; iVar3 != iVar2 >> 2; iVar3 = iVar3 + 1) {
    (**(code **)(iVar1 + iVar3 * 4))();
  }
  return;
}


/* ---- FUN_0001b188 @ 0001b188 ---- */

/* WARNING: Removing unreachable block (ram,0x0001b192) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001b188(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(code **)(_DAT_00032b78 + 0x28) != (code *)0x0) {
    (**(code **)(_DAT_00032b78 + 0x28))(_DAT_00032b78,param_2);
  }
  FUN_0001b20c(param_1);
  iVar1 = DAT_0001b1ec;
  iVar2 = DAT_0001b1f0 - DAT_0001b1ec;
  for (iVar3 = 0; iVar3 != iVar2 >> 2; iVar3 = iVar3 + 1) {
    (**(code **)(iVar1 + iVar3 * 4))();
  }
  FUN_00032b60();
  iVar1 = DAT_0001b1f4;
  iVar2 = DAT_0001b1f8 - DAT_0001b1f4;
  for (iVar3 = 0; iVar3 != iVar2 >> 2; iVar3 = iVar3 + 1) {
    (**(code **)(iVar1 + iVar3 * 4))();
  }
  return;
}


/* ---- FUN_0001b1b4 @ 0001b1b4 ---- */

void FUN_0001b1b4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_0001b1ec;
  iVar2 = DAT_0001b1f0 - DAT_0001b1ec;
  for (iVar3 = 0; iVar3 != iVar2 >> 2; iVar3 = iVar3 + 1) {
    (**(code **)(iVar1 + iVar3 * 4))();
  }
  FUN_00032b60();
  iVar1 = DAT_0001b1f4;
  iVar2 = DAT_0001b1f8 - DAT_0001b1f4;
  for (iVar3 = 0; iVar3 != iVar2 >> 2; iVar3 = iVar3 + 1) {
    (**(code **)(iVar1 + iVar3 * 4))();
  }
  return;
}


/* ---- FUN_0001b1fc @ 0001b1fc ---- */

void FUN_0001b1fc(undefined *param_1,undefined param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = param_1 + param_3;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    *param_1 = param_2;
  }
  return;
}


/* ---- FUN_0001b20c @ 0001b20c ---- */

void FUN_0001b20c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001b210 @ 0001b210 ---- */

void FUN_0001b210(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 local_14 [2];
  undefined4 local_10;
  undefined4 local_c;
  
  local_14[0] = param_2;
  local_10 = param_3;
  local_c = param_1;
  FUN_0001fb84(DAT_0001b22c,0,local_14);
  return;
}


/* ---- FUN_0001b230 @ 0001b230 ---- */

uint FUN_0001b230(undefined2 param_1,short param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 & 3;
  if ((param_3 & 3) == 0) {
    *DAT_0001b264 = param_3;
    *DAT_0001b268 = param_3 + (ushort)((param_2 + 1) * 8);
    *DAT_0001b26c = (char)uVar1;
    *DAT_0001b270 = (char)uVar1;
    *DAT_0001b274 = param_1;
    *DAT_0001b278 = param_2;
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}


/* ---- FUN_0001b27c @ 0001b27c ---- */

undefined4 FUN_0001b27c(int param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  ushort *puVar2;
  int *piVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 *puVar7;
  char cVar8;
  undefined local_21;
  
  puVar2 = DAT_0001b34c;
  uVar4 = 9;
  if (param_2 <= *DAT_0001b34c) {
    local_21 = 0;
    FUN_0001bcb0(&local_21);
    cVar8 = '\0';
    if ((ushort)*DAT_0001b354 < *DAT_0001b358) {
      cVar8 = *DAT_0001b354 + 1;
    }
    if (*DAT_0001b350 == cVar8) {
      FUN_0001bcf0(local_21);
      uVar4 = 4;
    }
    else {
      bVar1 = *DAT_0001b354;
      bVar5 = 0;
      if ((ushort)*DAT_0001b354 < *DAT_0001b358) {
        bVar5 = *DAT_0001b354 + 1;
      }
      *DAT_0001b354 = bVar5;
      FUN_0001bcf0(local_21);
      piVar3 = DAT_0001b35c;
      iVar6 = (uint)bVar1 * 8;
      puVar7 = (undefined4 *)(*DAT_0001b35c + iVar6);
      *puVar7 = param_3;
      if ((param_1 == 0) || (param_2 == 0)) {
        uVar4 = 0;
        *(undefined2 *)(puVar7 + 1) = 0;
      }
      else {
        FUN_00031764(*DAT_0001b360 + (uint)*puVar2 * (uint)bVar1,param_1,param_2);
        uVar4 = 0;
        *(short *)(*piVar3 + iVar6 + 4) = (short)param_2;
      }
    }
  }
  return uVar4;
}


/* ---- FUN_0001b364 @ 0001b364 ---- */

void FUN_0001b364(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int *piVar3;
  ushort *puVar4;
  int *piVar5;
  ushort *puVar6;
  code **ppcVar7;
  
  puVar6 = DAT_0001b3ec;
  piVar5 = DAT_0001b3e8;
  puVar4 = DAT_0001b3e4;
  piVar3 = DAT_0001b3e0;
  pbVar2 = DAT_0001b3dc;
  pbVar1 = DAT_0001b3d8;
  if (*DAT_0001b3d8 != *DAT_0001b3dc) {
    do {
      while( true ) {
        ppcVar7 = (code **)((uint)*pbVar1 * 8 + *piVar3);
        (**ppcVar7)((uint)*puVar4 * (uint)*pbVar1 + *piVar5,*(undefined2 *)(ppcVar7 + 1));
        if (*puVar6 <= (ushort)*pbVar1) break;
        *pbVar1 = *pbVar1 + 1;
        if (*pbVar2 == *pbVar1) {
          return;
        }
      }
      *pbVar1 = 0;
    } while (*pbVar1 != *pbVar2);
  }
  return;
}


/* ---- FUN_0001b3f0 @ 0001b3f0 ---- */

void FUN_0001b3f0(void)

{
  code **ppcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  
  iVar3 = DAT_0001b4ac;
  *(undefined4 *)(DAT_0001b4ac + 0x140) = 0;
  *(undefined4 *)(iVar3 + 0x144) = 0;
  *(undefined4 *)(iVar3 + 0x148) = 0;
  *(undefined4 *)(iVar3 + 0x14c) = 0;
  *(undefined4 *)(iVar3 + 0x100) = 0;
  *(undefined4 *)(iVar3 + 0x104) = 0;
  uVar2 = DAT_0001b4c0;
  ppcVar1 = DAT_0001b4bc;
  if (*DAT_0001b4b0 != (uint *)0x0) {
    iVar8 = 0;
    uVar6 = *(int *)(iVar3 + DAT_0001b4b4) - *DAT_0001b4b8 & 0xffffff;
    puVar5 = *DAT_0001b4b0;
    do {
      uVar4 = *puVar5;
      if (uVar6 < uVar4) break;
      uVar6 = uVar6 - uVar4;
      iVar8 = iVar8 + uVar4;
      puVar7 = (uint *)puVar5[7];
      if (*(char *)(puVar5 + 4) != '\0') {
        *(undefined *)(puVar5 + 4) = 0;
        if (*ppcVar1 == (code *)0x0) {
          (*(code *)puVar5[5])(puVar5[6]);
        }
        else {
          iVar3 = (**ppcVar1)((code *)puVar5[5]);
          if (iVar3 != 0) {
            FUN_0001b210(iVar3,0x169,uVar2);
          }
        }
      }
      puVar5 = puVar7;
    } while (puVar7 != (uint *)0x0);
    uVar6 = (uint)*DAT_0001b4c4;
    if (*DAT_0001b4c8 == uVar6) {
      uVar4 = *DAT_0001b4c8 + 1;
      uVar6 = uVar4 & 0xff;
      if (uVar6 == 2) {
        uVar6 = 0;
        *DAT_0001b4c4 = 0;
      }
      else {
        *DAT_0001b4c4 = (byte)uVar4;
      }
    }
    *(int *)(uVar6 * 4 + DAT_0001b4cc) = iVar8;
    *(undefined4 *)(DAT_0001b4d0 + 0x100) = 0x100000;
  }
  return;
}


/* ---- FUN_0001b4d4 @ 0001b4d4 ---- */

void FUN_0001b4d4(void)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  bool bVar24;
  uint local_54;
  uint local_4c;
  uint *local_3c;
  byte *local_34;
  char *local_30;
  uint local_2c;
  
  uVar16 = *DAT_0001b810;
  local_3c = *DAT_0001b81c;
  if (*DAT_0001b818 == *DAT_0001b814) {
    local_34 = DAT_0001b824;
    uVar23 = (uint)*DAT_0001b824;
    local_4c = (uint)DAT_0001b824[1];
    uVar17 = uVar16;
    if (uVar23 == local_4c) {
      iVar15 = *(int *)(DAT_0001b824 + 4);
      local_54 = (uint)DAT_0001b824[2];
      local_30 = DAT_0001ba10;
      puVar22 = (uint *)0x0;
      cVar1 = *DAT_0001ba10;
      bVar24 = false;
      goto LAB_0001b5c8;
    }
    uVar18 = 0;
    bVar3 = false;
LAB_0001b532:
    pcVar7 = DAT_0001b828;
    iVar15 = *(int *)(local_34 + 4);
    local_54 = (uint)local_34[2];
    local_30 = DAT_0001b828;
    cVar1 = *DAT_0001b828;
    bVar24 = false;
    bVar4 = false;
    uVar12 = uVar23;
    puVar22 = local_3c;
    DAT_0001b824 = local_34;
    local_2c = uVar17;
    cVar5 = cVar1;
    do {
      iVar20 = uVar12 * 0x18;
      uVar12 = uVar12 + 1 & 0xff;
      cVar2 = *(char *)(iVar15 + iVar20);
      uVar12 = uVar12 & -(uint)(uVar12 != local_54);
      if (cVar2 == '\x02') {
        puVar10 = *(uint **)(iVar15 + iVar20 + 4);
        if (puVar22 != (uint *)0x0) {
          puVar9 = puVar22;
          if (puVar10 == puVar22) {
            if ((uint *)puVar22[7] == (uint *)0x0) {
LAB_0001b91c:
              *(undefined4 *)(DAT_0001ba04 + 8) = 1;
              local_2c = 0;
              bVar24 = true;
              bVar4 = true;
              cVar5 = '\x01';
              puVar14 = (uint *)0x0;
              puVar13 = puVar9;
            }
            else {
              bVar24 = true;
              puVar14 = (uint *)puVar22[7];
              puVar13 = puVar22;
            }
LAB_0001b716:
            uVar11 = *puVar9;
            piVar19 = (int *)puVar9[7];
            puVar13[7] = (uint)piVar19;
            puVar22 = puVar14;
            if (piVar19 == (int *)0x0) goto LAB_0001b594;
          }
          else {
            do {
              puVar13 = puVar9;
              puVar9 = (uint *)puVar13[7];
              if (puVar9 == (uint *)0x0) goto LAB_0001b594;
            } while (puVar10 != puVar9);
            puVar14 = puVar22;
            if (puVar10 != puVar13) goto LAB_0001b716;
            puVar14 = (uint *)puVar22[7];
            puVar9 = puVar13;
            if (puVar14 == (uint *)0x0) goto LAB_0001b91c;
            uVar11 = *puVar10;
            piVar19 = (int *)puVar10[7];
            bVar24 = true;
          }
          *piVar19 = *piVar19 + uVar11;
          puVar22 = puVar14;
        }
      }
      else if ((cVar2 == '\x03') && (puVar22 != (uint *)0x0)) {
        do {
          *(undefined *)(puVar22 + 4) = 0;
          puVar22 = (uint *)puVar22[7];
        } while (puVar22 != (uint *)0x0);
        bVar24 = true;
      }
LAB_0001b594:
      puVar10 = DAT_0001ba08;
    } while (uVar12 != local_4c);
    if (bVar4) {
      *pcVar7 = cVar5;
      *puVar10 = local_2c;
      uVar17 = local_2c;
      cVar1 = cVar5;
    }
    if (bVar24) {
      *DAT_0001b81c = puVar22;
      bVar24 = local_3c != puVar22;
      local_3c = puVar22;
    }
    puVar22 = (uint *)0x0;
    if (!bVar3) goto LAB_0001b5c8;
  }
  else {
    uVar17 = (uint)(byte)(*DAT_0001b814 + 1);
    if (uVar17 == 2) {
      uVar17 = 0;
    }
    *DAT_0001b814 = (char)uVar17;
    uVar18 = *(uint *)(uVar17 * 4 + DAT_0001b820);
    uVar17 = uVar16 + uVar18 & 0xffffff;
    *DAT_0001b810 = uVar17;
    local_34 = DAT_0001b824;
    uVar23 = (uint)*DAT_0001b824;
    local_4c = (uint)DAT_0001b824[1];
    if (local_4c != uVar23) {
      bVar3 = true;
      goto LAB_0001b532;
    }
    iVar15 = *(int *)(DAT_0001b824 + 4);
    local_54 = (uint)DAT_0001b824[2];
    local_30 = DAT_0001b828;
    cVar1 = *DAT_0001b828;
  }
  if (local_3c == (uint *)0x0) {
    puVar22 = (uint *)0x0;
    bVar24 = true;
  }
  else {
    bVar3 = false;
    puVar22 = (uint *)0x0;
    iVar20 = 0;
    puVar10 = local_3c;
    do {
      uVar12 = *puVar10;
      if (uVar18 < uVar12) {
        if (bVar3) {
          *DAT_0001b9f4 = puVar10;
          local_3c = puVar10;
        }
        *puVar10 = uVar12 - uVar18;
        bVar24 = true;
        goto LAB_0001b5c8;
      }
      uVar18 = uVar18 - uVar12;
      iVar20 = iVar20 + uVar12;
      *puVar10 = 0;
      puVar9 = (uint *)puVar10[7];
      if (puVar10[3] != 0) {
        puVar10[7] = (uint)puVar22;
        puVar10[1] = uVar16 + iVar20 & 0xffffff;
        puVar10[2] = puVar10[3];
        puVar22 = puVar10;
      }
      bVar3 = true;
      puVar10 = puVar9;
    } while (puVar9 != (uint *)0x0);
    *DAT_0001b9f4 = (uint *)0x0;
    local_3c = (uint *)0x0;
    bVar24 = true;
  }
LAB_0001b5c8:
  bVar3 = false;
  cVar5 = '\0';
  puVar10 = local_3c;
LAB_0001b5d2:
  puVar9 = puVar22;
  if (puVar22 == (uint *)0x0) goto LAB_0001b636;
LAB_0001b5d6:
  uVar16 = puVar9[1];
  uVar18 = puVar9[2];
  puVar22 = (uint *)puVar9[7];
LAB_0001b5de:
  uVar12 = uVar16 - uVar17 & 0xffffff;
  if (DAT_0001b82c < uVar12) goto LAB_0001b69a;
LAB_0001b5ec:
  uVar12 = uVar12 + uVar18;
  *puVar9 = uVar12;
  do {
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined *)(puVar9 + 4) = 1;
    puVar9[7] = 0;
    if (puVar10 == (uint *)0x0) {
LAB_0001b6d2:
      bVar3 = true;
      puVar10 = puVar9;
      goto LAB_0001b5d2;
    }
    uVar16 = *puVar10;
    puVar13 = puVar10;
    if (uVar12 <= uVar16) {
LAB_0001b6c4:
      *puVar10 = uVar16 - uVar12;
      puVar9[7] = (uint)puVar10;
      bVar3 = true;
      puVar10 = puVar9;
      goto LAB_0001b5d2;
    }
    do {
      uVar11 = uVar16;
      uVar18 = uVar12;
      puVar14 = puVar13;
      puVar13 = (uint *)puVar14[7];
      uVar12 = uVar18 - uVar11;
      if (puVar13 == (uint *)0x0) goto LAB_0001b62a;
      uVar16 = *puVar13;
    } while (uVar16 < uVar12);
    *puVar13 = (uVar16 + uVar11) - uVar18;
LAB_0001b62a:
    *puVar9 = uVar12;
    puVar9[7] = (uint)puVar13;
    puVar14[7] = (uint)puVar9;
    puVar9 = puVar22;
    if (puVar22 != (uint *)0x0) goto LAB_0001b5d6;
LAB_0001b636:
    if (uVar23 == local_4c) {
      if (cVar5 != '\0') {
        *local_34 = (byte)uVar23;
      }
LAB_0001b738:
      puVar22 = local_3c;
      if (((bVar3) && (*DAT_0001b81c = puVar10, puVar22 = puVar10, puVar10 != local_3c)) ||
         (puVar10 = puVar22, bVar24)) {
        pcVar7 = DAT_0001b838;
        puVar6 = DAT_0001b834;
        if (puVar10 == (uint *)0x0) {
          DAT_0001b9f8[0x20] = 0x20000;
          iVar15 = DAT_0001ba04;
          *(undefined4 *)(DAT_0001ba04 + 0x348) = 0x10000;
          *(undefined4 *)(iVar15 + 0x308) = 0x10000;
          *(undefined4 *)(iVar15 + 4) = 1;
          iVar20 = 0x2f;
          iVar21 = 0x2f;
          do {
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
          *(undefined4 *)(iVar15 + 8) = 1;
          *DAT_0001ba08 = 0;
          do {
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
          *DAT_0001ba0c = 0;
        }
        else {
          iVar20 = *(int *)((int)DAT_0001b834 + DAT_0001b830);
          uVar16 = *puVar10;
          uVar18 = (iVar20 - uVar17 & 0xffffff) + 3;
          iVar15 = DAT_0001b830;
          if (*DAT_0001b838 == '\0') {
            DAT_0001b834[0xd1] = 0x10000;
            puVar6[0xc1] = 0x10000;
            puVar8 = DAT_0001b9f8;
            DAT_0001b9f8[0x60] = 0x20000;
            *puVar8 = 0x20000;
            *puVar6 = 1;
            iVar15 = 0x2f;
            do {
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            *pcVar7 = '\x01';
            iVar15 = DAT_0001b830;
            puVar6 = DAT_0001b834;
          }
          if (uVar16 < uVar18) {
            uVar16 = uVar18;
          }
          uVar16 = uVar16 + uVar17 & 0xffffff;
          DAT_0001b830 = iVar15;
          DAT_0001b834 = puVar6;
          puVar6[0x150] = uVar16;
          if ((uVar16 - iVar20 & 0xffffff) <
              (*(int *)((int)puVar6 + iVar15) - iVar20 & 0xffffffU) + 3) {
            puVar6[0x150] = *(undefined4 *)((int)puVar6 + iVar15);
            iVar15 = 0x2f;
            do {
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            DAT_0001b9f8[0x40] = 0x20000;
          }
        }
      }
      *local_30 = '\0';
      return;
    }
    while( true ) {
      uVar16 = uVar23 + 1 & 0xff;
      iVar20 = uVar23 * 0x18;
      iVar21 = iVar15 + iVar20;
      uVar23 = uVar16 & -(uint)(uVar16 != local_54);
      if ((*(char *)(iVar15 + iVar20) == '\x01') &&
         (puVar9 = *(uint **)(iVar21 + 4), *(char *)(puVar9 + 4) == '\0')) break;
      if (local_4c == uVar23) {
        *local_34 = (byte)local_4c;
        goto LAB_0001b738;
      }
    }
    uVar16 = *(uint *)(iVar21 + 8);
    puVar9[1] = uVar16;
    uVar18 = *(uint *)(iVar21 + 0xc);
    puVar9[2] = uVar18;
    puVar9[3] = *(uint *)(iVar21 + 0x10);
    puVar9[6] = *(uint *)(iVar21 + 0x14);
    cVar5 = '\x01';
    if (cVar1 == '\0') goto LAB_0001b5de;
    uVar16 = 0;
    puVar9[1] = 0;
    uVar12 = uVar17 * -0x100 >> 8;
    cVar5 = cVar1;
    if (uVar12 <= DAT_0001b82c) goto LAB_0001b5ec;
LAB_0001b69a:
    uVar12 = uVar17 - uVar16 & 0xffffff;
    if (uVar18 <= uVar12) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *(undefined *)(puVar9 + 4) = 1;
      puVar9[7] = 0;
      if (puVar10 == (uint *)0x0) goto LAB_0001b6d2;
      uVar12 = 0;
      uVar16 = *puVar10;
      goto LAB_0001b6c4;
    }
    uVar12 = uVar18 - uVar12;
    *puVar9 = uVar12;
  } while( true );
}


/* ---- FUN_0001ba14 @ 0001ba14 ---- */

uint FUN_0001ba14(undefined4 param_1,undefined param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = DAT_0001bb08;
  uVar4 = param_3 & 3;
  if (((param_3 & 3) == 0) && (param_3 != 0)) {
    DAT_0001bb08[0x20] = 0x20000;
    iVar2 = DAT_0001bb0c;
    *(undefined4 *)(DAT_0001bb0c + 0x348) = 0x10000;
    *(undefined4 *)(iVar2 + 0x308) = 0x10000;
    *(undefined4 *)(iVar2 + 4) = 1;
    iVar6 = 0x2f;
    iVar5 = 0x2f;
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(undefined4 *)(iVar2 + 8) = 1;
    do {
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *DAT_0001bb18 = (char)uVar4;
    *DAT_0001bb1c = param_4;
    puVar3 = DAT_0001bb20;
    *DAT_0001bb20 = (short)uVar4;
    *(undefined *)(puVar3 + 1) = param_2;
    *(uint *)(puVar3 + 2) = param_3;
    *DAT_0001bb24 = uVar4;
    *DAT_0001bb28 = 0;
    *DAT_0001bb2c = 0;
    puVar1[0x60] = 0x100000;
    puVar1[0xc5] = puVar1[0xc5] & 0xffffff00 | 0xc0;
    *puVar1 = 0x100000;
    *(undefined4 *)(iVar2 + 0x508) = param_1;
    puVar1[0xc4] = DAT_0001bb30 & puVar1[0xc4] | 0xc000;
    *DAT_0001bb38 = *(undefined4 *)(iVar2 + DAT_0001bb34);
  }
  else {
    uVar4 = 7;
  }
  return uVar4;
}


/* ---- FUN_0001bb3c @ 0001bb3c ---- */

undefined FUN_0001bb3c(int *param_1,undefined param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(DAT_0001bb64 + 4) != 0) {
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


/* ---- FUN_0001bb68 @ 0001bb68 ---- */

undefined4 FUN_0001bb68(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined local_19;
  
  pbVar2 = DAT_0001bc18;
  if ((*(int *)(DAT_0001bc18 + 4) != 0) && (param_1 != 0)) {
    if (param_2 < 5) {
      return 7;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      cVar1 = *(char *)(param_1 + 0x11);
      local_19 = 0;
      FUN_0001bcb0(&local_19);
      iVar3 = DAT_0001bc1c;
      uVar6 = pbVar2[1] + 1 & 0xff;
      uVar6 = uVar6 & -(uint)(pbVar2[2] != uVar6);
      if ((*pbVar2 != uVar6) &&
         (puVar7 = (undefined *)((uint)pbVar2[1] * 0x18 + *(int *)(pbVar2 + 4)),
         puVar7 != (undefined *)0x0)) {
        *puVar7 = 1;
        iVar4 = DAT_0001bc20;
        *(int *)(puVar7 + 4) = param_1;
        uVar5 = *(undefined4 *)(iVar3 + iVar4);
        *(uint *)(puVar7 + 0xc) = param_2;
        *(undefined4 *)(puVar7 + 8) = uVar5;
        *(uint *)(puVar7 + 0x10) = -(uint)(cVar1 == '\x01') & param_2;
        *(undefined4 *)(puVar7 + 0x14) = param_3;
        pbVar2[1] = (byte)uVar6;
        FUN_0001bcf0(local_19);
        *(undefined4 *)(DAT_0001bc24 + 0x100) = 0x100000;
        return 0;
      }
      FUN_0001bcf0(local_19);
      return 4;
    }
  }
  return 8;
}


/* ---- FUN_0001bc28 @ 0001bc28 ---- */

undefined4 FUN_0001bc28(int param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined local_11 [5];
  
  pbVar1 = DAT_0001bca8;
  if (((*(int *)(DAT_0001bca8 + 4) == 0) || (param_1 == 0)) || (*(int *)(param_1 + 0x14) == 0)) {
    uVar2 = 8;
  }
  else {
    *(undefined *)(param_1 + 0x10) = 0;
    local_11[0] = 0;
    FUN_0001bcb0(local_11);
    uVar3 = pbVar1[1] + 1 & 0xff;
    uVar3 = uVar3 & -(uint)(pbVar1[2] != uVar3);
    if ((*pbVar1 != uVar3) &&
       (puVar4 = (undefined *)((uint)pbVar1[1] * 0x18 + *(int *)(pbVar1 + 4)),
       puVar4 != (undefined *)0x0)) {
      *(int *)(puVar4 + 4) = param_1;
      *puVar4 = 2;
      pbVar1[1] = (byte)uVar3;
      FUN_0001bcf0(local_11[0]);
      *(undefined4 *)(DAT_0001bcac + 0x100) = 0x100000;
      return 0;
    }
    FUN_0001bcf0(local_11[0]);
    uVar2 = 4;
  }
  return uVar2;
}


/* ---- FUN_0001bcb0 @ 0001bcb0 ---- */

void FUN_0001bcb0(undefined *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = DAT_0001bce8;
  puVar2 = DAT_0001bce4;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  if (DAT_0001bce4[1] == 0) {
    DAT_0001bce4[1] = 1;
    uVar4 = DAT_0001bcec;
    *puVar2 = *(uint *)(iVar3 + 0x80) & DAT_0001bcec;
    *(uint *)(iVar3 + 0x80) = uVar4;
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


/* ---- FUN_0001bcf0 @ 0001bcf0 ---- */

void FUN_0001bcf0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = DAT_0001bd14;
  if ((DAT_0001bd14[1] != 0) && (param_1 == 0)) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    *DAT_0001bd18 = *DAT_0001bd14;
    puVar2[1] = 0;
    if (iVar3 == 0) {
      enableIRQinterrupts();
    }
  }
  return;
}


/* ---- FUN_0001bd1c @ 0001bd1c ---- */

void FUN_0001bd1c(void)

{
  ushort uVar1;
  short sVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  
  piVar4 = DAT_0001bdd4;
  puVar3 = DAT_0001bdc8;
  iVar6 = *(int *)(DAT_0001bdc8 + 4);
  uVar8 = (uint)*(ushort *)(DAT_0001bdc8 + 2);
  if (iVar6 == 0) {
    iVar6 = *(int *)(DAT_0001bdcc + uVar8 * 0x10 + 4);
    piVar7 = (int *)(iVar6 + 8);
  }
  else {
    piVar7 = (int *)(iVar6 + (*(ushort *)(iVar6 + 2) + 3) * 4);
    iVar6 = *(int *)(DAT_0001bdcc + uVar8 * 0x10 + 4);
  }
  while( true ) {
    if (((int *)(iVar6 + 0x400) <= piVar7) || (*piVar7 == -1)) {
      if (*(short *)(DAT_0001bdcc + uVar8 * 0x10 + 0xc) == 0) {
        FUN_0001d510(DAT_0001bdd8,iVar6,1,0);
        *puVar3 = 4;
      }
      else {
        *DAT_0001bdc8 = 5;
        uVar5 = DAT_0001bdd8;
        iVar6 = *DAT_0001bdd4;
        *(undefined2 *)(DAT_0001bdd4 + 1) = 2;
        FUN_0001d510(uVar5,iVar6,1,0);
      }
      return;
    }
    if ((*(ushort *)(piVar7 + 1) != DAT_0001bdd0) && (*(short *)piVar7 != 0)) break;
    piVar7 = piVar7 + *(ushort *)((int)piVar7 + 2) + 3;
  }
  *(int **)(DAT_0001bdc8 + 4) = piVar7;
  uVar1 = *(ushort *)(piVar4 + 1);
  iVar6 = *piVar4;
  sVar2 = *(short *)((int)piVar7 + 2);
  *puVar3 = 3;
  FUN_0001d420(DAT_0001bdd8,iVar6 + (uint)uVar1 * 4,piVar7,sVar2 + 3,0);
  return;
}


/* ---- FUN_0001bddc @ 0001bddc ---- */

undefined4 FUN_0001bddc(int *param_1,short *param_2)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = param_1[1];
  if (((((uVar2 != 0) && (*DAT_0001beb8 <= uVar2)) && (uVar2 <= DAT_0001beb8[1])) &&
      (((uVar2 & 3) == 0 && (*(short *)(param_1 + 2) == *(short *)(DAT_0001bec4 + 8))))) &&
     (*param_1 == *(int *)(uVar2 + 8))) {
    if ((*(uint *)(DAT_0001bebc + 4) < uVar2) && (uVar2 < *(uint *)(DAT_0001bebc + 4) + 0x400)) {
      sVar1 = 0;
    }
    else {
      if (uVar2 <= *(uint *)(DAT_0001bebc + 0x14)) {
        return 0;
      }
      if (*(uint *)(DAT_0001bebc + 0x14) + 0x400 <= uVar2) {
        return 0;
      }
      sVar1 = 1;
    }
    *param_2 = sVar1;
    return 1;
  }
  *param_2 = 0;
  uVar2 = DAT_0001bec0;
  sVar1 = 1;
  iVar4 = DAT_0001bebc;
LAB_0001be02:
  piVar3 = (int *)0x0;
  do {
    if (piVar3 != (int *)0x0) goto LAB_0001be10;
    piVar3 = (int *)(*(int *)(iVar4 + 4) + 8);
    while( true ) {
      if (((int *)(*(int *)(iVar4 + 4) + 0x400) <= piVar3) || (*piVar3 == -1)) {
        iVar4 = iVar4 + 0x10;
        *param_2 = sVar1;
        if (sVar1 == 2) {
          return 0;
        }
        sVar1 = 2;
        goto LAB_0001be02;
      }
      if ((*(ushort *)(piVar3 + 1) != uVar2) && (*(short *)piVar3 != 0)) break;
LAB_0001be10:
      piVar3 = piVar3 + *(ushort *)((int)piVar3 + 2) + 3;
    }
    if (piVar3[2] == *param_1) {
      param_1[1] = (int)piVar3;
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(DAT_0001bec4 + 8);
      return 1;
    }
  } while( true );
}


/* ---- FUN_0001bec8 @ 0001bec8 ---- */

void FUN_0001bec8(int param_1)

{
  short *psVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  undefined4 uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  code **ppcVar20;
  int iVar21;
  code **ppcVar22;
  int iVar23;
  ushort local_3e;
  undefined4 local_3c;
  undefined2 *local_38 [5];
  
  puVar11 = DAT_0001c6d0;
  uVar15 = DAT_0001c5a0;
  iVar17 = DAT_0001c580;
  puVar10 = DAT_0001c210;
  pcVar9 = DAT_0001c1e8;
  iVar8 = DAT_0001c1e4;
  iVar21 = *(int *)(DAT_0001c1e4 + 0x70);
  iVar16 = iVar21 * 0x1c;
  bVar4 = *(byte *)(DAT_0001c1e4 + iVar16);
  uVar19 = (uint)bVar4;
  bVar7 = (byte)param_1;
  if (5 < uVar19) {
    if (uVar19 == 6) {
      if (param_1 != 0) {
        local_38[0] = (undefined2 *)0x1;
        local_3c = CONCAT31(local_3c._1_3_,5);
        goto LAB_0001bf7a;
      }
      if (DAT_0001c1f4[0xc] == 0) {
        if (*DAT_0001c1f4 < 8) {
                    /* WARNING: Could not recover jumptable at 0x0001c4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(PTR_PTR_LAB_0001c590 + (uint)*DAT_0001c1f4 * 4))();
          return;
        }
      }
      else {
        bVar4 = *DAT_0001c1f4;
        DAT_0001c1f4[0xc] = bVar7;
        if (bVar4 < 8) {
                    /* WARNING: Could not recover jumptable at 0x0001bf62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(DAT_0001c1f8 + (uint)bVar4 * 4))();
          return;
        }
      }
      local_38[0] = (undefined2 *)0xf;
      goto LAB_0001c19c;
    }
LAB_0001bf2c:
    puVar12 = (undefined2 *)0xf;
    goto LAB_0001bf32;
  }
  if (uVar19 < 4) {
    if (uVar19 == 1) {
      if (param_1 != 0) {
        *DAT_0001c1fc = *DAT_0001c1fc & ~bVar4;
        local_38[0] = (undefined2 *)0x1;
LAB_0001bf76:
        local_3c = (uint)local_3c._1_3_ << 8;
        goto LAB_0001bf7a;
      }
      iVar16 = iVar16 + DAT_0001c1e4;
      bVar3 = *(byte *)(iVar16 + 4);
      if (bVar3 == 2) {
        iVar23 = FUN_0001d510(DAT_0001c6d4,*DAT_0001c6d0,1,0);
        *(undefined2 *)(puVar11 + 1) = 2;
        *(byte *)(iVar16 + 4) = bVar7;
LAB_0001c180:
        if (iVar23 == 0) {
          return;
        }
        uVar19 = (uint)*(byte *)(iVar8 + iVar21 * 0x1c);
      }
      else {
        if (bVar3 < 3) {
          if (bVar3 == 0) {
            iVar23 = FUN_0001d420(DAT_0001c6d4,*DAT_0001c6d0,DAT_0001c6d8,2,0);
            *(byte *)(iVar16 + 4) = bVar4;
          }
          else {
            if (*DAT_0001c1e8 == '\x02') {
              iVar17 = 0;
            }
            else {
              if (DAT_0001c1e8[0x10] != '\x02') {
                *DAT_0001c1fc = (*DAT_0001c1fc | 2) & ~bVar4;
                local_38[0] = (undefined2 *)0x0;
                goto LAB_0001bf76;
              }
              iVar17 = 1;
            }
            iVar23 = FUN_0001d420(DAT_0001c578,*(undefined4 *)(DAT_0001c1e8 + iVar17 * 0x10 + 4),
                                  DAT_0001c58c,2,0);
            pcVar9[iVar17 * 0x10] = '\0';
          }
          goto LAB_0001c180;
        }
        if (bVar3 == 3) {
          iVar23 = FUN_0001d420(DAT_0001c204,*DAT_0001c210,DAT_0001c214,2,0);
          pcVar9 = DAT_0001c1e8;
          iVar17 = (uint)*(ushort *)(DAT_0001c1f4 + 2) * 0x10;
          uVar13 = *(undefined4 *)(DAT_0001c1e8 + iVar17 + 4);
          *(undefined4 *)(DAT_0001c1e8 + iVar17 + 4) = *puVar10;
          *puVar10 = uVar13;
          *(undefined2 *)(pcVar9 + iVar17 + 8) = *(undefined2 *)(puVar10 + 1);
          *(undefined2 *)(puVar10 + 1) = 2;
          pcVar9[iVar17] = bVar7;
          *(byte *)(iVar16 + 4) = bVar7;
          goto LAB_0001c180;
        }
      }
      local_38[0] = (undefined2 *)0xe;
      *DAT_0001c1fc = *DAT_0001c1fc & 0xfe;
LAB_0001c19c:
      puVar12 = local_38[0];
      if (1 < uVar19 - 2) goto LAB_0001bf32;
    }
    else {
      if (1 < uVar19 - 2) goto LAB_0001bf2c;
      iVar16 = DAT_0001c1e4 + iVar16;
      uVar15 = (uint)*(ushort *)(iVar16 + 0x12);
      if (param_1 == 0) {
        uVar19 = (uint)*(byte *)(iVar16 + 0x10);
        if (6 < uVar19) {
          FUN_0001c6c6(*(undefined4 *)(DAT_0001c1e8 + uVar15 * 0x10 + 4),
                       (uint)*(ushort *)(DAT_0001c1e8 + uVar15 * 0x10 + 8) << 2);
        }
                    /* WARNING: Could not recover jumptable at 0x0001bf2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(DAT_0001c1ec + uVar19 * 4))();
        return;
      }
      sVar5 = *(short *)(iVar16 + 6);
      psVar1 = (short *)(DAT_0001c1e8 + uVar15 * 0x10 + 10);
      *(short *)(DAT_0001c1e8 + uVar15 * 0x10 + 8) =
           *(short *)(DAT_0001c1e8 + uVar15 * 0x10 + 8) + sVar5 + 3;
      *(short *)(pcVar9 + uVar15 * 0x10 + 10) = *psVar1 + (-3 - sVar5);
      local_38[0] = (undefined2 *)0x1;
    }
    iVar17 = DAT_0001c218;
    uVar15 = (uint)*(byte *)(iVar8 + iVar21 * 0x1c + 0x16);
    *(uint *)(DAT_0001c218 + 0x40) = *(int *)(DAT_0001c218 + 0x40) + uVar15;
    *(uint *)(iVar17 + 0x44) = *(int *)(iVar17 + 0x44) - uVar15;
    puVar12 = local_38[0];
  }
  else if (param_1 == 0) {
    iVar23 = DAT_0001c1e4 + iVar16;
    cVar2 = *(char *)(iVar23 + 4);
    if (cVar2 == '\x01') {
      if ((int)((uint)*DAT_0001c598 << 0x1e) < 0) {
        uVar19 = (uint)*(ushort *)(DAT_0001c59c + 4);
        if (uVar19 < 2) {
          do {
            iVar16 = uVar19 * 0x10;
            if (*(char *)(iVar17 + iVar16) == '\0') {
              iVar18 = *(int *)(iVar17 + iVar16 + 4);
              piVar14 = *DAT_0001c6dc;
              do {
                if (piVar14 == (int *)0x0) {
                  piVar14 = (int *)(iVar18 + 8);
                  goto LAB_0001c5f0;
                }
                do {
                  piVar14 = piVar14 + *(ushort *)((int)piVar14 + 2) + 3;
LAB_0001c5f0:
                  if (((int *)(iVar18 + 0x400) <= piVar14) || (*piVar14 == -1)) {
                    *DAT_0001c6dc = (int *)0x0;
                    goto LAB_0001c54a;
                  }
                  uVar6 = *(ushort *)(piVar14 + 1);
                } while ((uVar6 == uVar15) || (*(short *)piVar14 == 0));
                *DAT_0001c6dc = piVar14;
              } while ((uint)*(ushort *)(iVar23 + 6) != (uint)uVar6);
              iVar23 = FUN_0001d420(DAT_0001c6d4,piVar14,DAT_0001c6e0,1,0);
              if (iVar23 == 0) {
                *(undefined *)(iVar17 + iVar16 + 0xe) = 1;
                return;
              }
              uVar19 = (uint)*(byte *)(iVar8 + iVar21 * 0x1c);
              local_38[0] = (undefined2 *)0xe;
              goto LAB_0001c19c;
            }
LAB_0001c54a:
            uVar19 = uVar19 + 1;
            *(short *)(DAT_0001c59c + 4) = (short)uVar19;
          } while ((uVar19 & 0xffff) < 2);
        }
        FUN_0001b1fc(DAT_0001c59c,0,8);
        uVar19 = (uint)*(byte *)(iVar8 + iVar21 * 0x1c);
        goto LAB_0001c13e;
      }
      FUN_0001b1fc(DAT_0001c6dc,0,8);
      local_38[0] = (undefined2 *)0x2;
      uVar19 = (uint)*(byte *)(iVar8 + iVar16);
      goto LAB_0001c19c;
    }
    if (cVar2 == '\x02') {
LAB_0001c13e:
      local_38[0] = (undefined2 *)0x0;
      puVar12 = local_38[0];
    }
    else {
      puVar12 = (undefined2 *)0xf;
      if (cVar2 == '\0') {
        FUN_0001b1fc(local_38,0,8);
        local_3c = *(int *)(iVar23 + 0xc);
        iVar17 = FUN_0001bddc(&local_3c,&local_3e);
        uVar13 = DAT_0001c204;
        if (iVar17 == 0) {
          *(undefined *)(iVar23 + 4) = 2;
          local_38[0] = (undefined2 *)0xa;
          uVar19 = (uint)*(byte *)(iVar8 + iVar16);
        }
        else {
          *(undefined2 *)(iVar23 + 6) = local_38[0][2];
          *(undefined2 *)(iVar23 + 8) = *local_38[0];
          iVar17 = FUN_0001d420(uVar13,local_38[0],DAT_0001c208,1,0);
          if (iVar17 == 0) {
            DAT_0001c1e8[(uint)local_3e * 0x10 + 0xe] = '\x01';
            *(undefined *)(iVar23 + 4) = 2;
            return;
          }
          *(undefined *)(iVar23 + 4) = 2;
          local_38[0] = (undefined2 *)0xe;
          uVar19 = (uint)*(byte *)(iVar8 + iVar16);
        }
        goto LAB_0001c19c;
      }
    }
  }
  else {
    puVar12 = (undefined2 *)0x1;
  }
LAB_0001bf32:
  local_38[0] = puVar12;
  if (uVar19 < 7) {
                    /* WARNING: Could not recover jumptable at 0x0001bf3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_0001c1f0 + uVar19 * 4))();
    return;
  }
LAB_0001bf7a:
  ppcVar22 = DAT_0001c200 + 8;
  ppcVar20 = DAT_0001c200;
  do {
    if (*ppcVar20 != (code *)0x0) {
      (**ppcVar20)(&local_3c);
    }
    ppcVar20 = ppcVar20 + 1;
  } while (ppcVar22 != ppcVar20);
  FUN_0001b1fc(iVar8 + *(int *)(iVar8 + 0x70) * 0x1c,0,0x1c);
  if (*(int *)(iVar8 + 0x74) != 0) {
    iVar17 = *(int *)(iVar8 + 0x74) + -1;
    *(uint *)(iVar8 + 0x70) = *(int *)(iVar8 + 0x70) + 1U & 3;
    *(int *)(iVar8 + 0x74) = iVar17;
    if (iVar17 != 0) {
      FUN_0001bec8(0);
      return;
    }
  }
  *DAT_0001c1fc = *DAT_0001c1fc & 0xfb;
  return;
}


/* ---- FUN_0001c6c6 @ 0001c6c6 ---- */

void FUN_0001c6c6(undefined4 param_1,undefined4 param_2,short param_3)

{
  short sVar1;
  uint uVar2;
  code **ppcVar3;
  uint unaff_r4;
  int unaff_r5;
  code **ppcVar4;
  int unaff_r6;
  int iVar5;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  undefined4 uStack00000018;
  
  sVar1 = *(short *)(unaff_r5 + (unaff_r9 - unaff_r6) * 4 + 6);
  iVar5 = unaff_r7 + unaff_r8;
  *(short *)(iVar5 + 8) = param_3 + sVar1 + 3;
  *(short *)(iVar5 + 10) = *(short *)(iVar5 + 10) + (-3 - sVar1);
  iVar5 = DAT_0001c218;
  if (DAT_0001c20c == 0xf) {
    uStack00000018 = 0;
  }
  else {
    uStack00000018 = 0xf;
    if (unaff_r4 - 2 < 2) {
      uVar2 = (uint)*(byte *)(unaff_r5 + (unaff_r9 - unaff_r6) * 4 + 0x16);
      *(uint *)(DAT_0001c218 + 0x40) = *(int *)(DAT_0001c218 + 0x40) + uVar2;
      *(uint *)(iVar5 + 0x44) = *(int *)(iVar5 + 0x44) - uVar2;
    }
  }
  if (6 < unaff_r4) {
    ppcVar4 = DAT_0001c200 + 8;
    ppcVar3 = DAT_0001c200;
    do {
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(&stack0x00000014);
      }
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar4 != ppcVar3);
    FUN_0001b1fc(unaff_r5 + *(int *)(unaff_r5 + 0x70) * 0x1c,0,0x1c);
    if (*(int *)(unaff_r5 + 0x74) != 0) {
      iVar5 = *(int *)(unaff_r5 + 0x74) + -1;
      *(uint *)(unaff_r5 + 0x70) = *(int *)(unaff_r5 + 0x70) + 1U & 3;
      *(int *)(unaff_r5 + 0x74) = iVar5;
      if (iVar5 != 0) {
        FUN_0001bec8(0);
        return;
      }
    }
    *DAT_0001c1fc = *DAT_0001c1fc & 0xfb;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001bf3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_0001c1f0 + unaff_r4 * 4))();
  return;
}


/* ---- FUN_0001c6f0 @ 0001c6f0 ---- */

undefined4 FUN_0001c6f0(int *param_1,undefined2 *param_2,ushort *param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined uVar18;
  uint local_3c;
  int local_34;
  
  uVar15 = (uint)(ushort)param_2[4];
  puVar11 = *(undefined4 **)(param_2 + 2);
  if (uVar15 == 0) {
    if (param_3 != (ushort *)0x0) {
LAB_0001c73e:
      local_3c = (uint)*param_3;
      uVar6 = param_3[1];
      goto LAB_0001c748;
    }
    uVar14 = 3;
    uVar6 = 0;
  }
  else {
    uVar17 = 0;
    do {
      uVar8 = puVar11[uVar17 * 2] & 3;
      if ((puVar11[uVar17 * 2] & 3) != 0) {
        return 3;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar15);
    if (param_3 != (ushort *)0x0) goto LAB_0001c73e;
    uVar6 = 0;
    puVar11 = puVar11 + 1;
    do {
      uVar8 = uVar8 + 1;
      uVar6 = uVar6 + *(short *)puVar11;
      puVar11 = puVar11 + 2;
    } while (uVar8 < uVar15);
    uVar14 = uVar6 + 3;
    if (0xfd < uVar14) {
      return 9;
    }
  }
  if ((*DAT_0001c8d4 == '\0') &&
     (sVar7 = *(short *)(DAT_0001c8d4 + 10),
     (ushort)(uVar14 + sVar7 + *(short *)(DAT_0001c8d4 + 8)) < 0x100)) {
    iVar13 = 0;
    local_3c = 0;
  }
  else {
    if (DAT_0001c8d4[0x10] != '\0') {
      return 7;
    }
    sVar7 = *(short *)(DAT_0001c8d4 + 0x1a);
    if (0xff < (ushort)(uVar14 + sVar7 + *(short *)(DAT_0001c8d4 + 0x18))) {
      return 7;
    }
    iVar13 = 1;
    local_3c = 1;
  }
  *(ushort *)(DAT_0001c8d4 + iVar13 * 0x10 + 10) = uVar14 + sVar7;
  uVar15 = (uint)(ushort)param_2[4];
  puVar11 = *(undefined4 **)(param_2 + 2);
LAB_0001c748:
  iVar16 = *DAT_0001c8cc + 1;
  uVar18 = 0;
  *DAT_0001c8cc = iVar16;
  puVar3 = DAT_0001c8d8;
  iVar13 = DAT_0001c8d0;
  if (param_4 == 3) {
    local_34 = *param_1;
    uVar18 = 4;
  }
  uVar17 = *(uint *)(DAT_0001c8d0 + 0x74);
  if ((uVar17 < 4) && (uVar8 = DAT_0001c8d8[0x11], uVar8 <= 8 - uVar15)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar4 = (undefined *)((uVar17 + *(int *)(DAT_0001c8d0 + 0x70) & 3) * 0x1c + DAT_0001c8d0);
    *(ushort *)(puVar4 + 6) = uVar6;
    *(undefined2 *)(puVar4 + 8) = uVar1;
    *(undefined2 *)(puVar4 + 10) = 0;
    puVar4[0x10] = uVar18;
    *puVar4 = (char)param_4;
    *(short *)(puVar4 + 0x12) = (short)local_3c;
    *(undefined2 *)(puVar4 + 4) = uVar2;
    *(undefined2 *)(puVar4 + 0x14) = 3;
    *(int *)(puVar4 + 0xc) = iVar16;
    puVar4[0x16] = (char)uVar15;
    *(int *)(puVar4 + 0x18) = local_34;
    *(uint *)(iVar13 + 0x74) = uVar17 + 1;
    if (uVar15 != 0) {
      puVar5 = puVar11 + uVar15 * 2;
      puVar10 = puVar3 + (uVar8 + puVar3[0x10] & 7) * 2;
      do {
        uVar12 = puVar11[1];
        *puVar10 = *puVar11;
        puVar10[1] = uVar12;
        puVar9 = puVar10 + 2;
        if (puVar10 == puVar3 + 0xe) {
          puVar9 = puVar3;
        }
        puVar11 = puVar11 + 2;
        puVar10 = puVar9;
      } while (puVar11 != puVar5);
      puVar3[0x11] = uVar15 + puVar3[0x11];
    }
    if (param_1 != (int *)0x0) {
      param_1[1] = 0;
      *(undefined *)((int)param_1 + 10) = 0;
      iVar13 = DAT_0001c8dc;
      *param_1 = iVar16;
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar13 + 8);
    }
    uVar12 = 0;
    if (-1 < (int)((uint)*DAT_0001c8e0 << 0x1d)) {
      *DAT_0001c8e0 = *DAT_0001c8e0 | 4;
      FUN_0001bec8(0);
    }
  }
  else {
    uVar12 = 8;
    *(ushort *)(DAT_0001c8d4 + local_3c * 0x10 + 10) =
         *(short *)(DAT_0001c8d4 + local_3c * 0x10 + 10) + (-3 - uVar6);
  }
  return uVar12;
}


/* ---- FUN_0001c8e4 @ 0001c8e4 ---- */

undefined4 FUN_0001c8e4(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  pbVar2 = DAT_0001c900;
  bVar1 = *DAT_0001c900;
  if (bVar1 == 8) {
    uVar3 = 0xc;
  }
  else {
    *(undefined4 *)((uint)bVar1 * 4 + DAT_0001c904) = param_1;
    uVar3 = 0;
    *pbVar2 = bVar1 + 1;
  }
  return uVar3;
}


/* ---- FUN_0001c908 @ 0001c908 ---- */

undefined4 FUN_0001c908(void)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int **ppiVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  code **ppcVar17;
  uint uVar18;
  code **ppcVar19;
  undefined uVar20;
  int **ppiVar21;
  uint uVar22;
  int *piVar23;
  undefined auStack_3c [24];
  
  FUN_0001b1fc(auStack_3c,0,0x14);
  bVar1 = *DAT_0001cbc4;
  if ((int)((uint)bVar1 << 0x1e) < 0) {
    ppcVar19 = DAT_0001cbe8 + 8;
    ppcVar17 = DAT_0001cbe8;
    do {
      if (*ppcVar17 != (code *)0x0) {
        (**ppcVar17)(auStack_3c);
      }
      ppcVar17 = ppcVar17 + 1;
    } while (ppcVar19 != ppcVar17);
  }
  else if ((bVar1 & 1) == 0) {
    uVar18 = 0;
    *DAT_0001cbc4 = bVar1 | 1;
    FUN_0001d35c();
    ppiVar4 = DAT_0001cbd4;
    uVar12 = DAT_0001cbcc;
    uVar11 = *DAT_0001cbc8;
    piVar16 = *DAT_0001cbd0;
    piVar7 = piVar16 + 0x100;
    piVar23 = piVar16 + 0x400;
    uVar22 = 0;
    bVar3 = false;
    bVar2 = false;
    do {
      iVar13 = DAT_0001cbec;
      piVar6 = piVar16;
      if (*piVar16 == DAT_0001cbd8) {
        if (piVar16[1] == DAT_0001cbdc) {
          iVar9 = uVar18 * 0x10;
          *(undefined *)(DAT_0001cbec + iVar9) = 0;
          iVar13 = iVar13 + iVar9;
          *(int **)(iVar13 + 4) = piVar16;
          piVar6 = (int *)((int)piVar7 + DAT_0001cbe4);
          uVar14 = 2;
          *(undefined2 *)(iVar13 + 8) = 2;
          uVar20 = 0;
          do {
            if (*piVar6 == -1) break;
            if ((*(ushort *)(piVar6 + 1) == uVar12) || (*(short *)piVar6 == 0)) {
              uVar20 = 1;
            }
            else if (uVar11 < (uint)piVar6[2]) {
              bVar3 = true;
              uVar11 = piVar6[2];
            }
            iVar10 = *(ushort *)((int)piVar6 + 2) + 3;
            uVar15 = uVar14 + iVar10;
            uVar14 = uVar15 & 0xffff;
            piVar6 = piVar6 + iVar10;
            *(short *)(iVar13 + 8) = (short)uVar15;
          } while (piVar6 < piVar7);
          *(undefined *)(iVar9 + DAT_0001cbec + 0xe) = uVar20;
          uVar22 = uVar22 | 2;
          uVar18 = uVar18 + 1 & 0xffff;
        }
        else if (piVar16[1] == DAT_0001cbe0) {
          ppiVar21 = DAT_0001cbd4;
          if (bVar2) {
            *(undefined *)(DAT_0001cbec + uVar18 * 0x10) = 2;
            ppiVar21 = DAT_0001cbd4;
            iVar13 = uVar18 * 0x10 + iVar13;
            *(int **)(iVar13 + 4) = *DAT_0001cbd4;
            *(undefined2 *)(iVar13 + 8) = 2;
            uVar18 = uVar18 + 1 & 0xffff;
          }
          *ppiVar21 = piVar16;
          piVar6 = (int *)((int)piVar7 + DAT_0001cbe4);
          *(undefined2 *)(ppiVar21 + 1) = 2;
          uVar14 = 2;
          do {
            if (*piVar6 == -1) break;
            if (((*(ushort *)(piVar6 + 1) != uVar12) && (*(short *)piVar6 != 0)) &&
               (uVar11 < (uint)piVar6[2])) {
              bVar3 = true;
              uVar11 = piVar6[2];
            }
            iVar13 = *(ushort *)((int)piVar6 + 2) + 3;
            uVar15 = uVar14 + iVar13;
            uVar14 = uVar15 & 0xffff;
            piVar6 = piVar6 + iVar13;
            *(short *)(ppiVar21 + 1) = (short)uVar15;
          } while (piVar6 < piVar7);
          uVar22 = uVar22 | (-(uint)(uVar14 == 2) & 0xfffffffc) + 8;
        }
        else {
LAB_0001ca32:
          *(undefined *)(uVar18 * 0x10 + DAT_0001cbec) = 3;
          uVar18 = uVar18 + 1 & 0xffff;
        }
      }
      else {
        do {
          if (*piVar6 != -1) goto LAB_0001ca32;
          piVar6 = piVar6 + 1;
        } while (piVar7 != piVar6);
        if (*ppiVar4 == (int *)0x0) {
          *ppiVar4 = piVar16;
          *(undefined2 *)(ppiVar4 + 1) = 2;
          bVar2 = true;
        }
        else {
          *(undefined *)(DAT_0001cbec + uVar18 * 0x10) = 2;
          iVar13 = uVar18 * 0x10 + iVar13;
          *(int **)(iVar13 + 4) = piVar16;
          *(undefined2 *)(iVar13 + 8) = 2;
          *(short *)(DAT_0001cbfc + 2) = (short)uVar18;
          uVar18 = uVar18 + 1 & 0xffff;
        }
        uVar22 = uVar22 | 1;
      }
      piVar7 = piVar7 + 0x100;
      piVar16 = piVar16 + 0x100;
    } while (piVar7 != piVar23);
    if (bVar3) {
      *DAT_0001cbc8 = uVar11;
    }
    iVar13 = DAT_0001cbf4;
    if ((uVar22 & 0xff) < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x0001ca68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(DAT_0001cbf0 + (uVar22 & 0xff) * 4))();
      return uVar5;
    }
    uVar12 = *(uint *)(DAT_0001cbf4 + 0x74);
    if ((uVar12 < 4) && (*(uint *)(DAT_0001cbf8 + 0x44) < 9)) {
      puVar8 = (undefined *)(DAT_0001cbf4 + (uVar12 + *(int *)(DAT_0001cbf4 + 0x70) & 3) * 0x1c);
      *puVar8 = 1;
      puVar8[4] = bVar1 & 1;
      *(uint *)(iVar13 + 0x74) = uVar12 + 1;
    }
    if (-1 < (int)((uint)*DAT_0001cbc4 << 0x1d)) {
      *DAT_0001cbc4 = *DAT_0001cbc4 | 4;
      FUN_0001bec8(0);
    }
  }
  return 0;
}


/* ---- FUN_0001cc00 @ 0001cc00 ---- */

undefined4 FUN_0001cc00(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort local_12 [3];
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    uVar2 = 5;
  }
  else {
    iVar1 = FUN_0001bddc(param_1,local_12);
    uVar2 = 10;
    if (iVar1 != 0) {
      iVar1 = DAT_0001cc4c + (uint)local_12[0] * 0x10;
      uVar2 = *(undefined4 *)(param_1 + 4);
      *(short *)(iVar1 + 0xc) = *(short *)(iVar1 + 0xc) + 1;
      *param_2 = uVar2;
      uVar2 = 0;
      param_2[1] = *(int *)(param_1 + 4) + 0xc;
      *(undefined *)(param_1 + 10) = 1;
    }
  }
  return uVar2;
}


/* ---- FUN_0001cc50 @ 0001cc50 ---- */

undefined4 FUN_0001cc50(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  ushort local_a;
  
  if (param_1 == 0) {
    uVar3 = 5;
  }
  else {
    iVar2 = FUN_0001bddc(param_1,&local_a);
    if (iVar2 == 0) {
      uVar3 = 10;
    }
    else {
      iVar2 = DAT_0001cc98 + (uint)local_a * 0x10;
      sVar1 = *(short *)(iVar2 + 0xc);
      if ((sVar1 == 0) || (*(char *)(param_1 + 10) == '\0')) {
        uVar3 = 6;
      }
      else {
        *(short *)(iVar2 + 0xc) = sVar1 + -1;
        uVar3 = 0;
        *(undefined *)(param_1 + 10) = 0;
      }
    }
  }
  return uVar3;
}


/* ---- FUN_0001cc9c @ 0001cc9c ---- */

undefined4 FUN_0001cc9c(undefined2 *param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  short sVar5;
  
  if ((int)((uint)*DAT_0001cd08 << 0x1e) < 0) {
    if (param_1 == (undefined2 *)0x0) {
      uVar1 = 5;
    }
    else {
      uVar3 = param_2 + 3;
      if (uVar3 < 0xfe) {
        if ((*DAT_0001cd0c == '\0') &&
           (sVar5 = *(short *)(DAT_0001cd0c + 10),
           (ushort)(uVar3 + sVar5 + *(short *)(DAT_0001cd0c + 8)) < 0x100)) {
          uVar4 = 0;
          iVar2 = 0;
        }
        else {
          if (DAT_0001cd0c[0x10] != '\0') {
            return 7;
          }
          sVar5 = *(short *)(DAT_0001cd0c + 0x1a);
          if (0xff < (ushort)(uVar3 + sVar5 + *(short *)(DAT_0001cd0c + 0x18))) {
            return 7;
          }
          uVar4 = 1;
          iVar2 = 1;
        }
        *(ushort *)(DAT_0001cd0c + iVar2 * 0x10 + 10) = uVar3 + sVar5;
        uVar1 = 0;
        *param_1 = uVar4;
        param_1[1] = param_2;
      }
      else {
        uVar1 = 9;
      }
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


/* ---- FUN_0001cd10 @ 0001cd10 ---- */

undefined4 FUN_0001cd10(ushort *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((int)((uint)*DAT_0001cd50 << 0x1e) < 0) {
    if (param_1 == (ushort *)0x0) {
      uVar1 = 5;
    }
    else {
      if (*param_1 < 3) {
        iVar2 = DAT_0001cd54 + (uint)*param_1 * 0x10;
        iVar3 = (uint)*(ushort *)(iVar2 + 10) - (uint)param_1[1];
        if (-1 < iVar3 + -3) {
          *(short *)(iVar2 + 10) = (short)iVar3 + -3;
          *param_1 = 0;
          param_1[1] = 0;
          return 0;
        }
      }
      uVar1 = 4;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


/* ---- FUN_0001cd58 @ 0001cd58 ---- */

undefined4 FUN_0001cd58(undefined4 param_1,ushort *param_2)

{
  undefined4 uVar1;
  
  if ((int)((uint)*DAT_0001cd8c << 0x1e) < 0) {
    if (param_2 == (ushort *)0x0) {
      uVar1 = 5;
    }
    else if ((*param_2 == DAT_0001cd90) || (param_2[1] == 0)) {
      uVar1 = 4;
    }
    else {
      uVar1 = FUN_0001c6f0(param_1,param_2,0,2);
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


/* ---- FUN_0001cd94 @ 0001cd94 ---- */

undefined4 FUN_0001cd94(undefined4 param_1,ushort *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    if (-1 < (int)((uint)*DAT_0001cdc8 << 0x1e)) {
      return 2;
    }
    if (param_2 != (ushort *)0x0) {
      if ((*param_2 != DAT_0001cdcc) && (param_2[1] != 0)) {
        uVar1 = FUN_0001c6f0();
        return uVar1;
      }
      return 4;
    }
  }
  return 5;
}


/* ---- FUN_0001cdd0 @ 0001cdd0 ---- */

undefined4 FUN_0001cdd0(int param_1,ushort *param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (-1 < (int)((uint)*DAT_0001ce08 << 0x1e)) {
      return 2;
    }
    if (param_2 != (ushort *)0x0) {
      if ((*param_2 != DAT_0001ce0c) && (param_2[1] != 0)) {
        uVar1 = FUN_0001c6f0(param_1,param_2,0,3);
        return uVar1;
      }
      return 4;
    }
  }
  return 5;
}


/* ---- FUN_0001ce10 @ 0001ce10 ---- */

undefined4 FUN_0001ce10(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  
  iVar3 = DAT_0001ce78;
  pbVar2 = DAT_0001ce70;
  bVar1 = *DAT_0001ce70;
  if ((int)((uint)bVar1 << 0x1e) < 0) {
    if (param_1 == DAT_0001ce74) {
      uVar6 = 4;
    }
    else {
      uVar6 = 8;
      uVar4 = *(uint *)(DAT_0001ce78 + 0x74);
      if ((uVar4 < 4) && (*(uint *)(DAT_0001ce7c + 0x44) < 9)) {
        puVar5 = (undefined *)(DAT_0001ce78 + (uVar4 + *(int *)(DAT_0001ce78 + 0x70) & 3) * 0x1c);
        *puVar5 = 5;
        puVar5[4] = 1;
        *(short *)(puVar5 + 6) = (short)param_1;
        uVar6 = 0;
        *(uint *)(iVar3 + 0x74) = uVar4 + 1;
        if (-1 < (int)((uint)bVar1 << 0x1d)) {
          *pbVar2 = bVar1 | 4;
          FUN_0001bec8(0);
        }
      }
    }
  }
  else {
    uVar6 = 2;
  }
  return uVar6;
}


/* ---- FUN_0001ce80 @ 0001ce80 ---- */

undefined4 FUN_0001ce80(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = DAT_0001cee0;
  pbVar2 = DAT_0001cedc;
  bVar1 = *DAT_0001cedc;
  if ((int)((uint)bVar1 << 0x1e) < 0) {
    uVar5 = 8;
    uVar4 = *(uint *)(DAT_0001cee0 + 0x74);
    if ((uVar4 < 4) && (*(uint *)(DAT_0001cee4 + 0x44) < 9)) {
      *(undefined *)((uVar4 + *(int *)(DAT_0001cee0 + 0x70) & 3) * 0x1c + DAT_0001cee0) = 6;
      *(uint *)(iVar3 + 0x74) = uVar4 + 1;
      if (*DAT_0001cee8 != '\0') {
        DAT_0001cee8[0xc] = '\x01';
      }
      uVar5 = 0;
      if (-1 < (int)((uint)bVar1 << 0x1d)) {
        *pbVar2 = bVar1 | 4;
        FUN_0001bec8(0);
      }
    }
  }
  else {
    uVar5 = 2;
  }
  return uVar5;
}


/* ---- FUN_0001ceec @ 0001ceec ---- */

undefined4 FUN_0001ceec(uint param_1,uint param_2,int *param_3,int **param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  uVar1 = DAT_0001cfbc;
  if ((int)((uint)*DAT_0001cfb4 << 0x1e) < 0) {
    if ((param_3 == (int *)0x0) || (param_4 == (int **)0x0)) {
      uVar2 = 5;
    }
    else {
      uVar3 = (uint)*(ushort *)(param_4 + 1);
      if (uVar3 < 2) {
        pcVar4 = (char *)(DAT_0001cfb8 + uVar3 * 0x10);
        do {
          if (*pcVar4 == '\0') {
            piVar6 = *param_4;
            do {
              if (piVar6 == (int *)0x0) {
                iVar7 = *(int *)(pcVar4 + 4);
                piVar6 = (int *)(iVar7 + 8);
              }
              else {
                iVar7 = *(int *)(pcVar4 + 4);
                piVar6 = piVar6 + *(ushort *)((int)piVar6 + 2) + 3;
              }
              while( true ) {
                if (((int *)(iVar7 + 0x400) <= piVar6) || (*piVar6 == -1)) {
                  *param_4 = (int *)0x0;
                  goto LAB_0001cf26;
                }
                if ((*(ushort *)(piVar6 + 1) != uVar1) && (*(ushort *)piVar6 != 0)) break;
                piVar6 = piVar6 + *(ushort *)((int)piVar6 + 2) + 3;
              }
              *param_4 = piVar6;
              if ((*(ushort *)(piVar6 + 1) == param_1) && (*(ushort *)piVar6 == param_2)) {
                *param_3 = piVar6[2];
                param_3[1] = (int)*param_4;
                *(undefined2 *)(param_3 + 2) = *(undefined2 *)(DAT_0001cfc0 + 8);
                return 0;
              }
            } while( true );
          }
LAB_0001cf26:
          uVar5 = uVar3 + 1;
          uVar3 = 1;
          *(short *)(param_4 + 1) = (short)uVar5;
          pcVar4 = pcVar4 + 0x10;
        } while ((uVar5 & 0xffff) != 2);
      }
      uVar2 = 10;
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


/* ---- FUN_0001cfc4 @ 0001cfc4 ---- */

undefined4 FUN_0001cfc4(uint param_1,int *param_2,int **param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  
  uVar1 = DAT_0001d080;
  if ((int)((uint)*DAT_0001d078 << 0x1e) < 0) {
    if ((param_2 == (int *)0x0) || (param_3 == (int **)0x0)) {
      uVar4 = 5;
    }
    else {
      uVar2 = (uint)*(ushort *)(param_3 + 1);
      if (uVar2 < 2) {
        pcVar7 = (char *)(DAT_0001d07c + uVar2 * 0x10);
        do {
          if (*pcVar7 == '\0') {
            piVar5 = *param_3;
            do {
              if (piVar5 == (int *)0x0) {
                iVar6 = *(int *)(pcVar7 + 4);
                piVar5 = (int *)(iVar6 + 8);
              }
              else {
                iVar6 = *(int *)(pcVar7 + 4);
                piVar5 = piVar5 + *(ushort *)((int)piVar5 + 2) + 3;
              }
              while( true ) {
                if (((int *)(iVar6 + 0x400) <= piVar5) || (*piVar5 == -1)) {
                  *param_3 = (int *)0x0;
                  goto LAB_0001cff6;
                }
                if ((*(ushort *)(piVar5 + 1) != uVar1) && (*(ushort *)piVar5 != 0)) break;
                piVar5 = piVar5 + *(ushort *)((int)piVar5 + 2) + 3;
              }
              *param_3 = piVar5;
              if (*(ushort *)piVar5 == param_1) {
                *param_2 = piVar5[2];
                param_2[1] = (int)*param_3;
                *(undefined2 *)(param_2 + 2) = *(undefined2 *)(DAT_0001d084 + 8);
                return 0;
              }
            } while( true );
          }
LAB_0001cff6:
          uVar3 = uVar2 + 1;
          *(short *)(param_3 + 1) = (short)uVar3;
          uVar2 = 1;
          pcVar7 = pcVar7 + 0x10;
        } while ((uVar3 & 0xffff) != 2);
      }
      uVar4 = 10;
    }
  }
  else {
    uVar4 = 2;
  }
  return uVar4;
}


/* ---- FUN_0001d088 @ 0001d088 ---- */

undefined4 FUN_0001d088(uint param_1,int *param_2,int **param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  
  uVar1 = DAT_0001d144;
  if ((int)((uint)*DAT_0001d13c << 0x1e) < 0) {
    if ((param_2 == (int *)0x0) || (param_3 == (int **)0x0)) {
      uVar4 = 5;
    }
    else {
      uVar2 = (uint)*(ushort *)(param_3 + 1);
      if (uVar2 < 2) {
        pcVar7 = (char *)(DAT_0001d140 + uVar2 * 0x10);
        do {
          if (*pcVar7 == '\0') {
            piVar5 = *param_3;
            do {
              if (piVar5 == (int *)0x0) {
                iVar6 = *(int *)(pcVar7 + 4);
                piVar5 = (int *)(iVar6 + 8);
              }
              else {
                iVar6 = *(int *)(pcVar7 + 4);
                piVar5 = piVar5 + *(ushort *)((int)piVar5 + 2) + 3;
              }
              while( true ) {
                if (((int *)(iVar6 + 0x400) <= piVar5) || (*piVar5 == -1)) {
                  *param_3 = (int *)0x0;
                  goto LAB_0001d0ba;
                }
                if ((*(ushort *)(piVar5 + 1) != uVar1) && (*(short *)piVar5 != 0)) break;
                piVar5 = piVar5 + *(ushort *)((int)piVar5 + 2) + 3;
              }
              *param_3 = piVar5;
              if (*(ushort *)(piVar5 + 1) == param_1) {
                *param_2 = piVar5[2];
                param_2[1] = (int)*param_3;
                *(undefined2 *)(param_2 + 2) = *(undefined2 *)(DAT_0001d148 + 8);
                return 0;
              }
            } while( true );
          }
LAB_0001d0ba:
          uVar3 = uVar2 + 1;
          *(short *)(param_3 + 1) = (short)uVar3;
          uVar2 = 1;
          pcVar7 = pcVar7 + 0x10;
        } while ((uVar3 & 0xffff) != 2);
      }
      uVar4 = 10;
    }
  }
  else {
    uVar4 = 2;
  }
  return uVar4;
}


/* ---- FUN_0001d14c @ 0001d14c ---- */

undefined4 FUN_0001d14c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) {
    uVar1 = 5;
  }
  else {
    uVar1 = 0;
    *param_2 = *param_1;
  }
  return uVar1;
}


/* ---- FUN_0001d160 @ 0001d160 ---- */

undefined4 FUN_0001d160(short *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  short sVar4;
  ushort uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  int iVar12;
  short sVar13;
  
  if ((int)((uint)*DAT_0001d280 << 0x1e) < 0) {
    if (param_1 == (short *)0x0) {
      uVar2 = 5;
    }
    else {
      FUN_0001b1fc(param_1,0,0xe);
      uVar1 = DAT_0001d288;
      sVar10 = *param_1;
      sVar13 = param_1[3];
      sVar9 = param_1[4];
      uVar11 = param_1[5];
      iVar12 = DAT_0001d284 + 0x20;
      iVar8 = DAT_0001d284;
      do {
        sVar4 = *(short *)(iVar8 + 8) + *(short *)(iVar8 + 10);
        sVar10 = *(short *)(iVar8 + 0xc) + sVar10;
        *param_1 = sVar10;
        sVar9 = sVar4 + sVar9;
        sVar13 = *(short *)(iVar8 + 10) + sVar13;
        param_1[3] = sVar13;
        uVar5 = 0x100 - sVar4;
        param_1[4] = sVar9;
        if (uVar11 < uVar5) {
          param_1[5] = uVar5;
          uVar11 = uVar5;
        }
        while( true ) {
          iVar7 = *(int *)(iVar8 + 4);
          piVar6 = (int *)(iVar7 + 8);
          piVar3 = (int *)(iVar7 + 0x400);
          if (piVar3 <= piVar6) break;
          while( true ) {
            while( true ) {
              if (*piVar6 == -1) goto LAB_0001d218;
              if ((*(ushort *)(piVar6 + 1) != uVar1) && (*(short *)piVar6 != 0)) break;
              piVar6 = piVar6 + *(ushort *)((int)piVar6 + 2) + 3;
              if (piVar3 <= piVar6) goto LAB_0001d218;
            }
            param_1[1] = param_1[1] + 1;
            if (piVar6 == (int *)0x0) break;
            iVar7 = *(int *)(iVar8 + 4);
            piVar6 = piVar6 + *(ushort *)((int)piVar6 + 2) + 3;
            piVar3 = (int *)(iVar7 + 0x400);
            if (piVar3 <= piVar6) goto LAB_0001d218;
          }
        }
LAB_0001d218:
        piVar6 = (int *)(iVar7 + 8);
        do {
          if (*piVar6 == -1) break;
          if ((*(ushort *)(piVar6 + 1) == uVar1) || (*(short *)piVar6 == 0)) {
            param_1[2] = param_1[2] + 1;
            param_1[6] = param_1[6] + 3 + *(short *)((int)piVar6 + 2);
            piVar3 = (int *)(*(int *)(iVar8 + 4) + 0x400);
          }
          piVar6 = piVar6 + *(ushort *)((int)piVar6 + 2) + 3;
        } while (piVar6 < piVar3);
        iVar8 = iVar8 + 0x10;
      } while (iVar12 != iVar8);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


/* ---- FUN_0001d28c @ 0001d28c ---- */

void FUN_0001d28c(void)

{
  software_interrupt(0x29);
  return;
}


/* ---- FUN_0001d290 @ 0001d290 ---- */

void FUN_0001d290(void)

{
  software_interrupt(0x28);
  return;
}


/* ---- FUN_0001d294 @ 0001d294 ---- */

void FUN_0001d294(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  
  iVar1 = DAT_0001d354;
  if (*(int *)(DAT_0001d354 + 100) == 0) {
    return;
  }
  iVar5 = *(int *)(DAT_0001d354 + 0x60);
  iVar3 = DAT_0001d354 + iVar5 * 0x18;
  if (*(char *)(iVar3 + 8) == '\x01') {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x14) - (uint)*(ushort *)(iVar3 + 0x16);
    if ((int)uVar2 < 0x100) {
      uVar2 = uVar2 & 0xffff;
    }
    else {
      uVar2 = 0x100;
    }
    iVar4 = DAT_0001d354 + iVar5 * 0x18;
    iVar3 = (uint)*(ushort *)(iVar3 + 0x16) * 4;
    iVar3 = FUN_0001d28c(*(int *)(iVar4 + 0x10) + iVar3,*(int *)(iVar4 + 0xc) + iVar3,uVar2);
  }
  else {
    if (*(char *)(iVar3 + 8) != '\x02') goto LAB_0001d2b4;
    iVar3 = FUN_0001d290(*(undefined2 *)(iVar3 + 0xc));
  }
  if (iVar3 == 0x11) {
    *DAT_0001d358 = *DAT_0001d358 & 0xfd | 4;
    return;
  }
  if (iVar3 == 0) {
    return;
  }
LAB_0001d2b4:
  FUN_0001b1fc(local_20,0,0x10);
  iVar3 = iVar1 + iVar5 * 0x18;
  if (*(char *)(iVar3 + 8) == '\x01') {
    local_20[0] = 0;
    local_18 = *(undefined4 *)(iVar3 + 0x10);
    local_14 = *(undefined2 *)(iVar3 + 0x14);
  }
  else if (*(char *)(iVar3 + 8) == '\x02') {
    local_20[0] = 1;
    local_18 = CONCAT22(*(short *)(iVar3 + 0xc),*(short *)(iVar3 + 0xc) - *(short *)(iVar3 + 0xe));
  }
  local_1c = *(undefined4 *)(iVar1 + iVar5 * 0x18 + 4);
  (**(code **)(*(int *)(iVar1 + iVar5 * 0x18) + 8))(local_20,9);
  return;
}


/* ---- FUN_0001d35c @ 0001d35c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001d35c(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  
  piVar4 = DAT_0001d418;
  pbVar3 = DAT_0001d414;
  iVar10 = *(int *)(DAT_0001d410 + 0x14);
  if (iVar10 == -1) {
    iVar10 = _DAT_10000014 << 10;
  }
  bVar2 = *DAT_0001d414;
  if (-1 < (int)((uint)bVar2 << 0x1f)) {
    uVar9 = (uint)(DAT_0001d41c - (int)DAT_0001d418) >> 4;
    if (uVar9 != 0) {
      piVar8 = DAT_0001d418;
      uVar6 = uVar9;
      do {
        if (*piVar8 != 0) {
          uVar6 = uVar6 - (piVar8[1] != 0);
        }
        piVar8 = piVar8 + 4;
      } while (piVar8 != DAT_0001d418 + uVar9 * 4);
      if (uVar6 != 0) {
        uVar11 = 0;
        do {
          uVar7 = 0;
          uVar5 = uVar11 & 0xff;
          piVar8 = piVar4;
          bVar12 = 0;
          do {
            while (((*piVar8 == 0 || (piVar8[1] == 0)) &&
                   (pbVar1 = (byte *)((int)piVar8 + 0xd), bVar12 < *pbVar1))) {
              uVar5 = uVar7 & 0xff;
              uVar7 = uVar7 + 1;
              piVar8 = piVar8 + 4;
              bVar12 = *pbVar1;
              if (uVar9 == uVar7) goto LAB_0001d3e4;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar9 != uVar7);
LAB_0001d3e4:
          piVar8 = piVar4 + uVar5 * 4;
          piVar8[1] = iVar10;
          iVar10 = iVar10 + (uint)*(byte *)(piVar8 + 3) * -0x400;
          uVar11 = uVar11 + 1;
          *piVar8 = iVar10;
        } while (uVar11 != uVar6);
      }
    }
    *pbVar3 = bVar2 | 1;
  }
  return 0;
}


/* ---- FUN_0001d420 @ 0001d420 ---- */

byte FUN_0001d420(uint *param_1,uint param_2,uint param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  
  iVar3 = DAT_0001d50c;
  pbVar2 = DAT_0001d500;
  if ((int)((uint)*DAT_0001d500 << 0x1f) < 0) {
    if (param_1 == (uint *)0x0) {
      bVar6 = 2;
    }
    else {
      bVar6 = 2;
      if ((DAT_0001d504 <= param_1) && (param_1 < DAT_0001d508)) {
        if ((param_3 == 0) || (param_2 == 0)) {
          bVar6 = 3;
        }
        else {
          bVar6 = 6;
          if (((param_3 | param_2) & 3) == 0) {
            if ((param_2 < *param_1) || (param_1[1] < param_2 + param_4 * 4)) {
              bVar6 = 5;
            }
            else if (param_4 == 0) {
              bVar6 = 4;
            }
            else {
              iVar4 = *(int *)(DAT_0001d50c + 100);
              if (iVar4 == 4) {
                bVar6 = 7;
              }
              else {
                uVar5 = iVar4 + *(int *)(DAT_0001d50c + 0x60);
                if (3 < uVar5) {
                  uVar5 = uVar5 - 4;
                }
                *(int *)(DAT_0001d50c + 100) = iVar4 + 1;
                iVar4 = iVar3 + uVar5 * 0x18;
                FUN_0001b1fc(iVar4,0,0x18);
                *(undefined4 *)(iVar4 + 4) = param_5;
                *(uint **)(iVar3 + uVar5 * 0x18) = param_1;
                *(undefined *)(iVar4 + 8) = 1;
                *(uint *)(iVar4 + 0xc) = param_3;
                *(uint *)(iVar4 + 0x10) = param_2;
                *(short *)(iVar4 + 0x14) = (short)param_4;
                bVar1 = *pbVar2;
                bVar6 = bVar1 & 6;
                if ((bVar1 & 6) == 0) {
                  *pbVar2 = bVar1 | 2;
                  FUN_0001d294();
                }
                else {
                  bVar6 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    bVar6 = 1;
  }
  return bVar6;
}


/* ---- FUN_0001d510 @ 0001d510 ---- */

byte FUN_0001d510(uint *param_1,uint param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  iVar3 = DAT_0001d5f8;
  pbVar2 = DAT_0001d5ec;
  if ((int)((uint)*DAT_0001d5ec << 0x1f) < 0) {
    if (param_1 == (uint *)0x0) {
      bVar6 = 2;
    }
    else {
      bVar6 = 2;
      if ((DAT_0001d5f0 <= param_1) && (param_1 < DAT_0001d5f4)) {
        if (param_2 == 0) {
          bVar6 = 3;
        }
        else if ((param_2 & 0x3ff) == 0) {
          if ((param_2 < *param_1) || (param_1[1] < param_2 + param_3 * 0x400)) {
            bVar6 = 5;
          }
          else if (param_3 == 0) {
            bVar6 = 4;
          }
          else {
            iVar4 = *(int *)(DAT_0001d5f8 + 100);
            if (iVar4 == 4) {
              bVar6 = 7;
            }
            else {
              uVar5 = iVar4 + *(int *)(DAT_0001d5f8 + 0x60);
              if (3 < uVar5) {
                uVar5 = uVar5 - 4;
              }
              iVar7 = DAT_0001d5f8 + uVar5 * 0x18;
              *(int *)(DAT_0001d5f8 + 100) = iVar4 + 1;
              FUN_0001b1fc(iVar7,0,0x18);
              *(uint **)(iVar3 + uVar5 * 0x18) = param_1;
              *(undefined *)(iVar7 + 8) = 2;
              *(short *)(iVar7 + 0x10) = (short)param_3;
              *(undefined4 *)(iVar7 + 4) = param_4;
              *(short *)(iVar7 + 0xc) = (short)(param_2 >> 10);
              bVar1 = *pbVar2;
              bVar6 = bVar1 & 6;
              if ((bVar1 & 6) == 0) {
                *pbVar2 = bVar1 | 2;
                FUN_0001d294();
              }
              else {
                bVar6 = 0;
              }
            }
          }
        }
        else {
          bVar6 = 6;
        }
      }
    }
  }
  else {
    bVar6 = 1;
  }
  return bVar6;
}


/* ---- FUN_0001d5fc @ 0001d5fc ---- */

undefined4 FUN_0001d5fc(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 3;
  }
  else {
    *param_1 = *(undefined4 *)(DAT_0001d610 + 100);
    uVar1 = 0;
  }
  return uVar1;
}


/* ---- FUN_0001d614 @ 0001d614 ---- */

void FUN_0001d614(int param_1)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  short sVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  
  pbVar5 = DAT_0001d8e0;
  iVar4 = DAT_0001d8dc;
  pbVar3 = DAT_0001d8d8;
  bVar1 = *DAT_0001d8d8;
  iVar12 = *(int *)(DAT_0001d8dc + 0x60);
  if ((int)((uint)bVar1 << 0x1e) < 0) {
    if (param_1 != 2) {
      if ((param_1 != 3) ||
         (bVar1 = *DAT_0001d8e0, *DAT_0001d8e0 = bVar1 + 1, (byte)(bVar1 + 1) < 0xb))
      goto LAB_0001d646;
      *pbVar5 = 0;
      FUN_0001b1fc(local_30,0,0x10);
      iVar13 = iVar4 + iVar12 * 0x18;
      if (*(char *)(iVar13 + 8) == '\x01') {
        local_30[0] = 0;
        local_28 = *(undefined4 *)(iVar13 + 0x10);
        local_24 = *(undefined2 *)(iVar13 + 0x14);
      }
      else if (*(char *)(iVar13 + 8) == '\x02') {
        local_30[0] = 1;
        local_28 = CONCAT22(*(short *)(iVar13 + 0xc),
                            *(short *)(iVar13 + 0xc) - *(short *)(iVar13 + 0xe));
      }
      uVar7 = 8;
      local_2c = *(undefined4 *)(iVar4 + iVar12 * 0x18 + 4);
      pcVar11 = *(code **)(*(int *)(iVar4 + iVar12 * 0x18) + 8);
LAB_0001d76e:
      (*pcVar11)(local_30,uVar7);
      iVar13 = *(int *)(iVar4 + 100) + -1;
      *(int *)(iVar4 + 100) = iVar13;
      if (iVar13 == 0) {
        *pbVar3 = *pbVar3 & 0xfd;
        iVar12 = *(int *)(iVar4 + 0x60) + 1;
        *(int *)(iVar4 + 0x60) = iVar12;
        if (iVar12 != 4) {
          return;
        }
LAB_0001d788:
        iVar12 = 0;
        *(undefined4 *)(iVar4 + 0x60) = 0;
        goto LAB_0001d648;
      }
      iVar12 = *(int *)(iVar4 + 0x60) + 1;
      *(int *)(iVar4 + 0x60) = iVar12;
      if (iVar12 == 4) goto LAB_0001d788;
LAB_0001d64c:
      iVar13 = iVar12 * 2;
      iVar14 = iVar4 + iVar12 * 0x18;
      cVar8 = *(char *)(iVar14 + 8);
      if (cVar8 == '\x01') goto LAB_0001d6d4;
LAB_0001d65a:
      if (cVar8 != '\x02') goto LAB_0001d660;
LAB_0001d7b0:
      iVar14 = FUN_0001d290(*(undefined2 *)(iVar4 + (iVar13 + iVar12) * 8 + 0xc));
      goto joined_r0x0001d6fc;
    }
    iVar13 = iVar12 * 2;
    *DAT_0001d8e0 = 0;
    iVar14 = iVar12 * 0x18 + iVar4;
    if (*(char *)(iVar14 + 8) == '\x01') {
      uVar2 = *(ushort *)(iVar14 + 0x14);
      if ((int)((uint)uVar2 - (uint)*(ushort *)(iVar14 + 0x16)) < 0x100) {
        *(ushort *)(iVar14 + 0x16) = uVar2;
LAB_0001d7e0:
        FUN_0001b1fc(local_30,0,0x10);
        iVar13 = iVar4 + iVar12 * 0x18;
        if (*(char *)(iVar13 + 8) == '\x01') {
          local_30[0] = 0;
          local_28 = *(undefined4 *)(iVar13 + 0x10);
          local_24 = *(undefined2 *)(iVar13 + 0x14);
        }
        else if (*(char *)(iVar13 + 8) == '\x02') {
          local_30[0] = 1;
          local_28 = CONCAT22(*(short *)(iVar13 + 0xc),
                              *(short *)(iVar13 + 0xc) - *(short *)(iVar13 + 0xe));
        }
LAB_0001d80c:
        local_2c = *(undefined4 *)(iVar4 + iVar12 * 0x18 + 4);
        uVar7 = 0;
        pcVar11 = *(code **)(*(int *)(iVar4 + iVar12 * 0x18) + 8);
        goto LAB_0001d76e;
      }
      uVar9 = *(ushort *)(iVar14 + 0x16) + 0x100;
      uVar6 = uVar9 & 0xffff;
      *(short *)(iVar14 + 0x16) = (short)uVar9;
      if (uVar2 == uVar6) goto LAB_0001d7e0;
      if (*(int *)(iVar4 + 100) == 0) {
        return;
      }
      goto LAB_0001d6d6;
    }
    if (*(char *)(iVar14 + 8) == '\x02') {
      *(short *)(iVar14 + 0xc) = *(short *)(iVar14 + 0xc) + 1;
      sVar10 = *(short *)(iVar14 + 0xe) + 1;
      *(short *)(iVar14 + 0xe) = sVar10;
      if (*(short *)(iVar14 + 0x10) == sVar10) {
        FUN_0001b1fc(local_30,0,0x10);
        if (*(char *)(iVar14 + 8) == '\x01') {
          local_30[0] = 0;
          local_28 = *(undefined4 *)(iVar14 + 0x10);
          local_24 = *(undefined2 *)(iVar14 + 0x14);
        }
        else if (*(char *)(iVar14 + 8) == '\x02') {
          local_30[0] = 1;
          local_28 = CONCAT22(*(short *)(iVar14 + 0xc),
                              *(short *)(iVar14 + 0xc) - *(short *)(iVar14 + 0xe));
        }
        goto LAB_0001d80c;
      }
      if (*(int *)(iVar4 + 100) == 0) {
        return;
      }
      goto LAB_0001d7b0;
    }
    iVar14 = *(int *)(iVar4 + 100);
  }
  else {
    if ((bVar1 & 4) == 0) {
LAB_0001d646:
      iVar13 = *(int *)(iVar4 + 100);
LAB_0001d648:
      if (iVar13 == 0) {
        return;
      }
      goto LAB_0001d64c;
    }
    iVar13 = *(int *)(DAT_0001d8dc + 100);
    *DAT_0001d8d8 = bVar1 & 0xfb;
    if (iVar13 == 0) {
      return;
    }
    iVar13 = iVar12 * 2;
    *pbVar3 = bVar1 & 0xfb | 2;
    iVar14 = iVar4 + iVar12 * 0x18;
    cVar8 = *(char *)(iVar14 + 8);
    if (cVar8 != '\x01') goto LAB_0001d65a;
LAB_0001d6d4:
    uVar6 = (uint)*(ushort *)(iVar14 + 0x16);
LAB_0001d6d6:
    uVar9 = *(ushort *)(iVar4 + (iVar13 + iVar12) * 8 + 0x14) - uVar6;
    if ((int)uVar9 < 0x100) {
      uVar9 = uVar9 & 0xffff;
    }
    else {
      uVar9 = 0x100;
    }
    iVar14 = iVar4 + (iVar13 + iVar12) * 8;
    iVar14 = FUN_0001d28c(*(int *)(iVar14 + 0x10) + uVar6 * 4,*(int *)(iVar14 + 0xc) + uVar6 * 4,
                          uVar9);
joined_r0x0001d6fc:
    if (iVar14 == 0x11) {
      *pbVar3 = *pbVar3 & 0xfd | 4;
      return;
    }
  }
  if (iVar14 == 0) {
    return;
  }
LAB_0001d660:
  FUN_0001b1fc(local_30,0,0x10);
  iVar14 = iVar4 + (iVar13 + iVar12) * 8;
  if (*(char *)(iVar14 + 8) == '\x01') {
    local_30[0] = 0;
    local_28 = *(undefined4 *)(iVar14 + 0x10);
    local_24 = *(undefined2 *)(iVar14 + 0x14);
  }
  else if (*(char *)(iVar14 + 8) == '\x02') {
    local_30[0] = 1;
    local_28 = CONCAT22(*(short *)(iVar14 + 0xc),*(short *)(iVar14 + 0xc) - *(short *)(iVar14 + 0xe)
                       );
  }
  iVar12 = (iVar13 + iVar12) * 8;
  local_2c = *(undefined4 *)(iVar4 + iVar12 + 4);
  (**(code **)(*(int *)(iVar4 + iVar12) + 8))(local_30,9);
  return;
}


/* ---- FUN_0001d8f4 @ 0001d8f4 ---- */

void FUN_0001d8f4(void)

{
  uint uVar1;
  int in_lr;
  
  if (DAT_0001d918 == in_lr) {
    uVar1 = getProcessStackPointer();
  }
  else {
    uVar1 = getMainStackPointer();
    if ((DAT_0001d91c < uVar1) || (uVar1 <= DAT_0001d920)) {
      uVar1 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001d916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001d924)(uVar1);
  return;
}


/* ---- FUN_0001d928 @ 0001d928 ---- */

void FUN_0001d928(void)

{
  software_interrupt(0x48);
  return;
}


/* ---- FUN_0001d92c @ 0001d92c ---- */

undefined4 FUN_0001d92c(void)

{
  *DAT_0001d93c = 0;
  *DAT_0001d940 = 0;
  return 0;
}


/* ---- FUN_0001d944 @ 0001d944 ---- */

void FUN_0001d944(void)

{
  int iVar1;
  
  iVar1 = FUN_0001d928();
  if (iVar1 == 2) {
    WaitForEvent();
    WaitForEvent();
  }
  else if (iVar1 != 0) {
    FUN_0001b210(iVar1,0x114,DAT_0001d968);
  }
  return;
}


/* ---- FUN_0001d96c @ 0001d96c ---- */

int FUN_0001d96c(uint param_1)

{
  int iVar1;
  
  if ((param_1 & 1) == 0) {
    if (((int)param_1 >> 1 & 1U) == 0) {
      if (((int)param_1 >> 2 & 1U) == 0) {
        if (((int)param_1 >> 3 & 1U) == 0) {
          if (((int)param_1 >> 4 & 1U) == 0) {
            if (((int)param_1 >> 5 & 1U) == 0) {
              if (((int)param_1 >> 6 & 1U) == 0) {
                iVar1 = (((int)param_1 >> 7) - 1U & DAT_0001d9c0) + 7;
              }
              else {
                iVar1 = 6;
              }
            }
            else {
              iVar1 = 5;
            }
          }
          else {
            iVar1 = 4;
          }
        }
        else {
          iVar1 = 3;
        }
      }
      else {
        iVar1 = 2;
      }
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


/* ---- FUN_0001d9c4 @ 0001d9c4 ---- */

void FUN_0001d9c4(ushort *param_1,byte *param_2,uint param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  
  if ((param_1 != (ushort *)0x0) && (param_2 != (byte *)0x0)) {
    if (*param_1 == param_3) {
      iVar2 = 0;
    }
    else if (param_1[1] == param_3) {
      iVar2 = 1;
    }
    else if (param_1[2] == param_3) {
      iVar2 = 2;
    }
    else if (param_1[3] == param_3) {
      iVar2 = 3;
    }
    else if (param_1[4] == param_3) {
      iVar2 = 4;
    }
    else if (param_1[5] == param_3) {
      iVar2 = 5;
    }
    else if (param_1[6] == param_3) {
      iVar2 = 6;
    }
    else {
      if (param_1[7] != param_3) {
        return;
      }
      iVar2 = 7;
    }
    bVar1 = (byte)(1 << iVar2);
    if (param_4 == 0) {
      *param_2 = *param_2 & ~bVar1;
    }
    else {
      *param_2 = *param_2 | bVar1;
    }
  }
  return;
}


/* ---- FUN_0001da38 @ 0001da38 ---- */

void FUN_0001da38(ushort *param_1,byte *param_2,uint param_3,uint param_4,char param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (((param_1 != (ushort *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
    if (*param_1 == param_4) {
      iVar3 = 0;
    }
    else if (param_1[1] == param_4) {
      iVar3 = 1;
    }
    else if (param_1[2] == param_4) {
      iVar3 = 2;
    }
    else if (param_1[3] == param_4) {
      iVar3 = 3;
    }
    else if (param_1[4] == param_4) {
      iVar3 = 4;
    }
    else if (param_1[5] == param_4) {
      iVar3 = 5;
    }
    else if (param_1[6] == param_4) {
      iVar3 = 6;
    }
    else {
      if (param_1[7] != param_4) {
        return;
      }
      iVar3 = 7;
    }
    uVar5 = 1 << iVar3 & 0xff;
    uVar6 = ~uVar5 & 0xff;
    if (param_5 == '\0') {
      uVar4 = -(int)param_2 & 3;
      uVar2 = uVar4 + 3;
      if (uVar2 < 5) {
        uVar2 = 5;
      }
      bVar1 = (byte)~uVar5;
      if (param_3 - 1 < uVar2) {
        iVar3 = 0;
      }
      else {
        if (uVar4 == 0) {
          iVar3 = 0;
        }
        else {
          *param_2 = *param_2 & bVar1;
          if (uVar4 == 1) {
            iVar3 = 1;
          }
          else {
            param_2[1] = param_2[1] & bVar1;
            if (uVar4 == 3) {
              param_2[2] = param_2[2] & bVar1;
              iVar3 = 3;
            }
            else {
              iVar3 = 2;
            }
          }
        }
        uVar5 = param_3 - uVar4;
        uVar2 = 0;
        do {
          *(uint *)(param_2 + uVar2 + uVar4) =
               *(uint *)(param_2 + uVar2 + uVar4) &
               (uVar6 << 0x10 | uVar6 << 8 | uVar6 | uVar6 << 0x18);
          uVar2 = uVar2 + 4;
        } while (uVar2 != (uVar5 & 0xfffffffc));
        iVar3 = iVar3 + (uVar5 & 0xfffffffc);
        if (uVar5 == (uVar5 & 0xfffffffc)) {
          return;
        }
      }
      param_2[iVar3] = param_2[iVar3] & bVar1;
      uVar5 = iVar3 + 1;
      if (uVar5 < param_3) {
        param_2[uVar5] = param_2[uVar5] & bVar1;
        uVar5 = iVar3 + 2;
        if (uVar5 < param_3) {
          param_2[uVar5] = param_2[uVar5] & bVar1;
          uVar5 = iVar3 + 3;
          if (uVar5 < param_3) {
            param_2[uVar5] = param_2[uVar5] & bVar1;
            uVar5 = iVar3 + 4;
            if (uVar5 < param_3) {
              uVar6 = iVar3 + 5;
              param_2[uVar5] = param_2[uVar5] & bVar1;
              if (uVar6 < param_3) {
                param_2[uVar6] = bVar1 & param_2[uVar6];
              }
            }
          }
        }
      }
    }
    else {
      uVar2 = -(int)param_2 & 3;
      uVar6 = uVar2 + 3;
      if (uVar6 < 5) {
        uVar6 = 5;
      }
      bVar1 = (byte)(1 << iVar3);
      if (param_3 - 1 < uVar6) {
        iVar3 = 0;
      }
      else {
        if (uVar2 == 0) {
          iVar3 = 0;
        }
        else {
          *param_2 = *param_2 | bVar1;
          if (uVar2 == 1) {
            iVar3 = 1;
          }
          else {
            param_2[1] = param_2[1] | bVar1;
            if (uVar2 == 3) {
              param_2[2] = param_2[2] | bVar1;
              iVar3 = 3;
            }
            else {
              iVar3 = 2;
            }
          }
        }
        uVar6 = param_3 - uVar2;
        uVar4 = 0;
        do {
          *(uint *)(param_2 + uVar4 + uVar2) =
               *(uint *)(param_2 + uVar4 + uVar2) |
               uVar5 << 0x10 | uVar5 << 8 | uVar5 | uVar5 << 0x18;
          uVar4 = uVar4 + 4;
        } while ((uVar6 & 0xfffffffc) != uVar4);
        iVar3 = iVar3 + (uVar6 & 0xfffffffc);
        if (uVar6 == (uVar6 & 0xfffffffc)) {
          return;
        }
      }
      param_2[iVar3] = param_2[iVar3] | bVar1;
      uVar5 = iVar3 + 1;
      if (uVar5 < param_3) {
        param_2[uVar5] = param_2[uVar5] | bVar1;
        uVar5 = iVar3 + 2;
        if (uVar5 < param_3) {
          param_2[uVar5] = param_2[uVar5] | bVar1;
          uVar5 = iVar3 + 3;
          if (uVar5 < param_3) {
            param_2[uVar5] = param_2[uVar5] | bVar1;
            uVar5 = iVar3 + 4;
            if (uVar5 < param_3) {
              uVar6 = iVar3 + 5;
              param_2[uVar5] = param_2[uVar5] | bVar1;
              if (uVar6 < param_3) {
                param_2[uVar6] = bVar1 | param_2[uVar6];
              }
            }
          }
        }
      }
    }
  }
  return;
}


/* ---- FUN_0001dc5c @ 0001dc5c ---- */

uint FUN_0001dc5c(ushort *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == (ushort *)0x0) {
    uVar1 = 0;
  }
  else {
    if (*param_1 == param_3) {
      iVar2 = 0;
    }
    else if (param_1[1] == param_3) {
      iVar2 = 1;
    }
    else if (param_1[2] == param_3) {
      iVar2 = 2;
    }
    else if (param_1[3] == param_3) {
      iVar2 = 3;
    }
    else if (param_1[4] == param_3) {
      iVar2 = 4;
    }
    else if (param_1[5] == param_3) {
      iVar2 = 5;
    }
    else if (param_1[6] == param_3) {
      iVar2 = 6;
    }
    else {
      if (param_1[7] != param_3) {
        return 0;
      }
      iVar2 = 7;
    }
    uVar1 = param_2 >> iVar2 & 1;
  }
  return uVar1;
}


/* ---- FUN_0001dcc0 @ 0001dcc0 ---- */

void FUN_0001dcc0(uint *param_1,undefined2 *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = 0;
  if (param_2 != (undefined2 *)0x0) {
    bVar2 = param_3 << 0x1f < 0;
    if (bVar2) {
      *(undefined2 *)(param_1 + 1) = *param_2;
    }
    uVar1 = (uint)bVar2;
    if (param_3 << 0x1e < 0) {
      *(undefined2 *)((int)param_1 + uVar1 * 2 + 4) = param_2[1];
      uVar1 = uVar1 + 1;
    }
    if (param_3 << 0x1d < 0) {
      *(undefined2 *)((int)param_1 + uVar1 * 2 + 4) = param_2[2];
      uVar1 = uVar1 + 1;
    }
    if (param_3 << 0x1c < 0) {
      *(undefined2 *)((int)param_1 + uVar1 * 2 + 4) = param_2[3];
      uVar1 = uVar1 + 1;
    }
    if (param_3 << 0x1b < 0) {
      *(undefined2 *)((int)param_1 + uVar1 * 2 + 4) = param_2[4];
      uVar1 = uVar1 + 1;
    }
    if (param_3 << 0x1a < 0) {
      *(undefined2 *)((int)param_1 + uVar1 * 2 + 4) = param_2[5];
      uVar1 = uVar1 + 1;
    }
    if (param_3 << 0x19 < 0) {
      *(undefined2 *)((int)param_1 + uVar1 * 2 + 4) = param_2[6];
      uVar1 = uVar1 + 1;
    }
    if (param_3 >> 7 != 0) {
      *(undefined2 *)((int)param_1 + uVar1 * 2 + 4) = param_2[7];
      uVar1 = uVar1 + 1;
    }
  }
  *param_1 = uVar1;
  return;
}


/* ---- FUN_0001dd38 @ 0001dd38 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001dd38(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  
  if (*DAT_0001dda4 != 0) {
    *DAT_0001dda4 = 0;
    iVar1 = DAT_0001dda8;
    _DAT_40000308 = 1;
    *(undefined *)(DAT_0001dda8 + 1) = 1;
    puVar2 = *(undefined4 **)(iVar1 + 8);
    while (puVar2 != (undefined4 *)0x0) {
      pcVar3 = (code *)puVar2[1];
      *(undefined4 *)(iVar1 + 8) = *puVar2;
      (*pcVar3)(0);
      puVar2 = *(undefined4 **)(iVar1 + 8);
    }
  }
  if (*DAT_0001ddac != 0) {
    *DAT_0001ddac = 0;
    iVar1 = DAT_0001dda8;
    _DAT_40000308 = 2;
    *(undefined *)(DAT_0001dda8 + 2) = 1;
    puVar2 = *(undefined4 **)(iVar1 + 0x10);
    while (puVar2 != (undefined4 *)0x0) {
      pcVar3 = (code *)puVar2[1];
      *(undefined4 *)(iVar1 + 0x10) = *puVar2;
      (*pcVar3)(1);
      puVar2 = *(undefined4 **)(iVar1 + 0x10);
    }
  }
  return;
}


/* ---- FUN_0001ddb0 @ 0001ddb0 ---- */

void FUN_0001ddb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  
  iVar1 = DAT_0001ddd0;
  if (param_1 == 0) {
    puVar2 = *(undefined4 **)(DAT_0001ddd0 + 8);
    while (puVar2 != (undefined4 *)0x0) {
      pcVar3 = (code *)puVar2[1];
      *(undefined4 *)(iVar1 + 8) = *puVar2;
      (*pcVar3)(0);
      puVar2 = *(undefined4 **)(iVar1 + 8);
    }
  }
  return;
}


/* ---- FUN_0001ddd4 @ 0001ddd4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001ddd4(void)

{
  char *pcVar1;
  int iVar2;
  undefined local_9;
  
  local_9 = 0;
  FUN_0001bcb0(&local_9);
  pcVar1 = DAT_0001de38;
  if (*DAT_0001de38 == '\0') {
    *(undefined4 *)(DAT_0001de38 + 4) = 0;
    *(undefined4 *)(pcVar1 + 8) = 0;
    *(undefined4 *)(pcVar1 + 0x10) = 0;
    *(undefined4 *)(pcVar1 + 0xc) = 0;
    if (-1 < *DAT_0001de3c << 0x1f) {
      FUN_0001de40(0,3);
    }
    iVar2 = FUN_000310dc();
    if (iVar2 == 0) {
      _DAT_40000518 = 1;
    }
    *pcVar1 = '\x01';
  }
  *(int *)(pcVar1 + 0xc) = *(int *)(pcVar1 + 0xc) + 1;
  pcVar1[2] = '\x01';
  FUN_0001bcf0(local_9);
  return;
}


/* ---- FUN_0001de40 @ 0001de40 ---- */

void FUN_0001de40(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 & 0xfffffffd) != 1) {
    FUN_0001f82c(0x124,DAT_0001decc,param_2 & 0xfffffffd,2,param_4);
  }
  if ((int)param_1 < 0) {
    iVar3 = (param_1 & 3) << 3;
    iVar2 = ((param_1 & 0xf) - 8 & 0xfffffffc) + DAT_0001ded4;
    *(uint *)(iVar2 + 0x1c) =
         ((param_2 & 3) << 6) << iVar3 | *(uint *)(iVar2 + 0x1c) & ~(0xff << iVar3);
  }
  else {
    iVar2 = (param_1 & 3) << 3;
    *(uint *)((int)DAT_0001ded0 + (param_1 & 0xfffffffc) + 0x300) =
         ((param_2 & 3) << 6) << iVar2 |
         *(uint *)((int)DAT_0001ded0 + (param_1 & 0xfffffffc) + 0x300) & ~(0xff << iVar2);
  }
  piVar1 = DAT_0001ded0;
  iVar2 = 1 << (param_1 & 0x1f);
  DAT_0001ded0[0x60] = iVar2;
  *piVar1 = iVar2;
  return;
}


/* ---- FUN_0001ded8 @ 0001ded8 ---- */

undefined4 FUN_0001ded8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_0001df34;
  if (*(char *)(DAT_0001df34 + 0x11) == '\0') {
    *DAT_0001df34 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0xffffffff;
    puVar1[6] = 0xffffffff;
    puVar1[7] = 0xffffffff;
    puVar1[8] = 0xffffffff;
    puVar1[9] = 0xffffffff;
    puVar1[10] = 0xffffffff;
    puVar1[0xb] = 0xffffffff;
    puVar1[0xc] = 0xffffffff;
    puVar1[0xd] = 0xffffffff;
    puVar1[0xe] = 0xffffffff;
    puVar1[0xf] = 0xffffffff;
    puVar1[0x10] = 0xffffffff;
    FUN_0001de40(6,3);
    *DAT_0001df38 = 0;
    *(undefined4 *)(DAT_0001df3c + 0x304) = 0x80000000;
    uVar2 = 0;
    *(undefined *)(puVar1 + 0x11) = 1;
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}


/* ---- FUN_0001df40 @ 0001df40 ---- */

undefined4 FUN_0001df40(uint param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (0x1f < param_1) {
    FUN_0001f82c(0x1f8,PTR_s___________________components_dri_0001e108);
  }
  piVar2 = DAT_0001e0fc;
  pbVar4 = (byte *)((int)DAT_0001e0fc + param_1 + 0x20);
  if (*pbVar4 < 0x80) {
    return 8;
  }
  bVar1 = param_2[3];
  if (bVar1 == 0) {
    if (DAT_0001e0fc[4] == -1) {
      *pbVar4 = 4;
      iVar7 = 4;
      piVar2[4] = param_3;
      uVar6 = 4;
    }
    else {
      if (DAT_0001e0fc[5] != -1) {
        iVar7 = 5;
        uVar3 = 8;
        goto LAB_0001df86;
      }
      uVar6 = 5;
      iVar7 = 5;
      *pbVar4 = 5;
      piVar2[5] = param_3;
    }
  }
  else {
    if (*DAT_0001e0fc == -1) {
      iVar7 = 0;
      *pbVar4 = 0;
      *piVar2 = param_3;
      goto LAB_0001dffe;
    }
    if (DAT_0001e0fc[1] == -1) {
      *pbVar4 = 1;
      piVar2[1] = param_3;
      iVar7 = 1;
      goto LAB_0001dffe;
    }
    iVar7 = 1;
    uVar3 = 4;
LAB_0001df86:
    uVar6 = iVar7 + 1;
    if (uVar3 <= uVar6) {
      return 4;
    }
    iVar5 = uVar6 * 4;
    if (DAT_0001e0fc[uVar6] != -1) {
      uVar6 = iVar7 + 2;
      if (uVar3 <= uVar6) {
        return 4;
      }
      iVar5 = uVar6 * 4;
      if (DAT_0001e0fc[uVar6] != -1) {
        uVar6 = iVar7 + 3;
        if (uVar3 <= uVar6) {
          return 4;
        }
        iVar5 = uVar6 * 4;
        if (DAT_0001e0fc[uVar6] != -1) {
          uVar6 = iVar7 + 4;
          if (uVar3 <= uVar6) {
            return 4;
          }
          iVar5 = uVar6 * 4;
          if (DAT_0001e0fc[uVar6] != -1) {
            uVar6 = iVar7 + 5;
            if (uVar3 <= uVar6) {
              return 4;
            }
            iVar5 = uVar6 * 4;
            if (DAT_0001e0fc[uVar6] != -1) {
              if (uVar3 <= iVar7 + 6U) {
                return 4;
              }
              if (DAT_0001e0fc[7] != -1) {
                return 4;
              }
              uVar6 = 7;
              iVar5 = 0x1c;
            }
          }
        }
      }
    }
    iVar7 = (int)(char)uVar6;
    *(char *)((int)DAT_0001e0fc + param_1 + 0x20) = (char)uVar6;
    *(int *)((int)piVar2 + iVar5) = param_3;
    if (bVar1 != 0) goto LAB_0001dffe;
  }
  *(char *)((int)piVar2 + uVar6 + 0x3c) = (char)param_1;
LAB_0001dffe:
  if (param_2[2] == 0) {
    bVar1 = param_2[1];
    if (0x1f < param_1) {
      FUN_0001f82c(0x1d0,PTR_s___________________components_dri_0001e10c);
    }
    *(uint *)((param_1 + 0x1c0) * 4 + 0x50000000) = (uint)bVar1 << 2;
    bVar1 = param_2[3];
  }
  else {
    if (0x1f < param_1) {
      FUN_0001f82c(0x1d0,PTR_s___________________components_dri_0001e10c);
    }
    *(uint *)(param_1 * 4 + 0x50000700) = *(uint *)(param_1 * 4 + 0x50000700) & 0xfffffffd;
    bVar1 = param_2[3];
  }
  if (bVar1 == 0) {
    pbVar4 = (byte *)((int)piVar2 + (char)((char)iVar7 + -4) + 0x40);
    *pbVar4 = *param_2 << 6 | *pbVar4;
  }
  else {
    iVar7 = iVar7 * 4 + DAT_0001e100;
    bVar1 = *param_2;
    *(uint *)(iVar7 + 0x510) = *(uint *)(iVar7 + 0x510) & DAT_0001e104;
    *(uint *)(iVar7 + 0x510) =
         (param_1 & 0x1f) << 8 | (bVar1 & 3) << 0x10 | *(uint *)(iVar7 + 0x510);
  }
  return 0;
}


/* ---- FUN_0001e110 @ 0001e110 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001e110(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  
  if (param_1 < 0x20) {
    pcVar6 = (char *)(DAT_0001e210 + param_1 + 0x20);
    cVar1 = *pcVar6;
    iVar5 = DAT_0001e210;
  }
  else {
    FUN_0001f82c(DAT_0001e220,DAT_0001e21c,param_3,param_4,param_4);
    pcVar6 = (char *)(DAT_0001e210 + param_1 + 0x20);
    cVar1 = *pcVar6;
    iVar5 = DAT_0001e210;
  }
  uVar7 = (uint)cVar1;
  DAT_0001e210 = iVar5;
  if ((int)uVar7 < 0) {
    FUN_0001f82c(DAT_0001e224,DAT_0001e21c);
    uVar7 = (uint)*pcVar6;
  }
  iVar3 = DAT_0001e218;
  if ((int)uVar7 < 4) {
    if ((uVar7 & 0xff) < 4) {
      iVar4 = uVar7 * 4 + DAT_0001e218;
      *(uint *)(iVar4 + 0x510) = *(uint *)(iVar4 + 0x510) | 1;
      *(undefined4 *)(((int)(char)((char)uVar7 + '@') & 0x3fffU) * 4 + iVar3) = 0;
      if ((param_2 != 0) && (*(int *)(iVar5 + *(char *)(iVar5 + param_1 + 0x20) * 4) != 0)) {
        *(int *)(iVar3 + 0x304) = 1 << (uVar7 & 0xff);
      }
    }
  }
  else {
    bVar2 = *(byte *)(iVar5 + (char)((char)uVar7 + -4) + 0x40) >> 6;
    if (bVar2 == 3) {
      if (0x1f < param_1) {
        FUN_0001f82c(0x1d0,DAT_0001e228);
      }
      uVar7 = ((_DAT_50000510 >> (param_1 & 0xff) & 1) + 2) * 0x10000;
    }
    else {
      uVar7 = (-(uint)(bVar2 == 1) & 0xffff0000) + 0x30000;
    }
    if (0x1f < param_1) {
      FUN_0001f82c(0x1d0,DAT_0001e228);
    }
    iVar5 = param_1 * 4;
    *(uint *)(iVar5 + 0x50000700) = *(uint *)(iVar5 + 0x50000700) & DAT_0001e214;
    *(uint *)(iVar5 + 0x50000700) = uVar7 | *(uint *)(iVar5 + 0x50000700);
  }
  return;
}


/* ---- FUN_0001e22c @ 0001e22c ---- */

void FUN_0001e22c(uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_1 < 0x20) {
    pcVar5 = (char *)(DAT_0001e2c0 + param_1 + 0x20);
    cVar1 = *pcVar5;
  }
  else {
    FUN_0001f82c(DAT_0001e2d0,DAT_0001e2cc);
    pcVar5 = (char *)(DAT_0001e2c0 + param_1 + 0x20);
    cVar1 = *pcVar5;
  }
  uVar3 = (uint)cVar1;
  if ((int)uVar3 < 0) {
    FUN_0001f82c(0x254,DAT_0001e2cc);
    uVar3 = (uint)*pcVar5;
  }
  iVar4 = DAT_0001e2c4;
  if ((int)uVar3 < 4) {
    if ((uVar3 & 0xff) < 4) {
      iVar2 = uVar3 * 4 + DAT_0001e2c4;
      *(uint *)(iVar2 + 0x510) = *(uint *)(iVar2 + 0x510) & 0xfffffffe;
      *(int *)(iVar4 + 0x308) = 1 << (uVar3 & 0xff);
    }
  }
  else {
    if (0x1f < param_1) {
      FUN_0001f82c(0x1d0,DAT_0001e2d4);
    }
    iVar4 = param_1 * 4;
    *(uint *)(iVar4 + 0x50000700) = *(uint *)(iVar4 + 0x50000700) & DAT_0001e2c8;
    *(undefined4 *)(iVar4 + 0x50000700) = *(undefined4 *)(iVar4 + 0x50000700);
  }
  return;
}


/* ---- FUN_0001e2d8 @ 0001e2d8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001e2d8(void)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  code **ppcVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  code **ppcVar10;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_34 = 0;
  uVar9 = 0;
  if ((*DAT_0001e608 == 1) &&
     (uVar9 = *(uint *)(DAT_0001e834 + 0x304) & 1, (*(uint *)(DAT_0001e834 + 0x304) & 1) != 0)) {
    *DAT_0001e608 = 0;
  }
  if ((*DAT_0001e60c == 1) && ((*(uint *)(DAT_0001e834 + 0x304) & 2) != 0)) {
    uVar9 = uVar9 | 2;
    *DAT_0001e60c = 0;
  }
  if ((*DAT_0001e610 == 1) && ((*(uint *)(DAT_0001e834 + 0x304) & 4) != 0)) {
    uVar9 = uVar9 | 4;
    *DAT_0001e610 = 0;
  }
  if ((*DAT_0001e614 == 1) && ((*(uint *)(DAT_0001e61c + 0x304) & 8) != 0)) {
    *DAT_0001e614 = 0;
    uVar9 = uVar9 | 8;
    if (*DAT_0001e618 == 1) {
      *DAT_0001e618 = 0;
      local_34 = _DAT_50000510;
LAB_0001e358:
      uVar9 = uVar9 | 0x80000000;
      local_34 = _DAT_50000510;
    }
  }
  else {
    if (*DAT_0001e618 == 1) {
      *DAT_0001e618 = 0;
      local_34 = _DAT_50000510;
      ppcVar4 = DAT_0001e838;
      if (uVar9 == 0) goto LAB_0001e3ae;
      goto LAB_0001e358;
    }
    if (uVar9 == 0) {
      return;
    }
  }
  ppcVar4 = DAT_0001e620;
  uVar7 = 1;
  iVar6 = 0;
  ppcVar10 = DAT_0001e620;
  do {
    if ((uVar7 & uVar9) != 0) {
      iVar1 = iVar6 * 4 + DAT_0001e61c;
      if (*ppcVar10 != (code *)0x0) {
        (**ppcVar10)(*(uint *)(iVar1 + 0x510) >> 8 & 0x1f,*(uint *)(iVar1 + 0x510) >> 0x10 & 3);
      }
    }
    iVar6 = iVar6 + 1;
    uVar7 = uVar7 << 1;
    ppcVar10 = ppcVar10 + 1;
  } while (iVar6 != 4);
  if (-1 < (int)uVar9) {
    return;
  }
LAB_0001e3ae:
  local_30 = 0;
  local_2c = 0xffffffff;
  bVar5 = *(byte *)(ppcVar4 + 0x10);
  if (bVar5 != 0xff) goto LAB_0001e3c0;
LAB_0001e602:
  iVar6 = 0;
LAB_0001e444:
  do {
    bVar5 = *(byte *)((int)ppcVar4 + 0x41);
    if (bVar5 != 0xff) {
      uVar9 = bVar5 & 0xffffff3f;
      uVar7 = uVar9 >> 3;
      uVar8 = 1 << (bVar5 & 7);
      if ((uVar8 & *(byte *)((int)&local_2c + uVar7)) != 0) {
        bVar5 = bVar5 >> 6;
        pcVar3 = ppcVar4[*(char *)((int)ppcVar4 + uVar9 + 0x20)];
        if (pcVar3 == (code *)0x0) {
          if (bVar5 != 3) goto LAB_0001e4cc;
LAB_0001e7cc:
          *(byte *)((int)&local_30 + uVar7) = *(byte *)((int)&local_30 + uVar7) | (byte)uVar8;
        }
        else if (bVar5 == 3) goto LAB_0001e7cc;
        if (0x1f < uVar9) {
          FUN_0001f82c(0x1d0,DAT_0001e840);
        }
        iVar1 = uVar9 * 4;
        uVar2 = (uint)(*(int *)(iVar1 + 0x50000700) << 0xe) >> 0x1e;
        if ((uVar8 & *(byte *)((int)&local_34 + uVar7)) == 0) {
          if (uVar2 == 3) {
            if (bVar5 == 3) {
              uVar7 = 0x20000;
LAB_0001e6fe:
              if (0x1f < uVar9) {
                FUN_0001f82c(0x1d0,DAT_0001e840);
              }
              iVar6 = iVar6 + 1;
              *(uint *)(iVar1 + 0x50000700) = *(uint *)(iVar1 + 0x50000700) & DAT_0001e83c;
              *(uint *)(iVar1 + 0x50000700) = uVar7 | *(uint *)(iVar1 + 0x50000700);
            }
LAB_0001e4c0:
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(uVar9,bVar5);
            }
          }
        }
        else if (uVar2 == 2) {
          if (bVar5 == 3) {
            uVar7 = 0x30000;
            goto LAB_0001e6fe;
          }
          goto LAB_0001e4c0;
        }
      }
    }
LAB_0001e4cc:
    bVar5 = *(byte *)((int)ppcVar4 + 0x42);
    if (bVar5 != 0xff) {
      uVar9 = bVar5 & 0xffffff3f;
      uVar7 = uVar9 >> 3;
      uVar8 = 1 << (bVar5 & 7);
      if ((uVar8 & *(byte *)((int)&local_2c + uVar7)) != 0) {
        bVar5 = bVar5 >> 6;
        pcVar3 = ppcVar4[*(char *)((int)ppcVar4 + uVar9 + 0x20)];
        if (pcVar3 == (code *)0x0) {
          if (bVar5 != 3) goto LAB_0001e554;
LAB_0001e75a:
          *(byte *)((int)&local_30 + uVar7) = *(byte *)((int)&local_30 + uVar7) | (byte)uVar8;
        }
        else if (bVar5 == 3) goto LAB_0001e75a;
        if (0x1f < uVar9) {
          FUN_0001f82c(0x1d0,DAT_0001e840);
        }
        iVar1 = uVar9 * 4;
        uVar2 = (uint)(*(int *)(iVar1 + 0x50000700) << 0xe) >> 0x1e;
        if ((uVar8 & *(byte *)((int)&local_34 + uVar7)) == 0) {
          if (uVar2 == 3) {
            if (bVar5 == 3) {
              uVar7 = 0x20000;
LAB_0001e6ca:
              if (0x1f < uVar9) {
                FUN_0001f82c(0x1d0,DAT_0001e840);
              }
              iVar6 = iVar6 + 1;
              *(uint *)(iVar1 + 0x50000700) = *(uint *)(iVar1 + 0x50000700) & DAT_0001e83c;
              *(uint *)(iVar1 + 0x50000700) = uVar7 | *(uint *)(iVar1 + 0x50000700);
            }
LAB_0001e548:
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(uVar9,bVar5);
            }
          }
        }
        else if (uVar2 == 2) {
          if (bVar5 == 3) {
            uVar7 = 0x30000;
            goto LAB_0001e6ca;
          }
          goto LAB_0001e548;
        }
      }
    }
LAB_0001e554:
    bVar5 = *(byte *)((int)ppcVar4 + 0x43);
    if (bVar5 == 0xff) {
LAB_0001e5da:
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      uVar9 = bVar5 & 0xffffff3f;
      uVar7 = uVar9 >> 3;
      uVar8 = 1 << (bVar5 & 7);
      if ((uVar8 & *(byte *)((int)&local_2c + uVar7)) == 0) goto LAB_0001e5da;
      bVar5 = bVar5 >> 6;
      pcVar3 = ppcVar4[*(char *)((int)ppcVar4 + uVar9 + 0x20)];
      if (pcVar3 == (code *)0x0) {
        if (bVar5 != 3) goto LAB_0001e5da;
LAB_0001e780:
        *(byte *)((int)&local_30 + uVar7) = *(byte *)((int)&local_30 + uVar7) | (byte)uVar8;
      }
      else if (bVar5 == 3) goto LAB_0001e780;
      if (0x1f < uVar9) {
        FUN_0001f82c(0x1d0,DAT_0001e840);
      }
      iVar1 = uVar9 * 4;
      uVar2 = (uint)(*(int *)(iVar1 + 0x50000700) << 0xe) >> 0x1e;
      if ((uVar8 & *(byte *)((int)&local_34 + uVar7)) != 0) {
        if (uVar2 == 2) {
          if (bVar5 == 3) {
            uVar7 = 0x30000;
            goto LAB_0001e690;
          }
LAB_0001e5ce:
          if (pcVar3 != (code *)0x0) goto LAB_0001e5d4;
        }
        goto LAB_0001e5da;
      }
      if (uVar2 != 3) goto LAB_0001e5da;
      if (bVar5 != 3) goto LAB_0001e5ce;
      uVar7 = 0x20000;
LAB_0001e690:
      if (0x1f < uVar9) {
        FUN_0001f82c(0x1d0,DAT_0001e840);
      }
      iVar6 = iVar6 + 1;
      *(uint *)(iVar1 + 0x50000700) = *(uint *)(iVar1 + 0x50000700) & DAT_0001e83c;
      *(uint *)(iVar1 + 0x50000700) = uVar7 | *(uint *)(iVar1 + 0x50000700);
      if (pcVar3 != (code *)0x0) {
LAB_0001e5d4:
        (*pcVar3)(uVar9,bVar5);
        goto LAB_0001e5da;
      }
    }
    if (local_34 == _DAT_50000510) {
      return;
    }
    local_34 = _DAT_50000510;
    local_2c = local_30;
    bVar5 = *(byte *)(ppcVar4 + 0x10);
    if (bVar5 == 0xff) goto LAB_0001e602;
LAB_0001e3c0:
    uVar9 = bVar5 & 0xffffff3f;
    uVar7 = uVar9 >> 3;
    uVar8 = 1 << (bVar5 & 7);
    iVar6 = 0;
    if ((uVar8 & *(byte *)((int)&local_2c + uVar7)) != 0) {
      bVar5 = bVar5 >> 6;
      pcVar3 = ppcVar4[*(char *)((int)ppcVar4 + uVar9 + 0x20)];
      if (pcVar3 == (code *)0x0) {
        if (bVar5 != 3) goto LAB_0001e444;
LAB_0001e7a6:
        *(byte *)((int)&local_30 + uVar7) = *(byte *)((int)&local_30 + uVar7) | (byte)uVar8;
      }
      else if (bVar5 == 3) goto LAB_0001e7a6;
      if (0x1f < uVar9) {
        FUN_0001f82c(0x1d0,DAT_0001e840);
      }
      iVar1 = uVar9 * 4;
      uVar2 = (uint)(*(int *)(iVar1 + 0x50000700) << 0xe) >> 0x1e;
      if ((uVar8 & *(byte *)((int)&local_34 + uVar7)) == 0) {
        iVar6 = 0;
        if (uVar2 != 3) goto LAB_0001e444;
        if (bVar5 == 3) {
          uVar7 = 0x20000;
LAB_0001e734:
          if (0x1f < uVar9) {
            FUN_0001f82c(0x1d0,DAT_0001e840);
          }
          iVar6 = 1;
          *(uint *)(iVar1 + 0x50000700) = *(uint *)(iVar1 + 0x50000700) & DAT_0001e83c;
          *(uint *)(iVar1 + 0x50000700) = *(uint *)(iVar1 + 0x50000700) | uVar7;
        }
      }
      else {
        iVar6 = 0;
        if (uVar2 != 2) goto LAB_0001e444;
        if (bVar5 == 3) {
          uVar7 = 0x30000;
          goto LAB_0001e734;
        }
      }
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar9,bVar5);
      }
    }
  } while( true );
}


/* ---- FUN_0001e844 @ 0001e844 ---- */

int FUN_0001e844(int *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  param_2[0x41] = 0;
  param_2[0x49] = 0;
  param_2[0x47] = 0;
  param_2[0x42] = 0;
  *(undefined *)((int)param_1 + 0x26) = 0;
  *(undefined *)((int)param_1 + 0x23) = 0;
  if (param_4 == 1) {
    param_2[0x80] = 2;
    param_2[8] = 1;
    *param_2 = 1;
    iVar4 = *param_1;
    iVar2 = DAT_0001e9cc;
  }
  else {
    param_2[0x80] = 1;
    param_2[8] = 1;
    *param_2 = 1;
    iVar4 = *param_1;
    iVar2 = DAT_0001e9cc;
  }
  DAT_0001e9cc = iVar2;
  if (iVar4 == 0) {
LAB_0001e8ce:
    do {
      if (*(char *)((int)param_1 + 0x23) == '\0') {
        bVar1 = *(byte *)((int)param_1 + 0x26);
        if (param_2[0x49] == 0) {
          if (param_2[0x47] == 0) {
            if (param_2[0x42] != 0) {
              param_2[0x42] = 0;
              if (param_2[0x49] != 0) goto LAB_0001e95e;
              if (*(byte *)((int)param_1 + 0x26) < param_4) {
                *(char *)(param_3 + (uint)*(byte *)((int)param_1 + 0x26)) = (char)param_2[0x146];
                bVar3 = *(char *)((int)param_1 + 0x26) + 1;
                *(byte *)((int)param_1 + 0x26) = bVar3;
                if ((uint)bVar3 == param_4 - 1) {
                  param_2[0x80] = 2;
                }
                else if (param_4 == bVar3) goto LAB_0001e966;
                param_2[8] = 1;
              }
            }
          }
          else {
            param_2[0x47] = 0;
            if (param_2[0x49] == 0) {
              if (*(byte *)((int)param_1 + 0x26) < param_4) {
                *(uint *)((int)param_2 + DAT_0001e9d0) =
                     (uint)*(byte *)(param_3 + (uint)*(byte *)((int)param_1 + 0x26));
                *(char *)((int)param_1 + 0x26) = *(char *)((int)param_1 + 0x26) + '\x01';
              }
              else {
                param_2[5] = 1;
              }
            }
            else {
              param_2[0x49] = 0;
              param_2[5] = 1;
              *(undefined *)((int)param_1 + 0x23) = 1;
            }
          }
        }
        else {
LAB_0001e95e:
          param_2[0x49] = 0;
          param_2[5] = 1;
          *(undefined *)((int)param_1 + 0x23) = 1;
        }
LAB_0001e966:
        if (param_4 != bVar1) goto LAB_0001e8ce;
      }
      else {
        param_2[0x49] = 0;
        param_2[0x47] = 0;
        param_2[0x42] = 0;
      }
    } while (param_2[0x41] == 0);
    param_2[0x41] = 0;
    if (*(char *)((int)param_1 + 0x23) != '\0') {
      uVar5 = *(uint *)((int)param_2 + DAT_0001e9d4);
      *(uint *)((int)param_2 + DAT_0001e9d4) = uVar5;
      if (uVar5 != 0) {
        iVar4 = ((uVar5 & 1) - 1 & DAT_0001e9d8) + 0x8200;
        if ((int)(uVar5 << 0x1e) < 0) {
          iVar4 = DAT_0001e9dc;
        }
        if ((int)(uVar5 << 0x1d) < 0) {
          return DAT_0001e9e0;
        }
        return iVar4;
      }
    }
  }
  else {
    param_1[2] = iVar2;
    *(int *)((int)param_2 + iVar2 + 0x7e) = param_1[2];
  }
  return 0;
}


/* ---- FUN_0001e9e4 @ 0001e9e4 ---- */

int FUN_0001e9e4(int *param_1,int param_2,int param_3,uint param_4,char param_5)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  *(undefined4 *)(param_2 + 0x104) = 0;
  *(undefined4 *)(param_2 + 0x124) = 0;
  *(undefined4 *)(param_2 + 0x11c) = 0;
  *(undefined4 *)(param_2 + 0x108) = 0;
  *(undefined4 *)(param_2 + 0x200) = 0;
  *(undefined *)((int)param_1 + 0x26) = 0;
  *(undefined *)((int)param_1 + 0x23) = 0;
  *(undefined4 *)(param_2 + 0x20) = 1;
  *(undefined4 *)(param_2 + 8) = 1;
  if (*(byte *)((int)param_1 + 0x26) < param_4) {
    *(uint *)(param_2 + DAT_0001eb8c) =
         (uint)*(byte *)(param_3 + (uint)*(byte *)((int)param_1 + 0x26));
    *(char *)((int)param_1 + 0x26) = *(char *)((int)param_1 + 0x26) + '\x01';
  }
  else {
    if (param_5 == '\0') {
      *(undefined4 *)(param_2 + 0x14) = 1;
      iVar4 = *param_1;
      iVar2 = DAT_0001eb90;
      goto joined_r0x0001ea64;
    }
    *(undefined4 *)(param_2 + 0x1c) = 1;
  }
  iVar4 = *param_1;
  iVar2 = DAT_0001eb90;
joined_r0x0001ea64:
  DAT_0001eb90 = iVar2;
  if (iVar4 == 0) {
LAB_0001ea82:
    do {
      if (*(char *)((int)param_1 + 0x23) == '\0') {
        bVar1 = *(byte *)((int)param_1 + 0x26);
        if (*(int *)(param_2 + 0x124) == 0) {
          if (*(int *)(param_2 + 0x11c) == 0) {
            if (*(int *)(param_2 + 0x108) != 0) {
              *(undefined4 *)(param_2 + 0x108) = 0;
              if (*(int *)(param_2 + 0x124) != 0) goto LAB_0001eb10;
              if (*(byte *)((int)param_1 + 0x26) < param_4) {
                *(char *)(param_3 + (uint)*(byte *)((int)param_1 + 0x26)) =
                     (char)*(undefined4 *)(param_2 + 0x518);
                bVar3 = *(char *)((int)param_1 + 0x26) + 1;
                *(byte *)((int)param_1 + 0x26) = bVar3;
                if ((uint)bVar3 == param_4 - 1) {
                  *(undefined4 *)(param_2 + 0x200) = 2;
                }
                else if (param_4 == bVar3) goto LAB_0001eb18;
                *(undefined4 *)(param_2 + 0x20) = 1;
              }
            }
          }
          else {
            *(undefined4 *)(param_2 + 0x11c) = 0;
            if (*(int *)(param_2 + 0x124) == 0) {
              if (*(byte *)((int)param_1 + 0x26) < param_4) {
                *(uint *)(param_2 + DAT_0001eb8c) =
                     (uint)*(byte *)(param_3 + (uint)*(byte *)((int)param_1 + 0x26));
                *(char *)((int)param_1 + 0x26) = *(char *)((int)param_1 + 0x26) + '\x01';
              }
              else {
                if (param_5 != '\0') {
                  *(undefined4 *)(param_2 + 0x1c) = 1;
                  goto LAB_0001eada;
                }
                *(undefined4 *)(param_2 + 0x14) = 1;
              }
            }
            else {
              *(undefined4 *)(param_2 + 0x124) = 0;
              *(undefined4 *)(param_2 + 0x14) = 1;
              *(undefined *)((int)param_1 + 0x23) = 1;
            }
          }
        }
        else {
LAB_0001eb10:
          *(undefined4 *)(param_2 + 0x124) = 0;
          *(undefined4 *)(param_2 + 0x14) = 1;
          *(undefined *)((int)param_1 + 0x23) = 1;
        }
LAB_0001eb18:
        if (param_4 != bVar1) goto LAB_0001ea82;
      }
      else {
        *(undefined4 *)(param_2 + 0x124) = 0;
        *(undefined4 *)(param_2 + 0x11c) = 0;
        *(undefined4 *)(param_2 + 0x108) = 0;
      }
    } while (*(int *)(param_2 + 0x104) == 0);
    *(undefined4 *)(param_2 + 0x104) = 0;
LAB_0001eada:
    if (*(char *)((int)param_1 + 0x23) != '\0') {
      uVar5 = *(uint *)(param_2 + DAT_0001eb94);
      *(uint *)(param_2 + DAT_0001eb94) = uVar5;
      if (uVar5 != 0) {
        iVar4 = ((uVar5 & 1) - 1 & DAT_0001eb98) + 0x8200;
        if ((int)(uVar5 << 0x1e) < 0) {
          iVar4 = DAT_0001eb9c;
        }
        if ((int)(uVar5 << 0x1d) < 0) {
          return DAT_0001eba0;
        }
        return iVar4;
      }
    }
  }
  else {
    param_1[2] = iVar2;
    *(int *)(param_2 + iVar2 + 0x7e) = param_1[2];
  }
  return 0;
}


/* ---- FUN_0001eba4 @ 0001eba4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001eba4(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 == (uint *)0x0) {
    FUN_0001f82c(0xf1,DAT_0001ee64);
  }
  if (*param_2 == param_2[1]) {
    FUN_0001f82c(0xf2,DAT_0001ee64);
  }
  iVar6 = DAT_0001ee44;
  uVar4 = (uint)*(byte *)(param_1 + 1);
  iVar2 = DAT_0001ee44 + uVar4 * 0x28;
  if (*(char *)(iVar2 + 0x22) == '\0') {
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar6 + uVar4 * 0x28) = param_3;
    *(undefined *)(iVar2 + 0x25) = 0;
    *(undefined4 *)(iVar2 + 4) = param_4;
    *(undefined *)(iVar2 + 0x24) = 0;
    *(undefined *)(iVar2 + 0x27) = *(undefined *)((int)param_2 + 0xe);
    uVar1 = DAT_0001ee48;
    if (*(char *)((int)param_2 + 0xd) != '\0') {
      *(undefined4 *)((*param_2 + 0x1c0) * 4 + 0x50000000) = DAT_0001ee48;
      *(undefined4 *)((param_2[1] + 0x1c0) * 4 + 0x50000000) = uVar1;
      uVar3 = *param_2;
      if (0x1f < uVar3) {
        FUN_0001f82c(0x1d0,DAT_0001ee60);
      }
      _DAT_50000508 = 1 << (uVar3 & 0xff);
      uVar3 = param_2[1];
      if (0x1f < uVar3) {
        FUN_0001f82c(0x1d0,DAT_0001ee60);
      }
      uVar1 = DAT_0001ee54;
      _DAT_50000508 = 1 << (uVar3 & 0xff);
      *(undefined4 *)((*param_2 + 0x1c0) * 4 + 0x50000000) = DAT_0001ee54;
      *(undefined4 *)((param_2[1] + 0x1c0) * 4 + 0x50000000) = uVar1;
      iVar6 = 4;
      do {
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar6 = 0;
      do {
        uVar3 = param_2[1];
        if (0x1f < uVar3) {
          FUN_0001f82c(0x1d0,DAT_0001ee60);
        }
        if ((int)((_DAT_50000510 >> (uVar3 & 0xff)) << 0x1f) < 0) {
          if (iVar6 == 0) goto LAB_0001ec06;
          break;
        }
        uVar3 = *param_2;
        if (0x1f < uVar3) {
          FUN_0001f82c(0x1d0,DAT_0001ee60);
        }
        *(int *)(DAT_0001ee4c + 0x50000000) = 1 << (uVar3 & 0xff);
        iVar2 = 4;
        do {
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        uVar3 = *param_2;
        if (0x1f < uVar3) {
          FUN_0001f82c(0x1d0,DAT_0001ee60);
        }
        _DAT_50000508 = 1 << (uVar3 & 0xff);
        iVar2 = 4;
        do {
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 9);
      uVar3 = param_2[1];
      if (0x1f < uVar3) {
        FUN_0001f82c(0x1d0,DAT_0001ee60);
      }
      *(int *)(DAT_0001ee4c + 0x50000000) = 1 << (uVar3 & 0xff);
      iVar6 = 4;
      do {
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      uVar3 = param_2[1];
      if (0x1f < uVar3) {
        FUN_0001f82c(0x1d0,DAT_0001ee60);
      }
      _DAT_50000508 = 1 << (uVar3 & 0xff);
    }
LAB_0001ec06:
    uVar1 = DAT_0001ee48;
    *(undefined4 *)((*param_2 + 0x1c0) * 4 + 0x50000000) = DAT_0001ee48;
    *(undefined4 *)((param_2[1] + 0x1c0) * 4 + 0x50000000) = uVar1;
    uVar5 = *param_1;
    uVar3 = param_2[1];
    *(uint *)(uVar5 + 0x508) = *param_2;
    *(uint *)(uVar5 + DAT_0001ee4c) = uVar3;
    *(uint *)(uVar5 + DAT_0001ee50) = param_2[2];
    if (*(int *)(DAT_0001ee44 + uVar4 * 0x28) != 0) {
      FUN_0001de40((int)(char)(*param_1 >> 0xc),*(undefined *)(param_2 + 3));
    }
    uVar1 = 0;
    *(undefined *)(uVar4 * 0x28 + DAT_0001ee44 + 0x22) = 1;
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}


/* ---- FUN_0001ee68 @ 0001ee68 ---- */

void FUN_0001ee68(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = DAT_0001eea4;
  bVar1 = *(byte *)(param_1 + 1);
  cVar2 = *(char *)(DAT_0001eea4 + (uint)bVar1 * 0x28 + 0x22);
  if (cVar2 != '\x01') {
    FUN_0001f82c(0x16a,DAT_0001eea8,param_3,cVar2,param_4);
  }
  *(undefined4 *)(*param_1 + 0x500) = 5;
  *(undefined *)(iVar3 + (uint)bVar1 * 0x28 + 0x22) = 2;
  return;
}


/* ---- FUN_0001eeac @ 0001eeac ---- */

undefined4
FUN_0001eeac(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  FUN_0001b1fc(&local_34,0,0xc);
  uVar4 = local_34;
  iVar5 = *param_1;
  bVar1 = *(byte *)(param_1 + 1);
  *(undefined4 *)(iVar5 + 0x308) = 0xffffffff;
  iVar2 = DAT_0001ef6c;
  iVar3 = DAT_0001ef6c + (uint)bVar1 * 0x28;
  pcVar6 = (char *)(iVar3 + 0x24);
  if (*pcVar6 == '\0') {
    *pcVar6 = '\x01';
    *(uint *)(iVar3 + 0x18) = (uint)(param_5 != '\0') * 0x20;
    *(undefined4 *)(iVar3 + 0xc) = local_34;
    *(undefined4 *)(iVar3 + 0x10) = param_3;
    *(undefined4 *)(iVar3 + 0x14) = uStack_2c;
    *(char *)(iVar3 + 0x20) = (char)param_4;
    *(undefined4 *)(iVar5 + 0x588) = param_2;
    *(char *)(iVar3 + 0x21) = param_5;
    *(undefined4 *)(iVar3 + 0x1c) = param_3;
    local_30 = param_3;
    uVar4 = FUN_0001e9e4(iVar3,iVar5,param_3,param_4,param_5);
    if (*(int *)(iVar2 + (uint)bVar1 * 0x28) == 0) {
      *pcVar6 = '\0';
    }
  }
  else {
    uVar4 = 0x11;
    *(undefined4 *)(iVar5 + 0x304) = *(undefined4 *)(iVar3 + 8);
  }
  return uVar4;
}


/* ---- FUN_0001ef70 @ 0001ef70 ---- */

undefined4 FUN_0001ef70(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  FUN_0001b1fc(&local_34,0,0xc);
  bVar1 = *(byte *)(param_1 + 1);
  iVar6 = *param_1;
  *(undefined4 *)(iVar6 + 0x308) = 0xffffffff;
  iVar3 = DAT_0001f024;
  iVar4 = (uint)bVar1 * 0x28 + DAT_0001f024;
  pbVar7 = (byte *)(iVar4 + 0x24);
  bVar2 = *pbVar7;
  if (bVar2 == 0) {
    *pbVar7 = 1;
    *(uint *)(iVar4 + 0x18) = (uint)bVar2;
    *(undefined4 *)(iVar4 + 0xc) = local_34;
    *(undefined4 *)(iVar4 + 0x10) = param_3;
    *(undefined4 *)(iVar4 + 0x14) = uStack_2c;
    *(char *)(iVar4 + 0x20) = (char)param_4;
    *(undefined4 *)(iVar6 + 0x588) = param_2;
    *(undefined *)(iVar4 + 0x21) = 0;
    *(undefined4 *)(iVar4 + 0x1c) = param_3;
    local_30 = param_3;
    uVar5 = FUN_0001e844(iVar4,iVar6,param_3,param_4);
    if (*(int *)(iVar3 + (uint)bVar1 * 0x28) == 0) {
      *pbVar7 = 0;
    }
  }
  else {
    uVar5 = 0x11;
    *(undefined4 *)(iVar6 + 0x304) = *(undefined4 *)(iVar4 + 8);
  }
  return uVar5;
}


/* ---- FUN_0001f028 @ 0001f028 ---- */

void FUN_0001f028(void)

{
  char cVar1;
  code **ppcVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined local_30 [4];
  code *local_2c;
  code *pcStack_28;
  code *pcStack_24;
  
  ppcVar2 = DAT_0001f1cc;
  if (*DAT_0001f1cc == (code *)0x0) {
    FUN_0001f82c(DAT_0001f1dc,DAT_0001f1d8);
  }
  iVar3 = DAT_0001f1d0;
  if (*(char *)((int)ppcVar2 + 0x23) == '\0') {
    uVar6 = (uint)*(byte *)(ppcVar2 + 8);
    bVar5 = *(byte *)((int)ppcVar2 + 0x26);
    uVar7 = (uint)bVar5;
    if (*(int *)(DAT_0001f1d0 + 0x124) == 0) {
      pcVar4 = ppcVar2[7];
      if (*(int *)(DAT_0001f1d0 + 0x11c) == 0) {
        if (*(int *)(DAT_0001f1d0 + 0x108) != 0) {
          *(undefined4 *)(DAT_0001f1d0 + 0x108) = 0;
          if (*(int *)(iVar3 + 0x124) != 0) goto LAB_0001f05e;
          if (uVar7 < uVar6) {
            pcVar4[uVar7] = SUB41(*(undefined4 *)(iVar3 + 0x518),0);
            bVar5 = *(char *)((int)ppcVar2 + 0x26) + 1;
            *(byte *)((int)ppcVar2 + 0x26) = bVar5;
            if ((uint)bVar5 == uVar6 - 1) {
              *(undefined4 *)(iVar3 + 0x200) = 2;
            }
            else if (uVar6 == bVar5) {
              return;
            }
            *(undefined4 *)(DAT_0001f1d0 + 0x20) = 1;
            return;
          }
        }
      }
      else {
        cVar1 = *(char *)((int)ppcVar2 + 0x21);
        *(undefined4 *)(DAT_0001f1d0 + 0x11c) = 0;
        if (*(int *)(iVar3 + 0x124) == 0) {
          if (uVar7 < uVar6) {
            *(uint *)(iVar3 + DAT_0001f1e0) = (uint)(byte)pcVar4[uVar7];
            *(byte *)((int)ppcVar2 + 0x26) = bVar5 + 1;
            return;
          }
          if (cVar1 != '\0') {
            *(undefined4 *)(iVar3 + 0x1c) = 1;
            goto LAB_0001f098;
          }
          *(undefined4 *)(iVar3 + 0x14) = 1;
        }
        else {
          *(undefined4 *)(iVar3 + 0x124) = 0;
          *(undefined4 *)(iVar3 + 0x14) = 1;
          *(undefined *)((int)ppcVar2 + 0x23) = 1;
        }
      }
    }
    else {
LAB_0001f05e:
      *(undefined4 *)(iVar3 + 0x124) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 1;
      *(undefined *)((int)ppcVar2 + 0x23) = 1;
    }
    if (uVar6 != uVar7) {
      return;
    }
  }
  else {
    *(undefined4 *)(DAT_0001f1d0 + 0x124) = 0;
    *(undefined4 *)(iVar3 + 0x11c) = 0;
    *(undefined4 *)(iVar3 + 0x108) = 0;
  }
  if (*(int *)(DAT_0001f1d0 + 0x104) == 0) {
    return;
  }
  *(undefined4 *)(DAT_0001f1d0 + 0x104) = 0;
LAB_0001f098:
  if (*(char *)((int)ppcVar2 + 0x23) == '\0') {
    if ((*(byte *)(ppcVar2 + 3) - 2 < 2) && (ppcVar2[7] == ppcVar2[4])) {
      *(undefined *)(ppcVar2 + 8) = *(undefined *)((int)ppcVar2 + 0xf);
      ppcVar2[7] = ppcVar2[5];
      *(byte *)((int)ppcVar2 + 0x21) = (byte)((uint)((int)ppcVar2[6] << 0x1a) >> 0x1f);
      if (*(byte *)(ppcVar2 + 3) != 3) {
        FUN_0001e844(ppcVar2,DAT_0001f1d0);
        return;
      }
      FUN_0001e9e4(ppcVar2,DAT_0001f1d0,ppcVar2[5],*(undefined *)((int)ppcVar2 + 0xf),
                   (uint)((int)ppcVar2[6] << 0x1a) >> 0x1f);
      return;
    }
    local_2c = ppcVar2[3];
    pcStack_28 = ppcVar2[4];
    pcStack_24 = ppcVar2[5];
    local_30[0] = 0;
  }
  else {
    local_2c = ppcVar2[3];
    pcStack_28 = ppcVar2[4];
    pcStack_24 = ppcVar2[5];
    uVar6 = *(uint *)(DAT_0001f1d0 + DAT_0001f1d4);
    *(uint *)(DAT_0001f1d0 + DAT_0001f1d4) = uVar6;
    if ((uVar6 & 2) == 0) {
      if ((int)(uVar6 << 0x1d) < 0) {
        local_30[0] = 2;
      }
    }
    else {
      local_30[0] = 1;
    }
  }
  *(undefined *)(ppcVar2 + 9) = 0;
  if (-1 < (int)ppcVar2[6] << 0x1d) {
    (**ppcVar2)(local_30,ppcVar2[1]);
  }
  return;
}


/* ---- FUN_0001f1e4 @ 0001f1e4 ---- */

void FUN_0001f1e4(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined local_30 [4];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = DAT_0001f38c;
  if (*(int *)(DAT_0001f38c + 0x28) == 0) {
    FUN_0001f82c(DAT_0001f39c,DAT_0001f398);
  }
  iVar3 = DAT_0001f390;
  if (*(char *)(iVar2 + 0x4b) == '\0') {
    uVar6 = (uint)*(byte *)(iVar2 + 0x48);
    bVar5 = *(byte *)(iVar2 + 0x4e);
    uVar7 = (uint)bVar5;
    if (*(int *)(DAT_0001f390 + 0x124) == 0) {
      iVar4 = *(int *)(iVar2 + 0x44);
      if (*(int *)(DAT_0001f390 + 0x11c) == 0) {
        if (*(int *)(DAT_0001f390 + 0x108) != 0) {
          *(undefined4 *)(DAT_0001f390 + 0x108) = 0;
          if (*(int *)(iVar3 + 0x124) != 0) goto LAB_0001f21a;
          if (uVar7 < uVar6) {
            *(char *)(iVar4 + uVar7) = (char)*(undefined4 *)(iVar3 + 0x518);
            bVar5 = *(char *)(iVar2 + 0x4e) + 1;
            *(byte *)(iVar2 + 0x4e) = bVar5;
            if ((uint)bVar5 == uVar6 - 1) {
              *(undefined4 *)(iVar3 + 0x200) = 2;
            }
            else if (uVar6 == bVar5) {
              return;
            }
            *(undefined4 *)(DAT_0001f390 + 0x20) = 1;
            return;
          }
        }
      }
      else {
        cVar1 = *(char *)(iVar2 + 0x49);
        *(undefined4 *)(DAT_0001f390 + 0x11c) = 0;
        if (*(int *)(iVar3 + 0x124) == 0) {
          if (uVar7 < uVar6) {
            *(uint *)(iVar3 + DAT_0001f3a0) = (uint)*(byte *)(iVar4 + uVar7);
            *(byte *)(iVar2 + 0x4e) = bVar5 + 1;
            return;
          }
          if (cVar1 != '\0') {
            *(undefined4 *)(iVar3 + 0x1c) = 1;
            goto LAB_0001f254;
          }
          *(undefined4 *)(iVar3 + 0x14) = 1;
        }
        else {
          *(undefined4 *)(iVar3 + 0x124) = 0;
          *(undefined4 *)(iVar3 + 0x14) = 1;
          *(undefined *)(iVar2 + 0x4b) = 1;
        }
      }
    }
    else {
LAB_0001f21a:
      *(undefined4 *)(iVar3 + 0x124) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 1;
      *(undefined *)(iVar2 + 0x4b) = 1;
    }
    if (uVar6 != uVar7) {
      return;
    }
  }
  else {
    *(undefined4 *)(DAT_0001f390 + 0x124) = 0;
    *(undefined4 *)(iVar3 + 0x11c) = 0;
    *(undefined4 *)(iVar3 + 0x108) = 0;
  }
  if (*(int *)(DAT_0001f390 + 0x104) == 0) {
    return;
  }
  *(undefined4 *)(DAT_0001f390 + 0x104) = 0;
LAB_0001f254:
  if (*(char *)(iVar2 + 0x4b) == '\0') {
    if ((*(byte *)(iVar2 + 0x34) - 2 < 2) && (*(int *)(iVar2 + 0x44) == *(int *)(iVar2 + 0x38))) {
      *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar2 + 0x3c);
      *(undefined *)(iVar2 + 0x48) = *(undefined *)(iVar2 + 0x37);
      uVar6 = *(int *)(iVar2 + 0x40) << 0x1a;
      *(byte *)(iVar2 + 0x49) = (byte)(uVar6 >> 0x1f);
      if (*(byte *)(iVar2 + 0x34) != 3) {
        FUN_0001e844(iVar2 + 0x28,DAT_0001f390);
        return;
      }
      FUN_0001e9e4(iVar2 + 0x28,DAT_0001f390,*(undefined4 *)(iVar2 + 0x3c),
                   *(undefined *)(iVar2 + 0x37),uVar6 >> 0x1f);
      return;
    }
    local_2c = *(undefined4 *)(iVar2 + 0x34);
    uStack_28 = *(undefined4 *)(iVar2 + 0x38);
    uStack_24 = *(undefined4 *)(iVar2 + 0x3c);
    local_30[0] = 0;
  }
  else {
    local_2c = *(undefined4 *)(iVar2 + 0x34);
    uStack_28 = *(undefined4 *)(iVar2 + 0x38);
    uStack_24 = *(undefined4 *)(iVar2 + 0x3c);
    uVar6 = *(uint *)(DAT_0001f390 + DAT_0001f394);
    *(uint *)(DAT_0001f390 + DAT_0001f394) = uVar6;
    if ((uVar6 & 2) == 0) {
      if ((int)(uVar6 << 0x1d) < 0) {
        local_30[0] = 2;
      }
    }
    else {
      local_30[0] = 1;
    }
  }
  *(undefined *)(iVar2 + 0x4c) = 0;
  if (-1 < *(int *)(iVar2 + 0x40) << 0x1d) {
    (**(code **)(iVar2 + 0x28))(local_30,*(undefined4 *)(iVar2 + 0x2c));
  }
  return;
}


/* ---- FUN_0001f3a4 @ 0001f3a4 ---- */

undefined4 FUN_0001f3a4(undefined *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined uVar3;
  
  piVar1 = DAT_0001f3d8;
  if (*(char *)((int)DAT_0001f3d8 + 0x12) == '\0') {
    *DAT_0001f3dc = 0;
    if (param_2 != 0) {
      if (param_1 == (undefined *)0x0) {
        uVar3 = 3;
      }
      else {
        uVar3 = *param_1;
      }
      FUN_0001de40(7,uVar3);
    }
    uVar2 = 0;
    *piVar1 = param_2;
    *(undefined *)((int)piVar1 + 0x12) = 1;
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}


/* ---- FUN_0001f3e0 @ 0001f3e0 ---- */

void FUN_0001f3e0(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_1 < DAT_0001f46c) || (DAT_0001f470 <= param_1)) {
    cVar1 = *(char *)(DAT_0001f474 + 0x12);
    iVar3 = DAT_0001f474;
  }
  else {
    FUN_0001f82c(0x76,DAT_0001f478);
    cVar1 = *(char *)(DAT_0001f474 + 0x12);
    iVar3 = DAT_0001f474;
  }
  DAT_0001f474 = iVar3;
  if (cVar1 == '\0') {
    FUN_0001f82c(0x127,DAT_0001f478);
    cVar1 = *(char *)(iVar3 + 0x12);
  }
  if (cVar1 == '\x02') {
    FUN_0001f82c(0x77,DAT_0001f478);
    uVar6 = *(uint *)(iVar3 + 4);
    *(undefined4 *)(param_1 + 4) = 0;
    uVar2 = DAT_0001f478;
  }
  else {
    uVar6 = *(uint *)(iVar3 + 4);
    *(undefined4 *)(param_1 + 4) = 0;
    uVar2 = DAT_0001f478;
  }
  DAT_0001f478 = uVar2;
  if (uVar6 == 0) {
    *(uint *)(iVar3 + 4) = param_1;
  }
  else {
    uVar5 = *(uint *)(uVar6 + 4);
    while (uVar4 = uVar5, uVar4 != 0) {
      if (param_1 == uVar6) {
        FUN_0001f82c(0x83,uVar2);
        uVar6 = *(uint *)(param_1 + 4);
        uVar5 = *(uint *)(uVar6 + 4);
      }
      else {
        uVar5 = *(uint *)(uVar4 + 4);
        uVar6 = uVar4;
      }
    }
    *(uint *)(uVar6 + 4) = param_1;
  }
  return;
}


/* ---- FUN_0001f47c @ 0001f47c ---- */

undefined4 FUN_0001f47c(undefined4 *param_1,undefined2 *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  piVar2 = DAT_0001f508;
  cVar1 = *(char *)((int)DAT_0001f508 + 0x12);
  if (cVar1 == '\0') {
    FUN_0001f82c(0xb1,DAT_0001f518);
    cVar1 = *(char *)((int)piVar2 + 0x12);
  }
  if (cVar1 == '\x02') {
    uVar4 = 0x11;
  }
  else {
    uVar4 = *param_1;
    *(undefined *)((int)piVar2 + 0x12) = 2;
    puVar3 = DAT_0001f510;
    *(undefined4 *)((int)DAT_0001f510 + DAT_0001f50c) = uVar4;
    puVar3[0x140] = 1;
    puVar3[0xc2] = 1;
    *puVar3 = 1;
    if (param_2 == (undefined2 *)0x0) {
      if (*piVar2 == 0) {
        FUN_0001f82c(0xcb,DAT_0001f518);
      }
      piVar2[3] = 0;
      uVar4 = 0;
      DAT_0001f510[0xc1] = 1;
    }
    else {
      do {
      } while (*DAT_0001f514 == 0);
      *DAT_0001f514 = 0;
      puVar3 = DAT_0001f510;
      uVar4 = 0;
      *param_2 = (short)DAT_0001f510[0x142];
      puVar3[0x140] = 0;
      *(undefined *)((int)piVar2 + 0x12) = 1;
    }
  }
  return uVar4;
}


/* ---- FUN_0001f51c @ 0001f51c ---- */

void FUN_0001f51c(void)

{
  byte bVar1;
  code **ppcVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined local_24 [4];
  undefined4 local_20;
  ushort local_1c;
  
  ppcVar2 = DAT_0001f5c0;
  pcVar4 = DAT_0001f5c0[3];
  if (pcVar4 == (code *)0x0) {
    *DAT_0001f5c4 = 0;
    puVar3 = DAT_0001f5c8;
    DAT_0001f5c8[0xc2] = 1;
    puVar3[0x140] = 0;
    local_24[0] = 1;
    uVar5 = puVar3[0x142];
    *(undefined *)((int)ppcVar2 + 0x12) = 1;
    local_20 = (code *)CONCAT22(local_20._2_2_,(short)uVar5);
    (**ppcVar2)(local_24);
  }
  else {
    *DAT_0001f5c4 = 0;
    puVar3 = DAT_0001f5c8;
    DAT_0001f5c8[0x140] = 0;
    bVar1 = *(byte *)((int)ppcVar2 + 0x11);
    *(short *)(pcVar4 + (uint)bVar1 * 2) = (short)puVar3[0x142];
    uVar6 = bVar1 + 1;
    bVar1 = *(byte *)(ppcVar2 + 4);
    *(char *)((int)ppcVar2 + 0x11) = (char)uVar6;
    if ((uVar6 & 0xff) < (uint)bVar1) {
      puVar7 = *(undefined4 **)(ppcVar2[2] + 4);
      if (puVar7 == (undefined4 *)0x0) {
        ppcVar2[2] = ppcVar2[1];
        *(undefined4 *)((int)puVar3 + DAT_0001f5cc) = *(undefined4 *)ppcVar2[1];
        puVar3[0x140] = 1;
      }
      else {
        ppcVar2[2] = (code *)puVar7;
        *(undefined4 *)((int)puVar3 + DAT_0001f5cc) = *puVar7;
        puVar3[0x140] = 1;
        *puVar3 = 1;
      }
    }
    else {
      puVar3[0xc2] = 1;
      *(undefined *)((int)ppcVar2 + 0x12) = 1;
      local_24[0] = 0;
      local_1c = (ushort)bVar1;
      local_20 = pcVar4;
      (**ppcVar2)(local_24);
    }
  }
  return;
}


/* ---- FUN_0001f5d0 @ 0001f5d0 ---- */

void FUN_0001f5d0(void)

{
  if (*(int *)(DAT_0001f5ec + 0x304) << 0x1f < 0) {
    *DAT_0001f5f0 = 0;
    (**DAT_0001f5f4)();
  }
  return;
}


/* ---- FUN_0001f5f8 @ 0001f5f8 ---- */

undefined4 FUN_0001f5f8(byte *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    FUN_0001f82c(0x5a,PTR_s___________________components_dri_0001f664);
  }
  *DAT_0001f64c = param_2;
  if (*DAT_0001f650 == '\0') {
    *DAT_0001f650 = '\x01';
    iVar1 = DAT_0001f654;
    if (param_1 == (byte *)0x0) {
      uVar3 = 0;
      param_1 = PTR_DAT_0001f660;
    }
    else {
      uVar3 = (uint)*param_1;
    }
    *(uint *)(DAT_0001f654 + DAT_0001f658) = uVar3;
    uVar2 = FUN_00031230(*(int *)(param_1 + 4) << 0xf,1000);
    *(undefined4 *)(iVar1 + DAT_0001f65c) = uVar2;
    FUN_0001de40(0x10,param_1[8]);
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}


/* ---- FUN_0001f668 @ 0001f668 ---- */

void FUN_0001f668(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  
  if (*DAT_0001f6a0 == 0) {
    FUN_0001f82c(0x82,DAT_0001f6a8);
  }
  pcVar1 = DAT_0001f6a4;
  if (*DAT_0001f6a4 != '\x01') {
    FUN_0001f82c(0x83,DAT_0001f6a8);
  }
  puVar2 = DAT_0001f6ac;
  DAT_0001f6ac[0xc1] = 1;
  *puVar2 = 1;
  *pcVar1 = '\x02';
  return;
}


/* ---- FUN_0001f6b0 @ 0001f6b0 ---- */

undefined4 FUN_0001f6b0(undefined *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined local_9;
  
  if (param_1 == (undefined *)0x0) {
    FUN_0001f82c(0x97,DAT_0001f718);
  }
  if (*DAT_0001f714 != '\x01') {
    FUN_0001f82c(0x98,DAT_0001f718);
  }
  local_9 = 0;
  FUN_0001bcb0(&local_9);
  uVar1 = *DAT_0001f71c;
  if (uVar1 < 8) {
    *DAT_0001f71c = uVar1 + 1;
    *param_1 = (char)uVar1;
    uVar2 = 0;
    *(uint *)(DAT_0001f720 + 0x508) = 1 << (uVar1 & 0xff) | *(uint *)(DAT_0001f720 + 0x508);
  }
  else {
    uVar2 = 4;
  }
  FUN_0001bcf0(local_9);
  return uVar2;
}


/* ---- FUN_0001f724 @ 0001f724 ---- */

void FUN_0001f724(int param_1)

{
  if (*DAT_0001f748 != '\x02') {
    FUN_0001f82c(0xad,DAT_0001f74c);
  }
  *(undefined4 *)((param_1 + 0x180) * 4 + DAT_0001f750) = DAT_0001f754;
  return;
}


/* ---- FUN_0001f758 @ 0001f758 ---- */

void FUN_0001f758(void)

{
  software_interrupt(0x44);
  return;
}


/* ---- FUN_0001f75c @ 0001f75c ---- */

void FUN_0001f75c(void)

{
  undefined local_14 [12];
  
  FUN_0001b1fc(local_14,0,0xc);
  local_14[0] = 0xb;
  FUN_0001b27c(local_14,0xc,DAT_0001f780);
  return;
}


/* ---- FUN_0001f82c @ 0001f82c ---- */

void FUN_0001f82c(undefined4 param_1,undefined4 param_2)

{
  FUN_0001b210(DAT_0001f83c,param_1,param_2);
  return;
}


/* ---- FUN_0001f840 @ 0001f840 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001f840(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  
  FUN_00029e78();
  FUN_00028d14();
  iVar3 = FUN_0001ba14(0,9,DAT_0001f988,0);
  puVar1 = PTR_s__________main_c_0001f98c;
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x80,PTR_s__________main_c_0001f98c);
  }
  iVar3 = FUN_0001bb3c(PTR_DAT_0001f994,1,PTR_LAB_0001f824_1_0001f990);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x86,puVar1);
  }
  iVar3 = FUN_0001bb3c(PTR_DAT_0001f99c,1,PTR_FUN_0001f75c_1_0001f998);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x8b,puVar1);
  }
  FUN_0001fdec();
  FUN_00024490();
  iVar3 = _DAT_40000400;
  if (_DAT_40000400 << 0x1e < 0) {
    FUN_00029e44();
  }
  _DAT_40000400 = iVar3;
  *DAT_0001f9a0 = iVar3;
  FUN_00024234();
  FUN_0001fcd0();
  FUN_0001fd04();
  FUN_000287bc(DAT_0001f9a4);
  iVar3 = FUN_0001d92c(0x8000);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x1d1,puVar1);
  }
  FUN_00028d74();
  FUN_00025c5c();
  FUN_0002953c();
  FUN_000219f8();
  settings_get_brightness();
  display_set_brightness();
  FUN_00029de8();
  motor_set_level_table();
  FUN_00022e34();
  FUN_00022be0();
  FUN_000237f4();
  FUN_00022ccc();
  FUN_00029de8();
  motor_set_level_table();
  cVar2 = FUN_00029df4();
  motor_set_balance((int)cVar2);
  FUN_000284d8();
  FUN_000292bc();
  FUN_00028d74();
  FUN_000266cc();
  FUN_00024750();
  iVar3 = FUN_0001bb68(DAT_0001f9a8,0x3c0000,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x187,puVar1);
  }
  FUN_000244b4();
  iVar3 = FUN_0001bb68(DAT_0001f9ac,0x8000,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x193,puVar1);
  }
  do {
    FUN_0001b364();
    FUN_0001d944();
  } while( true );
}


/* ---- FUN_0001f9b0 @ 0001f9b0 ---- */

void FUN_0001f9b0(undefined param_1)

{
  *DAT_0001f9b8 = param_1;
  return;
}


/* ---- FUN_0001f9bc @ 0001f9bc ---- */

void FUN_0001f9bc(uint param_1)

{
  if (param_1 == 2) {
    *DAT_0001f9f0 = 0;
  }
  else if (param_1 < 3) {
    if (param_1 == 0) {
      *DAT_0001f9f4 = 0;
    }
    else {
      *DAT_0001f9e8 = 0;
    }
  }
  else if (param_1 == 3) {
    *DAT_0001f9ec = 0;
  }
  return;
}


/* ---- FUN_0001f9f8 @ 0001f9f8 ---- */

void FUN_0001f9f8(uint param_1)

{
  if (param_1 == 2) {
    *DAT_0001fa30 = 1;
  }
  else if (param_1 < 3) {
    if (param_1 == 0) {
      *DAT_0001fa34 = 1;
    }
    else {
      *DAT_0001fa28 = 1;
    }
  }
  else if (param_1 == 3) {
    *DAT_0001fa2c = 1;
  }
  return;
}


/* ---- FUN_0001fa38 @ 0001fa38 ---- */

undefined FUN_0001fa38(void)

{
  return *DAT_0001fa40;
}


/* ---- FUN_0001fa44 @ 0001fa44 ---- */

void FUN_0001fa44(undefined *param_1)

{
  *param_1 = *DAT_0001fa54;
  param_1[1] = *DAT_0001fa58;
  return;
}


/* ---- FUN_0001fa5c @ 0001fa5c ---- */

uint FUN_0001fa5c(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00031344(0xf0 - param_1,0x1a);
  if (uVar1 == 9) {
    uVar1 = 8;
  }
  return uVar1 & 0xff;
}


/* ---- FUN_0001fa74 @ 0001fa74 ---- */

void FUN_0001fa74(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_0001bc28(DAT_0001faa4);
  }
  else {
    iVar1 = FUN_0001bb68(DAT_0001faa4,0x3c0000,0);
    if (iVar1 != 0) {
      FUN_0001b210(iVar1,0x187,DAT_0001faa8);
    }
    FUN_000244b4();
  }
  return;
}


/* ---- FUN_0001faac @ 0001faac ---- */

void FUN_0001faac(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_0001bc28(DAT_0001fad8);
  }
  else {
    iVar1 = FUN_0001bb68(DAT_0001fad8,0x8000,0);
    if (iVar1 != 0) {
      FUN_0001b210(iVar1,0x193,DAT_0001fadc);
    }
  }
  return;
}


/* ---- FUN_0001fae0 @ 0001fae0 ---- */

undefined4 FUN_0001fae0(void)

{
  return *DAT_0001fae8;
}


/* ---- FUN_0001faec @ 0001faec ---- */

void FUN_0001faec(void)

{
  DataSynchronizationBarrier(0xf);
  *(undefined4 *)(DAT_0001fb00 + 0xc) = DAT_0001fb04;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001fb08 @ 0001fb08 ---- */

undefined4 FUN_0001fb08(void)

{
  return 1;
}


/* ---- FUN_0001fb0c @ 0001fb0c ---- */

undefined4 FUN_0001fb0c(void)

{
  return 1;
}


/* ---- FUN_0001fb10 @ 0001fb10 ---- */

undefined4 FUN_0001fb10(void)

{
  return 3;
}


/* ---- FUN_0001fb14 @ 0001fb14 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0001fb14(void)

{
  uint uVar1;
  
  uVar1 = (uint)(_DAT_50000510 * 8) >> 0x1f;
  if (-1 < _DAT_50000510 * 8) {
    uVar1 = 2;
  }
  _DAT_50000770 = 2;
  return uVar1;
}


/* ---- FUN_0001fb3c @ 0001fb3c ---- */

undefined4 FUN_0001fb3c(void)

{
  return 0;
}


/* ---- FUN_0001fb40 @ 0001fb40 ---- */

void FUN_0001fb40(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00029e34(*(undefined4 *)(param_1 + 0x18));
  FUN_00021f68(2);
  iVar1 = DAT_0001fb80;
  do {
    FUN_00028d74();
    iVar2 = iVar1;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  } while( true );
}


/* ---- FUN_0001fb84 @ 0001fb84 ---- */

void FUN_0001fb84(int param_1,int param_2,undefined2 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined param_11;
  
  FUN_00031778(DAT_0001fc94);
  FUN_00031778(DAT_0001fc98,param_1);
  FUN_00031778(DAT_0001fc9c,param_2);
  FUN_00031778(DAT_0001fca0,param_3);
  if (param_1 == DAT_0001fca4) {
    FUN_00031778(DAT_0001fcac,*param_3);
    FUN_00031778(DAT_0001fcb0,*(undefined4 *)(param_3 + 2));
    FUN_00031778(DAT_0001fccc,*(undefined4 *)(param_3 + 4));
    FUN_00029f4c(param_1,param_3);
    piVar1 = DAT_0001fcb4;
    *DAT_0001fcb4 = param_1;
    piVar1[1] = param_2;
    piVar1[2] = (int)param_3;
    piVar1[4] = (int)param_3;
    piVar1[5] = *(int *)(piVar1[4] + 8);
    piVar1[6] = (uint)*(ushort *)piVar1[4];
    piVar1[7] = *(int *)(piVar1[4] + 4);
  }
  else if (param_1 == DAT_0001fca8) {
    FUN_00031778(DAT_0001fcac,*param_3);
    FUN_00031778(DAT_0001fcb0,*(undefined4 *)(param_3 + 2));
    FUN_00029f4c(param_1,param_3);
    piVar1 = DAT_0001fcb4;
    *DAT_0001fcb4 = param_1;
    piVar1[1] = param_2;
    piVar1[2] = (int)param_3;
    piVar1[3] = (int)param_3;
    piVar1[6] = (uint)*(ushort *)piVar1[3];
    piVar1[7] = *(int *)(piVar1[3] + 4);
  }
  else {
    FUN_00029f4c(param_1,param_3);
    piVar1 = DAT_0001fcb4;
    *DAT_0001fcb4 = param_1;
    piVar1[1] = param_2;
    piVar1[2] = (int)param_3;
  }
  param_11 = 1;
  FUN_0001f758(0xb1);
  FUN_00028d74();
  iVar2 = DAT_0001fcc0;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00028d74();
  DataSynchronizationBarrier(0xf);
  *(undefined4 *)(DAT_0001fcc4 + 0xc) = DAT_0001fcc8;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0001fcd0 @ 0001fcd0 ---- */

void FUN_0001fcd0(void)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = DAT_0001fd00;
  local_18 = 0x1e;
  local_14 = 0x1d;
  local_10 = 0x6400000;
  local_c = 3;
  FUN_0001eba4(DAT_0001fd00,&local_18,0,0);
  FUN_0001ee68(uVar1);
  return;
}


/* ---- FUN_0001fd04 @ 0001fd04 ---- */

void FUN_0001fd04(void)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = DAT_0001fd34;
  local_18 = 3;
  local_14 = 4;
  local_10 = 0x6400000;
  local_c = 3;
  FUN_0001eba4(DAT_0001fd34,&local_18,0,0);
  FUN_0001ee68(uVar1);
  return;
}


/* ---- FUN_0001fdec @ 0001fdec ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0001fdec(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  iVar2 = FUN_0001bb3c(PTR_DAT_0001ff28,0,PTR_LAB_0001fd70_1_0001ff24);
  if (iVar2 == 0) {
    iVar2 = FUN_0001ded8();
  }
  else {
    FUN_0001b210(iVar2,0x5a,DAT_0001ff5c);
    iVar2 = FUN_0001ded8();
  }
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x5d,DAT_0001ff5c);
  }
  local_16 = 0;
  local_18 = 0x101;
  iVar2 = FUN_0001df40(0xf,&local_18,PTR_LAB_0001fd78_1_0001ff2c);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,99,DAT_0001ff5c);
  }
  FUN_0001e110(0xf,1);
  _DAT_50000750 = 2;
  _DAT_50000770 = 2;
  *(undefined4 *)(DAT_0001ff30 + 0x50000000) = 2;
  local_12 = 0;
  local_14 = (undefined2)DAT_0001ff34;
  iVar2 = FUN_0001df40(8,&local_14,DAT_0001ff38);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x75,DAT_0001ff5c);
  }
  FUN_0001e110(8,1);
  local_e = 0;
  local_10 = (undefined2)DAT_0001ff3c;
  iVar2 = FUN_0001df40(0x12,&local_10,DAT_0001ff40);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x7c,DAT_0001ff5c);
  }
  FUN_0001e110(0x12,1);
  *(undefined4 *)(DAT_0001ff44 + 0x50000000) = 0xc;
  local_a = 0;
  local_c = (undefined2)DAT_0001ff3c;
  iVar2 = FUN_0001df40(2,&local_c,DAT_0001ff48);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x86,DAT_0001ff5c);
  }
  FUN_0001e110(2,1);
  uVar3 = FUN_0001fb14();
  if (1 < uVar3) {
    *(undefined4 *)(DAT_0001ff4c + 0x50000000) = 2;
  }
  iVar1 = DAT_0001ff50;
  *(undefined4 *)(DAT_0001ff50 + 0x50000000) = 2;
  *(undefined4 *)(iVar1 + 0x50000004) = 2;
  iVar1 = DAT_0001ff54;
  *(undefined4 *)(DAT_0001ff54 + 0x50000000) = 2;
  *(undefined4 *)(iVar1 + 0x50000004) = 2;
  *(undefined4 *)(DAT_0001ff58 + 0x50000000) = 2;
  return iVar2;
}


/* ---- FUN_0001ff60 @ 0001ff60 ---- */

undefined4 FUN_0001ff60(int param_1)

{
  if (param_1 == 0) {
    FUN_0001e22c(0xf);
  }
  else {
    FUN_0001e110(0xf,1);
  }
  return 0;
}


/* ---- FUN_0001ff7c @ 0001ff7c ---- */

undefined4 FUN_0001ff7c(int param_1)

{
  if (param_1 == 0) {
    FUN_0001e22c(0x12);
  }
  else {
    FUN_0001e110(0x12,1);
  }
  return 0;
}


/* ---- FUN_0001ff98 @ 0001ff98 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0001ff98(void)

{
  return ~(_DAT_50000510 >> 8) & 1;
}


/* ---- FUN_0001ffac @ 0001ffac ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0001ffac(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = DAT_0001fff4;
  if (-1 < (int)(_DAT_50000510 << 0x17)) {
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar1 = _DAT_50000510 >> 9 & 1;
  }
  return uVar1;
}


/* ---- FUN_0001fff8 @ 0001fff8 ---- */

void FUN_0001fff8(char param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined local_15;
  undefined2 local_14 [2];
  
  uVar1 = DAT_00020100;
  local_14[0] = (undefined2)DAT_000200fc;
  iVar2 = FUN_0001eeac(DAT_00020100,0x3a,local_14,2,0);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x51,DAT_00020104);
  }
  local_14[0] = 0x102;
  iVar2 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x51,DAT_00020104);
  }
  local_15 = 3;
  iVar2 = FUN_0001eeac(uVar1,0x3a,&local_15,1,0);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x61,DAT_00020104);
  }
  iVar2 = FUN_0001ef70(uVar1,0x3a,local_14,1);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,100,DAT_00020104);
  }
  local_14[0] = CONCAT11(param_1 + ((byte)local_14[0] & 0xf),3);
  iVar2 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x51,DAT_00020104);
  }
  local_14[0] = (undefined2)DAT_000200fc;
  iVar2 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x51,DAT_00020104);
  }
  local_14[0] = 1;
  iVar2 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x51,DAT_00020104);
  }
  return;
}


/* ---- aw20036_write_enables @ 00020108 ---- */

void aw20036_write_enables(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 local_14 [2];
  
  uVar1 = DAT_00020240;
  local_14[0] = (undefined2)DAT_0002023c;
  iVar3 = FUN_0001eeac(DAT_00020240,0x3a,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020248);
  }
  puVar2 = DAT_00020244;
  local_14[0] = CONCAT11(DAT_00020244[0x2d] + DAT_00020244[0x5a],DAT_00020244[0x2e]);
  iVar3 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020248);
  }
  local_14[0] = CONCAT11(*puVar2,puVar2[1]);
  iVar3 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020248);
  }
  local_14[0] = CONCAT11(puVar2[0x3c] + puVar2[0x69],puVar2[0x3d]);
  iVar3 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020248);
  }
  local_14[0] = CONCAT11(puVar2[0xf],puVar2[0x10]);
  iVar3 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020248);
  }
  local_14[0] = CONCAT11(puVar2[0x4b] + puVar2[0x78],puVar2[0x4c]);
  iVar3 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020248);
  }
  local_14[0] = CONCAT11(puVar2[0x1e],puVar2[0x1f]);
  iVar3 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020248);
  }
  return;
}


/* ---- aw20036_commit_all @ 0002024c ---- */
/* 63 I2C writes: page2 (scaling) x27, page1 (PWM=RGB>>2) x27, enables x7 */

/* 63 I2C writes: page2 (scaling) x27, page1 (PWM=RGB>>2) x27, enables x7 */

void aw20036_commit_all(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined2 local_24 [2];
  
  uVar1 = DAT_000203d4;
  local_24[0] = (undefined2)DAT_000203d0;
  iVar4 = FUN_0001eeac(DAT_000203d4,0x3a,local_24,2,0);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,0x51,DAT_000203dc);
  }
  uVar3 = DAT_000203dc;
  puVar2 = DAT_000203d8;
  puVar7 = DAT_000203d8 + 0x87;
  puVar5 = DAT_000203d8;
  do {
    while( true ) {
      local_24[0] = CONCAT11(*puVar5,puVar5[6]);
      iVar4 = FUN_0001eeac(uVar1,0x3a,local_24,2,0);
      if (iVar4 != 0) {
        FUN_0001b210(iVar4,0x51,uVar3);
      }
      local_24[0] = CONCAT11(puVar5[1],puVar5[7]);
      iVar4 = FUN_0001eeac(uVar1,0x3a,local_24,2,0);
      if (iVar4 != 0) {
        FUN_0001b210(iVar4,0x51,uVar3);
      }
      local_24[0] = CONCAT11(puVar5[2],puVar5[8]);
      iVar4 = FUN_0001eeac(uVar1,0x3a,local_24,2,0);
      if (iVar4 == 0) break;
      puVar5 = puVar5 + 0xf;
      FUN_0001b210(iVar4,0x51,DAT_000203dc);
      if (puVar5 == puVar7) goto LAB_000202e0;
    }
    puVar5 = puVar5 + 0xf;
  } while (puVar5 != puVar7);
LAB_000202e0:
  local_24[0] = (undefined2)DAT_000203e0;
  iVar4 = FUN_0001eeac(uVar1,0x3a,local_24,2,0);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,0x51,DAT_000203dc);
  }
  uVar3 = DAT_000203dc;
  pbVar6 = DAT_000203e4;
  do {
    while( true ) {
      local_24[0] = CONCAT11(*pbVar6 >> 2,pbVar6[6]);
      iVar4 = FUN_0001eeac(uVar1,0x3a,local_24,2,0);
      if (iVar4 != 0) {
        FUN_0001b210(iVar4,0x51,uVar3);
      }
      local_24[0] = CONCAT11(pbVar6[1] >> 2,pbVar6[7]);
      iVar4 = FUN_0001eeac(uVar1,0x3a,local_24,2,0);
      if (iVar4 != 0) {
        FUN_0001b210(iVar4,0x51,uVar3);
      }
      local_24[0] = CONCAT11(pbVar6[2] >> 2,pbVar6[8]);
      iVar4 = FUN_0001eeac(uVar1,0x3a,local_24,2,0);
      if (iVar4 != 0) break;
      pbVar6 = pbVar6 + 0xf;
      if (puVar2 + 0x84 == pbVar6) goto LAB_00020360;
    }
    pbVar6 = pbVar6 + 0xf;
    FUN_0001b210(iVar4,0x51,DAT_000203dc);
  } while (puVar2 + 0x84 != pbVar6);
LAB_00020360:
  aw20036_write_enables();
  return;
}


/* ---- aw20036_commit_led @ 000203e8 ---- */
/* one LED: scaling x3, PWM x3, enable */

/* one LED: scaling x3, PWM x3, enable */

void aw20036_commit_led(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_1c [2];
  
  uVar1 = DAT_000205fc;
  local_1c[0] = (undefined2)DAT_000205f8;
  iVar2 = FUN_0001eeac(DAT_000205fc,0x3a,local_1c,2,0);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x51,DAT_00020610);
  }
  iVar2 = DAT_00020600;
  iVar3 = param_1 * 0xf + DAT_00020600;
  local_1c[0] = CONCAT11(*(undefined *)(iVar3 + 6),*(undefined *)(iVar3 + 0xc));
  iVar3 = FUN_0001eeac(uVar1,0x3a,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020610);
  }
  iVar3 = param_1 * 0xf + iVar2;
  local_1c[0] = CONCAT11(*(undefined *)(iVar3 + 7),*(undefined *)(iVar3 + 0xd));
  iVar3 = FUN_0001eeac(uVar1,0x3a,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020610);
  }
  iVar3 = param_1 * 0xf + iVar2;
  local_1c[0] = CONCAT11(*(undefined *)(iVar3 + 8),*(undefined *)(iVar3 + 0xe));
  iVar3 = FUN_0001eeac(uVar1,0x3a,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020610);
  }
  local_1c[0] = (undefined2)DAT_00020604;
  iVar3 = FUN_0001eeac(uVar1,0x3a,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020610);
  }
  iVar3 = param_1 * 0xf + iVar2;
  local_1c[0] = CONCAT11(*(byte *)(iVar3 + 3) >> 2,*(undefined *)(iVar3 + 9));
  iVar3 = FUN_0001eeac(uVar1,0x3a,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020610);
  }
  iVar3 = param_1 * 0xf + iVar2;
  local_1c[0] = CONCAT11(*(byte *)(iVar3 + 4) >> 2,*(undefined *)(iVar3 + 10));
  iVar3 = FUN_0001eeac(uVar1,0x3a,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020610);
  }
  iVar2 = param_1 * 0xf + iVar2;
  local_1c[0] = CONCAT11(*(byte *)(iVar2 + 5) >> 2,*(undefined *)(iVar2 + 0xb));
  iVar2 = FUN_0001eeac(uVar1,0x3a,local_1c,2,0);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x51,DAT_00020610);
  }
  local_1c[0] = (undefined2)DAT_00020608;
  iVar2 = FUN_0001eeac(uVar1,0x3a,local_1c,2,0);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x51,DAT_00020610);
  }
  if (param_1 < 9) {
                    /* WARNING: Could not recover jumptable at 0x00020520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_0002060c + param_1 * 4))();
    return;
  }
  return;
}


/* ---- FUN_00020614 @ 00020614 ---- */

void FUN_00020614(void)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  puVar4 = DAT_000207b8;
  *DAT_000207b8 = (short)DAT_000207bc;
  puVar5 = DAT_000207c0;
  *(undefined *)(puVar4 + 1) = 0x38;
  FUN_00031764((int)puVar4 + 3,puVar5,3);
  uVar1 = *DAT_000207c4;
  *(undefined *)(puVar4 + 3) = uVar1;
  puVar6 = DAT_000207cc;
  uVar2 = *DAT_000207c8;
  *(undefined *)((int)puVar4 + 7) = uVar2;
  uVar3 = *puVar6;
  *(undefined *)((int)puVar4 + 9) = 10;
  uVar7 = DAT_000207d0;
  *(undefined *)(puVar4 + 4) = uVar3;
  puVar4[5] = (short)uVar7;
  *(undefined4 *)(puVar4 + 6) = DAT_000207d4;
  puVar4[8] = (short)DAT_000207d8;
  FUN_00031764(puVar4 + 9,puVar5,3);
  *(undefined *)((int)puVar4 + 0x15) = uVar1;
  *(undefined4 *)(puVar4 + 0xc) = DAT_000207dc;
  *(undefined4 *)(puVar4 + 0xe) = DAT_000207e0;
  *(undefined *)(puVar4 + 0xb) = uVar2;
  *(undefined *)((int)puVar4 + 0x17) = uVar3;
  *(undefined *)(puVar4 + 0x10) = 0x38;
  FUN_00031764((int)puVar4 + 0x21,puVar5,3);
  *(undefined *)(puVar4 + 0x12) = uVar1;
  *(undefined *)((int)puVar4 + 0x25) = uVar2;
  *(undefined *)(puVar4 + 0x13) = uVar3;
  *(undefined *)((int)puVar4 + 0x27) = 0x22;
  *(undefined4 *)(puVar4 + 0x14) = DAT_000207e4;
  *(undefined4 *)(puVar4 + 0x16) = DAT_000207e8;
  puVar4[0x18] = *puVar5;
  *(undefined *)(puVar4 + 0x19) = *(undefined *)(puVar5 + 1);
  *(undefined *)((int)puVar4 + 0x33) = uVar1;
  *(undefined *)(puVar4 + 0x1a) = uVar2;
  *(undefined *)((int)puVar4 + 0x35) = uVar3;
  puVar4[0x1b] = 1;
  *(undefined4 *)(puVar4 + 0x1c) = DAT_000207ec;
  puVar4[0x1e] = (short)DAT_000207f0;
  *(undefined *)(puVar4 + 0x1f) = 7;
  FUN_00031764((int)puVar4 + 0x3f,puVar5,3);
  *(undefined *)(puVar4 + 0x21) = uVar1;
  *(undefined *)((int)puVar4 + 0x43) = uVar2;
  *(undefined *)(puVar4 + 0x22) = uVar3;
  *(undefined *)((int)puVar4 + 0x45) = 0xd;
  puVar4[0x23] = (short)DAT_000207f4;
  *(undefined4 *)(puVar4 + 0x24) = DAT_000207f8;
  puVar4[0x26] = (short)DAT_000207fc;
  FUN_00031764(puVar4 + 0x27,puVar5,3);
  *(undefined *)((int)puVar4 + 0x51) = uVar1;
  *(undefined *)(puVar4 + 0x29) = uVar2;
  *(undefined *)((int)puVar4 + 0x53) = uVar3;
  *(undefined4 *)(puVar4 + 0x2a) = DAT_00020800;
  *(undefined4 *)(puVar4 + 0x2c) = DAT_00020804;
  *(undefined *)(puVar4 + 0x2e) = 0x38;
  FUN_00031764((int)puVar4 + 0x5d,puVar5,3);
  *(undefined *)(puVar4 + 0x30) = uVar1;
  *(undefined *)((int)puVar4 + 0x61) = uVar2;
  *(undefined *)(puVar4 + 0x31) = uVar3;
  *(undefined *)((int)puVar4 + 99) = 4;
  *(undefined4 *)(puVar4 + 0x32) = DAT_00020808;
  *(undefined4 *)(puVar4 + 0x34) = DAT_0002080c;
  puVar4[0x36] = *puVar5;
  *(undefined *)(puVar4 + 0x37) = *(undefined *)(puVar5 + 1);
  *(undefined *)((int)puVar4 + 0x6f) = uVar1;
  *(undefined *)(puVar4 + 0x38) = uVar2;
  uVar7 = DAT_00020810;
  *(undefined *)((int)puVar4 + 0x71) = uVar3;
  puVar4[0x39] = (short)uVar7;
  uVar7 = DAT_00020818;
  *(undefined4 *)(puVar4 + 0x3a) = DAT_00020814;
  puVar4[0x3c] = (short)uVar7;
  *(undefined *)(puVar4 + 0x3d) = 0x38;
  FUN_00031764((int)puVar4 + 0x7b,puVar5,3);
  *(undefined *)((int)puVar4 + 0x81) = 0x1c;
  puVar4[0x41] = (short)DAT_0002081c;
  puVar4[0x42] = (short)DAT_00020820;
  *(undefined *)(puVar4 + 0x43) = 0x1b;
  *(undefined *)(puVar4 + 0x3f) = uVar1;
  *(undefined *)((int)puVar4 + 0x7f) = uVar2;
  *(undefined *)(puVar4 + 0x40) = uVar3;
  return;
}


/* ---- aw20036_set_brightness @ 00020824 ---- */

void aw20036_set_brightness(int param_1,undefined param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = DAT_00020848 + param_1 * 0xf;
  *(undefined *)(iVar1 + 6) = param_2;
  if ((param_3 < 3) || (param_4 < 5)) {
    *(char *)(iVar1 + 7) = (char)param_3;
    *(char *)(iVar1 + 8) = (char)param_4;
  }
  else {
    *(char *)(iVar1 + 7) = (char)param_3 + -2;
    *(char *)(iVar1 + 8) = (char)param_4 + -4;
  }
  return;
}


/* ---- aw20036_all_off @ 0002084c ---- */
/* clears all 9 enable flags and writes enables (0x20108) */

/* clears all 9 enable flags and writes enables (0x20108) */

void aw20036_all_off(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_00020878;
  DAT_00020878[0x2d] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x5a] = 0;
  puVar1[0x69] = 0;
  *puVar1 = 0;
  puVar1[0xf] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x78] = 0;
  aw20036_write_enables();
  return;
}


/* ---- aw20036_set_rgb @ 0002087c ---- */

void aw20036_set_rgb(int param_1,undefined4 param_2)

{
  undefined4 local_c [3];
  
  local_c[0] = param_2;
  FUN_00031764(DAT_00020898 + param_1 * 0xf + 3,local_c,3);
  return;
}


/* ---- FUN_0002089c @ 0002089c ---- */

void FUN_0002089c(undefined4 param_1)

{
  undefined uVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  undefined2 local_2c [4];
  
  uVar3 = DAT_00020a00;
  local_2c[0] = (undefined2)DAT_000209fc;
  iVar5 = FUN_0001eeac(DAT_00020a00,0x3a,local_2c,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x51,DAT_00020a04);
  }
  uVar4 = DAT_00020a04;
  cVar6 = '\0';
  do {
    while( true ) {
      uVar1 = (undefined)((uint)param_1 >> 8);
      local_2c[0] = CONCAT11(uVar1,cVar6);
      iVar5 = FUN_0001eeac(uVar3,0x3a,local_2c,2,0);
      if (iVar5 != 0) {
        FUN_0001b210(iVar5,0x51,uVar4);
      }
      local_2c[0] = CONCAT11((char)param_1,cVar6 + '\x01');
      iVar5 = FUN_0001eeac(uVar3,0x3a,local_2c,2,0);
      if (iVar5 != 0) {
        FUN_0001b210(iVar5,0x51,uVar4);
      }
      uVar2 = (undefined)((uint)param_1 >> 0x10);
      local_2c[0] = CONCAT11(uVar2,cVar6 + '\x02');
      iVar5 = FUN_0001eeac(uVar3,0x3a,local_2c,2,0);
      if (iVar5 == 0) break;
      cVar6 = cVar6 + '\f';
      FUN_0001b210(iVar5,0x51,DAT_00020a04);
      if (cVar6 == '$') goto LAB_00020938;
    }
    cVar6 = cVar6 + '\f';
  } while (cVar6 != '$');
LAB_00020938:
  uVar4 = DAT_00020a04;
  cVar6 = '\x03';
  do {
    while( true ) {
      local_2c[0] = CONCAT11(uVar2,cVar6);
      iVar5 = FUN_0001eeac(uVar3,0x3a,local_2c,2,0);
      if (iVar5 != 0) {
        FUN_0001b210(iVar5,0x51,uVar4);
      }
      local_2c[0] = CONCAT11((char)param_1,cVar6 + '\x01');
      iVar5 = FUN_0001eeac(uVar3,0x3a,local_2c,2,0);
      if (iVar5 != 0) {
        FUN_0001b210(iVar5,0x51,uVar4);
      }
      local_2c[0] = CONCAT11(uVar1,cVar6 + '\x02');
      iVar5 = FUN_0001eeac(uVar3,0x3a,local_2c,2,0);
      if (iVar5 == 0) break;
      cVar6 = cVar6 + '\x06';
      FUN_0001b210(iVar5,0x51,DAT_00020a04);
      if (cVar6 == '\'') {
        return;
      }
    }
    cVar6 = cVar6 + '\x06';
  } while (cVar6 != '\'');
  return;
}


/* ---- aw20036_led_on @ 00020a08 ---- */

void aw20036_led_on(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined *)(param_1 * 0xf + DAT_00020a24) = 0;
  }
  else {
    *(undefined *)(param_1 * 0xf + DAT_00020a24) = *(undefined *)(DAT_00020a24 + param_1 * 0xf + 2);
  }
  return;
}


/* ---- FUN_00020a28 @ 00020a28 ---- */

undefined4 FUN_00020a28(uint param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined uVar4;
  undefined uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined uVar8;
  undefined2 local_2c [4];
  undefined uVar2;
  undefined uVar3;
  
  uVar6 = DAT_00020d9c;
  local_2c[0] = (undefined2)DAT_00020d98;
  uVar4 = (undefined)((uint)param_2 >> 8);
  uVar5 = (undefined)((uint)param_2 >> 0x10);
  iVar7 = FUN_0001eeac(DAT_00020d9c,0x3a,local_2c,2,0);
  uVar8 = (undefined)(param_1 >> 8);
  uVar1 = (undefined)(param_1 >> 0x10);
  uVar2 = (undefined)(param_1 >> 0x18);
  uVar3 = (undefined)param_2;
  if (iVar7 != 0) {
    FUN_0001b210(iVar7,0x51,DAT_00020da0);
  }
  if ((param_1 & 0xff) == 1) {
    local_2c[0] = CONCAT11(uVar1,0x45);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar8,0x48);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar2,0x4e);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar3,0x4f);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar4,0x50);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar5,0x51);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 == 0) {
      uVar8 = 0x57;
    }
    else {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
      uVar8 = 0x57;
    }
  }
  else if ((param_1 & 0xff) == 2) {
    local_2c[0] = CONCAT11(uVar1,0x46);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar8,0x49);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar2,0x52);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar3,0x53);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar4,0x54);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar5,0x55);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 == 0) {
      uVar8 = 0x58;
    }
    else {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
      uVar8 = 0x58;
    }
  }
  else {
    if ((param_1 & 0xff) != 0) {
      return 0xffffffff;
    }
    local_2c[0] = CONCAT11(uVar1,0x44);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar8,0x47);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar2,0x4a);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar3,0x4b);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar4,0x4c);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    local_2c[0] = CONCAT11(uVar5,0x4d);
    iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
    if (iVar7 != 0) {
      FUN_0001b210(iVar7,0x51,DAT_00020da0);
    }
    uVar8 = 0x56;
  }
  local_2c[0] = CONCAT11((char)((uint)param_2 >> 0x18),uVar8);
  iVar7 = FUN_0001eeac(uVar6,0x3a,local_2c,2,0);
  if (iVar7 != 0) {
    FUN_0001b210(iVar7,0x51,DAT_00020da0);
  }
  return 0;
}


/* ---- FUN_00020da4 @ 00020da4 ---- */

undefined4 FUN_00020da4(uint param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined local_1d;
  undefined2 local_1c [2];
  
  uVar2 = DAT_00020ecc;
  local_1c[0] = (undefined2)DAT_00020ec8;
  iVar3 = FUN_0001eeac(DAT_00020ecc,0x3a,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020ed0);
  }
  local_1d = 0x43;
  iVar3 = FUN_0001eeac(uVar2,0x3a,&local_1d,1,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x61,DAT_00020ed0);
  }
  iVar3 = FUN_0001ef70(uVar2,0x3a,local_1c,1);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,100,DAT_00020ed0);
  }
  bVar1 = (byte)(1 << (param_1 & 0xff));
  local_1c[0]._0_1_ = (byte)local_1c[0] | bVar1;
  if (param_2 != 0) {
    local_1c[0]._0_1_ = (byte)local_1c[0] | (byte)(1 << (param_1 + 4 & 0xff));
  }
  local_1c[0] = CONCAT11((byte)local_1c[0],0x43);
  iVar3 = FUN_0001eeac(uVar2,0x3a,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020ed0);
  }
  local_1d = 0x59;
  iVar3 = FUN_0001eeac(uVar2,0x3a,&local_1d,1,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x61,DAT_00020ed0);
  }
  iVar3 = FUN_0001ef70(uVar2,0x3a,local_1c,1);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,100,DAT_00020ed0);
  }
  local_1c[0] = CONCAT11(bVar1 | (byte)local_1c[0],0x59);
  iVar3 = FUN_0001eeac(uVar2,0x3a,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020ed0);
  }
  return 0;
}


/* ---- FUN_00020ed4 @ 00020ed4 ---- */

undefined4 FUN_00020ed4(uint param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined local_1d;
  undefined2 local_1c [4];
  
  uVar2 = DAT_00020fe4;
  local_1c[0] = (undefined2)DAT_00020fe0;
  iVar3 = FUN_0001eeac(DAT_00020fe4,0x3a,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020fe8);
  }
  local_1d = 0x43;
  iVar3 = FUN_0001eeac(uVar2,0x3a,&local_1d,1,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x61,DAT_00020fe8);
  }
  iVar3 = FUN_0001ef70(uVar2,0x3a,local_1c,1);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,100,DAT_00020fe8);
  }
  bVar1 = ~(byte)(1 << (param_1 & 0xff));
  local_1c[0] = CONCAT11((byte)local_1c[0] & bVar1,0x43);
  iVar3 = FUN_0001eeac(uVar2,0x3a,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020fe8);
  }
  local_1d = 0x59;
  iVar3 = FUN_0001eeac(uVar2,0x3a,&local_1d,1,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x61,DAT_00020fe8);
  }
  iVar3 = FUN_0001ef70(uVar2,0x3a,local_1c,1);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,100,DAT_00020fe8);
  }
  local_1c[0] = CONCAT11(bVar1 & (byte)local_1c[0],0x59);
  iVar3 = FUN_0001eeac(uVar2,0x3a,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_00020fe8);
  }
  return 0;
}


/* ---- FUN_00020fec @ 00020fec ---- */

void FUN_00020fec(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 local_24 [4];
  
  uVar1 = DAT_00021068;
  local_24[0] = (undefined2)DAT_00021064;
  iVar3 = FUN_0001eeac(DAT_00021068,0x3a,local_24,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x51,DAT_0002106c);
  }
  uVar2 = DAT_0002106c;
  if (param_1 < 4) {
    iVar3 = 0;
    do {
      while( true ) {
        local_24[0] = CONCAT11((char)param_1,(char)iVar3);
        iVar4 = FUN_0001eeac(uVar1,0x3a,local_24,2,0);
        if (iVar4 != 0) break;
        iVar3 = iVar3 + 1;
        if (iVar3 == 0x24) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      FUN_0001b210(iVar4,0x51,uVar2);
    } while (iVar3 != 0x24);
  }
  return;
}


/* ---- FUN_00021070 @ 00021070 ---- */

void FUN_00021070(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined local_15;
  ushort local_14 [2];
  
  uVar1 = DAT_00021308;
  local_14[0] = (ushort)DAT_00021304;
  iVar2 = FUN_0001eeac(DAT_00021308,0x3a,local_14,2,0);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x51,DAT_0002130c);
  }
  local_15 = 0xb;
  iVar2 = FUN_0001eeac(uVar1,0x3a,&local_15,1,0);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x61,DAT_0002130c);
  }
  iVar2 = FUN_0001ef70(uVar1,0x3a,local_14,1);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,100,DAT_0002130c);
  }
  uVar3 = (uint)(byte)local_14[0];
  if ((int)(uVar3 << 0x1b) < 0) {
    FUN_00020ed4(0);
  }
  if ((int)(uVar3 << 0x1a) < 0) {
    local_14[0] = (ushort)DAT_00021304;
    iVar2 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,0x51,DAT_0002130c);
    }
    local_15 = 0x43;
    iVar2 = FUN_0001eeac(uVar1,0x3a,&local_15,1,0);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,0x61,DAT_0002130c);
    }
    iVar2 = FUN_0001ef70(uVar1,0x3a,local_14,1);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,100,DAT_0002130c);
    }
    local_14[0] = CONCAT11((byte)local_14[0],0x43) & 0xfdff;
    iVar2 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,0x51,DAT_0002130c);
    }
    local_15 = 0x59;
    iVar2 = FUN_0001eeac(uVar1,0x3a,&local_15,1,0);
    if (iVar2 == 0) {
      iVar2 = FUN_0001ef70(uVar1,0x3a,local_14,1);
    }
    else {
      FUN_0001b210(iVar2,0x61,DAT_0002130c);
      iVar2 = FUN_0001ef70(uVar1,0x3a,local_14,1);
    }
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,100,DAT_0002130c);
    }
    local_14[0] = CONCAT11((byte)local_14[0],0x59) & 0xfdff;
    iVar2 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,0x51,DAT_0002130c);
    }
  }
  if ((int)(uVar3 << 0x19) < 0) {
    local_14[0] = (ushort)DAT_00021304;
    iVar2 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,0x51,DAT_0002130c);
    }
    local_15 = 0x43;
    iVar2 = FUN_0001eeac(uVar1,0x3a,&local_15,1,0);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,0x61,DAT_0002130c);
    }
    iVar2 = FUN_0001ef70(uVar1,0x3a,local_14,1);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,100,DAT_0002130c);
    }
    local_14[0] = CONCAT11((byte)local_14[0],0x43) & 0xfbff;
    iVar2 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,0x51,DAT_0002130c);
    }
    local_15 = 0x59;
    iVar2 = FUN_0001eeac(uVar1,0x3a,&local_15,1,0);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,0x61,DAT_0002130c);
    }
    iVar2 = FUN_0001ef70(uVar1,0x3a,local_14,1);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,100,DAT_0002130c);
    }
    local_14[0] = CONCAT11((byte)local_14[0],0x59) & 0xfbff;
    iVar2 = FUN_0001eeac(uVar1,0x3a,local_14,2,0);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,0x51,DAT_0002130c);
    }
  }
  return;
}


/* ---- FUN_00021324 @ 00021324 ---- */

void FUN_00021324(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = DAT_00021374;
  if (*DAT_00021374 != 0) {
    iVar3 = (**(code **)(*DAT_00021374 + 0xc))(*(undefined *)(DAT_00021374 + 1));
    if (iVar3 == 1) {
      iVar3 = *piVar1;
      if (*(code **)(iVar3 + 0x10) != (code *)0x0) {
        (**(code **)(iVar3 + 0x10))();
        iVar3 = *piVar1;
      }
      if (*(char *)(iVar3 + 4) != '\0') {
        aw20036_all_off();
      }
      uVar2 = DAT_00021378;
      *(undefined *)(piVar1 + 1) = 0;
      *piVar1 = 0;
      iVar3 = FUN_0001bc28(uVar2);
      if (iVar3 != 0) {
        FUN_0001b210(iVar3,0x5f,DAT_0002137c);
      }
    }
    else {
      *(char *)(piVar1 + 1) = *(char *)(piVar1 + 1) + '\x01';
    }
  }
  return;
}


/* ---- FUN_00021380 @ 00021380 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00021380(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0001fb14();
  if (uVar1 < 2) {
    _DAT_50000508 = 2;
  }
  else {
    *(undefined4 *)(DAT_000213d8 + 0x50000000) = 2;
  }
  iVar2 = 2000;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = FUN_00029ddc();
  FUN_0001fff8((uVar1 & 0xf) << 4);
  *DAT_000213e4 = 0;
  return;
}


/* ---- display_animation @ 000213e8 ---- */
/* index 0..11 via table */

/* index 0..11 via table */

void display_animation(uint param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  
  pcVar1 = DAT_000215d0;
  if ((*DAT_000215d0 == '\0') || (FUN_00021380(), *pcVar1 == '\0')) {
    aw20036_all_off();
  }
  local_18 = local_18 & 0xffffff00;
  if (0xb < param_1) {
    FUN_0002089c(local_1c);
    FUN_00020a28(local_18,local_14);
    FUN_00020fec(1);
    uVar3 = 0;
    do {
      uVar2 = uVar3 & 0xff;
      uVar3 = uVar3 + 1;
      aw20036_led_on(uVar2,1);
    } while (uVar3 != 9);
    aw20036_write_enables();
    FUN_00020da4(0,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0002140a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_000215d4 + param_1 * 4))();
  return;
}


/* ---- anim_sweep_a @ 000215dc ---- */

void anim_sweep_a(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  aw20036_all_off();
  uVar9 = 0;
  do {
    uVar5 = uVar9;
    aw20036_set_rgb(uVar5 & 0xff,param_1);
    pbVar2 = DAT_000217d8;
    uVar9 = uVar5 + 1;
  } while (uVar5 + 1 != 9);
  param_2 = param_2 * 1000;
  uVar9 = 0xfffffffe;
  uVar7 = 0xffffffff;
  uVar5 = uVar5 + 2;
  do {
    uVar8 = uVar5 & 0xff;
    uVar6 = 10 - uVar8 & 0xff;
    if (3 < (int)(uVar5 - 2)) {
      uVar4 = uVar8 - 2 & 0xff;
      aw20036_led_on(uVar4,1);
      bVar1 = *pbVar2;
      aw20036_set_brightness(uVar4,bVar1,bVar1,bVar1);
    }
    if (uVar6 < 5) {
      aw20036_led_on(uVar6,1);
      bVar1 = *pbVar2;
      aw20036_set_brightness(uVar6,bVar1,bVar1,bVar1);
      if ((int)(uVar5 - 10) < (int)(10 - uVar5)) goto LAB_0002168a;
    }
    else {
LAB_0002168a:
      aw20036_led_on(uVar8 - 1 & 0xff,0);
      aw20036_led_on(uVar7 & 0xff,0);
    }
    uVar6 = uVar5 - 1;
    if (uVar5 != 10) {
      if (3 < (int)uVar6) {
        uVar4 = uVar8 - 1 & 0xff;
        aw20036_led_on(uVar4,1);
        bVar1 = *DAT_000217d8 >> 2;
        aw20036_set_brightness(uVar4,bVar1,bVar1,bVar1);
      }
      if (uVar7 != 0xffffffff) {
        if ((int)uVar7 < 5) {
          aw20036_led_on(uVar7 & 0xff,1);
          bVar1 = *pbVar2 >> 2;
          aw20036_set_brightness(uVar7 & 0xff,bVar1,bVar1,bVar1);
        }
        if ((int)(uVar5 - 9) < (int)uVar7) {
          aw20036_led_on(uVar8,0);
          aw20036_led_on(uVar9 & 0xff,0);
        }
      }
    }
    if (uVar5 < 9) {
      if (uVar5 != 3) {
        aw20036_led_on(uVar8,1);
        bVar1 = *DAT_000217d8 >> 4;
        aw20036_set_brightness(uVar8,bVar1,bVar1,bVar1);
        goto joined_r0x0002171a;
      }
LAB_00021626:
      aw20036_led_on(uVar8 + 1 & 0xff,0);
      aw20036_led_on(7 - uVar8 & 0xff,0);
    }
    else {
joined_r0x0002171a:
      if (-1 < (int)uVar9) {
        if (uVar9 == 5) goto LAB_00021626;
        aw20036_led_on(uVar9 & 0xff,1);
        bVar1 = *DAT_000217d8 >> 4;
        aw20036_set_brightness(uVar9 & 0xff,bVar1,bVar1,bVar1);
      }
      if ((int)(uVar5 - 8) < (int)uVar9) goto LAB_00021626;
    }
    aw20036_commit_all();
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 + -1) {
    }
    uVar7 = uVar7 + 1;
    uVar9 = uVar9 + 1;
    uVar5 = uVar6;
    if (uVar6 == 2) {
      aw20036_all_off();
      for (; param_2 != 0; param_2 = param_2 + -1) {
      }
      return;
    }
  } while( true );
}


/* ---- anim_sweep_b @ 000217e4 ---- */

void anim_sweep_b(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  aw20036_all_off();
  uVar5 = 0;
  do {
    uVar7 = uVar5;
    aw20036_set_rgb(uVar7 & 0xff,param_1);
    uVar5 = uVar7 + 1;
  } while (uVar7 + 1 != 9);
  param_2 = param_2 * 1000;
  uVar6 = 5;
  uVar8 = 6;
  uVar5 = uVar7 - 6;
  do {
    uVar7 = 6 - uVar5;
    if (-1 < (int)uVar7) {
      aw20036_led_on(uVar7 & 0xff,1);
      bVar1 = *DAT_000219f4;
      aw20036_set_brightness(uVar7 & 0xff,bVar1,bVar1,bVar1);
    }
    uVar3 = uVar5 & 0xff;
    uVar4 = uVar3 + 2 & 0xff;
    if (uVar5 + 2 < 9) {
      aw20036_led_on(uVar4,1);
      bVar1 = *DAT_000219f4;
      aw20036_set_brightness(uVar4,bVar1,bVar1,bVar1);
      if ((int)uVar7 < (int)(uVar5 + 2)) goto LAB_000218c0;
    }
    else {
LAB_000218c0:
      aw20036_led_on(uVar6 & 0xff,0);
      aw20036_led_on(uVar3 + 1 & 0xff,0);
    }
    if (uVar6 == 5) {
      if (uVar5 != 2) {
LAB_00021904:
        if ((int)(uVar5 + 1) < 9) {
          uVar7 = uVar3 + 1 & 0xff;
          aw20036_led_on(uVar7,1);
          bVar1 = *DAT_000219f4 >> 2;
          aw20036_set_brightness(uVar7,bVar1,bVar1,bVar1);
        }
        if ((int)uVar6 < (int)(uVar5 + 1)) goto LAB_00021830;
        if ((int)uVar8 < 5) goto LAB_00021844;
        goto LAB_00021912;
      }
LAB_000218de:
      uVar7 = 3;
LAB_000218e2:
      if ((int)uVar8 < (int)uVar5) goto LAB_00021856;
    }
    else {
      if (-1 < (int)uVar6) {
        aw20036_led_on(uVar6 & 0xff,1);
        bVar1 = *DAT_000219f4 >> 2;
        aw20036_set_brightness(uVar6 & 0xff,bVar1,bVar1,bVar1);
      }
      if (uVar5 != 2) goto LAB_00021904;
      if (2 < (int)uVar6) goto LAB_000218de;
LAB_00021830:
      aw20036_led_on(uVar8 & 0xff,0);
      aw20036_led_on(uVar3,0);
      if (4 < (int)uVar8) {
LAB_00021912:
        uVar7 = uVar5 + 1;
        if (3 < uVar5) {
LAB_00021850:
          uVar7 = uVar5 + 1;
          if (uVar5 == 9) goto LAB_00021856;
          aw20036_led_on(uVar3,1);
          bVar1 = *DAT_000219f4 >> 4;
          aw20036_set_brightness(uVar3,bVar1,bVar1,bVar1);
        }
        goto LAB_000218e2;
      }
LAB_00021844:
      if (uVar8 != 0xffffffff) {
        aw20036_led_on(uVar8 & 0xff,1);
        bVar1 = *DAT_000219f4 >> 4;
        aw20036_set_brightness(uVar8 & 0xff,bVar1,bVar1,bVar1);
        goto LAB_00021912;
      }
      if (3 < uVar5) goto LAB_00021850;
LAB_00021856:
      uVar7 = uVar5 + 1;
      aw20036_led_on(9 - uVar3 & 0xff,0);
      aw20036_led_on(uVar3 - 1 & 0xff,0);
    }
    aw20036_commit_all();
    for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    }
    uVar8 = uVar8 - 1;
    uVar6 = uVar6 - 1;
    bVar9 = uVar5 == 9;
    uVar5 = uVar7;
    if (bVar9) {
      aw20036_all_off();
      for (; param_2 != 0; param_2 = param_2 + -1) {
      }
      return;
    }
  } while( true );
}


/* ---- FUN_000219f8 @ 000219f8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000219f8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_r3;
  int iVar3;
  
  iVar1 = FUN_0001bb3c(PTR_DAT_00021ab0,1,PTR_LAB_00021310_1_00021aac,in_r3,in_r3);
  if (iVar1 != 0) {
    FUN_0001b210(iVar1,0x98,DAT_00021ad0);
  }
  iVar1 = DAT_00021ab4;
  *(undefined4 *)(DAT_00021ab4 + 0x50000000) = 3;
  *(undefined4 *)(DAT_00021ab8 + 0x50000000) = 2;
  iVar3 = 1000;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar2 = FUN_0001fb14();
  if (uVar2 < 2) {
    _DAT_50000508 = 2;
  }
  else {
    *(undefined4 *)(iVar1 + 0x50000000) = 2;
  }
  FUN_00020614();
  iVar1 = DAT_00021ac4;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar2 = FUN_00029ddc();
  FUN_0001fff8((uVar2 & 0xf) << 4);
  uVar2 = settings_get_brightness();
  if (uVar2 != 0) {
    *DAT_00021ac8 = (char)uVar2;
    if ((uVar2 >> 3 & 0xff) == 0) {
      *DAT_00021acc = 1;
    }
    else {
      *DAT_00021acc = (char)(uVar2 >> 3);
    }
  }
  return;
}


/* ---- FUN_00021ad4 @ 00021ad4 ---- */

void FUN_00021ad4(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00021af4;
  if (*DAT_00021af4 == '\0') {
    *(undefined4 *)(DAT_00021af8 + 0x50000000) = 3;
    *(undefined4 *)(DAT_00021afc + 0x50000000) = 2;
    *pcVar1 = '\x01';
  }
  return;
}


/* ---- FUN_00021b00 @ 00021b00 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00021b00(void)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  
  pcVar1 = DAT_00021b60;
  if (*DAT_00021b60 != '\0') {
    uVar2 = FUN_0001fb14();
    if (uVar2 < 2) {
      _DAT_50000508 = 2;
    }
    else {
      *(undefined4 *)(DAT_00021b64 + 0x50000000) = 2;
    }
    iVar3 = 2000;
    do {
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar2 = FUN_00029ddc();
    FUN_0001fff8((uVar2 & 0xf) << 4);
    *pcVar1 = '\0';
  }
  return;
}


/* ---- FUN_00021b70 @ 00021b70 ---- */

void FUN_00021b70(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*DAT_00021bac == '\0') {
    aw20036_all_off();
  }
  uVar2 = 0;
  do {
    uVar1 = uVar2 & 0xff;
    uVar2 = uVar2 + 1;
    aw20036_set_rgb(uVar1,param_1);
  } while (uVar2 != 9);
  uVar2 = 0;
  do {
    uVar1 = uVar2 & 0xff;
    uVar2 = uVar2 + 1;
    aw20036_led_on(uVar1,1);
  } while (uVar2 != 9);
  aw20036_commit_all();
  return;
}


/* ---- display_mask_color @ 00021bb0 ---- */
/* (mask9, rgb): all off, then LEDs in mask lit; only caller = power-off animation (mask 0x38) */

/* (mask9, rgb): all off, then LEDs in mask lit; only caller = power-off animation (mask 0x38) */

void display_mask_color(int param_1,undefined4 param_2)

{
  aw20036_all_off();
  FUN_00028d74();
  if (param_1 << 0x1f < 0) {
    aw20036_set_rgb(0,param_2);
    aw20036_led_on(0,1);
    aw20036_commit_led(0);
  }
  if (param_1 << 0x1e < 0) {
    aw20036_set_rgb(1,param_2);
    aw20036_led_on(1,1);
    aw20036_commit_led(1);
  }
  if (param_1 << 0x1d < 0) {
    aw20036_set_rgb(2,param_2);
    aw20036_led_on(2,1);
    aw20036_commit_led(2);
  }
  if (param_1 << 0x1c < 0) {
    aw20036_set_rgb(3,param_2);
    aw20036_led_on(3,1);
    aw20036_commit_led(3);
  }
  if (param_1 << 0x1b < 0) {
    aw20036_set_rgb(4,param_2);
    aw20036_led_on(4,1);
    aw20036_commit_led(4);
  }
  if (param_1 << 0x1a < 0) {
    aw20036_set_rgb(5,param_2);
    aw20036_led_on(5,1);
    aw20036_commit_led(5);
  }
  if (param_1 << 0x19 < 0) {
    aw20036_set_rgb(6,param_2);
    aw20036_led_on(6,1);
    aw20036_commit_led(6);
  }
  if (param_1 << 0x18 < 0) {
    aw20036_set_rgb(7,param_2);
    aw20036_led_on(7,1);
    aw20036_commit_led(7);
  }
  if (param_1 << 0x17 < 0) {
    aw20036_set_rgb(8,param_2);
    aw20036_led_on(8,1);
    aw20036_commit_led(8);
  }
  return;
}


/* ---- FUN_00021cd0 @ 00021cd0 ---- */

void FUN_00021cd0(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = uVar2 & 0xff;
    uVar2 = uVar2 + 1;
    aw20036_set_brightness(uVar1,param_1,param_1,param_1);
  } while (uVar2 != 9);
  aw20036_commit_all();
  return;
}


/* ---- display_all_leds_color @ 00021cf0 ---- */
/* 9 LEDs, saved brightness */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 9 LEDs, saved brightness */

void display_all_leds_color(undefined3 param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  pcVar1 = DAT_00021dac;
  if (*DAT_00021dac != '\0') {
    uVar4 = FUN_0001fb14();
    if (uVar4 < 2) {
      _DAT_50000508 = 2;
    }
    else {
      *(undefined4 *)(DAT_00021db0 + 0x50000000) = 2;
    }
    iVar3 = 2000;
    do {
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar4 = FUN_00029ddc();
    FUN_0001fff8((uVar4 & 0xf) << 4);
    *pcVar1 = '\0';
  }
  uVar4 = 0;
  do {
    uVar2 = uVar4 & 0xff;
    uVar4 = uVar4 + 1;
    aw20036_set_brightness(uVar2,param_2,param_2,param_2);
  } while (uVar4 != 9);
  aw20036_commit_all();
  if (*pcVar1 == '\0') {
    aw20036_all_off();
  }
  uVar4 = 0;
  do {
    uVar2 = uVar4 & 0xff;
    uVar4 = uVar4 + 1;
    aw20036_set_rgb(uVar2,param_1);
  } while (uVar4 != 9);
  uVar4 = 0;
  do {
    uVar2 = uVar4 & 0xff;
    uVar4 = uVar4 + 1;
    aw20036_led_on(uVar2,1);
  } while (uVar4 != 9);
  aw20036_commit_all();
  return;
}


/* ---- display_sched_event_handler @ 00021dbc ---- */
/* 8 cases (table 0x32fd8) */

/* 8 cases (table 0x32fd8) */

void display_sched_event_handler(byte *param_1)

{
  if (*param_1 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00021dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_00021f54 + (uint)*param_1 * 4))();
    return;
  }
  return;
}


/* ---- FUN_00021f68 @ 00021f68 ---- */

void FUN_00021f68(uint param_1)

{
  if (param_1 < 0xc) {
    display_animation();
  }
  return;
}


/* ---- FUN_00021f78 @ 00021f78 ---- */

void FUN_00021f78(int param_1)

{
  if ((param_1 == 0) || (param_1 == 7)) {
    FUN_00020ed4(0);
    if (*DAT_00021f98 == '\0') {
      aw20036_all_off();
    }
  }
  return;
}


/* ---- display_partner_menu @ 00021f9c ---- */
/* page = active-slot mask; page 7: LEDs 0-2 slot1, 3-5 slot2, 6-8 slot3 */

/* page = active-slot mask; page 7: LEDs 0-2 slot1, 3-5 slot2, 6-8 slot3 */

void display_partner_menu(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = settings_get_slot_color(1);
  settings_get_slot_color(2);
  settings_get_slot_color(3);
  if (7 < param_1) {
    uVar1 = 0;
    do {
      uVar2 = uVar1 & 0xff;
      uVar1 = uVar1 + 1;
      aw20036_led_on(uVar2,0);
    } while (uVar1 != 9);
    aw20036_commit_all();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00021ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_00022358 + param_1 * 4))
            (uVar1 & 0xff,(uVar1 << 0x10) >> 0x18,(uVar1 << 8) >> 0x18);
  return;
}


/* ---- FUN_00022364 @ 00022364 ---- */

void FUN_00022364(void)

{
  if (*DAT_00022378 == '\0') {
    aw20036_all_off();
  }
  return;
}


/* ---- display_show @ 0002237c ---- */
/* (mode, positions, idx) */

/* (mode, positions, idx) */

void display_show(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined uVar4;
  byte *pbVar5;
  undefined3 *puVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  byte bVar13;
  undefined *puVar14;
  undefined3 local_2c;
  
  cVar7 = *DAT_000225f4;
  if (cVar7 == '\x02') {
    uVar11 = FUN_000268f4();
    pbVar5 = DAT_00022608;
    puVar6 = DAT_00022604;
    bVar1 = *(byte *)DAT_00022604;
    bVar2 = *(byte *)((int)DAT_00022604 + 1);
    cVar7 = FUN_00031344(param_3 * ((uint)DAT_00022608[1] - (uint)bVar2),uVar11);
    bVar3 = *(byte *)((int)puVar6 + 2);
    cVar8 = FUN_00031344(param_3 * ((uint)pbVar5[2] - (uint)bVar3),uVar11);
    cVar9 = FUN_00031344(param_3 * ((uint)*pbVar5 - (uint)bVar1),uVar11);
    local_2c = CONCAT12(cVar8 + bVar3,CONCAT11(cVar7 + bVar2,cVar9 + bVar1));
  }
  else if (cVar7 == '\x03') {
    local_2c = settings_get_slot_color(param_3);
  }
  else if (cVar7 == '\x01') {
    local_2c = *DAT_00022604;
  }
  else {
    local_2c = *DAT_000225f8;
  }
  if (param_1 == 1) {
    uVar12 = 0;
    do {
      uVar10 = uVar12 & 0xff;
      uVar12 = uVar12 + 1;
      aw20036_led_on(uVar10,0);
    } while (uVar12 != 9);
    bVar1 = *param_2;
    aw20036_set_rgb(bVar1,local_2c);
    aw20036_led_on(bVar1,1);
    bVar2 = *DAT_000225fc;
    aw20036_set_brightness(bVar1,bVar2,bVar2,bVar2);
    puVar14 = DAT_00022600;
    if (bVar1 != 0) {
      cVar7 = bVar1 - 1;
      aw20036_set_rgb(cVar7,local_2c);
      aw20036_led_on(cVar7,1);
      puVar14 = DAT_00022600;
      uVar4 = *DAT_00022600;
      aw20036_set_brightness(cVar7,uVar4,uVar4,uVar4);
      if (7 < bVar1) goto LAB_000224ba;
    }
    cVar7 = bVar1 + 1;
  }
  else {
    if (param_1 != 2) {
      return;
    }
    uVar12 = 0;
    do {
      uVar10 = uVar12 & 0xff;
      uVar12 = uVar12 + 1;
      aw20036_led_on(uVar10,0);
    } while (uVar12 != 9);
    bVar1 = *param_2;
    bVar2 = param_2[1];
    aw20036_set_rgb(bVar1,local_2c);
    aw20036_led_on(bVar1,1);
    pbVar5 = DAT_000225fc;
    bVar3 = *DAT_000225fc;
    aw20036_set_brightness(bVar1,bVar3,bVar3,bVar3);
    aw20036_set_rgb(bVar2,local_2c);
    aw20036_led_on(bVar2,1);
    bVar3 = *pbVar5;
    aw20036_set_brightness(bVar2,bVar3,bVar3,bVar3);
    if (bVar2 < bVar1) {
      bVar13 = bVar1 - bVar2;
      bVar3 = bVar1;
      bVar1 = bVar2;
    }
    else {
      bVar13 = bVar2 - bVar1;
      bVar3 = bVar2;
    }
    if (bVar3 < 8) {
      cVar7 = bVar3 + 1;
      aw20036_set_rgb(cVar7,local_2c);
      aw20036_led_on(cVar7,1);
      uVar4 = *DAT_00022600;
      aw20036_set_brightness(cVar7,uVar4,uVar4,uVar4);
    }
    if (bVar1 != 0) {
      cVar7 = bVar1 - 1;
      aw20036_set_rgb(cVar7,local_2c);
      aw20036_led_on(cVar7,1);
      uVar4 = *DAT_00022600;
      aw20036_set_brightness(cVar7,uVar4,uVar4,uVar4);
    }
    if (bVar13 == 2) {
      cVar7 = bVar3 - 1;
      aw20036_set_rgb(cVar7,local_2c);
      aw20036_led_on(cVar7,1);
      bVar1 = *pbVar5 >> 1;
      aw20036_set_brightness(cVar7,bVar1,bVar1,bVar1);
      goto LAB_000224ba;
    }
    if (bVar13 < 3) goto LAB_000224ba;
    cVar8 = bVar1 + 1;
    aw20036_set_rgb(cVar8,local_2c);
    aw20036_led_on(cVar8,1);
    puVar14 = DAT_00022600;
    uVar4 = *DAT_00022600;
    cVar7 = bVar3 - 1;
    aw20036_set_brightness(cVar8,uVar4,uVar4,uVar4);
  }
  aw20036_set_rgb(cVar7,local_2c);
  aw20036_led_on(cVar7,1);
  uVar4 = *puVar14;
  aw20036_set_brightness(cVar7,uVar4,uVar4,uVar4);
LAB_000224ba:
  aw20036_commit_all();
  return;
}


/* ---- display_factory_touch_two_color @ 0002260c ---- */
/* factory touch test: finger LEDs in two fixed colours */

/* factory touch test: finger LEDs in two fixed colours */

void display_factory_touch_two_color(int param_1,undefined *param_2)

{
  undefined uVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (param_1 == 1) {
    uVar5 = 0;
    do {
      uVar3 = uVar5 & 0xff;
      uVar5 = uVar5 + 1;
      aw20036_led_on(uVar3,0);
    } while (uVar5 != 9);
    uVar2 = *param_2;
    puVar4 = DAT_00022688;
  }
  else {
    if (param_1 != 2) {
      return;
    }
    uVar5 = 0;
    do {
      uVar3 = uVar5 & 0xff;
      uVar5 = uVar5 + 1;
      aw20036_led_on(uVar3,0);
    } while (uVar5 != 9);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    aw20036_set_rgb(uVar1,*DAT_00022688);
    aw20036_led_on(uVar1,1);
    aw20036_set_brightness(uVar1,0xf,0xf,0xf);
    puVar4 = DAT_0002268c;
  }
  aw20036_set_rgb(uVar2,*puVar4);
  aw20036_led_on(uVar2,1);
  aw20036_set_brightness(uVar2,0xf,0xf,0xf);
  aw20036_commit_all();
  return;
}


/* ---- display_set_brightness @ 00022690 ---- */
/* cmd 0x4D */

/* cmd 0x4D */

void display_set_brightness(uint param_1)

{
  if (param_1 != 0) {
    *DAT_000226a8 = (char)param_1;
    if (param_1 >> 3 == 0) {
      *DAT_000226ac = 1;
    }
    else {
      *DAT_000226ac = (char)(param_1 >> 3);
    }
  }
  return;
}


/* ---- FUN_000226b0 @ 000226b0 ---- */

void FUN_000226b0(void)

{
  FUN_00028674(1);
  FUN_00028d74();
  anim_sweep_a(*DAT_000226d4,0x32);
  FUN_00028674(0);
  fsm_dispatch_event(0x1f);
  return;
}


/* ---- FUN_000226d8 @ 000226d8 ---- */

void FUN_000226d8(void)

{
  FUN_00028674(1);
  FUN_00028d74();
  anim_sweep_a(*DAT_000226fc,100);
  FUN_00028674(0);
  fsm_dispatch_event(0x1f);
  return;
}


/* ---- FUN_00022700 @ 00022700 ---- */

void FUN_00022700(undefined4 param_1)

{
  undefined3 uVar1;
  
  FUN_00028674(1);
  FUN_00028d74();
  uVar1 = settings_get_slot_color(param_1);
  anim_sweep_b(uVar1,0x32);
  FUN_00028674(0);
  fsm_dispatch_event(0x1f);
  return;
}


/* ---- anim_slot_sweep_a @ 00022738 ---- */

void anim_slot_sweep_a(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined3 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  
  FUN_00028674(1);
  FUN_00028d74();
  uVar3 = settings_get_slot_color(param_1);
  uVar8 = 0;
  aw20036_all_off();
  do {
    uVar4 = uVar8 & 0xff;
    uVar8 = uVar8 + 1;
    aw20036_set_rgb(uVar4,uVar3);
    pbVar2 = DAT_000228d4;
    iVar6 = DAT_000228d0;
  } while (uVar8 != 9);
  cVar10 = -3;
  bVar7 = 0;
  uVar8 = 0xfffffffe;
  do {
    if (bVar7 < 9) {
      aw20036_led_on(bVar7,1);
      bVar1 = *pbVar2;
      aw20036_set_brightness(bVar7,bVar1,bVar1,bVar1);
      aw20036_led_on(cVar10,0);
    }
    if (uVar8 + 1 < 9) {
      aw20036_led_on(bVar7 - 1,1);
      bVar1 = *pbVar2 >> 2;
      aw20036_set_brightness(bVar7 - 1,bVar1,bVar1,bVar1);
      aw20036_led_on(cVar10,0);
    }
    if (uVar8 < 9) {
      aw20036_led_on(uVar8 & 0xff,1);
      bVar1 = *pbVar2 >> 4;
      aw20036_set_brightness(uVar8 & 0xff,bVar1,bVar1,bVar1);
      aw20036_led_on(cVar10,0);
    }
    aw20036_commit_all();
    iVar9 = DAT_000228dc;
    for (iVar5 = (uint)*(byte *)(uVar8 + iVar6 + 2) * 1000; iVar5 != 0; iVar5 = iVar5 + -1) {
    }
    bVar7 = bVar7 + 1;
    cVar10 = cVar10 + '\x01';
    iVar5 = DAT_000228dc;
    uVar8 = uVar8 + 1;
  } while (bVar7 != 0xc);
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  aw20036_all_off();
  do {
    iVar9 = iVar9 + -1;
    iVar6 = DAT_000228e0;
  } while (iVar9 != 0);
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_00028674(0);
  fsm_dispatch_event(0x1f);
  return;
}


/* ---- anim_slot_sweep_b @ 000228e4 ---- */

void anim_slot_sweep_b(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined3 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  byte *pbVar10;
  
  FUN_00028674(1);
  FUN_00028d74();
  uVar3 = settings_get_slot_color(param_1);
  aw20036_all_off();
  uVar9 = 0;
  do {
    uVar6 = uVar9;
    aw20036_set_rgb(uVar6 & 0xff,uVar3);
    pbVar2 = DAT_00022a74;
    uVar9 = uVar6 + 1;
  } while (uVar6 + 1 != 9);
  uVar9 = 10;
  cVar8 = '\v';
  pbVar10 = DAT_00022a78;
  do {
    if (uVar6 < 9) {
      aw20036_led_on(uVar6 & 0xff,1);
      bVar1 = *pbVar2;
      aw20036_set_brightness(uVar6 & 0xff,bVar1,bVar1,bVar1);
      aw20036_led_on(cVar8,0);
    }
    if (uVar6 + 1 < 9) {
      uVar5 = uVar6 + 1 & 0xff;
      aw20036_led_on(uVar5,1);
      bVar1 = *pbVar2 >> 2;
      aw20036_set_brightness(uVar5,bVar1,bVar1,bVar1);
      aw20036_led_on(cVar8,0);
    }
    if (uVar9 < 9) {
      aw20036_led_on(uVar9 & 0xff,1);
      bVar1 = *pbVar2 >> 4;
      aw20036_set_brightness(uVar9 & 0xff,bVar1,bVar1,bVar1);
      aw20036_led_on(cVar8,0);
    }
    aw20036_commit_all();
    iVar7 = DAT_00022a80;
    for (iVar4 = (uint)*pbVar10 * 1000; iVar4 != 0; iVar4 = iVar4 + -1) {
    }
    cVar8 = cVar8 + -1;
    uVar6 = uVar6 - 1;
    pbVar10 = pbVar10 + 1;
    uVar9 = uVar9 - 1;
    iVar4 = DAT_00022a80;
  } while (uVar6 != 0xfffffffc);
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  aw20036_all_off();
  do {
    iVar7 = iVar7 + -1;
    iVar4 = DAT_00022a84;
  } while (iVar7 != 0);
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_00028674(0);
  fsm_dispatch_event(0x1f);
  return;
}


/* ---- display_test_colors_split @ 00022a88 ---- */
/* LEDs 0-3 = c1, LED 4 off, LEDs 5-8 = c2 (TEST_COLORS, cmd 0x47) */

/* LEDs 0-3 = c1, LED 4 off, LEDs 5-8 = c2 (TEST_COLORS, cmd 0x47) */

void display_test_colors_split(undefined4 param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = DAT_00022af0;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 & 0xff;
    aw20036_set_rgb(uVar4,param_1);
    aw20036_led_on(uVar4,1);
    uVar1 = *puVar2;
    aw20036_set_brightness(uVar4,uVar1,uVar1,uVar1);
    uVar4 = uVar3 + 1;
  } while (uVar3 + 1 != 4);
  aw20036_led_on(4,0);
  uVar3 = uVar3 + 2;
  do {
    uVar4 = uVar3 & 0xff;
    aw20036_set_rgb(uVar4,param_2);
    aw20036_led_on(uVar4,1);
    uVar1 = *puVar2;
    uVar3 = uVar3 + 1;
    aw20036_set_brightness(uVar4,uVar1,uVar1,uVar1);
  } while (uVar3 != 9);
  aw20036_commit_all();
  return;
}


/* ---- FUN_00022af4 @ 00022af4 ---- */

void FUN_00022af4(void)

{
  if (*DAT_00022b0c == '\0') {
    aw20036_all_off();
  }
  FUN_00021070();
  return;
}


/* ---- FUN_00022b10 @ 00022b10 ---- */

void FUN_00022b10(void)

{
  FUN_00028d74();
  do {
  } while (*DAT_00022b20 != '\0');
  return;
}


/* ---- FUN_00022b24 @ 00022b24 ---- */

void FUN_00022b24(undefined param_1)

{
  *DAT_00022b2c = param_1;
  return;
}


/* ---- FUN_00022b30 @ 00022b30 ---- */

void FUN_00022b30(void)

{
  undefined local_9 [9];
  
  local_9[0] = 0;
  FUN_0001b27c(local_9,1,DAT_00022b48);
  return;
}


/* ---- FUN_00022b4c @ 00022b4c ---- */

void FUN_00022b4c(void)

{
  undefined local_9 [9];
  
  local_9[0] = 6;
  FUN_0001b27c(local_9,1,DAT_00022b64);
  return;
}


/* ---- FUN_00022b68 @ 00022b68 ---- */

void FUN_00022b68(void)

{
  undefined local_9 [9];
  
  local_9[0] = 7;
  FUN_0001b27c(local_9,1,DAT_00022b80);
  return;
}


/* ---- cmd4b_led_color @ 00022b84 ---- */
/* args[0]==0 -> sched {2, led, R, G, B}; else {3} (clear) */

/* args[0]==0 -> sched {2, led, R, G, B}; else {3} (clear) */

void cmd4b_led_color(char *param_1)

{
  undefined local_10;
  undefined auStack_f [15];
  
  if (param_1 != (char *)0x0) {
    if (*param_1 == '\0') {
      local_10 = 2;
      FUN_00031764(auStack_f,param_1 + 1,4);
      FUN_0001b27c(&local_10,5,DAT_00022bc4);
    }
    else {
      local_10 = 3;
      FUN_0001b27c(&local_10,1,DAT_00022bc4);
    }
  }
  return;
}


/* ---- display_set_color_mode @ 00022bc8 ---- */
/* 1 = colour1, 2 = time gradient, 3 = slot colour (recording only) */

/* 1 = colour1, 2 = time gradient, 3 = slot colour (recording only) */

void display_set_color_mode(undefined param_1)

{
  *DAT_00022bd0 = param_1;
  return;
}


/* ---- display_get_color_mode @ 00022bd4 ---- */

undefined display_get_color_mode(void)

{
  return *DAT_00022bdc;
}


/* ---- FUN_00022be0 @ 00022be0 ---- */

void FUN_00022be0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 local_14 [2];
  
  uVar1 = DAT_00022cc0;
  local_14[0] = 0x1e;
  iVar3 = FUN_0001eeac(DAT_00022cc0,0x58,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00022cc8);
  }
  uVar2 = DAT_00022cc4;
  local_14[0] = 0x1e;
  iVar3 = FUN_0001eeac(DAT_00022cc4,0x58,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00022cc8);
  }
  local_14[0] = 0x1e;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00022cc8);
  }
  local_14[0] = 0x1e;
  iVar3 = FUN_0001eeac(uVar2,0x58,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00022cc8);
  }
  local_14[0] = 0x109;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00022cc8);
  }
  local_14[0] = 0x109;
  iVar3 = FUN_0001eeac(uVar2,0x58,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00022cc8);
  }
  return;
}


/* ---- FUN_00022ccc @ 00022ccc ---- */

void FUN_00022ccc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 local_14 [2];
  
  uVar1 = DAT_00022da8;
  local_14[0] = 0x1e;
  iVar3 = FUN_0001eeac(DAT_00022da8,0x58,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00022db4);
  }
  uVar2 = DAT_00022dac;
  local_14[0] = 0x1e;
  iVar3 = FUN_0001eeac(DAT_00022dac,0x58,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00022db4);
  }
  local_14[0] = 0x1e;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00022db4);
  }
  local_14[0] = 0x1e;
  iVar3 = FUN_0001eeac(uVar2,0x58,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00022db4);
  }
  local_14[0] = (undefined2)DAT_00022db0;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00022db4);
  }
  local_14[0] = (undefined2)DAT_00022db0;
  iVar3 = FUN_0001eeac(uVar2,0x58,local_14,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00022db4);
  }
  return;
}


/* ---- motor_pan_position @ 00022db8 ---- */
/* AW86224 x2 (I2C 0x58) reg 0x1E: A = gain[p]-bal, B = gain[8-p]+bal */

/* AW86224 x2 (I2C 0x58) reg 0x1E: A = gain[p]-bal, B = gain[8-p]+bal */

void motor_pan_position(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined local_1c;
  char local_1b;
  
  pcVar1 = DAT_00022e24;
  iVar3 = DAT_00022e20;
  local_1b = *(char *)(DAT_00022e20 + param_1) - *DAT_00022e24;
  local_1c = 0x1e;
  iVar2 = FUN_0001eeac(DAT_00022e28,0x58,&local_1c,2,0);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x31,DAT_00022e30);
  }
  local_1b = *(char *)((iVar3 - param_1) + 8) + *pcVar1;
  local_1c = 0x1e;
  iVar3 = FUN_0001eeac(DAT_00022e2c,0x58,&local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00022e30);
  }
  return;
}


/* ---- FUN_00022e34 @ 00022e34 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00022e34(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined local_1d;
  ushort local_1c [4];
  
  *(undefined4 *)(DAT_00023180 + 0x50000000) = 3;
  iVar3 = DAT_00023184;
  *(undefined4 *)(DAT_00023184 + 0x50000000) = 0x20;
  *(undefined4 *)(DAT_00023188 + 0x50000000) = 3;
  *(undefined4 *)(iVar3 + 0x50000000) = 0x80;
  uVar1 = DAT_00023198;
  _DAT_50000508 = 0x80;
  iVar3 = DAT_00023194;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_1c[0] = 0x608;
  iVar3 = FUN_0001eeac(DAT_00023198,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_000231ac);
  }
  uVar2 = DAT_0002319c;
  local_1c[0] = 0x608;
  iVar3 = FUN_0001eeac(DAT_0002319c,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00023220);
  }
  local_1d = 0x1d;
  iVar3 = FUN_0001eeac(uVar1,0x58,&local_1d,1,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x41,DAT_00023220);
  }
  iVar3 = FUN_0001ef70(uVar1,0x58,local_1c,1);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x43,DAT_00023220);
  }
  local_1c[0] = CONCAT11((undefined)local_1c[0],0x1d) | 0x8000;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00023220);
  }
  local_1d = 0x1d;
  iVar3 = FUN_0001eeac(uVar2,0x58,&local_1d,1,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x41,DAT_00023220);
  }
  iVar3 = FUN_0001ef70(uVar2,0x58,local_1c,1);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x43,DAT_00023220);
  }
  local_1c[0] = CONCAT11((undefined)local_1c[0],0x1d) | 0x8000;
  iVar3 = FUN_0001eeac(uVar2,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00023220);
  }
  local_1d = 0x1d;
  iVar3 = FUN_0001eeac(uVar1,0x58,&local_1d,1,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x41,DAT_00023220);
  }
  iVar3 = FUN_0001ef70(uVar1,0x58,local_1c,1);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x43,DAT_00023220);
  }
  local_1c[0] = CONCAT11((undefined)local_1c[0],0x1d) & 0x80ff | 0x7f00;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00023220);
  }
  local_1d = 0x1d;
  iVar3 = FUN_0001eeac(uVar2,0x58,&local_1d,1,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x41,DAT_00023220);
  }
  iVar3 = FUN_0001ef70(uVar2,0x58,local_1c,1);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x43,DAT_000231ac);
  }
  local_1c[0] = CONCAT11((undefined)local_1c[0],0x1d) & 0x80ff | 0x7f00;
  iVar3 = FUN_0001eeac(uVar2,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_000231ac);
  }
  local_1c[0] = (ushort)DAT_000231a0;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_000231ac);
  }
  local_1c[0] = (ushort)DAT_000231a0;
  iVar3 = FUN_0001eeac(uVar2,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_000231ac);
  }
  local_1c[0] = (ushort)DAT_000231a4;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_000231ac);
  }
  local_1c[0] = (ushort)DAT_000231a8;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_000231ac);
  }
  local_1c[0] = 0x1f;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_000231ac);
  }
  local_1c[0] = 0xff20;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_000231ac);
  }
  local_1c[0] = (ushort)DAT_000231a4;
  iVar3 = FUN_0001eeac(uVar2,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_000231ac);
  }
  local_1c[0] = (ushort)DAT_000231a8;
  iVar3 = FUN_0001eeac(uVar2,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_000231ac);
  }
  local_1c[0] = 0x1f;
  iVar3 = FUN_0001eeac(uVar2,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_000231ac);
  }
  local_1c[0] = 0xff20;
  iVar3 = FUN_0001eeac(uVar2,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_000231ac);
  }
  return;
}


/* ---- FUN_00023224 @ 00023224 ---- */

void FUN_00023224(void)

{
  int iVar1;
  
  iVar1 = DAT_00023234;
  *(undefined4 *)(DAT_00023234 + 0x50000000) = 0x20;
  *(undefined4 *)(iVar1 + 0x50000000) = 0x80;
  return;
}


/* ---- motor_set_level_table @ 00023238 ---- */
/* gain[i] = level*base[i]/100 (9 positions) */

/* gain[i] = level*base[i]/100 (9 positions) */

void motor_set_level_table(int param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined uVar3;
  
  pbVar1 = DAT_000232b8;
  *DAT_000232b4 = (char)param_1;
  uVar3 = FUN_00031344(param_1 * (uint)*pbVar1,100);
  puVar2 = DAT_000232bc;
  *DAT_000232bc = uVar3;
  uVar3 = FUN_00031344(param_1 * (uint)pbVar1[1],100);
  puVar2[1] = uVar3;
  uVar3 = FUN_00031344(param_1 * (uint)pbVar1[2],100);
  puVar2[2] = uVar3;
  uVar3 = FUN_00031344(param_1 * (uint)pbVar1[3],100);
  puVar2[3] = uVar3;
  uVar3 = FUN_00031344(param_1 * (uint)pbVar1[4],100);
  puVar2[4] = uVar3;
  uVar3 = FUN_00031344(param_1 * (uint)pbVar1[5],100);
  puVar2[5] = uVar3;
  uVar3 = FUN_00031344(param_1 * (uint)pbVar1[6],100);
  puVar2[6] = uVar3;
  uVar3 = FUN_00031344(param_1 * (uint)pbVar1[7],100);
  puVar2[7] = uVar3;
  uVar3 = FUN_00031344(param_1 * (uint)pbVar1[8],100);
  puVar2[8] = uVar3;
  return;
}


/* ---- motor_set_balance @ 000232c0 ---- */

void motor_set_balance(int param_1)

{
  *DAT_000232d0 = *(undefined *)(DAT_000232cc + param_1);
  return;
}


/* ---- motor_preview_buzz @ 000232d4 ---- */

void motor_preview_buzz(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined2 local_24 [4];
  
  FUN_00028d74();
  uVar1 = DAT_000235dc;
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(DAT_000235dc,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  uVar2 = DAT_000235e0;
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(DAT_000235e0,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(uVar1,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(uVar2,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(uVar1,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(uVar2,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = 0x109;
  iVar5 = FUN_0001eeac(uVar1,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = 0x109;
  iVar5 = FUN_0001eeac(uVar2,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  FUN_00028d74();
  pcVar4 = DAT_000235e8;
  pcVar3 = DAT_000235e4;
  local_24[0] = CONCAT11(*DAT_000235e4 - *DAT_000235e8,0x1e);
  iVar5 = FUN_0001eeac(uVar2,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = CONCAT11(pcVar3[8] + *pcVar4,0x1e);
  iVar5 = FUN_0001eeac(uVar1,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  FUN_00028d74();
  iVar5 = DAT_000235f0;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(uVar1,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(uVar2,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  FUN_00028d74();
  iVar5 = DAT_000235f8;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_24[0] = CONCAT11(pcVar3[8] - *pcVar4,0x1e);
  iVar5 = FUN_0001eeac(uVar2,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = CONCAT11(*pcVar3 + *pcVar4,0x1e);
  iVar5 = FUN_0001eeac(uVar1,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  FUN_00028d74();
  iVar5 = DAT_000235f0;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(uVar1,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(uVar2,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  FUN_00028d74();
  iVar5 = DAT_000235f8;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_24[0] = CONCAT11(pcVar3[4] - *pcVar4,0x1e);
  iVar5 = FUN_0001eeac(uVar2,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = CONCAT11(pcVar3[4] + *pcVar4,0x1e);
  iVar5 = FUN_0001eeac(uVar1,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  FUN_00028d74();
  iVar5 = DAT_000235f0;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(uVar1,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(uVar2,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  FUN_00028d74();
  iVar5 = DAT_000237e4;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(uVar1,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(uVar2,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(uVar1,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = 0x1e;
  iVar5 = FUN_0001eeac(uVar2,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = (undefined2)DAT_000237ec;
  iVar5 = FUN_0001eeac(uVar1,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  local_24[0] = (undefined2)DAT_000237ec;
  iVar5 = FUN_0001eeac(uVar2,0x58,local_24,2,0);
  if (iVar5 != 0) {
    FUN_0001b210(iVar5,0x31,DAT_000237f0);
  }
  return;
}


/* ---- FUN_000237f4 @ 000237f4 ---- */

void FUN_000237f4(void)

{
  int iVar1;
  undefined2 local_c [6];
  
  local_c[0] = 0x1e;
  iVar1 = FUN_0001eeac(DAT_00023844,0x58,local_c,2,0);
  if (iVar1 != 0) {
    FUN_0001b210(iVar1,0x31,DAT_0002384c);
  }
  local_c[0] = 0x1e;
  iVar1 = FUN_0001eeac(DAT_00023848,0x58,local_c,2,0);
  if (iVar1 != 0) {
    FUN_0001b210(iVar1,0x31,DAT_0002384c);
  }
  return;
}


/* ---- FUN_00023850 @ 00023850 ---- */

void FUN_00023850(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 local_1c [4];
  
  uVar1 = DAT_00023a50;
  local_1c[0] = 0x1e;
  iVar3 = FUN_0001eeac(DAT_00023a50,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00023a70);
  }
  uVar2 = DAT_00023a54;
  local_1c[0] = 0x1e;
  iVar3 = FUN_0001eeac(DAT_00023a54,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00023a70);
  }
  FUN_00028d74();
  local_1c[0] = (undefined2)DAT_00023a58;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00023a70);
  }
  local_1c[0] = (undefined2)DAT_00023a58;
  iVar4 = FUN_0001eeac(uVar2,0x58,local_1c,2,0);
  iVar3 = DAT_00023a60;
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,0x31,DAT_00023a70);
    iVar3 = DAT_00023a60;
  }
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_1c[0] = 0x1e;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00023a70);
  }
  local_1c[0] = 0x1e;
  iVar4 = FUN_0001eeac(uVar2,0x58,local_1c,2,0);
  iVar3 = DAT_00023a68;
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,0x31,DAT_00023a70);
    iVar3 = DAT_00023a68;
  }
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00028d74();
  local_1c[0] = (undefined2)DAT_00023a58;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00023a70);
  }
  local_1c[0] = (undefined2)DAT_00023a58;
  iVar4 = FUN_0001eeac(uVar2,0x58,local_1c,2,0);
  iVar3 = DAT_00023a60;
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,0x31,DAT_00023a70);
    iVar3 = DAT_00023a60;
  }
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_1c[0] = 0x1e;
  iVar3 = FUN_0001eeac(uVar1,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00023a70);
  }
  local_1c[0] = 0x1e;
  iVar3 = FUN_0001eeac(uVar2,0x58,local_1c,2,0);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x31,DAT_00023a70);
  }
  FUN_00028d74();
  iVar3 = DAT_00023a6c;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


/* ---- FUN_00023a74 @ 00023a74 ---- */

uint FUN_00023a74(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = DAT_00023db0;
  *DAT_00023db0 = 0x4000;
  puVar2 = DAT_00023db4;
  *DAT_00023db4 = 0x800;
  *puVar1 = 0x400;
  *puVar2 = 0x400;
  puVar1 = DAT_00023db0;
  *DAT_00023db0 = 0x800;
  *puVar1 = 0x400;
  *DAT_00023db4 = 0x400;
  puVar1 = DAT_00023db0;
  *DAT_00023db0 = 0x800;
  *puVar1 = 0x400;
  *DAT_00023db4 = 0x400;
  puVar1 = DAT_00023db0;
  *DAT_00023db0 = 0x800;
  *puVar1 = 0x400;
  *DAT_00023db4 = 0x400;
  puVar1 = DAT_00023db0;
  *DAT_00023db0 = 0x800;
  *puVar1 = 0x400;
  *DAT_00023db4 = 0x400;
  puVar1 = DAT_00023db0;
  *DAT_00023db0 = 0x800;
  *puVar1 = 0x400;
  *DAT_00023db4 = 0x400;
  puVar1 = DAT_00023db0;
  *DAT_00023db0 = 0x800;
  *puVar1 = 0x400;
  *DAT_00023db4 = 0x400;
  puVar1 = DAT_00023db0;
  *DAT_00023db0 = 0x800;
  *puVar1 = 0x400;
  *DAT_00023db4 = 0x400;
  if ((int)(param_1 << 0x18) < 0) {
    *DAT_00023db4 = 0x800;
  }
  else {
    *DAT_00023db0 = 0x800;
  }
  param_1 = param_1 & 0xff;
  *DAT_00023db0 = 0x400;
  *DAT_00023db4 = 0x400;
  if ((int)(param_1 << 0x19) < 0) {
    *DAT_00023db4 = 0x800;
  }
  else {
    *DAT_00023db0 = 0x800;
  }
  *DAT_00023db0 = 0x400;
  *DAT_00023db4 = 0x400;
  if ((int)(param_1 << 0x1a) < 0) {
    *DAT_00023e2c = 0x800;
  }
  else {
    *DAT_00023db0 = 0x800;
  }
  *DAT_00023db0 = 0x400;
  *DAT_00023db4 = 0x400;
  if ((int)(param_1 << 0x1b) < 0) {
    *DAT_00023e2c = 0x800;
  }
  else {
    *DAT_00023db0 = 0x800;
  }
  *DAT_00023db0 = 0x400;
  *DAT_00023db4 = 0x400;
  if ((int)(param_1 << 0x1c) < 0) {
    *DAT_00023e2c = 0x800;
  }
  else {
    *DAT_00023db0 = 0x800;
  }
  *DAT_00023db0 = 0x400;
  *DAT_00023db4 = 0x400;
  if ((int)(param_1 << 0x1d) < 0) {
    *DAT_00023e2c = 0x800;
  }
  else {
    *DAT_00023db0 = 0x800;
  }
  *DAT_00023db0 = 0x400;
  *DAT_00023db4 = 0x400;
  if ((int)(param_1 << 0x1e) < 0) {
    *DAT_00023e2c = 0x800;
  }
  else {
    *DAT_00023db0 = 0x800;
  }
  *DAT_00023db0 = 0x400;
  *DAT_00023db4 = 0x400;
  if ((int)(param_1 << 0x1f) < 0) {
    *DAT_00023db4 = 0x800;
  }
  else {
    *DAT_00023e30 = 0x800;
  }
  *DAT_00023db0 = 0x400;
  *DAT_00023db4 = 0x400;
  puVar1 = DAT_00023db4;
  *DAT_00023db4 = 0x800;
  *DAT_00023db0 = 0x400;
  *puVar1 = 0x400;
  puVar1 = DAT_00023db4;
  uVar3 = 0x80;
  if (-1 < *DAT_00023db8 << 0x13) {
    uVar3 = 0;
  }
  *DAT_00023db4 = 0x800;
  *DAT_00023db0 = 0x400;
  *puVar1 = 0x400;
  puVar1 = DAT_00023db4;
  if (*DAT_00023db8 << 0x13 < 0) {
    uVar3 = uVar3 | 0x40;
  }
  *DAT_00023db4 = 0x800;
  *DAT_00023db0 = 0x400;
  *puVar1 = 0x400;
  puVar1 = DAT_00023db4;
  if (*DAT_00023db8 << 0x13 < 0) {
    uVar3 = uVar3 | 0x20;
  }
  *DAT_00023db4 = 0x800;
  *DAT_00023db0 = 0x400;
  *puVar1 = 0x400;
  puVar1 = DAT_00023db4;
  if (*DAT_00023db8 << 0x13 < 0) {
    uVar3 = uVar3 | 0x10;
  }
  *DAT_00023db4 = 0x800;
  *DAT_00023db0 = 0x400;
  *puVar1 = 0x400;
  puVar1 = DAT_00023db4;
  if (*DAT_00023db8 << 0x13 < 0) {
    uVar3 = uVar3 | 8;
  }
  *DAT_00023db4 = 0x800;
  *DAT_00023db0 = 0x400;
  *puVar1 = 0x400;
  puVar1 = DAT_00023db4;
  if (*DAT_00023db8 << 0x13 < 0) {
    uVar3 = uVar3 | 4;
  }
  *DAT_00023db4 = 0x800;
  *DAT_00023db0 = 0x400;
  *puVar1 = 0x400;
  puVar1 = DAT_00023db4;
  if (*DAT_00023db8 << 0x13 < 0) {
    uVar3 = uVar3 | 2;
  }
  *DAT_00023db4 = 0x800;
  *DAT_00023db0 = 0x400;
  *puVar1 = 0x400;
  if (*DAT_00023db8 << 0x13 < 0) {
    uVar3 = uVar3 | 1;
  }
  *DAT_00023db4 = 0x4000;
  return uVar3;
}


/* ---- FUN_00023e34 @ 00023e34 ---- */

void FUN_00023e34(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00024160;
  *DAT_00024160 = 0x4000;
  *puVar1 = 0x800;
  *puVar1 = 0x400;
  *DAT_00024164 = 0x400;
  puVar1 = DAT_00024160;
  *DAT_00024160 = 0x800;
  *puVar1 = 0x400;
  *DAT_00024164 = 0x400;
  puVar1 = DAT_00024160;
  *DAT_00024160 = 0x800;
  *puVar1 = 0x400;
  *DAT_00024164 = 0x400;
  puVar1 = DAT_00024160;
  *DAT_00024160 = 0x800;
  *puVar1 = 0x400;
  *DAT_00024164 = 0x400;
  puVar1 = DAT_00024160;
  *DAT_00024160 = 0x800;
  *puVar1 = 0x400;
  *DAT_00024164 = 0x400;
  puVar1 = DAT_00024160;
  *DAT_00024160 = 0x800;
  *puVar1 = 0x400;
  *DAT_00024164 = 0x400;
  puVar1 = DAT_00024160;
  *DAT_00024160 = 0x800;
  *puVar1 = 0x400;
  *DAT_00024164 = 0x400;
  puVar1 = DAT_00024160;
  *DAT_00024160 = 0x800;
  *puVar1 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_1 >> 7 == 0) {
    *DAT_00024160 = 0x800;
  }
  else {
    *DAT_0002422c = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_1 << 0x19 < 0) {
    *DAT_0002422c = 0x800;
  }
  else {
    *DAT_00024160 = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_1 << 0x1a < 0) {
    *DAT_0002422c = 0x800;
  }
  else {
    *DAT_00024160 = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_1 << 0x1b < 0) {
    *DAT_0002422c = 0x800;
  }
  else {
    *DAT_00024160 = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_1 << 0x1c < 0) {
    *DAT_0002422c = 0x800;
  }
  else {
    *DAT_00024160 = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_1 << 0x1d < 0) {
    *DAT_0002422c = 0x800;
  }
  else {
    *DAT_00024160 = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_1 << 0x1e < 0) {
    *DAT_0002422c = 0x800;
  }
  else {
    *DAT_00024160 = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_1 << 0x1f < 0) {
    *DAT_00024164 = 0x800;
  }
  else {
    *DAT_00024230 = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_2 >> 7 == 0) {
    *DAT_00024160 = 0x800;
  }
  else {
    *DAT_0002422c = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_2 << 0x19 < 0) {
    *DAT_0002422c = 0x800;
  }
  else {
    *DAT_00024160 = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_2 << 0x1a < 0) {
    *DAT_0002422c = 0x800;
  }
  else {
    *DAT_00024160 = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_2 << 0x1b < 0) {
    *DAT_0002422c = 0x800;
  }
  else {
    *DAT_00024160 = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_2 << 0x1c < 0) {
    *DAT_0002422c = 0x800;
  }
  else {
    *DAT_00024160 = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_2 << 0x1d < 0) {
    *DAT_0002422c = 0x800;
  }
  else {
    *DAT_00024160 = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_2 << 0x1e < 0) {
    *DAT_0002422c = 0x800;
  }
  else {
    *DAT_00024160 = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  if (param_2 << 0x1f < 0) {
    *DAT_00024164 = 0x800;
  }
  else {
    *DAT_00024230 = 0x800;
  }
  *DAT_00024160 = 0x400;
  *DAT_00024164 = 0x400;
  *DAT_00024164 = 0x4000;
  return;
}


/* ---- FUN_00024234 @ 00024234 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00024234(void)

{
  undefined4 *puVar1;
  
  _DAT_50000738 = 3;
  _DAT_50000728 = 3;
  *(undefined4 *)(DAT_000242c8 + 0x50000000) = 3;
  puVar1 = DAT_000242cc;
  _DAT_50000730 = 0;
  *DAT_000242cc = 0x4000;
  *puVar1 = 0x400;
  *puVar1 = 0x800;
  FUN_00023a74(1);
  FUN_00023e34(0x10,5);
  FUN_00023e34(0x16,0x50);
  FUN_00023e34(0x17,0);
  FUN_00023e34(0x19,0x10);
  FUN_00023e34(0x1a,0);
  FUN_00023e34(0x20,0x8c);
  FUN_00023e34(0x21,0);
  FUN_00023e34(0x2a,7);
  FUN_00023e34(0x2b,10);
  FUN_00023e34(0xf,0);
  FUN_00023e34(0x11,0x14);
  return;
}


/* ---- FUN_000242d0 @ 000242d0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000242d0(void)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  pcVar1 = DAT_00024338;
  if (*DAT_00024338 == '\0') {
    bVar3 = FUN_00023a74(0x11);
    FUN_00023e34(0x11,bVar3 | 0x80);
    FUN_00023e34(0x7f,0x83);
    FUN_00023e34(0x7f,0x69);
    FUN_00023e34(0x7f,0xbd);
    uVar4 = FUN_00023a74(0x8c);
    FUN_00023e34(0x8c,uVar4 & 0xbf);
    iVar2 = DAT_0002433c;
    _DAT_50000738 = 2;
    _DAT_50000728 = 2;
    *(undefined4 *)(DAT_0002433c + 0x50000000) = 2;
    *(undefined4 *)(iVar2 + 0x50000004) = 2;
    *pcVar1 = '\x01';
  }
  return;
}


/* ---- FUN_00024340 @ 00024340 ---- */

void FUN_00024340(void)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_00024368;
  if (*DAT_00024368 != '\0') {
    uVar2 = FUN_00023a74(0x11);
    FUN_00023e34(0x11,uVar2 & 0x7f);
    FUN_00024234();
    *pcVar1 = '\0';
  }
  return;
}


/* ---- FUN_0002436c @ 0002436c ---- */

void FUN_0002436c(char param_1,byte param_2)

{
  FUN_00023e34(0x2b,param_1 * ' ' + (param_2 & 0x1f));
  return;
}


/* ---- sched_event_to_fsm @ 00024380 ---- */
/* sched code 6 (touch reg1==3) -> FSM event 9 (open MENU) */

/* sched code 6 (touch reg1==3) -> FSM event 9 (open MENU) */

void sched_event_to_fsm(byte *param_1)

{
  if (*param_1 < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x0002438e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_00024478 + (uint)*param_1 * 4))();
    return;
  }
  return;
}


/* ---- FUN_00024490 @ 00024490 ---- */

void FUN_00024490(void)

{
  int iVar1;
  
  iVar1 = FUN_0001b230(0xc,0x14,DAT_000244ac);
  if (iVar1 != 0) {
    FUN_0001b210(iVar1,0x1b,DAT_000244b0);
  }
  return;
}


/* ---- FUN_000244b4 @ 000244b4 ---- */

void FUN_000244b4(void)

{
  undefined local_14 [12];
  
  FUN_0001b1fc(local_14,0,0xc);
  local_14[0] = 7;
  FUN_0001b27c(local_14,0xc,DAT_000244d8);
  return;
}


/* ---- FUN_000244dc @ 000244dc ---- */

void FUN_000244dc(char *param_1)

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  byte bVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  ushort *puVar18;
  uint local_3c;
  int local_34;
  byte local_2a;
  byte local_29 [5];
  
  pbVar13 = DAT_00024738;
  if (*param_1 != '\0') {
    return;
  }
  uVar6 = (uint)*(ushort *)(param_1 + 8);
  puVar18 = *(ushort **)(param_1 + 4);
  if (uVar6 == 0) {
    uVar9 = 0;
    *(ushort *)(DAT_00024738 + 2) = *(ushort *)(param_1 + 8);
    pbVar1 = DAT_00024748;
    uVar7 = DAT_00024744;
  }
  else {
    uVar7 = -((uint)puVar18 >> 1) & 3;
    if (uVar6 - 1 < 10) {
      uVar7 = 0;
      local_34 = 0;
LAB_000245b8:
      uVar7 = uVar7 + puVar18[local_34] & 0xffff;
      if (local_34 + 1U < uVar6) {
        uVar7 = uVar7 + puVar18[local_34 + 1U] & 0xffff;
        if (local_34 + 2U < uVar6) {
          uVar7 = uVar7 + puVar18[local_34 + 2U] & 0xffff;
          if (local_34 + 3U < uVar6) {
            uVar7 = uVar7 + puVar18[local_34 + 3U] & 0xffff;
            if (local_34 + 4U < uVar6) {
              uVar7 = uVar7 + puVar18[local_34 + 4U] & 0xffff;
              if (local_34 + 5U < uVar6) {
                uVar7 = uVar7 + puVar18[local_34 + 5U] & 0xffff;
                if (local_34 + 6U < uVar6) {
                  uVar7 = uVar7 + puVar18[local_34 + 6U] & 0xffff;
                  if (local_34 + 7U < uVar6) {
                    uVar7 = uVar7 + puVar18[local_34 + 7U] & 0xffff;
                    if (local_34 + 8U < uVar6) {
                      uVar7 = uVar7 + puVar18[local_34 + 8U] & 0xffff;
                      if (local_34 + 9U < uVar6) {
                        uVar7 = uVar7 + puVar18[local_34 + 9U] & 0xffff;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if (uVar7 == 0) {
        local_34 = 0;
        local_3c = 0;
      }
      else {
        local_3c = (uint)*puVar18;
        if (uVar7 == 1) {
          local_34 = 1;
        }
        else {
          local_3c = puVar18[1] + local_3c & 0xffff;
          if (uVar7 == 3) {
            local_3c = puVar18[2] + local_3c & 0xffff;
            local_34 = 3;
          }
          else {
            local_34 = 2;
          }
        }
      }
      uVar9 = uVar6 - uVar7;
      puVar17 = (uint *)(puVar18 + uVar7);
      puVar16 = puVar17 + (uVar9 >> 2) * 2;
      uVar7 = 0;
      uVar10 = 0;
      do {
        uVar15 = uVar7 + *puVar17;
        uVar12 = (*puVar17 >> 0x10) + (uVar7 >> 0x10);
        uVar8 = puVar17[1] + uVar10;
        uVar4 = (puVar17[1] >> 0x10) + (uVar10 >> 0x10);
        uVar7 = uVar15 & 0xffff | uVar12 * 0x10000;
        puVar17 = puVar17 + 2;
        uVar10 = uVar8 & 0xffff | uVar4 * 0x10000;
      } while (puVar17 != puVar16);
      uVar7 = (uVar15 & 0xffff) + (uVar12 & 0xffff) + local_3c + (uVar8 & 0xffff) + (uVar4 & 0xffff)
              & 0xffff;
      local_34 = (uVar9 & 0xfffffffc) + local_34;
      if ((uVar9 & 0xfffffffc) != uVar9) goto LAB_000245b8;
    }
    uVar3 = FUN_00031230(uVar7);
    iVar5 = FUN_00031344((uint)uVar3 * 0x4b0,DAT_00024734);
    uVar6 = DAT_0002473c;
    pbVar13 = DAT_00024738;
    uVar9 = iVar5 << 2 & 0xffff;
    *(short *)(DAT_00024738 + 2) = (short)(iVar5 << 2);
    pbVar1 = DAT_00024748;
    uVar7 = DAT_00024744;
    if (uVar6 < uVar9) {
      *pbVar13 = 100;
      goto LAB_00024668;
    }
  }
  do {
    uVar10 = uVar7;
    pbVar11 = pbVar1;
    bVar14 = pbVar11[4];
    uVar6 = (uint)bVar14;
    uVar7 = (uint)*(ushort *)(pbVar11 + 6);
    if (uVar6 == 0) {
      if (uVar9 < uVar7) goto LAB_000246e8;
      uVar6 = 0;
      break;
    }
    pbVar1 = pbVar11 + 4;
  } while (uVar9 < uVar7);
  cVar2 = FUN_00031344((*pbVar11 - uVar6) * (uVar9 - uVar7),uVar10 - uVar7);
  bVar14 = bVar14 + cVar2;
LAB_000246e8:
  *pbVar13 = bVar14;
LAB_00024668:
  FUN_00029d18(&local_2a,local_29);
  if ((local_2a == 0) || (local_29[0] == 0)) {
    FUN_00029d00();
    FUN_00029d18(&local_2a,local_29);
  }
  if (local_29[0] < *pbVar13) {
    if (local_2a < *pbVar13) {
      *DAT_00024740 = 1;
    }
    else {
      *DAT_00024740 = 2;
      if (*DAT_0002474c != '\0') {
        FUN_00022b24(1);
        FUN_00021f68(1);
      }
    }
  }
  else {
    *DAT_00024740 = 3;
  }
  FUN_00026020();
  return;
}


/* ---- FUN_00024750 @ 00024750 ---- */

int FUN_00024750(void)

{
  int iVar1;
  undefined local_c [4];
  
  local_c[0] = 3;
  iVar1 = FUN_0001f3a4(local_c,DAT_0002477c);
  if (iVar1 != 0) {
    FUN_0001b210(iVar1,0x38,DAT_00024784);
  }
  FUN_0001f3e0(DAT_00024780);
  return iVar1;
}


/* ---- FUN_00024788 @ 00024788 ---- */

void FUN_00024788(void)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte local_14;
  byte local_13;
  ushort local_12;
  
  FUN_00028d74();
  iVar3 = FUN_0001f47c(DAT_00024880,&local_12);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x6b,PTR_s__________common_battery_battery__0002489c);
  }
  iVar3 = FUN_00031344((uint)local_12 * 0x4b0,DAT_00024884);
  pbVar1 = DAT_00024888;
  *(short *)(DAT_00024888 + 2) = (short)(iVar3 << 2);
  FUN_00028d74();
  uVar5 = (uint)*(ushort *)(pbVar1 + 2);
  if (DAT_0002488c < uVar5) {
    *pbVar1 = 100;
  }
  else {
    uVar4 = 4000;
    uVar8 = 0x5a;
    pbVar6 = PTR_DAT_00024898;
    while (uVar8 != 0) {
      uVar9 = uVar8;
      if (uVar4 <= uVar5) goto LAB_0002484c;
      uVar4 = (uint)*(ushort *)(pbVar6 + 10);
      uVar8 = (uint)pbVar6[8];
      pbVar6 = pbVar6 + 4;
    }
    bVar7 = 0;
    if (uVar4 <= uVar5) {
      uVar9 = 0;
LAB_0002484c:
      cVar2 = FUN_00031344((*pbVar6 - uVar9) * (uVar5 - uVar4),*(ushort *)(pbVar6 + 2) - uVar4);
      bVar7 = (char)uVar8 + cVar2;
    }
    *pbVar1 = bVar7;
  }
  FUN_00029d18(&local_14,&local_13);
  if ((local_14 == 0) || (local_13 == 0)) {
    FUN_00029d00();
    FUN_00029d18(&local_14,&local_13);
    bVar7 = *pbVar1;
    if (local_13 < bVar7) goto LAB_0002480e;
  }
  else {
    bVar7 = *pbVar1;
    if (local_13 < bVar7) {
LAB_0002480e:
      if (local_14 < bVar7) {
        *DAT_00024890 = 1;
      }
      else {
        *DAT_00024890 = 2;
        if (*DAT_00024894 != '\0') {
          FUN_00022b24(1);
          FUN_00021f68(1);
        }
      }
      goto LAB_000247ee;
    }
  }
  *DAT_00024890 = 3;
LAB_000247ee:
  FUN_00026020();
  return;
}


/* ---- FUN_000248a0 @ 000248a0 ---- */

undefined4 FUN_000248a0(void)

{
  return *DAT_000248b4;
}


/* ---- FUN_000248b8 @ 000248b8 ---- */

undefined FUN_000248b8(void)

{
  return *DAT_000248c0;
}


/* ---- FUN_000248c4 @ 000248c4 ---- */

void FUN_000248c4(undefined param_1)

{
  *DAT_000248cc = param_1;
  return;
}


/* ---- FUN_000248d0 @ 000248d0 ---- */

void FUN_000248d0(void)

{
  software_interrupt(0x44);
  return;
}


/* ---- FUN_000248d4 @ 000248d4 ---- */

void FUN_000248d4(void)

{
  software_interrupt(0x46);
  return;
}


/* ---- ffb1_app_cmd_dispatch @ 000249c4 ---- */
/* [prefix, cmd, args..]; table 0x3312c indexed cmd-0x11 (0x11..0x57) */

/* [prefix, cmd, args..]; table 0x3312c indexed cmd-0x11 (0x11..0x57) */

void ffb1_app_cmd_dispatch(int param_1,int param_2)

{
  uint uVar1;
  undefined auStack_38 [40];
  
  if ((param_1 != 0) || (param_2 == 0)) {
    FUN_0001b1fc(auStack_38,0,0x12);
    FUN_00031764(auStack_38,param_1 + 2,0x12);
    uVar1 = *(byte *)(param_1 + 1) - 0x11 & 0xff;
    if (uVar1 < 0x47) {
                    /* WARNING: Could not recover jumptable at 0x000249f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(PTR_PTR_LAB_00024d50 + uVar1 * 4))();
      return;
    }
  }
  return;
}


/* ---- FUN_000250a0 @ 000250a0 ---- */

void FUN_000250a0(void)

{
  undefined4 local_1c;
  undefined auStack_18 [16];
  
  local_1c = 0;
  FUN_0001b1fc(auStack_18,0,0x10);
  local_1c = CONCAT31(local_1c._1_3_,3);
  FUN_0001b27c(&local_1c,1,DAT_000250c8);
  return;
}


/* ---- FUN_000250cc @ 000250cc ---- */

void FUN_000250cc(void)

{
  undefined4 local_1c;
  undefined auStack_18 [16];
  
  local_1c = 0;
  FUN_0001b1fc(auStack_18,0,0x10);
  local_1c = CONCAT31(local_1c._1_3_,4);
  FUN_0001b27c(&local_1c,1,DAT_000250f4);
  return;
}


/* ---- FUN_000250f8 @ 000250f8 ---- */

void FUN_000250f8(void)

{
  software_interrupt(0xa0);
  return;
}


/* ---- FUN_000250fc @ 000250fc ---- */

void FUN_000250fc(void)

{
  software_interrupt(0xa2);
  return;
}


/* ---- FUN_00025100 @ 00025100 ---- */

void FUN_00025100(void)

{
  software_interrupt(99);
  return;
}


/* ---- FUN_00025104 @ 00025104 ---- */

int FUN_00025104(undefined *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined local_78;
  undefined local_77;
  byte local_76;
  undefined local_74;
  undefined local_73;
  byte local_72;
  undefined2 local_70;
  undefined local_6e;
  undefined2 local_6c;
  undefined local_6a;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined2 *local_58;
  undefined *local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined *local_48;
  byte local_44 [4];
  int local_40;
  int local_38;
  int local_34;
  undefined *local_30;
  int local_2c;
  
  local_68 = *DAT_00025394;
  uStack_64 = DAT_00025394[1];
  uStack_60 = DAT_00025394[2];
  local_5c = DAT_00025394[3];
  if ((param_1 == (undefined *)0x0) || (param_2 == 0)) {
    iVar2 = 0xe;
  }
  else {
    *(undefined2 *)(param_1 + 0x14) = 0xffff;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x2c);
    param_1[0x16] = 0;
    iVar2 = FUN_00025100(&local_68,param_1);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,0xd4,DAT_00025398);
    }
    local_6e = *param_1;
    local_70 = 3;
    iVar2 = FUN_000250f8(1,&local_70,param_1 + 2);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,0xde,DAT_00025398);
    }
    FUN_00031764(param_1 + 0x17,param_2,0x14);
    FUN_0001b1fc(&local_78,0,3);
    local_78 = 0x11;
    local_77 = 0x11;
    local_76 = local_76 & 0xf9 | 2;
    FUN_0001b1fc(local_44,0,0x1c);
    local_44[0] = local_44[0] & 0xe1 | 0x1e;
    local_40 = 0;
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_6a = *param_1;
    local_6c = 0xffb1;
    local_30 = &local_78;
    FUN_0001b1fc(&local_74,0,3);
    local_74 = 0x11;
    local_73 = 0x11;
    local_72 = local_72 & 0xe0 | 2;
    FUN_0001b1fc(&local_58,0,0x14);
    local_58 = &local_6c;
    local_50 = 0x14;
    local_4c = 0x14;
    local_54 = &local_74;
    local_48 = param_1 + 0x17;
    iVar2 = FUN_000250fc(*(undefined2 *)(param_1 + 2),local_44,&local_58,param_1 + 0x30);
    if (iVar2 == 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x1c);
      uVar3 = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
      *(undefined4 *)(param_1 + 0x40) = uVar3;
      uVar1 = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_1 + 0x48) = uVar1;
      FUN_0001b1fc(&local_78,0,3,param_1 + 0x4c);
      local_78 = 0x11;
      local_77 = 0x11;
      local_76 = local_76 & 0xf9 | 2;
      FUN_0001b1fc(local_44,0,0x1c);
      local_44[0] = local_44[0] & 0xe1 | 0x1e;
      local_6a = *param_1;
      local_6c = 0xffb2;
      local_40 = iVar2;
      local_38 = iVar2;
      local_34 = iVar2;
      local_30 = &local_78;
      local_2c = iVar2;
      FUN_0001b1fc(&local_74,0,3);
      local_74 = 0x11;
      local_73 = 0x11;
      local_72 = local_72 & 0xe0 | 2;
      FUN_0001b1fc(&local_58,0,0x14);
      local_58 = &local_6c;
      local_50 = 0x14;
      local_4c = 0x14;
      local_48 = param_1 + 0x38;
      local_54 = &local_74;
      iVar2 = FUN_000250fc(*(undefined2 *)(param_1 + 2),local_44,&local_58,param_1 + 0x50);
      if (iVar2 == 0) {
        FUN_0001b1fc(local_44,0,0x1c);
        local_44[0] = local_44[0] | 2;
        local_6a = *param_1;
        local_6c = 0xffb3;
        local_40 = iVar2;
        local_38 = iVar2;
        local_34 = iVar2;
        local_30 = (undefined *)iVar2;
        local_2c = iVar2;
        FUN_0001b1fc(&local_74,0,3);
        local_74 = 0x11;
        local_72 = local_72 & 0xe0 | 2;
        local_73 = 0;
        FUN_0001b1fc(&local_58,0,0x14);
        local_58 = &local_6c;
        local_50 = 0x14;
        local_4c = 0x14;
        local_48 = (undefined *)(param_2 + 0x30);
        local_54 = &local_74;
        iVar2 = FUN_000250fc(*(undefined2 *)(param_1 + 2),local_44,&local_58,param_1 + 0x6c);
      }
    }
  }
  return iVar2;
}


/* ---- FUN_0002539c @ 0002539c ---- */

void FUN_0002539c(void)

{
  software_interrupt(0x74);
  return;
}


/* ---- FUN_000253a0 @ 000253a0 ---- */

void FUN_000253a0(void)

{
  software_interrupt(0x76);
  return;
}


/* ---- FUN_000253a4 @ 000253a4 ---- */

void FUN_000253a4(void)

{
  software_interrupt(0x77);
  return;
}


/* ---- FUN_000253a8 @ 000253a8 ---- */

void FUN_000253a8(void)

{
  software_interrupt(0x78);
  return;
}


/* ---- FUN_000253ac @ 000253ac ---- */

void FUN_000253ac(void)

{
  software_interrupt(0x7a);
  return;
}


/* ---- FUN_000253b0 @ 000253b0 ---- */

void FUN_000253b0(void)

{
  software_interrupt(0x7b);
  return;
}


/* ---- FUN_000253b4 @ 000253b4 ---- */

void FUN_000253b4(void)

{
  software_interrupt(0x7c);
  return;
}


/* ---- FUN_000253b8 @ 000253b8 ---- */

void FUN_000253b8(void)

{
  software_interrupt(0xa4);
  return;
}


/* ---- FUN_000253bc @ 000253bc ---- */

void FUN_000253bc(void)

{
  software_interrupt(0xa6);
  return;
}


/* ---- FUN_000253c0 @ 000253c0 ---- */

void FUN_000253c0(void)

{
  software_interrupt(0xa8);
  return;
}


/* ---- FUN_000253c4 @ 000253c4 ---- */

void FUN_000253c4(void)

{
  software_interrupt(0x67);
  return;
}


/* ---- FUN_000253e4 @ 000253e4 ---- */

void FUN_000253e4(undefined4 param_1)

{
  FUN_0001b210(param_1,DAT_000253f4,DAT_000253f0);
  return;
}


/* ---- FUN_00025418 @ 00025418 ---- */

void FUN_00025418(void)

{
  FUN_00029098(DAT_00025424);
  return;
}


/* ---- FUN_00025480 @ 00025480 ---- */

void FUN_00025480(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = *DAT_000254b4;
  if (cVar1 != '\0') {
    *DAT_000254b4 = cVar1 + -1;
    uVar2 = DAT_000254bc;
    if (cVar1 == '\x01') {
      *DAT_000254b8 = 1;
      *DAT_000254c0 = cVar1 + -1;
      iVar3 = FUN_0001bc28(uVar2);
      if (iVar3 != 0) {
        FUN_0001b210(iVar3,DAT_000254c8,DAT_000254c4);
      }
    }
  }
  return;
}


/* ---- ffb2_on_write @ 000254cc ---- */
/* touch pattern header + 20-byte sample packets */

/* touch pattern header + 20-byte sample packets */

void ffb2_on_write(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined local_19 [5];
  
  pbVar2 = DAT_000255a0;
  if (*DAT_000255a0 != 0) {
    local_19[0] = 5;
    FUN_00028610(DAT_000255a8);
    bVar1 = *pbVar2;
    if (bVar1 < *DAT_000255b4) {
      *pbVar2 = bVar1 + 1;
      return;
    }
    if (bVar1 != *DAT_000255b4) {
      *pbVar2 = 0;
      FUN_000286b4();
      return;
    }
    *pbVar2 = 0;
    FUN_000286b4();
    FUN_0001b27c(local_19,1,DAT_000255bc);
    return;
  }
  FUN_00028680(DAT_000255a4);
  pbVar3 = DAT_000255a8;
  if (2 < *DAT_000255a8 - 1) {
    return;
  }
  if (DAT_000255a8[2] - 1 < 10) {
    FUN_000285f8();
    pbVar4 = DAT_000255b0;
    *DAT_000255ac = pbVar3[1];
    pbVar5 = DAT_000255b8;
    *DAT_000255b4 = pbVar3[2];
    *pbVar4 = pbVar3[3];
    pbVar4[1] = pbVar3[4];
    pbVar4[2] = pbVar3[5];
    *pbVar5 = pbVar3[6];
    pbVar5[1] = pbVar3[7];
    pbVar5[2] = pbVar3[8];
    if (pbVar3[9] == 0) {
      FUN_00028668(0);
    }
    else {
      FUN_00028668(1);
    }
    if (((*pbVar4 == *pbVar5) && (pbVar4[1] == pbVar5[1])) && (pbVar4[2] == pbVar5[2])) {
      display_set_color_mode(1);
    }
    else {
      display_set_color_mode(2);
    }
    *pbVar2 = *pbVar2 + 1;
    return;
  }
  return;
}


/* ---- FUN_000255c0 @ 000255c0 ---- */

void FUN_000255c0(void)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  byte local_14 [8];
  
  puVar1 = DAT_00025608;
  if (*DAT_00025608 != DAT_0002560c) {
    iVar2 = FUN_0002e194((uint)*DAT_00025608,local_14);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,DAT_00025618,DAT_00025610);
    }
    if ((-1 < (int)((uint)local_14[0] << 0x1e)) &&
       (uVar3 = FUN_0002e130(*puVar1,0), (uVar3 & 0xfffffff7) != 0)) {
      FUN_0001b210(uVar3,DAT_00025614,DAT_00025610);
    }
  }
  return;
}


/* ---- FUN_00025620 @ 00025620 ---- */

void FUN_00025620(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_r3;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_000256d0;
  iVar4 = DAT_000256cc;
  FUN_0001b1fc(DAT_000256d0,DAT_000256cc,0x10,in_r3,in_r3);
  piVar2 = DAT_000256d4;
  *DAT_000256d4 = 8;
  iVar3 = FUN_0002e21c(iVar4);
  iVar5 = 0;
  *piVar2 = 0;
  if (iVar3 == iVar4) {
    iVar4 = 0;
  }
  else {
    iVar6 = 8;
    while( true ) {
      *(short *)(iVar1 + iVar5 * 2) = (short)iVar3;
      *piVar2 = iVar5 + 1;
      iVar3 = FUN_0002e21c();
      if ((iVar3 == iVar4) || (iVar6 = iVar6 + -1, iVar6 == 0)) break;
      iVar5 = *piVar2;
    }
    iVar4 = *piVar2;
  }
  iVar4 = FUN_0002e164(iVar1,iVar4);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,0x1d9,DAT_000256e0);
  }
  iVar4 = FUN_0002e17c(iVar1,*piVar2);
  if ((iVar4 == 6) || (iVar4 == 0)) {
    *DAT_000256d8 = 0;
    iVar4 = FUN_0002a8fc(4);
  }
  else {
    FUN_0001b210(iVar4,0x1e0,DAT_000256e0);
    *DAT_000256d8 = 0;
    iVar4 = FUN_0002a8fc(4);
  }
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,0x1e6,DAT_000256e0);
  }
  *DAT_000256dc = 1;
  return;
}


/* ---- FUN_00025bc4 @ 00025bc4 ---- */

void FUN_00025bc4(undefined param_1)

{
  undefined4 uVar1;
  undefined local_1c;
  undefined local_1b;
  undefined2 local_1a;
  undefined2 local_18;
  undefined local_16;
  undefined2 *local_10;
  undefined4 local_c;
  
  *DAT_00025c38 = param_1;
  uVar1 = DAT_00025c40;
  local_1c = 4;
  if (*DAT_00025c3c != '\0') {
    local_1b = param_1;
    FUN_0001b1fc(DAT_00025c40,0,0x14);
    FUN_00031764(uVar1,&local_1c,2);
    local_1a = 0x14;
    if (*DAT_00025c44 == '\0') {
      fsm_dispatch_event(0x21);
    }
    else {
      FUN_0001b1fc(&local_18,0,0x10);
      local_16 = 1;
      local_18 = *(undefined2 *)(DAT_00025c48 + 0x30);
      local_c = uVar1;
      local_10 = &local_1a;
      FUN_000253bc(*DAT_00025c4c,&local_18);
    }
  }
  return;
}


/* ---- FUN_00025c50 @ 00025c50 ---- */

undefined FUN_00025c50(void)

{
  return *DAT_00025c58;
}


/* ---- FUN_00025c5c @ 00025c5c ---- */

void FUN_00025c5c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined auStack_b0 [4];
  undefined local_ac;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined2 local_80;
  undefined4 local_7c;
  undefined4 local_54;
  undefined *local_50;
  undefined4 local_4c;
  byte local_48;
  undefined2 local_46;
  ushort local_44;
  undefined *local_40;
  undefined *local_3c;
  
  local_90 = *DAT_00025ee8;
  iVar4 = FUN_000310e8(&local_90,DAT_00025eec,0x48,0);
  if (iVar4 == 0) {
    iVar4 = FUN_000311e4(0,1,&local_54);
  }
  else {
    FUN_0001b210(iVar4,DAT_00025f38,PTR_s__________common_ble_bond3_ble_bo_00025f34);
    iVar4 = FUN_000311e4(0,1,&local_54);
  }
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f3c,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  local_54 = CONCAT22(local_54._2_2_,5);
  local_48 = local_48 | 1;
  iVar4 = FUN_00031214(&local_54);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f7c,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  iVar4 = FUN_00031184(PTR_FUN_00026138_1_00025ef0);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f78,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  iVar4 = FUN_00031198(PTR_LAB_000253f8_1_00025ef4);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f74,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  iVar4 = FUN_0001bb3c(PTR_DAT_00025efc,0,PTR_FUN_000255c0_1_00025ef8);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f70,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  iVar4 = FUN_0001bb3c(PTR_DAT_00025f04,1,PTR_FUN_00025480_1_00025f00);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f6c,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  iVar4 = FUN_0002e054();
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f68,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  FUN_0001b1fc(&local_54,0,5);
  local_54 = CONCAT13(local_54._3_1_,0x100731) & 0xfcffffff | 0x3000000;
  local_50 = (undefined *)((uint)local_50 & 0xfffffffc | 3);
  iVar4 = FUN_0002e118(&local_54);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f64,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  iVar4 = FUN_0002e0e4(PTR_LAB_000256e4_1_00025f08);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f60,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  iVar4 = FUN_000305d4(PTR_LAB_00025408_1_00025f0c);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f5c,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  puVar1 = PTR_s_Bond_More_00025f10;
  local_90 = CONCAT31(local_90._1_3_,0x11);
  uVar3 = FUN_000317ec(PTR_s_Bond_More_00025f10);
  iVar4 = FUN_000253b4(&local_90,puVar1,uVar3);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f58,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  iVar4 = FUN_000253a4(0);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f54,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  iVar4 = FUN_000253a8(0xc0);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f50,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  FUN_0001b1fc(&local_54,0,8);
  local_54 = DAT_00025f14;
  local_50 = (undefined *)0x1900000;
  iVar4 = FUN_000253ac(&local_54);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f4c,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  FUN_0001b1fc(&local_90,0,0x3c);
  uVar2 = DAT_00025f18;
  local_90 = CONCAT31(local_90._1_3_,2);
  local_90 = CONCAT22((short)DAT_00025f1c,(undefined2)local_90);
  local_7c = DAT_00025f18;
  local_80 = 4;
  FUN_0001b1fc(&local_54,0,0x3c);
  local_40 = (undefined *)uVar2;
  local_44 = 4;
  FUN_0001b1fc(auStack_b0,0,0x20);
  local_ac = 1;
  local_98 = 0x6e0;
  local_94 = 0xb4;
  iVar4 = FUN_0002a74c(&local_90,&local_54,auStack_b0,PTR_LAB_00025468_1_00025f20,0);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f48,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  iVar4 = FUN_0002bf98(DAT_00025f28,PTR_LAB_000253cc_1_00025f24);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f44,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  FUN_0001b1fc(&local_54,0,0x1c);
  local_54 = 0;
  local_50 = &LAB_00028000;
  local_4c = 0xf0000;
  local_46 = 0;
  local_44 = local_44 & 0xff00;
  local_40 = PTR_LAB_00025428_1_00025f2c;
  local_48 = 3;
  local_3c = PTR_LAB_000253d0_1_00025f30;
  iVar4 = FUN_0002ab44(&local_54);
  if (iVar4 != 0) {
    FUN_0001b210(iVar4,DAT_00025f40,PTR_s__________common_ble_bond3_ble_bo_00025f34);
  }
  return;
}


/* ---- FUN_00025f80 @ 00025f80 ---- */

undefined FUN_00025f80(void)

{
  return *DAT_00025f88;
}


/* ---- FUN_00025f8c @ 00025f8c ---- */

void FUN_00025f8c(void)

{
  FUN_0001b27c(0,0,DAT_00025f9c);
  return;
}


/* ---- FUN_00025fa0 @ 00025fa0 ---- */

void FUN_00025fa0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 local_22;
  undefined2 local_20;
  undefined local_1e;
  undefined2 *local_18;
  undefined4 local_14;
  
  uVar1 = DAT_00026010;
  if (*DAT_0002600c != '\0') {
    FUN_0001b1fc(DAT_00026010,0,0x14);
    FUN_00031764(uVar1,param_1,param_2);
    local_22 = 0x14;
    if (*DAT_00026014 == '\0') {
      fsm_dispatch_event(0x21);
    }
    else {
      FUN_0001b1fc(&local_20,0,0x10);
      local_1e = 1;
      local_20 = *(undefined2 *)(DAT_00026018 + 0x30);
      local_14 = uVar1;
      local_18 = &local_22;
      FUN_000253bc(*DAT_0002601c,&local_20);
    }
  }
  return;
}


/* ---- FUN_00026020 @ 00026020 ---- */

void FUN_00026020(void)

{
  int iVar1;
  int iVar2;
  undefined local_2d [5];
  undefined4 local_28;
  undefined *local_24;
  undefined2 local_20;
  undefined local_1e;
  undefined2 local_1c;
  undefined4 *local_18;
  undefined *local_14;
  
  if ((*DAT_000260a0 != '\0') && (*DAT_000260a4 != '\0')) {
    local_2d[0] = FUN_000248a0();
    FUN_0001b1fc(&local_28,0,8);
    iVar1 = DAT_000260a8;
    local_28 = 1;
    local_24 = local_2d;
    iVar2 = FUN_000253b8(*(undefined2 *)(DAT_000260a8 + 0x12),*(undefined2 *)(DAT_000260a8 + 6),
                         &local_28);
    if ((iVar2 == 0) &&
       ((*(undefined *)(iVar1 + 0x10) = local_2d[0], *(ushort *)(iVar1 + 0x12) != DAT_000260ac &&
        (*(char *)(iVar1 + 0x14) != '\0')))) {
      FUN_0001b1fc(&local_20,0,0x10);
      local_20 = *(undefined2 *)(iVar1 + 6);
      local_1e = 1;
      local_1c = local_28._2_2_;
      local_18 = &local_28;
      local_14 = local_24;
      FUN_000253bc(*(undefined2 *)(iVar1 + 0x12),&local_20);
    }
  }
  return;
}


/* ---- FUN_000260b0 @ 000260b0 ---- */

void FUN_000260b0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  *DAT_00026118 = 6;
  *DAT_0002611c = 0;
  if (*DAT_00026120 == '\0') {
    *DAT_00026120 = '\x01';
    iVar2 = FUN_0001bb68(DAT_00026124,0x8000,0);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,DAT_0002612c,DAT_00026128);
      iVar2 = FUN_00029c28();
      uVar1 = DAT_00026134;
      goto joined_r0x000260f2;
    }
  }
  iVar2 = FUN_00029c28();
  uVar1 = DAT_00026134;
joined_r0x000260f2:
  DAT_00026134 = uVar1;
  if (iVar2 != 0) {
    *DAT_00026130 = 1;
    iVar2 = FUN_0001bb68(uVar1,0xc000,0);
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,0x1aa,DAT_00026128);
    }
  }
  return;
}


/* ---- FUN_00026138 @ 00026138 ---- */

void FUN_00026138(ushort *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  ushort uVar9;
  uint uVar10;
  undefined *puVar11;
  char local_28 [4];
  undefined2 local_24;
  
  FUN_0002ac68();
  FUN_0002e030(param_1);
  FUN_0002abbc(param_1);
  FUN_0002a940(param_1);
  iVar5 = DAT_000264dc;
  iVar7 = DAT_000264d0;
  uVar9 = *param_1;
  if (uVar9 == 0x3a) {
    iVar5 = FUN_000253a0(param_1[2],0x13);
    iVar7 = DAT_000264d0;
    if (iVar5 != 0) {
      FUN_0001b210(iVar5,DAT_000264f0,DAT_000264e8);
      iVar7 = DAT_000264d0;
    }
    goto LAB_000261e2;
  }
  if (uVar9 < 0x3b) {
    if (uVar9 == 0x10) {
      *DAT_000264bc = 1;
      *DAT_000264ac = param_1[2];
      *DAT_000264f8 = 6;
      if (*DAT_000264fc == '\0') {
        *DAT_000264fc = '\x01';
        iVar7 = FUN_0001bb68(DAT_000265d8,0x8000,0);
        if (iVar7 != 0) {
          FUN_0001b210(iVar7,DAT_000265e0,DAT_000265dc);
        }
      }
      *DAT_00026500 = 0;
      FUN_000260b0();
      fsm_dispatch_event(0xc);
      iVar7 = DAT_000264d0;
    }
    else if (uVar9 < 0x11) {
      if (uVar9 == 1) {
        if (*DAT_000264f4 != '\0') {
          fsm_dispatch_event(0x16);
          iVar7 = DAT_000264d0;
        }
      }
      else if ((uVar9 == 2) &&
              (iVar5 = FUN_000253c4(*DAT_000264ac,0), iVar7 = DAT_000264d0, iVar5 != 0)) {
        FUN_0001b210(iVar5,DAT_000264ec,DAT_000264e8);
        iVar7 = DAT_000264d0;
      }
    }
    else if (uVar9 == 0x11) {
      iVar7 = FUN_0001bc28(DAT_000264a8);
      if (iVar7 != 0) {
        FUN_0001b210(iVar7,DAT_0002650c,DAT_000264e8);
      }
      *DAT_000264ac = 0xffff;
      *DAT_000264b0 = 0;
      *DAT_000264b4 = 0;
      *DAT_000264b8 = 0;
      *DAT_000264bc = 0;
      *DAT_000264c0 = 0;
      FUN_00029ef8();
      FUN_000248c4(1);
      *DAT_000264c4 = 0;
      if (param_1[2] == *(ushort *)(DAT_000264c8 + 8)) {
        *(undefined2 *)(DAT_000264c8 + 8) = 0xffff;
      }
      uVar2 = DAT_000265d4;
      puVar4 = DAT_000265d0;
      pcVar1 = DAT_000264cc;
      if (*DAT_000264cc != '\0') {
        iVar7 = FUN_0002e164(DAT_000265d4,*DAT_000265d0);
        if (iVar7 != 0) {
          FUN_0001b210(iVar7,DAT_000265ec,DAT_000265dc);
        }
        iVar7 = FUN_0002e17c(uVar2,*puVar4);
        if ((iVar7 != 6) && (iVar7 != 0)) {
          FUN_0001b210(iVar7,DAT_000265f4,DAT_000265dc);
        }
        *pcVar1 = '\0';
      }
      fsm_dispatch_event(0xd);
      iVar7 = DAT_000264d0;
    }
    goto LAB_000261e2;
  }
  if (uVar9 == 0x51) {
    cVar8 = *(char *)(param_1 + 3);
    if ((cVar8 != '\0') && (*(byte *)(param_1 + 7) - 4 < 3)) {
      if (cVar8 != '\x02') {
        cVar8 = '\x01';
      }
      local_24 = 0x182;
      local_28[0] = cVar8;
      iVar5 = FUN_000253c0(param_1[2],local_28);
      iVar7 = DAT_000264d0;
      if (iVar5 != 0) {
        FUN_0001b210(iVar5,DAT_00026504,DAT_000264e8);
        iVar7 = DAT_000264d0;
      }
    }
    goto LAB_000261e2;
  }
  if (uVar9 == 0x55) {
    iVar5 = FUN_000253a0(param_1[2],0x13);
    iVar7 = DAT_000264d0;
    if (iVar5 != 0) {
      FUN_0001b210(iVar5,DAT_00026508,DAT_000264e8);
      iVar7 = DAT_000264d0;
    }
    goto LAB_000261e2;
  }
  if (uVar9 != 0x50) goto LAB_000261e2;
  uVar9 = param_1[3];
  if (*(ushort *)(DAT_000264dc + 0x34) == uVar9) {
    iVar6 = FUN_0002aec8(param_1 + 9);
    iVar7 = DAT_000264d0;
    if (iVar6 == 0) {
      *DAT_000264b4 = 0;
      uVar9 = param_1[3];
      iVar7 = DAT_000265f0;
    }
    else {
      *DAT_000264b4 = 1;
      uVar9 = param_1[3];
    }
  }
  else if (*(ushort *)(DAT_000264d0 + 10) == uVar9) {
    iVar6 = FUN_0002aec8(param_1 + 9);
    puVar11 = DAT_000265e4;
    if (iVar6 == 0) {
LAB_0002657a:
      *puVar11 = (char)iVar6;
      uVar9 = param_1[3];
    }
    else {
      *DAT_000265e4 = 1;
      FUN_000244b4();
      uVar9 = param_1[3];
    }
  }
  else if (*(ushort *)(DAT_000264dc + 0x54) == uVar9) {
    iVar6 = FUN_0002aec8(param_1 + 9);
    puVar11 = DAT_000265e8;
    if (iVar6 == 0) goto LAB_0002657a;
    *DAT_000265e8 = 1;
    uVar9 = param_1[3];
  }
  pbVar3 = DAT_00026510;
  uVar2 = DAT_000264e0;
  if (*(ushort *)(iVar5 + 0x30) == uVar9) {
    if (param_1[8] != 0) {
      FUN_0001b1fc(DAT_00026510,0,0x14);
      FUN_00031764(pbVar3,param_1 + 9,param_1[8]);
      uVar10 = (uint)*pbVar3;
      if (uVar10 < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x00026384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(DAT_00026514 + uVar10 * 4))();
        return;
      }
    }
  }
  else if ((*(ushort *)(iVar5 + 0x50) == uVar9) && (param_1[8] != 0)) {
    FUN_0001b1fc(DAT_000264e0,0,0x14);
    FUN_00031764(uVar2,param_1 + 9,param_1[8]);
    FUN_0001b27c(0,0,DAT_000264e4);
  }
LAB_000261e2:
  FUN_0002bf9c(DAT_000264d4,param_1);
  FUN_0002f628(iVar7,param_1);
  FUN_00030758(DAT_000264d8,param_1);
  FUN_0002fbac(DAT_000264c8,param_1);
  return;
}


/* ---- FUN_000265f8 @ 000265f8 ---- */

void FUN_000265f8(void)

{
  if (*DAT_0002660c == '\0') {
    FUN_00025620();
  }
  return;
}


/* ---- FUN_00026610 @ 00026610 ---- */

void FUN_00026610(undefined4 param_1,undefined2 param_2)

{
  undefined2 local_1a;
  undefined2 local_18;
  undefined local_16;
  undefined2 *local_10;
  undefined4 local_c;
  
  local_1a = param_2;
  if (*DAT_0002665c == '\0') {
    fsm_dispatch_event(0x1a);
  }
  else {
    FUN_0001b1fc(&local_18,0,0x10);
    local_16 = 1;
    local_18 = *(undefined2 *)(DAT_00026660 + 0x50);
    local_10 = &local_1a;
    local_c = param_1;
    FUN_000253bc(*DAT_00026664,&local_18);
  }
  return;
}


/* ---- FUN_00026668 @ 00026668 ---- */

void FUN_00026668(void)

{
  int iVar1;
  
  if ((*DAT_0002668c != '\0') && (iVar1 = FUN_000253a0(*DAT_00026690,0x13), iVar1 != 0)) {
    FUN_0001b210(iVar1,DAT_00026698,DAT_00026694);
  }
  return;
}


/* ---- FUN_0002669c @ 0002669c ---- */

void FUN_0002669c(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_000266c0;
  if (*DAT_000266c0 != '\0') {
    iVar2 = FUN_0002539c();
    if (iVar2 != 0) {
      FUN_0001b210(iVar2,DAT_000266c8,DAT_000266c4);
    }
    *pcVar1 = '\0';
  }
  return;
}


/* ---- FUN_000266cc @ 000266cc ---- */

void FUN_000266cc(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined auStack_dc [12];
  undefined auStack_d0 [12];
  undefined4 local_c4;
  undefined local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined auStack_9c [8];
  undefined auStack_94 [8];
  undefined auStack_8c [8];
  undefined auStack_84 [8];
  undefined auStack_7c [28];
  undefined2 local_60;
  undefined auStack_5c [20];
  undefined4 local_48;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined auStack_18 [4];
  
  FUN_0001b1fc(auStack_9c,0,0x40);
  uVar1 = FUN_000292b0();
  uVar2 = FUN_0001fb3c();
  FUN_000317ac(auStack_d0,DAT_00026854,(uVar1 << 0x10) >> 0x1c,(uVar1 << 0x14) >> 0x1a,uVar1 & 0x3f,
               uVar2);
  FUN_0002aedc(auStack_9c,DAT_00026858);
  FUN_0002aedc(auStack_94,DAT_0002685c);
  FUN_0002aedc(auStack_8c,auStack_dc);
  iVar3 = FUN_0001fb14();
  if (iVar3 == 1) {
    FUN_0002aedc(auStack_84,DAT_00026890);
  }
  else {
    FUN_0002aedc(auStack_84,DAT_00026860);
  }
  FUN_0002aedc(auStack_7c,auStack_d0);
  local_60 = 0x11;
  iVar3 = FUN_0002f8fc(auStack_9c);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,DAT_000268ac,DAT_00026894);
  }
  FUN_0001b1fc(&local_c4,0,0x14);
  local_c4 = 0;
  local_bc = 0;
  local_c0 = 1;
  local_b8 = DAT_00026864;
  local_b4 = 0x11;
  iVar3 = FUN_0002f688(DAT_00026868,&local_c4);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,DAT_000268a8,DAT_00026894);
  }
  FUN_0001b1fc(auStack_5c,0,0x44);
  local_48 = DAT_0002686c;
  local_30 = DAT_00026870;
  FUN_0001b1fc(&local_b0,0,0x14);
  local_b0 = CONCAT31(local_b0._1_3_,0x43);
  local_2c = local_b0;
  uStack_28 = uStack_ac;
  uStack_24 = uStack_a8;
  local_20 = local_a4;
  uStack_1c = uStack_a0;
  iVar3 = FUN_00025104(DAT_00026874,auStack_5c,uStack_a0,auStack_18);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,DAT_000268a4,DAT_00026894);
  }
  FUN_0001b1fc(&local_e4,0,8);
  uVar2 = DAT_00026878;
  iVar3 = FUN_0002fee0(DAT_00026878,0,DAT_0002687c,0x20);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,DAT_000268a0,DAT_00026894);
  }
  iVar3 = FUN_0002ff0c(uVar2,0,DAT_00026880,0x20);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,DAT_0002689c,DAT_00026894);
  }
  iVar3 = FUN_0002fee0(uVar2,1,DAT_00026884,0x20);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,0x7d8,DAT_00026894);
  }
  local_e4 = DAT_00026888;
  local_e0 = DAT_0002688c;
  iVar3 = FUN_0002fc80(uVar2,&local_e4);
  if (iVar3 != 0) {
    FUN_0001b210(iVar3,DAT_00026898,DAT_00026894);
  }
  return;
}


/* ---- FUN_000268b0 @ 000268b0 ---- */

void FUN_000268b0(void)

{
  *DAT_000268b8 = 0;
  return;
}


/* ---- FUN_000268bc @ 000268bc ---- */

undefined FUN_000268bc(void)

{
  return *DAT_000268c4;
}


/* ---- FUN_000268c8 @ 000268c8 ---- */

void FUN_000268c8(void)

{
  int iVar1;
  
  iVar1 = FUN_0002e27c();
  if (iVar1 != 0) {
    FUN_0001b210(iVar1,DAT_000268e4,DAT_000268e0);
  }
  return;
}


/* ---- FUN_000268e8 @ 000268e8 ---- */

void FUN_000268e8(undefined param_1)

{
  *DAT_000268f0 = param_1;
  return;
}


/* ---- FUN_000268f4 @ 000268f4 ---- */

undefined FUN_000268f4(void)

{
  return *DAT_000268fc;
}


/* ---- FUN_00026900 @ 00026900 ---- */

void FUN_00026900(void)

{
  software_interrupt(0x3c);
  return;
}


/* ---- FUN_00026918 @ 00026918 ---- */

void FUN_00026918(void)

{
  undefined local_14 [12];
  
  FUN_0001b1fc(local_14,0,0xc);
  local_14[0] = 10;
  FUN_0001b27c(local_14,0xc,DAT_0002693c);
  return;
}


/* ---- FUN_00026990 @ 00026990 ---- */

void FUN_00026990(void)

{
  undefined local_14 [12];
  
  FUN_0001b1fc(local_14,0,0xc);
  local_14[0] = 10;
  FUN_0001b27c(local_14,0xc,DAT_000269b4);
  return;
}


/* ---- fsm_dispatch_event @ 000269b8 ---- */
/* per-state jump table 0x333a4 (21 states), state var 0x200020f6 */

/* per-state jump table 0x333a4 (21 states), state var 0x200020f6 */

void fsm_dispatch_event(void)

{
  if (*DAT_00026cfc < 0x15) {
                    /* WARNING: Could not recover jumptable at 0x000269d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(PTR_PTR_LAB_00026d00 + (uint)*DAT_00026cfc * 4))();
    return;
  }
  return;
}


/* ---- FUN_000269ee @ 000269ee ---- */

void FUN_000269ee(void)

{
  return;
}


/* ---- FUN_00026aa8 @ 00026aa8 ---- */

void FUN_00026aa8(void)

{
  undefined *unaff_r6;
  
  fsm_dispatch_event(2);
  *unaff_r6 = 1;
  FUN_00028d74();
  FUN_00021b00();
  FUN_000242d0();
  FUN_0001ff7c(1);
  FUN_00028c00();
  FUN_0001f9f8(1);
  FUN_000226b0();
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00026ab2 @ 00026ab2 ---- */

void FUN_00026ab2(void)

{
  FUN_00028d74();
  FUN_00021b00();
  FUN_000242d0();
  FUN_0001ff7c(1);
  FUN_00028c00();
  FUN_0001f9f8(1);
  FUN_000226b0();
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00026c24 @ 00026c24 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00026c24(void)

{
  int iVar1;
  undefined *unaff_r6;
  
  fsm_dispatch_event(2);
  *unaff_r6 = 0xb;
  FUN_00028d74();
  FUN_00029f14();
  iVar1 = FUN_0001ffac();
  if (iVar1 == 0) {
    FUN_00028008();
  }
  FUN_00025bc4(0x8c);
  FUN_00021b00();
  FUN_00026668();
  settings_get_brightness();
  FUN_00021cd0();
  display_mask_color(0x38,0xffffff);
  FUN_000242d0();
  FUN_00023224();
  FUN_00028c48();
  _DAT_50000720 = DAT_00026d64;
  iVar1 = FUN_00026900();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_000269ee();
  }
  FUN_0001b210(iVar1,0xaa,DAT_00026d5c);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00026c98 @ 00026c98 ---- */

void FUN_00026c98(void)

{
  FUN_0001bb68();
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00026e86 @ 00026e86 ---- */

void FUN_00026e86(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *unaff_r4;
  int unaff_r5;
  
  iVar3 = FUN_00031344(0xf0 - (uint)*(byte *)(unaff_r5 + 1),0x1a);
  if (iVar3 == 9) {
                    /* WARNING: Subroutine does not return */
    FUN_000282fc();
  }
  unaff_r4[1] = (byte)iVar3;
  display_show(2);
  motor_pan_position((uint)*unaff_r4 + (uint)unaff_r4[1] >> 1);
  pbVar2 = DAT_00027130;
  bVar1 = *DAT_00027130;
  *(byte *)(DAT_0002713c + (uint)bVar1) = unaff_r4[1] << 4 | *unaff_r4;
  *pbVar2 = bVar1 + 1;
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00026e9c @ 00026e9c ---- */

void FUN_00026e9c(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *unaff_r4;
  
  display_show(2);
  motor_pan_position((uint)*unaff_r4 + (uint)unaff_r4[1] >> 1);
  pbVar2 = DAT_00027130;
  bVar1 = *DAT_00027130;
  *(byte *)(DAT_0002713c + (uint)bVar1) = unaff_r4[1] << 4 | *unaff_r4;
  *pbVar2 = bVar1 + 1;
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00026ef6 @ 00026ef6 ---- */

void FUN_00026ef6(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *unaff_r4;
  
  display_show(1);
  motor_pan_position(*unaff_r4);
  pbVar2 = DAT_00027130;
  bVar1 = *DAT_00027130;
  *(byte *)(DAT_0002713c + (uint)bVar1) = *unaff_r4 | 0xf0;
  *pbVar2 = bVar1 + 1;
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00026f36 @ 00026f36 ---- */

void FUN_00026f36(void)

{
  undefined *unaff_r4;
  
  *unaff_r4 = 0xff;
  FUN_0001f9f8(1);
  FUN_0001f9f8(2);
  FUN_0001ff7c(1);
  FUN_00028d74();
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_000271ba @ 000271ba ---- */

void FUN_000271ba(void)

{
  FUN_000248c4(1);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_0002744a @ 0002744a ---- */

void FUN_0002744a(void)

{
  FUN_00025bc4(0x82);
  *DAT_00027494 = 1;
  FUN_0001bb68();
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_000274ee @ 000274ee ---- */

void FUN_000274ee(void)

{
  int iVar1;
  byte *unaff_r4;
  byte *unaff_r5;
  undefined *unaff_r6;
  
  motor_pan_position((uint)*unaff_r5 + (uint)unaff_r5[1] >> 1);
  if ((int)(uint)*unaff_r4 < (int)(*DAT_0002785c - 1)) {
    FUN_0002809e();
  }
  FUN_00022364();
  FUN_000237f4();
  FUN_0001bc28(DAT_00027860);
  *unaff_r4 = 0;
  FUN_00028d74();
  FUN_000250cc();
  if (*DAT_00027864 == '\0') {
    fsm_dispatch_event(2);
    *unaff_r6 = 4;
    FUN_00028d74();
    FUN_00021b00();
    FUN_00024340();
    FUN_000226b0();
                    /* WARNING: Subroutine does not return */
    FUN_000269ee();
  }
  fsm_dispatch_event(2);
  *unaff_r6 = 6;
  FUN_000248c4(0);
  FUN_00025bc4(0x89);
  FUN_00021b00();
  FUN_00022b68();
  FUN_00028d74();
  iVar1 = DAT_00027870;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00028d74();
  FUN_0001bb68(DAT_00027874,0x24000,0);
  FUN_0001ff7c(1);
  FUN_00028c00();
  FUN_0001f9f8(1);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_000274fa @ 000274fa ---- */

void FUN_000274fa(void)

{
  int iVar1;
  byte *unaff_r4;
  undefined *unaff_r6;
  
  if ((int)(uint)*unaff_r4 < (int)(*DAT_0002785c - 1)) {
    FUN_0002809e();
  }
  FUN_00022364();
  FUN_000237f4();
  FUN_0001bc28(DAT_00027860);
  *unaff_r4 = 0;
  FUN_00028d74();
  FUN_000250cc();
  if (*DAT_00027864 == '\0') {
    fsm_dispatch_event(2);
    *unaff_r6 = 4;
    FUN_00028d74();
    FUN_00021b00();
    FUN_00024340();
    FUN_000226b0();
                    /* WARNING: Subroutine does not return */
    FUN_000269ee();
  }
  fsm_dispatch_event(2);
  *unaff_r6 = 6;
  FUN_000248c4(0);
  FUN_00025bc4(0x89);
  FUN_00021b00();
  FUN_00022b68();
  FUN_00028d74();
  iVar1 = DAT_00027870;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00028d74();
  FUN_0001bb68(DAT_00027874,0x24000,0);
  FUN_0001ff7c(1);
  FUN_00028c00();
  FUN_0001f9f8(1);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_000275ea @ 000275ea ---- */

void FUN_000275ea(void)

{
  FUN_0001bb68(DAT_00027860,DAT_00027878,0);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00027790 @ 00027790 ---- */

void FUN_00027790(void)

{
  FUN_00025bc4(0x8f);
  FUN_0001bb68();
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00027a30 @ 00027a30 ---- */

void FUN_00027a30(void)

{
  char in_r3;
  char *unaff_r4;
  
  *unaff_r4 = in_r3 + '\x01';
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00027a5a @ 00027a5a ---- */

void FUN_00027a5a(void)

{
  int iVar1;
  undefined unaff_r4;
  int unaff_r5;
  uint param_6;
  undefined param_12;
  
  iVar1 = FUN_00031344(0xf0 - (param_6 >> 8 & 0xff),0x1a);
  if (iVar1 == 9) {
                    /* WARNING: Subroutine does not return */
    FUN_00028382();
  }
  param_12 = (undefined)iVar1;
  *(undefined *)(unaff_r5 + 3) = unaff_r4;
  *(undefined *)(unaff_r5 + 2) = 2;
  *(undefined *)(unaff_r5 + 4) = param_12;
  FUN_00028d74();
  display_factory_touch_two_color(2,&stack0x00000008);
  if (-1 < (int)((uint)*DAT_00027ca4 << 0x1f)) {
                    /* WARNING: Subroutine does not return */
    FUN_000283f2();
  }
  *DAT_00027ca4 = *DAT_00027ca4 + 1;
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00027a76 @ 00027a76 ---- */

void FUN_00027a76(undefined param_1)

{
  undefined unaff_r4;
  int unaff_r5;
  
  *(undefined *)(unaff_r5 + 3) = unaff_r4;
  *(undefined *)(unaff_r5 + 2) = 2;
  *(undefined *)(unaff_r5 + 4) = param_1;
  FUN_00028d74();
  display_factory_touch_two_color(2,&stack0x00000008);
  if (-1 < (int)((uint)*DAT_00027ca4 << 0x1f)) {
                    /* WARNING: Subroutine does not return */
    FUN_000283f2();
  }
  *DAT_00027ca4 = *DAT_00027ca4 + 1;
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00027a96 @ 00027a96 ---- */

void FUN_00027a96(void)

{
  char in_r3;
  char *unaff_r4;
  
  *unaff_r4 = in_r3 + '\x01';
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00027aee @ 00027aee ---- */

void FUN_00027aee(undefined param_1)

{
  int unaff_r5;
  
  *(undefined *)(unaff_r5 + 3) = param_1;
  *(undefined *)(unaff_r5 + 2) = 1;
  FUN_00028d74();
  display_factory_touch_two_color(1,&stack0x00000008);
  if ((*DAT_00027ca4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_000283e4();
  }
  *DAT_00027ca4 = *DAT_00027ca4 + 1;
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00027b0c @ 00027b0c ---- */

void FUN_00027b0c(void)

{
  char in_r3;
  char *unaff_r4;
  
  *unaff_r4 = in_r3 + '\x01';
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00027fba @ 00027fba ---- */

void FUN_00027fba(void)

{
  FUN_00022b24(1);
  FUN_00021f68(10);
  FUN_00022b10();
                    /* WARNING: Subroutine does not return */
  FUN_00026aa8();
}


/* ---- FUN_00028008 @ 00028008 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00028008(void)

{
  int iVar1;
  
  FUN_00025bc4(0x8b);
  FUN_00021b00();
  FUN_00026668();
  FUN_00021f68(0);
  iVar1 = 100000;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_000242d0();
  FUN_00023224();
  FUN_00028c48();
  _DAT_50000720 = 0x2000c;
  _DAT_50000724 = 0x2000c;
  iVar1 = FUN_00026900();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_000269ee();
  }
  FUN_0001b210(iVar1,0x9d,s__________common_fsm_bond3_fsm_c_0003337f + 1);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00028072 @ 00028072 ---- */

void FUN_00028072(void)

{
  FUN_00022b24(1);
  FUN_00021f68(9);
  FUN_00022b10();
                    /* WARNING: Subroutine does not return */
  FUN_00026aa8();
}


/* ---- FUN_00028086 @ 00028086 ---- */

void FUN_00028086(void)

{
  undefined *unaff_r6;
  
  FUN_000250a0();
  fsm_dispatch_event(2);
  *unaff_r6 = 4;
  fsm_dispatch_event(1);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_0002809e @ 0002809e ---- */

void FUN_0002809e(undefined4 param_1,undefined4 param_2,char param_3)

{
  char *unaff_r4;
  
  *unaff_r4 = param_3 + '\x01';
  FUN_00028d74();
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_000280aa @ 000280aa ---- */

void FUN_000280aa(void)

{
  undefined uVar1;
  char *unaff_r4;
  int unaff_r5;
  undefined param_10;
  undefined3 uStack00000015;
  
  _param_10 = 0;
  FUN_0001b1fc(&stack0x00000018,0,0x10);
  if (unaff_r5 == 1) {
    FUN_00029e60();
    FUN_00031764(&stack0x00000014);
    FUN_00029e54();
    FUN_00031764((undefined *)((int)register0x00000054 + 0x16));
    FUN_00029e6c();
    FUN_00031764(&stack0x00000018);
    FUN_00029b9c();
    FUN_00031764(&stack0x0000001c);
    FUN_00029ba8();
    FUN_00031764(&stack0x00000020);
    FUN_000248a0();
    FUN_00031764(&stack0x00000024);
    FUN_00029f24();
    FUN_00031764(&stack0x00000026);
    FUN_00025fa0(&stack0x00000014,0x14);
  }
  else {
    uVar1 = FUN_0001fb10();
    _param_10 = CONCAT31(uStack00000015,uVar1);
    uVar1 = FUN_0001fb08();
    _param_10 = CONCAT11(uVar1,param_10);
    uVar1 = FUN_0001fb0c();
    _param_10 = CONCAT12(uVar1,_param_10);
    uVar1 = FUN_0001fb3c();
    _param_10 = CONCAT13(uVar1,_param_10);
    FUN_0002932c();
    FUN_00031764(&stack0x00000018);
    FUN_00029f40();
    FUN_00031764(&stack0x0000001c);
    FUN_00029f08();
    FUN_00031764(&stack0x0000001e);
    FUN_00029ed0();
    FUN_00031764(&stack0x00000020);
    FUN_00029eec();
    FUN_00031764(&stack0x00000024);
    FUN_00025fa0(&stack0x00000014,0x14);
  }
  *unaff_r4 = *unaff_r4 + '\x01';
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_0002818e @ 0002818e ---- */

void FUN_0002818e(void)

{
  int iVar1;
  
  FUN_00023850();
  anim_slot_sweep_b(DAT_20003015);
  FUN_000275ea();
  FUN_00025bc4(1);
  FUN_0001ff60(1);
  iVar1 = FUN_0001ff98();
  if (iVar1 == 0) {
    FUN_000265f8();
    iVar1 = FUN_00029194();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_000269ee();
    }
    FUN_0001bb68(0x20002e3c,0x1e0000,0);
                    /* WARNING: Subroutine does not return */
    FUN_000269ee();
  }
  FUN_00028d74();
  iVar1 = FUN_0001ffac();
  if (iVar1 == 0) {
    FUN_000285b8(0xb);
                    /* WARNING: Subroutine does not return */
    FUN_000269ee();
  }
  FUN_000285b8(0xc);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_0002819e @ 0002819e ---- */

void FUN_0002819e(void)

{
  int iVar1;
  
  FUN_00025bc4(1);
  FUN_0001ff60(1);
  iVar1 = FUN_0001ff98();
  if (iVar1 == 0) {
    FUN_000265f8();
    iVar1 = FUN_00029194();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_000269ee();
    }
    FUN_0001bb68(0x20002e3c,0x1e0000,0);
                    /* WARNING: Subroutine does not return */
    FUN_000269ee();
  }
  FUN_00028d74();
  iVar1 = FUN_0001ffac();
  if (iVar1 == 0) {
    FUN_000285b8(0xb);
                    /* WARNING: Subroutine does not return */
    FUN_000269ee();
  }
  FUN_000285b8(0xc);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_000281f8 @ 000281f8 ---- */

void FUN_000281f8(void)

{
  char cVar1;
  uint unaff_r4;
  char *pcVar2;
  int unaff_r5;
  undefined *unaff_r6;
  
  pcVar2 = DAT_00027fe8;
  if (unaff_r4 < 7) {
    if (unaff_r4 < 4) {
      if (unaff_r4 == 1) {
        *DAT_00027fe8 = '\x01';
      }
      else if (unaff_r4 - 2 < 2) {
        *DAT_00027fe8 = '\x02';
      }
      else {
        pcVar2 = &DAT_20003016;
        DAT_20003016 = 0;
      }
    }
    else {
      *DAT_00027fe8 = '\x03';
    }
  }
  else {
    if (unaff_r4 != 7) {
      FUN_00028212();
      return;
    }
    cVar1 = FUN_00031230(8,3);
    pcVar2 = DAT_00027fe8;
    *DAT_00027fe8 = cVar1 + '\x01';
  }
  *(undefined *)(unaff_r5 + 1) = 0xb4;
  *(char *)(unaff_r5 + 2) = *pcVar2;
  FUN_00025fa0();
  fsm_dispatch_event(2);
  *unaff_r6 = 7;
  fsm_dispatch_event(1);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00028212 @ 00028212 ---- */

void FUN_00028212(void)

{
  int unaff_r5;
  undefined *unaff_r6;
  
  DAT_20003016 = 0;
  *(undefined *)(unaff_r5 + 1) = 0xb4;
  *(undefined *)(unaff_r5 + 2) = DAT_20003016;
  FUN_00025fa0();
  fsm_dispatch_event(2);
  *unaff_r6 = 7;
  fsm_dispatch_event(1);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_0002823e @ 0002823e ---- */

void FUN_0002823e(void)

{
  undefined *unaff_r6;
  
  fsm_dispatch_event(2);
  *unaff_r6 = 4;
  fsm_dispatch_event(1);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00028252 @ 00028252 ---- */

void FUN_00028252(void)

{
  FUN_0001bc28(0x20002e3c);
  FUN_00022364();
  FUN_0001f9bc(1);
  FUN_00021ad4();
                    /* WARNING: Subroutine does not return */
  FUN_000271ba();
}


/* ---- FUN_0002826a @ 0002826a ---- */

void FUN_0002826a(void)

{
  undefined *unaff_r6;
  
  fsm_dispatch_event(2);
  *unaff_r6 = 0xd;
  fsm_dispatch_event(1);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_0002827e @ 0002827e ---- */

void FUN_0002827e(void)

{
  undefined *unaff_r6;
  
  fsm_dispatch_event(2);
  *unaff_r6 = 1;
  fsm_dispatch_event(1);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00028292 @ 00028292 ---- */

void FUN_00028292(void)

{
  undefined *unaff_r6;
  
  fsm_dispatch_event(2);
  *unaff_r6 = 0xb;
  fsm_dispatch_event(1);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_000282a6 @ 000282a6 ---- */

void FUN_000282a6(void)

{
  int iVar1;
  undefined *unaff_r5;
  
  iVar1 = display_get_color_mode();
  if (iVar1 == 3) {
    display_show(1);
  }
  else {
    display_show(1);
  }
  motor_pan_position(*unaff_r5);
                    /* WARNING: Subroutine does not return */
  FUN_000274fa();
}


/* ---- FUN_000282f4 @ 000282f4 ---- */

void FUN_000282f4(void)

{
  undefined *unaff_r4;
  
  *unaff_r4 = 8;
                    /* WARNING: Subroutine does not return */
  FUN_00026ef6();
}


/* ---- FUN_000282fc @ 000282fc ---- */

void FUN_000282fc(void)

{
  undefined *unaff_r4;
  undefined *unaff_r5;
  undefined *unaff_r6;
  
  unaff_r4[1] = 8;
  FUN_00026e9c();
  *unaff_r4 = 8;
  FUN_00026e86();
  FUN_0001bc28(0x20002dfc);
  FUN_0001f9bc(1);
  FUN_0001f9bc(2);
  FUN_0001f9bc(3);
  FUN_0001ff7c(0);
  FUN_00022364();
  FUN_000237f4();
  *unaff_r5 = 0;
  DAT_200020f8 = 0xff;
  FUN_00028d74();
  anim_slot_sweep_a(DAT_20003016);
  fsm_dispatch_event(2);
  *unaff_r6 = 8;
  fsm_dispatch_event(1);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00028304 @ 00028304 ---- */

void FUN_00028304(void)

{
  undefined *unaff_r4;
  undefined *unaff_r5;
  undefined *unaff_r6;
  
  *unaff_r4 = 8;
  FUN_00026e86();
  FUN_0001bc28(0x20002dfc);
  FUN_0001f9bc(1);
  FUN_0001f9bc(2);
  FUN_0001f9bc(3);
  FUN_0001ff7c(0);
  FUN_00022364();
  FUN_000237f4();
  *unaff_r5 = 0;
  DAT_200020f8 = 0xff;
  FUN_00028d74();
  anim_slot_sweep_a(DAT_20003016);
  fsm_dispatch_event(2);
  *unaff_r6 = 8;
  fsm_dispatch_event(1);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_0002830c @ 0002830c ---- */

void FUN_0002830c(void)

{
  undefined *unaff_r5;
  undefined *unaff_r6;
  
  FUN_0001bc28(0x20002dfc);
  FUN_0001f9bc(1);
  FUN_0001f9bc(2);
  FUN_0001f9bc(3);
  FUN_0001ff7c(0);
  FUN_00022364();
  FUN_000237f4();
  *unaff_r5 = 0;
  DAT_200020f8 = 0xff;
  FUN_00028d74();
  anim_slot_sweep_a(DAT_20003016);
  fsm_dispatch_event(2);
  *unaff_r6 = 8;
  fsm_dispatch_event(1);
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_0002835c @ 0002835c ---- */

void FUN_0002835c(void)

{
  undefined *unaff_r6;
  
  fsm_dispatch_event(2);
  *unaff_r6 = 3;
                    /* WARNING: Subroutine does not return */
  FUN_00027790();
}


/* ---- FUN_0002836a @ 0002836a ---- */

void FUN_0002836a(void)

{
  undefined unaff_r5;
  undefined *unaff_r6;
  
  fsm_dispatch_event(2);
  *unaff_r6 = unaff_r5;
  FUN_00026c98();
  FUN_00022364();
  FUN_000237f4();
                    /* WARNING: Subroutine does not return */
  FUN_000274fa();
}


/* ---- FUN_00028376 @ 00028376 ---- */

void FUN_00028376(void)

{
  FUN_00022364();
  FUN_000237f4();
                    /* WARNING: Subroutine does not return */
  FUN_000274fa();
}


/* ---- FUN_00028382 @ 00028382 ---- */

void FUN_00028382(void)

{
  int iVar1;
  char cVar2;
  int unaff_r5;
  int unaff_r6;
  undefined param_11;
  
  param_11 = 8;
  FUN_00027a76(8);
  FUN_00027a5a();
  *(undefined2 *)(unaff_r6 * 8 + 0x34) = 0;
  FUN_00027aee(8,0x2843c);
  FUN_00025fa0();
  FUN_00027b0c();
  FUN_00025fa0();
  cVar2 = MasterStackPointer;
  FUN_00027a96();
  *(char *)(unaff_r5 + 3) = cVar2;
  FUN_00025fa0();
  iVar1 = FUN_00027a30();
  display_show(iVar1 + -1);
  FUN_000274ee();
  FUN_00029e60();
  FUN_00031764();
  FUN_00029e54();
  FUN_00031764(&stack0x00000016);
  FUN_00029e6c();
  FUN_00031764(&stack0x00000018);
  FUN_00029b9c();
  FUN_00031764(&stack0x0000001c);
  FUN_00029ba8();
  FUN_00031764(&stack0x00000020);
  FUN_000248a0();
  FUN_00031764(&stack0x00000024);
  FUN_00029f24();
  FUN_00031764(&stack0x00000026);
  FUN_00025fa0();
  MasterStackPointer = MasterStackPointer + '\x01';
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_0002838e @ 0002838e ---- */

void FUN_0002838e(void)

{
  int iVar1;
  char cVar2;
  int unaff_r5;
  int unaff_r6;
  undefined param_7;
  
  param_7 = 8;
  FUN_00027a5a();
  *(undefined2 *)(unaff_r6 * 8 + 0x34) = 0;
  param_7 = 8;
  FUN_00027aee(8,0x2843c);
  FUN_00025fa0();
  FUN_00027b0c();
  FUN_00025fa0();
  cVar2 = MasterStackPointer;
  FUN_00027a96();
  *(char *)(unaff_r5 + 3) = cVar2;
  FUN_00025fa0();
  iVar1 = FUN_00027a30();
  display_show(iVar1 + -1);
  FUN_000274ee();
  FUN_00029e60();
  FUN_00031764();
  FUN_00029e54();
  FUN_00031764(&stack0x00000016);
  FUN_00029e6c();
  FUN_00031764(&stack0x00000018);
  FUN_00029b9c();
  FUN_00031764(&stack0x0000001c);
  FUN_00029ba8();
  FUN_00031764(&stack0x00000020);
  FUN_000248a0();
  FUN_00031764(&stack0x00000024);
  FUN_00029f24();
  FUN_00031764(&stack0x00000026);
  FUN_00025fa0();
  MasterStackPointer = MasterStackPointer + '\x01';
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_000283d8 @ 000283d8 ---- */

void FUN_000283d8(void)

{
  int iVar1;
  char cVar2;
  char *unaff_r4;
  int unaff_r5;
  undefined param_7;
  
  param_7 = 8;
  FUN_00027aee(8);
  FUN_00025fa0();
  FUN_00027b0c();
  FUN_00025fa0();
  cVar2 = *unaff_r4;
  FUN_00027a96();
  *(char *)(unaff_r5 + 3) = cVar2;
  FUN_00025fa0();
  iVar1 = FUN_00027a30();
  display_show(iVar1 + -1);
  FUN_000274ee();
  FUN_00029e60();
  FUN_00031764();
  FUN_00029e54();
  FUN_00031764(&stack0x00000016);
  FUN_00029e6c();
  FUN_00031764(&stack0x00000018);
  FUN_00029b9c();
  FUN_00031764(&stack0x0000001c);
  FUN_00029ba8();
  FUN_00031764(&stack0x00000020);
  FUN_000248a0();
  FUN_00031764(&stack0x00000024);
  FUN_00029f24();
  FUN_00031764(&stack0x00000026);
  FUN_00025fa0();
  *unaff_r4 = *unaff_r4 + '\x01';
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_000283e4 @ 000283e4 ---- */

void FUN_000283e4(void)

{
  int iVar1;
  char cVar2;
  char *unaff_r4;
  int unaff_r5;
  
  FUN_00025fa0();
  FUN_00027b0c();
  FUN_00025fa0();
  cVar2 = *unaff_r4;
  FUN_00027a96();
  *(char *)(unaff_r5 + 3) = cVar2;
  FUN_00025fa0();
  iVar1 = FUN_00027a30();
  display_show(iVar1 + -1);
  FUN_000274ee();
  FUN_00029e60();
  FUN_00031764();
  FUN_00029e54();
  FUN_00031764(&stack0x00000016);
  FUN_00029e6c();
  FUN_00031764(&stack0x00000018);
  FUN_00029b9c();
  FUN_00031764(&stack0x0000001c);
  FUN_00029ba8();
  FUN_00031764(&stack0x00000020);
  FUN_000248a0();
  FUN_00031764(&stack0x00000024);
  FUN_00029f24();
  FUN_00031764(&stack0x00000026);
  FUN_00025fa0();
  *unaff_r4 = *unaff_r4 + '\x01';
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_000283f2 @ 000283f2 ---- */

void FUN_000283f2(void)

{
  int iVar1;
  char cVar2;
  char *unaff_r4;
  int unaff_r5;
  
  FUN_00025fa0();
  cVar2 = *unaff_r4;
  FUN_00027a96();
  *(char *)(unaff_r5 + 3) = cVar2;
  FUN_00025fa0();
  iVar1 = FUN_00027a30();
  display_show(iVar1 + -1);
  FUN_000274ee();
  FUN_00029e60();
  FUN_00031764();
  FUN_00029e54();
  FUN_00031764(&stack0x00000016);
  FUN_00029e6c();
  FUN_00031764(&stack0x00000018);
  FUN_00029b9c();
  FUN_00031764(&stack0x0000001c);
  FUN_00029ba8();
  FUN_00031764(&stack0x00000020);
  FUN_000248a0();
  FUN_00031764(&stack0x00000024);
  FUN_00029f24();
  FUN_00031764(&stack0x00000026);
  FUN_00025fa0();
  *unaff_r4 = *unaff_r4 + '\x01';
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00028400 @ 00028400 ---- */

void FUN_00028400(void)

{
  int iVar1;
  undefined in_r3;
  char *unaff_r4;
  int unaff_r5;
  
  *(undefined *)(unaff_r5 + 3) = in_r3;
  FUN_00025fa0();
  iVar1 = FUN_00027a30();
  display_show(iVar1 + -1);
  FUN_000274ee();
  FUN_00029e60();
  FUN_00031764();
  FUN_00029e54();
  FUN_00031764(&stack0x00000016);
  FUN_00029e6c();
  FUN_00031764(&stack0x00000018);
  FUN_00029b9c();
  FUN_00031764(&stack0x0000001c);
  FUN_00029ba8();
  FUN_00031764(&stack0x00000020);
  FUN_000248a0();
  FUN_00031764(&stack0x00000024);
  FUN_00029f24();
  FUN_00031764(&stack0x00000026);
  FUN_00025fa0();
  *unaff_r4 = *unaff_r4 + '\x01';
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_00028410 @ 00028410 ---- */

void FUN_00028410(int param_1)

{
  char *unaff_r4;
  
  display_show(param_1 + -1);
  FUN_000274ee();
  FUN_00029e60();
  FUN_00031764();
  FUN_00029e54();
  FUN_00031764(&stack0x00000016);
  FUN_00029e6c();
  FUN_00031764(&stack0x00000018);
  FUN_00029b9c();
  FUN_00031764(&stack0x0000001c);
  FUN_00029ba8();
  FUN_00031764(&stack0x00000020);
  FUN_000248a0();
  FUN_00031764(&stack0x00000024);
  FUN_00029f24();
  FUN_00031764(&stack0x00000026);
  FUN_00025fa0();
  *unaff_r4 = *unaff_r4 + '\x01';
                    /* WARNING: Subroutine does not return */
  FUN_000269ee();
}


/* ---- FUN_000284ac @ 000284ac ---- */

void FUN_000284ac(undefined4 param_1,undefined4 param_2,undefined param_3,int param_4)

{
  int iVar1;
  char *unaff_r5;
  
  *(undefined *)(DAT_000284d4 + param_4) = param_3;
  *unaff_r5 = (char)param_4 + '\x01';
  FUN_00022364();
  FUN_000237f4();
  iVar1 = FUN_00026f36();
  display_show(iVar1 + -2);
  motor_pan_position(*unaff_r5);
                    /* WARNING: Subroutine does not return */
  FUN_000274fa();
}


/* ---- FUN_000284d8 @ 000284d8 ---- */

void FUN_000284d8(void)

{
  int iVar1;
  
  FUN_0001f9bc(1);
  FUN_0001f9bc(2);
  FUN_0001f9bc(3);
  FUN_0001ff7c(0);
  FUN_00028c48();
  FUN_00021ad4();
  FUN_000242d0();
  iVar1 = FUN_0001bb3c(PTR_DAT_00028594,0,PTR_FUN_00026918_1_00028590);
  if (iVar1 == 0) {
    iVar1 = FUN_0001bb3c(PTR_DAT_0002859c,1,PTR_FUN_00026990_1_00028598);
  }
  else {
    FUN_0001b210(iVar1,0xe0,DAT_000285b4);
    iVar1 = FUN_0001bb3c(PTR_DAT_0002859c,1,PTR_FUN_00026990_1_00028598);
  }
  if (iVar1 == 0) {
    iVar1 = FUN_0001bb3c(PTR_DAT_000285a4,0,PTR_LAB_0002690c_1_000285a0);
  }
  else {
    FUN_0001b210(iVar1,0xe3,DAT_000285b4);
    iVar1 = FUN_0001bb3c(PTR_DAT_000285a4,0,PTR_LAB_0002690c_1_000285a0);
  }
  if (iVar1 == 0) {
    iVar1 = FUN_0001bb3c(PTR_DAT_000285ac,0,PTR_LAB_00026904_1_000285a8);
  }
  else {
    FUN_0001b210(iVar1,0xe6,DAT_000285b4);
    iVar1 = FUN_0001bb3c(PTR_DAT_000285ac,0,PTR_LAB_00026904_1_000285a8);
  }
  if (iVar1 != 0) {
    FUN_0001b210(iVar1,0xe9,DAT_000285b4);
  }
  *DAT_000285b0 = 1;
  fsm_dispatch_event(1);
  return;
}


/* ---- FUN_000285b8 @ 000285b8 ---- */

void FUN_000285b8(undefined param_1)

{
  fsm_dispatch_event(2);
  *DAT_000285d0 = param_1;
  fsm_dispatch_event(1);
  return;
}


/* ---- FUN_000285f8 @ 000285f8 ---- */

void FUN_000285f8(undefined param_1)

{
  *DAT_00028600 = param_1;
  return;
}


/* ---- FUN_00028604 @ 00028604 ---- */

undefined FUN_00028604(void)

{
  return *DAT_0002860c;
}


/* ---- FUN_00028610 @ 00028610 ---- */

void FUN_00028610(undefined4 param_1,int param_2)

{
  FUN_00031764((param_2 + -1) * 0x14 + DAT_0002862c,param_1,0x14);
  return;
}


/* ---- cmd47_store_test_colors @ 00028630 ---- */
/* args [R1 G1 B1 R2 G2 B2 secs(1..10)] */

/* args [R1 G1 B1 R2 G2 B2 secs(1..10)] */

void cmd47_store_test_colors(undefined *param_1)

{
  undefined *puVar1;
  byte bVar2;
  
  puVar1 = DAT_0002865c;
  *DAT_0002865c = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1 = DAT_00028660;
  *DAT_00028660 = param_1[3];
  puVar1[1] = param_1[4];
  puVar1[2] = param_1[5];
  bVar2 = param_1[6];
  if (9 < bVar2 - 1) {
    bVar2 = 10;
  }
  *DAT_00028664 = bVar2;
  return;
}


/* ---- FUN_00028668 @ 00028668 ---- */

void FUN_00028668(undefined param_1)

{
  *DAT_00028670 = param_1;
  return;
}


/* ---- FUN_00028674 @ 00028674 ---- */

void FUN_00028674(undefined param_1)

{
  *DAT_0002867c = param_1;
  return;
}


/* ---- FUN_00028680 @ 00028680 ---- */

void FUN_00028680(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_000286b0;
  FUN_0001bc28(DAT_000286b0);
  uVar2 = FUN_0003151c(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  FUN_0001bb68(uVar1,uVar2,0);
  return;
}


/* ---- FUN_000286b4 @ 000286b4 ---- */

void FUN_000286b4(void)

{
  FUN_0001bc28(DAT_000286c0);
  return;
}


/* ---- FUN_000286c4 @ 000286c4 ---- */

void FUN_000286c4(int param_1,undefined param_2)

{
  int iVar1;
  
  iVar1 = DAT_000286d4;
  *(undefined *)(param_1 * 2 + DAT_000286d4) = 1;
  *(undefined *)(iVar1 + param_1 * 2 + 1) = param_2;
  return;
}


/* ---- FUN_000286d8 @ 000286d8 ---- */

void FUN_000286d8(int param_1)

{
  *(undefined2 *)(param_1 * 2 + DAT_000286e4) = 0x400;
  return;
}


/* ---- FUN_000286e8 @ 000286e8 ---- */

void FUN_000286e8(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined local_24 [8];
  int local_1c;
  
  piVar1 = DAT_0002872c;
  *DAT_00028728 = *DAT_00028728 + 1;
  *DAT_00028730 = 0;
  pcVar2 = *DAT_00028734;
  if ((pcVar2 != (code *)0x0) && (iVar3 = *piVar1, iVar3 != 0)) {
    FUN_0001b1fc(local_24,0,8);
    local_24[0] = 3;
    local_1c = iVar3;
    (*pcVar2)(local_24);
  }
  *piVar1 = 0;
  return;
}


/* ---- FUN_00028738 @ 00028738 ---- */

bool FUN_00028738(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined2 auStack_4 [2];
  
  uVar1 = DAT_0002877c;
  *(undefined2 *)((int)auStack_4 + DAT_00028778) = 0x3a0;
  *(undefined4 *)(&stack0xfffffff4 + DAT_00028778) = 1;
  iVar2 = FUN_0001eeac(DAT_0002877c,0x6a,(undefined2 *)((int)auStack_4 + DAT_00028778),2);
  bVar3 = false;
  if (iVar2 == 0) {
    iVar2 = FUN_0001ef70(uVar1,0x6a,param_1,1);
    bVar3 = iVar2 == 0;
  }
  return bVar3;
}


/* ---- FUN_00028784 @ 00028784 ---- */

bool FUN_00028784(undefined4 param_1)

{
  int iVar1;
  undefined2 local_108;
  undefined auStack_106 [254];
  
  local_108 = 0x1a0;
  FUN_00031764(auStack_106,param_1,1);
  iVar1 = FUN_0001eeac(DAT_000287b8,0x6a,&local_108,3,1);
  return iVar1 == 0;
}


/* ---- FUN_000287bc @ 000287bc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000287bc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  char local_2c [8];
  
  iVar2 = FUN_0001bb3c(PTR_DAT_00028944,0,PTR_FUN_000286e8_1_00028940);
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,DAT_0002896c,DAT_00028968);
  }
  *(undefined4 *)(DAT_00028948 + 0x50000000) = 3;
  iVar2 = DAT_0002894c;
  _DAT_50000778 = 3;
  *(undefined4 *)(DAT_0002894c + 0x50000000) = 3;
  iVar1 = DAT_00028954;
  *(undefined4 *)(DAT_00028954 + 0x50000000) = 0x20000;
  iVar4 = DAT_0002895c;
  iVar3 = DAT_0002895c;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(iVar2 + 0x50000000) = 3;
  *(undefined4 *)(iVar1 + 0x50000000) = 0x20000;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  _DAT_50000508 = 0x20000;
  iVar2 = DAT_00028960;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  cVar5 = '\n';
  do {
    local_2c[0] = -0x55;
    iVar2 = FUN_00028784(local_2c);
    if ((iVar2 == 0) || (iVar2 = FUN_00028738(local_2c), iVar2 == 0)) {
      iVar2 = 8000;
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      iVar2 = 4000;
      if (local_2c[0] == 'U') break;
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    cVar5 = cVar5 + -1;
  } while (cVar5 != '\0');
  *(undefined4 *)(DAT_00028954 + 0x50000000) = 0x20000;
  iVar2 = DAT_0002895c;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  _DAT_50000508 = 0x20000;
  *DAT_00028964 = param_1;
  return;
}


/* ---- FUN_00028970 @ 00028970 ---- */

void FUN_00028970(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint *puVar4;
  undefined4 uVar5;
  int *piVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  code *pcVar13;
  byte local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  byte local_30;
  int local_2c;
  
  pcVar3 = DAT_00028bc0;
  cVar1 = *DAT_00028bc0;
  *DAT_00028bbc = *DAT_00028bbc + 1;
  iVar8 = DAT_00028bc8;
  iVar10 = DAT_00028bc4;
  iVar9 = *(int *)(DAT_00028bc4 + DAT_00028bc8);
  if (cVar1 == '\0') {
    *pcVar3 = '\x01';
    iVar10 = *(int *)(iVar10 + iVar8);
  }
  else {
    iVar10 = *DAT_00028bcc;
  }
  puVar4 = DAT_00028bd0;
  uVar11 = iVar9 - iVar10;
  iVar10 = 10;
  *DAT_00028bcc = iVar9;
  uVar5 = DAT_00028bd4;
  *puVar4 = (uVar11 * 0x100 >> 3) * 4 + (uVar11 & 0xffffff) * -3 >> 0xc;
  FUN_0001bc28(uVar5);
  FUN_0001bb68(uVar5,DAT_00028bd8,0);
  uVar5 = DAT_00028bdc;
  do {
    local_34 = 1;
    iVar8 = FUN_0001eeac(uVar5,0x15,&local_34,1,1);
    if ((iVar8 == 0) && (iVar8 = FUN_0001ef70(uVar5,0x15,&local_34,1), iVar8 == 0)) break;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if (local_34 == 3) {
    pcVar13 = *DAT_00028be0;
    piVar12 = DAT_00028be4;
    if (pcVar13 == (code *)0x0) goto LAB_00028a06;
    FUN_0001b1fc(&local_34,0,8);
  }
  else {
    iVar10 = 10;
    do {
      local_34 = 2;
      iVar8 = FUN_0001eeac(uVar5,0x15,&local_34,1,1);
      if ((iVar8 == 0) && (iVar8 = FUN_0001ef70(uVar5,0x15,&local_34,1), iVar8 == 0)) break;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    uVar11 = (uint)local_34;
    iVar10 = 10;
    *DAT_00028bec = local_34;
    do {
      local_34 = 4;
      iVar8 = FUN_0001eeac(uVar5,0x15,&local_34,1,1);
      if ((iVar8 == 0) && (iVar8 = FUN_0001ef70(uVar5,0x15,&local_34,1), iVar8 == 0)) break;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    iVar10 = 10;
    *DAT_00028bf0 = (ushort)local_34;
    do {
      local_34 = 6;
      iVar8 = FUN_0001eeac(uVar5,0x15,&local_34,1,1);
      if ((iVar8 == 0) && (iVar8 = FUN_0001ef70(uVar5,0x15,&local_34,1), iVar8 == 0)) break;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    puVar7 = DAT_00028bf4;
    iVar10 = 10;
    *DAT_00028bf4 = (ushort)local_34;
    do {
      local_34 = 10;
      iVar8 = FUN_0001eeac(uVar5,0x15,&local_34,1,1);
      if ((iVar8 == 0) && (iVar8 = FUN_0001ef70(uVar5,0x15,&local_34,1), iVar8 == 0)) break;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    iVar10 = 10;
    *DAT_00028bf8 = (ushort)local_34;
    do {
      local_34 = 0xc;
      iVar8 = FUN_0001eeac(uVar5,0x15,&local_34,1,1);
      if ((iVar8 == 0) && (iVar8 = FUN_0001ef70(uVar5,0x15,&local_34,1), iVar8 == 0)) break;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    bVar2 = local_34;
    *DAT_00028bfc = (ushort)local_34;
    pcVar13 = *DAT_00028be0;
    piVar12 = DAT_00028be4;
    if ((pcVar13 == (code *)0x0) ||
       (FUN_0001b1fc(&local_34,0,0xc), piVar12 = DAT_00028be4, 1 < uVar11 - 1)) goto LAB_00028a06;
    if (uVar11 == 1) {
      local_34 = 2;
      local_33 = (undefined)*DAT_00028bf0;
      local_32 = (undefined)*puVar7;
    }
    else {
      local_34 = 1;
      local_33 = (undefined)*DAT_00028bf0;
      local_32 = (undefined)*puVar7;
      local_31 = (undefined)*DAT_00028bf8;
      local_30 = bVar2;
    }
  }
  piVar12 = DAT_00028be4;
  local_2c = *DAT_00028be4;
  (*pcVar13)(&local_34);
LAB_00028a06:
  piVar6 = DAT_00028be8;
  iVar10 = *puVar4 + *piVar12;
  *piVar12 = iVar10;
  *piVar6 = iVar10;
  return;
}


/* ---- FUN_00028c00 @ 00028c00 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00028c00(void)

{
  int iVar1;
  
  *(undefined4 *)(DAT_00028c38 + 0x50000000) = 0x20000;
  iVar1 = DAT_00028c44;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  _DAT_50000508 = 0x20000;
  return;
}


/* ---- FUN_00028c48 @ 00028c48 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00028c48(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 local_24 [2];
  
  iVar2 = DAT_00028cf4;
  uVar1 = DAT_00028cf0;
  local_24[0] = (undefined2)DAT_00028ce8;
  iVar4 = 10;
  do {
    *(undefined4 *)(iVar2 + 0x50000000) = 0x20000;
    iVar3 = DAT_00028cfc;
    do {
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    _DAT_50000508 = 0x20000;
    iVar3 = DAT_00028d00;
    do {
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = FUN_0001eeac(uVar1,0x15,local_24,2,0);
  } while ((iVar3 != 0) && (iVar4 = iVar4 + -1, iVar4 != 0));
  return;
}


/* ---- FUN_00028d04 @ 00028d04 ---- */

void FUN_00028d04(void)

{
  FUN_0001f724(*DAT_00028d10);
  return;
}


/* ---- FUN_00028d14 @ 00028d14 ---- */

void FUN_00028d14(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined auStack_10 [4];
  
  local_1c = *(undefined4 *)PTR_DAT_00028d64;
  uStack_18 = *(undefined4 *)(PTR_DAT_00028d64 + 4);
  uStack_14 = *(undefined4 *)(PTR_DAT_00028d64 + 8);
  iVar2 = FUN_0001f5f8(&local_1c,PTR_FUN_00028d04_1_00028d68,auStack_10,PTR_DAT_00028d64 + 0xc);
  puVar1 = DAT_00028d6c;
  if (iVar2 == 0) {
    iVar2 = FUN_0001f6b0(DAT_00028d6c);
  }
  else {
    FUN_0001b210(iVar2,0x24,DAT_00028d70);
    puVar1 = DAT_00028d6c;
    iVar2 = FUN_0001f6b0(DAT_00028d6c);
  }
  if (iVar2 != 0) {
    FUN_0001b210(iVar2,0x26,DAT_00028d70);
  }
  FUN_0001f668();
  FUN_0001f724(*puVar1);
  return;
}


/* ---- FUN_00028d74 @ 00028d74 ---- */

void FUN_00028d74(void)

{
  FUN_0001f724(*DAT_00028d80);
  return;
}


/* ---- FUN_00028d84 @ 00028d84 ---- */

void FUN_00028d84(void)

{
  software_interrupt(0x48);
  return;
}


/* ---- FUN_00028ddc @ 00028ddc ---- */

int FUN_00028ddc(void)

{
  short *psVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined auStack_20 [4];
  ushort local_1c;
  
  FUN_0001b1fc(auStack_20,0,0xe);
  psVar1 = DAT_00028e90;
  *DAT_00028e90 = *DAT_00028e90 + 1;
  FUN_00031764(psVar1,psVar1,0x14);
  FUN_00031764(DAT_00028e94,psVar1,0x14);
  FUN_00028d74();
  uVar4 = DAT_00028ea0;
  uVar3 = DAT_00028e9c;
  pcVar2 = DAT_00028e98;
  *DAT_00028e98 = '\x01';
  iVar5 = FUN_0001cdd0(uVar4,uVar3);
  uVar4 = DAT_00028ea8;
  uVar3 = DAT_00028ea4;
  if (iVar5 == 0) {
    do {
    } while (*pcVar2 != '\0');
    *pcVar2 = '\x01';
    iVar5 = FUN_0001cdd0(uVar4,uVar3);
    if (iVar5 == 0) {
      do {
      } while (*pcVar2 != '\0');
      iVar5 = FUN_0001d160(auStack_20);
      pcVar2 = DAT_00028eb4;
      if (iVar5 == 0) {
        if (3 < local_1c) {
          *DAT_00028eb4 = '\x01';
          FUN_00028d74();
          iVar6 = FUN_0001ce80();
          FUN_00028d74();
          if (iVar6 == 0) {
            do {
            } while (*pcVar2 != '\0');
          }
        }
      }
      else {
        FUN_0001b210(iVar5,DAT_00028ebc,DAT_00028eac);
      }
    }
    else {
      FUN_0001b210(iVar5,DAT_00028eb8,DAT_00028eac);
    }
  }
  else {
    FUN_0001b210(iVar5,DAT_00028eb0,DAT_00028eac);
  }
  return iVar5;
}


/* ---- FUN_00028ec0 @ 00028ec0 ---- */

int FUN_00028ec0(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined auStack_20 [4];
  ushort local_1c;
  
  FUN_0001b1fc(auStack_20,0,0xe);
  iVar4 = DAT_00028f74;
  *(short *)(DAT_00028f74 + 4) = *(short *)(DAT_00028f74 + 4) + 1;
  FUN_00031764(iVar4,iVar4,0x10);
  FUN_00031764(DAT_00028f78,iVar4,0x10);
  FUN_00028d74();
  uVar3 = DAT_00028f84;
  uVar2 = DAT_00028f80;
  pcVar1 = DAT_00028f7c;
  *DAT_00028f7c = '\x01';
  iVar4 = FUN_0001cdd0(uVar3,uVar2);
  uVar3 = DAT_00028f8c;
  uVar2 = DAT_00028f88;
  if (iVar4 == 0) {
    do {
    } while (*pcVar1 != '\0');
    *pcVar1 = '\x01';
    iVar4 = FUN_0001cdd0(uVar3,uVar2);
    if (iVar4 == 0) {
      do {
      } while (*pcVar1 != '\0');
      iVar4 = FUN_0001d160(auStack_20);
      pcVar1 = DAT_00028f98;
      if (iVar4 == 0) {
        if (3 < local_1c) {
          *DAT_00028f98 = '\x01';
          FUN_00028d74();
          iVar5 = FUN_0001ce80();
          FUN_00028d74();
          if (iVar5 == 0) {
            do {
            } while (*pcVar1 != '\0');
          }
        }
      }
      else {
        FUN_0001b210(iVar4,DAT_00028fa0,DAT_00028f90);
      }
    }
    else {
      FUN_0001b210(iVar4,DAT_00028f9c,DAT_00028f90);
    }
  }
  else {
    FUN_0001b210(iVar4,DAT_00028f94,DAT_00028f90);
  }
  return iVar4;
}


/* ---- FUN_00028fa4 @ 00028fa4 ---- */

int FUN_00028fa4(void)

{
  short *psVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined auStack_20 [4];
  ushort local_1c;
  
  FUN_0001b1fc(auStack_20,0,0xe);
  psVar1 = DAT_00029058;
  *DAT_00029058 = *DAT_00029058 + 1;
  FUN_00031764(psVar1,psVar1,0x24);
  FUN_00031764(DAT_0002905c,psVar1,0x24);
  FUN_00028d74();
  uVar4 = DAT_00029068;
  uVar3 = DAT_00029064;
  pcVar2 = DAT_00029060;
  *DAT_00029060 = '\x01';
  iVar5 = FUN_0001cdd0(uVar4,uVar3);
  uVar4 = DAT_00029070;
  uVar3 = DAT_0002906c;
  if (iVar5 == 0) {
    do {
    } while (*pcVar2 != '\0');
    *pcVar2 = '\x01';
    iVar5 = FUN_0001cdd0(uVar4,uVar3);
    if (iVar5 == 0) {
      do {
      } while (*pcVar2 != '\0');
      iVar5 = FUN_0001d160(auStack_20);
      pcVar2 = DAT_0002907c;
      if (iVar5 == 0) {
        if (3 < local_1c) {
          *DAT_0002907c = '\x01';
          FUN_00028d74();
          iVar6 = FUN_0001ce80();
          FUN_00028d74();
          if (iVar6 == 0) {
            do {
            } while (*pcVar2 != '\0');
          }
        }
      }
      else {
        FUN_0001b210(iVar5,DAT_00029084,DAT_00029074);
      }
    }
    else {
      FUN_0001b210(iVar5,DAT_00029080,DAT_00029074);
    }
  }
  else {
    FUN_0001b210(iVar5,DAT_00029078,DAT_00029074);
  }
  return iVar5;
}


/* ---- FUN_00029088 @ 00029088 ---- */

undefined4 FUN_00029088(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(DAT_00029094 + 4);
  return 0;
}


/* ---- FUN_00029098 @ 00029098 ---- */

int FUN_00029098(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined auStack_20 [4];
  ushort local_1c;
  
  FUN_0001b1fc(auStack_20,0,0xe);
  if (param_1 == (undefined4 *)0x0) {
    iVar3 = 0xe;
  }
  else {
    *(undefined4 *)(DAT_0002915c + 4) = *param_1;
    FUN_00028d74();
    uVar4 = DAT_00029168;
    uVar2 = DAT_00029164;
    pcVar1 = DAT_00029160;
    *DAT_00029160 = '\x01';
    iVar3 = FUN_0001cdd0(uVar4,uVar2);
    if (iVar3 == 0) {
      do {
      } while (*pcVar1 != '\0');
      uVar4 = *param_1;
      *DAT_0002916c = 1;
      uVar2 = DAT_00029174;
      *(undefined4 *)(DAT_00029170 + 4) = uVar4;
      uVar4 = DAT_00029178;
      *pcVar1 = '\x01';
      iVar3 = FUN_0001cdd0(uVar2,uVar4);
      if (iVar3 == 0) {
        do {
        } while (*pcVar1 != '\0');
        iVar3 = FUN_0001d160(auStack_20);
        pcVar1 = DAT_0002918c;
        if (iVar3 == 0) {
          if (3 < local_1c) {
            *DAT_0002918c = '\x01';
            FUN_00028d74();
            iVar3 = FUN_0001ce80();
            FUN_00028d74();
            if (iVar3 == 0) {
              do {
              } while (*pcVar1 != '\0');
            }
          }
          iVar3 = FUN_00028fa4();
          if (iVar3 != 0) {
            FUN_0001b210(iVar3,DAT_00029188,DAT_0002917c);
            iVar3 = 0;
          }
        }
        else {
          FUN_0001b210(iVar3,DAT_00029180,DAT_0002917c);
        }
      }
      else {
        FUN_0001b210(iVar3,DAT_00029190,DAT_0002917c);
      }
    }
    else {
      FUN_0001b210(iVar3,DAT_00029184,DAT_0002917c);
    }
  }
  return iVar3;
}


/* ---- FUN_00029194 @ 00029194 ---- */

char FUN_00029194(void)

{
  char cVar1;
  
  cVar1 = *DAT_000291a8;
  if (cVar1 != '\0') {
    cVar1 = *(int *)(DAT_000291ac + 4) != 0;
  }
  return cVar1;
}


/* ---- FUN_000291b0 @ 000291b0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000291b0(void)

{
  char cVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = DAT_00029288;
  *DAT_00029288 = 2;
  puVar2[2] = 0;
  if (*(int *)(puVar2 + 4) != 0) {
    *(undefined4 *)(puVar2 + 4) = 0;
  }
  if (_DAT_100000a4 != *(int *)(puVar2 + 6)) {
    *(int *)(puVar2 + 6) = _DAT_100000a4;
  }
  puVar3 = DAT_0002928c;
  cVar1 = *(char *)(DAT_0002928c + 2);
  *DAT_0002928c = 0;
  puVar3[1] = 0;
  if ((cVar1 == '2') && (*(char *)((int)puVar3 + 9) == '\x02')) {
    *(undefined *)((int)puVar3 + 10) = 0;
    puVar3[3] = puVar3[3] & 0xfe000000 | DAT_00029294;
    puVar3[4] = puVar3[4] & 0xfe000000 | DAT_00029298;
    puVar3[5] = puVar3[5] & 0xfe000000 | DAT_0002929c;
    puVar3[6] = DAT_000292a0;
    puVar3[7] = DAT_000292a4;
LAB_00029280:
    if (*(char *)((int)puVar3 + 9) == '\x02') goto LAB_0002923e;
  }
  else {
    *(short *)(puVar3 + 2) = (short)DAT_00029290;
    motor_set_level_table(0x32);
    motor_set_balance(2);
    *(undefined *)((int)puVar3 + 10) = 0;
    puVar3[3] = puVar3[3] & 0xfe000000 | DAT_00029294;
    puVar3[4] = puVar3[4] & 0xfe000000 | DAT_00029298;
    puVar3[5] = puVar3[5] & 0xfe000000 | DAT_0002929c;
    puVar3[6] = DAT_000292a0;
    puVar3[7] = DAT_000292a4;
    if (*(char *)(puVar3 + 2) == '2') goto LAB_00029280;
  }
  *(short *)(puVar3 + 2) = (short)DAT_00029290;
  motor_set_level_table(0x32);
  motor_set_balance(2);
LAB_0002923e:
  *(short *)(puVar3 + 8) = (short)DAT_000292a8;
  puVar2 = DAT_000292ac;
  *DAT_000292ac = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  return;
}


/* ---- FUN_000292b0 @ 000292b0 ---- */

undefined2 FUN_000292b0(void)

{
  return *(undefined2 *)(DAT_000292b8 + 2);
}


/* ---- FUN_000292bc @ 000292bc ---- */

void FUN_000292bc(void)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_00029320;
  bVar1 = *(byte *)(DAT_00029320 + 2);
  uVar3 = *(ushort *)(DAT_00029320 + 2);
  bVar2 = *(byte *)(DAT_00029320 + 3);
  uVar4 = FUN_0001fb08();
  if (((((uint)uVar3 << 0x14) >> 0x1a != uVar4) || (uVar4 = FUN_0001fb0c(), (bVar1 & 0x3f) != uVar4)
      ) || (uVar4 = FUN_0001fb10(), bVar2 >> 4 != uVar4)) {
    uVar4 = FUN_0001fb08();
    uVar3 = FUN_0001fb0c();
    iVar5 = FUN_0001fb10();
    *(ushort *)(iVar6 + 2) = (ushort)((uVar4 & 0x3f) << 6) | uVar3 & 0x3f | (ushort)(iVar5 << 0xc);
    iVar6 = FUN_00028fa4();
    if (iVar6 != 0) {
      FUN_0001b210(iVar6,DAT_00029328,DAT_00029324);
    }
  }
  return;
}


/* ---- FUN_0002932c @ 0002932c ---- */

undefined4 FUN_0002932c(void)

{
  return *(undefined4 *)(DAT_00029334 + 0xc);
}


/* ---- FUN_00029338 @ 00029338 ---- */

undefined4 FUN_00029338(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(DAT_00029354 + 0xc) == param_1) ||
     (*(int *)(DAT_00029354 + 0xc) = param_1, param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00028ec0();
  }
  return uVar1;
}


/* ---- FUN_00029358 @ 00029358 ---- */

undefined4 FUN_00029358(void)

{
  return *(undefined4 *)(DAT_00029360 + 8);
}


/* ---- FUN_00029364 @ 00029364 ---- */

undefined4 FUN_00029364(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(DAT_00029380 + 8) == param_1) ||
     (*(int *)(DAT_00029380 + 8) = param_1, param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00028ec0();
  }
  return uVar1;
}


/* ---- FUN_00029384 @ 00029384 ---- */

void FUN_00029384(void)

{
  FUN_00028fa4();
  return;
}


/* ---- FUN_0002938c @ 0002938c ---- */

void FUN_0002938c(void)

{
  FUN_00028ddc();
  return;
}


/* ---- FUN_00029394 @ 00029394 ---- */

int FUN_00029394(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  FUN_00028d74();
  pcVar1 = DAT_0002951c;
  *DAT_0002951c = '\x01';
  iVar3 = FUN_0001ce10(0x50);
  pcVar2 = DAT_00029520;
  if (iVar3 == 0) {
    do {
    } while (*pcVar1 != '\0');
    *DAT_00029520 = '\x01';
    FUN_00028d74();
    iVar3 = FUN_0001ce80();
    FUN_00028d74();
    if (iVar3 == 0) {
      do {
      } while (*pcVar2 != '\0');
    }
    FUN_00028d74();
    *pcVar1 = '\x01';
    iVar3 = FUN_0001ce10(0x80);
    if (iVar3 == 0) {
      do {
      } while (*pcVar1 != '\0');
      *pcVar2 = '\x01';
      FUN_00028d74();
      iVar3 = FUN_0001ce80();
      FUN_00028d74();
      if (iVar3 == 0) {
        do {
        } while (*pcVar2 != '\0');
      }
      FUN_00028d74();
      *pcVar1 = '\x01';
      iVar3 = FUN_0001ce10(0xb0);
      if (iVar3 == 0) {
        do {
        } while (*pcVar1 != '\0');
        *pcVar2 = '\x01';
        FUN_00028d74();
        iVar3 = FUN_0001ce80();
        FUN_00028d74();
        if (iVar3 == 0) {
          do {
          } while (*pcVar2 != '\0');
        }
        FUN_00028d74();
        *pcVar1 = '\x01';
        iVar3 = FUN_0001ce10(0x60);
        if (iVar3 == 0) {
          do {
          } while (*pcVar1 != '\0');
          *pcVar2 = '\x01';
          FUN_00028d74();
          iVar3 = FUN_0001ce80();
          FUN_00028d74();
          if (iVar3 == 0) {
            do {
            } while (*pcVar2 != '\0');
          }
          FUN_00028d74();
          *pcVar1 = '\x01';
          iVar3 = FUN_0001ce10(0x90);
          if (iVar3 == 0) {
            do {
            } while (*pcVar1 != '\0');
            *pcVar2 = '\x01';
            FUN_00028d74();
            iVar3 = FUN_0001ce80();
            FUN_00028d74();
            if (iVar3 == 0) {
              do {
              } while (*pcVar2 != '\0');
            }
            FUN_00028d74();
            *pcVar1 = '\x01';
            iVar3 = FUN_0001ce10(0xc0);
            if (iVar3 == 0) {
              do {
              } while (*pcVar1 != '\0');
              *pcVar2 = '\x01';
              FUN_00028d74();
              iVar3 = FUN_0001ce80();
              FUN_00028d74();
              if (iVar3 == 0) {
                do {
                } while (*pcVar2 != '\0');
                iVar3 = 0;
              }
              else {
                iVar3 = 0;
              }
            }
            else {
              FUN_0001b210(iVar3,0x648,DAT_00029524);
            }
          }
          else {
            FUN_0001b210(iVar3,DAT_00029538,DAT_00029524);
          }
        }
        else {
          FUN_0001b210(iVar3,DAT_00029530,DAT_00029524);
        }
      }
      else {
        FUN_0001b210(iVar3,DAT_00029534,DAT_00029524);
      }
    }
    else {
      FUN_0001b210(iVar3,DAT_00029528,DAT_00029524);
    }
  }
  else {
    FUN_0001b210(iVar3,DAT_0002952c,DAT_00029524);
  }
  return iVar3;
}


/* ---- FUN_0002953c @ 0002953c ---- */

int FUN_0002953c(void)

{
  ushort uVar1;
  char *pcVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined *puVar10;
  ushort *puVar11;
  undefined auStack_b8 [4];
  ushort local_b4;
  undefined auStack_a0 [8];
  undefined auStack_98 [8];
  undefined auStack_90 [16];
  undefined auStack_80 [4];
  undefined4 local_7c;
  undefined auStack_78 [4];
  undefined4 local_74;
  undefined auStack_70 [4];
  undefined4 local_6c;
  undefined auStack_60 [8];
  undefined auStack_58 [8];
  undefined auStack_50 [16];
  undefined auStack_40 [4];
  undefined4 local_3c;
  undefined auStack_38 [4];
  undefined4 uStack_34;
  undefined auStack_30 [4];
  undefined4 uStack_2c;
  
  FUN_0001b1fc(auStack_b8,0,0x90);
  iVar6 = FUN_0001c8e4(DAT_00029810);
  uVar8 = DAT_00029818;
  if (iVar6 != 0) {
    FUN_0001b210(iVar6,0x169,DAT_00029818);
LAB_00029728:
    FUN_0001b210(iVar6,DAT_00029868,uVar8);
    return iVar6;
  }
  iVar6 = FUN_0001c908();
  uVar8 = DAT_00029818;
  if (iVar6 == 0xb) {
    FUN_00028d74();
    FUN_0001faec();
  }
  else if (iVar6 != 0) {
    FUN_0001b210(iVar6,0x176,DAT_00029818);
    goto LAB_00029728;
  }
  FUN_00028d74();
  uVar8 = DAT_00029818;
  pcVar2 = DAT_00029814;
  while (*pcVar2 == '\0') {
    FUN_0001b364();
    iVar9 = FUN_00028d84();
    if (iVar9 != 0) {
      FUN_0001b210(iVar9,0x138,uVar8);
    }
  }
  uVar8 = DAT_00029b58;
  if (iVar6 != 0) goto LAB_00029728;
  iVar6 = FUN_0001d160(auStack_b8);
  uVar8 = DAT_00029818;
  if (iVar6 != 0) {
    FUN_0001b210(iVar6,0x18c,DAT_00029818);
    FUN_0001b210(iVar6,DAT_0002986c,uVar8);
    return iVar6;
  }
  if (3 < local_b4) {
    FUN_00028d74();
    pcVar2 = DAT_00029870;
    *DAT_00029870 = '\x01';
    FUN_00028d74();
    iVar6 = FUN_0001ce80();
    FUN_00028d74();
    if (iVar6 == 0) {
      do {
      } while (*pcVar2 != '\0');
    }
  }
  uVar8 = DAT_0002981c;
  iVar7 = FUN_0001ceec(0x50,0x40,DAT_0002981c,auStack_a0);
  iVar6 = 0;
  iVar9 = DAT_00029824;
  puVar11 = DAT_00029820;
  if ((iVar7 == 0) &&
     (iVar7 = FUN_0001cc00(uVar8,auStack_80), pcVar2 = DAT_00029874, uVar4 = DAT_00029834,
     iVar9 = DAT_00029824, puVar11 = DAT_00029820, iVar7 == 0)) {
    *DAT_00029874 = '\x01';
    iVar7 = FUN_0001ceec(0x60,0x40,uVar4,auStack_60);
    iVar9 = DAT_00029824;
    puVar11 = DAT_00029820;
    if ((iVar7 != 0) ||
       (iVar7 = FUN_0001cc00(uVar4,auStack_40), iVar9 = DAT_00029824, puVar11 = DAT_00029820,
       iVar7 != 0)) goto LAB_000295c6;
    *DAT_00029878 = 1;
    puVar11 = DAT_00029b50;
    puVar3 = DAT_00029820;
    if (*pcVar2 == '\0') {
      FUN_00031764(DAT_00029820,local_3c,0x10);
      FUN_00031764(DAT_0002987c,local_3c,0x10);
      iVar9 = FUN_0001cc50(uVar4);
      puVar11 = puVar3;
      if (iVar9 == 0) goto LAB_000297ec;
      FUN_0001b210(iVar9,DAT_00029b60,DAT_00029b58);
      iVar9 = DAT_00029b4c;
      goto LAB_000295c6;
    }
    FUN_00031764(DAT_00029b50,local_7c,0x10);
    FUN_00031764(DAT_00029b54,local_7c,0x10);
    iVar9 = FUN_0001cc50(uVar8);
    if (iVar9 != 0) {
      FUN_0001b210(iVar9,DAT_00029b5c,DAT_00029b58);
    }
    iVar9 = FUN_0001cc50(uVar4);
    if (iVar9 != 0) {
      FUN_0001b210(iVar9,0x2ec,DAT_00029b58);
      iVar9 = DAT_00029b4c;
      goto LAB_000295c6;
    }
LAB_000297ec:
    uVar4 = DAT_0002983c;
    iVar7 = FUN_0001ceec(0x80,0x70,DAT_0002983c,auStack_98);
    iVar9 = DAT_00029824;
    if (iVar7 != 0) goto LAB_000295c6;
    iVar9 = FUN_0001cc00(uVar4,auStack_78);
    pcVar2 = DAT_00029b2c;
    if (iVar9 != 0) {
      *DAT_00029b2c = '\0';
      iVar9 = DAT_00029b4c;
      *DAT_00029b30 = 0;
      goto LAB_000295c6;
    }
    *DAT_00029b2c = '\x01';
    *DAT_00029b30 = 1;
    uVar5 = DAT_00029b34;
    iVar7 = FUN_0001ceec(0x90,0x70,DAT_00029b34,auStack_58);
    iVar9 = DAT_00029824;
    if (iVar7 != 0) goto LAB_000295c6;
    iVar9 = FUN_0001cc00(uVar5,auStack_38);
    puVar10 = DAT_00029b38;
    if (iVar9 != 0) {
LAB_00029986:
      iVar9 = DAT_00029b4c;
      *puVar10 = 0;
      goto LAB_000295c6;
    }
    *DAT_00029b38 = 1;
    if (*pcVar2 == '\0') {
      FUN_00031764(DAT_00029b3c,uStack_34,0x24);
      FUN_00031764(DAT_00029b40,uStack_34,0x24);
      iVar9 = FUN_0001cc50(uVar5);
      if (iVar9 == 0) goto LAB_000298f8;
      FUN_0001b210(iVar9,0x334,DAT_00029b58);
      iVar9 = DAT_00029b4c;
      goto LAB_000295c6;
    }
    FUN_00031764(DAT_00029b3c,local_74,0x24);
    FUN_00031764(DAT_00029b40,local_74,0x24);
    iVar9 = FUN_0001cc50(uVar4);
    if (iVar9 != 0) {
      FUN_0001b210(iVar9,DAT_00029b94,DAT_00029b58);
    }
    iVar9 = FUN_0001cc50(uVar5);
    if (iVar9 != 0) {
      FUN_0001b210(iVar9,DAT_00029b80,DAT_00029b58);
      iVar9 = DAT_00029b4c;
      goto LAB_000295c6;
    }
LAB_000298f8:
    uVar4 = DAT_00029b44;
    iVar7 = FUN_0001ceec(0xb0,0xa0,DAT_00029b44,auStack_90);
    iVar9 = DAT_00029824;
    if (iVar7 != 0) goto LAB_000295c6;
    iVar7 = FUN_0001cc00(uVar4,auStack_70);
    iVar9 = DAT_00029b4c;
    pcVar2 = DAT_00029b48;
    if (iVar7 != 0) {
      *DAT_00029b48 = '\0';
      goto LAB_000295c6;
    }
    *DAT_00029b48 = '\x01';
    uVar5 = DAT_00029b74;
    iVar7 = FUN_0001ceec(0xc0,0xa0,DAT_00029b74,auStack_50);
    iVar9 = DAT_00029824;
    if (iVar7 != 0) goto LAB_000295c6;
    iVar9 = FUN_0001cc00(uVar5,auStack_30);
    puVar10 = DAT_00029b78;
    if (iVar9 != 0) goto LAB_00029986;
    *DAT_00029b78 = 1;
    iVar9 = DAT_00029b4c;
    if (*pcVar2 == '\0') {
      FUN_00031764(DAT_00029b4c,uStack_2c,0x14);
      FUN_00031764(DAT_00029b7c,uStack_2c,0x14);
      iVar7 = FUN_0001cc50(uVar5);
      if (iVar7 != 0) {
        FUN_0001b210(iVar7,0x370,DAT_00029b58);
        goto LAB_000295c6;
      }
    }
    else {
      FUN_00031764(DAT_00029b4c,local_6c,0x14);
      FUN_00031764(DAT_00029b7c,local_6c,0x14);
      iVar7 = FUN_0001cc50(uVar4);
      if (iVar7 != 0) {
        FUN_0001b210(iVar7,DAT_00029b98,DAT_00029b58);
      }
      iVar7 = FUN_0001cc50(uVar5);
      if (iVar7 != 0) {
        FUN_0001b210(iVar7,0x364,DAT_00029b58);
        goto LAB_000295c6;
      }
    }
  }
  else {
LAB_000295c6:
    FUN_000291b0();
    puVar10 = PTR_DAT_0002982c;
    pcVar2 = DAT_00029828;
    *DAT_00029828 = '\x01';
    iVar7 = FUN_0001cd58(uVar8,puVar10);
    uVar8 = DAT_00029834;
    puVar10 = PTR_DAT_00029830;
    if (iVar7 == 0) {
      do {
      } while (*pcVar2 != '\0');
      *pcVar2 = '\x01';
      iVar7 = FUN_0001cd58(uVar8,puVar10);
      uVar4 = DAT_0002983c;
      uVar8 = DAT_00029838;
      if (iVar7 == 0) {
        do {
        } while (*pcVar2 != '\0');
        *pcVar2 = '\x01';
        iVar7 = FUN_0001cd58(uVar4,uVar8);
        uVar4 = DAT_00029844;
        uVar8 = DAT_00029840;
        if (iVar7 == 0) {
          do {
          } while (*pcVar2 != '\0');
          *pcVar2 = '\x01';
          iVar7 = FUN_0001cd58(uVar4,uVar8);
          uVar4 = DAT_0002984c;
          uVar8 = DAT_00029848;
          if (iVar7 == 0) {
            do {
            } while (*pcVar2 != '\0');
            *pcVar2 = '\x01';
            iVar7 = FUN_0001cd58(uVar4,uVar8);
            uVar4 = DAT_00029854;
            uVar8 = DAT_00029850;
            if (iVar7 == 0) {
              do {
              } while (*pcVar2 != '\0');
              *pcVar2 = '\x01';
              iVar7 = FUN_0001cd58(uVar4,uVar8);
              if (iVar7 == 0) {
                do {
                } while (*pcVar2 != '\0');
              }
              else {
                FUN_0001b210(iVar7,DAT_00029b90,DAT_00029b58);
                iVar6 = iVar7;
              }
            }
            else {
              FUN_0001b210(iVar7,0x3c8,DAT_00029b58);
              iVar6 = iVar7;
            }
          }
          else {
            FUN_0001b210(iVar7,DAT_00029b8c,DAT_00029b58);
            iVar6 = iVar7;
          }
        }
        else {
          FUN_0001b210(iVar7,DAT_00029b88,DAT_00029b58);
          iVar6 = iVar7;
        }
      }
      else {
        FUN_0001b210(iVar7,DAT_00029b84,DAT_00029b58);
        iVar6 = iVar7;
      }
    }
    else {
      FUN_0001b210(iVar7,0x394,DAT_00029b58);
      iVar6 = iVar7;
    }
  }
  *(int *)(iVar9 + 4) = *(int *)(iVar9 + 4) + 1;
  uVar8 = FUN_0001fae0();
  uVar1 = *puVar11;
  *(undefined4 *)(iVar9 + 8) = uVar8;
  iVar9 = DAT_00029858;
  if (uVar1 == 0) {
    uVar8 = 3;
  }
  else {
    if (uVar1 < 3) {
      if (uVar1 != 2) {
        *(undefined *)(DAT_00029858 + 0x22) = 1;
        *(undefined *)(iVar9 + 0x21) = 200;
        *puVar11 = 2;
      }
      goto LAB_00029696;
    }
    iVar9 = FUN_00029394();
    uVar8 = 4;
    if (iVar9 == 0) {
      FUN_000291b0(4);
      goto LAB_00029696;
    }
  }
  FUN_0001b210(uVar8,DAT_00029b70,DAT_00029b58);
LAB_00029696:
  iVar9 = FUN_00028ec0();
  if (iVar9 != 0) {
    FUN_0001b210(iVar9,DAT_00029b6c,DAT_00029b58);
  }
  iVar9 = FUN_00028fa4();
  if (iVar9 != 0) {
    FUN_0001b210(iVar9,DAT_00029b68,DAT_00029b58);
  }
  iVar7 = FUN_00028ddc();
  iVar9 = DAT_00029864;
  if (iVar7 != 0) {
    FUN_0001b210(iVar7,DAT_00029b64,DAT_00029b58);
    iVar9 = DAT_00029864;
  }
  do {
    iVar9 = iVar9 + -1;
    iVar7 = DAT_00029864;
  } while (iVar9 != 0);
  do {
    iVar7 = iVar7 + -1;
    iVar9 = DAT_00029864;
  } while (iVar7 != 0);
  do {
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  return iVar6;
}


/* ---- FUN_00029b9c @ 00029b9c ---- */

undefined4 FUN_00029b9c(void)

{
  return *(undefined4 *)(DAT_00029ba4 + 0xc);
}


/* ---- FUN_00029ba8 @ 00029ba8 ---- */

undefined4 FUN_00029ba8(void)

{
  return *(undefined4 *)(DAT_00029bb0 + 0x10);
}


/* ---- FUN_00029bb4 @ 00029bb4 ---- */

void FUN_00029bb4(void)

{
  *(int *)(DAT_00029bc0 + 0xc) = *(int *)(DAT_00029bc0 + 0xc) + 1;
  return;
}


/* ---- FUN_00029bc4 @ 00029bc4 ---- */

void FUN_00029bc4(void)

{
  *(int *)(DAT_00029bd0 + 0x10) = *(int *)(DAT_00029bd0 + 0x10) + 1;
  return;
}


/* ---- FUN_00029bd4 @ 00029bd4 ---- */

undefined4 FUN_00029bd4(void)

{
  return *(undefined4 *)(DAT_00029bdc + 4);
}


/* ---- FUN_00029be0 @ 00029be0 ---- */

undefined4 FUN_00029be0(void)

{
  return *(undefined4 *)(DAT_00029be8 + 8);
}


/* ---- FUN_00029bec @ 00029bec ---- */

void FUN_00029bec(int param_1)

{
  FUN_00031764(param_1,DAT_00029c10 + 4,2);
  FUN_00031764(param_1 + 2,DAT_00029c14,2);
  FUN_00031764(param_1 + 4,DAT_00029c18,2);
  return;
}


/* ---- FUN_00029c1c @ 00029c1c ---- */

void FUN_00029c1c(undefined param_1)

{
  *(undefined *)(DAT_00029c24 + 10) = param_1;
  return;
}


/* ---- FUN_00029c28 @ 00029c28 ---- */

undefined FUN_00029c28(void)

{
  return *(undefined *)(DAT_00029c30 + 10);
}


/* ---- settings_active_slot_mask @ 00029c34 ---- */

byte settings_active_slot_mask(void)

{
  byte bVar1;
  
  bVar1 = *(byte *)(DAT_00029c50 + 0xf) & 1;
  if ((*(byte *)(DAT_00029c50 + 0x13) & 1) != 0) {
    bVar1 = bVar1 + 2;
  }
  if ((int)((uint)*(byte *)(DAT_00029c50 + 0x17) << 0x1f) < 0) {
    bVar1 = bVar1 + 4;
  }
  return bVar1;
}


/* ---- settings_set_slot_color @ 00029c54 ---- */

void settings_set_slot_color(int param_1,uint param_2)

{
  if (param_1 == 2) {
    *(uint *)(DAT_00029c94 + 0x10) =
         param_2 & 0xffffff | (uint)*(byte *)(DAT_00029c94 + 0x13) << 0x18;
  }
  else if (param_1 == 3) {
    *(uint *)(DAT_00029c94 + 0x14) =
         param_2 & 0xffffff | (uint)*(byte *)(DAT_00029c94 + 0x17) << 0x18;
  }
  else if (param_1 == 1) {
    *(uint *)(DAT_00029c94 + 0xc) = param_2 & 0xffffff | (uint)*(byte *)(DAT_00029c94 + 0xf) << 0x18
    ;
  }
  return;
}


/* ---- settings_get_slot_color @ 00029c98 ---- */

undefined4 settings_get_slot_color(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 2) {
    uVar1 = *(undefined4 *)(DAT_00029cbc + 0x10);
  }
  else if (param_1 == 3) {
    uVar1 = *(undefined4 *)(DAT_00029cbc + 0x14);
  }
  else if (param_1 == 1) {
    uVar1 = *(undefined4 *)(DAT_00029cbc + 0xc);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* ---- settings_set_slot_active @ 00029cc0 ---- */

void settings_set_slot_active(int param_1,byte param_2)

{
  if (param_1 == 2) {
    *(byte *)(DAT_00029cfc + 0x13) = param_2 & 1 | *(byte *)(DAT_00029cfc + 0x13) & 0xfe;
  }
  else if (param_1 == 3) {
    *(byte *)(DAT_00029cfc + 0x17) = param_2 & 1 | *(byte *)(DAT_00029cfc + 0x17) & 0xfe;
  }
  else if (param_1 == 1) {
    *(byte *)(DAT_00029cfc + 0xf) = param_2 & 1 | *(byte *)(DAT_00029cfc + 0xf) & 0xfe;
  }
  return;
}


/* ---- FUN_00029d00 @ 00029d00 ---- */

void FUN_00029d00(void)

{
  int iVar1;
  
  iVar1 = DAT_00029d0c;
  *(undefined4 *)(DAT_00029d0c + 0x18) = DAT_00029d10;
  *(undefined4 *)(iVar1 + 0x1c) = DAT_00029d14;
  return;
}


/* ---- FUN_00029d18 @ 00029d18 ---- */

void FUN_00029d18(undefined *param_1,undefined *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00029d24;
  *param_1 = *(undefined *)(DAT_00029d24 + 0x18);
  *param_2 = *(undefined *)(iVar1 + 0x1c);
  return;
}


/* ---- FUN_00029d28 @ 00029d28 ---- */

void FUN_00029d28(int param_1,undefined *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00029d4c;
  if (param_1 == 0) {
    *param_2 = *(undefined *)(DAT_00029d4c + 0x19);
    param_2[1] = *(undefined *)(iVar1 + 0x1a);
    param_2[2] = *(undefined *)(iVar1 + 0x1b);
  }
  else {
    *param_2 = *(undefined *)(DAT_00029d4c + 0x1d);
    param_2[1] = *(undefined *)(iVar1 + 0x1e);
    param_2[2] = *(undefined *)(iVar1 + 0x1f);
  }
  return;
}


/* ---- FUN_00029d50 @ 00029d50 ---- */

void FUN_00029d50(undefined4 param_1)

{
  FUN_00031764(DAT_00029d60 + 0x18,param_1,8);
  return;
}


/* ---- FUN_00029d64 @ 00029d64 ---- */

undefined4 FUN_00029d64(undefined4 param_1)

{
  FUN_00031764(param_1,DAT_00029d78 + 0x18,8);
  return param_1;
}


/* ---- FUN_00029d7c @ 00029d7c ---- */

void FUN_00029d7c(uint param_1)

{
  if (param_1 < 0x20) {
    *(char *)(DAT_00029d94 + 0x20) = (char)param_1;
    FUN_0002436c(0,param_1);
  }
  return;
}


/* ---- FUN_00029d98 @ 00029d98 ---- */

undefined FUN_00029d98(void)

{
  return *(undefined *)(DAT_00029da0 + 0x20);
}


/* ---- settings_set_brightness @ 00029da4 ---- */

void settings_set_brightness(undefined param_1)

{
  *(undefined *)(DAT_00029dac + 0x21) = param_1;
  return;
}


/* ---- settings_get_brightness @ 00029db0 ---- */

undefined settings_get_brightness(void)

{
  return *(undefined *)(DAT_00029db8 + 0x21);
}


/* ---- settings_set_led_current @ 00029dbc ---- */

void settings_set_led_current(uint param_1)

{
  if ((int)(param_1 << 0x1c) < 0) {
    if ((param_1 & 0xf) == 0xf) {
      return;
    }
  }
  else if ((param_1 & 0xc) != 0) {
    return;
  }
  *(char *)(DAT_00029dd8 + 0x22) = (char)(param_1 & 0xf);
  return;
}


/* ---- FUN_00029ddc @ 00029ddc ---- */

undefined FUN_00029ddc(void)

{
  return *(undefined *)(DAT_00029de4 + 0x22);
}


/* ---- FUN_00029de8 @ 00029de8 ---- */

undefined FUN_00029de8(void)

{
  return *(undefined *)(DAT_00029df0 + 8);
}


/* ---- FUN_00029df4 @ 00029df4 ---- */

undefined FUN_00029df4(void)

{
  return *(undefined *)(DAT_00029dfc + 9);
}


/* ---- settings_set_vibration @ 00029e00 ---- */

undefined4 settings_set_vibration(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_00029e30;
  if ((*(byte *)(DAT_00029e30 + 8) != param_1) || (*(byte *)(DAT_00029e30 + 9) != param_2)) {
    *(char *)(DAT_00029e30 + 8) = (char)param_1;
    *(char *)(iVar1 + 9) = (char)param_2;
    motor_set_level_table();
    motor_set_balance((int)(char)param_2);
    if (param_3 != 0) {
      uVar2 = FUN_00028fa4();
      return uVar2;
    }
  }
  return 0;
}


/* ---- FUN_00029e34 @ 00029e34 ---- */

void FUN_00029e34(undefined4 param_1)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = DAT_00029e40;
  psVar1 = (short *)(DAT_00029e40 + 0xc);
  *(undefined4 *)(DAT_00029e40 + 0x10) = param_1;
  *(short *)(iVar2 + 0xc) = *psVar1 + 1;
  return;
}


/* ---- FUN_00029e44 @ 00029e44 ---- */

void FUN_00029e44(void)

{
  *(short *)(DAT_00029e50 + 0xe) = *(short *)(DAT_00029e50 + 0xe) + 1;
  return;
}


/* ---- FUN_00029e54 @ 00029e54 ---- */

undefined2 FUN_00029e54(void)

{
  return *(undefined2 *)(DAT_00029e5c + 0xe);
}


/* ---- FUN_00029e60 @ 00029e60 ---- */

undefined2 FUN_00029e60(void)

{
  return *(undefined2 *)(DAT_00029e68 + 0xc);
}


/* ---- FUN_00029e6c @ 00029e6c ---- */

undefined4 FUN_00029e6c(void)

{
  return *(undefined4 *)(DAT_00029e74 + 0x10);
}


/* ---- FUN_00029e78 @ 00029e78 ---- */

void FUN_00029e78(void)

{
  int iVar1;
  
  iVar1 = DAT_00029e98;
  if (*(ushort *)(DAT_00029e98 + 0x16) != DAT_00029e9c) {
    FUN_0001b1fc(DAT_00029e98,0,0x24);
    *(short *)(iVar1 + 0x16) = (short)DAT_00029ea0;
    *(undefined2 *)(iVar1 + 0x24) = 0;
  }
  return;
}


/* ---- FUN_00029ea4 @ 00029ea4 ---- */

void FUN_00029ea4(void)

{
  int iVar1;
  
  iVar1 = DAT_00029eb8;
  FUN_0001b1fc(DAT_00029eb8,0,0x24);
  *(short *)(iVar1 + 0x16) = (short)DAT_00029ebc;
  return;
}


/* ---- FUN_00029ec0 @ 00029ec0 ---- */

void FUN_00029ec0(void)

{
  *(int *)(DAT_00029ecc + 4) = *(int *)(DAT_00029ecc + 4) + 1;
  return;
}


/* ---- FUN_00029ed0 @ 00029ed0 ---- */

undefined4 FUN_00029ed0(void)

{
  return *(undefined4 *)(DAT_00029ed8 + 4);
}


/* ---- FUN_00029edc @ 00029edc ---- */

void FUN_00029edc(void)

{
  *(int *)(DAT_00029ee8 + 8) = *(int *)(DAT_00029ee8 + 8) + 1;
  return;
}


/* ---- FUN_00029eec @ 00029eec ---- */

undefined4 FUN_00029eec(void)

{
  return *(undefined4 *)(DAT_00029ef4 + 8);
}


/* ---- FUN_00029ef8 @ 00029ef8 ---- */

void FUN_00029ef8(void)

{
  *DAT_00029f04 = *DAT_00029f04 + 1;
  return;
}


/* ---- FUN_00029f08 @ 00029f08 ---- */

undefined2 FUN_00029f08(void)

{
  return *DAT_00029f10;
}


/* ---- FUN_00029f14 @ 00029f14 ---- */

void FUN_00029f14(void)

{
  *(short *)(DAT_00029f20 + 0x14) = *(short *)(DAT_00029f20 + 0x14) + 1;
  return;
}


/* ---- FUN_00029f24 @ 00029f24 ---- */

undefined2 FUN_00029f24(void)

{
  return *(undefined2 *)(DAT_00029f2c + 0x14);
}


/* ---- FUN_00029f30 @ 00029f30 ---- */

void FUN_00029f30(void)

{
  *(short *)(DAT_00029f3c + 0x24) = *(short *)(DAT_00029f3c + 0x24) + 1;
  return;
}


/* ---- FUN_00029f40 @ 00029f40 ---- */

undefined2 FUN_00029f40(void)

{
  return *(undefined2 *)(DAT_00029f48 + 0x24);
}


/* ---- FUN_00029f4c @ 00029f4c ---- */

void FUN_00029f4c(undefined4 param_1,undefined4 param_2)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = DAT_00029f5c;
  psVar1 = (short *)(DAT_00029f5c + 0x20);
  *(undefined4 *)(DAT_00029f5c + 0x18) = param_1;
  *(short *)(iVar2 + 0x20) = *psVar1 + 1;
  *(undefined4 *)(iVar2 + 0x1c) = param_2;
  return;
}


/* ---- FUN_00029f60 @ 00029f60 ---- */

undefined2 FUN_00029f60(void)

{
  return *(undefined2 *)(DAT_00029f68 + 0x20);
}


/* ---- FUN_00029f6c @ 00029f6c ---- */

undefined4 FUN_00029f6c(void)

{
  return *(undefined4 *)(DAT_00029f74 + 0x18);
}


/* ---- FUN_00029f78 @ 00029f78 ---- */

undefined4 FUN_00029f78(void)

{
  return *(undefined4 *)(DAT_00029f80 + 0x1c);
}


/* ---- FUN_00029f84 @ 00029f84 ---- */

void FUN_00029f84(void)

{
  software_interrupt(0x71);
  return;
}


/* ---- FUN_00029f88 @ 00029f88 ---- */

void FUN_00029f88(void)

{
  software_interrupt(0x72);
  return;
}


/* ---- FUN_00029f8c @ 00029f8c ---- */

void FUN_00029f8c(void)

{
  software_interrupt(0x79);
  return;
}


/* ---- FUN_00029f90 @ 00029f90 ---- */

void FUN_00029f90(void)

{
  software_interrupt(0x7d);
  return;
}


/* ---- FUN_00029f94 @ 00029f94 ---- */

void FUN_00029f94(void)

{
  software_interrupt(0x65);
  return;
}


/* ---- FUN_00029f98 @ 00029f98 ---- */

int FUN_00029f98(ushort *param_1,undefined param_2,uint param_3,int param_4,ushort *param_5,
                ushort param_6)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte local_2d;
  undefined auStack_2c [8];
  
  uVar1 = *param_5;
  if (*param_1 != 0) {
    iVar7 = 0;
    bVar4 = false;
    do {
      while( true ) {
        bVar3 = bVar4;
        FUN_00031764(auStack_2c,iVar7 * 4 + *(int *)(param_1 + 2),4);
        iVar5 = FUN_00029f94(auStack_2c,&local_2d,0);
        if (iVar5 != 0) {
          return iVar5;
        }
        if (local_2d != param_3) break;
        if (bVar3) {
          if ((int)(uint)param_6 < (int)(*param_5 + param_3)) {
            return 0xc;
          }
          iVar5 = FUN_00029f94(auStack_2c,&local_2d,(uint)*param_5 + param_4);
        }
        else {
          if ((int)(uint)param_6 < (int)(*param_5 + param_3 + 2)) {
            return 0xc;
          }
          uVar6 = *param_5 + 1;
          *param_5 = (ushort)uVar6;
          *(undefined *)(param_4 + (uVar6 & 0xffff)) = param_2;
          uVar2 = *param_5;
          *param_5 = uVar2 + 1;
          iVar5 = FUN_00029f94(auStack_2c,&local_2d,(uint)(ushort)(uVar2 + 1) + param_4);
        }
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar7 = iVar7 + 1;
        *param_5 = (ushort)local_2d + *param_5;
        bVar3 = true;
        bVar4 = true;
        if ((int)(uint)*param_1 <= iVar7) goto LAB_0002a036;
      }
      iVar7 = iVar7 + 1;
      bVar4 = bVar3;
    } while (iVar7 < (int)(uint)*param_1);
LAB_0002a036:
    if (bVar3) {
      uVar6 = (*param_5 - 1) - (uint)uVar1 & 0xffff;
      if (0xff < uVar6) {
        return 0xc;
      }
      *(char *)(param_4 + (uint)uVar1) = (char)uVar6;
      return 0;
    }
  }
  return 0;
}


/* ---- FUN_0002a0a4 @ 0002a0a4 ---- */

int FUN_0002a0a4(short *param_1,int param_2,ushort *param_3)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  undefined *puVar12;
  undefined2 *puVar13;
  undefined2 local_30;
  
  uVar9 = (uint)*param_3;
  *param_3 = 0;
  uVar10 = 0;
  if (*(char *)((int)param_1 + 0x2d) != '\0') {
    if (uVar9 < 9) {
      return 0xc;
    }
    iVar5 = FUN_00029f84(&local_30);
    if (iVar5 != 0) {
      return iVar5;
    }
    *(undefined *)(param_2 + (uint)*param_3) = 8;
    uVar4 = *param_3;
    *param_3 = uVar4 + 1;
    *(undefined *)(param_2 + (uint)(ushort)(uVar4 + 1)) = 0x1b;
    uVar4 = *param_3;
    *param_3 = uVar4 + 1;
    FUN_00031764(param_2 + (uint)(ushort)(uVar4 + 1),(int)&local_30 + 1,6);
    uVar4 = *param_3;
    *param_3 = uVar4 + 6;
    cVar8 = (char)local_30;
    if ((char)local_30 != '\0') {
      cVar8 = '\x01';
    }
    *(char *)(param_2 + (uint)(ushort)(uVar4 + 6)) = cVar8;
    uVar10 = (uint)(ushort)(*param_3 + 1);
    *param_3 = *param_3 + 1;
  }
  if (*(char *)(param_1 + 1) != '\0') {
    if (uVar9 < uVar10 + 4) {
      return 0xc;
    }
    iVar5 = FUN_00029f8c(&local_30);
    if (iVar5 != 0) {
      return iVar5;
    }
    *(undefined *)(param_2 + (uint)*param_3) = 3;
    uVar4 = *param_3;
    *param_3 = uVar4 + 1;
    *(undefined *)(param_2 + (uint)(ushort)(uVar4 + 1)) = 0x19;
    uVar4 = *param_3;
    *param_3 = uVar4 + 1;
    puVar12 = (undefined *)(param_2 + (uint)(ushort)(uVar4 + 1));
    *puVar12 = (char)local_30;
    puVar12[1] = (char)(local_30 >> 8);
    uVar10 = (uint)(ushort)(*param_3 + 2);
    *param_3 = *param_3 + 2;
  }
  cVar8 = *(char *)((int)param_1 + 3);
  if (cVar8 != '\0') {
    if (uVar9 < uVar10 + 3) {
      return 0xc;
    }
    *(undefined *)(param_2 + uVar10) = 2;
    uVar4 = *param_3;
    *param_3 = uVar4 + 1;
    *(undefined *)(param_2 + (uint)(ushort)(uVar4 + 1)) = 1;
    uVar4 = *param_3;
    *param_3 = uVar4 + 1;
    *(char *)(param_2 + (uint)(ushort)(uVar4 + 1)) = cVar8;
    uVar10 = (uint)(ushort)(*param_3 + 1);
    *param_3 = *param_3 + 1;
  }
  if (*(undefined **)(param_1 + 2) != (undefined *)0x0) {
    if (uVar9 < uVar10 + 3) {
      return 0xc;
    }
    uVar7 = **(undefined **)(param_1 + 2);
    *(undefined *)(param_2 + uVar10) = 2;
    uVar4 = *param_3;
    *param_3 = uVar4 + 1;
    *(undefined *)(param_2 + (uint)(ushort)(uVar4 + 1)) = 10;
    uVar4 = *param_3;
    *param_3 = uVar4 + 1;
    *(undefined *)(param_2 + (uint)(ushort)(uVar4 + 1)) = uVar7;
    *param_3 = *param_3 + 1;
  }
  if (param_1[4] == 0) {
    if (param_1[8] == 0) goto LAB_0002a146;
LAB_0002a386:
    iVar5 = FUN_00029f98(param_1 + 8,3,2,param_2);
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = FUN_00029f98(param_1 + 8,7,0x10,param_2);
    if (iVar5 != 0) {
      return iVar5;
    }
    sVar1 = param_1[0xc];
  }
  else {
    iVar5 = FUN_00029f98(param_1 + 4,2,2,param_2);
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = FUN_00029f98(param_1 + 4,6,0x10,param_2);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (param_1[8] != 0) goto LAB_0002a386;
LAB_0002a146:
    sVar1 = param_1[0xc];
  }
  if (sVar1 != 0) {
    iVar5 = FUN_00029f98(param_1 + 0xc,0x14,2,param_2);
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = FUN_00029f98(param_1 + 0xc,0x15,0x10,param_2);
    if (iVar5 != 0) {
      return iVar5;
    }
  }
  puVar11 = *(ushort **)(param_1 + 0x10);
  if (puVar11 != (ushort *)0x0) {
    if (uVar9 < *param_3 + 6) {
      return 0xc;
    }
    uVar10 = (uint)*puVar11;
    if (uVar10 < 6) {
      return 7;
    }
    if ((uVar10 + DAT_0002a40c & 0xffff) <= DAT_0002a410) {
      return 7;
    }
    uVar6 = (uint)puVar11[1];
    if (uVar6 < 6) {
      return 7;
    }
    if ((DAT_0002a40c + uVar6 & 0xffff) <= DAT_0002a410) {
      return 7;
    }
    if ((uVar10 != DAT_0002a414) && (uVar6 < uVar10)) {
      return 7;
    }
    *(undefined *)(param_2 + (uint)*param_3) = 5;
    uVar4 = *param_3;
    *param_3 = uVar4 + 1;
    *(undefined *)(param_2 + (uint)(ushort)(uVar4 + 1)) = 0x12;
    uVar4 = *param_3;
    *param_3 = uVar4 + 1;
    uVar2 = *puVar11;
    puVar12 = (undefined *)(param_2 + (uint)(ushort)(uVar4 + 1));
    *puVar12 = (char)uVar2;
    puVar12[1] = (char)(uVar2 >> 8);
    uVar4 = *param_3;
    *param_3 = uVar4 + 2;
    uVar2 = puVar11[1];
    puVar12 = (undefined *)(param_2 + (uint)(ushort)(uVar4 + 2));
    *puVar12 = (char)uVar2;
    puVar12[1] = (char)(uVar2 >> 8);
    *param_3 = *param_3 + 2;
  }
  puVar13 = *(undefined2 **)(param_1 + 0x12);
  if (puVar13 != (undefined2 *)0x0) {
    uVar10 = (ushort)puVar13[2] + 2;
    if (uVar9 < *param_3 + 2 + uVar10) {
      return 0xc;
    }
    if (0xfe < uVar10) {
      return 0xc;
    }
    *(char *)(param_2 + (uint)*param_3) = (char)puVar13[2] + '\x03';
    uVar4 = *param_3;
    *param_3 = uVar4 + 1;
    *(undefined *)(param_2 + (uint)(ushort)(uVar4 + 1)) = 0xff;
    uVar4 = *param_3;
    *param_3 = uVar4 + 1;
    uVar3 = *puVar13;
    puVar12 = (undefined *)(param_2 + (uint)(ushort)(uVar4 + 1));
    *puVar12 = (char)uVar3;
    puVar12[1] = (char)((ushort)uVar3 >> 8);
    uVar4 = *param_3;
    *param_3 = uVar4 + 2;
    if (puVar13[2] != 0) {
      if (*(int *)(puVar13 + 4) == 0) {
        return 7;
      }
      FUN_00031764(param_2 + (uint)(ushort)(uVar4 + 2));
      *param_3 = *param_3 + puVar13[2];
    }
  }
  if (*(char *)(param_1 + 0x16) != '\0') {
    iVar5 = *(int *)(param_1 + 0x14);
    if (iVar5 == 0) {
      return 7;
    }
    uVar10 = 0;
    while( true ) {
      puVar13 = (undefined2 *)(iVar5 + uVar10 * 0xc);
      if (0xfe < (ushort)puVar13[2] + 2) {
        return 0xc;
      }
      *(char *)(param_2 + (uint)*param_3) = (char)puVar13[2] + '\x03';
      uVar4 = *param_3;
      *param_3 = uVar4 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar4 + 1)) = 0x16;
      uVar4 = *param_3;
      *param_3 = uVar4 + 1;
      uVar3 = *puVar13;
      puVar12 = (undefined *)(param_2 + (uint)(ushort)(uVar4 + 1));
      *puVar12 = (char)uVar3;
      puVar12[1] = (char)((ushort)uVar3 >> 8);
      uVar4 = *param_3;
      *param_3 = uVar4 + 2;
      if (puVar13[2] != 0) {
        if (*(int *)(puVar13 + 4) == 0) {
          return 7;
        }
        FUN_00031764(param_2 + (uint)(ushort)(uVar4 + 2));
        *param_3 = *param_3 + puVar13[2];
      }
      uVar10 = uVar10 + 1 & 0xff;
      if (*(byte *)(param_1 + 0x16) <= uVar10) break;
      iVar5 = *(int *)(param_1 + 0x14);
    }
  }
  if (*(char *)param_1 == '\0') {
    return 0;
  }
  if (*param_1 == 1) {
    return 7;
  }
  uVar10 = (uint)*param_3;
  if (uVar9 < uVar10 + 2) {
    return 0xc;
  }
  if ((*(char *)param_1 == '\x01') && (uVar9 < *(byte *)((int)param_1 + 1) + 2 + uVar10)) {
    return 0xc;
  }
  uVar9 = (uVar9 - 2) - uVar10;
  uVar6 = uVar9 & 0xffff;
  local_30 = (ushort)uVar9;
  iVar5 = FUN_00029f90(param_2 + uVar10 + 2,&local_30);
  if (iVar5 != 0) {
    return iVar5;
  }
  if (*(char *)param_1 == '\x02') {
    uVar9 = (uint)local_30;
    if (uVar9 <= uVar6) {
      uVar7 = 9;
      goto LAB_0002a28a;
    }
  }
  else if ((*(char *)param_1 == '\x01') &&
          (uVar9 = (uint)*(byte *)((int)param_1 + 1), uVar9 <= uVar6)) {
    uVar7 = 8;
    goto LAB_0002a28a;
  }
  uVar7 = 8;
  uVar9 = uVar6;
LAB_0002a28a:
  if (0xfe < uVar9) {
    return 0xc;
  }
  *(char *)(param_2 + (uint)*param_3) = (char)uVar9 + '\x01';
  uVar4 = *param_3;
  *param_3 = uVar4 + 1;
  *(undefined *)(param_2 + (uint)(ushort)(uVar4 + 1)) = uVar7;
  *param_3 = (short)uVar9 + *param_3 + 1;
  return 0;
}


/* ---- FUN_0002a4a8 @ 0002a4a8 ---- */

int FUN_0002a4a8(int param_1,undefined *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 local_54;
  undefined2 local_52;
  undefined auStack_50 [32];
  undefined auStack_30 [36];
  
  local_54 = 0x1f;
  local_52 = 0x1f;
  if (param_1 == 0) {
    local_54 = 0;
    puVar5 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
    uVar1 = 0;
    if (param_2 != (undefined *)0x0) goto LAB_0002a4d4;
LAB_0002a506:
    local_52 = SUB42(param_2,0);
    uVar3 = 0;
LAB_0002a4f0:
    iVar2 = FUN_00029f88(puVar5,(undefined)local_54,param_2,uVar3);
  }
  else {
    if ((int)((uint)*(byte *)(param_1 + 3) << 0x1d) < 0) {
      iVar2 = FUN_0002a0a4(param_1,auStack_50,&local_54);
      if (iVar2 != 0) {
        return iVar2;
      }
      puVar5 = auStack_50;
      puVar4 = puVar5;
      uVar1 = local_54;
      if (param_2 == (undefined *)0x0) goto LAB_0002a506;
LAB_0002a4d4:
      local_54 = uVar1;
      if (param_2[3] == '\0') {
        iVar2 = FUN_0002a0a4(param_2,auStack_30,&local_52);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_2 = auStack_30;
        puVar5 = puVar4;
        uVar3 = (undefined)local_52;
        goto LAB_0002a4f0;
      }
    }
    iVar2 = 7;
  }
  return iVar2;
}


/* ---- FUN_0002a514 @ 0002a514 ---- */

void FUN_0002a514(void)

{
  software_interrupt(0x73);
  return;
}


/* ---- FUN_0002a518 @ 0002a518 ---- */

int FUN_0002a518(uint param_1)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined local_30 [8];
  undefined local_28;
  
  iVar3 = DAT_0002a71c;
  FUN_0001b1fc(DAT_0002a71c,0,7);
  pbVar2 = DAT_0002a728;
  puVar1 = DAT_0002a720;
  if ((((*DAT_0002a720 & DAT_0002a724) != 0) && (*DAT_0002a728 == 1)) ||
     ((*(char *)((int)DAT_0002a720 + 2) != '\0' && (*DAT_0002a728 == 2)))) {
    pcVar4 = *DAT_0002a734;
    if (pcVar4 == (code *)0x0) {
      *DAT_0002a738 = 0;
    }
    else {
      *DAT_0002a738 = 1;
      (*pcVar4)(8);
    }
  }
  if ((((*(char *)(iVar3 + 1) == '\0') && (*(char *)(iVar3 + 2) == '\0')) &&
      (*(char *)(iVar3 + 3) == '\0')) &&
     ((*(char *)(iVar3 + 4) == '\0' && (*(char *)(iVar3 + 5) == '\0')))) {
    bVar6 = *(char *)(iVar3 + 6) != '\0';
  }
  else {
    bVar6 = true;
  }
  if (param_1 == 3) {
LAB_0002a582:
    if (*(char *)((int)puVar1 + 3) == '\0') {
LAB_0002a58a:
      if (*(char *)(puVar1 + 1) == '\0') {
        bVar5 = 0;
        goto LAB_0002a594;
      }
      bVar5 = 4;
    }
    else {
      bVar5 = 3;
    }
    *pbVar2 = bVar5;
    pcVar4 = *DAT_0002a734;
    if (((pcVar4 != (code *)0x0) && (*(char *)puVar1 != '\0')) && (*DAT_0002a740 == '\0')) {
      *DAT_0002a72c = 1;
      (*pcVar4)(7);
      goto LAB_0002a59c;
    }
  }
  else if (param_1 < 4) {
    if (param_1 == 1) {
      if (*(char *)((int)puVar1 + 1) == '\0') goto LAB_0002a576;
      if (!bVar6) goto LAB_0002a582;
      bVar5 = 1;
    }
    else {
      if (param_1 != 2) goto LAB_0002a5c0;
LAB_0002a576:
      if ((*(char *)((int)puVar1 + 2) == '\0') || (!bVar6)) goto LAB_0002a582;
      bVar5 = 2;
    }
LAB_0002a594:
    *pbVar2 = bVar5;
  }
  else {
    if (param_1 == 4) goto LAB_0002a58a;
LAB_0002a5c0:
    *pbVar2 = 0;
  }
  *DAT_0002a72c = 0;
LAB_0002a59c:
  FUN_0001b1fc(local_30,0,0x18);
  local_30[0] = 0;
  local_28 = 0;
  if (4 < *pbVar2) {
    iVar3 = FUN_0002a514(local_30);
    if (iVar3 == 0) {
      if (*DAT_0002a734 == (code *)0x0) {
        iVar3 = 0;
      }
      else {
        (**DAT_0002a734)(*DAT_0002a73c);
        iVar3 = 0;
      }
    }
    return iVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0002a5ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(DAT_0002a730 + (uint)*pbVar2 * 4))();
  return iVar3;
}


/* ---- FUN_0002a74c @ 0002a74c ---- */

undefined4
FUN_0002a74c(undefined *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  int iVar5;
  int **ppiVar6;
  int iVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  
  if ((param_1 == (undefined *)0x0) || (param_3 == (undefined4 *)0x0)) {
    uVar8 = 0xe;
  }
  else {
    *DAT_0002a8bc = 1;
    *DAT_0002a8c0 = 0;
    puVar2 = DAT_0002a8c4;
    uVar8 = param_3[1];
    uVar12 = param_3[2];
    *DAT_0002a8c4 = *param_3;
    puVar2[1] = uVar8;
    puVar2[2] = uVar12;
    uVar8 = param_3[4];
    uVar12 = param_3[5];
    puVar2[3] = param_3[3];
    puVar2[4] = uVar8;
    puVar2[5] = uVar12;
    uVar8 = param_3[7];
    puVar2[6] = param_3[6];
    puVar2[7] = uVar8;
    *DAT_0002a8c8 = param_4;
    uVar8 = DAT_0002a8d0;
    *DAT_0002a8cc = param_5;
    puVar3 = DAT_0002a8d4;
    *DAT_0002a8d4 = 0xffff;
    FUN_0001b1fc(uVar8,0,7,puVar3,param_4);
    puVar4 = DAT_0002a8d8;
    FUN_0001b1fc(DAT_0002a8d8,0,0x3c);
    *puVar4 = *param_1;
    puVar4[2] = param_1[2];
    puVar4[3] = param_1[3];
    puVar4[1] = param_1[1];
    uVar8 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar4 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(puVar4 + 0x14) = uVar8;
    uVar8 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(puVar4 + 0xc) = uVar8;
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar4 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(puVar4 + 0x1c) = uVar8;
    iVar5 = DAT_0002a8e0;
    puVar3 = DAT_0002a8dc;
    if (*(int *)(param_1 + 0x24) != 0) {
      *(undefined2 **)(puVar4 + 0x24) = DAT_0002a8dc;
      puVar9 = *(undefined2 **)(param_1 + 0x24);
      *(int *)(puVar3 + 4) = iVar5;
      *puVar3 = *puVar9;
      uVar1 = puVar9[2];
      puVar3[2] = uVar1;
      if (uVar1 != 0) {
        uVar11 = 0;
        do {
          *(undefined *)(iVar5 + uVar11) = *(undefined *)(*(int *)(puVar9 + 4) + uVar11);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar1);
      }
    }
    iVar5 = DAT_0002a8e8;
    puVar3 = DAT_0002a8e4;
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined2 **)(puVar4 + 0x28) = DAT_0002a8e4;
      puVar9 = *(undefined2 **)(param_1 + 0x28);
      *(int *)(puVar3 + 4) = iVar5;
      uVar1 = puVar9[2];
      puVar3[2] = uVar1;
      *puVar3 = *puVar9;
      uVar11 = 0;
      if (uVar1 != 0) {
        do {
          *(undefined *)(iVar5 + uVar11) = *(undefined *)(*(int *)(puVar9 + 4) + uVar11);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar1);
      }
      puVar4[0x2c] = param_1[0x2c];
    }
    puVar3 = DAT_0002a8ec;
    if (*(int *)(param_1 + 0x20) != 0) {
      *(undefined2 **)(puVar4 + 0x20) = DAT_0002a8ec;
      puVar9 = *(undefined2 **)(param_1 + 0x20);
      puVar3[1] = puVar9[1];
      *puVar3 = *puVar9;
    }
    if (*(int *)(param_1 + 4) != 0) {
      *(int *)(puVar4 + 4) = *(int *)(param_1 + 4);
    }
    iVar5 = DAT_0002a8f4;
    ppiVar6 = DAT_0002a8f0;
    iVar7 = DAT_0002a8f4 + 7;
    **DAT_0002a8f0 = DAT_0002a8f4;
    piVar10 = *ppiVar6;
    piVar10[1] = iVar7;
    piVar10[2] = iVar5 + 0xe;
    piVar10[3] = iVar5 + 0x15;
    piVar10[4] = iVar5 + 0x1c;
    piVar10[5] = iVar5 + 0x23;
    piVar10[7] = iVar5 + 0x31;
    iVar7 = DAT_0002a8f8;
    piVar10[6] = iVar5 + 0x2a;
    *ppiVar6[2] = iVar7;
    ppiVar6[2][1] = iVar7 + 0x10;
    ppiVar6[2][2] = iVar7 + 0x20;
    piVar10 = ppiVar6[2];
    piVar10[3] = iVar7 + 0x30;
    piVar10[4] = iVar7 + 0x40;
    piVar10[5] = iVar7 + 0x50;
    piVar10[6] = iVar7 + 0x60;
    piVar10[7] = iVar7 + 0x70;
    uVar8 = FUN_0002a4a8(puVar4,param_2);
  }
  return uVar8;
}


/* ---- FUN_0002a8fc @ 0002a8fc ---- */

undefined4 FUN_0002a8fc(undefined4 param_1)

{
  undefined4 uVar1;
  int local_c;
  
  if (*DAT_0002a934 == '\0') {
    uVar1 = 8;
  }
  else {
    *DAT_0002a938 = (char)param_1;
    FUN_0001d5fc(&local_c);
    if (local_c == 0) {
      uVar1 = FUN_0002a518(param_1);
    }
    else {
      uVar1 = 0;
      *DAT_0002a93c = 1;
    }
  }
  return uVar1;
}


/* ---- FUN_0002a940 @ 0002a940 ---- */

void FUN_0002a940(short *param_1)

{
  short sVar1;
  byte *pbVar2;
  int iVar3;
  uint extraout_r1;
  int local_14 [2];
  
  pbVar2 = DAT_0002a9c4;
  sVar1 = *param_1;
  if (sVar1 == 0x11) {
    *DAT_0002a9b8 = 0;
  }
  else if (sVar1 == 0x1b) {
    if (*(char *)(param_1 + 4) == '\0') {
      if (*DAT_0002a9c0 == '\0') {
        iVar3 = 8;
      }
      else {
        FUN_00031510(*DAT_0002a9c4 + 1,5);
        *pbVar2 = (byte)extraout_r1;
        FUN_0001d5fc(local_14);
        if (local_14[0] != 0) {
          *DAT_0002a9c8 = 1;
          return;
        }
        iVar3 = FUN_0002a518(extraout_r1 & 0xff);
        if (iVar3 == 0) {
          return;
        }
      }
      if (*DAT_0002a9cc != (code *)0x0) {
        (**DAT_0002a9cc)(iVar3);
      }
    }
  }
  else if ((sVar1 == 0x10) && (*(char *)(param_1 + 0xb) == '\x01')) {
    *DAT_0002a9bc = param_1[2];
  }
  return;
}


/* ---- FUN_0002a9d0 @ 0002a9d0 ---- */

void FUN_0002a9d0(int param_1)

{
  undefined uVar1;
  char *pcVar2;
  int iVar3;
  int local_14 [2];
  
  pcVar2 = DAT_0002aa24;
  if (1 < param_1 - 2U) {
    return;
  }
  if (*DAT_0002aa24 == '\0') {
    return;
  }
  *DAT_0002aa24 = '\0';
  if (*DAT_0002aa28 == '\0') {
    iVar3 = 8;
  }
  else {
    uVar1 = *DAT_0002aa2c;
    FUN_0001d5fc(local_14);
    if (local_14[0] != 0) {
      *pcVar2 = '\x01';
      return;
    }
    iVar3 = FUN_0002a518(uVar1);
    if (iVar3 == 0) {
      return;
    }
  }
  if (*DAT_0002aa30 != (code *)0x0) {
    (**DAT_0002aa30)(iVar3);
  }
  return;
}


/* ---- FUN_0002aa34 @ 0002aa34 ---- */

void FUN_0002aa34(void)

{
  software_interrupt(0x75);
  return;
}


/* ---- FUN_0002aa38 @ 0002aa38 ---- */

void FUN_0002aa38(void)

{
  software_interrupt(0x76);
  return;
}


/* ---- FUN_0002aa3c @ 0002aa3c ---- */

void FUN_0002aa3c(void)

{
  software_interrupt(0x7a);
  return;
}


/* ---- FUN_0002aa40 @ 0002aa40 ---- */

void FUN_0002aa40(void)

{
  software_interrupt(0x7b);
  return;
}


/* ---- FUN_0002aa44 @ 0002aa44 ---- */

void FUN_0002aa44(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = DAT_0002aab4;
  pbVar2 = DAT_0002aab0;
  uVar4 = (uint)*DAT_0002aaa8;
  if (uVar4 != DAT_0002aaac) {
    bVar1 = *DAT_0002aab0;
    *DAT_0002aab0 = bVar1 + 1;
    if (*(byte *)(iVar3 + 0xc) < (byte)(bVar1 + 1)) {
      *pbVar2 = 0;
      if (((*(char *)(iVar3 + 0x10) != '\0') && (iVar5 = FUN_0002aa38(uVar4,0x3b), iVar5 != 0)) &&
         (*(code **)(iVar3 + 0x18) != (code *)0x0)) {
        (**(code **)(iVar3 + 0x18))();
      }
      if (*(code **)(iVar3 + 0x14) != (code *)0x0) {
        (**(code **)(iVar3 + 0x14))();
      }
    }
    else {
      iVar5 = FUN_0002aa34(uVar4,DAT_0002aab8);
      if ((iVar5 != 0) && (*(code **)(iVar3 + 0x18) != (code *)0x0)) {
        (**(code **)(iVar3 + 0x18))();
      }
    }
  }
  return;
}


/* ---- FUN_0002aabc @ 0002aabc ---- */

void FUN_0002aabc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = DAT_0002ab38;
  iVar1 = DAT_0002ab34;
  if ((*(ushort *)(DAT_0002ab2c + 2) < *DAT_0002ab30) ||
     (DAT_0002ab30[1] < *(ushort *)(DAT_0002ab2c + 2))) {
    if (*DAT_0002ab38 == '\0') {
      if (*DAT_0002ab3c == '\0') {
        uVar3 = *(undefined4 *)(DAT_0002ab34 + 4);
      }
      else {
        uVar3 = *(undefined4 *)(DAT_0002ab34 + 8);
      }
      iVar2 = FUN_0001bb68(DAT_0002ab40,uVar3,0);
      if ((iVar2 != 0) && (*(code **)(iVar1 + 0x18) != (code *)0x0)) {
        (**(code **)(iVar1 + 0x18))();
      }
    }
    else if (*(code **)(DAT_0002ab34 + 0x14) != (code *)0x0) {
      (**(code **)(DAT_0002ab34 + 0x14))();
    }
  }
  else if (*(code **)(DAT_0002ab34 + 0x14) != (code *)0x0) {
    (**(code **)(DAT_0002ab34 + 0x14))();
    pcVar4 = DAT_0002ab38;
  }
  *pcVar4 = '\0';
  return;
}


/* ---- FUN_0002ab44 @ 0002ab44 ---- */

void FUN_0002ab44(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_0002aba0;
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  *DAT_0002aba0 = *param_1;
  piVar1[1] = iVar3;
  piVar1[2] = iVar4;
  iVar3 = param_1[4];
  iVar4 = param_1[5];
  piVar1[3] = param_1[3];
  piVar1[4] = iVar3;
  piVar1[5] = iVar4;
  piVar1[6] = param_1[6];
  iVar3 = *param_1;
  *DAT_0002aba4 = 0;
  uVar2 = DAT_0002aba8;
  if (iVar3 == 0) {
    iVar3 = FUN_0002aa40(DAT_0002aba8);
  }
  else {
    FUN_00031764(DAT_0002aba8,iVar3,8);
    iVar3 = FUN_0002aa3c(uVar2);
  }
  if (iVar3 == 0) {
    *DAT_0002abac = 0xffff;
    *DAT_0002abb0 = 0;
    FUN_0001bb3c(PTR_DAT_0002abb4,0,PTR_FUN_0002aa44_1_0002abb8);
  }
  return;
}


/* ---- FUN_0002abbc @ 0002abbc ---- */

void FUN_0002abbc(ushort *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar2 = DAT_0002ac64;
  iVar3 = DAT_0002ac60;
  uVar1 = *param_1;
  if (uVar1 == 0x12) {
    uVar6 = *(undefined4 *)(param_1 + 4);
    uVar7 = *(undefined4 *)(param_1 + 6);
    *DAT_0002ac64 = uVar6;
    puVar2[1] = uVar7;
    FUN_0002aabc(param_1 + 8,uVar6,uVar7,puVar2 + 2);
    return;
  }
  if (uVar1 < 0x13) {
    if (uVar1 != 0x10) {
      if (uVar1 != 0x11) {
        return;
      }
      *DAT_0002ac54 = 0xffff;
      uVar6 = DAT_0002ac5c;
      *DAT_0002ac58 = 0;
      iVar3 = FUN_0001bc28(uVar6);
      if (iVar3 == 0) {
        return;
      }
      if (*(code **)(DAT_0002ac60 + 0x18) == (code *)0x0) {
        return;
      }
      (**(code **)(DAT_0002ac60 + 0x18))();
      return;
    }
    *DAT_0002ac54 = param_1[2];
    puVar2 = DAT_0002ac64;
    uVar6 = *(undefined4 *)(param_1 + 0xe);
    puVar4 = param_1 + 0x10;
    *DAT_0002ac64 = *(undefined4 *)(param_1 + 0xc);
    puVar2[1] = uVar6;
    *DAT_0002ac58 = 0;
    if (*(short *)(DAT_0002ac60 + 0xe) != 0) {
      return;
    }
  }
  else {
    if (uVar1 != 0x50) {
      return;
    }
    if (param_1[3] != *(ushort *)(DAT_0002ac60 + 0xe)) {
      return;
    }
    if (param_1[8] != 2) {
      return;
    }
    puVar4 = (ushort *)FUN_0002aec8(param_1 + 9);
    if (puVar4 == (ushort *)0x0) {
      iVar5 = FUN_0001bc28(DAT_0002ac5c);
      if (iVar5 == 0) {
        return;
      }
      if (*(code **)(iVar3 + 0x18) == (code *)0x0) {
        return;
      }
      (**(code **)(iVar3 + 0x18))();
      return;
    }
  }
  FUN_0002aabc(puVar4);
  return;
}


/* ---- FUN_0002ac68 @ 0002ac68 ---- */

void FUN_0002ac68(short *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_3c;
  undefined2 local_38 [10];
  
  iVar2 = DAT_0002ad80;
  sVar1 = *param_1;
  if (sVar1 == 0x11) {
    FUN_0001d9c4(DAT_0002ad80 + 4,DAT_0002ad80 + 0x15,param_1[2],0);
  }
  else if (sVar1 == 0x1a) {
    iVar3 = DAT_0002ad80 + 4;
    FUN_0001d9c4(iVar3,DAT_0002ad80 + 0x17,param_1[2],1 < *(byte *)(param_1 + 4) >> 4);
    FUN_0001d9c4(iVar3,iVar2 + 0x18,param_1[2],2 < *(byte *)(param_1 + 4) >> 4);
  }
  else if (sVar1 == 0x10) {
    iVar3 = DAT_0002ad80 + 4;
    FUN_0001dcc0(&local_3c,iVar3,*(byte *)(DAT_0002ad80 + 0x14) & ~*(byte *)(DAT_0002ad80 + 0x15));
    if (local_3c != 0) {
      iVar5 = 0;
      piVar4 = &local_3c;
      do {
        iVar5 = iVar5 + 1;
        FUN_0001da38(iVar3,iVar2 + 0x14,0x1d,*(undefined2 *)(piVar4 + 1),0);
        piVar4 = (int *)((int)piVar4 + 2);
      } while (iVar5 != local_3c);
    }
    sVar1 = param_1[2];
    iVar3 = FUN_0001d96c(~*(byte *)(iVar2 + 0x14));
    if (iVar3 == DAT_0002ad84) {
      FUN_0001b210(4,0xe1,DAT_0002ad88);
    }
    else {
      iVar5 = iVar2 + 4;
      *(short *)(iVar3 * 2 + iVar2 + 4) = sVar1;
      FUN_0001d9c4(iVar5,iVar2 + 0x15,sVar1,1);
      FUN_0001d9c4(iVar5,iVar2 + 0x14,sVar1,1);
      FUN_0001d9c4(iVar5,iVar2 + 0x16,param_1[2],*(char *)(param_1 + 0xb) == '\x02');
    }
  }
  return;
}


/* ---- FUN_0002ad8c @ 0002ad8c ---- */

int FUN_0002ad8c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0002adbc;
  iVar4 = DAT_0002adbc + 4;
  iVar1 = FUN_0001dc5c(iVar4,*(undefined *)(DAT_0002adbc + 0x14),param_1);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar3 = FUN_0001dc5c(iVar4,*(undefined *)(iVar3 + 0x16),param_1);
    iVar2 = 2 - (uint)(iVar3 == 0);
  }
  return iVar2;
}


/* ---- FUN_0002adc0 @ 0002adc0 ---- */

int FUN_0002adc0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0002adf0;
  iVar4 = DAT_0002adf0 + 4;
  iVar1 = FUN_0001dc5c(iVar4,*(undefined *)(DAT_0002adf0 + 0x14),param_1);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar3 = FUN_0001dc5c(iVar4,*(undefined *)(iVar3 + 0x15),param_1);
    iVar2 = 2 - (uint)(iVar3 == 0);
  }
  return iVar2;
}


/* ---- FUN_0002adf4 @ 0002adf4 ---- */

void FUN_0002adf4(undefined4 param_1)

{
  FUN_0001dc5c(DAT_0002ae04 + 4,*(undefined *)(DAT_0002ae04 + 0x17),param_1);
  return;
}


/* ---- FUN_0002ae08 @ 0002ae08 ---- */

void FUN_0002ae08(undefined4 param_1)

{
  FUN_0001dc5c(DAT_0002ae18 + 4,*(undefined *)(DAT_0002ae18 + 0x18),param_1);
  return;
}


/* ---- FUN_0002ae1c @ 0002ae1c ---- */

undefined4 FUN_0002ae1c(undefined4 param_1)

{
  FUN_0001dcc0(param_1,DAT_0002ae30 + 4,*(undefined *)(DAT_0002ae30 + 0x14));
  return param_1;
}


/* ---- FUN_0002ae34 @ 0002ae34 ---- */

uint FUN_0002ae34(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = 1 << (uVar2 & 0xff);
    if ((uVar1 & *DAT_0002ae5c) == 0) {
      *DAT_0002ae5c = uVar1 | *DAT_0002ae5c;
      return uVar2 & 0xff;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x18);
  return 0x18;
}


/* ---- FUN_0002ae60 @ 0002ae60 ---- */

undefined4 FUN_0002ae60(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*DAT_0002ae80 & 1 << (param_2 & 0xff)) != 0) {
    uVar1 = FUN_0001dc5c(DAT_0002ae80 + 1,*(undefined *)((int)DAT_0002ae80 + param_2 + 0x19),param_1
                        );
  }
  return uVar1;
}


/* ---- FUN_0002ae84 @ 0002ae84 ---- */

void FUN_0002ae84(undefined4 param_1,uint param_2,undefined4 param_3)

{
  if ((*DAT_0002aea8 & 1 << (param_2 & 0xff)) != 0) {
    FUN_0001d9c4(DAT_0002aea8 + 1,(int)DAT_0002aea8 + param_2 + 0x19,param_1,param_3);
  }
  return;
}


/* ---- FUN_0002aeac @ 0002aeac ---- */

undefined FUN_0002aeac(uint param_1)

{
  undefined uVar1;
  
  uVar1 = 0;
  if ((*DAT_0002aec4 & 1 << (param_1 & 0xff)) != 0) {
    uVar1 = *(undefined *)((int)DAT_0002aec4 + param_1 + 0x19);
  }
  return uVar1;
}


/* ---- FUN_0002aec8 @ 0002aec8 ---- */

byte FUN_0002aec8(byte *param_1)

{
  return *param_1 & 1;
}


/* ---- FUN_0002aed0 @ 0002aed0 ---- */

undefined4 FUN_0002aed0(undefined *param_1,undefined *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return 2;
}


/* ---- FUN_0002aedc @ 0002aedc ---- */

void FUN_0002aedc(undefined2 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_000317ec(param_2);
  *(undefined4 *)(param_1 + 2) = param_2;
  *param_1 = uVar1;
  return;
}


/* ---- FUN_0002aef0 @ 0002aef0 ---- */

void FUN_0002aef0(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined local_1c [2];
  undefined2 local_1a;
  undefined2 local_18;
  uint local_14;
  
  uVar1 = FUN_0002b468();
  if (uVar1 == 0x11) {
    uVar2 = 1;
    goto LAB_0002af0e;
  }
  if (uVar1 < 0x12) {
    if (uVar1 == 0) {
      local_1c[0] = 1;
    }
    else {
      if (uVar1 != 0xc) goto LAB_0002af4e;
      local_1c[0] = 7;
    }
  }
  else {
    if (uVar1 != 0x86) {
      uVar2 = 0;
      if (uVar1 == DAT_0002af6c) goto LAB_0002af0e;
LAB_0002af4e:
      local_1c[0] = 9;
      local_1a = FUN_0002bb04(param_1);
      local_18 = (short)param_1;
      local_14 = uVar1;
      FUN_0002df14(local_1c);
      uVar2 = 0;
      goto LAB_0002af0e;
    }
    local_1c[0] = 8;
  }
  local_18 = (short)param_1;
  local_1a = FUN_0002bb04(param_1);
  FUN_0002df14(local_1c);
  uVar2 = 0;
LAB_0002af0e:
  FUN_0002ae84(param_1,*DAT_0002af70,uVar2);
  return;
}


/* ---- FUN_0002af74 @ 0002af74 ---- */

void FUN_0002af74(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined local_1c [2];
  undefined2 local_1a;
  undefined2 local_18;
  uint local_14;
  
  uVar1 = FUN_0002b508();
  if (uVar1 == 0x11) {
    uVar2 = 1;
    goto LAB_0002afb0;
  }
  if (uVar1 < 0x12) {
    if (uVar1 == 0) {
      local_1c[0] = 2;
    }
    else {
      if (uVar1 != 0xb) goto LAB_0002afbe;
      local_1c[0] = 3;
    }
    local_1a = FUN_0002bb04(param_1);
    local_18 = (short)param_1;
    FUN_0002df14(local_1c);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (uVar1 == DAT_0002afe4) goto LAB_0002afb0;
LAB_0002afbe:
    local_1c[0] = 9;
    local_1a = FUN_0002bb04(param_1);
    local_18 = (short)param_1;
    local_14 = uVar1;
    FUN_0002df14(local_1c);
    uVar2 = 0;
  }
LAB_0002afb0:
  FUN_0002ae84(param_1,*DAT_0002afe8,uVar2);
  return;
}


/* ---- FUN_0002afec @ 0002afec ---- */

void FUN_0002afec(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined local_48 [2];
  undefined2 local_46;
  ushort local_44;
  uint local_40;
  int local_3c;
  undefined2 local_38 [10];
  
  FUN_0002ae1c(&local_3c);
  puVar3 = DAT_0002b0e8;
  puVar2 = DAT_0002b0e4;
  if (local_3c != 0) {
    iVar8 = 0;
    piVar7 = &local_3c;
    do {
      while( true ) {
        uVar1 = *(ushort *)(piVar7 + 1);
        uVar9 = (uint)uVar1;
        iVar4 = FUN_0002ae60(uVar9,*puVar2);
        if ((iVar4 == 0) || (iVar5 = FUN_0002ae60(uVar9,*puVar3), iVar5 != 0)) break;
        uVar6 = FUN_0002b60c(uVar9);
        iVar5 = 0;
        if (uVar6 != 0x11) {
          if (uVar6 < 0x12) {
            if ((uVar6 - 6 & 0xfffffffd) == 0) {
              FUN_0002bb04(uVar9);
              FUN_0002b63c();
              iVar4 = 0;
            }
            else if (uVar6 == 0) {
              local_48[0] = 5;
              local_46 = FUN_0002bb04(uVar9);
              local_44 = uVar1;
              FUN_0002df14(local_48);
              iVar5 = iVar4;
            }
            else {
LAB_0002b0c6:
              local_48[0] = 9;
              local_44 = uVar1;
              local_40 = uVar6;
              local_46 = FUN_0002bb04(uVar9);
              FUN_0002df14(local_48);
            }
          }
          else if (uVar6 != DAT_0002b0ec) {
            if (uVar6 != DAT_0002b0f0) goto LAB_0002b0c6;
            if (uVar9 != DAT_0002b0f4) {
              FUN_0002af74(uVar9);
            }
          }
        }
        FUN_0002ae84(uVar9,*puVar2,iVar4);
        iVar8 = iVar8 + 1;
        FUN_0002ae84(uVar9,*puVar3,iVar5);
        piVar7 = (int *)((int)piVar7 + 2);
        if (iVar8 == local_3c) {
          return;
        }
      }
      iVar8 = iVar8 + 1;
      piVar7 = (int *)((int)piVar7 + 2);
    } while (iVar8 != local_3c);
  }
  return;
}


/* ---- FUN_0002b0f8 @ 0002b0f8 ---- */

void FUN_0002b0f8(char *param_1)

{
  undefined *puVar1;
  int iVar2;
  char local_14 [2];
  undefined2 local_12;
  undefined2 local_10;
  
  local_12 = *(undefined2 *)(param_1 + 2);
  local_14[0] = *param_1;
  if (local_14[0] == '\x01') {
    local_10 = *(undefined2 *)(param_1 + 4);
    FUN_0002df14(local_14);
  }
  else if (local_14[0] == '\x02') {
    if (param_1[4] != '\0') {
      iVar2 = FUN_0002bd40();
      puVar1 = DAT_0002b170;
      if (iVar2 != DAT_0002b16c) {
        FUN_0002ae84(iVar2,*DAT_0002b170,1);
        iVar2 = FUN_0002aeac(*puVar1);
        if (iVar2 != 0) {
          FUN_0002afec();
        }
      }
    }
  }
  else if (local_14[0] == '\0') {
    FUN_0002df14(local_14);
    iVar2 = FUN_0002bd40(*(undefined2 *)(param_1 + 2));
    if (iVar2 != DAT_0002b16c) {
      FUN_0002af74();
    }
  }
  return;
}


/* ---- FUN_0002b174 @ 0002b174 ---- */

void FUN_0002b174(char *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 == '\x01') {
    uVar1 = (uint)*(ushort *)(param_1 + 2);
    if (uVar1 != DAT_0002b1a4) {
      FUN_0002af74();
      uVar1 = (uint)*(ushort *)(param_1 + 2);
    }
    iVar2 = FUN_0002b5ec(uVar1);
    if (iVar2 != 0) {
      FUN_0002ae84(*(undefined2 *)(param_1 + 2),*DAT_0002b1a8,1);
    }
  }
  return;
}


/* ---- FUN_0002b1ac @ 0002b1ac ---- */

void FUN_0002b1ac(char *param_1)

{
  if (*param_1 == '\a') {
    FUN_0002aef0(*(undefined2 *)(param_1 + 2));
  }
  return;
}


/* ---- FUN_0002b1c0 @ 0002b1c0 ---- */

byte FUN_0002b1c0(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  
  cVar4 = FUN_0002ae34();
  pcVar1 = DAT_0002b208;
  *DAT_0002b208 = cVar4;
  cVar4 = FUN_0002ae34();
  pcVar2 = DAT_0002b20c;
  *DAT_0002b20c = cVar4;
  cVar4 = FUN_0002ae34();
  pcVar3 = DAT_0002b210;
  *DAT_0002b210 = cVar4;
  iVar6 = FUN_0002ae34();
  *DAT_0002b214 = (char)iVar6;
  if (((*pcVar1 == '\x18') || (*pcVar2 == '\x18')) || (*pcVar3 == '\x18')) {
    bVar5 = 3;
  }
  else {
    bVar5 = -(iVar6 == 0x18) & 3;
  }
  return bVar5;
}


/* ---- FUN_0002b218 @ 0002b218 ---- */

void FUN_0002b218(short *param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined *puVar10;
  undefined local_40 [2];
  undefined2 local_3e;
  short local_3c;
  int local_34;
  undefined2 local_30 [8];
  
  sVar1 = *param_1;
  puVar10 = DAT_0002b340;
  if (sVar1 == 0x52) {
    if ((ushort)param_1[2] != DAT_0002b350) {
      FUN_0002af74();
      puVar10 = DAT_0002b340;
    }
  }
  else if (sVar1 == 0x54) {
    local_40[0] = 6;
    local_3e = FUN_0002bb04(param_1[2]);
    local_3c = param_1[2];
    FUN_0002b63c();
    puVar10 = DAT_0002b340;
    FUN_0002ae84(param_1[2],*DAT_0002b340,0);
    FUN_0002df14(local_40);
  }
  else if ((((sVar1 == 0x50) && (*(char *)(param_1 + 6) == '\x01')) &&
           (*(char *)(param_1 + 5) == '\x01')) && ((ushort)param_1[4] == DAT_0002b34c)) {
    FUN_0002aef0(param_1[2]);
    puVar10 = DAT_0002b340;
  }
  puVar3 = DAT_0002b344;
  iVar5 = FUN_0002aeac(*DAT_0002b344);
  if ((iVar5 != 0) &&
     (FUN_0002ae1c(&local_34), iVar5 = local_34, uVar4 = DAT_0002b350, local_34 != 0)) {
    iVar6 = 0;
    piVar8 = &local_34;
    do {
      uVar9 = (uint)*(ushort *)(piVar8 + 1);
      iVar7 = FUN_0002ae60(uVar9,*puVar3);
      if ((iVar7 != 0) && (uVar9 != uVar4)) {
        FUN_0002af74(uVar9);
      }
      iVar6 = iVar6 + 1;
      piVar8 = (int *)((int)piVar8 + 2);
    } while (iVar6 != iVar5);
  }
  puVar3 = DAT_0002b348;
  iVar5 = FUN_0002aeac(*DAT_0002b348);
  if ((iVar5 != 0) && (FUN_0002ae1c(&local_34), local_34 != 0)) {
    iVar5 = 0;
    piVar8 = &local_34;
    do {
      uVar2 = *(undefined2 *)(piVar8 + 1);
      iVar6 = FUN_0002ae60(uVar2,*puVar3);
      if (iVar6 != 0) {
        FUN_0002aef0(uVar2);
      }
      iVar5 = iVar5 + 1;
      piVar8 = (int *)((int)piVar8 + 2);
    } while (iVar5 != local_34);
  }
  iVar5 = FUN_0002aeac(*puVar10);
  if (iVar5 != 0) {
    FUN_0002afec();
  }
  return;
}


/* ---- FUN_0002b354 @ 0002b354 ---- */

void FUN_0002b354(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_2c;
  undefined2 local_28 [8];
  
  FUN_0002b5a4();
  FUN_0002ae1c(&local_2c);
  iVar4 = DAT_0002b3cc;
  puVar2 = DAT_0002b3c8;
  if (local_2c != 0) {
    uVar5 = 0;
    do {
      while( true ) {
        uVar1 = local_28[uVar5];
        iVar3 = FUN_0002bb04(uVar1);
        if (iVar3 != iVar4) break;
        uVar5 = uVar5 + 1 & 0xffff;
        FUN_0002ae84(uVar1,*puVar2,1);
        if (local_2c <= uVar5) goto LAB_0002b3a6;
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < local_2c);
  }
LAB_0002b3a6:
  iVar4 = FUN_0002aeac(*puVar2);
  if (iVar4 != 0) {
    FUN_0002afec();
  }
  return;
}


/* ---- FUN_0002b3d0 @ 0002b3d0 ---- */

void FUN_0002b3d0(void)

{
  software_interrupt(0xa7);
  return;
}


/* ---- FUN_0002b3d4 @ 0002b3d4 ---- */

void FUN_0002b3d4(void)

{
  software_interrupt(0xa9);
  return;
}


/* ---- FUN_0002b3d8 @ 0002b3d8 ---- */

void FUN_0002b3d8(void)

{
  software_interrupt(0xaa);
  return;
}


/* ---- FUN_0002b3dc @ 0002b3dc ---- */

void FUN_0002b3dc(char *param_1)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined local_28 [2];
  undefined2 local_26;
  undefined local_24;
  undefined4 local_20;
  undefined *local_1c;
  
  if (((*param_1 == '\x01') && (param_1[4] == '\x01')) &&
     (iVar4 = FUN_0002c8ec(*(undefined2 *)(param_1 + 2),1,&local_20), iVar4 == 0)) {
    local_28[0] = 2;
    local_26 = *(undefined2 *)(param_1 + 2);
    local_24 = *local_1c;
    FUN_0002b0f8(local_28);
  }
  uVar2 = DAT_0002b450;
  puVar1 = DAT_0002b44c;
  uVar3 = (uint)*DAT_0002b44c;
  if (uVar3 != DAT_0002b450) {
    local_20 = *DAT_0002b454;
    local_1c = (undefined *)DAT_0002b454[1];
    while ((iVar4 = FUN_0002da2c(uVar3,&local_20,0), *puVar1 != uVar2 && (iVar4 != 0x11))) {
      uVar3 = FUN_0002da08();
      *puVar1 = (ushort)uVar3;
    }
  }
  return;
}


/* ---- FUN_0002b458 @ 0002b458 ---- */

undefined4 FUN_0002b458(void)

{
  *DAT_0002b464 = 0xffff;
  return 0;
}


/* ---- FUN_0002b468 @ 0002b468 ---- */

int FUN_0002b468(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined auStack_20 [4];
  undefined4 *local_1c;
  
  iVar1 = FUN_0002bb04();
  iVar2 = DAT_0002b504;
  if (iVar1 != DAT_0002b500) {
    sVar3 = 1;
    while( true ) {
      iVar2 = FUN_0002c8f8(iVar1,8,sVar3,auStack_20);
      if (iVar2 != 0) break;
      *local_1c = 3;
      iVar2 = FUN_0002b3d8(param_1,(int)local_1c + 6,local_1c + 1,3);
      if (iVar2 == 0) {
        iVar2 = FUN_0002d234(iVar1,8);
        return iVar2;
      }
      if (iVar2 != 0xc) {
        if (iVar2 == 5) {
          iVar1 = FUN_0002cde8(iVar1,8);
          iVar2 = 0;
        }
        else {
          iVar1 = FUN_0002cde8(iVar1,8);
        }
        if (iVar1 == 0) {
          return iVar2;
        }
        return 3;
      }
      FUN_0002cde8(iVar1,8);
      sVar3 = sVar3 + 1;
    }
    if (iVar2 == 7) {
      iVar2 = 0xc;
    }
  }
  return iVar2;
}


/* ---- FUN_0002b508 @ 0002b508 ---- */

int FUN_0002b508(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  undefined auStack_28 [4];
  uint *local_24;
  
  iVar2 = FUN_0002bb04();
  if ((iVar2 == DAT_0002b5a0) || (iVar2 = FUN_0002c8ec(iVar2,8,auStack_28), iVar2 != 0)) {
    uVar4 = 3;
    sVar5 = 0;
    iVar2 = 0;
  }
  else {
    sVar5 = *(short *)(local_24 + 1);
    uVar4 = *local_24;
    iVar2 = (int)local_24 + 6;
  }
  bVar1 = true;
  do {
    iVar3 = FUN_0002b3d4(param_1,iVar2,sVar5,uVar4);
    if (iVar3 == 4) {
      iVar2 = 0x11;
      if (!bVar1) {
LAB_0002b55c:
        iVar2 = 0xb;
      }
      return iVar2;
    }
    if (iVar3 == 8) {
      iVar3 = 0;
LAB_0002b544:
      if (bVar1) {
        return iVar3;
      }
      goto LAB_0002b55c;
    }
    if (iVar3 != 0xb) goto LAB_0002b544;
    if ((uVar4 & 2) == 0) {
      if (iVar2 == 0) {
        if (sVar5 == 0) {
          return 0xb;
        }
        uVar4 = 3;
        sVar5 = 0;
      }
      else {
        uVar4 = 3;
        sVar5 = 0;
        iVar2 = 0;
      }
    }
    else {
      uVar4 = 1;
    }
    bVar1 = false;
  } while( true );
}


/* ---- FUN_0002b5a4 @ 0002b5a4 ---- */

void FUN_0002b5a4(void)

{
  uint uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = DAT_0002b5e0;
  uVar4 = FUN_0002da08(DAT_0002b5e0);
  puVar3 = DAT_0002b5e8;
  puVar2 = DAT_0002b5e4;
  *DAT_0002b5e4 = (ushort)uVar4;
  local_20 = *puVar3;
  uStack_1c = puVar3[1];
  while( true ) {
    iVar5 = FUN_0002da2c(uVar4,&local_20,0);
    if ((*puVar2 == uVar1) || (iVar5 == 0x11)) break;
    uVar4 = FUN_0002da08();
    *puVar2 = (ushort)uVar4;
  }
  return;
}


/* ---- FUN_0002b5ec @ 0002b5ec ---- */

undefined FUN_0002b5ec(void)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_10 [4];
  undefined *local_c;
  
  uVar2 = FUN_0002bb04();
  iVar3 = FUN_0002c8ec(uVar2,1,auStack_10);
  if (iVar3 == 0) {
    uVar1 = *local_c;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* ---- FUN_0002b60c @ 0002b60c ---- */

void FUN_0002b60c(undefined4 param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  iVar2 = DAT_0002b634;
  psVar1 = DAT_0002b630;
  sVar4 = *DAT_0002b630;
  while( true ) {
    iVar3 = FUN_0002b3d0(param_1,sVar4,DAT_0002b638);
    sVar4 = sVar4 + 1;
    if (iVar3 != iVar2) break;
    *psVar1 = sVar4;
  }
  return;
}


/* ---- FUN_0002b63c @ 0002b63c ---- */

void FUN_0002b63c(undefined4 param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = *(undefined4 *)(DAT_0002b658 + 8);
  uStack_14 = *(undefined4 *)(DAT_0002b658 + 0xc);
  FUN_0002da2c(param_1,&local_18,0,DAT_0002b658 + 0x10);
  return;
}


/* ---- FUN_0002b65c @ 0002b65c ---- */

void FUN_0002b65c(void)

{
  software_interrupt(0x71);
  return;
}


/* ---- FUN_0002b660 @ 0002b660 ---- */

void FUN_0002b660(void)

{
  software_interrupt(0x4d);
  return;
}


/* ---- FUN_0002b664 @ 0002b664 ---- */

void FUN_0002b664(short *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ushort local_92;
  undefined auStack_90 [4];
  undefined local_8c;
  undefined local_8b;
  undefined local_8a;
  undefined local_88;
  undefined local_87;
  undefined local_86;
  undefined auStack_84 [4];
  int local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined local_50;
  undefined local_4f;
  undefined2 local_4e;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  undefined local_48;
  undefined local_47;
  undefined local_46;
  undefined local_45;
  undefined local_44;
  undefined local_43;
  undefined local_42;
  undefined local_41;
  undefined auStack_40 [13];
  undefined local_33;
  undefined local_32;
  undefined local_31;
  undefined uStack_23;
  undefined uStack_22;
  undefined uStack_21;
  
  if (*param_1 != 0x10) {
    return;
  }
  local_7c = *(uint *)(param_1 + 2);
  local_78 = *(uint *)(param_1 + 4);
  local_74 = *(undefined4 *)(param_1 + 6);
  local_70 = *(undefined4 *)(param_1 + 8);
  uStack_6c = *(undefined4 *)(param_1 + 10);
  uStack_68 = *(undefined4 *)(param_1 + 0xc);
  local_64 = *(undefined4 *)(param_1 + 0xe);
  uStack_60 = *(undefined4 *)(param_1 + 0x10);
  uStack_5c = *(undefined4 *)(param_1 + 0x12);
  local_58 = *(undefined4 *)(param_1 + 0x14);
  uStack_54 = *(undefined4 *)(param_1 + 0x16);
  if ((local_78 & 0xff) == 3) {
LAB_0002b696:
    uVar7 = local_7c & 0xffff;
    uVar6 = DAT_0002b930;
    if (uVar7 == DAT_0002b930) {
      return;
    }
LAB_0002b6a2:
    puVar1 = DAT_0002b934;
    FUN_0002ae84(uVar7,*DAT_0002b934,1);
    iVar2 = FUN_0002ae60(uVar7,*puVar1);
    iVar4 = DAT_0002b938;
    if (iVar2 == 0) {
LAB_0002b704:
      iVar8 = 0;
      iVar2 = DAT_0002b938;
      do {
        iVar3 = FUN_0002ae60(*(undefined2 *)(iVar2 + 2),*puVar1);
        if (iVar3 == 0) {
          bVar5 = (byte)iVar8;
          goto LAB_0002b8d6;
        }
        iVar8 = iVar8 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar8 != 8);
    }
    else {
      if (*(ushort *)(DAT_0002b938 + 2) == uVar7) {
        bVar5 = 0;
      }
      else if (*(ushort *)(DAT_0002b938 + 0xe) == uVar7) {
        bVar5 = 1;
      }
      else if (*(ushort *)(DAT_0002b938 + 0x1a) == uVar7) {
        bVar5 = 2;
      }
      else if (*(ushort *)(DAT_0002b938 + 0x26) == uVar7) {
        bVar5 = 3;
      }
      else if (*(ushort *)(DAT_0002b938 + 0x32) == uVar7) {
        bVar5 = 4;
      }
      else if (*(ushort *)(DAT_0002b938 + 0x3e) == uVar7) {
        bVar5 = 5;
      }
      else if (*(ushort *)(DAT_0002b938 + 0x4a) == uVar7) {
        bVar5 = 6;
      }
      else {
        if (*(ushort *)(DAT_0002b938 + 0x56) != uVar7) goto LAB_0002b704;
        bVar5 = 7;
      }
LAB_0002b8d6:
      iVar2 = iVar4 + (uint)bVar5 * 0xc;
      *(undefined2 *)(iVar4 + (uint)bVar5 * 0xc) = 0xffff;
      *(short *)(iVar2 + 2) = (short)uVar7;
      *(uint *)(iVar2 + 4) = local_78;
      *(undefined2 *)(iVar2 + 8) = (undefined2)local_74;
      *(undefined *)(iVar2 + 10) = local_74._2_1_;
    }
  }
  else {
    FUN_0002c284(param_1 + 0x18);
    if ((local_78 & 0xff) < 2) {
      do {
        iVar4 = FUN_0002c298(7,&local_92,auStack_84);
        if (iVar4 == 0) goto LAB_0002b696;
      } while (((local_78 & 0xff) != (uint)*(byte *)(local_80 + 0x11)) ||
              (iVar4 = FUN_00031748((int)&local_78 + 1,local_80 + 0x12,6), iVar4 != 0));
    }
    else {
      if ((local_78 & 0xff) != 2) goto LAB_0002b696;
      do {
        do {
          iVar2 = FUN_0002c298(7,&local_92,auStack_84);
          iVar4 = local_80;
          if (iVar2 == 0) goto LAB_0002b696;
        } while ((local_78 & 0xff) != 2);
        FUN_00031764(auStack_90,(int)&local_78 + 1,3);
        FUN_00031764(&local_88,&local_74,3);
        local_50 = *(undefined *)(iVar4 + 0x10);
        local_4f = *(undefined *)(iVar4 + 0xf);
        local_4e = CONCAT11(*(undefined *)(iVar4 + 0xd),*(undefined *)(iVar4 + 0xe));
        local_4c = *(undefined *)(iVar4 + 0xc);
        local_4b = *(undefined *)(iVar4 + 0xb);
        local_4a = *(undefined *)(iVar4 + 10);
        local_49 = *(undefined *)(iVar4 + 9);
        local_48 = *(undefined *)(iVar4 + 8);
        local_47 = *(undefined *)(iVar4 + 7);
        local_46 = *(undefined *)(iVar4 + 6);
        local_45 = *(undefined *)(iVar4 + 5);
        local_44 = *(undefined *)(iVar4 + 4);
        local_43 = *(undefined *)(iVar4 + 3);
        local_42 = *(undefined *)(iVar4 + 2);
        local_41 = *(undefined *)(iVar4 + 1);
        FUN_0001b1fc(auStack_40,0,0xd);
        local_31 = local_88;
        local_32 = local_87;
        local_33 = local_86;
        FUN_0002b660(&local_50);
        local_8c = uStack_21;
        local_8b = uStack_22;
        local_8a = uStack_23;
        iVar4 = FUN_00031748(auStack_90,&local_8c,3);
      } while (iVar4 != 0);
    }
    uVar6 = (uint)local_92;
    uVar7 = local_7c & 0xffff;
    if (uVar7 != DAT_0002b930) goto LAB_0002b6a2;
  }
  if (uVar6 == DAT_0002b930) {
    return;
  }
  uVar7 = local_7c & 0xffff;
  iVar4 = FUN_0002ae60(uVar7,*DAT_0002b934);
  if (iVar4 != 0) {
    if (*(ushort *)(DAT_0002b938 + 2) == uVar7) {
      iVar4 = 0;
    }
    else if (*(ushort *)(DAT_0002b938 + 0xe) == uVar7) {
      iVar4 = 1;
    }
    else if (*(ushort *)(DAT_0002b938 + 0x1a) == uVar7) {
      iVar4 = 2;
    }
    else if (*(ushort *)(DAT_0002b938 + 0x26) == uVar7) {
      iVar4 = 3;
    }
    else if (*(ushort *)(DAT_0002b938 + 0x32) == uVar7) {
      iVar4 = 4;
    }
    else if (*(ushort *)(DAT_0002b938 + 0x3e) == uVar7) {
      iVar4 = 5;
    }
    else if (*(ushort *)(DAT_0002b938 + 0x4a) == uVar7) {
      iVar4 = 6;
    }
    else {
      iVar4 = 7;
      if (*(ushort *)(DAT_0002b938 + 0x56) != uVar7) goto LAB_0002b784;
    }
    *(short *)(DAT_0002b938 + iVar4 * 0xc) = (short)uVar6;
  }
LAB_0002b784:
  local_4e = (undefined2)local_7c;
  local_50 = 1;
  FUN_0002dfb8(&local_50);
  FUN_0002b174(&local_50);
  return;
}


/* ---- FUN_0002b93c @ 0002b93c ---- */

void FUN_0002b93c(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  short local_3a;
  undefined auStack_38 [4];
  int local_34;
  undefined auStack_30 [4];
  int local_2c;
  undefined local_28 [2];
  short local_26;
  short local_24;
  short local_22;
  
  if (*param_1 != '\0') {
    return;
  }
  if (param_1[4] != '\a') {
    return;
  }
  iVar2 = FUN_0002c8ec(*(undefined2 *)(param_1 + 2),7,auStack_38);
  if (iVar2 != 0) {
    return;
  }
  FUN_0002c284();
  do {
    do {
      iVar3 = FUN_0002c298(7,&local_3a,auStack_30);
      iVar1 = local_2c;
      iVar2 = local_34;
      if (iVar3 == 0) {
        return;
      }
    } while ((*(short *)(param_1 + 2) == local_3a) ||
            (((((*(char *)(local_34 + 1) == '\0' && (*(char *)(local_34 + 2) == '\0')) &&
               (*(char *)(local_34 + 3) == '\0')) &&
              (((*(char *)(local_34 + 4) == '\0' && (*(char *)(local_34 + 5) == '\0')) &&
               ((*(char *)(local_34 + 6) == '\0' &&
                ((*(char *)(local_34 + 7) == '\0' && (*(char *)(local_34 + 8) == '\0')))))))) &&
             ((*(char *)(local_34 + 9) == '\0' &&
              (((((*(char *)(local_34 + 10) == '\0' && (*(char *)(local_34 + 0xb) == '\0')) &&
                 (*(char *)(local_34 + 0xc) == '\0')) &&
                ((*(char *)(local_34 + 0xd) == '\0' && (*(char *)(local_34 + 0xe) == '\0')))) &&
               ((*(char *)(local_34 + 0xf) == '\0' && (*(char *)(local_34 + 0x10) == '\0'))))))))));
    iVar3 = FUN_00031748(local_34 + 1,local_2c + 1,0x10);
    bVar4 = iVar3 == 0;
    if (*(char *)(iVar2 + 0x11) == *(char *)(iVar1 + 0x11)) {
      iVar2 = FUN_00031748(iVar2 + 0x12,iVar1 + 0x12,6);
      bVar4 = bVar4 || iVar2 == 0;
    }
  } while (!bVar4);
  local_24 = *(short *)(param_1 + 2);
  iVar2 = 0;
  if (*DAT_0002bab4 != local_24) {
    if (DAT_0002bab4[6] == local_24) {
      iVar2 = 1;
    }
    else if (DAT_0002bab4[0xc] == local_24) {
      iVar2 = 2;
    }
    else if (DAT_0002bab4[0x12] == local_24) {
      iVar2 = 3;
    }
    else if (DAT_0002bab4[0x18] == local_24) {
      iVar2 = 4;
    }
    else if (DAT_0002bab4[0x1e] == local_24) {
      iVar2 = 5;
    }
    else if (DAT_0002bab4[0x24] == local_24) {
      iVar2 = 6;
    }
    else {
      if (DAT_0002bab4[0x2a] != local_24) {
        local_26 = (short)DAT_0002bab8;
        goto LAB_0002ba4a;
      }
      iVar2 = 7;
    }
  }
  local_26 = DAT_0002bab4[iVar2 * 6 + 1];
LAB_0002ba4a:
  local_28[0] = 0;
  local_22 = local_3a;
  FUN_0002dfb8(local_28);
  FUN_0002b174(local_28);
  return;
}


/* ---- FUN_0002babc @ 0002babc ---- */

int FUN_0002babc(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = DAT_0002baf8;
  *DAT_0002baf8 = 0x18;
  iVar2 = DAT_0002bafc;
  *(undefined2 *)(DAT_0002bafc + 0x4a) = 0xffff;
  *(undefined2 *)(iVar2 + 2) = 0xffff;
  *(undefined2 *)(iVar2 + 0xe) = 0xffff;
  *(undefined2 *)(iVar2 + 0x1a) = 0xffff;
  *(undefined2 *)(iVar2 + 0x26) = 0xffff;
  *(undefined2 *)(iVar2 + 0x32) = 0xffff;
  *(undefined2 *)(iVar2 + 0x3e) = 0xffff;
  *(undefined2 *)(iVar2 + 0x56) = 0xffff;
  iVar2 = FUN_0002ae34();
  *puVar1 = (char)iVar2;
  if ((iVar2 == 0x18) || (iVar2 = FUN_0002b65c(DAT_0002bb00), iVar2 != 0)) {
    iVar2 = 3;
  }
  return iVar2;
}


/* ---- FUN_0002bb04 @ 0002bb04 ---- */

uint FUN_0002bb04(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0002ae60(param_1,*DAT_0002bb74);
  uVar2 = DAT_0002bb7c;
  if (iVar1 != 0) {
    if (*(ushort *)(DAT_0002bb78 + 2) == param_1) {
      iVar1 = 0;
    }
    else if (*(ushort *)(DAT_0002bb78 + 0xe) == param_1) {
      iVar1 = 1;
    }
    else if (*(ushort *)(DAT_0002bb78 + 0x1a) == param_1) {
      iVar1 = 2;
    }
    else if (*(ushort *)(DAT_0002bb78 + 0x26) == param_1) {
      iVar1 = 3;
    }
    else if (*(ushort *)(DAT_0002bb78 + 0x32) == param_1) {
      iVar1 = 4;
    }
    else if (*(ushort *)(DAT_0002bb78 + 0x3e) == param_1) {
      iVar1 = 5;
    }
    else if (*(ushort *)(DAT_0002bb78 + 0x4a) == param_1) {
      iVar1 = 6;
    }
    else {
      iVar1 = 7;
      if (*(ushort *)(DAT_0002bb78 + 0x56) != param_1) {
        return DAT_0002bb7c;
      }
    }
    uVar2 = (uint)*(ushort *)(DAT_0002bb78 + iVar1 * 0xc);
  }
  return uVar2;
}


/* ---- FUN_0002bb80 @ 0002bb80 ---- */

undefined4 FUN_0002bb80(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0002ae60(param_1,*DAT_0002bc04);
  if (iVar1 == 0) {
    uVar2 = 5;
  }
  else {
    if (*(ushort *)(DAT_0002bc08 + 2) == param_1) {
      iVar1 = 0;
    }
    else if (*(ushort *)(DAT_0002bc08 + 0xe) == param_1) {
      iVar1 = 1;
    }
    else if (*(ushort *)(DAT_0002bc08 + 0x1a) == param_1) {
      iVar1 = 2;
    }
    else if (*(ushort *)(DAT_0002bc08 + 0x26) == param_1) {
      iVar1 = 3;
    }
    else if (*(ushort *)(DAT_0002bc08 + 0x32) == param_1) {
      iVar1 = 4;
    }
    else if (*(ushort *)(DAT_0002bc08 + 0x3e) == param_1) {
      iVar1 = 5;
    }
    else if (*(ushort *)(DAT_0002bc08 + 0x4a) == param_1) {
      iVar1 = 6;
    }
    else {
      iVar1 = 7;
      if (*(ushort *)(DAT_0002bc08 + 0x56) != param_1) {
        return 5;
      }
    }
    FUN_00031764(param_2,DAT_0002bc08 + iVar1 * 0xc + 4,7);
    uVar2 = 0;
  }
  return uVar2;
}


/* ---- FUN_0002bc0c @ 0002bc0c ---- */

bool FUN_0002bc0c(short *param_1,short *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (((((((*param_1 != 0) || (*(char *)(param_1 + 1) != '\0')) ||
         (*(char *)((int)param_1 + 3) != '\0')) ||
        ((*(char *)(param_1 + 2) != '\0' || (*(char *)((int)param_1 + 5) != '\0')))) ||
       ((*(char *)(param_1 + 3) != '\0' ||
        ((*(char *)((int)param_1 + 7) != '\0' || (*(char *)(param_1 + 4) != '\0')))))) ||
      (bVar2 = false, *(char *)((int)param_1 + 9) != '\0')) && (bVar2 = false, *param_2 == *param_1)
     ) {
    iVar1 = FUN_00031748(param_1 + 1,param_2 + 1,8);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


/* ---- FUN_0002bc64 @ 0002bc64 ---- */

uint FUN_0002bc64(short *param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  ushort local_1a;
  undefined auStack_18 [4];
  int local_14;
  
  FUN_0002c284();
LAB_0002bc72:
  do {
    iVar1 = FUN_0002c298(7,&local_1a,auStack_18);
    if (iVar1 == 0) {
      return DAT_0002bd3c;
    }
    sVar3 = *param_1;
    if (sVar3 == 0) {
      if (*(char *)(param_1 + 1) == '\0') {
        cVar2 = *(char *)((int)param_1 + 3);
        if (((((cVar2 != '\0') || (*(char *)(param_1 + 2) != '\0')) ||
             (*(char *)((int)param_1 + 5) != '\0')) ||
            ((*(char *)(param_1 + 3) != '\0' || (*(char *)((int)param_1 + 7) != '\0')))) ||
           ((*(char *)(param_1 + 4) != '\0' || (*(char *)((int)param_1 + 9) != '\0')))) {
          if (*(short *)(local_14 + 0x46) == 0) goto LAB_0002bd02;
          goto LAB_0002bd28;
        }
LAB_0002bcba:
        if ((((*(char *)(param_1 + 2) == '\0') && (*(char *)((int)param_1 + 5) == '\0')) &&
            (*(char *)(param_1 + 3) == '\0')) &&
           (((*(char *)((int)param_1 + 7) == '\0' && (*(char *)(param_1 + 4) == '\0')) &&
            (*(char *)((int)param_1 + 9) == '\0')))) goto LAB_0002bc72;
LAB_0002bcde:
        sVar3 = 0;
      }
      else if (*(short *)(local_14 + 0x46) == 0) goto LAB_0002bd02;
    }
    else if (*(short *)(local_14 + 0x46) == sVar3) {
LAB_0002bd02:
      iVar1 = FUN_00031748(param_1 + 1,local_14 + 0x48,8);
      if (iVar1 == 0) goto LAB_0002bcf4;
      sVar3 = *param_1;
      if ((sVar3 == 0) && (*(char *)(param_1 + 1) == '\0')) {
        cVar2 = *(char *)((int)param_1 + 3);
LAB_0002bd28:
        if (cVar2 == '\0') goto LAB_0002bcba;
        goto LAB_0002bcde;
      }
    }
    if ((*(short *)(local_14 + 0x2a) == sVar3) &&
       (iVar1 = FUN_00031748(param_1 + 1,local_14 + 0x2c,8), iVar1 == 0)) {
LAB_0002bcf4:
      return (uint)local_1a;
    }
  } while( true );
}


/* ---- FUN_0002bd40 @ 0002bd40 ---- */

uint FUN_0002bd40(uint param_1)

{
  int iVar1;
  
  if (*DAT_0002bda4 == param_1) {
    iVar1 = 0;
  }
  else if (DAT_0002bda4[6] == param_1) {
    iVar1 = 1;
  }
  else if (DAT_0002bda4[0xc] == param_1) {
    iVar1 = 2;
  }
  else if (DAT_0002bda4[0x12] == param_1) {
    iVar1 = 3;
  }
  else if (DAT_0002bda4[0x18] == param_1) {
    iVar1 = 4;
  }
  else if (DAT_0002bda4[0x1e] == param_1) {
    iVar1 = 5;
  }
  else if (DAT_0002bda4[0x24] == param_1) {
    iVar1 = 6;
  }
  else {
    iVar1 = 7;
    if (DAT_0002bda4[0x2a] != param_1) {
      return DAT_0002bda8;
    }
  }
  return (uint)DAT_0002bda4[iVar1 * 6 + 1];
}


/* ---- FUN_0002bdac @ 0002bdac ---- */

bool FUN_0002bdac(short *param_1)

{
  bool bVar1;
  
  if (((((*param_1 == 0) && (*(char *)(param_1 + 1) == '\0')) &&
       (*(char *)((int)param_1 + 3) == '\0')) &&
      ((*(char *)(param_1 + 2) == '\0' && (*(char *)((int)param_1 + 5) == '\0')))) &&
     ((*(char *)(param_1 + 3) == '\0' &&
      ((*(char *)((int)param_1 + 7) == '\0' && (*(char *)(param_1 + 4) == '\0')))))) {
    bVar1 = *(char *)((int)param_1 + 9) != '\0';
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


/* ---- FUN_0002bdec @ 0002bdec ---- */

void FUN_0002bdec(uint param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002ae60(param_1,*DAT_0002be5c);
  if (iVar1 != 0) {
    if (*(ushort *)(DAT_0002be60 + 2) == param_1) {
      iVar1 = 0;
    }
    else if (*(ushort *)(DAT_0002be60 + 0xe) == param_1) {
      iVar1 = 1;
    }
    else if (*(ushort *)(DAT_0002be60 + 0x1a) == param_1) {
      iVar1 = 2;
    }
    else if (*(ushort *)(DAT_0002be60 + 0x26) == param_1) {
      iVar1 = 3;
    }
    else if (*(ushort *)(DAT_0002be60 + 0x32) == param_1) {
      iVar1 = 4;
    }
    else if (*(ushort *)(DAT_0002be60 + 0x3e) == param_1) {
      iVar1 = 5;
    }
    else if (*(ushort *)(DAT_0002be60 + 0x4a) == param_1) {
      iVar1 = 6;
    }
    else {
      iVar1 = 7;
      if (*(ushort *)(DAT_0002be60 + 0x56) != param_1) {
        return;
      }
    }
    *(undefined2 *)(DAT_0002be60 + iVar1 * 0xc) = param_2;
  }
  return;
}


/* ---- FUN_0002be64 @ 0002be64 ---- */

int FUN_0002be64(uint param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = DAT_0002bf4c;
  if (*DAT_0002bf4c == param_1) {
    iVar3 = 0;
  }
  else if (DAT_0002bf4c[6] == param_1) {
    iVar3 = 1;
  }
  else if (DAT_0002bf4c[0xc] == param_1) {
    iVar3 = 2;
  }
  else if (DAT_0002bf4c[0x12] == param_1) {
    iVar3 = 3;
  }
  else if (DAT_0002bf4c[0x18] == param_1) {
    iVar3 = 4;
  }
  else if (DAT_0002bf4c[0x1e] == param_1) {
    iVar3 = 5;
  }
  else if (DAT_0002bf4c[0x24] == param_1) {
    iVar3 = 6;
  }
  else {
    iVar3 = 7;
    if (DAT_0002bf4c[0x2a] != param_1) {
      iVar3 = FUN_0002c55c();
      return iVar3;
    }
  }
  uVar4 = (uint)DAT_0002bf4c[iVar3 * 6 + 1];
  iVar3 = FUN_0002c55c();
  if (((uVar4 != DAT_0002bf50) && (iVar3 == 0)) &&
     (iVar2 = FUN_0002ae60(uVar4,*DAT_0002bf54), iVar2 != 0)) {
    if (puVar1[1] == uVar4) {
      iVar2 = 0;
    }
    else if (puVar1[7] == uVar4) {
      iVar2 = 1;
    }
    else if (puVar1[0xd] == uVar4) {
      iVar2 = 2;
    }
    else if (puVar1[0x13] == uVar4) {
      iVar2 = 3;
    }
    else if (puVar1[0x19] == uVar4) {
      iVar2 = 4;
    }
    else if (puVar1[0x1f] == uVar4) {
      iVar2 = 5;
    }
    else if (puVar1[0x25] == uVar4) {
      iVar2 = 6;
    }
    else {
      iVar2 = 7;
      if (puVar1[0x2b] != uVar4) {
        return 0;
      }
    }
    puVar1[iVar2 * 6] = 0xffff;
  }
  return iVar3;
}


/* ---- FUN_0002bf58 @ 0002bf58 ---- */

undefined4 FUN_0002bf58(void)

{
  return 6;
}


/* ---- FUN_0002bf5c @ 0002bf5c ---- */

undefined4 FUN_0002bf5c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0002bf90;
  FUN_0001b1fc(DAT_0002bf90,0,0x10);
  if ((param_1 == 0) || (param_2 == 0)) {
    *DAT_0002bf94 = 0;
  }
  else {
    *DAT_0002bf94 = (char)param_2;
    FUN_00031764(uVar1,param_1,param_2 << 1);
  }
  return 0;
}


/* ---- FUN_0002bf98 @ 0002bf98 ---- */

undefined4 FUN_0002bf98(void)

{
  return 0;
}


/* ---- FUN_0002bf9c @ 0002bf9c ---- */

void FUN_0002bf9c(void)

{
  return;
}


/* ---- FUN_0002bfa0 @ 0002bfa0 ---- */

void FUN_0002bfa0(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined auStack_3c [8];
  undefined auStack_34 [12];
  undefined local_28 [2];
  undefined2 local_26;
  undefined local_24;
  uint local_20;
  int local_1c;
  
  iVar2 = DAT_0002c030;
  FUN_0001b1fc(auStack_3c,0,8);
  iVar4 = FUN_0002db70(iVar2);
  while( true ) {
    if (iVar4 == iVar2) {
      return;
    }
    uVar6 = iVar4 + DAT_0002c034 & 0xffff;
    iVar5 = FUN_0001d088(uVar6,auStack_34,auStack_3c);
    pbVar3 = DAT_0002c038;
    if (iVar5 != 10) break;
    FUN_0002dacc(iVar4);
    iVar4 = FUN_0002db70(iVar4);
  }
  bVar1 = *DAT_0002c038;
  if (bVar1 != 0) {
    return;
  }
  *DAT_0002c038 = 1;
  local_1c = FUN_0001ce10(uVar6);
  if (local_1c == 8) {
    *DAT_0002c03c = 1;
    return;
  }
  if (local_1c == 0) {
    return;
  }
  local_28[0] = 9;
  *pbVar3 = bVar1;
  local_26 = (undefined2)iVar4;
  local_24 = 0xff;
  local_20 = (uint)bVar1;
  FUN_0002d4cc(local_28);
  return;
}


/* ---- FUN_0002c040 @ 0002c040 ---- */

void FUN_0002c040(byte *param_1)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  ushort uVar5;
  char *pcVar6;
  byte local_20 [2];
  ushort local_1e;
  undefined local_1c;
  undefined4 local_18;
  uint local_14;
  
  uVar4 = *(uint *)(param_1 + 4);
  local_14 = (uint)(uVar4 == 0);
  bVar1 = *param_1;
  pcVar6 = DAT_0002c184;
  if (bVar1 == 4) {
    uVar5 = *(short *)(param_1 + 0xc) + 0x4000;
    if ((uVar5 <= DAT_0002c180) && (*(short *)(param_1 + 0xe) == 0)) {
      local_1c = 0xff;
      local_1e = uVar5;
      if (uVar4 == 0) {
        local_20[0] = 6;
        FUN_0002dacc((uint)uVar5);
      }
      else {
        local_20[0] = 7;
      }
      puVar3 = DAT_0002c188;
      pcVar6 = DAT_0002c184;
      *DAT_0002c184 = '\0';
      *puVar3 = 0;
      FUN_0002bfa0();
      FUN_0002d4cc(local_20);
    }
  }
  else if (bVar1 < 5) {
    if (bVar1 == 3) {
      if (((ushort)(*(short *)(param_1 + 0xc) + 0x4000U) <= DAT_0002c180) ||
         ((ushort)(*(short *)(param_1 + 0xe) + 0x4000) <= DAT_0002c180)) {
        local_18 = *(undefined4 *)(param_1 + 8);
        local_20[0] = (-(uVar4 == 0) & 0xfdU) + 5;
        local_1c = (undefined)*(short *)(param_1 + 0xe);
        local_1e = *(short *)(param_1 + 0xc) + 0x4000U;
        FUN_0002d4cc(local_20);
        cVar2 = *DAT_0002c184;
        pcVar6 = DAT_0002c184;
        goto joined_r0x0002c0b6;
      }
    }
    else if (bVar1 != 0) {
      if (((ushort)(*(short *)(param_1 + 0xc) + 0x4000U) <= DAT_0002c180) ||
         ((ushort)(*(short *)(param_1 + 0xe) + 0x4000) <= DAT_0002c180)) {
        local_1c = (undefined)*(short *)(param_1 + 0xe);
        if (bVar1 == 1) {
          local_20[0] = (uVar4 == 0) - 1U & 3;
        }
        else {
          local_20[0] = ((uVar4 == 0) - 1U & 3) + 1;
        }
        local_18 = *(undefined4 *)(param_1 + 8);
        local_1e = *(short *)(param_1 + 0xc) + 0x4000U;
        local_14 = uVar4;
        FUN_0002d4cc(local_20);
        pcVar6 = DAT_0002c184;
      }
    }
  }
  else if (bVar1 == 5) {
    local_20[0] = 8;
    FUN_0002d4cc(local_20);
    pcVar6 = DAT_0002c184;
  }
  cVar2 = *pcVar6;
joined_r0x0002c0b6:
  if (cVar2 != '\0') {
    *pcVar6 = '\0';
    FUN_0002bfa0();
  }
  return;
}


/* ---- FUN_0002c18c @ 0002c18c ---- */

undefined4 FUN_0002c18c(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int local_2c [2];
  undefined auStack_24 [8];
  undefined auStack_1c [16];
  
  iVar2 = FUN_0001c8e4(DAT_0002c1f4);
  if (iVar2 == 0) {
    iVar2 = FUN_0001c908();
    if (iVar2 == 0) {
      FUN_0002da38();
      FUN_0001b1fc(auStack_24,0,8);
      while (iVar2 = FUN_0001cfc4(DAT_0002c1f8,auStack_1c,auStack_24), uVar3 = 0, iVar2 == 0) {
        FUN_0001cc00(auStack_1c,local_2c);
        sVar1 = *(short *)(local_2c[0] + 4);
        FUN_0001cc50(auStack_1c);
        FUN_0002da64(sVar1 + 0x4000);
      }
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


/* ---- FUN_0002c1fc @ 0002c1fc ---- */

undefined4 FUN_0002c1fc(uint param_1,int param_2,ushort *param_3,uint *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_2c;
  undefined4 local_28;
  undefined auStack_24 [16];
  
  if ((param_1 < 0x100) && ((param_2 == 1 || (param_2 - 4U < 5)))) {
    FUN_0001b1fc(&local_2c,0,8);
    iVar2 = FUN_0001ceec(param_1 + DAT_0002c280 & 0xffff,param_2 + DAT_0002c280 & 0xffff,auStack_24,
                         &local_2c);
    if ((iVar2 == 0) && (iVar2 = FUN_0001cc00(auStack_24,&local_2c), iVar2 == 0)) {
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
        FUN_00031764(*(undefined4 *)(param_3 + 2),local_28);
      }
      FUN_0001cc50(auStack_24);
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


/* ---- FUN_0002c284 @ 0002c284 ---- */

void FUN_0002c284(void)

{
  FUN_0001b1fc(DAT_0002c294,0,8);
  return;
}


/* ---- FUN_0002c298 @ 0002c298 ---- */

undefined4 FUN_0002c298(int param_1,short *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_24;
  undefined4 local_20;
  undefined auStack_1c [12];
  
  iVar1 = FUN_0001cfc4(param_1 + DAT_0002c2e8 & 0xffff,auStack_1c,DAT_0002c2ec);
  if ((iVar1 == 0) && (iVar1 = FUN_0001cc00(auStack_1c,&local_24), iVar1 == 0)) {
    *(char *)(param_3 + 1) = (char)param_1;
    *param_3 = *(undefined2 *)(local_24 + 2);
    *(undefined4 *)(param_3 + 2) = local_20;
    *param_2 = *(short *)(local_24 + 4) + 0x4000;
    FUN_0001cc50(auStack_1c);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* ---- FUN_0002c2f0 @ 0002c2f0 ---- */

undefined4 FUN_0002c2f0(undefined2 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 1) == 1) || (*(byte *)(param_1 + 1) - 4 < 5)) {
    uVar2 = FUN_0001cc9c(param_2,*param_1);
    if (uVar2 < 10) {
      uVar1 = *(undefined4 *)(uVar2 * 4 + DAT_0002c31c);
    }
    else {
      uVar1 = 3;
    }
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}


/* ---- FUN_0002c320 @ 0002c320 ---- */

int FUN_0002c320(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c [3];
  
  local_c[0] = param_1;
  iVar1 = FUN_0001cd10(local_c);
  if (iVar1 != 0) {
    iVar1 = 3;
  }
  return iVar1;
}


/* ---- FUN_0002c338 @ 0002c338 ---- */

int FUN_0002c338(uint param_1,undefined2 *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined auStack_38 [8];
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 *local_2c;
  undefined2 local_28;
  undefined auStack_24 [16];
  
  if ((param_1 < 0x100) && ((uVar1 = (uint)*(byte *)(param_2 + 1), uVar1 == 1 || (uVar1 - 4 < 5))))
  {
    local_40 = *(undefined4 *)(param_2 + 2);
    local_3c = *param_2;
    local_2c = &local_40;
    uVar1 = uVar1 + DAT_0002c404;
    param_1 = param_1 + DAT_0002c404;
    local_28 = 1;
    local_30 = (undefined2)param_1;
    local_2e = (undefined2)uVar1;
    local_44 = param_3;
    FUN_0001b1fc(auStack_38,0,8);
    iVar2 = FUN_0001ceec(param_1 & 0xffff,uVar1 & 0xffff,auStack_24,auStack_38);
    if (iVar2 == 0) {
      if (local_44 != 0) {
        FUN_0001cd10(&local_44);
      }
      uVar1 = FUN_0001cdd0(auStack_24,&local_30);
    }
    else if (local_44 == 0) {
      uVar1 = FUN_0001cd58(auStack_24,&local_30);
    }
    else {
      uVar1 = FUN_0001cd94(auStack_24,&local_30,&local_44);
    }
    if (uVar1 == 7) {
      iVar2 = 0x86;
    }
    else if (uVar1 < 8) {
      if (uVar1 == 0) {
        iVar2 = 0;
        if (param_4 != 0) {
          FUN_0001d14c(auStack_24,param_4);
        }
      }
      else {
        iVar2 = 3;
      }
    }
    else if (uVar1 == 8) {
      iVar2 = 0x11;
    }
    else {
      iVar2 = (-(uint)(uVar1 != 0xe) & 0xfffffff2) + 0x11;
    }
  }
  else {
    iVar2 = 7;
  }
  return iVar2;
}


/* ---- FUN_0002c408 @ 0002c408 ---- */

void FUN_0002c408(void)

{
  FUN_0002da64(DAT_0002c414);
  return;
}


/* ---- FUN_0002c418 @ 0002c418 ---- */

undefined4 FUN_0002c418(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x100) {
    FUN_0002daa4();
    FUN_0002bfa0();
    uVar1 = 0;
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}


/* ---- FUN_0002c430 @ 0002c430 ---- */

void FUN_0002c430(void)

{
  FUN_0002daf0();
  return;
}


/* ---- FUN_0002c438 @ 0002c438 ---- */

void FUN_0002c438(void)

{
  FUN_0002db08();
  return;
}


/* ---- FUN_0002c440 @ 0002c440 ---- */

void FUN_0002c440(void)

{
  FUN_0002db70();
  return;
}


/* ---- FUN_0002c448 @ 0002c448 ---- */

int FUN_0002c448(void)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = DAT_0002c544;
  DAT_0002c544[8] = DAT_0002c544[8] & 0xf800 | 0xff;
  puVar1[0x12] = puVar1[0x12] & 0xf800 | 0xff;
  *(undefined *)(puVar1 + 0x15) = 0xff;
  puVar1[0x1c] = puVar1[0x1c] & 0xf800 | 0xff;
  *(undefined *)(puVar1 + 0x1f) = 0xff;
  puVar1[0x26] = puVar1[0x26] & 0xf800 | 0xff;
  *(undefined *)(puVar1 + 0x29) = 0xff;
  *puVar1 = 0xffff;
  *(undefined *)(puVar1 + 1) = 0xff;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[10] = 0xffff;
  *(undefined *)(puVar1 + 0xb) = 0xff;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x14] = 0xffff;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0;
  puVar1[0x1e] = 0xffff;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x22) = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0;
  puVar1[0x28] = 0xffff;
  *(undefined4 *)(puVar1 + 0x2a) = 0;
  *(undefined4 *)(puVar1 + 0x2c) = 0;
  puVar1[0x30] = puVar1[0x30] & 0xf800 | 0xff;
  puVar1[0x32] = 0xffff;
  *(undefined *)(puVar1 + 0x33) = 0xff;
  *(undefined4 *)(puVar1 + 0x2e) = 0;
  puVar1[0x3a] = puVar1[0x3a] & 0xf800 | 0xff;
  puVar1[0x3c] = 0xffff;
  *(undefined *)(puVar1 + 0x3d) = 0xff;
  *(undefined4 *)(puVar1 + 0x40) = 0;
  *(undefined4 *)(puVar1 + 0x42) = 0;
  *(undefined4 *)(puVar1 + 0x34) = 0;
  puVar1[0x44] = puVar1[0x44] & 0xf800 | 0xff;
  puVar1[0x46] = 0xffff;
  *(undefined *)(puVar1 + 0x47) = 0xff;
  *(undefined4 *)(puVar1 + 0x48) = 0;
  *(undefined4 *)(puVar1 + 0x4a) = 0;
  *(undefined4 *)(puVar1 + 0x4c) = 0;
  *(undefined4 *)(puVar1 + 0x36) = 0;
  *(undefined4 *)(puVar1 + 0x38) = 0;
  *(undefined4 *)(puVar1 + 0x3e) = 0;
  puVar1[0x4e] = puVar1[0x4e] & 0xf800 | 0xff;
  iVar2 = FUN_0002e2d0(DAT_0002c550,DAT_0002c548,0x280,DAT_0002c54c,1,8,0x50);
  if (iVar2 != 0) {
    iVar2 = 3;
  }
  return iVar2;
}


/* ---- FUN_0002c554 @ 0002c554 ---- */

void FUN_0002c554(void)

{
  FUN_0002c408();
  return;
}


/* ---- FUN_0002c55c @ 0002c55c ---- */

int FUN_0002c55c(uint param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  int local_30;
  int local_2c;
  
  uVar2 = DAT_0002c7e8;
  puVar1 = DAT_0002c7e4;
  if (*DAT_0002c7e4 == param_1) {
    iVar7 = 0;
  }
  else if (DAT_0002c7e4[10] == param_1) {
    iVar7 = 1;
  }
  else if (DAT_0002c7e4[0x14] == param_1) {
    iVar7 = 2;
  }
  else if (DAT_0002c7e4[0x1e] == param_1) {
    iVar7 = 3;
  }
  else if (DAT_0002c7e4[0x28] == param_1) {
    iVar7 = 4;
  }
  else if (DAT_0002c7e4[0x32] == param_1) {
    iVar7 = 5;
  }
  else if (DAT_0002c7e4[0x3c] == param_1) {
    iVar7 = 6;
  }
  else {
    if (DAT_0002c7e4[0x46] != param_1) {
LAB_0002c5b4:
      local_2c = FUN_0002c418(param_1);
      if ((local_2c != 0) && (local_2c != 7)) {
        local_2c = 3;
      }
      return local_2c;
    }
    iVar7 = 7;
  }
  iVar4 = 7;
  local_2c = 0;
  puVar3 = DAT_0002c7e4 + iVar7 * 10;
  puVar11 = DAT_0002c7e4 + 10;
  puVar12 = DAT_0002c7e4 + 0x32;
  if (*DAT_0002c7e4 != param_1) goto LAB_0002c602;
LAB_0002c6e6:
  cVar6 = *(char *)(puVar3 + 1);
  puVar10 = puVar1;
  if (*(char *)(puVar1 + 1) != cVar6) {
    if (puVar1[10] == param_1) goto LAB_0002c856;
    if (puVar1[0x14] != param_1) goto LAB_0002c700;
    goto LAB_0002c87c;
  }
LAB_0002c7f8:
  if (*(int *)(puVar10 + 2) != 0) {
    iVar7 = FUN_0002c320();
    local_30 = 3;
    if (iVar7 != 0) goto LAB_0002c802;
  }
  local_30 = 0;
LAB_0002c802:
  uVar9 = 0;
  if (*(int *)(puVar10 + 6) != 0) {
    do {
      FUN_0002e3e8(uVar2,*(byte *)(puVar10 + 8) + uVar9 & 0xff);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(puVar10 + 6));
  }
  *puVar10 = 0xffff;
  *(undefined *)(puVar10 + 1) = 0xff;
  *(undefined4 *)(puVar10 + 2) = 0;
  *(undefined4 *)(puVar10 + 4) = 0;
  *(undefined4 *)(puVar10 + 6) = 0;
  puVar10[8] = puVar10[8] & 0xf800 | 0xff;
  if (local_30 != 0) {
    local_2c = 3;
  }
LAB_0002c642:
  do {
    iVar7 = iVar4 + -6;
    if (iVar4 == 0xe) {
LAB_0002c6bc:
      if (local_2c != 0) {
        return local_2c;
      }
      goto LAB_0002c5b4;
    }
    if (*puVar11 != param_1) {
      iVar7 = iVar4 + -5;
      if (iVar4 == 0xd) goto LAB_0002c6bc;
      if (puVar11[10] != param_1) {
        iVar7 = iVar4 + -4;
        if (iVar4 == 0xc) goto LAB_0002c6bc;
        if (puVar11[0x14] != param_1) {
          iVar7 = iVar4 + -3;
          if (iVar4 == 0xb) goto LAB_0002c6bc;
          if (puVar11[0x1e] != param_1) {
            iVar7 = iVar4 + -2;
            if (iVar4 == 10) goto LAB_0002c6bc;
            if (*puVar12 != param_1) {
              iVar7 = iVar4 + -1;
              if (iVar4 == 9) goto LAB_0002c6bc;
              if (puVar12[10] != param_1) {
                if ((iVar4 != 7) || (puVar12[0x14] != param_1)) goto LAB_0002c6bc;
                iVar7 = 7;
              }
            }
          }
        }
      }
    }
    iVar4 = iVar4 + 1;
    puVar3 = puVar1 + iVar7 * 10;
    puVar11 = puVar11 + 10;
    puVar12 = puVar12 + 10;
    if (*puVar1 == param_1) goto LAB_0002c6e6;
LAB_0002c602:
    if (puVar1[10] == param_1) {
      cVar6 = *(char *)(puVar3 + 1);
      if (*(char *)(puVar1 + 0xb) != cVar6) {
LAB_0002c856:
        if (*(char *)(puVar1 + 0xb) == cVar6) goto LAB_0002c7f4;
        if (puVar1[0x14] == param_1) {
          iVar7 = 2;
          goto LAB_0002c772;
        }
        goto LAB_0002c740;
      }
LAB_0002c7f4:
      puVar10 = puVar1 + 10;
      goto LAB_0002c7f8;
    }
    if (puVar1[0x14] == param_1) {
      puVar10 = puVar1 + 0x14;
      goto LAB_0002c86c;
    }
    if (puVar1[0x1e] == param_1) {
      puVar10 = puVar1 + 0x1e;
      goto LAB_0002c86c;
    }
    if (puVar1[0x28] == param_1) {
      puVar10 = puVar1 + 0x28;
      goto LAB_0002c86c;
    }
    if (puVar1[0x32] == param_1) {
      puVar10 = puVar1 + 0x32;
      goto LAB_0002c86c;
    }
    if (puVar1[0x3c] == param_1) {
      puVar10 = puVar1 + 0x3c;
      goto LAB_0002c86c;
    }
    if (puVar1[0x46] == param_1) {
      puVar10 = puVar1 + 0x46;
LAB_0002c86c:
      cVar6 = *(char *)(puVar3 + 1);
      if (*(char *)(puVar10 + 1) == cVar6) goto LAB_0002c7f8;
      if (puVar1[0x14] == param_1) {
LAB_0002c87c:
        iVar7 = 2;
        if (*(char *)(puVar1 + 0x15) == cVar6) {
          puVar10 = puVar1 + 0x14;
          goto LAB_0002c7f8;
        }
      }
      else {
LAB_0002c700:
        if (puVar1[0x1e] == param_1) {
          iVar7 = 3;
        }
        else if (puVar1[0x28] == param_1) {
          iVar7 = 4;
        }
        else if (puVar1[0x32] == param_1) {
          iVar7 = 5;
        }
        else if (puVar1[0x3c] == param_1) {
          iVar7 = 6;
        }
        else {
          if (puVar1[0x46] != param_1) goto LAB_0002c642;
          iVar7 = 7;
        }
        puVar10 = puVar1 + iVar7 * 10;
        if (*(char *)(puVar1 + iVar7 * 10 + 1) == cVar6) goto LAB_0002c7f8;
LAB_0002c740:
        if (puVar1[0x1e] == param_1) {
          iVar7 = 3;
        }
        else if (puVar1[0x28] == param_1) {
          iVar7 = 4;
        }
        else if (puVar1[0x32] == param_1) {
          iVar7 = 5;
        }
        else if (puVar1[0x3c] == param_1) {
          iVar7 = 6;
        }
        else {
          if (puVar1[0x46] != param_1) goto LAB_0002c642;
          iVar7 = 7;
        }
      }
LAB_0002c772:
      iVar5 = 9;
      puVar3 = puVar1 + 0x1e;
      puVar8 = puVar1 + 0x46;
      do {
        puVar10 = puVar1 + iVar7 * 10;
        if (*(char *)(puVar1 + iVar7 * 10 + 1) == cVar6) goto LAB_0002c7f8;
        iVar7 = iVar5 + -6;
        if (iVar5 == 0xe) break;
        if (*puVar3 != param_1) {
          iVar7 = iVar5 + -5;
          if (iVar5 == 0xd) break;
          if (puVar3[10] != param_1) {
            iVar7 = iVar5 + -4;
            if (iVar5 == 0xc) break;
            if (puVar3[0x14] != param_1) {
              iVar7 = iVar5 + -3;
              if (iVar5 == 0xb) break;
              if (puVar3[0x1e] != param_1) {
                if ((iVar5 != 9) || (*puVar8 != param_1)) break;
                iVar7 = 7;
              }
            }
          }
        }
        iVar5 = iVar5 + 1;
        puVar3 = puVar3 + 10;
        puVar8 = puVar8 + 10;
      } while( true );
    }
  } while( true );
}


/* ---- FUN_0002c8ec @ 0002c8ec ---- */

void FUN_0002c8ec(void)

{
  FUN_0002c1fc();
  return;
}


/* ---- FUN_0002c8f8 @ 0002c8f8 ---- */

undefined4 FUN_0002c8f8(uint param_1,uint param_2,uint param_3,short *param_4)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ushort *puVar9;
  uint uVar10;
  ushort *puVar11;
  undefined4 uVar12;
  int local_2c;
  
  if (param_4 == (short *)0x0) {
    return 0xe;
  }
  if (((1 < param_2 - 7) || (7 < param_3 - 1)) ||
     (local_2c = FUN_0002c430(), uVar12 = DAT_0002cde0, uVar7 = DAT_0002cb20, puVar4 = DAT_0002cb18,
     local_2c == 0)) {
    return 7;
  }
  if (*DAT_0002cb18 == param_1) {
    puVar11 = DAT_0002cb18;
    if (*(byte *)(DAT_0002cb18 + 1) != param_2) {
      if (DAT_0002cb18[10] == param_1) goto LAB_0002ccec;
LAB_0002c9e6:
      if (DAT_0002cb18[0x14] == param_1) {
        iVar6 = 2;
        if (*(byte *)(DAT_0002cb18 + 0x15) == param_2) {
          puVar11 = DAT_0002cb18 + 0x14;
        }
        else {
LAB_0002ca5e:
          puVar11 = DAT_0002cb18 + iVar6 * 10;
          iVar6 = 9;
          puVar9 = DAT_0002cb18 + 0x1e;
          puVar5 = DAT_0002cb18 + 0x46;
          bVar1 = *(byte *)(puVar11 + 1);
          while (bVar1 != param_2) {
            iVar8 = iVar6 + -6;
            if (iVar6 == 0xe) goto LAB_0002c974;
            if (*puVar9 != param_1) {
              iVar8 = iVar6 + -5;
              if (iVar6 == 0xd) goto LAB_0002c974;
              if (puVar9[10] != param_1) {
                iVar8 = iVar6 + -4;
                if (iVar6 == 0xc) goto LAB_0002c974;
                if (puVar9[0x14] != param_1) {
                  iVar8 = iVar6 + -3;
                  if (iVar6 == 0xb) goto LAB_0002c974;
                  if (puVar9[0x1e] != param_1) {
                    if ((iVar6 != 9) || (*puVar5 != param_1)) goto LAB_0002c974;
                    iVar8 = 7;
                  }
                }
              }
            }
            puVar11 = DAT_0002cb18 + iVar8 * 10;
            iVar6 = iVar6 + 1;
            puVar9 = puVar9 + 10;
            puVar5 = puVar5 + 10;
            bVar1 = *(byte *)(puVar11 + 1);
          }
        }
      }
      else {
        if (DAT_0002cb18[0x1e] == param_1) {
          iVar6 = 3;
        }
        else if (DAT_0002cb18[0x28] == param_1) {
          iVar6 = 4;
        }
        else if (DAT_0002cb18[0x32] == param_1) {
          iVar6 = 5;
        }
        else if (DAT_0002cb18[0x3c] == param_1) {
          iVar6 = 6;
        }
        else {
          if (DAT_0002cb18[0x46] != param_1) goto LAB_0002c974;
          iVar6 = 7;
        }
        puVar11 = DAT_0002cb18 + iVar6 * 10;
        if (*(byte *)(DAT_0002cb18 + iVar6 * 10 + 1) != param_2) {
LAB_0002ca2c:
          if (DAT_0002cb18[0x1e] == param_1) {
            iVar6 = 3;
          }
          else if (DAT_0002cb18[0x28] == param_1) {
            iVar6 = 4;
          }
          else if (DAT_0002cb18[0x32] == param_1) {
            iVar6 = 5;
          }
          else if (DAT_0002cb18[0x3c] == param_1) {
            iVar6 = 6;
          }
          else {
            if (DAT_0002cb18[0x46] != param_1) goto LAB_0002c974;
            iVar6 = 7;
          }
          goto LAB_0002ca5e;
        }
      }
    }
LAB_0002cad2:
    uVar10 = *(uint *)(puVar11 + 6);
    if (param_3 <= uVar10) {
      if (param_3 < uVar10) {
        uVar10 = param_3 & 0xff;
        do {
          FUN_0002e3e8(uVar12,uVar10 + *(byte *)(puVar11 + 8) & 0xff);
          uVar10 = uVar10 + 1 & 0xff;
        } while (uVar10 < *(uint *)(puVar11 + 6));
      }
      goto LAB_0002cc4c;
    }
    if (uVar10 != 0) {
      uVar10 = 0;
      do {
        FUN_0002e3e8(uVar7,uVar10 + *(byte *)(puVar11 + 8) & 0xff);
        uVar10 = uVar10 + 1 & 0xff;
      } while (uVar10 < *(uint *)(puVar11 + 6));
    }
    *puVar11 = 0xffff;
    *(undefined *)(puVar11 + 1) = 0xff;
    *(undefined4 *)(puVar11 + 2) = 0;
    *(undefined4 *)(puVar11 + 4) = 0;
    *(undefined4 *)(puVar11 + 6) = 0;
    puVar11[8] = puVar11[8] & 0xf800 | 0xff;
  }
  else {
    if (DAT_0002cb18[10] == param_1) {
      if (*(byte *)(DAT_0002cb18 + 0xb) == param_2) {
LAB_0002cd1c:
        puVar11 = DAT_0002cb18 + 10;
        goto LAB_0002cad2;
      }
LAB_0002ccec:
      if (*(byte *)(DAT_0002cb18 + 0xb) == param_2) goto LAB_0002cd1c;
      if (DAT_0002cb18[0x14] != param_1) goto LAB_0002ca2c;
      iVar6 = 2;
      goto LAB_0002ca5e;
    }
    if (DAT_0002cb18[0x14] == param_1) {
      iVar6 = 2;
LAB_0002cd24:
      puVar11 = DAT_0002cb18 + iVar6 * 10;
      if (*(byte *)(puVar11 + 1) != param_2) goto LAB_0002c9e6;
      goto LAB_0002cad2;
    }
    if (DAT_0002cb18[0x1e] == param_1) {
      iVar6 = 3;
      goto LAB_0002cd24;
    }
    if (DAT_0002cb18[0x28] == param_1) {
      iVar6 = 4;
      goto LAB_0002cd24;
    }
    if (DAT_0002cb18[0x32] == param_1) {
      iVar6 = 5;
      goto LAB_0002cd24;
    }
    if (DAT_0002cb18[0x3c] == param_1) {
      iVar6 = 6;
      goto LAB_0002cd24;
    }
    if (DAT_0002cb18[0x46] == param_1) {
      iVar6 = 7;
      goto LAB_0002cd24;
    }
  }
LAB_0002c974:
  if (*puVar4 == DAT_0002cb1c) {
    puVar11 = puVar4;
    if (*(char *)(puVar4 + 1) != -1) {
      if ((uint)puVar4[10] == (uint)*puVar4) {
LAB_0002cd02:
        puVar11 = DAT_0002cde4;
        if (*(char *)(puVar4 + 0xb) != -1) {
          if (puVar4[0x14] == DAT_0002cddc) {
            iVar6 = 2;
          }
          else {
LAB_0002cb7e:
            if (puVar4[0x1e] == DAT_0002cddc) {
              iVar6 = 3;
            }
            else if (puVar4[0x28] == DAT_0002cddc) {
              iVar6 = 4;
            }
            else if (puVar4[0x32] == DAT_0002cddc) {
              iVar6 = 5;
            }
            else if (puVar4[0x3c] == DAT_0002cddc) {
              iVar6 = 6;
            }
            else {
              if (puVar4[0x46] != DAT_0002cddc) {
                return 0x11;
              }
              iVar6 = 7;
            }
          }
LAB_0002cbb4:
          puVar11 = puVar4 + iVar6 * 10;
          iVar6 = 9;
          puVar9 = puVar4 + 0x1e;
          puVar5 = puVar4 + 0x46;
          cVar2 = *(char *)(puVar11 + 1);
          while (cVar2 != -1) {
            iVar8 = iVar6 + -6;
            if (iVar6 == 0xe) {
              return 0x11;
            }
            if (*puVar9 != DAT_0002cddc) {
              iVar8 = iVar6 + -5;
              if (iVar6 == 0xd) {
                return 0x11;
              }
              if (puVar9[10] != DAT_0002cddc) {
                iVar8 = iVar6 + -4;
                if (iVar6 == 0xc) {
                  return 0x11;
                }
                if (puVar9[0x14] != DAT_0002cddc) {
                  iVar8 = iVar6 + -3;
                  if (iVar6 == 0xb) {
                    return 0x11;
                  }
                  if (puVar9[0x1e] != DAT_0002cddc) {
                    if (iVar6 != 9) {
                      return 0x11;
                    }
                    if (*puVar5 != DAT_0002cddc) {
                      return 0x11;
                    }
                    iVar8 = 7;
                  }
                }
              }
            }
            puVar11 = puVar4 + iVar8 * 10;
            iVar6 = iVar6 + 1;
            puVar9 = puVar9 + 10;
            puVar5 = puVar5 + 10;
            cVar2 = *(char *)(puVar11 + 1);
          }
        }
      }
      else {
LAB_0002cb34:
        if (puVar4[0x14] == DAT_0002cddc) {
          iVar6 = 2;
          if (*(char *)(puVar4 + 0x15) != -1) goto LAB_0002cbb4;
          puVar11 = puVar4 + 0x14;
        }
        else {
          if (puVar4[0x1e] == DAT_0002cddc) {
            iVar6 = 3;
          }
          else if (puVar4[0x28] == DAT_0002cddc) {
            iVar6 = 4;
          }
          else if (puVar4[0x32] == DAT_0002cddc) {
            iVar6 = 5;
          }
          else if (puVar4[0x3c] == DAT_0002cddc) {
            iVar6 = 6;
          }
          else {
            if (puVar4[0x46] != DAT_0002cddc) {
              return 0x11;
            }
            iVar6 = 7;
          }
          puVar11 = puVar4 + iVar6 * 10;
          if (*(char *)(puVar4 + iVar6 * 10 + 1) != -1) goto LAB_0002cb7e;
        }
      }
    }
  }
  else if (puVar4[10] == DAT_0002cb1c) {
    if (*(char *)(puVar4 + 0xb) != -1) goto LAB_0002cd02;
    puVar11 = puVar4 + 10;
  }
  else {
    if (puVar4[0x14] == DAT_0002cb1c) {
      iVar6 = 2;
    }
    else if (puVar4[0x1e] == DAT_0002cb1c) {
      iVar6 = 3;
    }
    else if (puVar4[0x28] == DAT_0002cb1c) {
      iVar6 = 4;
    }
    else if (puVar4[0x32] == DAT_0002cb1c) {
      iVar6 = 5;
    }
    else if (puVar4[0x3c] == DAT_0002cb1c) {
      iVar6 = 6;
    }
    else {
      if (puVar4[0x46] != DAT_0002cb1c) {
        return 0x11;
      }
      iVar6 = 7;
    }
    puVar11 = puVar4 + iVar6 * 10;
    if (*(char *)(puVar4 + iVar6 * 10 + 1) != -1) goto LAB_0002cb34;
  }
  *puVar11 = (ushort)param_1;
  *(char *)(puVar11 + 1) = (char)param_2;
  uVar12 = DAT_0002cde0;
LAB_0002cc4c:
  uVar10 = (uint)*(byte *)(puVar11 + 8);
  if (uVar10 == 0xff) {
    uVar10 = FUN_0002e31c(uVar12,param_3);
    *(char *)(puVar11 + 8) = (char)uVar10;
    if (uVar10 == 0xff) {
      *puVar11 = 0xffff;
      *(undefined *)(puVar11 + 1) = 0xff;
      *(undefined4 *)(puVar11 + 2) = 0;
      *(undefined4 *)(puVar11 + 4) = 0;
      *(undefined4 *)(puVar11 + 6) = 0;
      puVar11[8] = puVar11[8] & 0xf800 | 0xff;
      return 0x11;
    }
  }
  else {
    local_2c = 0;
  }
  *(uint *)(puVar11 + 6) = param_3;
  iVar6 = FUN_0002e3b4(uVar12,uVar10);
  if (iVar6 == 0) {
    uVar7 = 3;
  }
  else {
    *(int *)(param_4 + 2) = iVar6;
    *(char *)(param_4 + 1) = (char)param_2;
    sVar3 = (short)((param_3 * 0x50 + 3 & 0xffff) >> 2);
    *param_4 = sVar3;
    uVar7 = 0;
    if ((local_2c != 0) && (param_2 == 8)) {
      *(short *)(iVar6 + 4) = sVar3 * 4 + -6;
    }
  }
  return uVar7;
}


/* ---- FUN_0002cde8 @ 0002cde8 ---- */

undefined4 FUN_0002cde8(uint param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 uVar8;
  ushort *puVar9;
  
  if (*DAT_0002d000 == param_1) {
    puVar7 = DAT_0002d000;
    if (*(byte *)(DAT_0002d000 + 1) != param_2) {
      if (DAT_0002d000[10] == param_1) goto LAB_0002ce94;
LAB_0002ce44:
      if (DAT_0002d000[0x14] == param_1) {
        iVar3 = 2;
        if (*(byte *)(DAT_0002d000 + 0x15) == param_2) {
          puVar7 = DAT_0002d000 + 0x14;
        }
        else {
LAB_0002ced6:
          puVar7 = DAT_0002d000 + iVar3 * 10;
          iVar3 = 9;
          puVar4 = DAT_0002d000 + 0x1e;
          puVar9 = DAT_0002d000 + 0x46;
          bVar1 = *(byte *)(puVar7 + 1);
          while (bVar1 != param_2) {
            iVar6 = iVar3 + -6;
            if (iVar3 == 0xe) {
              return 5;
            }
            if (*puVar4 != param_1) {
              iVar6 = iVar3 + -5;
              if (iVar3 == 0xd) {
                return 5;
              }
              if (puVar4[10] != param_1) {
                iVar6 = iVar3 + -4;
                if (iVar3 == 0xc) {
                  return 5;
                }
                if (puVar4[0x14] != param_1) {
                  iVar6 = iVar3 + -3;
                  if (iVar3 == 0xb) {
                    return 5;
                  }
                  if (puVar4[0x1e] != param_1) {
                    if (iVar3 != 9) {
                      return 5;
                    }
                    if (*puVar9 != param_1) {
                      return 5;
                    }
                    iVar6 = 7;
                  }
                }
              }
            }
            puVar7 = DAT_0002d000 + iVar6 * 10;
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 10;
            puVar9 = puVar9 + 10;
            bVar1 = *(byte *)(puVar7 + 1);
          }
        }
      }
      else {
        if (DAT_0002d000[0x1e] == param_1) {
          iVar3 = 3;
        }
        else if (DAT_0002d000[0x28] == param_1) {
          iVar3 = 4;
        }
        else if (DAT_0002d000[0x32] == param_1) {
          iVar3 = 5;
        }
        else if (DAT_0002d000[0x3c] == param_1) {
          iVar3 = 6;
        }
        else {
          if (DAT_0002d000[0x46] != param_1) {
            return 5;
          }
          iVar3 = 7;
        }
        puVar7 = DAT_0002d000 + iVar3 * 10;
        if (*(byte *)(puVar7 + 1) != param_2) {
LAB_0002cea4:
          if (DAT_0002d000[0x1e] == param_1) {
            iVar3 = 3;
          }
          else if (DAT_0002d000[0x28] == param_1) {
            iVar3 = 4;
          }
          else if (DAT_0002d000[0x32] == param_1) {
            iVar3 = 5;
          }
          else if (DAT_0002d000[0x3c] == param_1) {
            iVar3 = 6;
          }
          else {
            if (DAT_0002d000[0x46] != param_1) {
              return 5;
            }
            iVar3 = 7;
          }
          goto LAB_0002ced6;
        }
      }
    }
  }
  else if (DAT_0002d000[10] == param_1) {
    if (*(byte *)(DAT_0002d000 + 0xb) != param_2) {
LAB_0002ce94:
      if (*(byte *)(DAT_0002d000 + 0xb) != param_2) {
        if (DAT_0002d000[0x14] != param_1) goto LAB_0002cea4;
        iVar3 = 2;
        goto LAB_0002ced6;
      }
    }
    puVar7 = DAT_0002d000 + 10;
  }
  else {
    if (DAT_0002d000[0x14] == param_1) {
      iVar3 = 2;
    }
    else if (DAT_0002d000[0x1e] == param_1) {
      iVar3 = 3;
    }
    else if (DAT_0002d000[0x28] == param_1) {
      iVar3 = 4;
    }
    else if (DAT_0002d000[0x32] == param_1) {
      iVar3 = 5;
    }
    else if (DAT_0002d000[0x3c] == param_1) {
      iVar3 = 6;
    }
    else {
      if (DAT_0002d000[0x46] != param_1) {
        return 5;
      }
      iVar3 = 7;
    }
    puVar7 = DAT_0002d000 + iVar3 * 10;
    if (*(byte *)(DAT_0002d000 + iVar3 * 10 + 1) != param_2) goto LAB_0002ce44;
  }
  if (*(int *)(puVar7 + 2) != 0) {
    iVar3 = FUN_0002c320();
    uVar8 = 3;
    if (iVar3 != 0) goto LAB_0002cf66;
  }
  uVar8 = 0;
LAB_0002cf66:
  uVar2 = DAT_0002d004;
  if (*(int *)(puVar7 + 6) != 0) {
    uVar5 = 0;
    do {
      FUN_0002e3e8(uVar2,*(byte *)(puVar7 + 8) + uVar5 & 0xff);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(puVar7 + 6));
  }
  *puVar7 = 0xffff;
  *(undefined *)(puVar7 + 1) = 0xff;
  *(undefined4 *)(puVar7 + 2) = 0;
  *(undefined4 *)(puVar7 + 4) = 0;
  *(undefined4 *)(puVar7 + 6) = 0;
  puVar7[8] = puVar7[8] & 0xf800 | 0xff;
  return uVar8;
}


/* ---- FUN_0002d008 @ 0002d008 ---- */

int FUN_0002d008(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined2 local_20;
  undefined local_1e;
  int local_1c;
  
  if (1 < param_2 - 7) {
    return 7;
  }
  if (*DAT_0002d22c == param_1) {
    puVar4 = DAT_0002d22c;
    if (*(byte *)(DAT_0002d22c + 1) == param_2) goto LAB_0002d18e;
    if (DAT_0002d22c[10] == param_1) goto LAB_0002d0c4;
LAB_0002d074:
    if (DAT_0002d22c[0x14] == param_1) {
      iVar3 = 2;
      if (*(byte *)(DAT_0002d22c + 0x15) == param_2) {
        puVar4 = DAT_0002d22c + 0x14;
        goto LAB_0002d18e;
      }
    }
    else {
      if (DAT_0002d22c[0x1e] == param_1) {
        iVar3 = 3;
      }
      else if (DAT_0002d22c[0x28] == param_1) {
        iVar3 = 4;
      }
      else if (DAT_0002d22c[0x32] == param_1) {
        iVar3 = 5;
      }
      else if (DAT_0002d22c[0x3c] == param_1) {
        iVar3 = 6;
      }
      else {
        if (DAT_0002d22c[0x46] != param_1) {
          return 5;
        }
        iVar3 = 7;
      }
      puVar4 = DAT_0002d22c + iVar3 * 10;
      if (*(byte *)(puVar4 + 1) == param_2) goto LAB_0002d18e;
LAB_0002d0d4:
      if (DAT_0002d22c[0x1e] == param_1) {
        iVar3 = 3;
      }
      else if (DAT_0002d22c[0x28] == param_1) {
        iVar3 = 4;
      }
      else if (DAT_0002d22c[0x32] == param_1) {
        iVar3 = 5;
      }
      else if (DAT_0002d22c[0x3c] == param_1) {
        iVar3 = 6;
      }
      else {
        if (DAT_0002d22c[0x46] != param_1) {
          return 5;
        }
        iVar3 = 7;
      }
    }
  }
  else {
    if (DAT_0002d22c[10] != param_1) {
      if (DAT_0002d22c[0x14] == param_1) {
        iVar3 = 2;
      }
      else if (DAT_0002d22c[0x1e] == param_1) {
        iVar3 = 3;
      }
      else if (DAT_0002d22c[0x28] == param_1) {
        iVar3 = 4;
      }
      else if (DAT_0002d22c[0x32] == param_1) {
        iVar3 = 5;
      }
      else if (DAT_0002d22c[0x3c] == param_1) {
        iVar3 = 6;
      }
      else {
        if (DAT_0002d22c[0x46] != param_1) {
          return 5;
        }
        iVar3 = 7;
      }
      puVar4 = DAT_0002d22c + iVar3 * 10;
      if (*(byte *)(DAT_0002d22c + iVar3 * 10 + 1) == param_2) goto LAB_0002d18e;
      goto LAB_0002d074;
    }
    if (*(byte *)(DAT_0002d22c + 0xb) == param_2) {
LAB_0002d1da:
      puVar4 = DAT_0002d22c + 10;
      goto LAB_0002d18e;
    }
LAB_0002d0c4:
    if (*(byte *)(DAT_0002d22c + 0xb) == param_2) goto LAB_0002d1da;
    if (DAT_0002d22c[0x14] != param_1) goto LAB_0002d0d4;
    iVar3 = 2;
  }
  puVar4 = DAT_0002d22c + iVar3 * 10;
  iVar3 = 9;
  puVar5 = DAT_0002d22c + 0x1e;
  puVar6 = DAT_0002d22c + 0x46;
  bVar1 = *(byte *)(puVar4 + 1);
  while (bVar1 != param_2) {
    iVar2 = iVar3 + -6;
    if (iVar3 == 0xe) {
      return 5;
    }
    if (*puVar5 != param_1) {
      iVar2 = iVar3 + -5;
      if (iVar3 == 0xd) {
        return 5;
      }
      if (puVar5[10] != param_1) {
        iVar2 = iVar3 + -4;
        if (iVar3 == 0xc) {
          return 5;
        }
        if (puVar5[0x14] != param_1) {
          iVar2 = iVar3 + -3;
          if (iVar3 == 0xb) {
            return 5;
          }
          if (puVar5[0x1e] != param_1) {
            if (iVar3 != 9) {
              return 5;
            }
            if (*puVar6 != param_1) {
              return 5;
            }
            iVar2 = 7;
          }
        }
      }
    }
    puVar4 = DAT_0002d22c + iVar2 * 10;
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 10;
    puVar6 = puVar6 + 10;
    bVar1 = *(byte *)(puVar4 + 1);
  }
LAB_0002d18e:
  if (*(int *)(puVar4 + 2) == 0) {
    iVar3 = FUN_0002e3b4(DAT_0002d230,*(undefined *)(puVar4 + 8));
    FUN_0001b1fc(&local_20,0,8);
    local_1e = (undefined)param_2;
    if (iVar3 != 0) {
      if (param_2 == 8) {
        local_20 = (undefined2)(*(ushort *)(iVar3 + 4) + 9 >> 2);
      }
      else {
        local_20 = 0x14;
      }
      local_1c = iVar3;
      iVar3 = FUN_0002c2f0(&local_20,puVar4 + 2);
      if (iVar3 != 9) {
        return iVar3;
      }
    }
    iVar3 = 3;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}


/* ---- FUN_0002d234 @ 0002d234 ---- */

undefined4 FUN_0002d234(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined2 local_20;
  undefined local_1e;
  int local_1c;
  
  if (param_2 - 7 < 2) {
    FUN_0001b1fc(&local_20,0,8);
    if (*DAT_0002d4c0 == param_1) {
      puVar6 = DAT_0002d4c0;
      if (*(byte *)(DAT_0002d4c0 + 1) != param_2) {
        if (DAT_0002d4c0[10] == param_1) goto LAB_0002d310;
LAB_0002d2c0:
        if (DAT_0002d4c0[0x14] == param_1) {
          iVar5 = 2;
          if (*(byte *)(DAT_0002d4c0 + 0x15) == param_2) {
            puVar6 = DAT_0002d4c0 + 0x14;
          }
          else {
LAB_0002d352:
            puVar6 = DAT_0002d4c0 + iVar5 * 10;
            iVar5 = 9;
            puVar4 = DAT_0002d4c0 + 0x1e;
            puVar7 = DAT_0002d4c0 + 0x46;
            bVar1 = *(byte *)(puVar6 + 1);
            while (bVar1 != param_2) {
              iVar2 = iVar5 + -6;
              if (iVar5 == 0xe) {
                return 5;
              }
              if (*puVar4 != param_1) {
                iVar2 = iVar5 + -5;
                if (iVar5 == 0xd) {
                  return 5;
                }
                if (puVar4[10] != param_1) {
                  iVar2 = iVar5 + -4;
                  if (iVar5 == 0xc) {
                    return 5;
                  }
                  if (puVar4[0x14] != param_1) {
                    iVar2 = iVar5 + -3;
                    if (iVar5 == 0xb) {
                      return 5;
                    }
                    if (puVar4[0x1e] != param_1) {
                      if (iVar5 != 9) {
                        return 5;
                      }
                      if (*puVar7 != param_1) {
                        return 5;
                      }
                      iVar2 = 7;
                    }
                  }
                }
              }
              puVar6 = DAT_0002d4c0 + iVar2 * 10;
              iVar5 = iVar5 + 1;
              puVar4 = puVar4 + 10;
              puVar7 = puVar7 + 10;
              bVar1 = *(byte *)(puVar6 + 1);
            }
          }
        }
        else {
          if (DAT_0002d4c0[0x1e] == param_1) {
            iVar5 = 3;
          }
          else if (DAT_0002d4c0[0x28] == param_1) {
            iVar5 = 4;
          }
          else if (DAT_0002d4c0[0x32] == param_1) {
            iVar5 = 5;
          }
          else if (DAT_0002d4c0[0x3c] == param_1) {
            iVar5 = 6;
          }
          else {
            if (DAT_0002d4c0[0x46] != param_1) {
              return 5;
            }
            iVar5 = 7;
          }
          puVar6 = DAT_0002d4c0 + iVar5 * 10;
          if (*(byte *)(puVar6 + 1) != param_2) {
LAB_0002d320:
            if (DAT_0002d4c0[0x1e] == param_1) {
              iVar5 = 3;
            }
            else if (DAT_0002d4c0[0x28] == param_1) {
              iVar5 = 4;
            }
            else if (DAT_0002d4c0[0x32] == param_1) {
              iVar5 = 5;
            }
            else if (DAT_0002d4c0[0x3c] == param_1) {
              iVar5 = 6;
            }
            else {
              if (DAT_0002d4c0[0x46] != param_1) {
                return 5;
              }
              iVar5 = 7;
            }
            goto LAB_0002d352;
          }
        }
      }
    }
    else if (DAT_0002d4c0[10] == param_1) {
      if (*(byte *)(DAT_0002d4c0 + 0xb) != param_2) {
LAB_0002d310:
        if (*(byte *)(DAT_0002d4c0 + 0xb) != param_2) {
          if (DAT_0002d4c0[0x14] != param_1) goto LAB_0002d320;
          iVar5 = 2;
          goto LAB_0002d352;
        }
      }
      puVar6 = DAT_0002d4c0 + 10;
    }
    else {
      if (DAT_0002d4c0[0x14] == param_1) {
        iVar5 = 2;
      }
      else if (DAT_0002d4c0[0x1e] == param_1) {
        iVar5 = 3;
      }
      else if (DAT_0002d4c0[0x28] == param_1) {
        iVar5 = 4;
      }
      else if (DAT_0002d4c0[0x32] == param_1) {
        iVar5 = 5;
      }
      else if (DAT_0002d4c0[0x3c] == param_1) {
        iVar5 = 6;
      }
      else {
        if (DAT_0002d4c0[0x46] != param_1) {
          return 5;
        }
        iVar5 = 7;
      }
      puVar6 = DAT_0002d4c0 + iVar5 * 10;
      if (*(byte *)(DAT_0002d4c0 + iVar5 * 10 + 1) != param_2) goto LAB_0002d2c0;
    }
    if ((int)((uint)*(byte *)((int)puVar6 + 0x11) << 0x1f) < 0) {
      return 0;
    }
    local_1e = (char)param_2;
    local_1c = FUN_0002e3b4(DAT_0002d4c4,*(undefined *)(puVar6 + 8));
    if (local_1c != 0) {
      if (param_2 == 8) {
        local_20 = (undefined2)(*(ushort *)(local_1c + 4) + 9 >> 2);
      }
      else {
        local_20 = 0x14;
      }
      local_1e = (char)param_2;
      iVar5 = FUN_0002c338(param_1,&local_20,*(undefined4 *)(puVar6 + 2),puVar6 + 4);
      if ((*(byte *)((int)puVar6 + 0x11) & 6) == 6) {
        *DAT_0002d4c8 = *DAT_0002d4c8 + -1;
      }
      if (iVar5 == 0) {
        *(byte *)((int)puVar6 + 0x11) = *(byte *)((int)puVar6 + 0x11) & 0xf8 | 1;
        return 0;
      }
      if (iVar5 == 0x11) {
        *DAT_0002d4c8 = *DAT_0002d4c8 + 1;
        *(byte *)((int)puVar6 + 0x11) = *(byte *)((int)puVar6 + 0x11) & 0xf9 | 4;
        return 0;
      }
      if (iVar5 == 0x86) {
        *DAT_0002d4c8 = *DAT_0002d4c8 + 1;
        *(byte *)((int)puVar6 + 0x11) = *(byte *)((int)puVar6 + 0x11) & 0xf9 | 2;
        return 0x86;
      }
      if (iVar5 == 7) goto LAB_0002d2ae;
    }
    uVar3 = 3;
  }
  else {
LAB_0002d2ae:
    uVar3 = 7;
  }
  return uVar3;
}


/* ---- FUN_0002d4cc @ 0002d4cc ---- */

void FUN_0002d4cc(byte *param_1)

{
  byte bVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  code *pcVar5;
  code **ppcVar6;
  code **ppcVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  undefined local_28 [2];
  short local_26;
  byte local_24;
  int local_20;
  
  FUN_0001b1fc(local_28,0,0x10);
  psVar2 = DAT_0002d7c0;
  local_26 = *(short *)(param_1 + 2);
  local_24 = param_1[4];
  if (*DAT_0002d7c0 == local_26) {
    if (*(byte *)(DAT_0002d7c0 + 1) != local_24) {
      if (DAT_0002d7c0[10] == local_26) {
LAB_0002d82e:
        if (*(byte *)(DAT_0002d7c0 + 0xb) == local_24) goto LAB_0002d8f0;
        if (DAT_0002d7c0[0x14] != local_26) goto LAB_0002d83c;
        iVar3 = 2;
LAB_0002d86e:
        psVar4 = DAT_0002d7c0 + 0x1e;
        psVar10 = DAT_0002d7c0 + 0x46;
        iVar8 = 9;
        bVar1 = *(byte *)(DAT_0002d7c0 + iVar3 * 10 + 1);
        while (bVar1 != local_24) {
          iVar3 = iVar8 + -6;
          if (iVar8 == 0xe) goto LAB_0002d534;
          if (*psVar4 != local_26) {
            iVar3 = iVar8 + -5;
            if (iVar8 == 0xd) goto LAB_0002d534;
            if (psVar4[10] != local_26) {
              iVar3 = iVar8 + -4;
              if (iVar8 == 0xc) goto LAB_0002d534;
              if (psVar4[0x14] != local_26) {
                iVar3 = iVar8 + -3;
                if (iVar8 == 0xb) goto LAB_0002d534;
                if (psVar4[0x1e] != local_26) {
                  if ((iVar8 != 9) || (*psVar10 != local_26)) goto LAB_0002d534;
                  iVar3 = 7;
                }
              }
            }
          }
          iVar8 = iVar8 + 1;
          psVar4 = psVar4 + 10;
          psVar10 = psVar10 + 10;
          bVar1 = *(byte *)(DAT_0002d7c0 + iVar3 * 10 + 1);
        }
      }
      else {
LAB_0002d7de:
        if (DAT_0002d7c0[0x14] == local_26) {
          iVar3 = 2;
          if (*(byte *)(DAT_0002d7c0 + 0x15) != local_24) goto LAB_0002d86e;
        }
        else {
          if (DAT_0002d7c0[0x1e] == local_26) {
            iVar3 = 3;
          }
          else if (DAT_0002d7c0[0x28] == local_26) {
            iVar3 = 4;
          }
          else if (DAT_0002d7c0[0x32] == local_26) {
            iVar3 = 5;
          }
          else if (DAT_0002d7c0[0x3c] == local_26) {
            iVar3 = 6;
          }
          else {
            if (DAT_0002d7c0[0x46] != local_26) goto LAB_0002d534;
            iVar3 = 7;
          }
          if (*(byte *)(DAT_0002d7c0 + iVar3 * 10 + 1) != local_24) {
LAB_0002d83c:
            if (DAT_0002d7c0[0x1e] == local_26) {
              iVar3 = 3;
            }
            else if (DAT_0002d7c0[0x28] == local_26) {
              iVar3 = 4;
            }
            else if (DAT_0002d7c0[0x32] == local_26) {
              iVar3 = 5;
            }
            else if (DAT_0002d7c0[0x3c] == local_26) {
              iVar3 = 6;
            }
            else {
              if (DAT_0002d7c0[0x46] != local_26) goto LAB_0002d534;
              iVar3 = 7;
            }
            goto LAB_0002d86e;
          }
        }
      }
    }
  }
  else {
    if (DAT_0002d7c0[10] == local_26) {
      if (*(byte *)(DAT_0002d7c0 + 0xb) != local_24) goto LAB_0002d82e;
      goto LAB_0002d8f0;
    }
    if (DAT_0002d7c0[0x14] != local_26) {
      if (DAT_0002d7c0[0x1e] == local_26) {
        iVar3 = 3;
        goto LAB_0002d994;
      }
      if (DAT_0002d7c0[0x28] == local_26) {
        iVar3 = 4;
        goto LAB_0002d994;
      }
      if (DAT_0002d7c0[0x32] == local_26) {
        iVar3 = 5;
        goto LAB_0002d994;
      }
      if (DAT_0002d7c0[0x3c] == local_26) {
        iVar3 = 6;
        goto LAB_0002d994;
      }
      if (DAT_0002d7c0[0x46] == local_26) {
        iVar3 = 7;
        goto LAB_0002d994;
      }
LAB_0002d534:
      if (*param_1 < 10) {
                    /* WARNING: Could not recover jumptable at 0x0002d540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(DAT_0002d7c4 + (uint)*param_1 * 4))();
        return;
      }
      goto LAB_0002d558;
    }
    iVar3 = 2;
LAB_0002d994:
    if (*(byte *)(DAT_0002d7c0 + iVar3 * 10 + 1) != local_24) goto LAB_0002d7de;
  }
LAB_0002d8f0:
  if (*param_1 < 10) {
                    /* WARNING: Could not recover jumptable at 0x0002d8fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_0002d9f8 + (uint)*param_1 * 4))();
    return;
  }
LAB_0002d558:
  if (*DAT_0002d7cc != 0) {
    if (((int)((uint)*(byte *)((int)DAT_0002d7c0 + 0x11) << 0x1d) < 0) &&
       (iVar3 = FUN_0002d234(*DAT_0002d7c0,*(undefined *)(DAT_0002d7c0 + 1)), iVar3 != 0)) {
      iVar8 = 0;
      iVar9 = 0;
    }
    else if (((int)((uint)*(byte *)((int)psVar2 + 0x25) << 0x1d) < 0) &&
            (iVar3 = FUN_0002d234(psVar2[10],*(undefined *)(psVar2 + 0xb)), iVar3 != 0)) {
      iVar8 = 1;
      iVar9 = 4;
    }
    else if (((int)((uint)*(byte *)((int)psVar2 + 0x39) << 0x1d) < 0) &&
            (iVar3 = FUN_0002d234(psVar2[0x14],*(undefined *)(psVar2 + 0x15)), iVar3 != 0)) {
      iVar8 = 2;
      iVar9 = 8;
    }
    else if (((int)((uint)*(byte *)((int)psVar2 + 0x4d) << 0x1d) < 0) &&
            (iVar3 = FUN_0002d234(psVar2[0x1e],*(undefined *)(psVar2 + 0x1f)), iVar3 != 0)) {
      iVar8 = 3;
      iVar9 = 0xc;
    }
    else if (((int)((uint)*(byte *)((int)psVar2 + 0x61) << 0x1d) < 0) &&
            (iVar3 = FUN_0002d234(psVar2[0x28],*(undefined *)(psVar2 + 0x29)), iVar3 != 0)) {
      iVar8 = 4;
      iVar9 = 0x10;
    }
    else if (((int)((uint)*(byte *)((int)psVar2 + 0x75) << 0x1d) < 0) &&
            (iVar3 = FUN_0002d234(psVar2[0x32],*(undefined *)(psVar2 + 0x33)), iVar3 != 0)) {
      iVar8 = 5;
      iVar9 = 0x14;
    }
    else if (((int)((uint)*(byte *)((int)psVar2 + 0x89) << 0x1d) < 0) &&
            (iVar3 = FUN_0002d234(psVar2[0x3c],*(undefined *)(psVar2 + 0x3d)), iVar3 != 0)) {
      iVar8 = 6;
      iVar9 = 0x18;
    }
    else {
      if (-1 < (int)((uint)*(byte *)((int)psVar2 + 0x9d) << 0x1d)) {
        return;
      }
      iVar3 = FUN_0002d234(psVar2[0x46],*(undefined *)(psVar2 + 0x47));
      if (iVar3 == 0) {
        return;
      }
      iVar8 = 7;
      iVar9 = 0x1c;
    }
    local_26 = psVar2[(iVar9 + iVar8) * 2];
    local_24 = *(byte *)(psVar2 + (iVar9 + iVar8) * 2 + 1);
    if (iVar3 == 0x86) {
      local_28[0] = 8;
    }
    else {
      local_28[0] = 9;
      local_20 = iVar3;
    }
    ppcVar7 = DAT_0002d7c8 + 5;
    ppcVar6 = DAT_0002d7c8;
    do {
      pcVar5 = *ppcVar6;
      ppcVar6 = ppcVar6 + 1;
      (*pcVar5)(local_28);
    } while (ppcVar7 != ppcVar6);
  }
  return;
}


/* ---- FUN_0002da08 @ 0002da08 ---- */

void FUN_0002da08(void)

{
  FUN_0002c438();
  return;
}


/* ---- FUN_0002da10 @ 0002da10 ---- */

void FUN_0002da10(void)

{
  FUN_0002c440();
  return;
}


/* ---- FUN_0002da18 @ 0002da18 ---- */

void FUN_0002da18(void)

{
  FUN_0002c1fc();
  return;
}


/* ---- FUN_0002da2c @ 0002da2c ---- */

void FUN_0002da2c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0002c338(param_1,param_2,0,param_3);
  return;
}


/* ---- FUN_0002da38 @ 0002da38 ---- */

void FUN_0002da38(void)

{
  int iVar1;
  
  iVar1 = DAT_0002da60;
  FUN_0001b1fc(DAT_0002da60,0,0x40);
  FUN_0002e418(iVar1,0x100);
  FUN_0002e418(iVar1 + 0x20,0x100);
  return;
}


/* ---- FUN_0002da64 @ 0002da64 ---- */

uint FUN_0002da64(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == DAT_0002da9c) {
    uVar2 = FUN_0002e4b0(DAT_0002daa0,0x100);
    if (uVar2 != 0x100) {
      return uVar2;
    }
  }
  else if ((param_1 < 0x100) && (iVar1 = FUN_0002e42c(DAT_0002daa0,param_1), iVar1 != 0)) {
    return param_1;
  }
  return DAT_0002da9c;
}


/* ---- FUN_0002daa4 @ 0002daa4 ---- */

int FUN_0002daa4(uint param_1)

{
  int iVar1;
  
  if (((param_1 == DAT_0002dac4) || (0xff < param_1)) ||
     (iVar1 = FUN_0002e42c(DAT_0002dac8 + 0x20,param_1), iVar1 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}


/* ---- FUN_0002dacc @ 0002dacc ---- */

void FUN_0002dacc(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_0002daec;
  if (param_1 < 0x100) {
    FUN_0002e474(DAT_0002daec,param_1);
    FUN_0002e474(iVar1 + 0x20,param_1);
  }
  return;
}


/* ---- FUN_0002daf0 @ 0002daf0 ---- */

undefined4 FUN_0002daf0(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x100) {
    uVar1 = FUN_0002e53c(DAT_0002db04);
  }
  return uVar1;
}


/* ---- FUN_0002db08 @ 0002db08 ---- */

uint FUN_0002db08(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_0002db6c;
  if (param_1 == DAT_0002db68) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1 + 1 & 0xffff;
    if (0xff < uVar3) {
      return DAT_0002db68;
    }
  }
  do {
    iVar2 = FUN_0002e53c(iVar1,uVar3);
    if (iVar2 != 0) {
      do {
        iVar2 = FUN_0002e53c(iVar1 + 0x20,uVar3);
        if (iVar2 == 0) {
          return uVar3;
        }
        do {
          uVar3 = uVar3 + 1 & 0xffff;
          if (uVar3 == 0x100) {
            return DAT_0002db68;
          }
          iVar2 = FUN_0002e53c(iVar1,uVar3);
        } while (iVar2 == 0);
      } while( true );
    }
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 != 0x100);
  return DAT_0002db68;
}


/* ---- FUN_0002db70 @ 0002db70 ---- */

uint FUN_0002db70(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == DAT_0002dbac) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1 + 1 & 0xffff;
    if (0xff < uVar2) {
      return DAT_0002dbac;
    }
  }
  iVar3 = DAT_0002dbb0 + 0x20;
  do {
    iVar1 = FUN_0002e53c(iVar3,uVar2);
    if (iVar1 != 0) {
      return uVar2;
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 != 0x100);
  return DAT_0002dbac;
}


/* ---- FUN_0002dbb4 @ 0002dbb4 ---- */

void FUN_0002dbb4(byte *param_1)

{
  undefined auStack_40 [2];
  undefined2 local_3e;
  undefined2 local_3c;
  
  FUN_0001b1fc(auStack_40,0,0x14);
  local_3c = *(undefined2 *)(param_1 + 2);
  local_3e = FUN_0002bd40();
  if (*param_1 < 10) {
                    /* WARNING: Could not recover jumptable at 0x0002dbde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_0002dd80 + (uint)*param_1 * 4))();
    return;
  }
  return;
}


/* ---- FUN_0002dda0 @ 0002dda0 ---- */

void FUN_0002dda0(byte *param_1)

{
  undefined auStack_2c [2];
  undefined2 local_2a;
  
  FUN_0001b1fc(auStack_2c,0,0x14);
  local_2a = *(undefined2 *)(param_1 + 2);
  if (0xc < *param_1) {
    FUN_0002bb04();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0002ddc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_0002defc + (uint)*param_1 * 4))();
  return;
}


/* ---- FUN_0002df14 @ 0002df14 ---- */

void FUN_0002df14(byte *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  int iVar3;
  code **ppcVar4;
  undefined auStack_24 [2];
  undefined2 local_22;
  undefined2 local_20;
  
  FUN_0001b1fc(auStack_24,0,0x14);
  local_20 = *(undefined2 *)(param_1 + 2);
  local_22 = FUN_0002bd40();
  pbVar1 = DAT_0002dfb0;
  if (*param_1 < 10) {
                    /* WARNING: Could not recover jumptable at 0x0002df3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_0002dfac + (uint)*param_1 * 4))();
    return;
  }
  if (*DAT_0002dfb0 != 0) {
    iVar3 = 0;
    ppcVar4 = DAT_0002dfb4;
    do {
      pcVar2 = *ppcVar4;
      ppcVar4 = ppcVar4 + 1;
      (*pcVar2)(auStack_24);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*pbVar1);
  }
  return;
}


/* ---- FUN_0002dfb8 @ 0002dfb8 ---- */

void FUN_0002dfb8(char *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  int iVar3;
  code **ppcVar4;
  undefined local_24 [2];
  undefined2 local_22;
  undefined2 local_20;
  
  if (*param_1 == '\0') {
    if (*DAT_0002e02c != '\0') {
      FUN_0002be64(*(undefined2 *)(param_1 + 6));
    }
  }
  else if (*param_1 == '\x01') {
    FUN_0002ae84(*(undefined2 *)(param_1 + 2),*DAT_0002e020,1);
    FUN_0001b1fc(local_24,0,0x14);
    local_22 = *(undefined2 *)(param_1 + 2);
    local_20 = FUN_0002bb04();
    pbVar1 = DAT_0002e024;
    local_24[0] = 0;
    if (*DAT_0002e024 != 0) {
      iVar3 = 0;
      ppcVar4 = DAT_0002e028;
      do {
        pcVar2 = *ppcVar4;
        ppcVar4 = ppcVar4 + 1;
        (*pcVar2)(local_24);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*pbVar1);
    }
  }
  return;
}


/* ---- FUN_0002e030 @ 0002e030 ---- */

void FUN_0002e030(undefined4 param_1)

{
  if (*DAT_0002e050 != '\0') {
    FUN_0002b664();
    FUN_0002f354(param_1);
    FUN_0002b218(param_1);
  }
  return;
}


/* ---- FUN_0002e054 @ 0002e054 ---- */

undefined4 FUN_0002e054(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = FUN_0002c18c();
  if ((((iVar3 == 0) && (iVar3 = FUN_0002c448(), iVar3 == 0)) &&
      (iVar3 = FUN_0002f2bc(), iVar3 == 0)) &&
     (((iVar3 = FUN_0002e630(), iVar3 == 0 && (iVar3 = FUN_0002b1c0(), iVar3 == 0)) &&
      ((iVar3 = FUN_0002b458(), iVar3 == 0 && (iVar3 = FUN_0002babc(), iVar3 == 0)))))) {
    *DAT_0002e0cc = 0xffff;
    puVar1 = DAT_0002e0d4;
    *DAT_0002e0d0 = 0;
    puVar2 = DAT_0002e0d8;
    *puVar1 = 0x18;
    *puVar2 = 0x18;
    iVar3 = FUN_0002ae34();
    *puVar1 = (char)iVar3;
    if (iVar3 != 0x18) {
      iVar3 = FUN_0002ae34();
      *puVar2 = (char)iVar3;
      if (iVar3 != 0x18) {
        *DAT_0002e0dc = 0;
        *DAT_0002e0e0 = 1;
        return 0;
      }
    }
  }
  return 3;
}


/* ---- FUN_0002e0e4 @ 0002e0e4 ---- */

undefined4 FUN_0002e0e4(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  pbVar2 = DAT_0002e110;
  if (*DAT_0002e10c == '\0') {
    uVar3 = 8;
  }
  else {
    bVar1 = *DAT_0002e110;
    if (bVar1 < 3) {
      *(undefined4 *)((uint)bVar1 * 4 + DAT_0002e114) = param_1;
      uVar3 = 0;
      *pbVar2 = bVar1 + 1;
    }
    else {
      uVar3 = 4;
    }
  }
  return uVar3;
}


/* ---- FUN_0002e118 @ 0002e118 ---- */

undefined4 FUN_0002e118(void)

{
  undefined4 uVar1;
  
  if (*DAT_0002e12c == '\0') {
    uVar1 = 8;
  }
  else {
    uVar1 = FUN_0002f378();
  }
  return uVar1;
}


/* ---- FUN_0002e130 @ 0002e130 ---- */

undefined4 FUN_0002e130(void)

{
  undefined4 uVar1;
  
  if (*DAT_0002e144 == '\0') {
    uVar1 = 8;
  }
  else {
    uVar1 = FUN_0002f410();
  }
  return uVar1;
}


/* ---- FUN_0002e148 @ 0002e148 ---- */

void FUN_0002e148(void)

{
  FUN_0002f3f8();
  return;
}


/* ---- FUN_0002e150 @ 0002e150 ---- */

void FUN_0002e150(void)

{
  if (*DAT_0002e160 != '\0') {
    FUN_0002b354();
  }
  return;
}


/* ---- FUN_0002e164 @ 0002e164 ---- */

undefined4 FUN_0002e164(void)

{
  undefined4 uVar1;
  
  if (*DAT_0002e178 == '\0') {
    uVar1 = 8;
  }
  else {
    uVar1 = FUN_0002bf5c();
  }
  return uVar1;
}


/* ---- FUN_0002e17c @ 0002e17c ---- */

undefined4 FUN_0002e17c(void)

{
  undefined4 uVar1;
  
  if (*DAT_0002e190 == '\0') {
    uVar1 = 8;
  }
  else {
    uVar1 = FUN_0002bf58();
  }
  return uVar1;
}


/* ---- FUN_0002e194 @ 0002e194 ---- */

undefined4 FUN_0002e194(undefined4 param_1,byte *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*DAT_0002e210 == '\0') {
    uVar4 = 8;
  }
  else if (param_2 == (byte *)0x0) {
    uVar4 = 0xe;
  }
  else {
    iVar2 = FUN_0002adc0();
    puVar1 = DAT_0002e214;
    uVar4 = DAT_0002e218;
    if (iVar2 != 0) {
      *param_2 = iVar2 == 2 | *param_2 & 0xfe;
      uVar3 = FUN_0002ae60(param_1,*puVar1);
      *param_2 = *param_2 & 0xf7 | (byte)((uVar3 & 1) << 3);
      uVar3 = FUN_0002adf4(param_1);
      *param_2 = *param_2 & 0xfd | (byte)((uVar3 & 1) << 1);
      uVar3 = FUN_0002ae08(param_1);
      *param_2 = (byte)((uVar3 & 1) << 2) | *param_2 & 0xfb;
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* ---- FUN_0002e21c @ 0002e21c ---- */

undefined4 FUN_0002e21c(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0002e234;
  if (*DAT_0002e230 != '\0') {
    uVar1 = FUN_0002da08();
  }
  return uVar1;
}


/* ---- FUN_0002e238 @ 0002e238 ---- */

undefined4 FUN_0002e238(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 local_18;
  undefined local_16;
  int local_14;
  
  if (*DAT_0002e278 == '\0') {
    uVar1 = 8;
  }
  else if (param_2 == 0) {
    uVar1 = 0xe;
  }
  else {
    FUN_0001b1fc(&local_18,0,8);
    local_18 = 0x14;
    local_16 = 7;
    local_14 = param_2;
    uVar1 = FUN_0002da18(param_1,7);
  }
  return uVar1;
}


/* ---- FUN_0002e27c @ 0002e27c ---- */

undefined4 FUN_0002e27c(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_0002e2c8;
  pcVar1 = DAT_0002e2c4;
  if (*DAT_0002e2c4 == '\0') {
    uVar5 = 8;
  }
  else {
    *DAT_0002e2cc = 1;
    for (iVar3 = FUN_0002da08(iVar2); iVar3 != iVar2; iVar3 = FUN_0002da08(iVar3)) {
      if ((*pcVar1 == '\0') || (iVar4 = FUN_0002be64(iVar3), iVar4 != 0)) {
        return 3;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


/* ---- FUN_0002e2d0 @ 0002e2d0 ---- */

undefined4
FUN_0002e2d0(int *param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6,int param_7
            )

{
  undefined4 uVar1;
  
  if ((((param_1 == (int *)0x0) || (param_2 == 0)) || (param_4 == 0)) ||
     ((param_3 <= param_6 * param_7 && param_6 * param_7 - param_3 != 0 ||
      (param_5 < param_6 + 7 >> 3)))) {
    uVar1 = 7;
  }
  else {
    uVar1 = 7;
    if ((param_6 != 0) && (param_7 != 0)) {
      *param_1 = param_2;
      param_1[1] = param_4;
      param_1[2] = param_6;
      param_1[3] = param_7;
      FUN_0002e418(param_4,param_6 & 0xffff);
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* ---- FUN_0002e31c @ 0002e31c ---- */

uint FUN_0002e31c(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((((param_1 == (int *)0x0) || (*param_1 == 0)) || (iVar1 = param_1[1], iVar1 == 0)) ||
     (param_1[2] == 0)) {
    return 0xff;
  }
  uVar4 = 0;
  uVar3 = 0xff;
  do {
    iVar1 = FUN_0002e42c(iVar1,uVar4);
    if (iVar1 == 0) {
      if (uVar3 != 0xff) {
LAB_0002e388:
        if (uVar3 < uVar4) {
          do {
            uVar3 = uVar3 + 1 & 0xff;
            uVar2 = uVar3 - 1 & 0xff;
            if ((*param_1 == 0) || (param_1[1] == 0)) goto LAB_0002e388;
          } while (uVar2 == 0xff);
          iVar1 = FUN_0002e53c(param_1[1],uVar2);
          if (iVar1 != 0) {
            FUN_0002e474(param_1[1],uVar2);
          }
          goto LAB_0002e388;
        }
      }
      uVar4 = uVar4 + 1 & 0xff;
      uVar3 = 0xff;
      if ((uint)param_1[2] <= uVar4) {
        return 0xff;
      }
    }
    else {
      if (uVar3 == 0xff) {
        uVar3 = uVar4;
      }
      if ((uVar4 - uVar3) + 1 == param_2) {
        return uVar3;
      }
      uVar4 = uVar4 + 1 & 0xff;
      if ((uint)param_1[2] <= uVar4) {
        return 0xff;
      }
    }
    iVar1 = param_1[1];
  } while( true );
}


/* ---- FUN_0002e3b4 @ 0002e3b4 ---- */

int FUN_0002e3b4(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_1[1] == 0)) ||
     ((param_2 == 0xff || (iVar1 = FUN_0002e53c(param_1[1],param_2 & 0xffff), iVar1 == 0)))) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1 + param_1[3] * param_2;
  }
  return iVar1;
}


/* ---- FUN_0002e3e8 @ 0002e3e8 ---- */

void FUN_0002e3e8(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) && (param_2 != 0xff)) {
    iVar1 = FUN_0002e53c(param_1[1],param_2 & 0xffff);
    if (iVar1 != 0) {
      FUN_0002e474(param_1[1],param_2 & 0xffff);
    }
  }
  return;
}


/* ---- FUN_0002e418 @ 0002e418 ---- */

void FUN_0002e418(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_0001b1fc(param_1,0,param_2 + 7 >> 3);
  }
  return;
}


/* ---- FUN_0002e42c @ 0002e42c ---- */

bool FUN_0002e42c(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  undefined local_11;
  
  if (param_1 == 0) {
    bVar4 = false;
  }
  else {
    uVar2 = 1 << (param_2 & 7);
    pbVar3 = (byte *)(param_1 + (param_2 >> 3));
    bVar4 = false;
    if ((uVar2 & *(byte *)(param_1 + (param_2 >> 3))) == 0) {
      local_11 = 0;
      FUN_0001bcb0(&local_11);
      bVar1 = *pbVar3;
      bVar4 = ((uint)bVar1 & uVar2 & 0xff) == 0;
      if (bVar4) {
        *pbVar3 = (byte)uVar2 | bVar1;
      }
      FUN_0001bcf0(local_11);
    }
  }
  return bVar4;
}


/* ---- FUN_0002e474 @ 0002e474 ---- */

void FUN_0002e474(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined local_11 [5];
  
  if (param_1 != 0) {
    uVar2 = 1 << (param_2 & 7);
    uVar1 = param_2 >> 3 & 0xff;
    pbVar3 = (byte *)(param_1 + uVar1);
    if ((uVar2 & *(byte *)(param_1 + uVar1)) != 0) {
      local_11[0] = 0;
      FUN_0001bcb0(local_11);
      *pbVar3 = *pbVar3 & ~(byte)uVar2;
      FUN_0001bcf0(local_11[0]);
    }
  }
  return;
}


/* ---- FUN_0002e4b0 @ 0002e4b0 ---- */

uint FUN_0002e4b0(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte local_29 [5];
  
  uVar2 = param_2;
  if ((param_1 != 0) && (uVar4 = 0, uVar2 = uVar4, param_2 != 0)) {
    do {
      while( true ) {
        pbVar3 = (byte *)(param_1 + (uVar4 >> 3));
        uVar2 = 1 << (uVar4 & 7);
        bVar1 = *(byte *)(param_1 + (uVar4 >> 3));
        local_29[0] = (byte)uVar2 & bVar1;
        if ((uVar2 & bVar1) != 0) break;
        FUN_0001bcb0(local_29);
        bVar1 = *pbVar3;
        if (((uint)bVar1 & uVar2 & 0xff) == 0) {
          *pbVar3 = (byte)uVar2 | bVar1;
          FUN_0001bcf0(local_29[0]);
          return uVar4;
        }
        uVar4 = uVar4 + 1 & 0xffff;
        FUN_0001bcf0(local_29[0]);
        if (param_2 == uVar4) {
          return param_2;
        }
      }
      uVar4 = uVar4 + 1 & 0xffff;
      uVar2 = param_2;
    } while (param_2 != uVar4);
  }
  return uVar2;
}


/* ---- FUN_0002e53c @ 0002e53c ---- */

bool FUN_0002e53c(int param_1,uint param_2)

{
  bool bVar1;
  
  if (param_1 == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = (1 << (param_2 & 7) & (uint)*(byte *)(param_1 + (param_2 >> 3))) != 0;
  }
  return bVar1;
}


/* ---- FUN_0002e55c @ 0002e55c ---- */

void FUN_0002e55c(void)

{
  software_interrupt(0x7e);
  return;
}


/* ---- FUN_0002e560 @ 0002e560 ---- */

void FUN_0002e560(void)

{
  software_interrupt(0x7f);
  return;
}


/* ---- FUN_0002e564 @ 0002e564 ---- */

void FUN_0002e564(void)

{
  software_interrupt(0x85);
  return;
}


/* ---- FUN_0002e568 @ 0002e568 ---- */

void FUN_0002e568(void)

{
  software_interrupt(0x86);
  return;
}


/* ---- FUN_0002e56c @ 0002e56c ---- */

void FUN_0002e56c(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined param_4)

{
  int iVar1;
  undefined local_30 [2];
  undefined2 local_2e;
  undefined2 local_2c;
  undefined local_2a;
  undefined local_24 [2];
  undefined2 local_22;
  int local_20;
  
  FUN_0001b1fc(local_30,0,0xc);
  local_30[0] = 4;
  local_2e = (short)param_1;
  local_2c = param_3;
  local_2a = param_4;
  iVar1 = FUN_0002ae60(param_1,*DAT_0002e5e4);
  if (iVar1 == 0) {
    iVar1 = FUN_0002cde8(param_2,7);
    if (iVar1 == 5) {
      local_24[0] = 9;
      local_22 = (short)param_1;
      local_20 = iVar1;
      FUN_0002f164(local_24);
      FUN_0002b1ac(local_24);
    }
  }
  else {
    FUN_0002be64(param_2);
  }
  FUN_0002ae84(param_1,*DAT_0002e5e8,0);
  FUN_0002f164(local_30);
  FUN_0002b1ac(local_30);
  return;
}


/* ---- FUN_0002e630 @ 0002e630 ---- */

byte FUN_0002e630(void)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  
  pcVar1 = DAT_0002e680;
  if (*DAT_0002e680 == '\x18') {
    cVar5 = FUN_0002ae34();
    *pcVar1 = cVar5;
  }
  pcVar2 = DAT_0002e684;
  if (*DAT_0002e684 == '\x18') {
    cVar5 = FUN_0002ae34();
    *pcVar2 = cVar5;
  }
  pbVar3 = DAT_0002e688;
  uVar6 = (uint)*DAT_0002e688;
  if (uVar6 == 0x18) {
    uVar6 = FUN_0002ae34();
    *pbVar3 = (byte)uVar6;
  }
  if ((*pcVar1 == '\x18') || (*pcVar2 == '\x18')) {
    bVar4 = 3;
  }
  else {
    bVar4 = -(uVar6 == 0x18) & 3;
  }
  return bVar4;
}


/* ---- FUN_0002e68c @ 0002e68c ---- */

int FUN_0002e68c(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined local_4c [2];
  undefined2 local_4a;
  undefined4 local_48;
  undefined *local_40 [3];
  undefined4 local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined4 local_24;
  
  iVar2 = FUN_0002ad8c();
  FUN_0001b1fc(local_40,0,0x20);
  if (iVar2 == 0) {
    return DAT_0002e834;
  }
  if (param_2 == (byte *)0x0) {
    iVar2 = FUN_0002e560(param_1,0x85,0,local_40);
    FUN_0002ae84(param_1,*DAT_0002e828,0);
    return iVar2;
  }
  if ((int)((uint)*param_2 << 0x1f) < 0) {
    iVar3 = FUN_0002bb04(param_1);
    iVar5 = 0;
    iVar4 = iVar3;
    if (iVar3 == DAT_0002e824) {
      iVar4 = FUN_0002c554();
      iVar5 = 1;
      if (iVar4 == iVar3) {
        FUN_0002ae84(param_1,*DAT_0002e828,0);
        return 3;
      }
    }
    iVar3 = FUN_0002c8f8(iVar4,7,1,local_4c);
    if (iVar3 != 0) goto LAB_0002e7c2;
    FUN_0001b1fc(local_48,0,0x50);
    *local_48 = (char)iVar2;
    local_40[0] = local_48 + 0x34;
    local_30 = local_48 + 0x18;
    local_2c = local_48 + 1;
    local_24 = DAT_0002e838;
    local_34 = param_3;
    FUN_0002bb80(param_1,local_48 + 0x11);
    iVar3 = FUN_0002d008(iVar4,7);
    if (iVar3 != 0) goto LAB_0002e7c2;
  }
  else {
    iVar5 = 0;
    iVar4 = DAT_0002e824;
  }
  if (iVar2 == 2) {
    iVar3 = FUN_0002e560(param_1,0,0,local_40);
    if (iVar3 == 0) {
LAB_0002e70a:
      FUN_0002ae84(param_1,*DAT_0002e828,1);
      FUN_0002ae84(param_1,*DAT_0002e82c,1);
      FUN_0002ae84(param_1,*DAT_0002e830,iVar5);
      if (iVar5 == 0) {
        return 0;
      }
      FUN_0002bdec(param_1,iVar4);
      return 0;
    }
  }
  else {
    iVar3 = FUN_0002e560(param_1,0,param_2,local_40);
    if (iVar3 == 0) {
      bVar1 = *param_2;
      FUN_0001b1fc(local_4c,0,0xc);
      local_4c[0] = 2;
      local_4a = (undefined2)param_1;
      local_48 = (undefined *)CONCAT31(local_48._1_3_,'\x02' - (bVar1 & 1));
      FUN_0002f164(local_4c);
      FUN_0002b1ac(local_4c);
      goto LAB_0002e70a;
    }
  }
LAB_0002e7c2:
  FUN_0002ae84(param_1,*DAT_0002e828,0);
  if (iVar5 != 0) {
    FUN_0002be64(iVar4);
  }
  return iVar3;
}


/* ---- FUN_0002e83c @ 0002e83c ---- */

int FUN_0002e83c(undefined4 param_1,byte *param_2,int param_3)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined auStack_34 [4];
  int local_30;
  undefined local_2c [2];
  undefined2 local_2a;
  char local_28;
  
  iVar2 = FUN_0002ad8c();
  if (iVar2 == 1) {
    iVar2 = FUN_0002e55c(param_1,param_2);
    return iVar2;
  }
  if (iVar2 != 2) {
    return DAT_0002ea88;
  }
  if (param_2 == (byte *)0x0) {
    iVar2 = FUN_0002e55c(param_1,0);
    return iVar2;
  }
  cVar6 = '\x02' - (*param_2 & 1);
  iVar2 = FUN_0002bb04(param_1);
  if (iVar2 == DAT_0002ea80) {
    if ((*param_2 & 1) != 0) {
      iVar3 = FUN_0002c554();
      if (iVar3 == iVar2) goto LAB_0002e95e;
      iVar2 = FUN_0002c8f8(iVar3,7,1,local_2c);
      if (((iVar2 != 0) || (iVar2 = FUN_0002d008(iVar3,7), iVar2 != 0)) ||
         (iVar2 = FUN_0002e55c(param_1,param_2), iVar2 != 0)) {
        iVar4 = FUN_0002cde8(iVar3,7);
        if ((iVar4 != 0) && (iVar4 != 5)) {
          FUN_0002ae84(param_1,*DAT_0002ea84,0);
          FUN_0002be64(iVar3);
          return 3;
        }
        FUN_0002ae84(param_1,*DAT_0002ea84,0);
        FUN_0002be64(iVar3);
        return iVar2;
      }
      FUN_0002ae84(param_1,*DAT_0002ea84,1);
      FUN_0002ae84(param_1,*DAT_0002ea8c,1);
      FUN_0002ae84(param_1,*DAT_0002ea90,1);
      FUN_0002bdec(param_1,iVar3);
      goto LAB_0002e906;
    }
    iVar2 = FUN_0002e55c(param_1,param_2);
    FUN_0002ae84(param_1,*DAT_0002ea84,iVar2 == 0);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar5 = 1;
    uVar1 = *DAT_0002ea8c;
LAB_0002e998:
    FUN_0002ae84(param_1,uVar1,uVar5);
    FUN_0002ae84(param_1,*DAT_0002ea90,0);
    goto LAB_0002e906;
  }
  iVar3 = FUN_0002c8ec(iVar2,7,auStack_34);
  if (iVar3 == 0) {
    if (-1 < (int)((uint)*(byte *)(local_30 + 0x44) << 0x1f)) {
      if (param_3 == 0) {
        iVar7 = local_30 + 0x2a;
        iVar4 = local_30 + 0x18;
        iVar3 = FUN_0002bdac(iVar7);
        if (iVar3 != 0) goto LAB_0002e9e8;
      }
LAB_0002e936:
      if (((-1 < (int)((uint)*param_2 << 0x1f)) ||
          ((iVar3 = FUN_0002c8f8(iVar2,7,1,local_2c), iVar3 == 0 &&
           (iVar3 = FUN_0002d008(iVar2,7), iVar3 == 0)))) &&
         (iVar3 = FUN_0002e55c(param_1,param_2), iVar3 == 0)) {
        FUN_0002ae84(param_1,*DAT_0002ea84,1);
        uVar5 = 1;
LAB_0002e994:
        uVar1 = *DAT_0002ea8c;
        goto LAB_0002e998;
      }
      iVar2 = FUN_0002cde8(iVar2,7);
      if ((iVar2 != 0) && (iVar2 != 5)) {
LAB_0002e95e:
        FUN_0002ae84(param_1,*DAT_0002ea84,0);
        return 3;
      }
      goto LAB_0002e8f4;
    }
    if (param_3 != 0) goto LAB_0002e936;
    iVar7 = local_30 + 0x46;
    iVar4 = local_30 + 0x34;
LAB_0002e9e8:
    iVar3 = FUN_0002e564(param_1,iVar7,iVar4);
    FUN_0002ae84(param_1,*DAT_0002ea84,iVar3 == 0);
    uVar5 = 0;
    cVar6 = '\0';
    if (iVar3 == 0) goto LAB_0002e994;
  }
  else {
    if (iVar3 == 5) goto LAB_0002e936;
LAB_0002e8f4:
    FUN_0002ae84(param_1,*DAT_0002ea84,0);
  }
  if (iVar3 != 0) {
    return iVar3;
  }
LAB_0002e906:
  FUN_0001b1fc(local_2c,0,0xc);
  local_2c[0] = 2;
  local_2a = (undefined2)param_1;
  local_28 = cVar6;
  FUN_0002f164(local_2c);
  FUN_0002b1ac(local_2c);
  return 0;
}


/* ---- FUN_0002ea94 @ 0002ea94 ---- */

void FUN_0002ea94(ushort *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 - 0x11 & 0xffff;
  if (uVar1 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x0002eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_0002ede4 + uVar1 * 4))();
    return;
  }
  return;
}


/* ---- FUN_0002ee1c @ 0002ee1c ---- */

uint FUN_0002ee1c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined local_24 [2];
  undefined2 local_22;
  uint local_20;
  
  if (param_2 == 0) {
    if (*DAT_0002ef6c == '\0') {
      return 5;
    }
    uVar1 = FUN_0002e83c(param_1,DAT_0002ef70);
    if (uVar1 != 0x86) goto LAB_0002ee3c;
LAB_0002eeb6:
    FUN_0002ae84(param_1,*DAT_0002ef74,1);
    FUN_0002ae84(param_1,*DAT_0002ef78,0);
    if (param_4 == 0) goto LAB_0002eed4;
    FUN_0001b1fc(local_24,0,0xc);
    local_24[0] = 10;
    local_20 = uVar1;
LAB_0002ee6a:
    uVar1 = local_20;
    local_22 = (short)param_1;
    FUN_0002dda0(local_24);
    if (uVar1 == 0x86) {
LAB_0002eed4:
      FUN_0002ae84(param_1,*DAT_0002ef64,param_2);
      FUN_0002ae84(param_1,*DAT_0002ef68,param_3);
      return 0x86;
    }
LAB_0002ee74:
    if (uVar1 < 0x87) {
      if (uVar1 == 0x11) goto LAB_0002ee7c;
      if (uVar1 < 0x12) {
        if (uVar1 == 0xd) {
          return 0xd;
        }
        if (uVar1 < 0xe) {
          if ((uVar1 & 0xfffffff7) == 0) {
            return uVar1;
          }
          return 3;
        }
      }
    }
    else if (uVar1 == DAT_0002ef7c) {
      return uVar1;
    }
    uVar1 = 3;
  }
  else {
    uVar1 = FUN_0002e83c(param_1,0);
    if (uVar1 == 0x86) goto LAB_0002eeb6;
LAB_0002ee3c:
    if ((uVar1 != 0x11) && (uVar1 != 0)) {
      if (param_4 != 0) {
LAB_0002ee4a:
        FUN_0001b1fc(local_24,0,0xc);
        local_20 = uVar1;
        if (uVar1 == 0xd) {
          local_24[0] = 0xb;
        }
        else {
          local_24[0] = 9;
        }
        goto LAB_0002ee6a;
      }
      goto LAB_0002ee74;
    }
    FUN_0002ae84(param_1,*DAT_0002ef74,0);
    FUN_0002ae84(param_1,*DAT_0002ef78,uVar1 == 0x11);
    if (param_4 == 0) goto LAB_0002ee74;
    if (uVar1 == 0) {
      return 0;
    }
    if (uVar1 != 0x11) goto LAB_0002ee4a;
LAB_0002ee7c:
    FUN_0002ae84(param_1,*DAT_0002ef64,param_2);
    FUN_0002ae84(param_1,*DAT_0002ef68,param_3);
    uVar1 = 0;
  }
  return uVar1;
}


/* ---- FUN_0002ef80 @ 0002ef80 ---- */

void FUN_0002ef80(undefined4 param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int local_3c;
  undefined2 local_38 [10];
  
  FUN_0002ae1c(&local_3c);
  puVar3 = DAT_0002f000;
  puVar2 = DAT_0002effc;
  if (local_3c != 0) {
    iVar8 = 0;
    piVar7 = &local_3c;
    do {
      while( true ) {
        uVar1 = *(undefined2 *)(piVar7 + 1);
        iVar4 = FUN_0002ae60(uVar1,param_1);
        if (iVar4 == 0) break;
        uVar5 = FUN_0002ae60(uVar1,*puVar2);
        uVar6 = FUN_0002ae60(uVar1,*puVar3);
        iVar8 = iVar8 + 1;
        FUN_0002ee1c(uVar1,uVar6,uVar5,1);
        piVar7 = (int *)((int)piVar7 + 2);
        if (iVar8 == local_3c) {
          return;
        }
      }
      iVar8 = iVar8 + 1;
      piVar7 = (int *)((int)piVar7 + 2);
    } while (iVar8 != local_3c);
  }
  return;
}


/* ---- FUN_0002f004 @ 0002f004 ---- */

void FUN_0002f004(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined local_1c [2];
  undefined2 local_1a;
  int local_18;
  
  iVar2 = FUN_0002ad8c();
  puVar1 = DAT_0002f140;
  if ((iVar2 == 1) && (iVar2 = FUN_0002bb04(param_1), iVar2 != DAT_0002f158)) {
    FUN_0002ae84(param_1,*puVar1,1);
    FUN_0001b1fc(local_1c,0,0xc);
    local_1c[0] = 0xc;
    local_1a = (short)param_1;
    FUN_0002dda0(local_1c);
  }
  else {
    FUN_0002ae84(param_1,*puVar1,0);
  }
  if ((*DAT_0002f144 == '\0') || (iVar2 = FUN_0002ae60(param_1,*puVar1), iVar2 != 0)) {
    iVar2 = FUN_0002e68c(param_1,0,0);
  }
  else {
    iVar2 = FUN_0002e68c(param_1,DAT_0002f160,*DAT_0002f15c);
  }
  if (iVar2 == 0x86) {
    FUN_0002ae84(param_1,*DAT_0002f148,1);
    FUN_0002ae84(param_1,*DAT_0002f14c,0);
    FUN_0002ae84(param_1,*DAT_0002f150,0);
    FUN_0002ae84(param_1,*DAT_0002f154,0);
    FUN_0001b1fc(local_1c,0,0xc);
    local_1c[0] = 10;
  }
  else {
    if ((iVar2 == 0x11) || (iVar2 == 0)) {
      FUN_0002ae84(param_1,*DAT_0002f148,0);
      FUN_0002ae84(param_1,*DAT_0002f14c,iVar2 == 0x11);
      FUN_0002ae84(param_1,*DAT_0002f150,0);
      FUN_0002ae84(param_1,*DAT_0002f154,0);
      if (iVar2 == 0) {
        return;
      }
      if (iVar2 == 0x11) {
        return;
      }
    }
    FUN_0001b1fc(local_1c,0,0xc);
    if (iVar2 == 0xd) {
      local_1c[0] = 0xb;
    }
    else {
      local_1c[0] = 9;
    }
  }
  local_1a = (short)param_1;
  local_18 = iVar2;
  FUN_0002dda0(local_1c);
  return;
}


/* ---- FUN_0002f164 @ 0002f164 ---- */

void FUN_0002f164(byte *param_1)

{
  uint uVar1;
  char cVar2;
  byte local_1c [2];
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined auStack_10 [4];
  
  local_1c[0] = *param_1;
  uVar1 = (uint)local_1c[0];
  if (uVar1 == 1) {
    cVar2 = *DAT_0002f1d0;
    if (cVar2 == '\0') {
      cVar2 = '\x01';
    }
    else if (param_1[4] <= (local_1c[0] & *DAT_0002f1d4)) {
      cVar2 = (local_1c[0] & *DAT_0002f1d4 >> 1) < param_1[5];
    }
    FUN_0002ee1c(*(undefined2 *)(param_1 + 2),cVar2,0,1);
    local_1c[0] = *param_1;
  }
  else {
    if (uVar1 < 2) {
      FUN_0002f004(*(undefined2 *)(param_1 + 2));
      return;
    }
    if (7 < uVar1 - 2) {
      return;
    }
  }
  local_1a = *(undefined2 *)(param_1 + 2);
  local_18 = *(undefined4 *)(param_1 + 4);
  uStack_14 = *(undefined4 *)(param_1 + 8);
  FUN_0002dda0(local_1c,local_18,uStack_14,auStack_10);
  return;
}


/* ---- FUN_0002f1d8 @ 0002f1d8 ---- */

void FUN_0002f1d8(byte *param_1)

{
  undefined uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_2c;
  undefined2 local_28 [8];
  
  if (6 < *param_1) {
    if (*param_1 != 7) {
      return;
    }
    uVar1 = *DAT_0002f2ac;
    iVar3 = FUN_0002aeac(uVar1);
    if ((iVar3 != 0) && (FUN_0002ae1c(&local_2c), iVar3 = local_2c, local_2c != 0)) {
      iVar4 = 0;
      piVar6 = &local_2c;
      do {
        uVar2 = *(undefined2 *)(piVar6 + 1);
        iVar5 = FUN_0002ae60(uVar2,uVar1);
        if (iVar5 != 0) {
          FUN_0002f004(uVar2);
        }
        iVar4 = iVar4 + 1;
        piVar6 = (int *)((int)piVar6 + 2);
      } while (iVar4 != iVar3);
    }
    uVar1 = *DAT_0002f2b0;
    iVar3 = FUN_0002aeac(uVar1);
    if (iVar3 != 0) {
      FUN_0002ef80(uVar1);
      uVar1 = *DAT_0002f2b4;
      iVar3 = FUN_0002aeac(uVar1);
      goto joined_r0x0002f212;
    }
  }
  uVar1 = *DAT_0002f2b4;
  iVar3 = FUN_0002aeac(uVar1);
joined_r0x0002f212:
  if ((iVar3 != 0) && (FUN_0002ae1c(&local_2c), local_2c != 0)) {
    iVar3 = 0;
    piVar6 = &local_2c;
    do {
      uVar2 = *(undefined2 *)(piVar6 + 1);
      iVar4 = FUN_0002ae60(uVar2,uVar1);
      if (iVar4 != 0) {
        FUN_0002f004(uVar2);
      }
      iVar3 = iVar3 + 1;
      piVar6 = (int *)((int)piVar6 + 2);
    } while (iVar3 != local_2c);
  }
  uVar1 = *DAT_0002f2b8;
  iVar3 = FUN_0002aeac(uVar1);
  if (iVar3 != 0) {
    FUN_0002ef80(uVar1);
  }
  return;
}


/* ---- FUN_0002f2bc @ 0002f2bc ---- */

undefined4 FUN_0002f2bc(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  pcVar1 = DAT_0002f338;
  if (*DAT_0002f338 == '\x18') {
    cVar2 = FUN_0002ae34();
    *pcVar1 = cVar2;
  }
  pcVar1 = DAT_0002f33c;
  if (*DAT_0002f33c == '\x18') {
    cVar2 = FUN_0002ae34();
    *pcVar1 = cVar2;
  }
  pcVar1 = DAT_0002f340;
  if (*DAT_0002f340 == '\x18') {
    cVar2 = FUN_0002ae34();
    *pcVar1 = cVar2;
  }
  pcVar1 = DAT_0002f344;
  if (*DAT_0002f344 == '\x18') {
    cVar2 = FUN_0002ae34();
    *pcVar1 = cVar2;
  }
  pcVar1 = DAT_0002f348;
  if (*DAT_0002f348 == '\x18') {
    cVar2 = FUN_0002ae34();
    *pcVar1 = cVar2;
  }
  pcVar1 = DAT_0002f34c;
  if (*DAT_0002f34c == '\x18') {
    cVar2 = FUN_0002ae34();
    *pcVar1 = cVar2;
  }
  pcVar1 = DAT_0002f350;
  if (*DAT_0002f350 == '\x18') {
    iVar3 = FUN_0002ae34();
    *pcVar1 = (char)iVar3;
    if (iVar3 == 0x18) {
      return 3;
    }
  }
  return 0;
}


/* ---- FUN_0002f354 @ 0002f354 ---- */

void FUN_0002f354(void)

{
  undefined uVar1;
  int iVar2;
  
  FUN_0002ea94();
  uVar1 = *DAT_0002f374;
  iVar2 = FUN_0002aeac(uVar1);
  if (iVar2 != 0) {
    FUN_0002ef80(uVar1);
  }
  return;
}


/* ---- FUN_0002f378 @ 0002f378 ---- */

undefined4 FUN_0002f378(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  if (param_1 == (byte *)0x0) {
    *DAT_0002f3f4 = 0;
    return 0;
  }
  uVar2 = (uint)*param_1;
  if ((((uVar2 & 0xffffff82) != 0x80) && ((uVar2 << 0x19) >> 0x1d < 5)) &&
     ((uVar2 & 0xfffffff2) != 0x32)) {
    if (((param_1[1] <= param_1[2]) && (6 < param_1[1])) &&
       ((param_1[2] < 0x11 && (((param_1[3] & 4) == 0 && ((param_1[4] & 4) == 0)))))) {
      bVar1 = param_1[3] | param_1[4];
      if ((int)((uint)bVar1 << 0x1c) < 0) {
        return 7;
      }
      if ((int)(uVar2 << 0x1f) < 0) {
        if ((bVar1 & 3) == 0) {
          return 7;
        }
      }
      else if ((bVar1 & 3) != 0) {
        return 7;
      }
      FUN_00031764(DAT_0002f3f0,param_1,5);
      *DAT_0002f3f4 = 1;
      return 0;
    }
  }
  return 7;
}


/* ---- FUN_0002f3f8 @ 0002f3f8 ---- */

void FUN_0002f3f8(undefined4 param_1,byte *param_2)

{
  FUN_0002ae84(param_1,*DAT_0002f40c,*param_2 ^ 1);
  return;
}


/* ---- FUN_0002f410 @ 0002f410 ---- */

uint FUN_0002f410(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (*DAT_0002f4d4 == '\0') {
    return 5;
  }
  uVar1 = FUN_0002e83c(param_1,DAT_0002f4d8,param_2);
  if (uVar1 == 0x86) {
    FUN_0002ae84(param_1,*DAT_0002f4dc,1);
    FUN_0002ae84(param_1,*DAT_0002f4e0,0);
LAB_0002f47e:
    FUN_0002ae84(param_1,*DAT_0002f4e4,0);
    FUN_0002ae84(param_1,*DAT_0002f4e8,param_2);
  }
  else {
    if ((uVar1 == 0x11) || (uVar1 == 0)) {
      FUN_0002ae84(param_1,*DAT_0002f4dc,0);
      FUN_0002ae84(param_1,*DAT_0002f4e0,uVar1 == 0x11);
      if (uVar1 == 0x11) {
        FUN_0002ae84(param_1,*DAT_0002f4e4,0);
        FUN_0002ae84(param_1,*DAT_0002f4e8,param_2);
        return 0;
      }
      if (0x11 < uVar1) {
        if (uVar1 != 0x86) goto LAB_0002f4ac;
        goto LAB_0002f47e;
      }
    }
    else if (0x11 < uVar1) {
LAB_0002f4ac:
      if (uVar1 == DAT_0002f4ec) {
        return uVar1;
      }
      return 3;
    }
    if ((uVar1 != 0xd) && ((uVar1 & 0xfffffff7) != 0)) {
      uVar1 = 3;
    }
  }
  return uVar1;
}


/* ---- FUN_0002f4f0 @ 0002f4f0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002f4f0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  _DAT_40000524 = _DAT_40000524 | 3;
  _DAT_40000554 = _DAT_40000554 | 3;
  iVar3 = 0x110;
  do {
    iVar2 = iVar3 + -4;
    *(undefined4 *)(iVar3 + 0x20002024) = *(undefined4 *)(iVar3 + 0x3409c);
    bVar1 = 3 < iVar3;
    iVar3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  FUN_0002f53c();
  FUN_0001b114();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0002f530 @ 0002f530 ---- */

void FUN_0002f530(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0002f534 @ 0002f534 ---- */

void FUN_0002f534(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0002f536 @ 0002f536 ---- */

void FUN_0002f536(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0002f538 @ 0002f538 ---- */

void FUN_0002f538(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0002f53a @ 0002f53a ---- */

void FUN_0002f53a(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0002f53c @ 0002f53c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002f53c(void)

{
  int *piVar1;
  uint uVar2;
  
  if ((*DAT_0002f5f4 == '\x01') && ((*DAT_0002f5f8 & 0xf) == 0)) {
    uVar2 = *DAT_0002f5fc & 0xf0;
    if ((((*DAT_0002f5fc & 0xf0) == 0) || ((uVar2 == 0x10 || (uVar2 == 0x30)))) &&
       ((*DAT_0002f600 & 0xf0) == 0)) {
      *DAT_0002f610 = DAT_0002f614;
      *DAT_0002f618 = 0x8000;
      if (*DAT_0002f5f4 != '\x01') {
        return;
      }
      if ((*DAT_0002f5f8 & 0xf) != 0) {
        return;
      }
    }
    piVar1 = DAT_0002f604;
    if (((((*DAT_0002f5fc & 0xf0) != 0x40) || ((*DAT_0002f600 & 0xf0) != 0)) ||
        ((_DAT_40000608 = 1, *DAT_0002f5f4 == '\x01' && ((*DAT_0002f5f8 & 0xf) == 0)))) &&
       ((((*DAT_0002f5fc & 0xf0) == 0xa0 || ((*DAT_0002f5fc & 0xf0) == 0xd0)) &&
        ((*DAT_0002f600 & 0xf0) == 0)))) {
      if (*DAT_0002f604 != 1) {
        *DAT_0002f604 = DAT_0002f608;
        do {
        } while (*piVar1 != 1);
      }
      *DAT_0002f60c = 0xc0;
    }
  }
  return;
}


/* ---- FUN_0002f61c @ 0002f61c ---- */

void FUN_0002f61c(void)

{
  software_interrupt(0xa0);
  return;
}


/* ---- FUN_0002f620 @ 0002f620 ---- */

void FUN_0002f620(void)

{
  software_interrupt(0xa2);
  return;
}


/* ---- FUN_0002f624 @ 0002f624 ---- */

void FUN_0002f624(void)

{
  software_interrupt(0xa3);
  return;
}


/* ---- FUN_0002f628 @ 0002f628 ---- */

void FUN_0002f628(code **param_1,short *param_2)

{
  short sVar1;
  
  if ((param_1 != (code **)0x0) && (param_2 != (short *)0x0)) {
    sVar1 = *param_2;
    if (sVar1 == 0x11) {
      *(undefined2 *)((int)param_1 + 0x12) = 0xffff;
    }
    else if (sVar1 == 0x50) {
      if ((((*(char *)(param_1 + 5) != '\0') && (param_2[3] == *(short *)((int)param_1 + 10))) &&
          (param_2[8] == 2)) && (*param_1 != (code *)0x0)) {
        FUN_0002aec8(param_2 + 9);
        (**param_1)(param_1);
      }
    }
    else if (sVar1 == 0x10) {
      *(short *)((int)param_1 + 0x12) = param_2[2];
    }
  }
  return;
}


/* ---- FUN_0002f688 @ 0002f688 ---- */

int FUN_0002f688(undefined4 *param_1,undefined4 *param_2)

{
  undefined uVar1;
  ushort uVar2;
  int iVar3;
  undefined local_6d;
  undefined auStack_6c [4];
  undefined local_68;
  undefined local_67;
  byte local_66;
  undefined local_64;
  undefined local_63;
  byte local_62;
  undefined2 local_60;
  undefined local_5e;
  undefined2 local_5c;
  undefined local_5a;
  undefined2 *local_58;
  undefined *local_54;
  uint local_50;
  ushort local_4c;
  undefined *local_48;
  byte local_44 [4];
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) {
    iVar3 = 0xe;
  }
  else {
    *param_1 = *param_2;
    *(undefined2 *)((int)param_1 + 0x12) = 0xffff;
    uVar1 = *(undefined *)(param_2 + 1);
    *(undefined *)(param_1 + 4) = 0xff;
    *(undefined *)(param_1 + 5) = uVar1;
    local_5e = 1;
    local_60 = (undefined2)DAT_0002f824;
    iVar3 = FUN_0002f61c(1,&local_60,param_1 + 1);
    if (iVar3 == 0) {
      if (*(char *)(param_1 + 5) != '\0') {
        FUN_0001b1fc(&local_68,0,3);
        local_68 = 0x11;
        local_67 = *(undefined *)((int)param_2 + 0xd);
        local_66 = local_66 & 0xf9 | 2;
      }
      FUN_0001b1fc(local_44,0,0x1c);
      local_44[0] = local_44[0] & 0xef | 2 | (byte)((*(byte *)(param_1 + 5) & 1) << 4);
      local_30 = (uint)&local_68 & -(uint)(*(byte *)(param_1 + 5) != 0);
      local_40 = 0;
      local_38 = 0;
      local_34 = 0;
      local_2c = 0;
      local_5a = 1;
      local_5c = (undefined2)DAT_0002f828;
      FUN_0001b1fc(&local_64,0,3);
      local_64 = *(undefined *)((int)param_2 + 0xe);
      local_63 = *(undefined *)((int)param_2 + 0xf);
      local_62 = local_62 & 0xe0 | 2;
      local_6d = *(undefined *)(param_2 + 3);
      FUN_0001b1fc(&local_58,0,0x14);
      local_58 = &local_5c;
      local_50 = 1;
      local_4c = 1;
      local_54 = &local_64;
      local_48 = &local_6d;
      iVar3 = FUN_0002f620(*(undefined2 *)(param_1 + 1),local_44,&local_58,(int)param_1 + 6);
      if (iVar3 == 0) {
        if (param_2[2] == 0) {
          *(undefined2 *)((int)param_1 + 0xe) = 0;
        }
        else {
          local_5a = 1;
          local_5c = (undefined2)DAT_0002f82c;
          FUN_0001b1fc(&local_64,0,3);
          local_64 = *(undefined *)(param_2 + 4);
          local_63 = 0;
          local_62 = local_62 & 0xe0 | 2;
          uVar2 = FUN_0002aed0(auStack_6c,param_2[2]);
          FUN_0001b1fc(&local_58,0,0x14);
          local_58 = &local_5c;
          local_50 = (uint)uVar2;
          local_54 = &local_64;
          local_4c = uVar2;
          local_48 = auStack_6c;
          iVar3 = FUN_0002f624(*(undefined2 *)((int)param_1 + 6),&local_58,(int)param_1 + 0xe);
        }
      }
    }
  }
  return iVar3;
}


/* ---- FUN_0002f830 @ 0002f830 ---- */

void FUN_0002f830(void)

{
  software_interrupt(0xa0);
  return;
}


/* ---- FUN_0002f834 @ 0002f834 ---- */

void FUN_0002f834(void)

{
  software_interrupt(0xa2);
  return;
}


/* ---- FUN_0002f838 @ 0002f838 ---- */

void FUN_0002f838(undefined2 param_1,int param_2,int param_3,undefined *param_4,undefined4 param_5)

{
  undefined local_58;
  undefined local_57;
  byte local_56;
  undefined2 local_54;
  undefined local_52;
  undefined2 *local_50;
  undefined *local_4c;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  int local_40;
  byte local_3c [4];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2 == 0) {
    FUN_0001b210(0,0x88,DAT_0002f8f8);
  }
  if (param_3 == 0) {
    FUN_0001b210(0,0x89,DAT_0002f8f8);
  }
  FUN_0001b1fc(local_3c,0,0x1c);
  local_3c[0] = local_3c[0] | 2;
  local_52 = 1;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_54 = param_1;
  FUN_0001b1fc(&local_58,0,3);
  local_58 = *param_4;
  local_57 = param_4[1];
  local_56 = local_56 & 0xe0 | 2;
  FUN_0001b1fc(&local_50,0,0x14);
  local_48 = (undefined2)param_3;
  local_46 = 0;
  local_50 = &local_54;
  local_4c = &local_58;
  local_44 = local_48;
  local_40 = param_2;
  FUN_0002f834(*DAT_0002f8f4,local_3c,&local_50,param_5);
  return;
}


/* ---- FUN_0002f8fc @ 0002f8fc ---- */

int FUN_0002f8fc(short *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined2 local_1c;
  undefined local_1a;
  undefined local_18;
  undefined local_17;
  undefined local_16;
  undefined local_15;
  undefined local_14;
  undefined local_13;
  undefined local_12;
  undefined local_11;
  
  local_1a = 1;
  local_1c = (undefined2)DAT_0002fa80;
  iVar2 = FUN_0002f830(1,&local_1c,DAT_0002fa84);
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((*param_1 != 0) &&
     (iVar2 = FUN_0002f838(DAT_0002faa4,*(undefined4 *)(param_1 + 2),*param_1,param_1 + 0x1e,
                           DAT_0002faa0), iVar2 != 0)) {
    return iVar2;
  }
  if (param_1[4] == 0) {
    sVar1 = param_1[8];
  }
  else {
    iVar2 = FUN_0002f838(DAT_0002faac,*(undefined4 *)(param_1 + 6),param_1[4],param_1 + 0x1e,
                         DAT_0002faa8);
    if (iVar2 != 0) {
      return iVar2;
    }
    sVar1 = param_1[8];
  }
  if (sVar1 == 0) {
    sVar1 = param_1[0xc];
  }
  else {
    iVar2 = FUN_0002f838(DAT_0002fab4,*(undefined4 *)(param_1 + 10),sVar1,param_1 + 0x1e,
                         DAT_0002fab0);
    if (iVar2 != 0) {
      return iVar2;
    }
    sVar1 = param_1[0xc];
  }
  if (sVar1 == 0) {
    sVar1 = param_1[0x10];
  }
  else {
    iVar2 = FUN_0002f838(DAT_0002fabc,*(undefined4 *)(param_1 + 0xe),sVar1,param_1 + 0x1e,
                         DAT_0002fab8);
    if (iVar2 != 0) {
      return iVar2;
    }
    sVar1 = param_1[0x10];
  }
  if (((sVar1 == 0) ||
      (iVar2 = FUN_0002f838(DAT_0002fac4,*(undefined4 *)(param_1 + 0x12),sVar1,param_1 + 0x1e,
                            DAT_0002fac0), iVar2 == 0)) &&
     ((param_1[0x14] == 0 ||
      (iVar2 = FUN_0002f838(DAT_0002facc,*(undefined4 *)(param_1 + 0x16),param_1[0x14],
                            param_1 + 0x1e,DAT_0002fac8), iVar2 == 0)))) {
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    if (puVar3 != (undefined4 *)0x0) {
      local_18 = (undefined)*puVar3;
      local_17 = (undefined)((uint)*puVar3 >> 8);
      local_16 = (undefined)*(undefined2 *)((int)puVar3 + 2);
      local_15 = *(undefined *)((int)puVar3 + 3);
      local_14 = (undefined)puVar3[1];
      uVar4 = puVar3[2];
      local_13 = (undefined)uVar4;
      local_11 = (undefined)((uint)uVar4 >> 0x10);
      local_12 = (undefined)((uint)uVar4 >> 8);
      iVar2 = FUN_0002f838(DAT_0002fa88,&local_18,8,param_1 + 0x1e,DAT_0002fa8c);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    puVar3 = *(undefined4 **)(param_1 + 0x1a);
    if ((puVar3 == (undefined4 *)0x0) ||
       (iVar2 = FUN_0002f838(DAT_0002fa94,*puVar3,*(undefined *)(puVar3 + 1),param_1 + 0x1e,
                             DAT_0002fa90), iVar2 == 0)) {
      puVar5 = *(undefined **)(param_1 + 0x1c);
      iVar2 = 0;
      if (puVar5 != (undefined *)0x0) {
        local_18 = *puVar5;
        local_17 = (undefined)*(undefined2 *)(puVar5 + 2);
        local_16 = (undefined)((ushort)*(undefined2 *)(puVar5 + 2) >> 8);
        local_15 = (undefined)*(undefined2 *)(puVar5 + 4);
        local_14 = (undefined)((ushort)*(undefined2 *)(puVar5 + 4) >> 8);
        local_13 = (undefined)*(undefined2 *)(puVar5 + 6);
        local_12 = (undefined)((ushort)*(undefined2 *)(puVar5 + 6) >> 8);
        iVar2 = FUN_0002f838(DAT_0002fa98,&local_18,7,param_1 + 0x1e,DAT_0002fa9c);
      }
    }
  }
  return iVar2;
}


/* ---- FUN_0002fad0 @ 0002fad0 ---- */

void FUN_0002fad0(void)

{
  software_interrupt(99);
  return;
}


/* ---- FUN_0002fad4 @ 0002fad4 ---- */

void FUN_0002fad4(code **param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  undefined local_94 [2];
  undefined2 local_92;
  undefined auStack_4c [10];
  undefined auStack_42 [10];
  ushort uStack_38;
  undefined auStack_32 [10];
  ushort uStack_28;
  
  uVar1 = DAT_0002fba0;
  if (((*param_2 == '\0') && (*(ushort *)(param_2 + 4) == DAT_0002fb9c)) &&
     (param_2[6] == *(char *)(param_1 + 3))) {
    uVar2 = (uint)(byte)param_2[8];
    if (uVar2 != 0) {
      uVar5 = 0;
      puVar4 = (ushort *)(param_2 + 0xe);
      do {
        uVar3 = (uint)*puVar4;
        if (uVar3 == uVar1) {
          FUN_00031764(auStack_32,puVar4,10);
          uStack_28 = puVar4[5];
          uVar2 = (uint)(byte)param_2[8];
        }
        else if (uVar3 == DAT_0002fba8) {
          FUN_00031764(auStack_4c,puVar4,10);
          uVar2 = (uint)(byte)param_2[8];
        }
        else if (uVar3 == DAT_0002fba4) {
          FUN_00031764(auStack_42,puVar4,10);
          uStack_38 = puVar4[5];
          uVar2 = (uint)(byte)param_2[8];
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 9;
      } while (uVar5 < uVar2);
    }
    local_94[0] = 0;
    local_92 = *(undefined2 *)(param_2 + 2);
    (**param_1)(local_94);
  }
  else {
    local_94[0] = 1;
    (**param_1)();
  }
  return;
}


/* ---- FUN_0002fbac @ 0002fbac ---- */

void FUN_0002fbac(code **param_1,short *param_2)

{
  short sVar1;
  char local_8c [4];
  undefined4 local_88;
  byte local_84;
  byte local_83;
  byte local_82;
  undefined local_81;
  short local_80;
  
  sVar1 = *param_2;
  if (sVar1 == 0x38) {
    if (*(short *)(param_1 + 2) == param_2[2]) {
      if ((param_2[4] != 0) && (*(short *)((int)param_1 + 0x1a) == param_2[4])) {
        local_8c[0] = '\x06';
        local_80 = param_2[3];
        (**param_1)(local_8c);
      }
      FUN_00030014();
    }
  }
  else if (sVar1 == 0x39) {
    if (param_2[2] == *(short *)(param_1 + 2)) {
      if (*(short *)(param_1 + 9) == param_2[6]) {
        if (param_2[8] != 8) {
          local_8c[0] = '\x03';
          (**param_1)(local_8c);
        }
        local_83 = *(byte *)((int)param_2 + 0x13) & 0x1f | local_83 & 0xe0;
        local_81 = *(undefined *)((int)param_2 + 0x15);
        local_88 = *(undefined4 *)(param_2 + 0xb);
        local_84 = *(byte *)(param_2 + 9);
        local_82 = *(byte *)(param_2 + 10);
        if (local_84 < 3) {
          local_8c[0] = (0xb < local_82) + '\x02';
        }
        else {
          local_8c[0] = '\x03';
        }
        (**param_1)(local_8c);
      }
      else if (*(short *)(param_1 + 0xd) == param_2[6]) {
        FUN_00030064(param_1,param_2 + 9,param_2[8]);
      }
    }
  }
  else if ((sVar1 == 0x11) && (*(short *)(param_1 + 2) == param_2[2])) {
    *(undefined2 *)(param_1 + 2) = 0xffff;
  }
  return;
}


/* ---- FUN_0002fc80 @ 0002fc80 ---- */

int FUN_0002fc80(int *param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (*param_2 == 0)) {
    iVar2 = 0xe;
  }
  else {
    *(undefined *)(param_1 + 0x37) = 0;
    param_1[0x38] = 0;
    *(undefined2 *)(param_1 + 0x39) = 0;
    param_1[0x3a] = 0;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined2 *)(param_1 + 2) = 0xffff;
    uVar1 = (undefined2)DAT_0002fd14;
    *(undefined2 *)(param_1 + 0xe) = uVar1;
    *(undefined2 *)(param_1 + 10) = uVar1;
    FUN_0001b1fc((int)param_1 + 10,0,0x32);
    FUN_0002ff94();
    iVar2 = FUN_0002fad0(DAT_0002fd18,param_1 + 3);
    if (((iVar2 == 0) && (iVar2 = FUN_0002fad0(DAT_0002fd1c,param_1 + 5), iVar2 == 0)) &&
       ((iVar2 = FUN_0002fad0(DAT_0002fd20,(int)param_1 + 0x1e), iVar2 == 0 &&
        (iVar2 = FUN_0002fad0(DAT_0002fd24,(int)param_1 + 0x2e), iVar2 == 0)))) {
      *(short *)((int)param_1 + 10) = (short)DAT_0002fd28;
      iVar2 = FUN_00030604((int)param_1 + 10);
    }
  }
  return iVar2;
}


/* ---- FUN_0002fd2c @ 0002fd2c ---- */

undefined4 FUN_0002fd2c(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_34;
  undefined local_32;
  undefined2 local_30 [10];
  undefined local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined2 *local_14;
  
  uVar1 = *(undefined2 *)(param_1 + 8);
  uVar2 = *(undefined2 *)(param_1 + 0x26);
  FUN_0001b1fc(&local_34,0,0x24);
  local_14 = local_30;
  local_18 = 0x20000;
  local_1c = 1;
  local_30[0] = 1;
  local_32 = 2;
  local_34 = uVar1;
  local_1a = uVar2;
  FUN_0002ffa8(&local_34);
  FUN_00030014();
  return 0;
}


/* ---- FUN_0002fd68 @ 0002fd68 ---- */

undefined4 FUN_0002fd68(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_34;
  undefined local_32;
  undefined2 local_30 [10];
  undefined local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined2 *local_14;
  
  uVar1 = *(undefined2 *)(param_1 + 8);
  uVar2 = *(undefined2 *)(param_1 + 0x36);
  FUN_0001b1fc(&local_34,0,0x24);
  local_14 = local_30;
  local_18 = 0x20000;
  local_1c = 1;
  local_30[0] = 1;
  local_32 = 2;
  local_34 = uVar1;
  local_1a = uVar2;
  FUN_0002ffa8(&local_34);
  FUN_00030014();
  return 0;
}


/* ---- FUN_0002fda4 @ 0002fda4 ---- */

undefined4 FUN_0002fda4(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined2 local_34;
  undefined local_32;
  undefined local_30 [20];
  undefined local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined *local_14;
  
  FUN_0001b1fc(&local_34,0,0x24);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  local_1a = *(undefined2 *)(param_1 + 0x1a);
  local_30[2] = (undefined)((uint)param_2 >> 8);
  local_30[3] = (undefined)((uint)param_2 >> 0x10);
  local_14 = local_30;
  local_18 = 0;
  local_30[1] = (undefined)param_2;
  local_1c = 1;
  local_30[0] = 0;
  local_30[4] = (undefined)((uint)param_2 >> 0x18);
  bVar4 = *(char *)(param_1 + 0x3c) != '\0';
  if (bVar4) {
    *(undefined4 *)(param_1 + 0xcc) = 1;
    local_30[5] = 0;
    iVar3 = 6;
  }
  else {
    iVar3 = 5;
  }
  uVar2 = (uint)bVar4;
  if (*(char *)(param_1 + 0x4c) != '\0') {
    local_30[iVar3] = 1;
    uVar1 = *(undefined2 *)(param_1 + 0x54);
    uVar2 = uVar2 + 1;
    local_30[iVar3 + 1] = (char)uVar1;
    local_30[iVar3 + 2] = (char)((ushort)uVar1 >> 8);
    iVar3 = iVar3 + 3;
    *(uint *)(param_1 + 0xcc) = uVar2;
  }
  if (*(char *)(param_1 + 0x5c) != '\0') {
    local_30[iVar3] = 2;
    uVar1 = *(undefined2 *)(param_1 + 100);
    uVar2 = uVar2 + 1;
    local_30[iVar3 + 1] = (char)uVar1;
    local_30[iVar3 + 2] = (char)((ushort)uVar1 >> 8);
    iVar3 = iVar3 + 3;
    *(uint *)(param_1 + 0xcc) = uVar2;
  }
  if (*(char *)(param_1 + 0x6c) != '\0') {
    local_30[iVar3] = 3;
    uVar1 = *(undefined2 *)(param_1 + 0x74);
    uVar2 = uVar2 + 1;
    local_30[iVar3 + 1] = (char)uVar1;
    local_30[iVar3 + 2] = (char)((ushort)uVar1 >> 8);
    iVar3 = iVar3 + 3;
    *(uint *)(param_1 + 0xcc) = uVar2;
  }
  if (*(char *)(param_1 + 0x7c) != '\0') {
    local_30[iVar3] = 4;
    uVar2 = uVar2 + 1;
    *(uint *)(param_1 + 0xcc) = uVar2;
    iVar3 = iVar3 + 1;
  }
  if (*(char *)(param_1 + 0x8c) != '\0') {
    local_30[iVar3] = 5;
    uVar2 = uVar2 + 1;
    *(uint *)(param_1 + 0xcc) = uVar2;
    iVar3 = iVar3 + 1;
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    local_30[iVar3] = 6;
    uVar2 = uVar2 + 1;
    *(uint *)(param_1 + 0xcc) = uVar2;
    iVar3 = iVar3 + 1;
  }
  if (*(char *)(param_1 + 0xac) != '\0') {
    local_30[iVar3] = 7;
    uVar2 = uVar2 + 1;
    *(uint *)(param_1 + 0xcc) = uVar2;
    iVar3 = iVar3 + 1;
  }
  local_16 = (undefined2)iVar3;
  local_34 = *(undefined2 *)(param_1 + 8);
  local_32 = 2;
  *(uint *)(param_1 + 0xd8) = uVar2;
  FUN_0002ffa8(&local_34);
  FUN_00030014();
  return 0;
}


/* ---- FUN_0002fee0 @ 0002fee0 ---- */

undefined4 FUN_0002fee0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0xe;
  }
  else if (param_4 - 1U < 0x20) {
    param_1 = param_1 + param_2 * 0x10;
    *(undefined *)(param_1 + 0x3c) = 1;
    *(short *)(param_1 + 0x44) = (short)param_4;
    *(int *)(param_1 + 0x48) = param_3;
    uVar1 = 0;
  }
  else {
    uVar1 = 9;
  }
  return uVar1;
}


/* ---- FUN_0002ff0c @ 0002ff0c ---- */

undefined4 FUN_0002ff0c(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    uVar1 = 0xe;
  }
  else if (param_4 - 1U < 0x20) {
    param_1 = param_1 + param_2 * 0x10;
    *(undefined *)(param_1 + 0xbc) = 1;
    *(short *)(param_1 + 0xc4) = (short)param_4;
    *(int *)(param_1 + 200) = param_3;
    uVar1 = 0;
  }
  else {
    uVar1 = 9;
  }
  return uVar1;
}


/* ---- FUN_0002ff3c @ 0002ff3c ---- */

undefined4 FUN_0002ff3c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_2 + 1) < 3) && (*(byte *)((int)param_2 + 6) < 0xc)) {
    uVar1 = FUN_0002fda4(param_1,*param_2);
    *(undefined *)(param_1 + 0xdc) = 0;
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}


/* ---- FUN_0002ff60 @ 0002ff60 ---- */

undefined4 FUN_0002ff60(int param_1,undefined2 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xe;
  }
  else {
    *(undefined2 *)(param_1 + 8) = param_2;
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_3 + 0x10);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_3 + 0x2c);
      *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_3 + 0x2a);
      *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(param_3 + 0x1c);
      *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_3 + 0x1a);
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* ---- FUN_0002ff8c @ 0002ff8c ---- */

void FUN_0002ff8c(void)

{
  software_interrupt(0x96);
  return;
}


/* ---- FUN_0002ff90 @ 0002ff90 ---- */

void FUN_0002ff90(void)

{
  software_interrupt(0x98);
  return;
}


/* ---- FUN_0002ff94 @ 0002ff94 ---- */

void FUN_0002ff94(void)

{
  FUN_0001b1fc(DAT_0002ffa4,0,0x120);
  return;
}


/* ---- FUN_0002ffa8 @ 0002ffa8 ---- */

void FUN_0002ffa8(undefined2 *param_1)

{
  undefined uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_00030010;
  puVar2 = DAT_0003000c;
  FUN_0001b1fc(*DAT_0003000c * 0x24 + DAT_00030010,0,8);
  uVar3 = *puVar2;
  iVar5 = uVar3 * 0x24;
  *(undefined2 *)(iVar5 + iVar6) = *param_1;
  iVar4 = iVar6 + iVar5;
  *(undefined *)(iVar4 + 2) = *(undefined *)(param_1 + 1);
  *(undefined2 *)(iVar4 + 0x1a) = param_1[0xd];
  iVar6 = iVar5 + 4 + iVar6;
  *(undefined2 *)(iVar4 + 0x1e) = param_1[0xf];
  *(undefined *)(iVar4 + 0x18) = *(undefined *)(param_1 + 0xc);
  uVar1 = *(undefined *)((int)param_1 + 0x19);
  *(int *)(iVar4 + 0x20) = iVar6;
  *(undefined *)(iVar4 + 0x19) = uVar1;
  *(undefined2 *)(iVar4 + 0x1c) = param_1[0xe];
  if (*(char *)(param_1 + 1) == '\x02') {
    FUN_00031764(iVar6,param_1 + 2,0x14);
    uVar3 = *puVar2;
  }
  *puVar2 = uVar3 + 1 & 7;
  return;
}


/* ---- FUN_00030014 @ 00030014 ---- */

void FUN_00030014(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = DAT_0003005c;
  uVar3 = *DAT_0003005c;
  if (uVar3 != *DAT_00030058) {
    iVar2 = uVar3 * 0x24;
    if (*(char *)(DAT_00030060 + iVar2 + 2) == '\x01') {
      iVar2 = FUN_0002ff8c(*(undefined2 *)(iVar2 + DAT_00030060),
                           *(undefined2 *)(DAT_00030060 + iVar2 + 4),0);
    }
    else {
      iVar2 = FUN_0002ff90(*(undefined2 *)(DAT_00030060 + iVar2),iVar2 + 0x18 + DAT_00030060);
    }
    if (iVar2 == 0) {
      *puVar1 = uVar3 + 1 & 7;
    }
  }
  return;
}


/* ---- FUN_00030064 @ 00030064 ---- */

void FUN_00030064(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_000302fc;
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    if (*(byte *)(param_1 + 0xdc) < 9) break;
    *(undefined *)(param_1 + 0xdc) = 8;
  }
                    /* WARNING: Could not recover jumptable at 0x00030092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + (uint)*(byte *)(param_1 + 0xdc) * 4))();
  return;
}


/* ---- FUN_00030300 @ 00030300 ---- */

void FUN_00030300(void)

{
  software_interrupt(0x90);
  return;
}


/* ---- FUN_00030304 @ 00030304 ---- */

void FUN_00030304(void)

{
  software_interrupt(0x92);
  return;
}


/* ---- FUN_00030308 @ 00030308 ---- */

void FUN_00030308(void)

{
  software_interrupt(0x93);
  return;
}


/* ---- FUN_0003030c @ 0003030c ---- */

void FUN_0003030c(int param_1)

{
  char cVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = *DAT_000303b4;
  if (iVar3 != 0) {
    psVar2 = (short *)(param_1 + (uint)*(byte *)(param_1 + DAT_000303b8) * (DAT_000303b8 + -0x1f6));
    cVar1 = *(char *)(psVar2 + 1);
    if ((((*(char *)(DAT_000303bc + 1) == cVar1) && (*psVar2 == *DAT_000303bc)) ||
        ((iVar3 != 1 &&
         (((*(char *)(DAT_000303bc + 3) == cVar1 && (DAT_000303bc[2] == *psVar2)) ||
          ((iVar3 != 2 &&
           (((*(char *)(DAT_000303bc + 5) == cVar1 && (DAT_000303bc[4] == *psVar2)) ||
            ((iVar3 != 3 &&
             (((*(char *)(DAT_000303bc + 7) == cVar1 && (DAT_000303bc[6] == *psVar2)) ||
              ((iVar3 != 4 &&
               (((*(char *)(DAT_000303bc + 9) == cVar1 && (DAT_000303bc[8] == *psVar2)) ||
                ((iVar3 != 5 &&
                 ((*(char *)(DAT_000303bc + 0xb) == cVar1 && (DAT_000303bc[10] == *psVar2)))))))))))
             ))))))))))) && (*DAT_000303c0 != (code *)0x0)) {
      (**DAT_000303c0)();
    }
  }
  return;
}


/* ---- FUN_000303c4 @ 000303c4 ---- */

void FUN_000303c4(int param_1,int param_2,undefined2 param_3)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  iVar8 = DAT_00030500;
  puVar4 = DAT_000304fc;
  puVar3 = DAT_000304f0;
  bVar2 = *(byte *)(param_1 + DAT_000304ec);
  uVar6 = *DAT_000304f0;
  if (uVar6 != 0) {
    psVar7 = (short *)(param_1 + (uint)bVar2 * 100);
    cVar1 = *(char *)(psVar7 + 1);
    if ((((*(char *)(DAT_000304f4 + 1) == cVar1) && (*psVar7 == *DAT_000304f4)) ||
        ((uVar6 != 1 &&
         (((*(char *)(DAT_000304f4 + 3) == cVar1 && (*psVar7 == DAT_000304f4[2])) ||
          ((uVar6 != 2 &&
           (((*(char *)(DAT_000304f4 + 5) == cVar1 && (DAT_000304f4[4] == *psVar7)) ||
            ((uVar6 != 3 &&
             (((*(char *)(DAT_000304f4 + 7) == cVar1 && (DAT_000304f4[6] == *psVar7)) ||
              ((uVar6 != 4 &&
               (((*(char *)(DAT_000304f4 + 9) == cVar1 && (DAT_000304f4[8] == *psVar7)) ||
                ((uVar6 != 5 &&
                 ((*(char *)(DAT_000304f4 + 0xb) == cVar1 && (DAT_000304f4[10] == *psVar7)))))))))))
             ))))))))))) &&
       ((iVar5 = *DAT_000304f8, iVar5 != 0 && (uVar9 = *DAT_000304fc, uVar9 < 6)))) {
      iVar10 = uVar9 * 0x6c + DAT_00030500;
      *(undefined2 *)(iVar10 + 2) = param_3;
      FUN_00031764(iVar10 + 4,param_1 + (uint)bVar2 * 100);
      *(char *)(iVar8 + uVar9 * 0x6c) = (param_2 == 0) * '\x02';
      *(int *)(iVar10 + 0x68) = iVar5;
      *puVar4 = uVar9 + 1;
      if (uVar9 + 1 == uVar6) {
        uVar6 = 0;
        do {
          (**(code **)(iVar8 + 0x68))(iVar8);
          uVar6 = uVar6 + 1;
          iVar8 = iVar8 + 0x6c;
        } while (uVar6 < *puVar3);
        *puVar4 = 0;
      }
    }
  }
  return;
}


/* ---- FUN_00030504 @ 00030504 ---- */

undefined4 FUN_00030504(int param_1,undefined *param_2,undefined4 param_3)

{
  ushort *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (uint)*(byte *)(param_1 + DAT_000305d0);
  iVar5 = (uint)*(byte *)(param_1 + DAT_000305cc) * 100;
  iVar3 = param_1 + iVar5;
  uVar4 = (uint)*(byte *)(iVar3 + 4);
  iVar7 = param_1 + uVar6 * 0x12 + iVar5 + 10;
  if (uVar6 + 1 == uVar4) {
    if (*(short *)(iVar7 + 8) != *(short *)(iVar3 + 8)) {
LAB_0003056e:
      *param_2 = 0;
      uVar2 = FUN_00030308(param_3);
      return uVar2;
    }
  }
  else if (uVar6 < uVar4) {
    iVar5 = param_1 + (uVar6 + 1) * 0x12 + iVar5 + 10;
    do {
      puVar1 = (ushort *)(iVar7 + 8);
      if (uVar4 - 1 == uVar6) {
        if ((uint)*puVar1 != (uint)*(ushort *)(iVar3 + 8)) goto LAB_0003056e;
        iVar7 = 0;
      }
      else {
        iVar7 = iVar5;
        if (*puVar1 + 1 != (uint)*(ushort *)(iVar5 + 6)) goto LAB_0003056e;
      }
      uVar6 = uVar6 + 1;
      *(char *)(param_1 + DAT_000305d0) = (char)uVar6;
      iVar5 = iVar5 + 0x12;
    } while ((uVar6 & 0xff) < uVar4);
  }
  *param_2 = 1;
  return 0;
}


/* ---- FUN_000305d4 @ 000305d4 ---- */

undefined4 FUN_000305d4(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xe;
  }
  else {
    *DAT_000305f4 = 0;
    *DAT_000305f8 = 1;
    *DAT_000305fc = 0;
    *DAT_00030600 = param_1;
    uVar1 = 0;
  }
  return uVar1;
}


/* ---- FUN_00030604 @ 00030604 ---- */

undefined4 FUN_00030604(short *param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = DAT_000306cc;
  if (param_1 == (short *)0x0) {
    return 0xe;
  }
  if (*DAT_000306c8 == '\0') {
    return 8;
  }
  uVar3 = *DAT_000306cc;
  if (uVar3 == 0) {
    uVar4 = 1;
    goto LAB_00030678;
  }
  cVar1 = *(char *)(param_1 + 1);
  if ((*(char *)(DAT_000306d0 + 1) == cVar1) && (*DAT_000306d0 == *param_1)) {
LAB_00030668:
    if (*DAT_000306d4 != 0) {
      return 0;
    }
    if (5 < uVar3) {
      return 4;
    }
  }
  else if (uVar3 != 1) {
    if ((*(char *)(DAT_000306d0 + 3) != cVar1) || (DAT_000306d0[2] != *param_1)) {
      if (uVar3 == 2) goto LAB_00030676;
      if ((*(char *)(DAT_000306d0 + 5) != cVar1) || (DAT_000306d0[4] != *param_1)) {
        if (uVar3 == 3) goto LAB_00030676;
        if ((*(char *)(DAT_000306d0 + 7) != cVar1) || (DAT_000306d0[6] != *param_1)) {
          if (uVar3 == 4) goto LAB_00030676;
          if ((*(char *)(DAT_000306d0 + 9) != cVar1) || (DAT_000306d0[8] != *param_1)) {
            if (uVar3 == 5) goto LAB_00030676;
            if (*(char *)(DAT_000306d0 + 0xb) != cVar1) {
              return 4;
            }
            if (DAT_000306d0[10] != *param_1) {
              return 4;
            }
          }
        }
      }
    }
    goto LAB_00030668;
  }
LAB_00030676:
  uVar4 = uVar3 + 1;
LAB_00030678:
  FUN_00031764(DAT_000306d0 + uVar3 * 2,param_1,4);
  *puVar2 = uVar4;
  return 0;
}


/* ---- FUN_000306d8 @ 000306d8 ---- */

int FUN_000306d8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_00030740;
  if (param_1 == 0) {
    iVar3 = 0xe;
  }
  else if ((*DAT_00030738 == '\0') || (*DAT_0003073c == 0)) {
    iVar3 = 8;
  }
  else if (*(char *)(param_1 + DAT_00030740) == '\0') {
    *(short *)(param_1 + DAT_00030744) = (short)param_2;
    uVar2 = DAT_0003074c;
    *DAT_00030748 = 0;
    *(undefined *)(param_1 + 0x25c) = 0;
    *(undefined *)(param_1 + DAT_00030750) = 0;
    *(undefined *)(param_1 + DAT_00030754) = 0;
    FUN_00031764(param_1,uVar2,4);
    iVar3 = FUN_00030300(param_2,1,param_1);
    if (iVar3 == 0) {
      *(undefined *)(param_1 + iVar1) = 1;
    }
  }
  else {
    iVar3 = 0x11;
  }
  return iVar3;
}


/* ---- FUN_00030758 @ 00030758 ---- */

void FUN_00030758(int param_1,ushort *param_2)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  ushort *puVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  uint local_9c;
  char local_91;
  undefined2 local_90;
  ushort local_8e;
  int local_8c;
  
  uVar10 = DAT_00030948;
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (ushort *)0x0) {
    return;
  }
  if (*DAT_00030928 == '\0') {
    return;
  }
  uVar7 = *param_2;
  if (uVar7 == 0x32) {
    if (param_2[2] != *(ushort *)(param_1 + DAT_00030c94)) {
      return;
    }
    if (param_2[3] == 0) {
      uVar10 = (uint)*(byte *)(param_1 + DAT_00030c98);
      iVar14 = uVar10 * 100 + param_1;
      uVar9 = (uint)*(byte *)(iVar14 + 4);
      if (*(byte *)(param_2 + 6) + uVar9 < 6) {
        local_9c = *(byte *)(param_2 + 6) + uVar9 & 0xff;
      }
      else {
        local_9c = 5;
      }
      *(char *)(iVar14 + 4) = (char)local_9c;
      uVar8 = uVar9;
      if (uVar9 < local_9c) {
        iVar5 = uVar10 * 100;
        iVar13 = param_1 + uVar9 * 0x12 + iVar5;
        FUN_00031764(iVar13 + 10,param_2 + 7,10);
        *(undefined2 *)(iVar13 + 0x14) = 0;
        *(undefined2 *)(iVar13 + 0x16) = 0;
        *(undefined2 *)(iVar13 + 0x18) = 0;
        *(undefined2 *)(iVar13 + 0x1a) = 0;
        uVar8 = local_9c;
        if (uVar9 + 1 < local_9c) {
          iVar13 = param_1 + (uVar9 + 1) * 0x12 + iVar5;
          FUN_00031764(iVar13 + 10,param_2 + 0xc,10);
          *(undefined2 *)(iVar13 + 0x14) = 0;
          *(undefined2 *)(iVar13 + 0x16) = 0;
          *(undefined2 *)(iVar13 + 0x18) = 0;
          *(undefined2 *)(iVar13 + 0x1a) = 0;
          if (uVar9 + 2 < local_9c) {
            iVar13 = param_1 + (uVar9 + 2) * 0x12 + iVar5;
            FUN_00031764(iVar13 + 10,param_2 + 0x11,10);
            *(undefined2 *)(iVar13 + 0x14) = 0;
            *(undefined2 *)(iVar13 + 0x16) = 0;
            *(undefined2 *)(iVar13 + 0x18) = 0;
            *(undefined2 *)(iVar13 + 0x1a) = 0;
            if (uVar9 + 3 < local_9c) {
              iVar13 = param_1 + (uVar9 + 3) * 0x12 + iVar5;
              FUN_00031764(iVar13 + 10,param_2 + 0x16,10);
              *(undefined2 *)(iVar13 + 0x14) = 0;
              *(undefined2 *)(iVar13 + 0x16) = 0;
              *(undefined2 *)(iVar13 + 0x18) = 0;
              *(undefined2 *)(iVar13 + 0x1a) = 0;
              if (uVar9 + 4 < local_9c) {
                iVar5 = param_1 + (uVar9 + 4) * 0x12 + iVar5;
                FUN_00031764(iVar5 + 10,param_2 + 0x1b,10);
                *(undefined2 *)(iVar5 + 0x14) = 0;
                *(undefined2 *)(iVar5 + 0x16) = 0;
                *(undefined2 *)(iVar5 + 0x18) = 0;
                *(undefined2 *)(iVar5 + 0x1a) = 0;
              }
            }
          }
        }
      }
      local_8e = *(ushort *)(iVar14 + 8);
      if ((*(ushort *)(param_1 + (uVar8 - 1) * 0x12 + uVar10 * 100 + 0x12) < local_8e) &&
         (local_9c != 5)) {
        *(char *)(param_1 + DAT_00030c9c) = (char)local_9c;
        if (local_9c == 0) {
          local_90 = *(short *)(iVar14 + 6);
        }
        else {
          local_90 = *(short *)(param_1 + (local_9c - 1 & 0xff) * 0x12 + uVar10 * 100 + 0x12) + 1;
        }
        iVar14 = FUN_00030304(param_2[2],&local_90);
        if (iVar14 == 0) {
          return;
        }
        *(undefined *)(param_1 + DAT_00030ca4) = 0;
        FUN_0003030c(param_1,iVar14,param_2[2]);
        puVar3 = DAT_00030ca8;
        *DAT_00030ca8 = 3;
        *(ushort *)(puVar3 + 2) = param_2[2];
        return;
      }
    }
    iVar14 = DAT_00030c9c;
    *(undefined *)(param_1 + DAT_00030c9c) = 0;
    local_8c = FUN_00030504(param_1,&local_91,param_2[2]);
    if (local_8c != 0) {
      *(undefined *)(param_1 + DAT_00030ca4) = 0;
      local_8e = param_2[2];
      uVar10 = *DAT_00030ca0;
      if (uVar10 != 0) {
        psVar11 = (short *)(param_1 + (uint)*(byte *)(param_1 + DAT_00030c98) * 100);
        cVar1 = *(char *)(psVar11 + 1);
        if ((((*(char *)(DAT_00030cb0 + 1) == cVar1) && (*DAT_00030cb0 == *psVar11)) ||
            ((uVar10 != 1 &&
             (((*(char *)(DAT_00030cb0 + 3) == cVar1 && (DAT_00030cb0[2] == *psVar11)) ||
              ((uVar10 != 2 &&
               (((*(char *)(DAT_00030cb0 + 5) == cVar1 && (DAT_00030cb0[4] == *psVar11)) ||
                ((uVar10 != 3 &&
                 (((*(char *)(DAT_00030cb0 + 7) == cVar1 && (DAT_00030cb0[6] == *psVar11)) ||
                  ((uVar10 != 4 &&
                   (((*(char *)(DAT_00030cb0 + 9) == cVar1 && (DAT_00030cb0[8] == *psVar11)) ||
                    ((uVar10 != 5 &&
                     ((*(char *)(DAT_00030cb0 + 0xb) == cVar1 && (DAT_00030cb0[10] == *psVar11))))))
                   )))))))))))))))) && (*DAT_00030cb4 != (code *)0x0)) {
          local_90 = CONCAT11(local_90._1_1_,1);
          (**DAT_00030cb4)(&local_90);
          local_8e = param_2[2];
        }
      }
      goto LAB_00030860;
    }
    if (local_91 == '\0') {
      return;
    }
    FUN_000303c4(param_1,1,param_2[2]);
    uVar7 = param_2[2];
    bVar6 = *(char *)(param_1 + 0x25c) + 1;
    *(byte *)(param_1 + 0x25c) = bVar6;
    iVar5 = DAT_00030fb4;
    if (*DAT_00030ca0 <= (uint)bVar6) {
      *(undefined *)(param_1 + DAT_00030ca4) = 0;
      puVar3 = DAT_00030ca8;
      *DAT_00030ca8 = 3;
      *(ushort *)(puVar3 + 2) = uVar7;
      return;
    }
    *(undefined *)(param_1 + iVar14) = 0;
    psVar11 = DAT_00030fb0;
    bVar6 = *(char *)(param_1 + iVar5) + 1;
    *(byte *)(param_1 + iVar5) = bVar6;
    iVar14 = param_1 + (uint)bVar6 * 100;
    FUN_00031764(iVar14,psVar11 + (uint)bVar6 * 2,4);
    *(undefined *)(iVar14 + 4) = 0;
    iVar14 = FUN_00030300(uVar7,1,iVar14);
    if (iVar14 == 0) {
      return;
    }
    *(undefined *)(param_1 + DAT_00030fb8) = 0;
    goto LAB_00030e32;
  }
  if (0x32 < uVar7) {
    if (uVar7 != 0x33) {
      return;
    }
    if (param_2[2] != *(ushort *)(param_1 + DAT_0003092c)) {
      return;
    }
    bVar6 = *(byte *)(param_1 + DAT_00030930);
    bVar2 = *(byte *)(param_1 + DAT_00030934);
    if ((param_2[3] == 0) && (param_2[6] != 0)) {
      iVar14 = param_1 + (uint)bVar2 * 0x12 + (uint)bVar6 * 100;
      uVar9 = 0;
      puVar4 = param_2 + 7;
      do {
        uVar8 = (uint)puVar4[1];
        if (uVar8 == uVar10) {
          uVar7 = *puVar4;
          *(ushort *)(iVar14 + 0x14) = uVar7;
        }
        else if (uVar10 < uVar8) {
          if (uVar8 == DAT_00030cac) {
            *(ushort *)(iVar14 + 0x1a) = *puVar4;
          }
LAB_00030af2:
          uVar7 = *(ushort *)(iVar14 + 0x14);
        }
        else if (uVar8 == 0x2900) {
          *(ushort *)(iVar14 + 0x16) = *puVar4;
          uVar7 = *(ushort *)(iVar14 + 0x14);
        }
        else {
          if (uVar8 != DAT_0003094c) goto LAB_00030af2;
          *(ushort *)(iVar14 + 0x18) = *puVar4;
          uVar7 = *(ushort *)(iVar14 + 0x14);
        }
        if ((((uVar7 != 0) && (*(short *)(iVar14 + 0x16) != 0)) && (*(short *)(iVar14 + 0x18) != 0))
           && (*(ushort *)(iVar14 + 0x1a) != 0)) break;
        uVar9 = uVar9 + 1;
        puVar4 = puVar4 + 3;
      } while (uVar9 < param_2[6]);
    }
    local_91 = '\0';
    uVar10 = bVar2 + 1;
    if (uVar10 == *(byte *)(param_1 + (uint)bVar6 * 100 + 4)) {
      local_91 = '\x01';
    }
    else {
      *(char *)(param_1 + DAT_00030c9c) = (char)uVar10;
      local_8c = FUN_00030504(param_1,&local_91,param_2[2]);
      if (local_8c != 0) {
        *(undefined *)(param_1 + DAT_00030fb8) = 0;
        local_8e = param_2[2];
        iVar14 = *DAT_00030fc0;
        if (iVar14 == 0) goto LAB_00030860;
        psVar11 = (short *)(param_1 + (uint)*(byte *)(param_1 + DAT_00030fb4) * 100);
        cVar1 = *(char *)(psVar11 + 1);
        if ((*(char *)(DAT_00030fb0 + 1) != cVar1) || (*DAT_00030fb0 != *psVar11)) {
          if (iVar14 == 1) goto LAB_00030860;
          if ((*(char *)(DAT_00030fb0 + 3) != cVar1) || (DAT_00030fb0[2] != *psVar11)) {
            if (iVar14 == 2) goto LAB_00030860;
            if ((*(char *)(DAT_00030fb0 + 5) != cVar1) || (DAT_00030fb0[4] != *psVar11)) {
              if (iVar14 == 3) goto LAB_00030860;
              if ((*(char *)(DAT_00030fb0 + 7) != cVar1) || (DAT_00030fb0[6] != *psVar11)) {
                if (iVar14 == 4) goto LAB_00030860;
                if ((*(char *)(DAT_00030fb0 + 9) != cVar1) || (DAT_00030fb0[8] != *psVar11)) {
                  if ((iVar14 == 5) ||
                     (psVar12 = DAT_00030fb0, *(char *)(DAT_00030fb0 + 0xb) != cVar1))
                  goto LAB_00030860;
                  goto LAB_00030dd0;
                }
              }
            }
          }
        }
        goto LAB_00030dda;
      }
      if (local_91 == '\0') {
        return;
      }
    }
    FUN_000303c4(param_1,1,param_2[2]);
    uVar7 = param_2[2];
    bVar6 = *(char *)(param_1 + 0x25c) + 1;
    *(byte *)(param_1 + 0x25c) = bVar6;
    iVar14 = DAT_00030fb4;
    if (*DAT_00030ca0 <= (uint)bVar6) {
      *(undefined *)(param_1 + DAT_00030ca4) = 0;
      puVar3 = DAT_00030ca8;
      *DAT_00030ca8 = 3;
      *(ushort *)(puVar3 + 2) = uVar7;
      return;
    }
    *(undefined *)(param_1 + DAT_00030fac) = 0;
    bVar6 = *(char *)(param_1 + iVar14) + 1;
    *(byte *)(param_1 + iVar14) = bVar6;
    iVar14 = param_1 + (uint)bVar6 * 100;
    FUN_00031764(iVar14,DAT_00030fb0 + (uint)bVar6 * 2,4);
    *(undefined *)(iVar14 + 4) = 0;
    iVar14 = FUN_00030300(uVar7,1,iVar14);
    if (iVar14 == 0) {
      return;
    }
    *(undefined *)(param_1 + DAT_00030fb8) = 0;
LAB_00030e32:
    FUN_0003030c(param_1,iVar14,uVar7);
    puVar3 = DAT_00030fbc;
    *DAT_00030fbc = 3;
    *(ushort *)(puVar3 + 2) = uVar7;
    return;
  }
  if (uVar7 == 0x11) {
    if (param_2[2] != *(ushort *)(param_1 + DAT_0003092c)) {
      return;
    }
    *(undefined *)(param_1 + DAT_00030938) = 0;
    return;
  }
  if (uVar7 != 0x30) {
    return;
  }
  if (*(ushort *)(param_1 + DAT_0003092c) != param_2[2]) {
    return;
  }
  if (param_2[3] != 0) {
    FUN_000303c4(param_1,0);
    uVar7 = param_2[2];
    bVar6 = *(char *)(param_1 + 0x25c) + 1;
    *(byte *)(param_1 + 0x25c) = bVar6;
    psVar11 = DAT_00030fb0;
    uVar10 = *DAT_00030ca0;
    if (uVar10 <= bVar6) {
      *(undefined *)(param_1 + DAT_00030ca4) = 0;
      puVar3 = DAT_00030ca8;
      *DAT_00030ca8 = 3;
      *(ushort *)(puVar3 + 2) = uVar7;
      return;
    }
    *(undefined *)(param_1 + DAT_00030fac) = 0;
    iVar14 = DAT_00030fb4;
    bVar6 = *(char *)(param_1 + DAT_00030fb4) + 1;
    *(byte *)(param_1 + DAT_00030fb4) = bVar6;
    iVar5 = iVar14 + -0x1f6;
    iVar13 = (uint)bVar6 * iVar5 + param_1;
    FUN_00031764(iVar13,psVar11 + (uint)bVar6 * 2,4);
    *(undefined *)(iVar13 + 4) = 0;
    local_8c = FUN_00030300(uVar7,1,iVar13);
    if (local_8c == 0) {
      return;
    }
    *(undefined *)(param_1 + DAT_00030fb8) = 0;
    psVar12 = (short *)(param_1 + (uint)*(byte *)(param_1 + iVar14) * iVar5);
    cVar1 = *(char *)(psVar12 + 1);
    if ((((*(char *)(psVar11 + 1) == cVar1) && (*psVar12 == *psVar11)) ||
        ((uVar10 != 1 &&
         (((*(char *)(psVar11 + 3) == cVar1 && (psVar11[2] == *psVar12)) ||
          ((uVar10 != 2 &&
           (((*(char *)(psVar11 + 5) == cVar1 && (psVar11[4] == *psVar12)) ||
            ((uVar10 != 3 &&
             (((*(char *)(psVar11 + 7) == cVar1 && (psVar11[6] == *psVar12)) ||
              ((uVar10 != 4 &&
               (((*(char *)(psVar11 + 9) == cVar1 && (psVar11[8] == *psVar12)) ||
                ((uVar10 != 5 && ((*(char *)(psVar11 + 0xb) == cVar1 && (psVar11[10] == *psVar12))))
                )))))))))))))))))) && (*DAT_00030fc4 != (code *)0x0)) {
      local_90 = CONCAT11(local_90._1_1_,1);
      local_8e = uVar7;
      (**DAT_00030fc4)(&local_90);
    }
    puVar3 = DAT_00030fbc;
    *DAT_00030fbc = 3;
    *(ushort *)(puVar3 + 2) = uVar7;
    return;
  }
  bVar6 = *(byte *)(param_1 + DAT_00030930);
  iVar14 = param_1 + (uint)bVar6 * 100;
  FUN_00031764(iVar14,param_2 + 7,4);
  FUN_00031764(iVar14 + 6,param_2 + 9,4);
  if (*(char *)(param_1 + DAT_00030934) == '\0') {
    local_90 = *(short *)(iVar14 + 6);
  }
  else {
    local_90 = *(short *)(param_1 + (uint)(byte)(*(char *)(param_1 + DAT_00030934) - 1) * 0x12 +
                                    (uint)bVar6 * 100 + 0x12) + 1;
  }
  local_8e = *(undefined2 *)(iVar14 + 8);
  local_8c = FUN_00030304(param_2[2],&local_90);
  if (local_8c == 0) {
    return;
  }
  *(undefined *)(param_1 + DAT_00030938) = 0;
  iVar14 = *DAT_0003093c;
  local_8e = param_2[2];
  if (iVar14 == 0) goto LAB_00030860;
  psVar11 = (short *)(param_1 + (uint)*(byte *)(param_1 + DAT_00030930) * (DAT_00030930 + -0x1f6));
  cVar1 = *(char *)(psVar11 + 1);
  if ((*(char *)(DAT_00030940 + 1) != cVar1) || (*psVar11 != *DAT_00030940)) {
    if (iVar14 == 1) goto LAB_00030860;
    if ((*(char *)(DAT_00030940 + 3) != cVar1) || (DAT_00030940[2] != *psVar11)) {
      if (iVar14 == 2) goto LAB_00030860;
      if ((*(char *)(DAT_00030940 + 5) != cVar1) || (DAT_00030940[4] != *psVar11)) {
        if (iVar14 == 3) goto LAB_00030860;
        if ((*(char *)(DAT_00030940 + 7) != cVar1) || (*psVar11 != DAT_00030940[6])) {
          if (iVar14 == 4) goto LAB_00030860;
          if ((*(char *)(DAT_00030940 + 9) != cVar1) || (*psVar11 != DAT_00030940[8])) {
            if ((iVar14 == 5) || (psVar12 = DAT_00030940, *(char *)(DAT_00030940 + 0xb) != cVar1))
            goto LAB_00030860;
LAB_00030dd0:
            if (psVar12[10] != *psVar11) goto LAB_00030860;
          }
        }
      }
    }
  }
LAB_00030dda:
  if (*DAT_00030fc4 != (code *)0x0) {
    local_90 = CONCAT11(local_90._1_1_,1);
    (**DAT_00030fc4)(&local_90);
    local_8e = param_2[2];
  }
LAB_00030860:
  puVar3 = DAT_00030944;
  *DAT_00030944 = 3;
  *(ushort *)(puVar3 + 2) = local_8e;
  return;
}


/* ---- FUN_00030fd4 @ 00030fd4 ---- */

void FUN_00030fd4(void)

{
  software_interrupt(0x52);
  return;
}


/* ---- FUN_00030fd8 @ 00030fd8 ---- */

void FUN_00030fd8(void)

{
  software_interrupt(0x10);
  return;
}


/* ---- FUN_00030fdc @ 00030fdc ---- */

void FUN_00030fdc(void)

{
  software_interrupt(0x60);
  return;
}


/* ---- FUN_00030fe0 @ 00030fe0 ---- */

void FUN_00030fe0(void)

{
  software_interrupt(0x61);
  return;
}


/* ---- FUN_00030fec @ 00030fec ---- */

void FUN_00030fec(void)

{
  bool bVar1;
  code **ppcVar2;
  char *pcVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  code **ppcVar6;
  int iVar7;
  undefined4 uVar8;
  char cVar9;
  undefined4 local_2c;
  
  ppcVar6 = DAT_000310d4;
  puVar5 = DAT_000310d0;
  puVar4 = DAT_000310cc;
  pcVar3 = DAT_000310c8;
  ppcVar2 = DAT_000310c4;
  cVar9 = *DAT_000310c4 == (code *)0x0;
  if (*DAT_000310c8 == '\0') {
    iVar7 = FUN_00030fd4(&local_2c);
    if (iVar7 == 5) goto LAB_00031094;
LAB_00031024:
    if (iVar7 == 0) {
      FUN_0001ddb0(local_2c);
      if (*ppcVar6 != (code *)0x0) {
        (**ppcVar6)(local_2c);
      }
    }
    else {
      FUN_0001b210(iVar7,0xa5,DAT_000310d8);
    }
    if (cVar9 != '\0') goto LAB_00031082;
    cVar9 = *pcVar3;
    bVar1 = false;
    if (cVar9 == '\0') {
      do {
        local_2c = CONCAT22(local_2c._2_2_,*puVar4);
        uVar8 = *puVar5;
        iVar7 = FUN_00030fe0(uVar8,&local_2c);
        if (iVar7 == 5) {
          if (bVar1) {
            return;
          }
LAB_00031082:
          cVar9 = '\x01';
LAB_00031084:
          if (*pcVar3 != '\0') {
            return;
          }
          iVar7 = FUN_00030fd4(&local_2c);
          if (iVar7 != 5) goto LAB_00031024;
LAB_00031094:
          if (cVar9 != '\0') {
            return;
          }
        }
        else {
          if (iVar7 == 0) {
            (**ppcVar2)(uVar8);
          }
          else {
            FUN_0001b210(iVar7,0xca,DAT_000310d8);
          }
          if (!bVar1) goto LAB_00031084;
        }
        bVar1 = true;
        cVar9 = *pcVar3;
        if (cVar9 != '\0') {
          return;
        }
      } while( true );
    }
  }
  return;
}


/* ---- FUN_000310dc @ 000310dc ---- */

undefined FUN_000310dc(void)

{
  return *DAT_000310e4;
}


/* ---- FUN_000310e8 @ 000310e8 ---- */

int FUN_000310e8(undefined4 param_1,uint param_2,undefined2 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_2 == 0) || ((param_2 & 3) != 0)) {
    iVar3 = 7;
  }
  else {
    *DAT_00031164 = param_2;
    puVar1 = DAT_0003116c;
    *DAT_00031168 = param_3;
    *DAT_00031170 = param_4;
    uVar2 = DAT_00031174;
    if ((*puVar1 & 1) == 0) {
      iVar3 = FUN_00030fd8(param_1,DAT_00031174);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      puVar1[0x20] = 1;
      iVar3 = FUN_00030fd8(param_1,uVar2);
      if (iVar3 != 0) {
        *puVar1 = 1;
        return iVar3;
      }
    }
    *DAT_00031178 = 1;
    FUN_0001ddd4();
    iVar3 = DAT_00031180;
    if ((DAT_0003116c[0xc5] >> 0x16 & 1) != 0) {
      if (DAT_0003117c[1] == 0) {
        *DAT_0003116c = 0x400000;
        iVar3 = 0;
      }
      else {
        *DAT_0003117c = *DAT_0003117c | 0x400000;
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}


/* ---- FUN_00031184 @ 00031184 ---- */

undefined4 FUN_00031184(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xe;
  }
  else {
    *DAT_00031194 = param_1;
    uVar1 = 0;
  }
  return uVar1;
}


/* ---- FUN_00031198 @ 00031198 ---- */

undefined4 FUN_00031198(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xe;
  }
  else {
    *DAT_000311a8 = param_1;
    uVar1 = 0;
  }
  return uVar1;
}


/* ---- FUN_000311ac @ 000311ac ---- */

void FUN_000311ac(void)

{
  int iVar1;
  
  if (*DAT_000311d8 == (code *)0x0) {
    if (*DAT_000311e0 != '\0') {
      FUN_00030fec();
    }
  }
  else {
    iVar1 = (**DAT_000311d8)();
    if (iVar1 != 0) {
      FUN_0001b210(iVar1,0x1ab,DAT_000311dc);
    }
  }
  return;
}


/* ---- FUN_000311e4 @ 000311e4 ---- */

undefined4 FUN_000311e4(int param_1,undefined param_2,undefined2 *param_3)

{
  FUN_0001b1fc(param_3,0,0x14);
  *(undefined4 *)(param_3 + 8) = 0;
  *param_3 = 1;
  *(byte *)(param_3 + 6) = *(byte *)(param_3 + 6) & 0xfe;
  *(undefined *)(param_3 + 4) = param_2;
  *(char *)((int)param_3 + 9) = (char)param_1;
  if (param_1 != 0) {
    *(undefined *)(param_3 + 5) = 1;
  }
  return 0;
}


/* ---- FUN_00031214 @ 00031214 ---- */

void FUN_00031214(undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = DAT_0003122c;
  local_10 = DAT_0003122c;
  FUN_00030fdc(param_1,&local_10);
  return;
}


/* ---- FUN_00031230 @ 00031230 ---- */

undefined8 FUN_00031230(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = 0;
  if (param_2 <= param_1 >> 1) {
    if (param_2 <= param_1 >> 4) {
      if (param_2 <= param_1 >> 8) {
        if (param_1 >> 0xc < param_2) goto LAB_0003129c;
        if (param_2 <= param_1 >> 0x10) {
          iVar2 = -0x1000000;
          uVar3 = param_2 << 8;
          if (param_2 << 8 <= param_1 >> 0x10) {
            iVar2 = -0x10000;
            uVar3 = param_2 << 0x10;
            if (param_2 << 0x10 == 0) {
              uVar1 = FUN_00031518(0);
              return CONCAT44(param_1,uVar1);
            }
          }
          param_2 = uVar3;
          if (param_1 >> 0xc < param_2) goto LAB_0003129c;
        }
        while( true ) {
          bVar4 = param_2 <= param_1 >> 0xf;
          if (bVar4) {
            bVar4 = param_2 * 0x8000 <= param_1;
            param_1 = param_1 + param_2 * -0x8000;
          }
          bVar5 = param_2 <= param_1 >> 0xe;
          if (bVar5) {
            bVar5 = param_2 * 0x4000 <= param_1;
            param_1 = param_1 + param_2 * -0x4000;
          }
          bVar6 = param_2 <= param_1 >> 0xd;
          if (bVar6) {
            bVar6 = param_2 * 0x2000 <= param_1;
            param_1 = param_1 + param_2 * -0x2000;
          }
          bVar7 = param_2 <= param_1 >> 0xc;
          if (bVar7) {
            bVar7 = param_2 * 0x1000 <= param_1;
            param_1 = param_1 + param_2 * -0x1000;
          }
          iVar2 = (((iVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 +
                  (uint)bVar7;
LAB_0003129c:
          bVar4 = param_2 <= param_1 >> 0xb;
          if (bVar4) {
            bVar4 = param_2 * 0x800 <= param_1;
            param_1 = param_1 + param_2 * -0x800;
          }
          bVar5 = param_2 <= param_1 >> 10;
          if (bVar5) {
            bVar5 = param_2 * 0x400 <= param_1;
            param_1 = param_1 + param_2 * -0x400;
          }
          bVar6 = param_2 <= param_1 >> 9;
          if (bVar6) {
            bVar6 = param_2 * 0x200 <= param_1;
            param_1 = param_1 + param_2 * -0x200;
          }
          uVar3 = ((iVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6;
          bVar4 = param_2 <= param_1 >> 8;
          if (bVar4) {
            bVar4 = param_2 * 0x100 <= param_1;
            param_1 = param_1 + param_2 * -0x100;
          }
          iVar2 = uVar3 * 2 + (uint)bVar4;
          if (!CARRY4(uVar3,uVar3) && !CARRY4(uVar3 * 2,(uint)bVar4)) break;
          param_2 = param_2 >> 8;
        }
      }
      bVar4 = param_2 <= param_1 >> 7;
      if (bVar4) {
        bVar4 = param_2 * 0x80 <= param_1;
        param_1 = param_1 + param_2 * -0x80;
      }
      bVar5 = param_2 <= param_1 >> 6;
      if (bVar5) {
        bVar5 = param_2 * 0x40 <= param_1;
        param_1 = param_1 + param_2 * -0x40;
      }
      bVar6 = param_2 <= param_1 >> 5;
      if (bVar6) {
        bVar6 = param_2 * 0x20 <= param_1;
        param_1 = param_1 + param_2 * -0x20;
      }
      bVar7 = param_2 <= param_1 >> 4;
      if (bVar7) {
        bVar7 = param_2 * 0x10 <= param_1;
        param_1 = param_1 + param_2 * -0x10;
      }
      iVar2 = (((iVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
    }
    bVar4 = param_2 <= param_1 >> 3;
    if (bVar4) {
      bVar4 = param_2 * 8 <= param_1;
      param_1 = param_1 + param_2 * -8;
    }
    bVar5 = param_2 <= param_1 >> 2;
    if (bVar5) {
      bVar5 = param_2 * 4 <= param_1;
      param_1 = param_1 + param_2 * -4;
    }
    bVar6 = param_2 <= param_1 >> 1;
    if (bVar6) {
      bVar6 = param_2 * 2 <= param_1;
      param_1 = param_1 + param_2 * -2;
    }
    iVar2 = ((iVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6;
  }
  uVar3 = param_1 - param_2;
  if (param_2 > param_1) {
    uVar3 = param_1;
  }
  return CONCAT44(uVar3,iVar2 * 2 + (uint)(param_2 <= param_1));
}


/* ---- FUN_0003133c @ 0003133c ---- */

void FUN_0003133c(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00031230();
    return;
  }
  FUN_00031518(0);
  return;
}


/* ---- FUN_00031344 @ 00031344 ---- */

undefined8 FUN_00031344(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  if (-1 < (int)(param_1 | param_2)) {
    iVar3 = 0;
    if (param_2 <= param_1 >> 1) {
      if (param_2 <= param_1 >> 4) {
        if (param_2 <= param_1 >> 8) {
          if (param_1 >> 0xc < param_2) goto LAB_000313b6;
          if (param_2 <= param_1 >> 0x10) {
            iVar3 = -0x1000000;
            uVar5 = param_1 >> 0x10;
            uVar4 = param_2 << 8;
            if (param_2 << 8 <= uVar5) {
              iVar3 = -0x10000;
              uVar4 = param_2 << 0x10;
              if (param_2 << 0x10 == 0) goto LAB_00031506;
            }
            param_2 = uVar4;
            if (param_1 >> 0xc < param_2) goto LAB_000313b6;
          }
          while( true ) {
            bVar7 = param_2 <= param_1 >> 0xf;
            if (bVar7) {
              bVar7 = param_2 * 0x8000 <= param_1;
              param_1 = param_1 + param_2 * -0x8000;
            }
            bVar8 = param_2 <= param_1 >> 0xe;
            if (bVar8) {
              bVar8 = param_2 * 0x4000 <= param_1;
              param_1 = param_1 + param_2 * -0x4000;
            }
            bVar9 = param_2 <= param_1 >> 0xd;
            if (bVar9) {
              bVar9 = param_2 * 0x2000 <= param_1;
              param_1 = param_1 + param_2 * -0x2000;
            }
            bVar10 = param_2 <= param_1 >> 0xc;
            if (bVar10) {
              bVar10 = param_2 * 0x1000 <= param_1;
              param_1 = param_1 + param_2 * -0x1000;
            }
            iVar3 = (((iVar3 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 +
                    (uint)bVar10;
LAB_000313b6:
            bVar7 = param_2 <= param_1 >> 0xb;
            if (bVar7) {
              bVar7 = param_2 * 0x800 <= param_1;
              param_1 = param_1 + param_2 * -0x800;
            }
            bVar8 = param_2 <= param_1 >> 10;
            if (bVar8) {
              bVar8 = param_2 * 0x400 <= param_1;
              param_1 = param_1 + param_2 * -0x400;
            }
            bVar9 = param_2 <= param_1 >> 9;
            if (bVar9) {
              bVar9 = param_2 * 0x200 <= param_1;
              param_1 = param_1 + param_2 * -0x200;
            }
            uVar4 = ((iVar3 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9;
            bVar7 = param_2 <= param_1 >> 8;
            if (bVar7) {
              bVar7 = param_2 * 0x100 <= param_1;
              param_1 = param_1 + param_2 * -0x100;
            }
            iVar3 = uVar4 * 2 + (uint)bVar7;
            if (!CARRY4(uVar4,uVar4) && !CARRY4(uVar4 * 2,(uint)bVar7)) break;
            param_2 = param_2 >> 8;
          }
        }
        bVar7 = param_2 <= param_1 >> 7;
        if (bVar7) {
          bVar7 = param_2 * 0x80 <= param_1;
          param_1 = param_1 + param_2 * -0x80;
        }
        bVar8 = param_2 <= param_1 >> 6;
        if (bVar8) {
          bVar8 = param_2 * 0x40 <= param_1;
          param_1 = param_1 + param_2 * -0x40;
        }
        bVar9 = param_2 <= param_1 >> 5;
        if (bVar9) {
          bVar9 = param_2 * 0x20 <= param_1;
          param_1 = param_1 + param_2 * -0x20;
        }
        bVar10 = param_2 <= param_1 >> 4;
        if (bVar10) {
          bVar10 = param_2 * 0x10 <= param_1;
          param_1 = param_1 + param_2 * -0x10;
        }
        iVar3 = (((iVar3 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10
        ;
      }
      bVar7 = param_2 <= param_1 >> 3;
      if (bVar7) {
        bVar7 = param_2 * 8 <= param_1;
        param_1 = param_1 + param_2 * -8;
      }
      bVar8 = param_2 <= param_1 >> 2;
      if (bVar8) {
        bVar8 = param_2 * 4 <= param_1;
        param_1 = param_1 + param_2 * -4;
      }
      bVar9 = param_2 <= param_1 >> 1;
      if (bVar9) {
        bVar9 = param_2 * 2 <= param_1;
        param_1 = param_1 + param_2 * -2;
      }
      iVar3 = ((iVar3 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9;
    }
    uVar4 = param_1 - param_2;
    if (param_2 > param_1) {
      uVar4 = param_1;
    }
    return CONCAT44(uVar4,iVar3 * 2 + (uint)(param_2 <= param_1));
  }
  iVar3 = (int)param_2 >> 0x1f;
  if (-iVar3 != 0) {
    param_2 = -param_2;
  }
  uVar4 = (int)param_1 >> 0x20;
  if (((int)param_1 >> 0x1f & 1U) != 0) {
    param_1 = -param_1;
  }
  uVar4 = uVar4 ^ -iVar3;
  iVar3 = 0;
  uVar5 = (int)uVar4 >> 1;
  uVar2 = param_2;
  if (param_1 >> 4 < param_2) goto LAB_000314be;
  if (param_2 <= param_1 >> 8) {
    uVar2 = param_2 << 6;
    iVar3 = -0x4000000;
    uVar6 = param_1 >> 8;
    if (uVar2 <= uVar6) {
      uVar2 = param_2 << 0xc;
      iVar3 = -0x100000;
      if (uVar2 <= uVar6) {
        uVar2 = param_2 << 0x12;
        iVar3 = -0x4000;
        if (uVar2 <= uVar6) {
          uVar2 = param_2 << 0x18;
          if (uVar2 == 0) {
            if ((uVar4 & 1) != 0) {
              param_1 = -param_1;
            }
LAB_00031506:
            uVar1 = FUN_00031518(0,0,iVar3,uVar5);
            return CONCAT44(param_1,uVar1);
          }
          iVar3 = -0x100;
        }
      }
    }
  }
  while( true ) {
    bVar7 = uVar2 <= param_1 >> 7;
    if (bVar7) {
      bVar7 = uVar2 * 0x80 <= param_1;
      param_1 = param_1 + uVar2 * -0x80;
    }
    bVar8 = uVar2 <= param_1 >> 6;
    if (bVar8) {
      bVar8 = uVar2 * 0x40 <= param_1;
      param_1 = param_1 + uVar2 * -0x40;
    }
    bVar9 = uVar2 <= param_1 >> 5;
    if (bVar9) {
      bVar9 = uVar2 * 0x20 <= param_1;
      param_1 = param_1 + uVar2 * -0x20;
    }
    bVar10 = uVar2 <= param_1 >> 4;
    if (bVar10) {
      bVar10 = uVar2 * 0x10 <= param_1;
      param_1 = param_1 + uVar2 * -0x10;
    }
    iVar3 = (((iVar3 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10;
LAB_000314be:
    bVar7 = uVar2 <= param_1 >> 3;
    if (bVar7) {
      bVar7 = uVar2 * 8 <= param_1;
      param_1 = param_1 + uVar2 * -8;
    }
    uVar6 = iVar3 * 2 + (uint)bVar7;
    bVar7 = uVar2 <= param_1 >> 2;
    if (bVar7) {
      bVar7 = uVar2 * 4 <= param_1;
      param_1 = param_1 + uVar2 * -4;
    }
    iVar3 = uVar6 * 2 + (uint)bVar7;
    if (!CARRY4(uVar6,uVar6) && !CARRY4(uVar6 * 2,(uint)bVar7)) break;
    uVar2 = uVar2 >> 6;
  }
  bVar7 = uVar2 <= param_1 >> 1;
  if (bVar7) {
    bVar7 = uVar2 * 2 <= param_1;
    param_1 = param_1 + uVar2 * -2;
  }
  uVar6 = param_1 - uVar2;
  if (uVar2 > param_1) {
    uVar6 = param_1;
  }
  iVar3 = (iVar3 * 2 + (uint)bVar7) * 2 + (uint)(uVar2 <= param_1);
  if ((uVar4 & 1) != 0) {
    iVar3 = -iVar3;
  }
  if ((int)uVar5 < 0) {
    uVar6 = -uVar6;
  }
  return CONCAT44(uVar6,iVar3);
}


/* ---- FUN_00031510 @ 00031510 ---- */

void FUN_00031510(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00031344();
    return;
  }
  FUN_00031518(0);
  return;
}


/* ---- FUN_00031518 @ 00031518 ---- */

void FUN_00031518(void)

{
  return;
}


/* ---- FUN_0003151c @ 0003151c ---- */

void FUN_0003151c(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 != 0 || param_1 != 0) {
      param_1 = -1;
      param_2 = param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x0003153c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((int)&DAT_00031540 + DAT_00031540))(param_1,param_2);
    return;
  }
  FUN_0003155c(param_1);
  return;
}


/* ---- FUN_0003155c @ 0003155c ---- */

undefined8 FUN_0003155c(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint local_30;
  uint local_2c;
  
  if ((param_2 <= param_4 && param_4 != param_2) || ((param_4 == param_2 && (param_1 < param_3)))) {
    local_30 = 0;
    local_2c = 0;
    goto LAB_000315e0;
  }
  iVar1 = FUN_000316f4(param_3,param_4);
  iVar2 = FUN_000316f4(param_1,param_2);
  uVar4 = iVar1 - iVar2;
  uVar5 = uVar4 - 0x20;
  if ((int)uVar5 < 0) {
    uVar6 = param_4 << (uVar4 & 0xff) | param_3 >> (0x20 - uVar4 & 0xff);
    param_3 = param_3 << (uVar4 & 0xff);
    if (uVar6 <= param_2) goto LAB_000315a8;
LAB_0003161e:
    local_30 = 0;
    local_2c = 0;
  }
  else {
    uVar6 = param_3 << (uVar5 & 0xff);
    param_3 = param_3 << (uVar4 & 0xff);
    if (param_2 < uVar6) goto LAB_0003161e;
LAB_000315a8:
    if ((uVar6 == param_2) && (param_1 < param_3)) goto LAB_0003161e;
    bVar9 = param_1 < param_3;
    param_1 = param_1 - param_3;
    param_2 = (param_2 - uVar6) - (uint)bVar9;
    if ((int)uVar5 < 0) {
      local_2c = 1 >> (0x20 - uVar4 & 0xff);
    }
    else {
      local_2c = 1 << (uVar5 & 0xff);
    }
    local_30 = 1 << (uVar4 & 0xff);
  }
  if (uVar4 == 0) goto LAB_000315e0;
  uVar3 = param_3 >> 1 | uVar6 << 0x1f;
  uVar6 = uVar6 >> 1;
  uVar8 = uVar4;
  do {
    while ((uVar6 <= param_2 && ((uVar6 != param_2 || (uVar3 <= param_1))))) {
      bVar9 = param_1 < uVar3;
      uVar7 = param_1 - uVar3;
      uVar8 = uVar8 - 1;
      param_1 = uVar7 * 2 + 1;
      param_2 = ((param_2 - uVar6) - (uint)bVar9) * 2 + (uint)CARRY4(uVar7,uVar7) +
                (uint)(0xfffffffe < uVar7 * 2);
      if (uVar8 == 0) goto LAB_00031664;
    }
    uVar8 = uVar8 - 1;
    bVar9 = CARRY4(param_1,param_1);
    param_1 = param_1 * 2;
    param_2 = param_2 * 2 + (uint)bVar9;
  } while (uVar8 != 0);
LAB_00031664:
  bVar9 = CARRY4(local_30,param_1);
  uVar6 = local_30 + param_1;
  iVar1 = local_2c + param_2;
  if ((int)uVar5 < 0) {
    param_1 = param_1 >> (uVar4 & 0xff) | param_2 << (0x20 - uVar4 & 0xff);
    param_2 = param_2 >> (uVar4 & 0xff);
    if (-1 < (int)uVar5) goto LAB_00031688;
LAB_000316de:
    uVar5 = param_2 << (uVar4 & 0xff) | param_1 >> (0x20 - uVar4 & 0xff);
  }
  else {
    param_1 = param_2 >> (uVar5 & 0xff);
    param_2 = param_2 >> (uVar4 & 0xff);
    if ((int)uVar5 < 0) goto LAB_000316de;
LAB_00031688:
    uVar5 = param_1 << (uVar5 & 0xff);
  }
  uVar4 = param_1 << (uVar4 & 0xff);
  local_30 = uVar6 - uVar4;
  local_2c = ((iVar1 + (uint)bVar9) - uVar5) - (uint)(uVar6 < uVar4);
LAB_000315e0:
  if (param_5 != (uint *)0x0) {
    *param_5 = param_1;
    param_5[1] = param_2;
  }
  return CONCAT44(local_2c,local_30);
}


/* ---- FUN_000316f4 @ 000316f4 ---- */

int FUN_000316f4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = FUN_0003170c();
    iVar1 = iVar1 + 0x20;
  }
  else {
    iVar1 = FUN_0003170c(param_2);
  }
  return iVar1;
}


/* ---- FUN_0003170c @ 0003170c ---- */

int FUN_0003170c(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1c;
  if (0xffff < param_1) {
    param_1 = param_1 >> 0x10;
    iVar1 = 0xc;
  }
  if (0xff < param_1) {
    param_1 = param_1 >> 8;
    iVar1 = iVar1 + -8;
  }
  if (0xf < param_1) {
    param_1 = param_1 >> 4;
    iVar1 = iVar1 + -4;
  }
  return (uint)(byte)(&DAT_00031738)[param_1] + iVar1;
}


/* ---- FUN_00031748 @ 00031748 ---- */

int FUN_00031748(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  do {
    if (param_3 == iVar2) {
      return 0;
    }
    pbVar1 = (byte *)(param_1 + iVar2);
    iVar2 = iVar2 + 1;
    uVar3 = (uint)*(byte *)(param_2 + -1 + iVar2);
  } while (*pbVar1 == uVar3);
  return *pbVar1 - uVar3;
}


/* ---- FUN_00031764 @ 00031764 ---- */

void FUN_00031764(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
    *(undefined *)(param_1 + iVar1) = *(undefined *)(param_2 + iVar1);
  }
  return;
}


/* ---- FUN_00031778 @ 00031778 ---- */

void FUN_00031778(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = *DAT_000317a8;
  uVar2 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 0)) {
    FUN_000318c0(iVar1);
  }
  FUN_00031e4c(iVar1,*(undefined4 *)(iVar1 + 8),param_1,&uStack_c,uVar2,&uStack_c);
  return;
}


/* ---- FUN_000317ac @ 000317ac ---- */

void FUN_000317ac(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *local_78 [2];
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined4 local_64;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_64 = DAT_000317e0;
  local_70 = DAT_000317e0;
  local_6c = DAT_000317e8;
  local_78[0] = param_1;
  local_68 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_00031bfc(*DAT_000317e4,local_78,param_2);
  *local_78[0] = 0;
  return;
}


/* ---- FUN_000317ec @ 000317ec ---- */

int FUN_000317ec(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  return iVar2;
}


/* ---- FUN_000317fc @ 000317fc ---- */

void FUN_000317fc(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = param_2;
  param_1[0x19] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_0001b1fc(param_1 + 0x17,0,8);
  uVar1 = DAT_00031834;
  param_1[8] = param_1;
  param_1[9] = uVar1;
  param_1[10] = DAT_00031838;
  param_1[0xb] = DAT_0003183c;
  param_1[0xc] = DAT_00031840;
  return;
}


/* ---- FUN_00031844 @ 00031844 ---- */

void FUN_00031844(undefined4 param_1)

{
  FUN_000319c0(param_1,DAT_00031850);
  return;
}


/* ---- FUN_00031854 @ 00031854 ---- */

undefined4 * FUN_00031854(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (param_2 + -1) * 0x68;
  puVar1 = (undefined4 *)FUN_00031a4c(param_1,iVar2 + 0x74);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_2;
    puVar1[2] = puVar1 + 3;
    FUN_0001b1fc(puVar1 + 3,0,iVar2 + 0x68);
  }
  return puVar1;
}


/* ---- FUN_00031880 @ 00031880 ---- */

void FUN_00031880(void)

{
  FUN_00031a02(DAT_0003188c);
  return;
}


/* ---- FUN_00031890 @ 00031890 ---- */

void FUN_00031890(void)

{
  FUN_00031a04(DAT_0003189c);
  return;
}


/* ---- FUN_000318a0 @ 000318a0 ---- */

void FUN_000318a0(void)

{
  FUN_00031a02(DAT_000318ac);
  return;
}


/* ---- FUN_000318b0 @ 000318b0 ---- */

void FUN_000318b0(void)

{
  FUN_00031a04(DAT_000318bc);
  return;
}


/* ---- FUN_000318c0 @ 000318c0 ---- */

undefined8 FUN_000318c0(int param_1,int param_2)

{
  undefined4 uVar1;
  int local_c;
  
  FUN_000318a0();
  local_c = param_2;
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    local_c = *DAT_00031928;
    *(undefined4 *)(param_1 + 0x28) = DAT_0003192c;
    if (local_c == param_1) {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
    uVar1 = FUN_00031930(param_1);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = FUN_00031930(param_1);
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar1 = FUN_00031930(param_1);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    FUN_000317fc(*(undefined4 *)(param_1 + 4),4,0);
    FUN_000317fc(*(undefined4 *)(param_1 + 8),9,1);
    FUN_000317fc(*(undefined4 *)(param_1 + 0xc),0x12,2);
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  FUN_000318b0();
  return CONCAT44(local_c,param_1);
}


/* ---- FUN_00031930 @ 00031930 ---- */

int * FUN_00031930(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  
  FUN_00031880();
  iVar3 = *DAT_000319b8;
  if (*(int *)(iVar3 + 0x18) == 0) {
    FUN_000318c0(iVar3);
  }
  ppiVar4 = (int **)(iVar3 + 0x48);
  do {
    piVar2 = ppiVar4[2];
    piVar1 = ppiVar4[1];
    while (piVar1 = (int *)((int)piVar1 + -1), -1 < (int)piVar1) {
      if (*(short *)(piVar2 + 3) == 0) {
        piVar2[3] = DAT_000319bc;
        piVar2[0x19] = 0;
        FUN_00031a00(piVar2 + 0x16);
        FUN_00031890();
        *piVar2 = 0;
        piVar2[2] = 0;
        piVar2[1] = 0;
        piVar2[4] = 0;
        piVar2[5] = 0;
        piVar2[6] = 0;
        FUN_0001b1fc(piVar2 + 0x17,0,8);
        piVar2[0xd] = 0;
        piVar2[0xe] = 0;
        piVar2[0x12] = 0;
        piVar2[0x13] = 0;
        return piVar2;
      }
      piVar2 = piVar2 + 0x1a;
    }
    if (*ppiVar4 == (int *)0x0) {
      piVar1 = (int *)FUN_00031854(param_1,4);
      *ppiVar4 = piVar1;
      if (piVar1 == (int *)0x0) {
        FUN_00031890();
        *param_1 = 0xc;
        return (int *)0x0;
      }
    }
    ppiVar4 = (int **)*ppiVar4;
  } while( true );
}


/* ---- FUN_000319c0 @ 000319c0 ---- */

undefined8 FUN_000319c0(int param_1,code *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_20;
  
  uVar4 = 0;
  piVar2 = (int *)(param_1 + 0x48);
  do {
    local_20 = piVar2[1];
    iVar3 = piVar2[2];
    while (local_20 = local_20 + -1, -1 < local_20) {
      if ((1 < *(ushort *)(iVar3 + 0xc)) && (*(short *)(iVar3 + 0xe) != -1)) {
        uVar1 = (*param_2)(param_1,iVar3);
        uVar4 = uVar4 | uVar1;
      }
      iVar3 = iVar3 + 0x68;
    }
    piVar2 = (int *)*piVar2;
  } while (piVar2 != (int *)0x0);
  return CONCAT44(local_20,uVar4);
}


/* ---- FUN_00031a00 @ 00031a00 ---- */

void FUN_00031a00(void)

{
  return;
}


/* ---- FUN_00031a02 @ 00031a02 ---- */

void FUN_00031a02(void)

{
  return;
}


/* ---- FUN_00031a04 @ 00031a04 ---- */

void FUN_00031a04(void)

{
  return;
}


/* ---- FUN_00031a08 @ 00031a08 ---- */

uint FUN_00031a08(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = DAT_00031a48;
  if (*DAT_00031a48 == 0) {
    iVar2 = FUN_000323c4();
    *piVar1 = iVar2;
  }
  uVar3 = FUN_000323c4(param_1,param_2);
  if ((uVar3 == 0xffffffff) ||
     ((uVar4 = uVar3 + 3 & 0xfffffffc, uVar3 != uVar4 &&
      (iVar2 = FUN_000323c4(param_1,uVar4 - uVar3), iVar2 == -1)))) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


/* ---- FUN_00031a4c @ 00031a4c ---- */

undefined8 FUN_00031a4c(undefined4 *param_1,uint param_2)

{
  uint **ppuVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar5 = (param_2 + 3 & 0xfffffffc) + 8;
  if (uVar5 < 0xc) {
    uVar5 = 0xc;
LAB_00031a60:
    if (param_2 <= uVar5) {
      FUN_0003293c(param_1);
      ppuVar1 = DAT_00031b34;
      puVar7 = *DAT_00031b34;
      for (puVar2 = *DAT_00031b34; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[1]) {
        uVar6 = *puVar2 - uVar5;
        if (-1 < (int)uVar6) {
          if (uVar6 < 0xc) {
            if (puVar7 == puVar2) {
              *DAT_00031b34 = (uint *)puVar2[1];
            }
            else {
              puVar7[1] = (uint)(uint *)puVar2[1];
            }
          }
          else {
            puVar4 = (uint *)((int)puVar2 + uVar5);
            *puVar2 = uVar5;
            if (puVar7 == puVar2) {
              *ppuVar1 = puVar4;
            }
            else {
              puVar7[1] = (uint)puVar4;
            }
            uVar5 = puVar2[1];
            *puVar4 = uVar6;
            puVar4[1] = uVar5;
          }
          goto LAB_00031aec;
        }
        puVar7 = puVar2;
      }
      puVar2 = (uint *)FUN_00031a08(param_1,uVar5);
      if (puVar2 == (uint *)0xffffffff) {
        puVar2 = *ppuVar1;
        for (puVar7 = puVar2; puVar7 != (uint *)0x0; puVar7 = (uint *)puVar7[1]) {
          puVar2 = puVar7;
        }
        uVar6 = *puVar2;
        iVar3 = FUN_000323c4(param_1,0);
        if ((int)puVar2 + uVar6 == iVar3) {
          uVar5 = ((uVar5 + 3) - *puVar2 & 0xfffffffc) + 8;
          if (uVar5 < 0xc) {
            uVar5 = 0xc;
          }
          iVar3 = FUN_00031a08(param_1,uVar5);
          if (iVar3 != -1) {
            uVar5 = *puVar2 + uVar5;
            goto LAB_00031ac0;
          }
        }
        *param_1 = 0xc;
        FUN_0003294c(param_1);
        puVar7 = (uint *)0x0;
      }
      else {
LAB_00031ac0:
        *puVar2 = uVar5;
LAB_00031aec:
        FUN_0003294c(param_1);
        puVar4 = puVar2 + 1;
        puVar7 = (uint *)((int)puVar2 + 0xbU & 0xfffffff8);
        if (puVar7 != puVar4) {
          *(int *)((int)puVar2 + ((int)puVar7 - (int)puVar4)) = (int)puVar4 - (int)puVar7;
        }
      }
      goto LAB_00031ace;
    }
  }
  else if (-1 < (int)uVar5) goto LAB_00031a60;
  puVar7 = (uint *)0x0;
  *param_1 = 0xc;
LAB_00031ace:
  return CONCAT44(param_1,puVar7);
}


/* ---- FUN_00031b38 @ 00031b38 ---- */

undefined4 FUN_00031b38(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((uint)param_2[2] <= param_4) {
    uVar4 = param_2[2];
    if ((*(ushort *)(param_2 + 3) & 0x480) != 0) {
      iVar2 = *param_2 - param_2[4];
      uVar3 = param_4 + 1 + iVar2;
      uVar4 = (param_2[5] * 3) / 2;
      if (uVar4 < uVar3) {
        uVar4 = uVar3;
      }
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x15) < 0) {
        iVar1 = FUN_00031a4c(param_1,uVar4);
        if (iVar1 == 0) {
LAB_00031b86:
          *param_1 = 0xc;
          *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
          return 0xffffffff;
        }
        FUN_00031764(iVar1,param_2[4],iVar2);
        *(ushort *)(param_2 + 3) = (ushort)DAT_00031bf8 & *(ushort *)(param_2 + 3) | 0x80;
      }
      else {
        iVar1 = FUN_000329f0(param_1,param_2[4],uVar4);
        if (iVar1 == 0) {
          FUN_0003295c(param_1,param_2[4]);
          goto LAB_00031b86;
        }
      }
      param_2[4] = iVar1;
      *param_2 = iVar1 + iVar2;
      param_2[5] = uVar4;
      param_2[2] = uVar4 - iVar2;
      uVar4 = param_4;
    }
    if (uVar4 <= param_4) goto LAB_00031bc6;
  }
  uVar4 = param_4;
LAB_00031bc6:
  FUN_00032916(*param_2,param_3,uVar4);
  param_2[2] = param_2[2] - uVar4;
  *param_2 = *param_2 + uVar4;
  return 0;
}


/* ---- FUN_00031bfc @ 00031bfc ---- */

byte * FUN_00031bfc(undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  byte *pbVar6;
  undefined4 *local_88;
  int *local_7c;
  uint local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  byte *local_64;
  byte local_60;
  undefined local_5f;
  undefined local_5e;
  undefined local_35;
  undefined4 local_20;
  
  if (((int)((uint)*(ushort *)(param_2 + 3) << 0x18) < 0) && (param_2[4] == 0)) {
    iVar1 = FUN_00031a4c(param_1,0x40);
    *param_2 = iVar1;
    param_2[4] = iVar1;
    if (iVar1 == 0) {
      *param_1 = 0xc;
      return (byte *)0xffffffff;
    }
    param_2[5] = 0x40;
  }
  local_64 = (byte *)0x0;
  local_5f = 0x20;
  local_5e = 0x30;
  local_7c = param_4;
  pbVar6 = param_3;
  do {
    for (; (*param_3 != 0 && (*param_3 != 0x25)); param_3 = param_3 + 1) {
    }
    if (param_3 != pbVar6) {
      iVar1 = FUN_00031b38(param_1,param_2,pbVar6);
      if (iVar1 == -1) {
LAB_00031dc4:
        if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
          local_64 = (byte *)0xffffffff;
        }
        return local_64;
      }
      local_64 = param_3 + ((int)local_64 - (int)pbVar6);
    }
    if (*param_3 == 0) goto LAB_00031dc4;
    local_74 = -1;
    local_78 = 0;
    local_6c = 0;
    local_70 = 0;
    local_35 = 0;
    local_20 = 0;
    pbVar6 = param_3 + 1;
    while( true ) {
      iVar2 = FUN_00032900(DAT_00031de8,*pbVar6,5);
      iVar1 = DAT_00031dec;
      param_3 = pbVar6 + 1;
      if (iVar2 == 0) break;
      local_78 = 1 << (iVar2 - DAT_00031de8 & 0xffU) | local_78;
      pbVar6 = param_3;
    }
    if ((int)(local_78 << 0x1b) < 0) {
      local_35 = 0x20;
    }
    if ((int)(local_78 << 0x1c) < 0) {
      local_35 = 0x2b;
    }
    if (*pbVar6 == 0x2a) {
      piVar4 = local_7c + 1;
      iVar2 = *local_7c;
      local_7c = piVar4;
      if (iVar2 < 0) {
        local_78 = local_78 | 2;
        iVar2 = -iVar2;
      }
    }
    else {
      bVar5 = false;
      iVar2 = local_6c;
      param_3 = pbVar6;
      while( true ) {
        if (9 < *param_3 - 0x30) break;
        bVar5 = true;
        iVar2 = iVar2 * 10 + (*param_3 - 0x30);
        param_3 = param_3 + 1;
      }
      if (!bVar5) {
        iVar2 = local_6c;
      }
    }
    local_6c = iVar2;
    if (*param_3 == 0x2e) {
      if (param_3[1] == 0x2a) {
        param_3 = param_3 + 2;
        piVar4 = local_7c + 1;
        local_74 = *local_7c;
        local_7c = piVar4;
        if (local_74 < 0) {
          local_74 = -1;
        }
      }
      else {
        bVar5 = false;
        iVar2 = 0;
        local_74 = 0;
        while( true ) {
          param_3 = param_3 + 1;
          if (9 < *param_3 - 0x30) break;
          bVar5 = true;
          iVar2 = iVar2 * 10 + (*param_3 - 0x30);
        }
        if (bVar5) {
          local_74 = iVar2;
        }
      }
    }
    iVar2 = FUN_00032900(DAT_00031dec,*param_3,3);
    if (iVar2 != 0) {
      param_3 = param_3 + 1;
      local_78 = 0x40 << (iVar2 - iVar1 & 0xffU) | local_78;
    }
    local_60 = *param_3;
    param_3 = param_3 + 1;
    iVar1 = FUN_00032900(DAT_00031df0,local_60,6);
    if (iVar1 == 0) {
      puVar3 = (undefined4 *)FUN_000321a0(param_1,&local_78,param_2,DAT_00031df8,&local_7c);
LAB_00031dbc:
      local_88 = puVar3;
      if (puVar3 == (undefined4 *)0xffffffff) goto LAB_00031dc4;
    }
    else {
      puVar3 = param_1;
      if (DAT_00031df4 != 0) goto LAB_00031dbc;
      local_7c = (int *)(((int)local_7c + 7U & 0xfffffff8) + 8);
    }
    local_64 = local_64 + (int)local_88;
    pbVar6 = param_3;
  } while( true );
}


/* ---- FUN_00031dfc @ 00031dfc ---- */

int FUN_00031dfc(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = param_3[2] + -1;
  param_3[2] = iVar1;
  if ((iVar1 < 0) && ((iVar1 < (int)param_3[6] || (param_2 == 10)))) {
    param_2 = FUN_00032480();
  }
  else {
    puVar2 = (undefined *)*param_3;
    *param_3 = puVar2 + 1;
    *puVar2 = (char)param_2;
  }
  return param_2;
}


/* ---- FUN_00031e26 @ 00031e26 ---- */

int FUN_00031e26(undefined4 param_1,undefined4 param_2,undefined *param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = param_3 + param_4;
  iVar3 = param_4;
  do {
    if (param_3 == puVar2) {
      return 0;
    }
    iVar1 = FUN_00031dfc(param_1,*param_3,param_2,param_4,iVar3);
    param_3 = param_3 + 1;
    param_4 = iVar1 + 1;
  } while (param_4 != 0);
  return iVar1;
}


/* ---- FUN_00031e4c @ 00031e4c ---- */

int FUN_00031e4c(int param_1,uint *param_2,byte *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  uint *extraout_r1;
  uint *extraout_r1_00;
  int *piVar3;
  uint *puVar4;
  undefined8 uVar5;
  byte *local_8c;
  int local_88;
  int *local_7c;
  uint local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  int local_64;
  byte local_60;
  undefined local_5f;
  undefined local_5e;
  undefined local_35;
  undefined4 local_20;
  
  puVar4 = param_2;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    FUN_000318c0();
    puVar4 = extraout_r1;
  }
  if (param_2 == DAT_000320a0) {
    param_2 = *(uint **)(param_1 + 4);
  }
  else if (param_2 == DAT_000320a4) {
    param_2 = *(uint **)(param_1 + 8);
  }
  else if (param_2 == DAT_000320a8) {
    param_2 = *(uint **)(param_1 + 0xc);
  }
  if ((-1 < (int)(param_2[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x16))) {
    FUN_00031a02(param_2[0x16]);
    puVar4 = extraout_r1_00;
  }
  if ((-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1c)) || (param_2[4] == 0)) {
    uVar5 = FUN_00032554(param_1,param_2);
    puVar4 = (uint *)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 != 0) {
      if ((int)(param_2[0x19] << 0x1f) < 0) {
        return -1;
      }
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x16) < 0) {
        return -1;
      }
      FUN_00031a04(param_2[0x16]);
      return -1;
    }
  }
  local_64 = 0;
  local_5f = 0x20;
  local_5e = 0x30;
  local_7c = param_4;
  local_8c = param_3;
  do {
    for (; (*param_3 != 0 && (*param_3 != 0x25)); param_3 = param_3 + 1) {
    }
    if (param_3 != local_8c) {
      uVar5 = FUN_00031e26(param_1,param_2,local_8c,(int)param_3 - (int)local_8c);
      puVar4 = (uint *)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 == -1) {
LAB_0003206e:
        if ((-1 < (int)(param_2[0x19] << 0x1f)) &&
           (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x16))) {
          FUN_00031a04(param_2[0x16],puVar4);
        }
        if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
          return -1;
        }
        return local_64;
      }
      local_64 = ((int)param_3 - (int)local_8c) + local_64;
    }
    if (*param_3 == 0) goto LAB_0003206e;
    local_74 = -1;
    local_78 = 0;
    local_6c = 0;
    local_70 = 0;
    local_35 = 0;
    local_20 = 0;
    local_8c = param_3 + 1;
    while( true ) {
      iVar2 = FUN_00032900(DAT_000320ac,*local_8c,5);
      param_3 = local_8c + 1;
      if (iVar2 == 0) break;
      local_78 = 1 << (iVar2 - DAT_000320ac & 0xffU) | local_78;
      local_8c = param_3;
    }
    if ((int)(local_78 << 0x1b) < 0) {
      local_35 = 0x20;
    }
    if ((int)(local_78 << 0x1c) < 0) {
      local_35 = 0x2b;
    }
    if (*local_8c == 0x2a) {
      piVar3 = local_7c + 1;
      iVar2 = *local_7c;
      local_7c = piVar3;
      if (iVar2 < 0) {
        local_78 = local_78 | 2;
        iVar2 = -iVar2;
      }
    }
    else {
      bVar1 = false;
      iVar2 = local_6c;
      param_3 = local_8c;
      while( true ) {
        if (9 < *param_3 - 0x30) break;
        iVar2 = iVar2 * 10 + (*param_3 - 0x30);
        bVar1 = true;
        param_3 = param_3 + 1;
      }
      if (!bVar1) {
        iVar2 = local_6c;
      }
    }
    local_6c = iVar2;
    if (*param_3 == 0x2e) {
      if (param_3[1] == 0x2a) {
        param_3 = param_3 + 2;
        piVar3 = local_7c + 1;
        local_74 = *local_7c;
        local_7c = piVar3;
        if (local_74 < 0) {
          local_74 = -1;
        }
      }
      else {
        bVar1 = false;
        iVar2 = 0;
        local_74 = 0;
        while( true ) {
          param_3 = param_3 + 1;
          if (9 < *param_3 - 0x30) break;
          iVar2 = iVar2 * 10 + (*param_3 - 0x30);
          bVar1 = true;
        }
        if (bVar1) {
          local_74 = iVar2;
        }
      }
    }
    iVar2 = FUN_00032900(DAT_000320b0,*param_3,3);
    if (iVar2 != 0) {
      local_78 = 0x40 << (iVar2 - DAT_000320b0 & 0xffU) | local_78;
      param_3 = param_3 + 1;
    }
    local_60 = *param_3;
    param_3 = param_3 + 1;
    uVar5 = FUN_00032900(DAT_000320b4,local_60,6);
    if ((int)uVar5 == 0) {
      uVar5 = FUN_000321a0(param_1,&local_78,param_2,DAT_000320bc,&local_7c);
      iVar2 = (int)uVar5;
      puVar4 = (uint *)((ulonglong)uVar5 >> 0x20);
LAB_00032066:
      local_88 = iVar2;
      if (iVar2 == -1) goto LAB_0003206e;
    }
    else {
      iVar2 = param_1;
      puVar4 = &local_78;
      if (DAT_000320b8 != 0) goto LAB_00032066;
      local_7c = (int *)(((int)local_7c + 7U & 0xfffffff8) + 8);
      puVar4 = (uint *)((ulonglong)uVar5 >> 0x20);
    }
    local_64 = local_64 + local_88;
    local_8c = param_3;
  } while( true );
}


/* ---- FUN_000320c0 @ 000320c0 ---- */

undefined8
FUN_000320c0(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar4 = param_2[4];
  if ((int)param_2[4] < (int)param_2[2]) {
    uVar4 = param_2[2];
  }
  *param_3 = uVar4;
  if (*(char *)((int)param_2 + 0x43) != '\0') {
    *param_3 = uVar4 + 1;
  }
  if ((int)(*param_2 << 0x1a) < 0) {
    *param_3 = *param_3 + 2;
  }
  uVar4 = *param_2 & 6;
  puVar6 = param_3;
  if ((*param_2 & 6) == 0) {
    for (; (int)uVar4 < (int)(param_2[3] - *param_3); uVar4 = uVar4 + 1) {
      iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x19,1,param_1,param_4,puVar6);
      if (iVar1 == -1) goto LAB_00032168;
    }
  }
  iVar1 = -(uint)(*(char *)((int)param_2 + 0x43) == '\0');
  iVar3 = iVar1 + 1;
  if ((int)(*param_2 << 0x1a) < 0) {
    *(undefined *)((int)param_2 + iVar1 + 0x44) = 0x30;
    iVar3 = iVar1 + 3;
    *(undefined *)((int)param_2 + iVar1 + 0x45) = *(undefined *)((int)param_2 + 0x45);
  }
  iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x43,iVar3);
  if (iVar1 == -1) {
LAB_00032168:
    uVar2 = 0xffffffff;
  }
  else {
    uVar4 = 0;
    if ((*param_2 & 6) == 4) {
      uVar4 = param_2[3] - *param_3 & (int)~(param_2[3] - *param_3) >> 0x1f;
    }
    if ((int)param_2[4] < (int)param_2[2]) {
      uVar4 = uVar4 + (param_2[2] - param_2[4]);
    }
    for (uVar5 = 0; uVar4 != uVar5; uVar5 = uVar5 + 1) {
      iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x1a,1);
      if (iVar1 == -1) goto LAB_00032168;
    }
    uVar2 = 0;
  }
  return CONCAT44(param_1,uVar2);
}


/* ---- FUN_000321a0 @ 000321a0 ---- */

/* WARNING: Function: __gnu_thumb1_case_shi replaced with injection: switch16_shi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000321da) */
/* WARNING: Removing unreachable block (ram,0x000321da) */

uint FUN_000321a0(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,uint **param_5)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined *puVar7;
  uint **ppuVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  int local_34;
  uint local_1c [2];
  
  puVar7 = (undefined *)((int)param_2 + 0x43);
  bVar2 = *(byte *)(param_2 + 6);
  if (0x78 < bVar2) {
switchD_000321da_caseD_65:
    *(byte *)((int)param_2 + 0x42) = bVar2;
LAB_00032218:
    puVar11 = (undefined *)((int)param_2 + 0x42);
    uVar10 = 1;
LAB_0003236c:
    param_2[4] = uVar10;
    *puVar7 = 0;
    goto LAB_000322c8;
  }
  puVar11 = puVar7;
  if (bVar2 < 99) {
    if (bVar2 == 0) goto LAB_00032348;
    if (bVar2 == 0x58) {
      *(undefined *)((int)param_2 + 0x45) = 0x58;
      local_34 = DAT_000323bc;
      goto LAB_000322ea;
    }
    goto switchD_000321da_caseD_65;
  }
  switch(bVar2) {
  case 99:
    puVar5 = *param_5;
    *param_5 = puVar5 + 1;
    *(char *)((int)param_2 + 0x42) = (char)*puVar5;
    goto LAB_00032218;
  case 100:
  case 0x69:
    uVar6 = *param_2;
    puVar5 = *param_5;
    if ((int)(uVar6 << 0x18) < 0) {
      uVar10 = *puVar5;
      *param_5 = puVar5 + 1;
    }
    else {
      uVar10 = *puVar5;
      *param_5 = puVar5 + 1;
      if ((int)(uVar6 << 0x19) < 0) {
        uVar10 = (uint)(short)uVar10;
      }
    }
    if ((int)uVar10 < 0) {
      uVar10 = -uVar10;
      *puVar7 = 0x2d;
    }
    uVar6 = 10;
    local_34 = DAT_000323bc;
    goto LAB_00032276;
  default:
    goto switchD_000321da_caseD_65;
  case 0x6e:
    ppuVar8 = (uint **)*param_5;
    uVar6 = *param_2;
    uVar10 = param_2[5];
    *param_5 = (uint *)(ppuVar8 + 1);
    puVar5 = *ppuVar8;
    if (((int)(uVar6 << 0x18) < 0) || (-1 < (int)(uVar6 << 0x19))) {
      *puVar5 = uVar10;
    }
    else {
      *(short *)puVar5 = (short)uVar10;
    }
LAB_00032348:
    param_2[4] = 0;
    goto LAB_000322c8;
  case 0x6f:
  case 0x75:
    uVar10 = *param_2;
    puVar5 = *param_5;
    *param_5 = puVar5 + 1;
    if (((int)(uVar10 << 0x18) < 0) || (-1 < (int)(uVar10 << 0x19))) {
      uVar10 = *puVar5;
    }
    else {
      uVar10 = *puVar5 & 0xffff;
    }
    uVar6 = 8;
    local_34 = DAT_000323bc;
    if (bVar2 != 0x6f) {
      uVar6 = 10;
    }
    break;
  case 0x70:
    *param_2 = *param_2 | 0x20;
  case 0x78:
    *(undefined *)((int)param_2 + 0x45) = 0x78;
    local_34 = DAT_000323c0;
LAB_000322ea:
    uVar6 = *param_2;
    uVar10 = **param_5;
    *param_5 = *param_5 + 1;
    if ((-1 < (int)(uVar6 << 0x18)) && ((int)(uVar6 << 0x19) < 0)) {
      uVar10 = uVar10 & 0xffff;
    }
    if ((int)(uVar6 << 0x1f) < 0) {
      *param_2 = uVar6 | 0x20;
    }
    uVar6 = 0x10;
    if (uVar10 == 0) {
      *param_2 = *param_2 & 0xffffffdf;
    }
    break;
  case 0x73:
    puVar5 = *param_5;
    *param_5 = puVar5 + 1;
    puVar11 = (undefined *)*puVar5;
    iVar3 = FUN_00032900(puVar11,0,param_2[1]);
    if (iVar3 != 0) {
      param_2[1] = iVar3 - (int)puVar11;
    }
    uVar10 = param_2[1];
    goto LAB_0003236c;
  }
  *(undefined *)((int)param_2 + 0x43) = 0;
LAB_00032276:
  uVar9 = param_2[1];
  param_2[2] = uVar9;
  if (-1 < (int)uVar9) {
    *param_2 = *param_2 & 0xfffffffb;
  }
  if ((uVar10 != 0) || (uVar9 != 0)) {
    do {
      uVar12 = FUN_0003133c(uVar10,uVar6);
      puVar11 = puVar11 + -1;
      *puVar11 = *(undefined *)(local_34 + (int)((ulonglong)uVar12 >> 0x20));
      bVar1 = uVar6 <= uVar10;
      uVar10 = (uint)uVar12;
    } while (bVar1);
  }
  if (((uVar6 == 8) && ((int)(*param_2 << 0x1f) < 0)) && ((int)param_2[1] <= (int)param_2[4])) {
    puVar11 = puVar11 + -1;
    *puVar11 = 0x30;
  }
  param_2[4] = (int)puVar7 - (int)puVar11;
LAB_000322c8:
  iVar3 = FUN_000320c0(param_1,param_2,local_1c,param_3,param_4);
  if ((iVar3 == -1) || (iVar3 = (*param_4)(param_1,param_3,puVar11,param_2[4]), iVar3 == -1)) {
LAB_000322dc:
    uVar10 = 0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar3 = 0; iVar3 < (int)(param_2[3] - local_1c[0]); iVar3 = iVar3 + 1) {
        iVar4 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar4 == -1) goto LAB_000322dc;
      }
    }
    uVar10 = param_2[3];
    if ((int)param_2[3] < (int)local_1c[0]) {
      uVar10 = local_1c[0];
    }
  }
  return uVar10;
}


/* ---- FUN_000323c4 @ 000323c4 ---- */

void FUN_000323c4(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_000323e4;
  *DAT_000323e4 = 0;
  iVar2 = FUN_00032b34(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}


/* ---- FUN_00032480 @ 00032480 ---- */

uint FUN_00032480(int param_1,byte param_2,byte **param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    FUN_000318c0();
  }
  if (param_3 == DAT_00032520) {
    param_3 = *(byte ***)(param_1 + 4);
  }
  else if (param_3 == DAT_00032524) {
    param_3 = *(byte ***)(param_1 + 8);
  }
  else if (param_3 == DAT_00032528) {
    param_3 = *(byte ***)(param_1 + 0xc);
  }
  param_3[2] = param_3[6];
  if ((((int)((uint)*(ushort *)(param_3 + 3) << 0x1c) < 0) && (param_3[4] != (byte *)0x0)) ||
     (iVar1 = FUN_00032554(param_1,param_3), iVar1 == 0)) {
    iVar1 = (int)*param_3 - (int)param_3[4];
    uVar4 = (uint)param_2;
    if ((iVar1 < (int)param_3[5]) ||
       (iVar1 = FUN_00032780(param_1,param_3,param_3[4],param_3[5],param_4), iVar1 == 0)) {
      param_3[2] = param_3[2] + -1;
      pbVar3 = *param_3;
      pbVar2 = pbVar3 + 1;
      *param_3 = pbVar2;
      *pbVar3 = param_2;
      pbVar3 = param_3[5];
      if (pbVar3 != (byte *)(iVar1 + 1)) {
        pbVar3 = (byte *)((uint)*(ushort *)(param_3 + 3) << 0x1f);
        if (-1 < (int)pbVar3) {
          return uVar4;
        }
        if (uVar4 != 10) {
          return uVar4;
        }
      }
      iVar1 = FUN_00032780(param_1,param_3,pbVar2,pbVar3,param_4);
      if (iVar1 == 0) {
        return uVar4;
      }
    }
  }
  return 0xffffffff;
}


/* ---- FUN_0003252c @ 0003252c ---- */

void FUN_0003252c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00032550;
  *DAT_00032550 = 0;
  iVar2 = FUN_00032b50(param_2,param_3,param_4);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}


/* ---- FUN_00032554 @ 00032554 ---- */

undefined4 FUN_00032554(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *DAT_00032634;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x18) == 0)) {
    FUN_000318c0(iVar4);
  }
  if (param_2 == DAT_00032638) {
    param_2 = *(undefined4 **)(iVar4 + 4);
  }
  else if (param_2 == DAT_0003263c) {
    param_2 = *(undefined4 **)(iVar4 + 8);
  }
  else if (param_2 == DAT_00032640) {
    param_2 = *(undefined4 **)(iVar4 + 0xc);
  }
  uVar1 = *(ushort *)(param_2 + 3);
  if (-1 < (int)(short)uVar1 << 0x1c) {
    if (-1 < (int)((uint)uVar1 << 0x1b)) {
      *param_1 = 9;
      *(ushort *)(param_2 + 3) = uVar1 | 0x40;
      return 0xffffffff;
    }
    if ((int)((uint)uVar1 << 0x1d) < 0) {
      if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
        if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
          FUN_0003295c(param_1);
        }
        param_2[0xd] = 0;
      }
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xffdb;
      param_2[1] = 0;
      *param_2 = param_2[4];
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 8;
  }
  if ((param_2[4] == 0) && ((*(ushort *)(param_2 + 3) & 0x280) != 0x200)) {
    FUN_00032878(param_1,param_2);
  }
  uVar1 = *(ushort *)(param_2 + 3);
  uVar3 = (int)(short)uVar1 & 1;
  if (((int)(short)uVar1 & 1U) == 0) {
    if (-1 < (int)((uint)uVar1 << 0x1e)) {
      uVar3 = param_2[5];
    }
    param_2[2] = uVar3;
  }
  else {
    param_2[2] = 0;
    param_2[6] = -param_2[5];
  }
  uVar2 = 0;
  if ((param_2[4] == 0) && ((int)((uint)uVar1 << 0x18) < 0)) {
    *(ushort *)(param_2 + 3) = uVar1 | 0x40;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* ---- FUN_00032644 @ 00032644 ---- */

void FUN_00032644(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00032664;
  *DAT_00032664 = 0;
  iVar2 = FUN_00032ae4(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}


/* ---- FUN_00032668 @ 00032668 ---- */

undefined8 FUN_00032668(uint *param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  uint *puVar10;
  
  uVar1 = *(ushort *)(param_2 + 3);
  puVar10 = param_1;
  if ((int)((uint)uVar1 << 0x1c) < 0) {
    iVar3 = param_2[4];
    if (iVar3 != 0) {
      iVar5 = *param_2;
      *param_2 = iVar3;
      iVar5 = iVar5 - iVar3;
      iVar6 = 0;
      if ((uVar1 & 3) == 0) {
        iVar6 = param_2[5];
      }
      param_2[2] = iVar6;
      for (; 0 < iVar5; iVar5 = iVar5 - iVar6) {
        iVar6 = (*(code *)param_2[10])(param_1,param_2[8],iVar3,iVar5,puVar10,iVar5,param_3);
        if (iVar6 < 1) {
          uVar2 = 0xffffffff;
          *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
          goto LAB_00032682;
        }
        iVar3 = iVar3 + iVar6;
      }
    }
  }
  else if (((0 < param_2[1]) || (0 < param_2[0x10])) &&
          (pcVar9 = (code *)param_2[0xb], pcVar9 != (code *)0x0)) {
    uVar8 = *param_1;
    *param_1 = 0;
    if ((uVar1 & 0x1000) == 0) {
      iVar3 = (*pcVar9)(param_1,param_2[8],uVar1 & 0x1000,1,param_1,param_2);
      if ((iVar3 != -1) || (uVar7 = *param_1, uVar7 == 0)) goto LAB_0003269e;
      if ((uVar7 == 0x1d) || (uVar7 == 0x16)) {
        *param_1 = uVar8;
        goto LAB_00032680;
      }
      uVar1 = *(ushort *)(param_2 + 3);
    }
    else {
      iVar3 = param_2[0x15];
LAB_0003269e:
      if (((int)((uint)*(ushort *)(param_2 + 3) << 0x1d) < 0) &&
         (iVar3 = iVar3 - param_2[1], param_2[0xd] != 0)) {
        iVar3 = iVar3 - param_2[0x10];
      }
      iVar3 = (*(code *)param_2[0xb])(param_1,param_2[8],iVar3,0);
      uVar1 = *(ushort *)(param_2 + 3);
      if ((iVar3 != -1) ||
         ((*param_1 < 0x1e && ((int)((DAT_0003277c >> (*param_1 & 0xff)) << 0x1f) < 0)))) {
        param_2[1] = 0;
        *param_2 = param_2[4];
        if (((int)((uint)uVar1 << 0x13) < 0) && ((iVar3 != -1 || (*param_1 == 0)))) {
          param_2[0x15] = iVar3;
        }
        piVar4 = (int *)param_2[0xd];
        *param_1 = uVar8;
        if (piVar4 != (int *)0x0) {
          if (piVar4 != param_2 + 0x11) {
            FUN_0003295c(param_1);
          }
          uVar2 = 0;
          param_2[0xd] = 0;
          goto LAB_00032682;
        }
        goto LAB_00032680;
      }
    }
    uVar2 = 0xffffffff;
    *(ushort *)(param_2 + 3) = uVar1 | 0x40;
    goto LAB_00032682;
  }
LAB_00032680:
  uVar2 = 0;
LAB_00032682:
  return CONCAT44(puVar10,uVar2);
}


/* ---- FUN_00032780 @ 00032780 ---- */

undefined4 FUN_00032780(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
      FUN_000318c0();
    }
    if (param_2 == DAT_000327f4) {
      param_2 = *(int *)(param_1 + 4);
    }
    else if (param_2 == DAT_000327f8) {
      param_2 = *(int *)(param_1 + 8);
    }
    else if (param_2 == DAT_000327fc) {
      param_2 = *(int *)(param_1 + 0xc);
    }
    if (*(short *)(param_2 + 0xc) != 0) {
      if ((-1 < *(int *)(param_2 + 100) << 0x1f) && (-1 < (int)*(short *)(param_2 + 0xc) << 0x16)) {
        FUN_00031a02(*(undefined4 *)(param_2 + 0x58));
      }
      uVar1 = FUN_00032668(param_1,param_2);
      if (*(int *)(param_2 + 100) << 0x1f < 0) {
        return uVar1;
      }
      if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x16) < 0) {
        return uVar1;
      }
      FUN_00031a04(*(undefined4 *)(param_2 + 0x58));
      return uVar1;
    }
  }
  return 0;
}


/* ---- FUN_00032800 @ 00032800 ---- */

void FUN_00032800(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00032824;
  *DAT_00032824 = 0;
  iVar2 = FUN_00032b14(param_2,param_3,param_4);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}


/* ---- FUN_00032828 @ 00032828 ---- */

undefined4 FUN_00032828(undefined4 param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined auStack_68 [4];
  uint local_64;
  
  if ((*(short *)(param_2 + 0xe) < 0) ||
     (iVar2 = FUN_00032a78(param_1,(int)*(short *)(param_2 + 0xe),auStack_68), iVar2 < 0)) {
    sVar1 = *(short *)(param_2 + 0xc);
    *param_4 = 0;
    if ((int)sVar1 << 0x18 < 0) {
      uVar3 = 0x40;
      goto LAB_0003286c;
    }
  }
  else {
    *param_4 = (uint)((local_64 & 0xf000) + DAT_00032874 == 0);
  }
  uVar3 = 0x400;
LAB_0003286c:
  *param_3 = uVar3;
  return 0;
}


/* ---- FUN_00032878 @ 00032878 ---- */

undefined8 FUN_00032878(int param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int local_20;
  int *local_1c;
  undefined4 uStack_18;
  
  local_20 = param_1;
  local_1c = param_2;
  if ((*(ushort *)(param_2 + 3) & 2) == 0) {
    uStack_18 = param_3;
    uVar1 = FUN_00032828(param_1,param_2,&local_20,&local_1c);
    iVar2 = FUN_00031a4c(param_1,local_20);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x28) = DAT_000328fc;
      *param_2 = iVar2;
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x80;
      param_2[4] = iVar2;
      param_2[5] = local_20;
      if ((local_1c != (int *)0x0) &&
         (iVar2 = FUN_00032a9c(param_1,(int)*(short *)((int)param_2 + 0xe)), iVar2 != 0)) {
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfffc | 1;
      }
      *(ushort *)(param_2 + 3) = uVar1 | *(ushort *)(param_2 + 3);
      goto LAB_00032892;
    }
    if ((int)(short)*(ushort *)(param_2 + 3) << 0x16 < 0) goto LAB_00032892;
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfffc | 2;
  }
  *param_2 = (int)param_2 + 0x47;
  param_2[4] = (int)param_2 + 0x47;
  param_2[5] = 1;
LAB_00032892:
  return CONCAT44(local_1c,local_20);
}


/* ---- FUN_00032900 @ 00032900 ---- */

char * FUN_00032900(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = param_1 + param_3;
  while( true ) {
    if (param_1 == pcVar1) {
      return (char *)0x0;
    }
    if (*param_1 == param_2) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* ---- FUN_00032916 @ 00032916 ---- */

void FUN_00032916(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if ((param_2 < param_1) && (param_1 < param_2 + param_3)) {
    while (bVar2 = param_3 != 0, param_3 = param_3 + -1, bVar2) {
      *(undefined *)(param_1 + param_3) = *(undefined *)(param_2 + param_3);
    }
  }
  else {
    for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
      *(undefined *)(param_1 + iVar1) = *(undefined *)(param_2 + iVar1);
    }
  }
  return;
}


/* ---- FUN_0003293c @ 0003293c ---- */

void FUN_0003293c(void)

{
  FUN_00031a02(DAT_00032948);
  return;
}


/* ---- FUN_0003294c @ 0003294c ---- */

void FUN_0003294c(void)

{
  FUN_00031a04(DAT_00032958);
  return;
}


/* ---- FUN_0003295c @ 0003295c ---- */

void FUN_0003295c(undefined4 *param_1,int param_2)

{
  int **ppiVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  if (param_2 == 0) {
    return;
  }
  piVar7 = (int *)(param_2 + -4);
  if (*piVar7 < 0) {
    piVar7 = (int *)((int)piVar7 + *piVar7);
  }
  FUN_0003293c(param_1);
  ppiVar1 = DAT_000329ec;
  piVar4 = *DAT_000329ec;
  if (piVar4 != (int *)0x0) {
    if (piVar4 <= piVar7) {
      do {
        piVar5 = piVar4;
        piVar4 = (int *)piVar5[1];
        if (piVar4 == (int *)0x0) break;
      } while (piVar4 <= piVar7);
      piVar3 = (int *)((int)piVar5 + *piVar5);
      if (piVar3 == piVar7) {
        iVar2 = *piVar5 + *piVar7;
        *piVar5 = iVar2;
        if (piVar4 == (int *)((int)piVar5 + iVar2)) {
          iVar6 = piVar4[1];
          *piVar5 = *piVar4 + iVar2;
          piVar5[1] = iVar6;
        }
      }
      else if (piVar7 < piVar3) {
        *param_1 = 0xc;
      }
      else {
        if (piVar4 == (int *)((int)piVar7 + *piVar7)) {
          iVar2 = *piVar4;
          piVar4 = (int *)piVar4[1];
          *piVar7 = iVar2 + *piVar7;
        }
        piVar7[1] = (int)piVar4;
        piVar5[1] = (int)piVar7;
      }
      goto LAB_00032980;
    }
    if (piVar4 == (int *)((int)piVar7 + *piVar7)) {
      iVar2 = *piVar4;
      piVar4 = (int *)piVar4[1];
      *piVar7 = iVar2 + *piVar7;
    }
  }
  piVar7[1] = (int)piVar4;
  *ppiVar1 = piVar7;
LAB_00032980:
  FUN_0003294c(param_1);
  return;
}


/* ---- FUN_000329f0 @ 000329f0 ---- */

undefined8 FUN_000329f0(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_00031a4c(param_1,param_3);
  }
  else if (param_3 == 0) {
    FUN_0003295c();
    iVar1 = 0;
  }
  else {
    uVar2 = FUN_00032ac0();
    if (((uVar2 < param_3) || (iVar1 = param_2, param_3 <= uVar2 >> 1)) &&
       (iVar1 = FUN_00031a4c(param_1,param_3), iVar1 != 0)) {
      if (uVar2 < param_3) {
        param_3 = uVar2;
      }
      FUN_00031764(iVar1,param_2,param_3);
      FUN_0003295c(param_1,param_2);
    }
  }
  return CONCAT44(param_1,iVar1);
}


/* ---- FUN_00032a50 @ 00032a50 ---- */

void FUN_00032a50(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00032a74;
  *DAT_00032a74 = 0;
  iVar2 = FUN_00032b24(param_2,param_3,param_4);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}


/* ---- FUN_00032a78 @ 00032a78 ---- */

void FUN_00032a78(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00032a98;
  *DAT_00032a98 = 0;
  iVar2 = FUN_00032af4(param_2,param_3);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}


/* ---- FUN_00032a9c @ 00032a9c ---- */

void FUN_00032a9c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00032abc;
  *DAT_00032abc = 0;
  iVar2 = FUN_00032b04(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}


/* ---- FUN_00032ac0 @ 00032ac0 ---- */

int FUN_00032ac0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + -4) + -4;
  if (*(int *)(param_2 + -4) < 0) {
    iVar1 = iVar1 + *(int *)(param_2 + iVar1);
  }
  return iVar1;
}


/* ---- __gnu_thumb1_case_shi @ 00032ad0 ---- */

/* WARNING: This is an inlined function */

undefined8 __gnu_thumb1_case_shi(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}


/* ---- FUN_00032ae4 @ 00032ae4 ---- */

undefined4 FUN_00032ae4(void)

{
  *DAT_00032af0 = 0x58;
  return 0xffffffff;
}


/* ---- FUN_00032af4 @ 00032af4 ---- */

undefined4 FUN_00032af4(void)

{
  *DAT_00032b00 = 0x58;
  return 0xffffffff;
}


/* ---- FUN_00032b04 @ 00032b04 ---- */

undefined4 FUN_00032b04(void)

{
  *DAT_00032b10 = 0x58;
  return 0;
}


/* ---- FUN_00032b14 @ 00032b14 ---- */

undefined4 FUN_00032b14(void)

{
  *DAT_00032b20 = 0x58;
  return 0xffffffff;
}


/* ---- FUN_00032b24 @ 00032b24 ---- */

undefined4 FUN_00032b24(void)

{
  *DAT_00032b30 = 0x58;
  return 0xffffffff;
}


/* ---- FUN_00032b34 @ 00032b34 ---- */

void FUN_00032b34(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_00032b48;
  if (*DAT_00032b48 == 0) {
    iVar1 = DAT_00032b4c;
  }
  *DAT_00032b48 = iVar1 + param_1;
  return;
}


/* ---- FUN_00032b50 @ 00032b50 ---- */

undefined4 FUN_00032b50(void)

{
  *DAT_00032b5c = 0x58;
  return 0xffffffff;
}


/* ---- FUN_00032b60 @ 00032b60 ---- */

void FUN_00032b60(void)

{
  return;
}


/* ---- FUN_00032b6c @ 00032b6c ---- */

void FUN_00032b6c(void)

{
  return;
}


