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

// Function: entry_0011d978
// Address: 0x11d978 - 0x11d990
void entry_0011d978_0x11d978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d978_0x11d978");
#endif

    ctx->pc = 0x11d978u;

    // 0x11d978: 0x13200066  beqz        $t9, . + 4 + (0x66 << 2)
    ctx->pc = 0x11D978u;
    {
        const bool branch_taken_0x11d978 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D978u;
        // 0x11d97c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d978) {
            ctx->pc = 0x11DB14u;
            return;
        }
    }
    ctx->pc = 0x11D980u;
    // 0x11d980: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x11d980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11d984: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x11d984u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11d988: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x11D988u;
    {
        const bool branch_taken_0x11d988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D988u;
        // 0x11d98c: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d988) {
            ctx->pc = 0x11DB10u;
            return;
        }
    }
    ctx->pc = 0x11D990u;
}
