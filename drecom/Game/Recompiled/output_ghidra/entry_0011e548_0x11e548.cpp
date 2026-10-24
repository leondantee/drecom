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

// Function: entry_0011e548
// Address: 0x11e548 - 0x11e560
void entry_0011e548_0x11e548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e548_0x11e548");
#endif

    ctx->pc = 0x11e548u;

    // 0x11e548: 0x13000066  beqz        $t8, . + 4 + (0x66 << 2)
    ctx->pc = 0x11E548u;
    {
        const bool branch_taken_0x11e548 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E548u;
        // 0x11e54c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e548) {
            ctx->pc = 0x11E6E4u;
            return;
        }
    }
    ctx->pc = 0x11E550u;
    // 0x11e550: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x11e550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11e554: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x11e554u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11e558: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x11E558u;
    {
        const bool branch_taken_0x11e558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E558u;
        // 0x11e55c: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e558) {
            ctx->pc = 0x11E6E0u;
            return;
        }
    }
    ctx->pc = 0x11E560u;
}
