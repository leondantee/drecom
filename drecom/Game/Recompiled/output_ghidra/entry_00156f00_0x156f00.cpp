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

// Function: entry_00156f00
// Address: 0x156f00 - 0x156f10
void entry_00156f00_0x156f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156f00_0x156f00");
#endif

    ctx->pc = 0x156f00u;

    // 0x156f00: 0x2e42000a  sltiu       $v0, $s2, 0xA
    ctx->pc = 0x156f00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x156f04: 0x1440fddb  bnez        $v0, . + 4 + (-0x225 << 2)
    ctx->pc = 0x156F04u;
    {
        const bool branch_taken_0x156f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156f04) {
            ctx->pc = 0x156674u;
            return;
        }
    }
    ctx->pc = 0x156F0Cu;
    // 0x156f0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x156f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x156f10u;
}
