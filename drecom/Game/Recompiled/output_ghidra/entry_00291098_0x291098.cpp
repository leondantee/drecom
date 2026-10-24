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

// Function: entry_00291098
// Address: 0x291098 - 0x2910b4
void entry_00291098_0x291098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291098_0x291098");
#endif

    ctx->pc = 0x291098u;

    // 0x291098: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x291098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29109c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x29109cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2910a0: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2910A0u;
    {
        const bool branch_taken_0x2910a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2910a0) {
            ctx->pc = 0x290FC0u;
            return;
        }
    }
    ctx->pc = 0x2910A8u;
    // 0x2910a8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2910a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2910ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2910ACu;
    {
        const bool branch_taken_0x2910ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2910ac) {
            ctx->pc = 0x2910E8u;
            return;
        }
    }
    ctx->pc = 0x2910B4u;
}
