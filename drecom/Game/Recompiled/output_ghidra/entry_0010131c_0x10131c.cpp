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

// Function: entry_0010131c
// Address: 0x10131c - 0x101328
void entry_0010131c_0x10131c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010131c_0x10131c");
#endif

    ctx->pc = 0x10131cu;

    // 0x10131c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x10131cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101320: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x101320u;
    {
        const bool branch_taken_0x101320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101320u;
        // 0x101324: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101320) {
            ctx->pc = 0x101344u;
            return;
        }
    }
    ctx->pc = 0x101328u;
}
