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

// Function: entry_0033d0c0
// Address: 0x33d0c0 - 0x33d130
void entry_0033d0c0_0x33d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d0c0_0x33d0c0");
#endif

    ctx->pc = 0x33d0c0u;

    // 0x33d0c0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x33d0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33d0c4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x33d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33d0c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33d0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33d0cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x33D0CCu;
    {
        const bool branch_taken_0x33d0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d0cc) {
            ctx->pc = 0x33D130u;
            return;
        }
    }
    ctx->pc = 0x33D0D4u;
    // 0x33d0d4: 0x12150016  beq         $s0, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x33D0D4u;
    {
        const bool branch_taken_0x33d0d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x33d0d4) {
            ctx->pc = 0x33D130u;
            return;
        }
    }
    ctx->pc = 0x33D0DCu;
    // 0x33d0dc: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x33d0dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x33d0e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33d0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d0e4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x33d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33d0e8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33D0E8u;
    {
        const bool branch_taken_0x33d0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d0e8) {
            ctx->pc = 0x33D130u;
            return;
        }
    }
    ctx->pc = 0x33D0F0u;
    // 0x33d0f0: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x33d0f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x33d0f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33d0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d0f8: 0x97a20068  lhu         $v0, 0x68($sp)
    ctx->pc = 0x33d0f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33d0fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33d0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d100: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33D100u;
    {
        const bool branch_taken_0x33d100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d100) {
            ctx->pc = 0x33D130u;
            return;
        }
    }
    ctx->pc = 0x33D108u;
    // 0x33d108: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x33d108u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x33d10c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x33d10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33d110: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33d110u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33d114: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x33d114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x33d118: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33d118u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33d11c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33d11cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33d120: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33D120u;
    {
        const bool branch_taken_0x33d120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d120) {
            ctx->pc = 0x33D130u;
            return;
        }
    }
    ctx->pc = 0x33D128u;
    // 0x33d128: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x33d128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33d12c: 0x0  nop
    ctx->pc = 0x33d12cu;
    // NOP
    ctx->pc = 0x33d130u;
}
