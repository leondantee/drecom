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

// Function: entry_00141cb0
// Address: 0x141cb0 - 0x141cc0
void entry_00141cb0_0x141cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141cb0_0x141cb0");
#endif

    ctx->pc = 0x141cb0u;

    // 0x141cb0: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x141cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x141cb4: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x141CB4u;
    {
        const bool branch_taken_0x141cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141cb4) {
            ctx->pc = 0x141BDCu;
            return;
        }
    }
    ctx->pc = 0x141CBCu;
    // 0x141cbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x141cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x141cc0u;
}
