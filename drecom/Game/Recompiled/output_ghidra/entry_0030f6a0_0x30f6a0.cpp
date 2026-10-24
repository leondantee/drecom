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

// Function: entry_0030f6a0
// Address: 0x30f6a0 - 0x30f6b0
void entry_0030f6a0_0x30f6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f6a0_0x30f6a0");
#endif

    ctx->pc = 0x30f6a0u;

    // 0x30f6a0: 0x2e240008  sltiu       $a0, $s1, 0x8
    ctx->pc = 0x30f6a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x30f6a4: 0x1480ffcf  bnez        $a0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x30F6A4u;
    {
        const bool branch_taken_0x30f6a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f6a4) {
            ctx->pc = 0x30F5E4u;
            return;
        }
    }
    ctx->pc = 0x30F6ACu;
    // 0x30f6ac: 0x0  nop
    ctx->pc = 0x30f6acu;
    // NOP
    ctx->pc = 0x30f6b0u;
}
