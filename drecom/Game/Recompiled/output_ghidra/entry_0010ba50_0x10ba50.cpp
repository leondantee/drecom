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

// Function: entry_0010ba50
// Address: 0x10ba50 - 0x10ba74
void entry_0010ba50_0x10ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ba50_0x10ba50");
#endif

    ctx->pc = 0x10ba50u;

label_10ba50:
    // 0x10ba50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ba54: 0x0  nop
    ctx->pc = 0x10ba54u;
    // NOP
    // 0x10ba58: 0x0  nop
    ctx->pc = 0x10ba58u;
    // NOP
    // 0x10ba5c: 0x0  nop
    ctx->pc = 0x10ba5cu;
    // NOP
    // 0x10ba60: 0x0  nop
    ctx->pc = 0x10ba60u;
    // NOP
    // 0x10ba64: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BA64u;
    {
        const bool branch_taken_0x10ba64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10ba64) {
            ctx->pc = 0x10BA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ba50;
        }
    }
    ctx->pc = 0x10BA6Cu;
    // 0x10ba6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10BA6Cu;
    {
        const bool branch_taken_0x10ba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA6Cu;
        // 0x10ba70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba6c) {
            ctx->pc = 0x10BA84u;
            return;
        }
    }
    ctx->pc = 0x10BA74u;
}
