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

// Function: entry_00306510
// Address: 0x306510 - 0x306520
void entry_00306510_0x306510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306510_0x306510");
#endif

    ctx->pc = 0x306510u;

    // 0x306510: 0x2e240004  sltiu       $a0, $s1, 0x4
    ctx->pc = 0x306510u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x306514: 0x1480ffdd  bnez        $a0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x306514u;
    {
        const bool branch_taken_0x306514 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x306514) {
            ctx->pc = 0x30648Cu;
            return;
        }
    }
    ctx->pc = 0x30651Cu;
    // 0x30651c: 0x0  nop
    ctx->pc = 0x30651cu;
    // NOP
    ctx->pc = 0x306520u;
}
