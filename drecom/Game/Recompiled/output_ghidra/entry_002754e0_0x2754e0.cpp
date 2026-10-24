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

// Function: entry_002754e0
// Address: 0x2754e0 - 0x2754f8
void entry_002754e0_0x2754e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002754e0_0x2754e0");
#endif

    ctx->pc = 0x2754e0u;

    // 0x2754e0: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x2754e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2754e4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2754E4u;
    {
        const bool branch_taken_0x2754e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2754e4) {
            ctx->pc = 0x2754F8u;
            return;
        }
    }
    ctx->pc = 0x2754ECu;
    // 0x2754ec: 0x2416001d  addiu       $s6, $zero, 0x1D
    ctx->pc = 0x2754ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2754f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2754F0u;
    {
        const bool branch_taken_0x2754f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2754f0) {
            ctx->pc = 0x275500u;
            return;
        }
    }
    ctx->pc = 0x2754F8u;
}
