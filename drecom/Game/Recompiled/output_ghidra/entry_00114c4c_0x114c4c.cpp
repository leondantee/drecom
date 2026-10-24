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

// Function: entry_00114c4c
// Address: 0x114c4c - 0x114c5c
void entry_00114c4c_0x114c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c4c_0x114c4c");
#endif

    ctx->pc = 0x114c4cu;

    // 0x114c4c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x114C4Cu;
    {
        const bool branch_taken_0x114c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x114C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C4Cu;
        // 0x114c50: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c4c) {
            ctx->pc = 0x114C84u;
            return;
        }
    }
    ctx->pc = 0x114C54u;
    // 0x114c54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x114C54u;
    {
        const bool branch_taken_0x114c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114c54) {
            ctx->pc = 0x114C98u;
            return;
        }
    }
    ctx->pc = 0x114C5Cu;
}
