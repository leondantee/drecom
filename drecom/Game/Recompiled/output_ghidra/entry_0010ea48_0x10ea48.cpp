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

// Function: entry_0010ea48
// Address: 0x10ea48 - 0x10ea64
void entry_0010ea48_0x10ea48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea48_0x10ea48");
#endif

    ctx->pc = 0x10ea48u;

label_10ea48:
    // 0x10ea48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10ea4c: 0x0  nop
    ctx->pc = 0x10ea4cu;
    // NOP
    // 0x10ea50: 0x0  nop
    ctx->pc = 0x10ea50u;
    // NOP
    // 0x10ea54: 0x0  nop
    ctx->pc = 0x10ea54u;
    // NOP
    // 0x10ea58: 0x0  nop
    ctx->pc = 0x10ea58u;
    // NOP
    // 0x10ea5c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10EA5Cu;
    {
        const bool branch_taken_0x10ea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10ea5c) {
            ctx->pc = 0x10EA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ea48;
        }
    }
    ctx->pc = 0x10EA64u;
}
