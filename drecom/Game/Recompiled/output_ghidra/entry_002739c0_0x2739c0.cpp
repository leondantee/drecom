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

// Function: entry_002739c0
// Address: 0x2739c0 - 0x2739d8
void entry_002739c0_0x2739c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002739c0_0x2739c0");
#endif

    ctx->pc = 0x2739c0u;

    // 0x2739c0: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x2739c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2739c4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2739C4u;
    {
        const bool branch_taken_0x2739c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2739c4) {
            ctx->pc = 0x2739D8u;
            return;
        }
    }
    ctx->pc = 0x2739CCu;
    // 0x2739cc: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x2739ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x2739d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2739D0u;
    {
        const bool branch_taken_0x2739d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2739d0) {
            ctx->pc = 0x2739E0u;
            return;
        }
    }
    ctx->pc = 0x2739D8u;
}
