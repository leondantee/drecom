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

// Function: entry_0018e898
// Address: 0x18e898 - 0x18e8ac
void entry_0018e898_0x18e898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e898_0x18e898");
#endif

    ctx->pc = 0x18e898u;

    // 0x18e898: 0x1600ffdd  bnez        $s0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x18E898u;
    {
        const bool branch_taken_0x18e898 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e898) {
            ctx->pc = 0x18E810u;
            return;
        }
    }
    ctx->pc = 0x18E8A0u;
    // 0x18e8a0: 0x8e720048  lw          $s2, 0x48($s3)
    ctx->pc = 0x18e8a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x18e8a4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18E8A4u;
    {
        const bool branch_taken_0x18e8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8a4) {
            ctx->pc = 0x18E900u;
            return;
        }
    }
    ctx->pc = 0x18E8ACu;
}
