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

// Function: entry_001b558c
// Address: 0x1b558c - 0x1b55d8
void entry_001b558c_0x1b558c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b558c_0x1b558c");
#endif

    ctx->pc = 0x1b558cu;

    // 0x1b558c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b558cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b5590: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5594: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1b5594u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b5598: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b559c: 0xa050156c  sb          $s0, 0x156C($v0)
    ctx->pc = 0x1b559cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 16));
    // 0x1b55a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b55a4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1b55a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b55a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b55ac: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1b55acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1b55b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B55B0u;
    {
        const bool branch_taken_0x1b55b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b55b0) {
            ctx->pc = 0x1B55D8u;
            return;
        }
    }
    ctx->pc = 0x1B55B8u;
    // 0x1b55b8: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1b55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1b55bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b55bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b55c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B55C0u;
    {
        const bool branch_taken_0x1b55c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b55c0) {
            ctx->pc = 0x1B55D8u;
            return;
        }
    }
    ctx->pc = 0x1B55C8u;
    // 0x1b55c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b55cc: 0xa040156d  sb          $zero, 0x156D($v0)
    ctx->pc = 0x1b55ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b55d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B55D0u;
    {
        const bool branch_taken_0x1b55d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b55d0) {
            ctx->pc = 0x1B55E4u;
            return;
        }
    }
    ctx->pc = 0x1B55D8u;
}
