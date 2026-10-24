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

// Function: entry_0010f748
// Address: 0x10f748 - 0x10f764
void entry_0010f748_0x10f748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f748_0x10f748");
#endif

    ctx->pc = 0x10f748u;

label_10f748:
    // 0x10f748: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10f748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10f74c: 0x0  nop
    ctx->pc = 0x10f74cu;
    // NOP
    // 0x10f750: 0x0  nop
    ctx->pc = 0x10f750u;
    // NOP
    // 0x10f754: 0x0  nop
    ctx->pc = 0x10f754u;
    // NOP
    // 0x10f758: 0x0  nop
    ctx->pc = 0x10f758u;
    // NOP
    // 0x10f75c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10F75Cu;
    {
        const bool branch_taken_0x10f75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10f75c) {
            ctx->pc = 0x10F748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f748;
        }
    }
    ctx->pc = 0x10F764u;
}
