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

// Function: entry_002941f0
// Address: 0x2941f0 - 0x29421c
void entry_002941f0_0x2941f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002941f0_0x2941f0");
#endif

    ctx->pc = 0x2941f0u;

    // 0x2941f0: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2941f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x2941f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2941f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2941f8: 0x12830022  beq         $s4, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2941F8u;
    {
        const bool branch_taken_0x2941f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2941f8) {
            ctx->pc = 0x294284u;
            return;
        }
    }
    ctx->pc = 0x294200u;
    // 0x294200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294204: 0x12830012  beq         $s4, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x294204u;
    {
        const bool branch_taken_0x294204 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x294204) {
            ctx->pc = 0x294250u;
            return;
        }
    }
    ctx->pc = 0x29420Cu;
    // 0x29420c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x29420Cu;
    {
        const bool branch_taken_0x29420c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x29420c) {
            ctx->pc = 0x29421Cu;
            return;
        }
    }
    ctx->pc = 0x294214u;
    // 0x294214: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x294214u;
    {
        const bool branch_taken_0x294214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294214) {
            ctx->pc = 0x2942B0u;
            return;
        }
    }
    ctx->pc = 0x29421Cu;
}
