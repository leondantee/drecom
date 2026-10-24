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

// Function: ectrl0c_init00_t01
// Address: 0x250cd0 - 0x250e70
void ectrl0c_init00_t01_0x250cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl0c_init00_t01_0x250cd0");
#endif

    switch (ctx->pc) {
        case 0x250dc8u: goto label_250dc8;
        case 0x250dd4u: goto label_250dd4;
        case 0x250e0cu: goto label_250e0c;
        case 0x250e18u: goto label_250e18;
        case 0x250e50u: goto label_250e50;
        case 0x250e5cu: goto label_250e5c;
        default: break;
    }

    ctx->pc = 0x250cd0u;

    // 0x250cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250cd4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x250cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x250cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x250cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x250cdc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x250cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x250ce0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x250ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250ce4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250ce8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x250ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x250cec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250cf0: 0x8c5000c4  lw          $s0, 0xC4($v0)
    ctx->pc = 0x250cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x250cf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250cf8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x250cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x250cfc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250d00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250d04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250d08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250d0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250d10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250d14: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x250d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250d18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250d1c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x250d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x250d20: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250d24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250d28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250d2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250d30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250d34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250d38: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x250d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x250d3c: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x250d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x250d40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250d44: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250d48: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250d4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250d50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250d54: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x250d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250d58: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x250d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x250d5c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250d60: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250d64: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250d68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250d6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250d70: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x250d70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x250d74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250d78: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250d7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250d80: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250d84: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250d88: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250d8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250d90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250d94: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x250d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250d98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250d9c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250da0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250da4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250da8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250dac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250db0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250db4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250db8: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x250db8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x250dbc: 0x24041500  addiu       $a0, $zero, 0x1500
    ctx->pc = 0x250dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5376));
    // 0x250dc0: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x250DC0u;
    SET_GPR_U32(ctx, 31, 0x250DC8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x250DC0u, 0x250DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250DC8u;
label_250dc8:
    // 0x250dc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x250dc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x250dcc: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x250DCCu;
    SET_GPR_U32(ctx, 31, 0x250DD4u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x250DCCu, 0x250DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250DD4u;
label_250dd4:
    // 0x250dd4: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x250dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250dd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250ddc: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250de0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250de4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250de8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250dec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250df0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250df4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x250df4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250df8: 0x24041602  addiu       $a0, $zero, 0x1602
    ctx->pc = 0x250df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5634));
    // 0x250dfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x250dfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x250e00: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x250e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x250e04: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x250E04u;
    SET_GPR_U32(ctx, 31, 0x250E0Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x250E04u, 0x250E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E0Cu;
label_250e0c:
    // 0x250e0c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x250e0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x250e10: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x250E10u;
    SET_GPR_U32(ctx, 31, 0x250E18u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x250E10u, 0x250E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E18u;
label_250e18:
    // 0x250e18: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x250e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250e1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250e20: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250e24: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250e28: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250e2c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250e30: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250e34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250e38: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x250e38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250e3c: 0x24041602  addiu       $a0, $zero, 0x1602
    ctx->pc = 0x250e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5634));
    // 0x250e40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x250e40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x250e44: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x250e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x250e48: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x250E48u;
    SET_GPR_U32(ctx, 31, 0x250E50u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x250E48u, 0x250E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E50u;
label_250e50:
    // 0x250e50: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x250e50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x250e54: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x250E54u;
    SET_GPR_U32(ctx, 31, 0x250E5Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x250E54u, 0x250E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E5Cu;
label_250e5c:
    // 0x250e5c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x250e5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x250e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250e64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x250e64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250e68: 0x3e00008  jr          $ra
    ctx->pc = 0x250E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250E70u;
}
