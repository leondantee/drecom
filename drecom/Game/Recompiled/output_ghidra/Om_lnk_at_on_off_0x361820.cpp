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

// Function: Om_lnk_at_on_off
// Address: 0x361820 - 0x361a28
void Om_lnk_at_on_off_0x361820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_lnk_at_on_off_0x361820");
#endif

    switch (ctx->pc) {
        case 0x36189cu: goto label_36189c;
        case 0x361930u: goto label_361930;
        case 0x361984u: goto label_361984;
        case 0x361a0cu: goto label_361a0c;
        default: break;
    }

    ctx->pc = 0x361820u;

    // 0x361820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x361820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x361824: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x361824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x361828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x361828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36182c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x361830: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x361830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x361834: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x361834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x361838: 0xa7a50050  sh          $a1, 0x50($sp)
    ctx->pc = 0x361838u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 5));
    // 0x36183c: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x36183cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x361840: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x361840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x361844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x361844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361848: 0x1483003b  bne         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x361848u;
    {
        const bool branch_taken_0x361848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x361848) {
            ctx->pc = 0x361938u;
            goto label_361938;
        }
    }
    ctx->pc = 0x361850u;
    // 0x361850: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x361850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361854: 0x8c641240  lw          $a0, 0x1240($v1)
    ctx->pc = 0x361854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x361858: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x361858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36185c: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x36185Cu;
    {
        const bool branch_taken_0x36185c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36185c) {
            ctx->pc = 0x3618F8u;
            goto label_3618f8;
        }
    }
    ctx->pc = 0x361864u;
    // 0x361864: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x361864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361868: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x361868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x36186c: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x36186cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361870: 0x97a30050  lhu         $v1, 0x50($sp)
    ctx->pc = 0x361870u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x361874: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x361874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x361878: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x361878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36187c: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36187Cu;
    {
        const bool branch_taken_0x36187c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x36187c) {
            ctx->pc = 0x3618C4u;
            goto label_3618c4;
        }
    }
    ctx->pc = 0x361884u;
    // 0x361884: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x361884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361888: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x361888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x36188c: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x36188cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x361890: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x361890u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361894: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x361894u;
    {
        const bool branch_taken_0x361894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361894) {
            ctx->pc = 0x3618B0u;
            goto label_3618b0;
        }
    }
    ctx->pc = 0x36189Cu;
label_36189c:
    // 0x36189c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36189cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3618a0: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x3618a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x3618a4: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x3618a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3618a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3618a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3618ac: 0x0  nop
    ctx->pc = 0x3618acu;
    // NOP
label_3618b0:
    // 0x3618b0: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x3618b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3618b4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3618B4u;
    {
        const bool branch_taken_0x3618b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3618b4) {
            ctx->pc = 0x36189Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36189c;
        }
    }
    ctx->pc = 0x3618BCu;
    // 0x3618bc: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3618BCu;
    {
        const bool branch_taken_0x3618bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3618bc) {
            ctx->pc = 0x361A0Cu;
            goto label_361a0c;
        }
    }
    ctx->pc = 0x3618C4u;
label_3618c4:
    // 0x3618c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3618c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3618c8: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x3618c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x3618cc: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x3618ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3618d0: 0x97a30050  lhu         $v1, 0x50($sp)
    ctx->pc = 0x3618d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3618d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3618d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3618d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3618d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3618dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3618dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3618e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3618e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3618e4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3618e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3618e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3618e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3618ec: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x3618ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x3618f0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3618F0u;
    {
        const bool branch_taken_0x3618f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3618f0) {
            ctx->pc = 0x361A0Cu;
            goto label_361a0c;
        }
    }
    ctx->pc = 0x3618F8u;
label_3618f8:
    // 0x3618f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3618f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3618fc: 0x8c641244  lw          $a0, 0x1244($v1)
    ctx->pc = 0x3618fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4676)));
    // 0x361900: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x361900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x361904: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x361904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x361908: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x361908u;
    {
        const bool branch_taken_0x361908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x361908) {
            ctx->pc = 0x361A0Cu;
            goto label_361a0c;
        }
    }
    ctx->pc = 0x361910u;
    // 0x361910: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x361910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361914: 0x8c421244  lw          $v0, 0x1244($v0)
    ctx->pc = 0x361914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4676)));
    // 0x361918: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x361918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
    // 0x36191c: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x36191cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x361920: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x361920u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361924: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x361924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361928: 0xc05b9ec  jal         func_16E7B0
    ctx->pc = 0x361928u;
    SET_GPR_U32(ctx, 31, 0x361930u);
    ctx->pc = 0x16E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E7B0u, 0x361928u, 0x361930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361930u;
label_361930:
    // 0x361930: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x361930u;
    {
        const bool branch_taken_0x361930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361930) {
            ctx->pc = 0x361A0Cu;
            goto label_361a0c;
        }
    }
    ctx->pc = 0x361938u;
label_361938:
    // 0x361938: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x361938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36193c: 0x8c641240  lw          $a0, 0x1240($v1)
    ctx->pc = 0x36193cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x361940: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x361940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x361944: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x361944u;
    {
        const bool branch_taken_0x361944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x361944) {
            ctx->pc = 0x3619D4u;
            goto label_3619d4;
        }
    }
    ctx->pc = 0x36194Cu;
    // 0x36194c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36194cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361950: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x361950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x361954: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x361954u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361958: 0x97a30050  lhu         $v1, 0x50($sp)
    ctx->pc = 0x361958u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36195c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x36195cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x361960: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x361960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x361964: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x361964u;
    {
        const bool branch_taken_0x361964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x361964) {
            ctx->pc = 0x3619A4u;
            goto label_3619a4;
        }
    }
    ctx->pc = 0x36196Cu;
    // 0x36196c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36196cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361970: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x361970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x361974: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x361974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x361978: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x361978u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36197c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36197Cu;
    {
        const bool branch_taken_0x36197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36197c) {
            ctx->pc = 0x361990u;
            goto label_361990;
        }
    }
    ctx->pc = 0x361984u;
label_361984:
    // 0x361984: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x361984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x361988: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x361988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36198c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36198cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_361990:
    // 0x361990: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x361990u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x361994: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x361994u;
    {
        const bool branch_taken_0x361994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x361994) {
            ctx->pc = 0x361984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361984;
        }
    }
    ctx->pc = 0x36199Cu;
    // 0x36199c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x36199Cu;
    {
        const bool branch_taken_0x36199c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36199c) {
            ctx->pc = 0x361A0Cu;
            goto label_361a0c;
        }
    }
    ctx->pc = 0x3619A4u;
label_3619a4:
    // 0x3619a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3619a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3619a8: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x3619a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x3619ac: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x3619acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3619b0: 0x97a30050  lhu         $v1, 0x50($sp)
    ctx->pc = 0x3619b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3619b4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3619b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3619b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3619b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3619bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3619bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3619c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3619c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3619c4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3619c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3619c8: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x3619c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x3619cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3619CCu;
    {
        const bool branch_taken_0x3619cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3619cc) {
            ctx->pc = 0x361A0Cu;
            goto label_361a0c;
        }
    }
    ctx->pc = 0x3619D4u;
label_3619d4:
    // 0x3619d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3619d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3619d8: 0x8c641244  lw          $a0, 0x1244($v1)
    ctx->pc = 0x3619d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4676)));
    // 0x3619dc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3619dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3619e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3619e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3619e4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3619E4u;
    {
        const bool branch_taken_0x3619e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3619e4) {
            ctx->pc = 0x361A0Cu;
            goto label_361a0c;
        }
    }
    ctx->pc = 0x3619ECu;
    // 0x3619ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3619ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3619f0: 0x8c421244  lw          $v0, 0x1244($v0)
    ctx->pc = 0x3619f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4676)));
    // 0x3619f4: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x3619f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
    // 0x3619f8: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x3619f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x3619fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3619fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361a00: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x361a00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361a04: 0xc05b9ec  jal         func_16E7B0
    ctx->pc = 0x361A04u;
    SET_GPR_U32(ctx, 31, 0x361A0Cu);
    ctx->pc = 0x16E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E7B0u, 0x361A04u, 0x361A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A0Cu;
label_361a0c:
    // 0x361a0c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x361a0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x361a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x361a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x361a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361a1c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x361a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x361a20: 0x3e00008  jr          $ra
    ctx->pc = 0x361A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361A28u;
}
