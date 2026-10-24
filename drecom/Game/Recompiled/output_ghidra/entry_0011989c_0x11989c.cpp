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

// Function: entry_0011989c
// Address: 0x11989c - 0x1198bc
void entry_0011989c_0x11989c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011989c_0x11989c");
#endif

    ctx->pc = 0x11989cu;

    // 0x11989c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x11989cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1198a0: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x1198a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x1198a4: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x1198a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1198a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1198A8u;
    {
        const bool branch_taken_0x1198a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198A8u;
        // 0x1198ac: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198a8) {
            ctx->pc = 0x1198BCu;
            return;
        }
    }
    ctx->pc = 0x1198B0u;
    // 0x1198b0: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x1198b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1198b4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1198B4u;
    {
        const bool branch_taken_0x1198b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198B4u;
        // 0x1198b8: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198b4) {
            ctx->pc = 0x119904u;
            return;
        }
    }
    ctx->pc = 0x1198BCu;
}
