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

// Function: entry_0010ee78
// Address: 0x10ee78 - 0x10ee94
void entry_0010ee78_0x10ee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ee78_0x10ee78");
#endif

    ctx->pc = 0x10ee78u;

label_10ee78:
    // 0x10ee78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10ee7c: 0x0  nop
    ctx->pc = 0x10ee7cu;
    // NOP
    // 0x10ee80: 0x0  nop
    ctx->pc = 0x10ee80u;
    // NOP
    // 0x10ee84: 0x0  nop
    ctx->pc = 0x10ee84u;
    // NOP
    // 0x10ee88: 0x0  nop
    ctx->pc = 0x10ee88u;
    // NOP
    // 0x10ee8c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10EE8Cu;
    {
        const bool branch_taken_0x10ee8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10ee8c) {
            ctx->pc = 0x10EE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ee78;
        }
    }
    ctx->pc = 0x10EE94u;
}
