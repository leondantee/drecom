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

// Function: entry_0011275c
// Address: 0x11275c - 0x112778
void entry_0011275c_0x11275c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011275c_0x11275c");
#endif

    ctx->pc = 0x11275cu;

    // 0x11275c: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x11275Cu;
    {
        const bool branch_taken_0x11275c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x112760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11275Cu;
        // 0x112760: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11275c) {
            ctx->pc = 0x1127A8u;
            return;
        }
    }
    ctx->pc = 0x112764u;
    // 0x112764: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x112764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x112768: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x112768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11276c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11276Cu;
    {
        const bool branch_taken_0x11276c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11276Cu;
        // 0x112770: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11276c) {
            ctx->pc = 0x11279Cu;
            return;
        }
    }
    ctx->pc = 0x112774u;
    // 0x112774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x112778u;
}
