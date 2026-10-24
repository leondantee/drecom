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

// Function: entry_0010fe90
// Address: 0x10fe90 - 0x10feac
void entry_0010fe90_0x10fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fe90_0x10fe90");
#endif

    ctx->pc = 0x10fe90u;

label_10fe90:
    // 0x10fe90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10fe94: 0x0  nop
    ctx->pc = 0x10fe94u;
    // NOP
    // 0x10fe98: 0x0  nop
    ctx->pc = 0x10fe98u;
    // NOP
    // 0x10fe9c: 0x0  nop
    ctx->pc = 0x10fe9cu;
    // NOP
    // 0x10fea0: 0x0  nop
    ctx->pc = 0x10fea0u;
    // NOP
    // 0x10fea4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10FEA4u;
    {
        const bool branch_taken_0x10fea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fea4) {
            ctx->pc = 0x10FE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fe90;
        }
    }
    ctx->pc = 0x10FEACu;
}
