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

// Function: entry_00216fa8
// Address: 0x216fa8 - 0x216fc4
void entry_00216fa8_0x216fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216fa8_0x216fa8");
#endif

    ctx->pc = 0x216fa8u;

label_216fa8:
    // 0x216fa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x216fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x216fac: 0x0  nop
    ctx->pc = 0x216facu;
    // NOP
    // 0x216fb0: 0x0  nop
    ctx->pc = 0x216fb0u;
    // NOP
    // 0x216fb4: 0x0  nop
    ctx->pc = 0x216fb4u;
    // NOP
    // 0x216fb8: 0x0  nop
    ctx->pc = 0x216fb8u;
    // NOP
    // 0x216fbc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x216FBCu;
    {
        const bool branch_taken_0x216fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x216fbc) {
            ctx->pc = 0x216FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216fa8;
        }
    }
    ctx->pc = 0x216FC4u;
}
