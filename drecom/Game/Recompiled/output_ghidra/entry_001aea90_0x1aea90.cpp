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

// Function: entry_001aea90
// Address: 0x1aea90 - 0x1aeaa0
void entry_001aea90_0x1aea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aea90_0x1aea90");
#endif

    ctx->pc = 0x1aea90u;

    // 0x1aea90: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1aea90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1aea94: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1AEA94u;
    {
        const bool branch_taken_0x1aea94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aea94) {
            ctx->pc = 0x1AEA60u;
            return;
        }
    }
    ctx->pc = 0x1AEA9Cu;
    // 0x1aea9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1aea9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1aeaa0u;
}
