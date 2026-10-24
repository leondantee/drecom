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

// Function: entry_0033aad0
// Address: 0x33aad0 - 0x33aadc
void entry_0033aad0_0x33aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033aad0_0x33aad0");
#endif

    ctx->pc = 0x33aad0u;

    // 0x33aad0: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x33aad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33aad4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33AAD4u;
    {
        const bool branch_taken_0x33aad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aad4) {
            ctx->pc = 0x33AB20u;
            return;
        }
    }
    ctx->pc = 0x33AADCu;
}
