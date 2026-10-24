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

// Function: entry_0010fed8
// Address: 0x10fed8 - 0x10fef4
void entry_0010fed8_0x10fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fed8_0x10fed8");
#endif

    ctx->pc = 0x10fed8u;

label_10fed8:
    // 0x10fed8: 0x0  nop
    ctx->pc = 0x10fed8u;
    // NOP
    // 0x10fedc: 0x0  nop
    ctx->pc = 0x10fedcu;
    // NOP
    // 0x10fee0: 0x0  nop
    ctx->pc = 0x10fee0u;
    // NOP
    // 0x10fee4: 0x0  nop
    ctx->pc = 0x10fee4u;
    // NOP
    // 0x10fee8: 0x0  nop
    ctx->pc = 0x10fee8u;
    // NOP
    // 0x10feec: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x10FEECu;
    {
        const bool branch_taken_0x10feec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10feec) {
            ctx->pc = 0x10FED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fed8;
        }
    }
    ctx->pc = 0x10FEF4u;
}
