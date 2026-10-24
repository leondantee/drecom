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

// Function: entry_0036cbe0
// Address: 0x36cbe0 - 0x36cbf4
void entry_0036cbe0_0x36cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036cbe0_0x36cbe0");
#endif

    ctx->pc = 0x36cbe0u;

    // 0x36cbe0: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x36cbe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x36cbe4: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x36CBE4u;
    {
        const bool branch_taken_0x36cbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36cbe4) {
            ctx->pc = 0x36CAB8u;
            return;
        }
    }
    ctx->pc = 0x36CBECu;
    // 0x36cbec: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x36CBECu;
    {
        const bool branch_taken_0x36cbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cbec) {
            ctx->pc = 0x36CD48u;
            return;
        }
    }
    ctx->pc = 0x36CBF4u;
}
