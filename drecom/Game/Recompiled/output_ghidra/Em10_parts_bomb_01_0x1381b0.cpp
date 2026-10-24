#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Em10_parts_bomb_01
// Address: 0x1381b0 - 0x138a40
void Em10_parts_bomb_01_0x1381b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_parts_bomb_01_0x1381b0");
#endif

    switch (ctx->pc) {
        case 0x13822cu: goto label_13822c;
        case 0x1382a8u: goto label_1382a8;
        case 0x138330u: goto label_138330;
        case 0x1383b8u: goto label_1383b8;
        case 0x1383d8u: goto label_1383d8;
        case 0x1383f8u: goto label_1383f8;
        case 0x138418u: goto label_138418;
        case 0x138438u: goto label_138438;
        case 0x138458u: goto label_138458;
        case 0x1384d4u: goto label_1384d4;
        case 0x1384ecu: goto label_1384ec;
        case 0x138504u: goto label_138504;
        case 0x13854cu: goto label_13854c;
        case 0x138564u: goto label_138564;
        case 0x138580u: goto label_138580;
        case 0x138594u: goto label_138594;
        case 0x1385a8u: goto label_1385a8;
        case 0x1385fcu: goto label_1385fc;
        case 0x138618u: goto label_138618;
        case 0x138660u: goto label_138660;
        case 0x138678u: goto label_138678;
        case 0x138694u: goto label_138694;
        case 0x1386a8u: goto label_1386a8;
        case 0x1386bcu: goto label_1386bc;
        case 0x138714u: goto label_138714;
        case 0x138730u: goto label_138730;
        case 0x138778u: goto label_138778;
        case 0x138790u: goto label_138790;
        case 0x1387acu: goto label_1387ac;
        case 0x1387c0u: goto label_1387c0;
        case 0x1387d4u: goto label_1387d4;
        case 0x13882cu: goto label_13882c;
        case 0x1388bcu: goto label_1388bc;
        case 0x138910u: goto label_138910;
        case 0x138960u: goto label_138960;
        default: break;
    }

    ctx->pc = 0x1381b0u;

    // 0x1381b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1381b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1381b4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x1381b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1381b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1381b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1381bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1381bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1381c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1381c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1381c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1381c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1381c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1381c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1381cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1381ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1381d0: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1381d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1381d4: 0x8fb00098  lw          $s0, 0x98($sp)
    ctx->pc = 0x1381d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1381d8: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1381d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1381dc: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1381dcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1381e0: 0x9263009a  lbu         $v1, 0x9A($s3)
    ctx->pc = 0x1381e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x1381e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1381e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1381e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1381e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1381ec: 0x108301f0  beq         $a0, $v1, . + 4 + (0x1F0 << 2)
    ctx->pc = 0x1381ECu;
    {
        const bool branch_taken_0x1381ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1381ec) {
            ctx->pc = 0x1389B0u;
            goto label_1389b0;
        }
    }
    ctx->pc = 0x1381F4u;
    // 0x1381f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1381f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1381f8: 0x108301ad  beq         $a0, $v1, . + 4 + (0x1AD << 2)
    ctx->pc = 0x1381F8u;
    {
        const bool branch_taken_0x1381f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1381f8) {
            ctx->pc = 0x1388B0u;
            goto label_1388b0;
        }
    }
    ctx->pc = 0x138200u;
    // 0x138200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x138200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138204: 0x108300a6  beq         $a0, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x138204u;
    {
        const bool branch_taken_0x138204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x138204) {
            ctx->pc = 0x1384A0u;
            goto label_1384a0;
        }
    }
    ctx->pc = 0x13820Cu;
    // 0x13820c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13820Cu;
    {
        const bool branch_taken_0x13820c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13820c) {
            ctx->pc = 0x13821Cu;
            goto label_13821c;
        }
    }
    ctx->pc = 0x138214u;
    // 0x138214: 0x100001e6  b           . + 4 + (0x1E6 << 2)
    ctx->pc = 0x138214u;
    {
        const bool branch_taken_0x138214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138214) {
            ctx->pc = 0x1389B0u;
            goto label_1389b0;
        }
    }
    ctx->pc = 0x13821Cu;
label_13821c:
    // 0x13821c: 0xa260009c  sb          $zero, 0x9C($s3)
    ctx->pc = 0x13821cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x138220: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138220u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138224: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x138224u;
    {
        const bool branch_taken_0x138224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138224) {
            ctx->pc = 0x138278u;
            goto label_138278;
        }
    }
    ctx->pc = 0x13822Cu;
label_13822c:
    // 0x13822c: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x13822cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138230: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x138230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x138234: 0x24a34ec8  addiu       $v1, $a1, 0x4EC8
    ctx->pc = 0x138234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20168));
    // 0x138238: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x138238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13823c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13823cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138240: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x138240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x138244: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x138244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x138248: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x138248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13824c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x13824cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138250: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x138250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x138254: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x138254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138258: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x138258u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x13825c: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x13825cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x138260: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x138260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x138264: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x138264u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x138268: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x138268u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13826c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x13826cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138270: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x138270u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x138274: 0x0  nop
    ctx->pc = 0x138274u;
    // NOP
label_138278:
    // 0x138278: 0x2a03000b  slti        $v1, $s0, 0xB
    ctx->pc = 0x138278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x13827c: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13827Cu;
    {
        const bool branch_taken_0x13827c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13827c) {
            ctx->pc = 0x13822Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13822c;
        }
    }
    ctx->pc = 0x138284u;
    // 0x138284: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x138284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138288: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x138288u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x13828c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13828cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x138290: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x138290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x138294: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x138294u;
    {
        const bool branch_taken_0x138294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x138294) {
            ctx->pc = 0x138304u;
            goto label_138304;
        }
    }
    ctx->pc = 0x13829Cu;
    // 0x13829c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x13829cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1382a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1382A0u;
    {
        const bool branch_taken_0x1382a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1382a0) {
            ctx->pc = 0x1382F0u;
            goto label_1382f0;
        }
    }
    ctx->pc = 0x1382A8u;
label_1382a8:
    // 0x1382a8: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x1382a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1382ac: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1382acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1382b0: 0x24644ee0  addiu       $a0, $v1, 0x4EE0
    ctx->pc = 0x1382b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20192));
    // 0x1382b4: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1382b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1382b8: 0x90720000  lbu         $s2, 0x0($v1)
    ctx->pc = 0x1382b8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1382bc: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x1382bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1382c0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1382c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1382c4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1382c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1382c8: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1382c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1382cc: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x1382ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x1382d0: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1382d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1382d4: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x1382d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1382d8: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1382d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1382dc: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x1382dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1382e0: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x1382e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x1382e4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1382e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1382e8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1382e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1382ec: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1382ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1382f0:
    // 0x1382f0: 0x2a040002  slti        $a0, $s0, 0x2
    ctx->pc = 0x1382f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1382f4: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1382F4u;
    {
        const bool branch_taken_0x1382f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1382f4) {
            ctx->pc = 0x1382A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1382a8;
        }
    }
    ctx->pc = 0x1382FCu;
    // 0x1382fc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1382FCu;
    {
        const bool branch_taken_0x1382fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1382fc) {
            ctx->pc = 0x138388u;
            goto label_138388;
        }
    }
    ctx->pc = 0x138304u;
label_138304:
    // 0x138304: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x138304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x138308: 0x30720008  andi        $s2, $v1, 0x8
    ctx->pc = 0x138308u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x13830c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x13830Cu;
    {
        const bool branch_taken_0x13830c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13830c) {
            ctx->pc = 0x138320u;
            goto label_138320;
        }
    }
    ctx->pc = 0x138314u;
    // 0x138314: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x138314u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138318: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x138318u;
    {
        const bool branch_taken_0x138318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138318) {
            ctx->pc = 0x138324u;
            goto label_138324;
        }
    }
    ctx->pc = 0x138320u;
label_138320:
    // 0x138320: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x138320u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_138324:
    // 0x138324: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138324u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138328: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x138328u;
    {
        const bool branch_taken_0x138328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138328) {
            ctx->pc = 0x138378u;
            goto label_138378;
        }
    }
    ctx->pc = 0x138330u;
label_138330:
    // 0x138330: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x138330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138334: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x138334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x138338: 0x24634ed8  addiu       $v1, $v1, 0x4ED8
    ctx->pc = 0x138338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20184));
    // 0x13833c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x138340: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x138340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138344: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x138344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x138348: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x138348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13834c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138350: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x138350u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138354: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x138354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x138358: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x138358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13835c: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x13835cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x138360: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x138360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x138364: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x138364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x138368: 0xae840024  sw          $a0, 0x24($s4)
    ctx->pc = 0x138368u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 4));
    // 0x13836c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x13836cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138370: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138374: 0x0  nop
    ctx->pc = 0x138374u;
    // NOP
label_138378:
    // 0x138378: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x138378u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x13837c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13837Cu;
    {
        const bool branch_taken_0x13837c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13837c) {
            ctx->pc = 0x138330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138330;
        }
    }
    ctx->pc = 0x138384u;
    // 0x138384: 0x0  nop
    ctx->pc = 0x138384u;
    // NOP
label_138388:
    // 0x138388: 0x8fb20098  lw          $s2, 0x98($sp)
    ctx->pc = 0x138388u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13838c: 0x8e540058  lw          $s4, 0x58($s2)
    ctx->pc = 0x13838cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x138390: 0xa2800f30  sb          $zero, 0xF30($s4)
    ctx->pc = 0x138390u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3888), (uint8_t)GPR_U32(ctx, 0));
    // 0x138394: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x138394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138398: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x138398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13839c: 0xa0600ea0  sb          $zero, 0xEA0($v1)
    ctx->pc = 0x13839cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3744), (uint8_t)GPR_U32(ctx, 0));
    // 0x1383a0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1383a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1383a4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1383a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1383a8: 0xa0601170  sb          $zero, 0x1170($v1)
    ctx->pc = 0x1383a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4464), (uint8_t)GPR_U32(ctx, 0));
    // 0x1383ac: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1383acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1383b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1383B0u;
    {
        const bool branch_taken_0x1383b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1383b0) {
            ctx->pc = 0x1383E0u;
            goto label_1383e0;
        }
    }
    ctx->pc = 0x1383B8u;
label_1383b8:
    // 0x1383b8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1383b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1383bc: 0x24424e98  addiu       $v0, $v0, 0x4E98
    ctx->pc = 0x1383bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20120));
    // 0x1383c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1383c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1383c4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1383c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1383c8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1383c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1383cc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1383ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1383d0: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x1383D0u;
    SET_GPR_U32(ctx, 31, 0x1383D8u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x1383D0u, 0x1383D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1383D8u;
label_1383d8:
    // 0x1383d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1383d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1383dc: 0x0  nop
    ctx->pc = 0x1383dcu;
    // NOP
label_1383e0:
    // 0x1383e0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1383e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1383e4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1383E4u;
    {
        const bool branch_taken_0x1383e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1383e4) {
            ctx->pc = 0x1383B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1383b8;
        }
    }
    ctx->pc = 0x1383ECu;
    // 0x1383ec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1383ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1383f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1383F0u;
    {
        const bool branch_taken_0x1383f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1383f0) {
            ctx->pc = 0x138420u;
            goto label_138420;
        }
    }
    ctx->pc = 0x1383F8u;
label_1383f8:
    // 0x1383f8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1383f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1383fc: 0x24424ea0  addiu       $v0, $v0, 0x4EA0
    ctx->pc = 0x1383fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20128));
    // 0x138400: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138404: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138408: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x138408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13840c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x13840cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138410: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x138410u;
    SET_GPR_U32(ctx, 31, 0x138418u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x138410u, 0x138418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138418u;
label_138418:
    // 0x138418: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13841c: 0x0  nop
    ctx->pc = 0x13841cu;
    // NOP
label_138420:
    // 0x138420: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x138420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138424: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x138424u;
    {
        const bool branch_taken_0x138424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138424) {
            ctx->pc = 0x1383F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1383f8;
        }
    }
    ctx->pc = 0x13842Cu;
    // 0x13842c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x13842cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138430: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x138430u;
    {
        const bool branch_taken_0x138430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138430) {
            ctx->pc = 0x138460u;
            goto label_138460;
        }
    }
    ctx->pc = 0x138438u;
label_138438:
    // 0x138438: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x13843c: 0x24424ea8  addiu       $v0, $v0, 0x4EA8
    ctx->pc = 0x13843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20136));
    // 0x138440: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138444: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138448: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x138448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13844c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x13844cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138450: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x138450u;
    SET_GPR_U32(ctx, 31, 0x138458u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x138450u, 0x138458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138458u;
label_138458:
    // 0x138458: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13845c: 0x0  nop
    ctx->pc = 0x13845cu;
    // NOP
label_138460:
    // 0x138460: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x138460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138464: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x138464u;
    {
        const bool branch_taken_0x138464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138464) {
            ctx->pc = 0x138438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138438;
        }
    }
    ctx->pc = 0x13846Cu;
    // 0x13846c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x13846cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x138470: 0xa662008e  sh          $v0, 0x8E($s3)
    ctx->pc = 0x138470u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 2));
    // 0x138474: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x138474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x138478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x138478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13847c: 0x0  nop
    ctx->pc = 0x13847cu;
    // NOP
    // 0x138480: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x138480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x138484: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x138484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x138488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x138488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13848c: 0x0  nop
    ctx->pc = 0x13848cu;
    // NOP
    // 0x138490: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x138490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x138494: 0x9262009a  lbu         $v0, 0x9A($s3)
    ctx->pc = 0x138494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x138498: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x138498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13849c: 0xa262009a  sb          $v0, 0x9A($s3)
    ctx->pc = 0x13849cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 2));
label_1384a0:
    // 0x1384a0: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x1384a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1384a4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1384a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1384a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1384a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1384ac: 0x0  nop
    ctx->pc = 0x1384acu;
    // NOP
    // 0x1384b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1384b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1384b4: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x1384b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x1384b8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1384b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1384bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1384bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1384c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1384c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1384c4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1384c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1384c8: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x1384c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x1384cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1384CCu;
    SET_GPR_U32(ctx, 31, 0x1384D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1384CCu, 0x1384D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1384D4u;
label_1384d4:
    // 0x1384d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1384d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1384d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1384d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1384dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1384dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1384e0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1384e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1384e4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1384E4u;
    SET_GPR_U32(ctx, 31, 0x1384ECu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1384ECu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1384ECu) { return; }
    ctx->pc = 0x1384ECu;
label_1384ec:
    // 0x1384ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1384ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1384f0: 0x0  nop
    ctx->pc = 0x1384f0u;
    // NOP
    // 0x1384f4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1384f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1384f8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1384f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1384fc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1384FCu;
    {
        const bool branch_taken_0x1384fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1384fc) {
            ctx->pc = 0x138600u;
            goto label_138600;
        }
    }
    ctx->pc = 0x138504u;
label_138504:
    // 0x138504: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x138504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138508: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x13850c: 0x24424e98  addiu       $v0, $v0, 0x4E98
    ctx->pc = 0x13850cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20120));
    // 0x138510: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138514: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138518: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x138518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13851c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13851cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138520: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138524: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138528: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x138528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13852c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13852cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138530: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x138530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x138534: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x138534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138538: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x138538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13853c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x13853cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138540: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x138540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138544: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x138544u;
    SET_GPR_U32(ctx, 31, 0x13854Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x138544u, 0x13854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13854Cu;
label_13854c:
    // 0x13854c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x13854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138550: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x138550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138554: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138558: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x138558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x13855c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x13855Cu;
    SET_GPR_U32(ctx, 31, 0x138564u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x13855Cu, 0x138564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138564u;
label_138564:
    // 0x138564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138568: 0x0  nop
    ctx->pc = 0x138568u;
    // NOP
    // 0x13856c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x13856cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x138570: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x138570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138574: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x138574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138578: 0xc040c24  jal         func_103090
    ctx->pc = 0x138578u;
    SET_GPR_U32(ctx, 31, 0x138580u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x138580u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138580u) { return; }
    ctx->pc = 0x138580u;
label_138580:
    // 0x138580: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x138580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138584: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x138584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138588: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x138588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13858c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x13858Cu;
    SET_GPR_U32(ctx, 31, 0x138594u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x138594u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138594u) { return; }
    ctx->pc = 0x138594u;
label_138594:
    // 0x138594: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x138594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138598: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13859c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x13859cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1385a0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1385A0u;
    SET_GPR_U32(ctx, 31, 0x1385A8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1385A0u, 0x1385A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1385A8u;
label_1385a8:
    // 0x1385a8: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x1385a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1385ac: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1385acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1385b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1385b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1385b4: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1385b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1385b8: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x1385b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1385bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1385bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1385c0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1385c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1385c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1385c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1385c8: 0x0  nop
    ctx->pc = 0x1385c8u;
    // NOP
    // 0x1385cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1385CCu;
    {
        const bool branch_taken_0x1385cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1385cc) {
            ctx->pc = 0x1385E0u;
            goto label_1385e0;
        }
    }
    ctx->pc = 0x1385D4u;
    // 0x1385d4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1385d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1385d8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1385d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1385dc: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1385dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_1385e0:
    // 0x1385e0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1385e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1385e4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1385e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1385e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1385e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1385ec: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1385ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1385f0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1385f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1385f4: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x1385F4u;
    SET_GPR_U32(ctx, 31, 0x1385FCu);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x1385F4u, 0x1385FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1385FCu;
label_1385fc:
    // 0x1385fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1385fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_138600:
    // 0x138600: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138604: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x138604u;
    {
        const bool branch_taken_0x138604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138604) {
            ctx->pc = 0x138504u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138504;
        }
    }
    ctx->pc = 0x13860Cu;
    // 0x13860c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x13860cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138610: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x138610u;
    {
        const bool branch_taken_0x138610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138610) {
            ctx->pc = 0x138718u;
            goto label_138718;
        }
    }
    ctx->pc = 0x138618u;
label_138618:
    // 0x138618: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x138618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13861c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x13861cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x138620: 0x24424ea0  addiu       $v0, $v0, 0x4EA0
    ctx->pc = 0x138620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20128));
    // 0x138624: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138628: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13862c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13862cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138630: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138634: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138638: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13863c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138640: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x138640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138644: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x138644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x138648: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x138648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13864c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x13864cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138650: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138654: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x138654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138658: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x138658u;
    SET_GPR_U32(ctx, 31, 0x138660u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x138658u, 0x138660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138660u;
label_138660:
    // 0x138660: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x138660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138664: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x138664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138668: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13866c: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x13866cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x138670: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x138670u;
    SET_GPR_U32(ctx, 31, 0x138678u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x138670u, 0x138678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138678u;
label_138678:
    // 0x138678: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13867c: 0x0  nop
    ctx->pc = 0x13867cu;
    // NOP
    // 0x138680: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x138680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x138684: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x138684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138688: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x138688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13868c: 0xc040c24  jal         func_103090
    ctx->pc = 0x13868Cu;
    SET_GPR_U32(ctx, 31, 0x138694u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x138694u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138694u) { return; }
    ctx->pc = 0x138694u;
label_138694:
    // 0x138694: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x138694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138698: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x138698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13869c: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x13869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1386a0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1386A0u;
    SET_GPR_U32(ctx, 31, 0x1386A8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1386A8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1386A8u) { return; }
    ctx->pc = 0x1386A8u;
label_1386a8:
    // 0x1386a8: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1386a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1386ac: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1386acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1386b0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1386b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1386b4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1386B4u;
    SET_GPR_U32(ctx, 31, 0x1386BCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1386B4u, 0x1386BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1386BCu;
label_1386bc:
    // 0x1386bc: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x1386bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1386c0: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1386c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1386c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1386c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1386c8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1386c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1386cc: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x1386ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1386d0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1386d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1386d4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1386d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1386d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1386d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1386dc: 0x0  nop
    ctx->pc = 0x1386dcu;
    // NOP
    // 0x1386e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1386E0u;
    {
        const bool branch_taken_0x1386e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1386e0) {
            ctx->pc = 0x1386F8u;
            goto label_1386f8;
        }
    }
    ctx->pc = 0x1386E8u;
    // 0x1386e8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1386e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1386ec: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1386ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1386f0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1386f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1386f4: 0x0  nop
    ctx->pc = 0x1386f4u;
    // NOP
label_1386f8:
    // 0x1386f8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1386f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1386fc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1386fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x138700: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x138700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138704: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x138704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x138708: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x138708u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13870c: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x13870Cu;
    SET_GPR_U32(ctx, 31, 0x138714u);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x13870Cu, 0x138714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138714u;
label_138714:
    // 0x138714: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_138718:
    // 0x138718: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138718u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13871c: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x13871Cu;
    {
        const bool branch_taken_0x13871c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13871c) {
            ctx->pc = 0x138618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138618;
        }
    }
    ctx->pc = 0x138724u;
    // 0x138724: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138724u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138728: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x138728u;
    {
        const bool branch_taken_0x138728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138728) {
            ctx->pc = 0x138830u;
            goto label_138830;
        }
    }
    ctx->pc = 0x138730u;
label_138730:
    // 0x138730: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x138730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138734: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x138738: 0x24424ea8  addiu       $v0, $v0, 0x4EA8
    ctx->pc = 0x138738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20136));
    // 0x13873c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138740: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138744: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x138744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138748: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13874c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138750: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138754: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x138754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138758: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x138758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13875c: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x13875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x138760: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x138760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138764: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x138764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138768: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13876c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x13876cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138770: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x138770u;
    SET_GPR_U32(ctx, 31, 0x138778u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x138770u, 0x138778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138778u;
label_138778:
    // 0x138778: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x138778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13877c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13877cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138780: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138784: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x138784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x138788: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x138788u;
    SET_GPR_U32(ctx, 31, 0x138790u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x138788u, 0x138790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138790u;
label_138790:
    // 0x138790: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138794: 0x0  nop
    ctx->pc = 0x138794u;
    // NOP
    // 0x138798: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x138798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x13879c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13879cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1387a0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1387a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1387a4: 0xc040c24  jal         func_103090
    ctx->pc = 0x1387A4u;
    SET_GPR_U32(ctx, 31, 0x1387ACu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1387ACu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1387ACu) { return; }
    ctx->pc = 0x1387ACu;
label_1387ac:
    // 0x1387ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1387acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1387b0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1387b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1387b4: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x1387b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1387b8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1387B8u;
    SET_GPR_U32(ctx, 31, 0x1387C0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1387C0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1387C0u) { return; }
    ctx->pc = 0x1387C0u;
label_1387c0:
    // 0x1387c0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1387c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1387c4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1387c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1387c8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1387c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1387cc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1387CCu;
    SET_GPR_U32(ctx, 31, 0x1387D4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1387CCu, 0x1387D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1387D4u;
label_1387d4:
    // 0x1387d4: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x1387d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1387d8: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1387d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1387dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1387dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1387e0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1387e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1387e4: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x1387e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1387e8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1387e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1387ec: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1387ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1387f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1387f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1387f4: 0x0  nop
    ctx->pc = 0x1387f4u;
    // NOP
    // 0x1387f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1387F8u;
    {
        const bool branch_taken_0x1387f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1387f8) {
            ctx->pc = 0x138810u;
            goto label_138810;
        }
    }
    ctx->pc = 0x138800u;
    // 0x138800: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x138800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138804: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x138804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138808: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x138808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x13880c: 0x0  nop
    ctx->pc = 0x13880cu;
    // NOP
label_138810:
    // 0x138810: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x138810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x138814: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x138814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x138818: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x138818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13881c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x13881cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x138820: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x138820u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x138824: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x138824u;
    SET_GPR_U32(ctx, 31, 0x13882Cu);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x138824u, 0x13882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13882Cu;
label_13882c:
    // 0x13882c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13882cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_138830:
    // 0x138830: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138830u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138834: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x138834u;
    {
        const bool branch_taken_0x138834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138834) {
            ctx->pc = 0x138730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138730;
        }
    }
    ctx->pc = 0x13883Cu;
    // 0x13883c: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x13883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138840: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x138840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x138844: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138848: 0x0  nop
    ctx->pc = 0x138848u;
    // NOP
    // 0x13884c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13884cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x138850: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x138850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x138854: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x138854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13885c: 0x0  nop
    ctx->pc = 0x13885cu;
    // NOP
    // 0x138860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x138860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138864: 0x0  nop
    ctx->pc = 0x138864u;
    // NOP
    // 0x138868: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x138868u;
    {
        const bool branch_taken_0x138868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138868) {
            ctx->pc = 0x13887Cu;
            goto label_13887c;
        }
    }
    ctx->pc = 0x138870u;
    // 0x138870: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138874: 0x0  nop
    ctx->pc = 0x138874u;
    // NOP
    // 0x138878: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x138878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
label_13887c:
    // 0x13887c: 0x8664008e  lh          $a0, 0x8E($s3)
    ctx->pc = 0x13887cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x138880: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x138880u;
    {
        const bool branch_taken_0x138880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x138880) {
            ctx->pc = 0x13889Cu;
            goto label_13889c;
        }
    }
    ctx->pc = 0x138888u;
    // 0x138888: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x138888u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x13888c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13888cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x138890: 0xa663008e  sh          $v1, 0x8E($s3)
    ctx->pc = 0x138890u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 3));
    // 0x138894: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x138894u;
    {
        const bool branch_taken_0x138894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138894) {
            ctx->pc = 0x1389B0u;
            goto label_1389b0;
        }
    }
    ctx->pc = 0x13889Cu;
label_13889c:
    // 0x13889c: 0x9263009a  lbu         $v1, 0x9A($s3)
    ctx->pc = 0x13889cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x1388a0: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1388a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1388a4: 0xa266009a  sb          $a2, 0x9A($s3)
    ctx->pc = 0x1388a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 6));
    // 0x1388a8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1388A8u;
    {
        const bool branch_taken_0x1388a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1388a8) {
            ctx->pc = 0x1389B0u;
            goto label_1389b0;
        }
    }
    ctx->pc = 0x1388B0u;
label_1388b0:
    // 0x1388b0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1388b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1388b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1388B4u;
    {
        const bool branch_taken_0x1388b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1388b4) {
            ctx->pc = 0x1388F8u;
            goto label_1388f8;
        }
    }
    ctx->pc = 0x1388BCu;
label_1388bc:
    // 0x1388bc: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1388bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1388c0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1388c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1388c4: 0x24634eb0  addiu       $v1, $v1, 0x4EB0
    ctx->pc = 0x1388c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20144));
    // 0x1388c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1388c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1388cc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1388ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1388d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1388d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1388d4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1388d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1388d8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1388d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1388dc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1388dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1388e0: 0x8cb20058  lw          $s2, 0x58($a1)
    ctx->pc = 0x1388e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1388e4: 0x243a021  addu        $s4, $s2, $v1
    ctx->pc = 0x1388e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1388e8: 0x72809628  paddub      $s2, $s4, $zero
    ctx->pc = 0x1388e8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1388ec: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1388ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1388f0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1388f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1388f4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1388f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1388f8:
    // 0x1388f8: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x1388f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1388fc: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1388FCu;
    {
        const bool branch_taken_0x1388fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1388fc) {
            ctx->pc = 0x1388BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1388bc;
        }
    }
    ctx->pc = 0x138904u;
    // 0x138904: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138904u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138908: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x138908u;
    {
        const bool branch_taken_0x138908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138908) {
            ctx->pc = 0x138948u;
            goto label_138948;
        }
    }
    ctx->pc = 0x138910u;
label_138910:
    // 0x138910: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x138910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138914: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x138914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x138918: 0x24634eb8  addiu       $v1, $v1, 0x4EB8
    ctx->pc = 0x138918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20152));
    // 0x13891c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13891cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x138920: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x138920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138924: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x138924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x138928: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x138928u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13892c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x13892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x138930: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x138930u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138934: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x138934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x138938: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x138938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13893c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x13893cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138940: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x138940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138944: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x138944u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_138948:
    // 0x138948: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13894c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x13894Cu;
    {
        const bool branch_taken_0x13894c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13894c) {
            ctx->pc = 0x138910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138910;
        }
    }
    ctx->pc = 0x138954u;
    // 0x138954: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138954u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138958: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x138958u;
    {
        const bool branch_taken_0x138958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138958) {
            ctx->pc = 0x138998u;
            goto label_138998;
        }
    }
    ctx->pc = 0x138960u;
label_138960:
    // 0x138960: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x138960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138964: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x138964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x138968: 0x24834ec0  addiu       $v1, $a0, 0x4EC0
    ctx->pc = 0x138968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x13896c: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x13896cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x138970: 0x92540000  lbu         $s4, 0x0($s2)
    ctx->pc = 0x138970u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x138974: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x138974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x138978: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x138978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13897c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13897cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138980: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x138980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138984: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x138984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x138988: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x138988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13898c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x13898cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138990: 0x26150001  addiu       $s5, $s0, 0x1
    ctx->pc = 0x138990u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138994: 0x72a08628  paddub      $s0, $s5, $zero
    ctx->pc = 0x138994u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_138998:
    // 0x138998: 0x2a150004  slti        $s5, $s0, 0x4
    ctx->pc = 0x138998u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13899c: 0x16a0fff0  bnez        $s5, . + 4 + (-0x10 << 2)
    ctx->pc = 0x13899Cu;
    {
        const bool branch_taken_0x13899c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x13899c) {
            ctx->pc = 0x138960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138960;
        }
    }
    ctx->pc = 0x1389A4u;
    // 0x1389a4: 0x9265009a  lbu         $a1, 0x9A($s3)
    ctx->pc = 0x1389a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x1389a8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1389a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1389ac: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x1389acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
label_1389b0:
    // 0x1389b0: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x1389b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x1389b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1389b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1389b8: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x1389b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1389bc: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1389BCu;
    {
        const bool branch_taken_0x1389bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1389bc) {
            ctx->pc = 0x138A18u;
            goto label_138a18;
        }
    }
    ctx->pc = 0x1389C4u;
    // 0x1389c4: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x1389c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x1389c8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1389c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1389cc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1389ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1389d0: 0x24634ec8  addiu       $v1, $v1, 0x4EC8
    ctx->pc = 0x1389d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20168));
    // 0x1389d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1389d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1389d8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1389d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1389dc: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1389dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1389e0: 0x12a0c0  sll         $s4, $s2, 3
    ctx->pc = 0x1389e0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1389e4: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x1389e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1389e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1389e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1389ec: 0x8fb00098  lw          $s0, 0x98($sp)
    ctx->pc = 0x1389ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1389f0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1389f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1389f4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1389f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1389f8: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x1389f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1389fc: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1389fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x138a00: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x138a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x138a04: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x138a04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x138a08: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x138a08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138a0c: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x138a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x138a10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x138a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x138a14: 0xa263009c  sb          $v1, 0x9C($s3)
    ctx->pc = 0x138a14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 3));
label_138a18:
    // 0x138a18: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x138a18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138a1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x138a1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138a20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x138a20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138a24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x138a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138a28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x138a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x138a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x138a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138a34: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x138a34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x138a38: 0x3e00008  jr          $ra
    ctx->pc = 0x138A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138A40u;
}
