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

// Function: entry_002ed58c
// Address: 0x2ed58c - 0x2ed59c
void entry_002ed58c_0x2ed58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed58c_0x2ed58c");
#endif

    ctx->pc = 0x2ed58cu;

    // 0x2ed58c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ed58cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed590: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ed590u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed594: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2ED594u;
    {
        const bool branch_taken_0x2ed594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed594) {
            ctx->pc = 0x2ED5C0u;
            return;
        }
    }
    ctx->pc = 0x2ED59Cu;
}
