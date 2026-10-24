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

// Function: entry_0033d160
// Address: 0x33d160 - 0x33d1b8
void entry_0033d160_0x33d160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d160_0x33d160");
#endif

    ctx->pc = 0x33d160u;

    // 0x33d160: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x33d160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33d164: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x33d164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33d168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33d168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33d16c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x33D16Cu;
    {
        const bool branch_taken_0x33d16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d16c) {
            ctx->pc = 0x33D1B8u;
            return;
        }
    }
    ctx->pc = 0x33D174u;
    // 0x33d174: 0x12150010  beq         $s0, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x33D174u;
    {
        const bool branch_taken_0x33d174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x33d174) {
            ctx->pc = 0x33D1B8u;
            return;
        }
    }
    ctx->pc = 0x33D17Cu;
    // 0x33d17c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x33d17cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x33d180: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33d180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d184: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x33d184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33d188: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33D188u;
    {
        const bool branch_taken_0x33d188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d188) {
            ctx->pc = 0x33D1B8u;
            return;
        }
    }
    ctx->pc = 0x33D190u;
    // 0x33d190: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x33d190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x33d194: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x33d194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33d198: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33d198u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33d19c: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x33d19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x33d1a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33d1a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33d1a4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33d1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33d1a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33D1A8u;
    {
        const bool branch_taken_0x33d1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d1a8) {
            ctx->pc = 0x33D1B8u;
            return;
        }
    }
    ctx->pc = 0x33D1B0u;
    // 0x33d1b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x33d1b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33d1b4: 0x0  nop
    ctx->pc = 0x33d1b4u;
    // NOP
    ctx->pc = 0x33d1b8u;
}
