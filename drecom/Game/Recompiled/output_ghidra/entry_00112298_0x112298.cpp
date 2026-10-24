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

// Function: entry_00112298
// Address: 0x112298 - 0x1122a8
void entry_00112298_0x112298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112298_0x112298");
#endif

    ctx->pc = 0x112298u;

    // 0x112298: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x112298u;
    {
        const bool branch_taken_0x112298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x112298) {
            ctx->pc = 0x1122BCu;
            return;
        }
    }
    ctx->pc = 0x1122A0u;
    // 0x1122a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1122A0u;
    {
        const bool branch_taken_0x1122a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1122a0) {
            ctx->pc = 0x1122E4u;
            return;
        }
    }
    ctx->pc = 0x1122A8u;
}
