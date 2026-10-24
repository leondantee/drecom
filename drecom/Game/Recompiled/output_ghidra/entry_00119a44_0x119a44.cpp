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

// Function: entry_00119a44
// Address: 0x119a44 - 0x119a50
void entry_00119a44_0x119a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119a44_0x119a44");
#endif

    ctx->pc = 0x119a44u;

    // 0x119a44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x119a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x119a48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x119A48u;
    {
        const bool branch_taken_0x119a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A48u;
        // 0x119a4c: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a48) {
            ctx->pc = 0x119A68u;
            return;
        }
    }
    ctx->pc = 0x119A50u;
}
