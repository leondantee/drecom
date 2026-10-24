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

// Function: entry_00340bfc
// Address: 0x340bfc - 0x340c08
void entry_00340bfc_0x340bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340bfc_0x340bfc");
#endif

    ctx->pc = 0x340bfcu;

    // 0x340bfc: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x340bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340c00: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x340C00u;
    {
        const bool branch_taken_0x340c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340c00) {
            ctx->pc = 0x340D00u;
            return;
        }
    }
    ctx->pc = 0x340C08u;
}
