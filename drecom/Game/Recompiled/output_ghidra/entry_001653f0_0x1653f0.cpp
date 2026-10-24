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

// Function: entry_001653f0
// Address: 0x1653f0 - 0x165400
void entry_001653f0_0x1653f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001653f0_0x1653f0");
#endif

    ctx->pc = 0x1653f0u;

    // 0x1653f0: 0x2e420200  sltiu       $v0, $s2, 0x200
    ctx->pc = 0x1653f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1653f4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1653F4u;
    {
        const bool branch_taken_0x1653f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1653f4) {
            ctx->pc = 0x1653B0u;
            return;
        }
    }
    ctx->pc = 0x1653FCu;
    // 0x1653fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1653fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x165400u;
}
