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

// Function: entry_00360de0
// Address: 0x360de0 - 0x360df0
void entry_00360de0_0x360de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360de0_0x360de0");
#endif

    ctx->pc = 0x360de0u;

    // 0x360de0: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x360de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x360de4: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x360DE4u;
    {
        const bool branch_taken_0x360de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360de4) {
            ctx->pc = 0x360D4Cu;
            return;
        }
    }
    ctx->pc = 0x360DECu;
    // 0x360dec: 0x0  nop
    ctx->pc = 0x360decu;
    // NOP
    ctx->pc = 0x360df0u;
}
