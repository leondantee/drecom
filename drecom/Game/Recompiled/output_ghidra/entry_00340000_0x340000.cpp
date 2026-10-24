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

// Function: entry_00340000
// Address: 0x340000 - 0x340018
void entry_00340000_0x340000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340000_0x340000");
#endif

    ctx->pc = 0x340000u;

    // 0x340000: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x340000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x340004: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x340004u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x340008: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x340008u;
    {
        const bool branch_taken_0x340008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340008) {
            ctx->pc = 0x33FFC8u;
            return;
        }
    }
    ctx->pc = 0x340010u;
    // 0x340010: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x340010u;
    {
        const bool branch_taken_0x340010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340010) {
            ctx->pc = 0x340050u;
            return;
        }
    }
    ctx->pc = 0x340018u;
}
