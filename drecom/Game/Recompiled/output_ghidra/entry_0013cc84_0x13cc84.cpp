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

// Function: entry_0013cc84
// Address: 0x13cc84 - 0x13cca0
void entry_0013cc84_0x13cc84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cc84_0x13cc84");
#endif

    ctx->pc = 0x13cc84u;

    // 0x13cc84: 0x2a410004  slti        $at, $s2, 0x4
    ctx->pc = 0x13cc84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13cc88: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13CC88u;
    {
        const bool branch_taken_0x13cc88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cc88) {
            ctx->pc = 0x13CCA0u;
            return;
        }
    }
    ctx->pc = 0x13CC90u;
    // 0x13cc90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cc94: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x13cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x13cc98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13CC98u;
    {
        const bool branch_taken_0x13cc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc98) {
            ctx->pc = 0x13CCA8u;
            return;
        }
    }
    ctx->pc = 0x13CCA0u;
}
