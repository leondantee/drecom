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

// Function: entry_001b0318
// Address: 0x1b0318 - 0x1b0330
void entry_001b0318_0x1b0318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0318_0x1b0318");
#endif

    ctx->pc = 0x1b0318u;

    // 0x1b0318: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b0318u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b031c: 0x97a404be  lhu         $a0, 0x4BE($sp)
    ctx->pc = 0x1b031cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1214)));
    // 0x1b0320: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1b0320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1b0324: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x1b0324u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0328: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1B0328u;
    {
        const bool branch_taken_0x1b0328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0328) {
            ctx->pc = 0x1B02B8u;
            return;
        }
    }
    ctx->pc = 0x1B0330u;
}
