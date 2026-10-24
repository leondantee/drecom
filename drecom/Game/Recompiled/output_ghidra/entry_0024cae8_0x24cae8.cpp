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

// Function: entry_0024cae8
// Address: 0x24cae8 - 0x24cbbc
void entry_0024cae8_0x24cae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024cae8_0x24cae8");
#endif

    switch (ctx->pc) {
        case 0x24cb44u: goto label_24cb44;
        case 0x24cb50u: goto label_24cb50;
        default: break;
    }

    ctx->pc = 0x24cae8u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x24CBBCu;
}
