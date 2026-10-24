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

// Function: entry_0030ea1c
// Address: 0x30ea1c - 0x30eac4
void entry_0030ea1c_0x30ea1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030ea1c_0x30ea1c");
#endif

    switch (ctx->pc) {
        case 0x30eab0u: goto label_30eab0;
        case 0x30eac0u: goto label_30eac0;
        default: break;
    }

    ctx->pc = 0x30ea1cu;

    // 0x30ea1c: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ea20: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x30ea20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30ea24: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30ea24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30ea28: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30ea28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30ea2c: 0x286100e7  slti        $at, $v1, 0xE7
    ctx->pc = 0x30ea2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)231) ? 1 : 0);
    // 0x30ea30: 0x14200035  bnez        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x30EA30u;
    {
        const bool branch_taken_0x30ea30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ea30) {
            ctx->pc = 0x30EB08u;
            return;
        }
    }
    ctx->pc = 0x30EA38u;
    // 0x30ea38: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30ea3c: 0x246499d0  addiu       $a0, $v1, -0x6630
    ctx->pc = 0x30ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941136));
    // 0x30ea40: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x30ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x30ea44: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x30ea44u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3999D0u));
    // 0x30ea48: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x30ea48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x30ea4c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30ea50: 0x246399e0  addiu       $v1, $v1, -0x6620
    ctx->pc = 0x30ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941152));
    // 0x30ea54: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x30ea54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30ea58: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x30ea58u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x3999E0u));
    // 0x30ea5c: 0x7e070000  sq          $a3, 0x0($s0)
    ctx->pc = 0x30ea5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 7));
    // 0x30ea60: 0x8fa60298  lw          $a2, 0x298($sp)
    ctx->pc = 0x30ea60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ea64: 0x8cc51338  lw          $a1, 0x1338($a2)
    ctx->pc = 0x30ea64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4920)));
    // 0x30ea68: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x30ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x30ea6c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x30ea6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x30ea70: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30EA70u;
    {
        const bool branch_taken_0x30ea70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ea70) {
            ctx->pc = 0x30EAC4u;
            return;
        }
    }
    ctx->pc = 0x30EA78u;
    // 0x30ea78: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ea7c: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x30ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30ea80: 0x24830200  addiu       $v1, $a0, 0x200
    ctx->pc = 0x30ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x30ea84: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x30ea84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30ea88: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30ea88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30ea8c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x30ea8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30ea90: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30ea90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30ea94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30ea94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30ea98: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x30ea98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30ea9c: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30ea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30eaa0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30eaa0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30eaa4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x30eaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x30eaa8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30EAA8u;
    SET_GPR_U32(ctx, 31, 0x30EAB0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30EAA8u, 0x30EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAB0u;
label_30eab0:
    // 0x30eab0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30eab0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30eab4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x30eab4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x30eab8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30EAB8u;
    SET_GPR_U32(ctx, 31, 0x30EAC0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30EAB8u, 0x30EAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAC0u;
label_30eac0:
    // 0x30eac0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x30eac0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x30eac4u;
}
