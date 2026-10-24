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

// Function: entry_0011d6c0
// Address: 0x11d6c0 - 0x11d6d8
void entry_0011d6c0_0x11d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d6c0_0x11d6c0");
#endif

    ctx->pc = 0x11d6c0u;

    // 0x11d6c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D6C0u;
    {
        const bool branch_taken_0x11d6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6C0u;
        // 0x11d6c4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6c0) {
            ctx->pc = 0x11D6D8u;
            return;
        }
    }
    ctx->pc = 0x11D6C8u;
    // 0x11d6c8: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x11d6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11d6cc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11d6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11d6d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11D6D0u;
    {
        const bool branch_taken_0x11d6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6D0u;
        // 0x11d6d4: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6d0) {
            ctx->pc = 0x11D6F0u;
            return;
        }
    }
    ctx->pc = 0x11D6D8u;
}
