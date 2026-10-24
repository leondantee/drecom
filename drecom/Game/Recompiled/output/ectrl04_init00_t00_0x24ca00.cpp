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

// Function: ectrl04_init00_t00
// Address: 0x24ca00 - 0x24ce04
void ectrl04_init00_t00_0x24ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl04_init00_t00_0x24ca00");
#endif

    switch (ctx->pc) {
        case 0x24ca7cu: goto label_24ca7c;
        case 0x24ca88u: goto label_24ca88;
        case 0x24cb44u: goto label_24cb44;
        case 0x24cb50u: goto label_24cb50;
        case 0x24cc18u: goto label_24cc18;
        case 0x24cc24u: goto label_24cc24;
        case 0x24ccb8u: goto label_24ccb8;
        case 0x24ccd0u: goto label_24ccd0;
        case 0x24ccecu: goto label_24ccec;
        case 0x24cd48u: goto label_24cd48;
        case 0x24cd54u: goto label_24cd54;
        default: break;
    }

    ctx->pc = 0x24ca00u;

    // 0x24ca00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24ca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24ca04: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x24ca04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x24ca08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24ca08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24ca0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24ca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24ca10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24ca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24ca14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24ca14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24ca18: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x24ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x24ca1c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x24ca1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ca20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ca24: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24ca28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ca28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ca2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ca2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ca30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ca30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ca34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ca34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ca38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ca38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ca3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24ca3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ca40: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24ca40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ca44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ca48: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ca4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ca4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ca50: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ca50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ca54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ca54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ca58: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ca58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ca5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ca5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ca60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24ca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ca64: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24ca64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24ca68: 0x24047600  addiu       $a0, $zero, 0x7600
    ctx->pc = 0x24ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30208));
    // 0x24ca6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24ca6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24ca70: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24ca70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24ca74: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24CA74u;
    SET_GPR_U32(ctx, 31, 0x24CA7Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24CA74u, 0x24CA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA7Cu;
label_24ca7c:
    // 0x24ca7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24ca7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ca80: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24CA80u;
    SET_GPR_U32(ctx, 31, 0x24CA88u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24CA80u, 0x24CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA88u;
label_24ca88:
    // 0x24ca88: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24ca88u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ca8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ca90: 0xac700100  sw          $s0, 0x100($v1)
    ctx->pc = 0x24ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 16));
    // 0x24ca94: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24ca98: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24ca98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24ca9c: 0x16030012  bne         $s0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x24CA9Cu;
    {
        const bool branch_taken_0x24ca9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x24ca9c) {
            ctx->pc = 0x24CAE8u;
            goto label_24cae8;
        }
    }
    ctx->pc = 0x24CAA4u;
    // 0x24caa4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24caa8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24caac: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24caacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24cab0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cab4: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cab8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cabc: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x24cabcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x24cac0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cac4: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cac8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cacc: 0xac640108  sw          $a0, 0x108($v1)
    ctx->pc = 0x24caccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 4));
    // 0x24cad0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cad4: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cad8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cadc: 0xac64010c  sw          $a0, 0x10C($v1)
    ctx->pc = 0x24cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 4));
    // 0x24cae0: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x24CAE0u;
    {
        const bool branch_taken_0x24cae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cae0) {
            ctx->pc = 0x24CDE4u;
            goto label_24cde4;
        }
    }
    ctx->pc = 0x24CAE8u;
label_24cae8:
    // 0x24cae8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24caec: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24caecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24caf0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24caf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24caf4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24caf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24caf8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24caf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24cafc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24cafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24cb00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24cb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cb04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24cb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24cb08: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24cb08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24cb0c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cb10: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24cb14: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24cb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24cb18: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24cb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24cb1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24cb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24cb20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24cb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24cb24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24cb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cb28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24cb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24cb2c: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24cb2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24cb30: 0x24042100  addiu       $a0, $zero, 0x2100
    ctx->pc = 0x24cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8448));
    // 0x24cb34: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24cb34u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24cb38: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24cb38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24cb3c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24CB3Cu;
    SET_GPR_U32(ctx, 31, 0x24CB44u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24CB3Cu, 0x24CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB44u;
label_24cb44:
    // 0x24cb44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24cb44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24cb48: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24CB48u;
    SET_GPR_U32(ctx, 31, 0x24CB50u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24CB48u, 0x24CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB50u;
label_24cb50:
    // 0x24cb50: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x24cb50u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24cb54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cb58: 0xac710104  sw          $s1, 0x104($v1)
    ctx->pc = 0x24cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 17));
    // 0x24cb5c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cb60: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24cb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cb64: 0x16230015  bne         $s1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x24CB64u;
    {
        const bool branch_taken_0x24cb64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x24cb64) {
            ctx->pc = 0x24CBBCu;
            goto label_24cbbc;
        }
    }
    ctx->pc = 0x24CB6Cu;
    // 0x24cb6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24cb70: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cb74: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24cb78: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x24cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x24cb7c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24cb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24cb80: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x24cb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x24cb84: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cb88: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cb88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cb8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cb90: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x24cb90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x24cb94: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cb98: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cb98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cb9c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cba0: 0xac640108  sw          $a0, 0x108($v1)
    ctx->pc = 0x24cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 4));
    // 0x24cba4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cba8: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cbac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cbb0: 0xac64010c  sw          $a0, 0x10C($v1)
    ctx->pc = 0x24cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 4));
    // 0x24cbb4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x24CBB4u;
    {
        const bool branch_taken_0x24cbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cbb4) {
            ctx->pc = 0x24CDE4u;
            goto label_24cde4;
        }
    }
    ctx->pc = 0x24CBBCu;
label_24cbbc:
    // 0x24cbbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cbc0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24cbc4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24cbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24cbc8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24cbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24cbcc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24cbd0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24cbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24cbd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24cbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cbd8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24cbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24cbdc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24cbdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24cbe0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cbe4: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24cbe8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24cbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24cbec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24cbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24cbf0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24cbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24cbf4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24cbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24cbf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24cbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cbfc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24cbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24cc00: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24cc00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24cc04: 0x24042200  addiu       $a0, $zero, 0x2200
    ctx->pc = 0x24cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8704));
    // 0x24cc08: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24cc08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24cc0c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24cc0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24cc10: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24CC10u;
    SET_GPR_U32(ctx, 31, 0x24CC18u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24CC10u, 0x24CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC18u;
label_24cc18:
    // 0x24cc18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24cc18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24cc1c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24CC1Cu;
    SET_GPR_U32(ctx, 31, 0x24CC24u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24CC1Cu, 0x24CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC24u;
label_24cc24:
    // 0x24cc24: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x24cc24u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24cc28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cc2c: 0xac72010c  sw          $s2, 0x10C($v1)
    ctx->pc = 0x24cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 18));
    // 0x24cc30: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cc34: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24cc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cc38: 0x16430018  bne         $s2, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x24CC38u;
    {
        const bool branch_taken_0x24cc38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x24cc38) {
            ctx->pc = 0x24CC9Cu;
            goto label_24cc9c;
        }
    }
    ctx->pc = 0x24CC40u;
    // 0x24cc40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24cc44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cc48: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24cc4c: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x24cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x24cc50: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24cc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24cc54: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x24cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x24cc58: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x24cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x24cc5c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24cc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24cc60: 0xae230b18  sw          $v1, 0xB18($s1)
    ctx->pc = 0x24cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 3));
    // 0x24cc64: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cc68: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cc68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cc6c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cc70: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x24cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x24cc74: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cc78: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cc78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cc7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cc80: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x24cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x24cc84: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cc88: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cc88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cc8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cc90: 0xac640108  sw          $a0, 0x108($v1)
    ctx->pc = 0x24cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 4));
    // 0x24cc94: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x24CC94u;
    {
        const bool branch_taken_0x24cc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cc94) {
            ctx->pc = 0x24CDE4u;
            goto label_24cde4;
        }
    }
    ctx->pc = 0x24CC9Cu;
label_24cc9c:
    // 0x24cc9c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cca0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cca4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x24cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24cca8: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x24cca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x24ccac: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x24ccacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24ccb0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x24CCB0u;
    SET_GPR_U32(ctx, 31, 0x24CCB8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x24CCB0u, 0x24CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CCB8u;
label_24ccb8:
    // 0x24ccb8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x24ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x24ccbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24ccbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24ccc0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x24ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24ccc4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x24ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24ccc8: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x24CCC8u;
    SET_GPR_U32(ctx, 31, 0x24CCD0u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x24CCD0u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24CCD0u) { return; }
    ctx->pc = 0x24CCD0u;
label_24ccd0:
    // 0x24ccd0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ccd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ccd8: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x24ccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x24ccdc: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x24ccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24cce0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x24cce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24cce4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x24CCE4u;
    SET_GPR_U32(ctx, 31, 0x24CCECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x24CCE4u, 0x24CCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CCECu;
label_24ccec:
    // 0x24ccec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ccf0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24ccf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ccf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ccf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ccf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ccfc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24cd00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24cd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24cd04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24cd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cd08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24cd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24cd0c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24cd0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24cd10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cd14: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24cd18: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24cd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24cd1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24cd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24cd20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24cd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24cd24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24cd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24cd28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24cd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cd2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24cd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24cd30: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24cd30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24cd34: 0x24042101  addiu       $a0, $zero, 0x2101
    ctx->pc = 0x24cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8449));
    // 0x24cd38: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24cd38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24cd3c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24cd3cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24cd40: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24CD40u;
    SET_GPR_U32(ctx, 31, 0x24CD48u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24CD40u, 0x24CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD48u;
label_24cd48:
    // 0x24cd48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24cd48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24cd4c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24CD4Cu;
    SET_GPR_U32(ctx, 31, 0x24CD54u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24CD4Cu, 0x24CD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD54u;
label_24cd54:
    // 0x24cd54: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x24cd54u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24cd58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cd5c: 0xac730108  sw          $s3, 0x108($v1)
    ctx->pc = 0x24cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 19));
    // 0x24cd60: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cd64: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24cd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cd68: 0x1663001b  bne         $s3, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x24CD68u;
    {
        const bool branch_taken_0x24cd68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x24cd68) {
            ctx->pc = 0x24CDD8u;
            goto label_24cdd8;
        }
    }
    ctx->pc = 0x24CD70u;
    // 0x24cd70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24cd74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cd78: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24cd7c: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x24cd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x24cd80: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24cd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24cd84: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x24cd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x24cd88: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x24cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x24cd8c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24cd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24cd90: 0xae230b18  sw          $v1, 0xB18($s1)
    ctx->pc = 0x24cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 3));
    // 0x24cd94: 0x8e430b18  lw          $v1, 0xB18($s2)
    ctx->pc = 0x24cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2840)));
    // 0x24cd98: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24cd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24cd9c: 0xae430b18  sw          $v1, 0xB18($s2)
    ctx->pc = 0x24cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2840), GPR_U32(ctx, 3));
    // 0x24cda0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cda4: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cda4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cda8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cdac: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x24cdacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x24cdb0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cdb4: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cdb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cdb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cdbc: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x24cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x24cdc0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cdc4: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cdc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cdc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cdcc: 0xac64010c  sw          $a0, 0x10C($v1)
    ctx->pc = 0x24cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 4));
    // 0x24cdd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24CDD0u;
    {
        const bool branch_taken_0x24cdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cdd0) {
            ctx->pc = 0x24CDE4u;
            goto label_24cde4;
        }
    }
    ctx->pc = 0x24CDD8u;
label_24cdd8:
    // 0x24cdd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24cdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cddc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cde0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_24cde4:
    // 0x24cde4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x24cde4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24cde8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24cde8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24cdec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24cdecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cdf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24cdf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24cdf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24cdf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cdf8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x24cdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24cdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x24CDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CE04u;
}
