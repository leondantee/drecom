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

// Function: entry_0018bb50
// Address: 0x18bb50 - 0x18bb64
void entry_0018bb50_0x18bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bb50_0x18bb50");
#endif

    ctx->pc = 0x18bb50u;

    // 0x18bb50: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x18BB50u;
    {
        const bool branch_taken_0x18bb50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bb50) {
            ctx->pc = 0x18BB28u;
            return;
        }
    }
    ctx->pc = 0x18BB58u;
    // 0x18bb58: 0x8e700038  lw          $s0, 0x38($s3)
    ctx->pc = 0x18bb58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x18bb5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18BB5Cu;
    {
        const bool branch_taken_0x18bb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb5c) {
            ctx->pc = 0x18BB98u;
            return;
        }
    }
    ctx->pc = 0x18BB64u;
}
