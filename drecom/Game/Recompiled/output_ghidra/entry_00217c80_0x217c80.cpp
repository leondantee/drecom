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

// Function: entry_00217c80
// Address: 0x217c80 - 0x217ca4
void entry_00217c80_0x217c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217c80_0x217c80");
#endif

    ctx->pc = 0x217c80u;

label_217c80:
    // 0x217c80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x217c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x217c84: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x217c84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x217c88: 0x0  nop
    ctx->pc = 0x217c88u;
    // NOP
    // 0x217c8c: 0x0  nop
    ctx->pc = 0x217c8cu;
    // NOP
    // 0x217c90: 0x0  nop
    ctx->pc = 0x217c90u;
    // NOP
    // 0x217c94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x217C94u;
    {
        const bool branch_taken_0x217c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217c94) {
            ctx->pc = 0x217C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217c80;
        }
    }
    ctx->pc = 0x217C9Cu;
    // 0x217c9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x217C9Cu;
    {
        const bool branch_taken_0x217c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C9Cu;
        // 0x217ca0: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c9c) {
            ctx->pc = 0x217CACu;
            return;
        }
    }
    ctx->pc = 0x217CA4u;
}
