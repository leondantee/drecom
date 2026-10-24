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

// Function: entry_00116190
// Address: 0x116190 - 0x1161b8
void entry_00116190_0x116190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116190_0x116190");
#endif

    ctx->pc = 0x116190u;

label_116190:
    // 0x116190: 0x8fc30044  lw          $v1, 0x44($fp)
    ctx->pc = 0x116190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x116194: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x116194u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x116198: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x116198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x11619c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1161a0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1161a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1161a4: 0xafc30044  sw          $v1, 0x44($fp)
    ctx->pc = 0x1161a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 3));
    // 0x1161a8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1161A8u;
    {
        const bool branch_taken_0x1161a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1161a8) {
            ctx->pc = 0x116190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116190;
        }
    }
    ctx->pc = 0x1161B0u;
    // 0x1161b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1161B0u;
    {
        const bool branch_taken_0x1161b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161B0u;
        // 0x1161b4: 0x8fc50044  lw          $a1, 0x44($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161b0) {
            ctx->pc = 0x1161C4u;
            return;
        }
    }
    ctx->pc = 0x1161B8u;
}
